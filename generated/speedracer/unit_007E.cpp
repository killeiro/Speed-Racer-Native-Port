#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007E[4096] = {
    1, 2, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 0, 10,
    0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 16,
    0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 23,
    0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 30,
    0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 36,
    0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0,
    0, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0,
    0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0,
    0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 73, 0,
    0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78,
    0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0,
    0, 86, 0, 0, 87, 88, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0,
    0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123,
    0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0,
    0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143,
    0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0,
    0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0,
    0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 171,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0,
    0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188,
    0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196,
    0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199,
    0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0,
    0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0,
    0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0,
    222, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0,
    0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 252,
    0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0,
    0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0,
    0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0,
    0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0,
    0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275,
    0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0,
    0, 0, 284, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288,
    0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0,
    0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0,
    0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0,
    0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0,
    0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0,
    0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0,
    0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 375, 0, 0,
    376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0,
    0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 380, 0, 0, 381, 0, 0, 382, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385,
    0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0,
    0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0,
    0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 0,
    405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0,
    0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0,
    0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421,
    0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0,
    0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429,
    0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0,
    0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0,
    0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0,
    0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0,
    0, 0, 0, 447, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0,
    0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0,
    0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0,
    0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0,
    0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 473,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0,
    0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0,
    0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 485,
    0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0,
    489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0,
    0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0,
    0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0,
    0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0,
    0, 0, 511, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0,
};

void unit_007E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002F8000;
    case 2u: goto L_002F8004;
    case 3u: goto L_002F8010;
    case 4u: goto L_002F801C;
    case 5u: goto L_002F8024;
    case 6u: goto L_002F80C0;
    case 7u: goto L_002F80D8;
    case 8u: goto L_002F80E4;
    case 9u: goto L_002F80F0;
    case 10u: goto L_002F80FC;
    case 11u: goto L_002F8108;
    case 12u: goto L_002F8114;
    case 13u: goto L_002F814C;
    case 14u: goto L_002F8164;
    case 15u: goto L_002F8170;
    case 16u: goto L_002F817C;
    case 17u: goto L_002F8188;
    case 18u: goto L_002F8194;
    case 19u: goto L_002F81A0;
    case 20u: goto L_002F81CC;
    case 21u: goto L_002F81E4;
    case 22u: goto L_002F81F0;
    case 23u: goto L_002F81FC;
    case 24u: goto L_002F8208;
    case 25u: goto L_002F8214;
    case 26u: goto L_002F8220;
    case 27u: goto L_002F8258;
    case 28u: goto L_002F8264;
    case 29u: goto L_002F8270;
    case 30u: goto L_002F827C;
    case 31u: goto L_002F8288;
    case 32u: goto L_002F8294;
    case 33u: goto L_002F82CC;
    case 34u: goto L_002F82E4;
    case 35u: goto L_002F82F0;
    case 36u: goto L_002F82FC;
    case 37u: goto L_002F8308;
    case 38u: goto L_002F8314;
    case 39u: goto L_002F8320;
    case 40u: goto L_002F8374;
    case 41u: goto L_002F838C;
    case 42u: goto L_002F8398;
    case 43u: goto L_002F83A4;
    case 44u: goto L_002F83B0;
    case 45u: goto L_002F83BC;
    case 46u: goto L_002F83C8;
    case 47u: goto L_002F83EC;
    case 48u: goto L_002F8404;
    case 49u: goto L_002F8410;
    case 50u: goto L_002F841C;
    case 51u: goto L_002F8448;
    case 52u: goto L_002F8460;
    case 53u: goto L_002F8468;
    case 54u: goto L_002F8494;
    case 55u: goto L_002F84AC;
    case 56u: goto L_002F84B4;
    case 57u: goto L_002F84D4;
    case 58u: goto L_002F84E4;
    case 59u: goto L_002F84F0;
    case 60u: goto L_002F8510;
    case 61u: goto L_002F8528;
    case 62u: goto L_002F8534;
    case 63u: goto L_002F8540;
    case 64u: goto L_002F854C;
    case 65u: goto L_002F8558;
    case 66u: goto L_002F8564;
    case 67u: goto L_002F8588;
    case 68u: goto L_002F85A0;
    case 69u: goto L_002F85AC;
    case 70u: goto L_002F85B8;
    case 71u: goto L_002F85D8;
    case 72u: goto L_002F85F0;
    case 73u: goto L_002F85F8;
    case 74u: goto L_002F861C;
    case 75u: goto L_002F863C;
    case 76u: goto L_002F8654;
    case 77u: goto L_002F865C;
    case 78u: goto L_002F867C;
    case 79u: goto L_002F8694;
    case 80u: goto L_002F869C;
    case 81u: goto L_002F86B8;
    case 82u: goto L_002F86D4;
    case 83u: goto L_002F86E0;
    case 84u: goto L_002F86EC;
    case 85u: goto L_002F86F8;
    case 86u: goto L_002F8704;
    case 87u: goto L_002F8710;
    case 88u: goto L_002F8714;
    case 89u: goto L_002F8718;
    case 90u: goto L_002F8750;
    case 91u: goto L_002F8764;
    case 92u: goto L_002F8774;
    case 93u: goto L_002F8790;
    case 94u: goto L_002F87A4;
    case 95u: goto L_002F87B4;
    case 96u: goto L_002F87D0;
    case 97u: goto L_002F87E0;
    case 98u: goto L_002F8808;
    case 99u: goto L_002F8818;
    case 100u: goto L_002F8830;
    case 101u: goto L_002F8858;
    case 102u: goto L_002F8868;
    case 103u: goto L_002F8880;
    case 104u: goto L_002F88A8;
    case 105u: goto L_002F88B8;
    case 106u: goto L_002F88D0;
    case 107u: goto L_002F88E0;
    case 108u: goto L_002F8928;
    case 109u: goto L_002F8958;
    case 110u: goto L_002F8988;
    case 111u: goto L_002F8998;
    case 112u: goto L_002F89AC;
    case 113u: goto L_002F89BC;
    case 114u: goto L_002F89D0;
    case 115u: goto L_002F89E0;
    case 116u: goto L_002F89F4;
    case 117u: goto L_002F8A04;
    case 118u: goto L_002F8A18;
    case 119u: goto L_002F8A28;
    case 120u: goto L_002F8A34;
    case 121u: goto L_002F8A4C;
    case 122u: goto L_002F8A6C;
    case 123u: goto L_002F8A7C;
    case 124u: goto L_002F8A98;
    case 125u: goto L_002F8AAC;
    case 126u: goto L_002F8ABC;
    case 127u: goto L_002F8AC8;
    case 128u: goto L_002F8AD4;
    case 129u: goto L_002F8AE0;
    case 130u: goto L_002F8AEC;
    case 131u: goto L_002F8B00;
    case 132u: goto L_002F8B30;
    case 133u: goto L_002F8B5C;
    case 134u: goto L_002F8B74;
    case 135u: goto L_002F8B94;
    case 136u: goto L_002F8BA4;
    case 137u: goto L_002F8BC0;
    case 138u: goto L_002F8BD4;
    case 139u: goto L_002F8BE4;
    case 140u: goto L_002F8C18;
    case 141u: goto L_002F8C28;
    case 142u: goto L_002F8C48;
    case 143u: goto L_002F8C7C;
    case 144u: goto L_002F8C8C;
    case 145u: goto L_002F8CAC;
    case 146u: goto L_002F8CB8;
    case 147u: goto L_002F8CCC;
    case 148u: goto L_002F8CFC;
    case 149u: goto L_002F8D28;
    case 150u: goto L_002F8D40;
    case 151u: goto L_002F8D60;
    case 152u: goto L_002F8D70;
    case 153u: goto L_002F8D8C;
    case 154u: goto L_002F8DA0;
    case 155u: goto L_002F8DB0;
    case 156u: goto L_002F8DE4;
    case 157u: goto L_002F8DF4;
    case 158u: goto L_002F8E14;
    case 159u: goto L_002F8E48;
    case 160u: goto L_002F8E58;
    case 161u: goto L_002F8E78;
    case 162u: goto L_002F8E84;
    case 163u: goto L_002F8E98;
    case 164u: goto L_002F8EC8;
    case 165u: goto L_002F8EF4;
    case 166u: goto L_002F8F0C;
    case 167u: goto L_002F8F2C;
    case 168u: goto L_002F8F3C;
    case 169u: goto L_002F8F58;
    case 170u: goto L_002F8F6C;
    case 171u: goto L_002F8F7C;
    case 172u: goto L_002F8FB0;
    case 173u: goto L_002F8FC0;
    case 174u: goto L_002F8FE0;
    case 175u: goto L_002F9014;
    case 176u: goto L_002F9024;
    case 177u: goto L_002F9044;
    case 178u: goto L_002F9050;
    case 179u: goto L_002F9064;
    case 180u: goto L_002F9094;
    case 181u: goto L_002F90C0;
    case 182u: goto L_002F90D8;
    case 183u: goto L_002F90F8;
    case 184u: goto L_002F9108;
    case 185u: goto L_002F9124;
    case 186u: goto L_002F9138;
    case 187u: goto L_002F9148;
    case 188u: goto L_002F917C;
    case 189u: goto L_002F918C;
    case 190u: goto L_002F91AC;
    case 191u: goto L_002F91E0;
    case 192u: goto L_002F91F0;
    case 193u: goto L_002F9210;
    case 194u: goto L_002F9234;
    case 195u: goto L_002F9258;
    case 196u: goto L_002F927C;
    case 197u: goto L_002F92A0;
    case 198u: goto L_002F92CC;
    case 199u: goto L_002F92FC;
    case 200u: goto L_002F930C;
    case 201u: goto L_002F932C;
    case 202u: goto L_002F9358;
    case 203u: goto L_002F9368;
    case 204u: goto L_002F9388;
    case 205u: goto L_002F93B4;
    case 206u: goto L_002F93C4;
    case 207u: goto L_002F93E4;
    case 208u: goto L_002F9410;
    case 209u: goto L_002F9420;
    case 210u: goto L_002F9440;
    case 211u: goto L_002F944C;
    case 212u: goto L_002F953C;
    case 213u: goto L_002F9554;
    case 214u: goto L_002F9560;
    case 215u: goto L_002F956C;
    case 216u: goto L_002F9578;
    case 217u: goto L_002F9584;
    case 218u: goto L_002F9590;
    case 219u: goto L_002F95D0;
    case 220u: goto L_002F95E8;
    case 221u: goto L_002F95F4;
    case 222u: goto L_002F9600;
    case 223u: goto L_002F960C;
    case 224u: goto L_002F9618;
    case 225u: goto L_002F9624;
    case 226u: goto L_002F96C8;
    case 227u: goto L_002F96E0;
    case 228u: goto L_002F96EC;
    case 229u: goto L_002F96F8;
    case 230u: goto L_002F9704;
    case 231u: goto L_002F9710;
    case 232u: goto L_002F971C;
    case 233u: goto L_002F9758;
    case 234u: goto L_002F9780;
    case 235u: goto L_002F9798;
    case 236u: goto L_002F97A4;
    case 237u: goto L_002F97B0;
    case 238u: goto L_002F97BC;
    case 239u: goto L_002F97C8;
    case 240u: goto L_002F97D4;
    case 241u: goto L_002F9800;
    case 242u: goto L_002F9818;
    case 243u: goto L_002F9824;
    case 244u: goto L_002F9830;
    case 245u: goto L_002F983C;
    case 246u: goto L_002F9848;
    case 247u: goto L_002F9854;
    case 248u: goto L_002F98C0;
    case 249u: goto L_002F98D8;
    case 250u: goto L_002F98E4;
    case 251u: goto L_002F98F0;
    case 252u: goto L_002F98FC;
    case 253u: goto L_002F9908;
    case 254u: goto L_002F9914;
    case 255u: goto L_002F9970;
    case 256u: goto L_002F9988;
    case 257u: goto L_002F9994;
    case 258u: goto L_002F99A0;
    case 259u: goto L_002F99AC;
    case 260u: goto L_002F99B8;
    case 261u: goto L_002F99C4;
    case 262u: goto L_002F99EC;
    case 263u: goto L_002F9A04;
    case 264u: goto L_002F9A34;
    case 265u: goto L_002F9A44;
    case 266u: goto L_002F9A64;
    case 267u: goto L_002F9A70;
    case 268u: goto L_002F9A94;
    case 269u: goto L_002F9AAC;
    case 270u: goto L_002F9AD8;
    case 271u: goto L_002F9AE8;
    case 272u: goto L_002F9B08;
    case 273u: goto L_002F9B38;
    case 274u: goto L_002F9B50;
    case 275u: goto L_002F9B7C;
    case 276u: goto L_002F9B8C;
    case 277u: goto L_002F9BAC;
    case 278u: goto L_002F9BD0;
    case 279u: goto L_002F9BE0;
    case 280u: goto L_002F9C10;
    case 281u: goto L_002F9C20;
    case 282u: goto L_002F9C40;
    case 283u: goto L_002F9C64;
    case 284u: goto L_002F9C88;
    case 285u: goto L_002F9C98;
    case 286u: goto L_002F9CA4;
    case 287u: goto L_002F9CCC;
    case 288u: goto L_002F9CFC;
    case 289u: goto L_002F9D0C;
    case 290u: goto L_002F9D2C;
    case 291u: goto L_002F9D58;
    case 292u: goto L_002F9D68;
    case 293u: goto L_002F9D88;
    case 294u: goto L_002F9D98;
    case 295u: goto L_002F9DC4;
    case 296u: goto L_002F9DE8;
    case 297u: goto L_002F9DF8;
    case 298u: goto L_002F9E04;
    case 299u: goto L_002F9E2C;
    case 300u: goto L_002F9E5C;
    case 301u: goto L_002F9E6C;
    case 302u: goto L_002F9E8C;
    case 303u: goto L_002F9EB8;
    case 304u: goto L_002F9EC8;
    case 305u: goto L_002F9EE8;
    case 306u: goto L_002F9EF8;
    case 307u: goto L_002F9F2C;
    case 308u: goto L_002F9F50;
    case 309u: goto L_002F9F60;
    case 310u: goto L_002F9F6C;
    case 311u: goto L_002F9F94;
    case 312u: goto L_002F9FC4;
    case 313u: goto L_002F9FD4;
    case 314u: goto L_002F9FF4;
    case 315u: goto L_002FA020;
    case 316u: goto L_002FA030;
    case 317u: goto L_002FA050;
    case 318u: goto L_002FA060;
    case 319u: goto L_002FA090;
    case 320u: goto L_002FA0B4;
    case 321u: goto L_002FA0C4;
    case 322u: goto L_002FA0D0;
    case 323u: goto L_002FA0F8;
    case 324u: goto L_002FA128;
    case 325u: goto L_002FA138;
    case 326u: goto L_002FA158;
    case 327u: goto L_002FA184;
    case 328u: goto L_002FA194;
    case 329u: goto L_002FA1B4;
    case 330u: goto L_002FA1C4;
    case 331u: goto L_002FA1F4;
    case 332u: goto L_002FA218;
    case 333u: goto L_002FA228;
    case 334u: goto L_002FA234;
    case 335u: goto L_002FA25C;
    case 336u: goto L_002FA28C;
    case 337u: goto L_002FA29C;
    case 338u: goto L_002FA2BC;
    case 339u: goto L_002FA2E8;
    case 340u: goto L_002FA2F8;
    case 341u: goto L_002FA318;
    case 342u: goto L_002FA328;
    case 343u: goto L_002FA384;
    case 344u: goto L_002FA3A8;
    case 345u: goto L_002FA3CC;
    case 346u: goto L_002FA3F0;
    case 347u: goto L_002FA41C;
    case 348u: goto L_002FA44C;
    case 349u: goto L_002FA45C;
    case 350u: goto L_002FA47C;
    case 351u: goto L_002FA4A8;
    case 352u: goto L_002FA4B8;
    case 353u: goto L_002FA4D8;
    case 354u: goto L_002FA504;
    case 355u: goto L_002FA514;
    case 356u: goto L_002FA534;
    case 357u: goto L_002FA560;
    case 358u: goto L_002FA570;
    case 359u: goto L_002FA590;
    case 360u: goto L_002FA5B4;
    case 361u: goto L_002FA5C4;
    case 362u: goto L_002FA5D0;
    case 363u: goto L_002FA5DC;
    case 364u: goto L_002FA604;
    case 365u: goto L_002FA634;
    case 366u: goto L_002FA644;
    case 367u: goto L_002FA664;
    case 368u: goto L_002FA674;
    case 369u: goto L_002FA688;
    case 370u: goto L_002FA6AC;
    case 371u: goto L_002FA6C4;
    case 372u: goto L_002FA6D0;
    case 373u: goto L_002FA6DC;
    case 374u: goto L_002FA6E8;
    case 375u: goto L_002FA6F4;
    case 376u: goto L_002FA700;
    case 377u: goto L_002FA778;
    case 378u: goto L_002FA790;
    case 379u: goto L_002FA79C;
    case 380u: goto L_002FA7A8;
    case 381u: goto L_002FA7B4;
    case 382u: goto L_002FA7C0;
    case 383u: goto L_002FA7CC;
    case 384u: goto L_002FA7E0;
    case 385u: goto L_002FA7FC;
    case 386u: goto L_002FA81C;
    case 387u: goto L_002FA838;
    case 388u: goto L_002FA850;
    case 389u: goto L_002FA878;
    case 390u: goto L_002FA8A0;
    case 391u: goto L_002FA8B0;
    case 392u: goto L_002FA8D0;
    case 393u: goto L_002FA8F4;
    case 394u: goto L_002FA904;
    case 395u: goto L_002FA924;
    case 396u: goto L_002FA948;
    case 397u: goto L_002FA958;
    case 398u: goto L_002FA978;
    case 399u: goto L_002FA988;
    case 400u: goto L_002FA9B8;
    case 401u: goto L_002FA9D0;
    case 402u: goto L_002FA9DC;
    case 403u: goto L_002FA9E8;
    case 404u: goto L_002FA9F4;
    case 405u: goto L_002FAA00;
    case 406u: goto L_002FAA0C;
    case 407u: goto L_002FAA2C;
    case 408u: goto L_002FAA48;
    case 409u: goto L_002FAA54;
    case 410u: goto L_002FAA60;
    case 411u: goto L_002FAA6C;
    case 412u: goto L_002FAA78;
    case 413u: goto L_002FAA84;
    case 414u: goto L_002FAAC0;
    case 415u: goto L_002FAB54;
    case 416u: goto L_002FAB64;
    case 417u: goto L_002FAB70;
    case 418u: goto L_002FAB90;
    case 419u: goto L_002FABA0;
    case 420u: goto L_002FABB0;
    case 421u: goto L_002FAC7C;
    case 422u: goto L_002FAC8C;
    case 423u: goto L_002FACAC;
    case 424u: goto L_002FACC8;
    case 425u: goto L_002FACEC;
    case 426u: goto L_002FAD10;
    case 427u: goto L_002FAD34;
    case 428u: goto L_002FAD58;
    case 429u: goto L_002FAD7C;
    case 430u: goto L_002FADA0;
    case 431u: goto L_002FADC4;
    case 432u: goto L_002FADE8;
    case 433u: goto L_002FAE0C;
    case 434u: goto L_002FAE30;
    case 435u: goto L_002FAE54;
    case 436u: goto L_002FAE78;
    case 437u: goto L_002FAE9C;
    case 438u: goto L_002FAEC0;
    case 439u: goto L_002FAEE8;
    case 440u: goto L_002FAF0C;
    case 441u: goto L_002FAF34;
    case 442u: goto L_002FAF58;
    case 443u: goto L_002FAF80;
    case 444u: goto L_002FAFA4;
    case 445u: goto L_002FAFCC;
    case 446u: goto L_002FAFF0;
    case 447u: goto L_002FB00C;
    case 448u: goto L_002FB014;
    case 449u: goto L_002FB038;
    case 450u: goto L_002FB0C0;
    case 451u: goto L_002FB100;
    case 452u: goto L_002FB188;
    case 453u: goto L_002FB1A0;
    case 454u: goto L_002FB2B8;
    case 455u: goto L_002FB2EC;
    case 456u: goto L_002FB32C;
    case 457u: goto L_002FB33C;
    case 458u: goto L_002FB35C;
    case 459u: goto L_002FB378;
    case 460u: goto L_002FB39C;
    case 461u: goto L_002FB3C0;
    case 462u: goto L_002FB3E4;
    case 463u: goto L_002FB408;
    case 464u: goto L_002FB42C;
    case 465u: goto L_002FB450;
    case 466u: goto L_002FB474;
    case 467u: goto L_002FB498;
    case 468u: goto L_002FB4C4;
    case 469u: goto L_002FB4E8;
    case 470u: goto L_002FB50C;
    case 471u: goto L_002FB530;
    case 472u: goto L_002FB558;
    case 473u: goto L_002FB57C;
    case 474u: goto L_002FB5A4;
    case 475u: goto L_002FB5C8;
    case 476u: goto L_002FB5F0;
    case 477u: goto L_002FB614;
    case 478u: goto L_002FB63C;
    case 479u: goto L_002FB660;
    case 480u: goto L_002FB684;
    case 481u: goto L_002FB68C;
    case 482u: goto L_002FB6B0;
    case 483u: goto L_002FB75C;
    case 484u: goto L_002FB76C;
    case 485u: goto L_002FB77C;
    case 486u: goto L_002FB79C;
    case 487u: goto L_002FB7B8;
    case 488u: goto L_002FB7DC;
    case 489u: goto L_002FB800;
    case 490u: goto L_002FB840;
    case 491u: goto L_002FB864;
    case 492u: goto L_002FB888;
    case 493u: goto L_002FB8AC;
    case 494u: goto L_002FB8D0;
    case 495u: goto L_002FB8F4;
    case 496u: goto L_002FB918;
    case 497u: goto L_002FB93C;
    case 498u: goto L_002FBA6C;
    case 499u: goto L_002FBAE0;
    case 500u: goto L_002FBBB8;
    case 501u: goto L_002FBBEC;
    case 502u: goto L_002FBD14;
    case 503u: goto L_002FBD2C;
    case 504u: goto L_002FBD88;
    case 505u: goto L_002FBDA4;
    case 506u: goto L_002FBDB0;
    case 507u: goto L_002FBE18;
    case 508u: goto L_002FBE78;
    case 509u: goto L_002FBE90;
    case 510u: goto L_002FBEEC;
    case 511u: goto L_002FBF08;
    case 512u: goto L_002FBF14;
    case 513u: goto L_002FBF78;
    case 514u: goto L_002FBFD4;
    case 515u: goto L_002FBFEC;
    default: bad_entry(c, 0x002F8000u); return;
    }
L_002F8000:
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_002F8004:
    set32(c.r[4], c.r[29].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8010u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F8010u) [[unlikely]] return; }
L_002F8010:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F801Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002F801Cu) [[unlikely]] return; }
L_002F801C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F8714; } }
L_002F8024:
    st32((c.r[29].w[0] + 1008u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);  goto L_002F8040; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1012u), 0u);  if (t) { goto L_002F811C; } }
L_002F8040:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 352u)));  goto L_002F806C; }
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F8068; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 1060u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 1056u)));
    st32((c.r[29].w[0] + 1012u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1008u), c.r[2].w[0]);  if (t) { goto L_002F811C; } }
L_002F8068:
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.budget -= 1;
L_002F806C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 1052u)));  goto L_002F8080; }
    st32((c.r[29].w[0] + 1060u), 0u);
    st32((c.r[29].w[0] + 1052u), 0u);
    set32(c.r[6], ld32((c.r[29].w[0] + 1052u)));
    c.budget -= 3;
L_002F8080:
    set32(c.r[3], c.r[29].w[0] + 1012u);
    set32(c.r[2], c.r[29].w[0] + 1008u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[6].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 1028u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 1048u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 1032u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 1044u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 1056u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 1060u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 204u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F80C0u); set32(c.r[5], c.r[29].w[0] + 432u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F80C0u) [[unlikely]] return; }
L_002F80C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 1012u)));  goto L_002F8120; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F80D8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002F80D8u) [[unlikely]] return; }
L_002F80D8:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F80E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002F80E4u) [[unlikely]] return; }
L_002F80E4:
    set32(c.r[4], c.r[29].w[0] + 444u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F80F0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F80F0u) [[unlikely]] return; }
L_002F80F0:
    set32(c.r[4], c.r[29].w[0] + 440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F80FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F80FCu) [[unlikely]] return; }
L_002F80FC:
    set32(c.r[4], c.r[29].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8108u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F8108u) [[unlikely]] return; }
L_002F8108:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8114u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002F8114u) [[unlikely]] return; }
L_002F8114:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F8714; } }
L_002F811C:
    set32(c.r[6], ld32((c.r[29].w[0] + 1012u)));
    c.budget -= 1;
L_002F8120:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 1024u)));  goto L_002F822C; }
    set32(c.r[7], ld32((c.r[29].w[0] + 1024u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002F8228; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 432u);
    set32(c.r[25], ld32((c.r[25].w[0] + 296u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F814Cu); set32(c.r[8], c.r[29].w[0] + 1072u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F814Cu) [[unlikely]] return; }
L_002F814C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[21].w[0] + 662u));  goto L_002F81A8; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8164u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002F8164u) [[unlikely]] return; }
L_002F8164:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8170u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002F8170u) [[unlikely]] return; }
L_002F8170:
    set32(c.r[4], c.r[29].w[0] + 444u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F817Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F817Cu) [[unlikely]] return; }
L_002F817C:
    set32(c.r[4], c.r[29].w[0] + 440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8188u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F8188u) [[unlikely]] return; }
L_002F8188:
    set32(c.r[4], c.r[29].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8194u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F8194u) [[unlikely]] return; }
L_002F8194:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F81A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002F81A0u) [[unlikely]] return; }
L_002F81A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F8714; } }
L_002F81A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 1008u)));  goto L_002F82A0; }
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 1072u)));
    set32(c.r[5], c.r[29].w[0] + 432u);
    set32(c.r[25], ld32((c.r[25].w[0] + 312u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F81CCu); set32(c.r[7], c.r[29].w[0] + 1072u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F81CCu) [[unlikely]] return; }
L_002F81CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F829C; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F81E4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002F81E4u) [[unlikely]] return; }
L_002F81E4:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F81F0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002F81F0u) [[unlikely]] return; }
L_002F81F0:
    set32(c.r[4], c.r[29].w[0] + 444u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F81FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F81FCu) [[unlikely]] return; }
L_002F81FC:
    set32(c.r[4], c.r[29].w[0] + 440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8208u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F8208u) [[unlikely]] return; }
L_002F8208:
    set32(c.r[4], c.r[29].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8214u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F8214u) [[unlikely]] return; }
L_002F8214:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8220u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002F8220u) [[unlikely]] return; }
L_002F8220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F8714; } }
L_002F8228:
    set32(c.r[2], ld32((c.r[29].w[0] + 1024u)));
    c.budget -= 1;
L_002F822C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F823C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1072u), c.r[2].w[0]);  if (t) { goto L_002F829C; } }
L_002F823C:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_002F824C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1072u), c.r[6].w[0]);  if (t) { goto L_002F829C; } }
L_002F824C:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8258u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002F8258u) [[unlikely]] return; }
L_002F8258:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8264u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002F8264u) [[unlikely]] return; }
L_002F8264:
    set32(c.r[4], c.r[29].w[0] + 444u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8270u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F8270u) [[unlikely]] return; }
L_002F8270:
    set32(c.r[4], c.r[29].w[0] + 440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F827Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F827Cu) [[unlikely]] return; }
L_002F827C:
    set32(c.r[4], c.r[29].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8288u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F8288u) [[unlikely]] return; }
L_002F8288:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8294u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002F8294u) [[unlikely]] return; }
L_002F8294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F8714; } }
L_002F829C:
    set32(c.r[6], ld32((c.r[29].w[0] + 1008u)));
    c.budget -= 1;
L_002F82A0:
    set32(c.r[7], ld32((c.r[29].w[0] + 1036u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; st32((c.r[29].w[0] + 1068u), c.r[6].w[0]);  if (t) { goto L_002F8328; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[7], ld32((c.r[29].w[0] + 1036u)));  goto L_002F832C; }
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 432u);
    set32(c.r[25], ld32((c.r[25].w[0] + 296u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F82CCu); set32(c.r[8], c.r[29].w[0] + 1068u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F82CCu) [[unlikely]] return; }
L_002F82CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F8328; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F82E4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002F82E4u) [[unlikely]] return; }
L_002F82E4:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F82F0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002F82F0u) [[unlikely]] return; }
L_002F82F0:
    set32(c.r[4], c.r[29].w[0] + 444u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F82FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F82FCu) [[unlikely]] return; }
L_002F82FC:
    set32(c.r[4], c.r[29].w[0] + 440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8308u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F8308u) [[unlikely]] return; }
L_002F8308:
    set32(c.r[4], c.r[29].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8314u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F8314u) [[unlikely]] return; }
L_002F8314:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8320u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002F8320u) [[unlikely]] return; }
L_002F8320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F8714; } }
L_002F8328:
    set32(c.r[7], ld32((c.r[29].w[0] + 1036u)));
    c.budget -= 1;
L_002F832C:
    set32(c.r[3], c.r[29].w[0] + 1016u);
    set32(c.r[2], c.r[29].w[0] + 384u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[7].d[0]);
    set32(c.r[9], c.r[29].w[0] + 1064u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[7], c.r[29].w[0] + 1092u);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[10], c.r[29].w[0] + 1072u);
    st64((c.r[29].w[0] + 24u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[8], ld32((c.r[29].w[0] + 1080u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 208u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8374u); set32(c.r[11], c.r[29].w[0] + 1068u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F8374u) [[unlikely]] return; }
L_002F8374:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_002F83D0; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F838Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002F838Cu) [[unlikely]] return; }
L_002F838C:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8398u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002F8398u) [[unlikely]] return; }
L_002F8398:
    set32(c.r[4], c.r[29].w[0] + 444u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F83A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F83A4u) [[unlikely]] return; }
L_002F83A4:
    set32(c.r[4], c.r[29].w[0] + 440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F83B0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F83B0u) [[unlikely]] return; }
L_002F83B0:
    set32(c.r[4], c.r[29].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F83BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F83BCu) [[unlikely]] return; }
L_002F83BC:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F83C8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002F83C8u) [[unlikely]] return; }
L_002F83C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F8714; } }
L_002F83D0:
    set32(c.r[4], c.r[4].w[0] - 25792u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 1004u), 0u);  if (t) { goto L_002F83E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 756u), c.r[16].w[0]);  if (t) { goto L_002F83F0; } }
L_002F83E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F83ECu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F83ECu) [[unlikely]] return; }
L_002F83EC:
    st32((c.r[29].w[0] + 756u), c.r[2].w[0]);
    c.budget -= 1;
L_002F83F0:
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8404u); set32(c.r[5], c.r[29].w[0] + 756u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F8404u) [[unlikely]] return; }
L_002F8404:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8410u); set32(c.r[4], c.r[29].w[0] + 756u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F8410u) [[unlikely]] return; }
L_002F8410:
    set32(c.r[4], ld32((c.r[29].w[0] + 432u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F841Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002F841Cu) [[unlikely]] return; }
L_002F841C:
    set32(c.r[2], ld32((c.r[29].w[0] + 1072u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 1068u)));  goto L_002F846C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25769u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F8440; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 752u), c.r[16].w[0]);  if (t) { goto L_002F844C; } }
L_002F8440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8448u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F8448u) [[unlikely]] return; }
L_002F8448:
    st32((c.r[29].w[0] + 752u), c.r[2].w[0]);
    c.budget -= 1;
L_002F844C:
    set32(c.r[4], ld32((c.r[29].w[0] + 432u)));
    set32(c.r[6], c.r[29].w[0] + 752u);
    set32(c.r[5], ld32((c.r[29].w[0] + 1072u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8460u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B1320u; return; } if (c.pc != 0x002F8460u) [[unlikely]] return; }
L_002F8460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8468u); set32(c.r[4], c.r[29].w[0] + 752u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F8468u) [[unlikely]] return; }
L_002F8468:
    set32(c.r[2], ld32((c.r[29].w[0] + 1068u)));
    c.budget -= 1;
L_002F846C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F84B4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25756u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F848C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 748u), c.r[16].w[0]);  if (t) { goto L_002F8498; } }
L_002F848C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8494u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F8494u) [[unlikely]] return; }
L_002F8494:
    st32((c.r[29].w[0] + 748u), c.r[2].w[0]);
    c.budget -= 1;
L_002F8498:
    set32(c.r[4], ld32((c.r[29].w[0] + 432u)));
    set32(c.r[6], c.r[29].w[0] + 748u);
    set32(c.r[5], ld32((c.r[29].w[0] + 1068u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F84ACu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B1320u; return; } if (c.pc != 0x002F84ACu) [[unlikely]] return; }
L_002F84AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F84B4u); set32(c.r[4], c.r[29].w[0] + 748u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F84B4u) [[unlikely]] return; }
L_002F84B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25742u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F84CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 744u), c.r[16].w[0]);  if (t) { goto L_002F84D8; } }
L_002F84CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F84D4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F84D4u) [[unlikely]] return; }
L_002F84D4:
    st32((c.r[29].w[0] + 744u), c.r[2].w[0]);
    c.budget -= 1;
L_002F84D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F84E4u); set32(c.r[5], c.r[29].w[0] + 744u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002F84E4u) [[unlikely]] return; }
L_002F84E4:
    st32((c.r[29].w[0] + 1004u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F84F0u); set32(c.r[4], c.r[29].w[0] + 744u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F84F0u) [[unlikely]] return; }
L_002F84F0:
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 1004u)));
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 280u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8510u); set32(c.r[8], c.r[29].w[0] + 1004u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F8510u) [[unlikely]] return; }
L_002F8510:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_002F856C; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8528u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002F8528u) [[unlikely]] return; }
L_002F8528:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8534u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002F8534u) [[unlikely]] return; }
L_002F8534:
    set32(c.r[4], c.r[29].w[0] + 444u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8540u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F8540u) [[unlikely]] return; }
L_002F8540:
    set32(c.r[4], c.r[29].w[0] + 440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F854Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F854Cu) [[unlikely]] return; }
L_002F854C:
    set32(c.r[4], c.r[29].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8558u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F8558u) [[unlikely]] return; }
L_002F8558:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8564u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002F8564u) [[unlikely]] return; }
L_002F8564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F8714; } }
L_002F856C:
    set32(c.r[4], c.r[4].w[0] - 25730u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F8580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 740u), c.r[16].w[0]);  if (t) { goto L_002F858C; } }
L_002F8580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8588u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F8588u) [[unlikely]] return; }
L_002F8588:
    st32((c.r[29].w[0] + 740u), c.r[2].w[0]);
    c.budget -= 1;
L_002F858C:
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F85A0u); set32(c.r[5], c.r[29].w[0] + 740u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F85A0u) [[unlikely]] return; }
L_002F85A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F85ACu); set32(c.r[4], c.r[29].w[0] + 740u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F85ACu) [[unlikely]] return; }
L_002F85AC:
    set32(c.r[4], ld32((c.r[29].w[0] + 432u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F85B8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002F85B8u) [[unlikely]] return; }
L_002F85B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25706u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F85D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 736u), c.r[16].w[0]);  if (t) { goto L_002F85DC; } }
L_002F85D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F85D8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F85D8u) [[unlikely]] return; }
L_002F85D8:
    st32((c.r[29].w[0] + 736u), c.r[2].w[0]);
    c.budget -= 1;
L_002F85DC:
    set32(c.r[4], ld32((c.r[29].w[0] + 432u)));
    set32(c.r[6], c.r[29].w[0] + 736u);
    set32(c.r[5], ld32((c.r[29].w[0] + 1004u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F85F0u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B1320u; return; } if (c.pc != 0x002F85F0u) [[unlikely]] return; }
L_002F85F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F85F8u); set32(c.r[4], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F85F8u) [[unlikely]] return; }
L_002F85F8:
    set32(c.r[7], ld32((c.r[29].w[0] + 1064u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002F865C; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 432u);
    set32(c.r[25], ld32((c.r[25].w[0] + 284u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F861Cu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F861Cu) [[unlikely]] return; }
L_002F861C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25695u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F8634; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 732u), c.r[16].w[0]);  if (t) { goto L_002F8640; } }
L_002F8634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F863Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F863Cu) [[unlikely]] return; }
L_002F863C:
    st32((c.r[29].w[0] + 732u), c.r[2].w[0]);
    c.budget -= 1;
L_002F8640:
    set32(c.r[4], ld32((c.r[29].w[0] + 432u)));
    set32(c.r[6], c.r[29].w[0] + 732u);
    set32(c.r[5], ld32((c.r[29].w[0] + 1064u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8654u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B1320u; return; } if (c.pc != 0x002F8654u) [[unlikely]] return; }
L_002F8654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F865Cu); set32(c.r[4], c.r[29].w[0] + 732u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F865Cu) [[unlikely]] return; }
L_002F865C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25742u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F8674; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 728u), c.r[16].w[0]);  if (t) { goto L_002F8680; } }
L_002F8674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F867Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F867Cu) [[unlikely]] return; }
L_002F867C:
    st32((c.r[29].w[0] + 728u), c.r[2].w[0]);
    c.budget -= 1;
L_002F8680:
    set32(c.r[7], ld32((c.r[29].w[0] + 380u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 432u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8694u); set32(c.r[5], c.r[29].w[0] + 728u);  if (depth < kMaxDepth) unit_006C(c, 181u, depth + 1u); else { c.pc = 0x002B1220u; return; } if (c.pc != 0x002F8694u) [[unlikely]] return; }
L_002F8694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F869Cu); set32(c.r[4], c.r[29].w[0] + 728u);  if (depth < kMaxDepth) unit_0075(c, 251u, depth + 1u); else { c.pc = 0x002D5420u; return; } if (c.pc != 0x002F869Cu) [[unlikely]] return; }
L_002F869C:
    set32(c.r[4], ld32((c.r[29].w[0] + 432u)));
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 464u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F86B8u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F86B8u) [[unlikely]] return; }
L_002F86B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 448u);  goto L_002F86D8; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F86D4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002F86D4u) [[unlikely]] return; }
L_002F86D4:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 1;
L_002F86D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F86E0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002F86E0u) [[unlikely]] return; }
L_002F86E0:
    set32(c.r[4], c.r[29].w[0] + 444u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F86ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F86ECu) [[unlikely]] return; }
L_002F86EC:
    set32(c.r[4], c.r[29].w[0] + 440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F86F8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F86F8u) [[unlikely]] return; }
L_002F86F8:
    set32(c.r[4], c.r[29].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8704u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F8704u) [[unlikely]] return; }
L_002F8704:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8710u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002F8710u) [[unlikely]] return; }
L_002F8710:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002F8714:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    c.budget -= 1;
L_002F8718:
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1104u);  c.pc = t; return; }
L_002F8750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8764u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F8764u) [[unlikely]] return; }
L_002F8764:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8774u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F8774u) [[unlikely]] return; }
L_002F8774:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F8790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F87A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F87A4u) [[unlikely]] return; }
L_002F87A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F87B4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F87B4u) [[unlikely]] return; }
L_002F87B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002F87D4; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F87D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F87D0u) [[unlikely]] return; }
L_002F87D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002F87D4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F87E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_002F8818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8808u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F8808u) [[unlikely]] return; }
L_002F8808:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8818u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F8818u) [[unlikely]] return; }
L_002F8818:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F8830:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_002F8868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8858u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F8858u) [[unlikely]] return; }
L_002F8858:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8868u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F8868u) [[unlikely]] return; }
L_002F8868:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F8880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_002F88B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F88A8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F88A8u) [[unlikely]] return; }
L_002F88A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F88B8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F88B8u) [[unlikely]] return; }
L_002F88B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F88D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_002F88E0:
    set32(c.r[29], c.r[29].w[0] - 832u);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st32((c.r[29].w[0] + 268u), c.r[6].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[29].w[0] + 352u);
    set32(c.r[6], 0u + 48u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8928u); st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 87u, depth + 1u); else { c.pc = 0x002A8D00u; return; } if (c.pc != 0x002F8928u) [[unlikely]] return; }
L_002F8928:
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st8((c.r[29].w[0] + 831u), static_cast<std::uint8_t>(0u));  goto L_002F893C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FAA88; } }
L_002F893C:
    set32(c.r[5], c.r[29].w[0] + 352u);
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8958u); set32(c.r[7], c.r[29].w[0] + 831u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F8958u) [[unlikely]] return; }
L_002F8958:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 831u));  goto L_002F8968; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));  if (t) { goto L_002FAA8C; } }
L_002F8968:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002F8978; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FAA88; } }
L_002F8978:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 320u), 0u);  if (t) { goto L_002F8998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8988u); set32(c.r[16], ld32((c.r[29].w[0] + 320u)));  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F8988u) [[unlikely]] return; }
L_002F8988:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8998u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F8998u) [[unlikely]] return; }
L_002F8998:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 324u), 0u);  if (t) { goto L_002F89BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F89ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F89ACu) [[unlikely]] return; }
L_002F89AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F89BCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F89BCu) [[unlikely]] return; }
L_002F89BC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 328u), 0u);  if (t) { goto L_002F89E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F89D0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F89D0u) [[unlikely]] return; }
L_002F89D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F89E0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F89E0u) [[unlikely]] return; }
L_002F89E0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 332u), 0u);  if (t) { goto L_002F8A04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F89F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F89F4u) [[unlikely]] return; }
L_002F89F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A04u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F8A04u) [[unlikely]] return; }
L_002F8A04:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 336u), 0u);  if (t) { goto L_002F8A28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A18u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F8A18u) [[unlikely]] return; }
L_002F8A18:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A28u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F8A28u) [[unlikely]] return; }
L_002F8A28:
    set32(c.r[4], 0u + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002F8A34u) [[unlikely]] return; }
L_002F8A34:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 320u)));  goto L_002F8A54; }
    set32(c.r[5], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 328u, depth + 1u); else { c.pc = 0x002B2550u; return; } if (c.pc != 0x002F8A4Cu) [[unlikely]] return; }
L_002F8A4C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 2;
L_002F8A54:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[17].d[0]) { set32(c.r[4], c.r[29].w[0] + 756u);  goto L_002F8AC0; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 320u), c.r[17].w[0]);  goto L_002F8A9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A6Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F8A6Cu) [[unlikely]] return; }
L_002F8A6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A7Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F8A7Cu) [[unlikely]] return; }
L_002F8A7C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F8A98; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F8A98u) [[unlikely]] return; }
L_002F8A98:
    st32((c.r[29].w[0] + 320u), c.r[17].w[0]);
    c.budget -= 1;
L_002F8A9C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F8ABC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8AACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F8AACu) [[unlikely]] return; }
L_002F8AAC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8ABCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F8ABCu) [[unlikely]] return; }
L_002F8ABC:
    set32(c.r[4], c.r[29].w[0] + 756u);
    c.budget -= 1;
L_002F8AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8AC8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 118u, depth + 1u); else { c.pc = 0x00304B20u; return; } if (c.pc != 0x002F8AC8u) [[unlikely]] return; }
L_002F8AC8:
    set32(c.r[16], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8AD4u); set32(c.r[4], c.r[29].w[0] + 756u);  if (depth < kMaxDepth) unit_0084(c, 54u, depth + 1u); else { c.pc = 0x003105F0u; return; } if (c.pc != 0x002F8AD4u) [[unlikely]] return; }
L_002F8AD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8AE0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 246u, depth + 1u); else { c.pc = 0x002AD860u; return; } if (c.pc != 0x002F8AE0u) [[unlikely]] return; }
L_002F8AE0:
    set32(c.r[4], c.r[29].w[0] + 756u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8AECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x002F8AECu) [[unlikely]] return; }
L_002F8AEC:
    set32(c.r[4], 0u + 52u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8B00u); c.r[21].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002F8B00u) [[unlikely]] return; }
L_002F8B00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F8B78; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25682u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F8B28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 748u), c.r[2].w[0]);  if (t) { goto L_002F8B34; } }
L_002F8B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8B30u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F8B30u) [[unlikely]] return; }
L_002F8B30:
    st32((c.r[29].w[0] + 748u), c.r[2].w[0]);
    c.budget -= 1;
L_002F8B34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25834u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[21], 0u + 1u);  if (t) { goto L_002F8B54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 752u), c.r[2].w[0]);  if (t) { goto L_002F8B60; } }
L_002F8B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8B5Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F8B5Cu) [[unlikely]] return; }
L_002F8B5C:
    st32((c.r[29].w[0] + 752u), c.r[2].w[0]);
    c.budget -= 1;
L_002F8B60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 748u);
    set32(c.r[6], c.r[29].w[0] + 752u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8B74u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 347u, depth + 1u); else { c.pc = 0x002B6960u; return; } if (c.pc != 0x002F8B74u) [[unlikely]] return; }
L_002F8B74:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F8B78:
    set32(c.r[16], ld32((c.r[29].w[0] + 332u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[17].d[0];  if (t) { goto L_002F8BE4; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 332u), c.r[17].w[0]);  goto L_002F8BC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8B94u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F8B94u) [[unlikely]] return; }
L_002F8B94:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8BA4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F8BA4u) [[unlikely]] return; }
L_002F8BA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F8BC0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8BC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F8BC0u) [[unlikely]] return; }
L_002F8BC0:
    st32((c.r[29].w[0] + 332u), c.r[17].w[0]);
    c.budget -= 1;
L_002F8BC4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F8BE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8BD4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F8BD4u) [[unlikely]] return; }
L_002F8BD4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8BE4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F8BE4u) [[unlikely]] return; }
L_002F8BE4:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002F8C48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 748u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F8C48; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8C18u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F8C18u) [[unlikely]] return; }
L_002F8C18:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8C28u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F8C28u) [[unlikely]] return; }
L_002F8C28:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F8C48; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8C48u); set32(c.r[5], c.r[29].w[0] + 748u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F8C48u) [[unlikely]] return; }
L_002F8C48:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 320u)));  goto L_002F8CB0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 752u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F8CAC; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8C7Cu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F8C7Cu) [[unlikely]] return; }
L_002F8C7C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8C8Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F8C8Cu) [[unlikely]] return; }
L_002F8C8C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F8CAC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8CACu); set32(c.r[5], c.r[29].w[0] + 752u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F8CACu) [[unlikely]] return; }
L_002F8CAC:
    set32(c.r[4], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 1;
L_002F8CB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8CB8u); set32(c.r[5], ld32((c.r[29].w[0] + 332u)));  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002F8CB8u) [[unlikely]] return; }
L_002F8CB8:
    set32(c.r[4], 0u + 52u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8CCCu); c.r[21].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002F8CCCu) [[unlikely]] return; }
L_002F8CCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F8D44; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25876u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F8CF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 740u), c.r[2].w[0]);  if (t) { goto L_002F8D00; } }
L_002F8CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8CFCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F8CFCu) [[unlikely]] return; }
L_002F8CFC:
    st32((c.r[29].w[0] + 740u), c.r[2].w[0]);
    c.budget -= 1;
L_002F8D00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25867u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[21], 0u + 1u);  if (t) { goto L_002F8D20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 744u), c.r[2].w[0]);  if (t) { goto L_002F8D2C; } }
L_002F8D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8D28u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F8D28u) [[unlikely]] return; }
L_002F8D28:
    st32((c.r[29].w[0] + 744u), c.r[2].w[0]);
    c.budget -= 1;
L_002F8D2C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 740u);
    set32(c.r[6], c.r[29].w[0] + 744u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8D40u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 347u, depth + 1u); else { c.pc = 0x002B6960u; return; } if (c.pc != 0x002F8D40u) [[unlikely]] return; }
L_002F8D40:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F8D44:
    set32(c.r[16], ld32((c.r[29].w[0] + 328u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[17].d[0];  if (t) { goto L_002F8DB0; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 328u), c.r[17].w[0]);  goto L_002F8D90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8D60u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F8D60u) [[unlikely]] return; }
L_002F8D60:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8D70u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F8D70u) [[unlikely]] return; }
L_002F8D70:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F8D8C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8D8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F8D8Cu) [[unlikely]] return; }
L_002F8D8C:
    st32((c.r[29].w[0] + 328u), c.r[17].w[0]);
    c.budget -= 1;
L_002F8D90:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F8DB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8DA0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F8DA0u) [[unlikely]] return; }
L_002F8DA0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8DB0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F8DB0u) [[unlikely]] return; }
L_002F8DB0:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002F8E14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 740u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F8E14; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8DE4u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F8DE4u) [[unlikely]] return; }
L_002F8DE4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8DF4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F8DF4u) [[unlikely]] return; }
L_002F8DF4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F8E14; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8E14u); set32(c.r[5], c.r[29].w[0] + 740u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F8E14u) [[unlikely]] return; }
L_002F8E14:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 320u)));  goto L_002F8E7C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 744u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F8E78; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8E48u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F8E48u) [[unlikely]] return; }
L_002F8E48:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8E58u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F8E58u) [[unlikely]] return; }
L_002F8E58:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F8E78; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8E78u); set32(c.r[5], c.r[29].w[0] + 744u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F8E78u) [[unlikely]] return; }
L_002F8E78:
    set32(c.r[4], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 1;
L_002F8E7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8E84u); set32(c.r[5], ld32((c.r[29].w[0] + 328u)));  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002F8E84u) [[unlikely]] return; }
L_002F8E84:
    set32(c.r[4], 0u + 52u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8E98u); c.r[21].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002F8E98u) [[unlikely]] return; }
L_002F8E98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F8F10; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25859u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F8EC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 732u), c.r[2].w[0]);  if (t) { goto L_002F8ECC; } }
L_002F8EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8EC8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F8EC8u) [[unlikely]] return; }
L_002F8EC8:
    st32((c.r[29].w[0] + 732u), c.r[2].w[0]);
    c.budget -= 1;
L_002F8ECC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25851u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[21], 0u + 1u);  if (t) { goto L_002F8EEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 736u), c.r[2].w[0]);  if (t) { goto L_002F8EF8; } }
L_002F8EEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8EF4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F8EF4u) [[unlikely]] return; }
L_002F8EF4:
    st32((c.r[29].w[0] + 736u), c.r[2].w[0]);
    c.budget -= 1;
L_002F8EF8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 732u);
    set32(c.r[6], c.r[29].w[0] + 736u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8F0Cu); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 347u, depth + 1u); else { c.pc = 0x002B6960u; return; } if (c.pc != 0x002F8F0Cu) [[unlikely]] return; }
L_002F8F0C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F8F10:
    set32(c.r[16], ld32((c.r[29].w[0] + 324u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[17].d[0];  if (t) { goto L_002F8F7C; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 324u), c.r[17].w[0]);  goto L_002F8F5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8F2Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F8F2Cu) [[unlikely]] return; }
L_002F8F2C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8F3Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F8F3Cu) [[unlikely]] return; }
L_002F8F3C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F8F58; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8F58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F8F58u) [[unlikely]] return; }
L_002F8F58:
    st32((c.r[29].w[0] + 324u), c.r[17].w[0]);
    c.budget -= 1;
L_002F8F5C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F8F7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8F6Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F8F6Cu) [[unlikely]] return; }
L_002F8F6C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8F7Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F8F7Cu) [[unlikely]] return; }
L_002F8F7C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002F8FE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 732u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F8FE0; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8FB0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F8FB0u) [[unlikely]] return; }
L_002F8FB0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8FC0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F8FC0u) [[unlikely]] return; }
L_002F8FC0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F8FE0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8FE0u); set32(c.r[5], c.r[29].w[0] + 732u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F8FE0u) [[unlikely]] return; }
L_002F8FE0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 320u)));  goto L_002F9048; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 736u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F9044; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9014u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F9014u) [[unlikely]] return; }
L_002F9014:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9024u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F9024u) [[unlikely]] return; }
L_002F9024:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F9044; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9044u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F9044u) [[unlikely]] return; }
L_002F9044:
    set32(c.r[4], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 1;
L_002F9048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9050u); set32(c.r[5], ld32((c.r[29].w[0] + 324u)));  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002F9050u) [[unlikely]] return; }
L_002F9050:
    set32(c.r[4], 0u + 52u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9064u); c.r[21].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002F9064u) [[unlikely]] return; }
L_002F9064:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F90DC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25844u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F908C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 724u), c.r[2].w[0]);  if (t) { goto L_002F9098; } }
L_002F908C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9094u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F9094u) [[unlikely]] return; }
L_002F9094:
    st32((c.r[29].w[0] + 724u), c.r[2].w[0]);
    c.budget -= 1;
L_002F9098:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25834u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[21], 0u + 1u);  if (t) { goto L_002F90B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 728u), c.r[2].w[0]);  if (t) { goto L_002F90C4; } }
L_002F90B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F90C0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F90C0u) [[unlikely]] return; }
L_002F90C0:
    st32((c.r[29].w[0] + 728u), c.r[2].w[0]);
    c.budget -= 1;
L_002F90C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 724u);
    set32(c.r[6], c.r[29].w[0] + 728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F90D8u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 331u, depth + 1u); else { c.pc = 0x002B6760u; return; } if (c.pc != 0x002F90D8u) [[unlikely]] return; }
L_002F90D8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F90DC:
    set32(c.r[16], ld32((c.r[29].w[0] + 336u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[17].d[0];  if (t) { goto L_002F9148; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 336u), c.r[17].w[0]);  goto L_002F9128; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F90F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F90F8u) [[unlikely]] return; }
L_002F90F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9108u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F9108u) [[unlikely]] return; }
L_002F9108:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F9124; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9124u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F9124u) [[unlikely]] return; }
L_002F9124:
    st32((c.r[29].w[0] + 336u), c.r[17].w[0]);
    c.budget -= 1;
L_002F9128:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F9148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9138u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F9138u) [[unlikely]] return; }
L_002F9138:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9148u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F9148u) [[unlikely]] return; }
L_002F9148:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002F91AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 724u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F91AC; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F917Cu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F917Cu) [[unlikely]] return; }
L_002F917C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F918Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F918Cu) [[unlikely]] return; }
L_002F918C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F91AC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F91ACu); set32(c.r[5], c.r[29].w[0] + 724u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F91ACu) [[unlikely]] return; }
L_002F91AC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002F9210; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 728u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F9210; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F91E0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F91E0u) [[unlikely]] return; }
L_002F91E0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F91F0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F91F0u) [[unlikely]] return; }
L_002F91F0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F9210; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9210u); set32(c.r[5], c.r[29].w[0] + 728u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F9210u) [[unlikely]] return; }
L_002F9210:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28421u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F922C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F9234; } }
L_002F922C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9234u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F9234u) [[unlikely]] return; }
L_002F9234:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26163u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 720u), c.r[2].w[0]);  if (t) { goto L_002F9250; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F9258; } }
L_002F9250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9258u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F9258u) [[unlikely]] return; }
L_002F9258:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26148u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 716u), c.r[2].w[0]);  if (t) { goto L_002F9274; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F927C; } }
L_002F9274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F927Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F927Cu) [[unlikely]] return; }
L_002F927C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25827u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 712u), c.r[2].w[0]);  if (t) { goto L_002F9298; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F92A0; } }
L_002F9298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F92A0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F92A0u) [[unlikely]] return; }
L_002F92A0:
    st32((c.r[29].w[0] + 708u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 720u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], c.r[29].w[0] + 716u);
    set32(c.r[4], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[7], c.r[29].w[0] + 712u);
    set32(c.r[8], c.r[29].w[0] + 708u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F92CCu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 20u, depth + 1u); else { c.pc = 0x002B4140u; return; } if (c.pc != 0x002F92CCu) [[unlikely]] return; }
L_002F92CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 708u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F932C; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F92FCu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F92FCu) [[unlikely]] return; }
L_002F92FC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F930Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F930Cu) [[unlikely]] return; }
L_002F930C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F932C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F932Cu); set32(c.r[5], c.r[29].w[0] + 708u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F932Cu) [[unlikely]] return; }
L_002F932C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 712u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F9388; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9358u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F9358u) [[unlikely]] return; }
L_002F9358:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9368u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F9368u) [[unlikely]] return; }
L_002F9368:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F9388; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9388u); set32(c.r[5], c.r[29].w[0] + 712u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F9388u) [[unlikely]] return; }
L_002F9388:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 716u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F93E4; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F93B4u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F93B4u) [[unlikely]] return; }
L_002F93B4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F93C4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F93C4u) [[unlikely]] return; }
L_002F93C4:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F93E4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F93E4u); set32(c.r[5], c.r[29].w[0] + 716u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F93E4u) [[unlikely]] return; }
L_002F93E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 720u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 320u)));  goto L_002F9444; }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9410u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F9410u) [[unlikely]] return; }
L_002F9410:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9420u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F9420u) [[unlikely]] return; }
L_002F9420:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F9440; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9440u); set32(c.r[5], c.r[29].w[0] + 720u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F9440u) [[unlikely]] return; }
L_002F9440:
    set32(c.r[4], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 1;
L_002F9444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F944Cu); set32(c.r[5], ld32((c.r[29].w[0] + 336u)));  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002F944Cu) [[unlikely]] return; }
L_002F944C:
    st32((c.r[29].w[0] + 824u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    st32((c.r[29].w[0] + 820u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st32((c.r[29].w[0] + 816u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00F00000u);
    st32((c.r[29].w[0] + 812u), 0u);
    set32(c.r[4], 0u + 3u);
    st32((c.r[29].w[0] + 808u), 0u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[19].w[0] + 12u)));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    set32(c.r[30], c.r[5].w[0] >> 16);
    set32(c.r[3], c.r[3].w[0] >> 25);
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[5].d[0] = c.r[7].d[0] & 61440ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[22], c.r[5].w[0] >> 12);
    c.r[5].d[0] = c.r[2].d[0] & 256ull;
    set32(c.r[23], c.r[6].w[0] >> 20);
    c.r[21].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] >> 8);
    set32(c.r[3], c.r[22].w[0] + c.r[23].w[0]);
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    set32(c.r[3], c.r[30].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[2].d[0] & 14336ull;
    set32(c.r[17], c.r[3].w[0] >> 11);
    c.budget -= 33;
    { const bool t = c.r[17].d[0] == c.r[4].d[0]; c.r[18].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_002F94F0; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[3].d[0]) { c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_002F94F4; }
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] & 1536ull;  goto L_002F94F8; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002F94F4; } }
L_002F94F0:
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002F94F4:
    c.r[2].d[0] = c.r[2].d[0] & 1536ull;
    c.budget -= 1;
L_002F94F8:
    set32(c.r[2], c.r[2].w[0] >> 9);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 240u), c.r[2].w[0]);  if (t) { goto L_002F9508; } }
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002F9508:
    set32(c.r[2], c.r[29].w[0] + 820u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 816u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[10], c.r[29].w[0] + 824u);
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F953Cu); set32(c.r[11], c.r[29].w[0] + 808u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F953Cu) [[unlikely]] return; }
L_002F953C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 3u);  goto L_002F9598; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9554u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002F9554u) [[unlikely]] return; }
L_002F9554:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9560u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002F9560u) [[unlikely]] return; }
L_002F9560:
    set32(c.r[4], c.r[29].w[0] + 332u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F956Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F956Cu) [[unlikely]] return; }
L_002F956C:
    set32(c.r[4], c.r[29].w[0] + 328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9578u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F9578u) [[unlikely]] return; }
L_002F9578:
    set32(c.r[4], c.r[29].w[0] + 324u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9584u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F9584u) [[unlikely]] return; }
L_002F9584:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9590u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002F9590u) [[unlikely]] return; }
L_002F9590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FAA88; } }
L_002F9598:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002F95B0; }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[19].w[0] + 12u)));  goto L_002F9630; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_002F95B0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 820u)));
    set32(c.r[5], c.r[29].w[0] + 320u);
    set32(c.r[8], ld32((c.r[29].w[0] + 816u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 172u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F95D0u); set32(c.r[9], c.r[29].w[0] + 812u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F95D0u) [[unlikely]] return; }
L_002F95D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F962C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F95E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002F95E8u) [[unlikely]] return; }
L_002F95E8:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F95F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002F95F4u) [[unlikely]] return; }
L_002F95F4:
    set32(c.r[4], c.r[29].w[0] + 332u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9600u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F9600u) [[unlikely]] return; }
L_002F9600:
    set32(c.r[4], c.r[29].w[0] + 328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F960Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F960Cu) [[unlikely]] return; }
L_002F960C:
    set32(c.r[4], c.r[29].w[0] + 324u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9618u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F9618u) [[unlikely]] return; }
L_002F9618:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9624u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002F9624u) [[unlikely]] return; }
L_002F9624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FAA88; } }
L_002F962C:
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 1;
L_002F9630:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0C000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] >> 30);
    set32(c.r[7], c.r[4].w[0] >> 26);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] >> 28);  if (t) { goto L_002FA674; } }
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 804u), 0u);  goto L_002F9670; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);  goto L_002FA330; }
    st32((c.r[29].w[0] + 804u), 0u);
    c.budget -= 1;
L_002F9670:
    st32((c.r[29].w[0] + 800u), 0u);
    st32((c.r[29].w[0] + 796u), 0u);
    st32((c.r[29].w[0] + 792u), 0u);
    st32((c.r[29].w[0] + 788u), 0u);
    c.budget -= 6;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[29].w[0] + 784u), 0u);  if (t) { goto L_002F9724; } }
    set32(c.r[2], c.r[29].w[0] + 792u);
    set32(c.r[3], c.r[29].w[0] + 788u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 784u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[5], c.r[29].w[0] + 320u);
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[29].w[0] + 804u);
    set32(c.r[10], c.r[29].w[0] + 800u);
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F96C8u); set32(c.r[11], c.r[29].w[0] + 796u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F96C8u) [[unlikely]] return; }
L_002F96C8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], 0u + 1u);  goto L_002F9728; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F96E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002F96E0u) [[unlikely]] return; }
L_002F96E0:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F96ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002F96ECu) [[unlikely]] return; }
L_002F96EC:
    set32(c.r[4], c.r[29].w[0] + 332u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F96F8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F96F8u) [[unlikely]] return; }
L_002F96F8:
    set32(c.r[4], c.r[29].w[0] + 328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9704u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F9704u) [[unlikely]] return; }
L_002F9704:
    set32(c.r[4], c.r[29].w[0] + 324u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9710u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F9710u) [[unlikely]] return; }
L_002F9710:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F971Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002F971Cu) [[unlikely]] return; }
L_002F971C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FAA88; } }
L_002F9724:
    set32(c.r[7], 0u + 1u);
    c.budget -= 1;
L_002F9728:
    st32((c.r[29].w[0] + 780u), 0u);
    st32((c.r[29].w[0] + 776u), 0u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[7].d[0]; st32((c.r[29].w[0] + 772u), 0u);  if (t) { goto L_002F991C; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[6], 0u + 87u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9758u); c.r[9].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F9758u) [[unlikely]] return; }
L_002F9758:
    st32((c.r[29].w[0] + 772u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 820u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 816u)));  goto L_002F97E0; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 320u);
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9780u); set32(c.r[6], c.r[29].w[0] + 820u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F9780u) [[unlikely]] return; }
L_002F9780:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F97DC; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9798u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002F9798u) [[unlikely]] return; }
L_002F9798:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F97A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002F97A4u) [[unlikely]] return; }
L_002F97A4:
    set32(c.r[4], c.r[29].w[0] + 332u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F97B0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F97B0u) [[unlikely]] return; }
L_002F97B0:
    set32(c.r[4], c.r[29].w[0] + 328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F97BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F97BCu) [[unlikely]] return; }
L_002F97BC:
    set32(c.r[4], c.r[29].w[0] + 324u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F97C8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F97C8u) [[unlikely]] return; }
L_002F97C8:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F97D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002F97D4u) [[unlikely]] return; }
L_002F97D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FAA88; } }
L_002F97DC:
    set32(c.r[2], ld32((c.r[29].w[0] + 816u)));
    c.budget -= 1;
L_002F97E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 824u)));  goto L_002F9860; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 320u);
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9800u); set32(c.r[6], c.r[29].w[0] + 816u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F9800u) [[unlikely]] return; }
L_002F9800:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F985C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9818u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002F9818u) [[unlikely]] return; }
L_002F9818:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9824u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002F9824u) [[unlikely]] return; }
L_002F9824:
    set32(c.r[4], c.r[29].w[0] + 332u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9830u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F9830u) [[unlikely]] return; }
L_002F9830:
    set32(c.r[4], c.r[29].w[0] + 328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F983Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F983Cu) [[unlikely]] return; }
L_002F983C:
    set32(c.r[4], c.r[29].w[0] + 324u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9848u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F9848u) [[unlikely]] return; }
L_002F9848:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9854u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002F9854u) [[unlikely]] return; }
L_002F9854:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FAA88; } }
L_002F985C:
    set32(c.r[5], ld32((c.r[29].w[0] + 824u)));
    c.budget -= 1;
L_002F9860:
    set32(c.r[12], c.r[29].w[0] + 772u);
    set32(c.r[3], c.r[29].w[0] + 780u);
    set32(c.r[2], c.r[29].w[0] + 776u);
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[5].d[0]);
    c.r[9].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[13], ld32((c.r[29].w[0] + 820u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 320u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[13].d[0]);
    set32(c.r[13], ld32((c.r[29].w[0] + 816u)));
    st64((c.r[29].w[0] + 16u), c.r[13].d[0]);
    set32(c.r[13], ld32((c.r[29].w[0] + 796u)));
    st64((c.r[29].w[0] + 24u), c.r[13].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[12].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[2].d[0]);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 268u)));
    c.budget -= 24;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F98C0u); c.r[11].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F98C0u) [[unlikely]] return; }
L_002F98C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F991C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F98D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002F98D8u) [[unlikely]] return; }
L_002F98D8:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F98E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002F98E4u) [[unlikely]] return; }
L_002F98E4:
    set32(c.r[4], c.r[29].w[0] + 332u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F98F0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F98F0u) [[unlikely]] return; }
L_002F98F0:
    set32(c.r[4], c.r[29].w[0] + 328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F98FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F98FCu) [[unlikely]] return; }
L_002F98FC:
    set32(c.r[4], c.r[29].w[0] + 324u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9908u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F9908u) [[unlikely]] return; }
L_002F9908:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9914u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002F9914u) [[unlikely]] return; }
L_002F9914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FAA88; } }
L_002F991C:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 780u)));  goto L_002F9F00; }
    set32(c.r[6], ld32((c.r[29].w[0] + 772u)));
    set32(c.r[3], c.r[29].w[0] + 768u);
    st32((c.r[29].w[0] + 768u), 0u);
    set32(c.r[2], c.r[29].w[0] + 764u);
    st32((c.r[29].w[0] + 764u), 0u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[6].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 788u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 804u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 792u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 800u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 776u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 780u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 204u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9970u); set32(c.r[5], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F9970u) [[unlikely]] return; }
L_002F9970:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_002F99CC; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9988u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002F9988u) [[unlikely]] return; }
L_002F9988:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9994u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002F9994u) [[unlikely]] return; }
L_002F9994:
    set32(c.r[4], c.r[29].w[0] + 332u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F99A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F99A0u) [[unlikely]] return; }
L_002F99A0:
    set32(c.r[4], c.r[29].w[0] + 328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F99ACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F99ACu) [[unlikely]] return; }
L_002F99AC:
    set32(c.r[4], c.r[29].w[0] + 324u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F99B8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002F99B8u) [[unlikely]] return; }
L_002F99B8:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F99C4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002F99C4u) [[unlikely]] return; }
L_002F99C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FAA88; } }
L_002F99CC:
    set32(c.r[4], c.r[4].w[0] - 25730u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F99E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F99EC; } }
L_002F99E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F99ECu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F99ECu) [[unlikely]] return; }
L_002F99EC:
    st32((c.r[29].w[0] + 704u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9A04u); set32(c.r[5], c.r[29].w[0] + 704u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F9A04u) [[unlikely]] return; }
L_002F9A04:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 704u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 320u)));  goto L_002F9A68; }
    set32(c.r[21], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9A34u); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F9A34u) [[unlikely]] return; }
L_002F9A34:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9A44u); st32((c.r[21].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F9A44u) [[unlikely]] return; }
L_002F9A44:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F9A64; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9A64u); set32(c.r[5], c.r[29].w[0] + 704u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F9A64u) [[unlikely]] return; }
L_002F9A64:
    set32(c.r[4], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 1;
L_002F9A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9A70u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002F9A70u) [[unlikely]] return; }
L_002F9A70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25706u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F9A8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F9A94; } }
L_002F9A8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9A94u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F9A94u) [[unlikely]] return; }
L_002F9A94:
    set32(c.r[4], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[6], c.r[29].w[0] + 700u);
    set32(c.r[5], ld32((c.r[29].w[0] + 768u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9AACu); st32((c.r[29].w[0] + 700u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B1320u; return; } if (c.pc != 0x002F9AACu) [[unlikely]] return; }
L_002F9AAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 700u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 784u)));  goto L_002F9B0C; }
    set32(c.r[21], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9AD8u); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F9AD8u) [[unlikely]] return; }
L_002F9AD8:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9AE8u); st32((c.r[21].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F9AE8u) [[unlikely]] return; }
L_002F9AE8:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F9B08; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9B08u); set32(c.r[5], c.r[29].w[0] + 700u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F9B08u) [[unlikely]] return; }
L_002F9B08:
    set32(c.r[2], ld32((c.r[29].w[0] + 784u)));
    c.budget -= 1;
L_002F9B0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F9BAC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25695u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F9B30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F9B38; } }
L_002F9B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9B38u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F9B38u) [[unlikely]] return; }
L_002F9B38:
    set32(c.r[4], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[6], c.r[29].w[0] + 696u);
    set32(c.r[5], ld32((c.r[29].w[0] + 784u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9B50u); st32((c.r[29].w[0] + 696u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B1320u; return; } if (c.pc != 0x002F9B50u) [[unlikely]] return; }
L_002F9B50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 696u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F9BAC; } }
    set32(c.r[21], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9B7Cu); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F9B7Cu) [[unlikely]] return; }
L_002F9B7C:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9B8Cu); st32((c.r[21].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F9B8Cu) [[unlikely]] return; }
L_002F9B8C:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F9BAC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9BACu); set32(c.r[5], c.r[29].w[0] + 696u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F9BACu) [[unlikely]] return; }
L_002F9BAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 25742u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F9BC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F9BD0; } }
L_002F9BC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9BD0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F9BD0u) [[unlikely]] return; }
L_002F9BD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 692u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9BE0u); set32(c.r[5], c.r[29].w[0] + 692u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002F9BE0u) [[unlikely]] return; }
L_002F9BE0:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 692u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F9C40; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9C10u); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F9C10u) [[unlikely]] return; }
L_002F9C10:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9C20u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F9C20u) [[unlikely]] return; }
L_002F9C20:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F9C40; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9C40u); set32(c.r[5], c.r[29].w[0] + 692u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F9C40u) [[unlikely]] return; }
L_002F9C40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F9C5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F9C64; } }
L_002F9C5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9C64u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F9C64u) [[unlikely]] return; }
L_002F9C64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27460u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 688u), c.r[2].w[0]);  if (t) { goto L_002F9C80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F9C88; } }
L_002F9C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9C88u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F9C88u) [[unlikely]] return; }
L_002F9C88:
    set32(c.r[16], ld32((c.r[29].w[0] + 336u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9C98u); st32((c.r[29].w[0] + 684u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002F9C98u) [[unlikely]] return; }
L_002F9C98:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9CA4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 246u, depth + 1u); else { c.pc = 0x002B5DE0u; return; } if (c.pc != 0x002F9CA4u) [[unlikely]] return; }
L_002F9CA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 688u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 684u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9CCCu); st64((c.r[29].w[0]), 0ull);  if (depth < kMaxDepth) unit_006D(c, 20u, depth + 1u); else { c.pc = 0x002B4140u; return; } if (c.pc != 0x002F9CCCu) [[unlikely]] return; }
L_002F9CCC:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 684u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F9D2C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9CFCu); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F9CFCu) [[unlikely]] return; }
L_002F9CFC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9D0Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F9D0Cu) [[unlikely]] return; }
L_002F9D0C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F9D2C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9D2Cu); set32(c.r[5], c.r[29].w[0] + 684u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F9D2Cu) [[unlikely]] return; }
L_002F9D2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 688u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 320u)));  goto L_002F9D8C; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9D58u); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F9D58u) [[unlikely]] return; }
L_002F9D58:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9D68u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F9D68u) [[unlikely]] return; }
L_002F9D68:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F9D88; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9D88u); set32(c.r[5], c.r[29].w[0] + 688u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F9D88u) [[unlikely]] return; }
L_002F9D88:
    set32(c.r[4], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 1;
L_002F9D8C:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9D98u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F9D98u) [[unlikely]] return; }
L_002F9D98:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 272u);  goto L_002FA678; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F9DBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F9DC4; } }
L_002F9DBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9DC4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F9DC4u) [[unlikely]] return; }
L_002F9DC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27447u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 680u), c.r[2].w[0]);  if (t) { goto L_002F9DE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F9DE8; } }
L_002F9DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9DE8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F9DE8u) [[unlikely]] return; }
L_002F9DE8:
    set32(c.r[4], ld32((c.r[29].w[0] + 764u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 336u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9DF8u); st32((c.r[29].w[0] + 676u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002F9DF8u) [[unlikely]] return; }
L_002F9DF8:
    set32(c.r[4], ld32((c.r[29].w[0] + 764u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9E04u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 246u, depth + 1u); else { c.pc = 0x002B5DE0u; return; } if (c.pc != 0x002F9E04u) [[unlikely]] return; }
L_002F9E04:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 680u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 676u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9E2Cu); st64((c.r[29].w[0]), 0ull);  if (depth < kMaxDepth) unit_006D(c, 20u, depth + 1u); else { c.pc = 0x002B4140u; return; } if (c.pc != 0x002F9E2Cu) [[unlikely]] return; }
L_002F9E2C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 676u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F9E8C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9E5Cu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F9E5Cu) [[unlikely]] return; }
L_002F9E5C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9E6Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F9E6Cu) [[unlikely]] return; }
L_002F9E6C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F9E8C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9E8Cu); set32(c.r[5], c.r[29].w[0] + 676u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F9E8Cu) [[unlikely]] return; }
L_002F9E8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 680u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 320u)));  goto L_002F9EEC; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9EB8u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F9EB8u) [[unlikely]] return; }
L_002F9EB8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9EC8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F9EC8u) [[unlikely]] return; }
L_002F9EC8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F9EE8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9EE8u); set32(c.r[5], c.r[29].w[0] + 680u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F9EE8u) [[unlikely]] return; }
L_002F9EE8:
    set32(c.r[4], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 1;
L_002F9EEC:
    set32(c.r[5], ld32((c.r[29].w[0] + 764u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9EF8u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002F9EF8u) [[unlikely]] return; }
L_002F9EF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FA674; } }
L_002F9F00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 772u)));  goto L_002FA064; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F9F24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F9F2C; } }
L_002F9F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9F2Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F9F2Cu) [[unlikely]] return; }
L_002F9F2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27460u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 672u), c.r[2].w[0]);  if (t) { goto L_002F9F48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002F9F50; } }
L_002F9F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9F50u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002F9F50u) [[unlikely]] return; }
L_002F9F50:
    set32(c.r[4], ld32((c.r[29].w[0] + 780u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 336u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9F60u); st32((c.r[29].w[0] + 668u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002F9F60u) [[unlikely]] return; }
L_002F9F60:
    set32(c.r[4], ld32((c.r[29].w[0] + 780u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9F6Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 246u, depth + 1u); else { c.pc = 0x002B5DE0u; return; } if (c.pc != 0x002F9F6Cu) [[unlikely]] return; }
L_002F9F6C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 672u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 668u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9F94u); st64((c.r[29].w[0]), 0ull);  if (depth < kMaxDepth) unit_006D(c, 20u, depth + 1u); else { c.pc = 0x002B4140u; return; } if (c.pc != 0x002F9F94u) [[unlikely]] return; }
L_002F9F94:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 668u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F9FF4; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9FC4u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002F9FC4u) [[unlikely]] return; }
L_002F9FC4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9FD4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002F9FD4u) [[unlikely]] return; }
L_002F9FD4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F9FF4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9FF4u); set32(c.r[5], c.r[29].w[0] + 668u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002F9FF4u) [[unlikely]] return; }
L_002F9FF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 672u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 320u)));  goto L_002FA054; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA020u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002FA020u) [[unlikely]] return; }
L_002FA020:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA030u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002FA030u) [[unlikely]] return; }
L_002FA030:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FA050; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA050u); set32(c.r[5], c.r[29].w[0] + 672u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002FA050u) [[unlikely]] return; }
L_002FA050:
    set32(c.r[4], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 1;
L_002FA054:
    set32(c.r[5], ld32((c.r[29].w[0] + 780u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA060u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002FA060u) [[unlikely]] return; }
L_002FA060:
    set32(c.r[2], ld32((c.r[29].w[0] + 772u)));
    c.budget -= 1;
L_002FA064:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 776u)));  goto L_002FA1C8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002FA088; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002FA090; } }
L_002FA088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA090u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002FA090u) [[unlikely]] return; }
L_002FA090:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27473u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 664u), c.r[2].w[0]);  if (t) { goto L_002FA0AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002FA0B4; } }
L_002FA0AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA0B4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002FA0B4u) [[unlikely]] return; }
L_002FA0B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 780u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 336u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA0C4u); st32((c.r[29].w[0] + 660u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002FA0C4u) [[unlikely]] return; }
L_002FA0C4:
    set32(c.r[4], ld32((c.r[29].w[0] + 780u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA0D0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 246u, depth + 1u); else { c.pc = 0x002B5DE0u; return; } if (c.pc != 0x002FA0D0u) [[unlikely]] return; }
L_002FA0D0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 664u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 660u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA0F8u); st64((c.r[29].w[0]), 0ull);  if (depth < kMaxDepth) unit_006D(c, 20u, depth + 1u); else { c.pc = 0x002B4140u; return; } if (c.pc != 0x002FA0F8u) [[unlikely]] return; }
L_002FA0F8:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 660u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FA158; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA128u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002FA128u) [[unlikely]] return; }
L_002FA128:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA138u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002FA138u) [[unlikely]] return; }
L_002FA138:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FA158; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA158u); set32(c.r[5], c.r[29].w[0] + 660u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002FA158u) [[unlikely]] return; }
L_002FA158:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 664u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 320u)));  goto L_002FA1B8; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA184u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002FA184u) [[unlikely]] return; }
L_002FA184:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA194u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002FA194u) [[unlikely]] return; }
L_002FA194:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FA1B4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA1B4u); set32(c.r[5], c.r[29].w[0] + 664u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002FA1B4u) [[unlikely]] return; }
L_002FA1B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 1;
L_002FA1B8:
    set32(c.r[5], ld32((c.r[29].w[0] + 772u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA1C4u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002FA1C4u) [[unlikely]] return; }
L_002FA1C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 776u)));
    c.budget -= 1;
L_002FA1C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FA674; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002FA1EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002FA1F4; } }
L_002FA1EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA1F4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002FA1F4u) [[unlikely]] return; }
L_002FA1F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27447u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 656u), c.r[2].w[0]);  if (t) { goto L_002FA210; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002FA218; } }
L_002FA210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA218u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002FA218u) [[unlikely]] return; }
L_002FA218:
    set32(c.r[4], ld32((c.r[29].w[0] + 776u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 336u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA228u); st32((c.r[29].w[0] + 652u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002FA228u) [[unlikely]] return; }
L_002FA228:
    set32(c.r[4], ld32((c.r[29].w[0] + 776u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA234u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 246u, depth + 1u); else { c.pc = 0x002B5DE0u; return; } if (c.pc != 0x002FA234u) [[unlikely]] return; }
L_002FA234:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 656u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 652u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA25Cu); st64((c.r[29].w[0]), 0ull);  if (depth < kMaxDepth) unit_006D(c, 20u, depth + 1u); else { c.pc = 0x002B4140u; return; } if (c.pc != 0x002FA25Cu) [[unlikely]] return; }
L_002FA25C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 652u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FA2BC; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA28Cu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002FA28Cu) [[unlikely]] return; }
L_002FA28C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA29Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002FA29Cu) [[unlikely]] return; }
L_002FA29C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FA2BC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA2BCu); set32(c.r[5], c.r[29].w[0] + 652u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002FA2BCu) [[unlikely]] return; }
L_002FA2BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 320u)));  goto L_002FA31C; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA2E8u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002FA2E8u) [[unlikely]] return; }
L_002FA2E8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA2F8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002FA2F8u) [[unlikely]] return; }
L_002FA2F8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FA318; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA318u); set32(c.r[5], c.r[29].w[0] + 656u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002FA318u) [[unlikely]] return; }
L_002FA318:
    set32(c.r[4], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 1;
L_002FA31C:
    set32(c.r[5], ld32((c.r[29].w[0] + 776u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA328u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002FA328u) [[unlikely]] return; }
L_002FA328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FA674; } }
L_002FA330:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002FA674; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_002FA360; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_002FA674; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_002FA674; } }
L_002FA360:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28421u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002FA37C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002FA384; } }
L_002FA37C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA384u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002FA384u) [[unlikely]] return; }
L_002FA384:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28291u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 648u), c.r[2].w[0]);  if (t) { goto L_002FA3A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002FA3A8; } }
L_002FA3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA3A8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002FA3A8u) [[unlikely]] return; }
L_002FA3A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 644u), c.r[2].w[0]);  if (t) { goto L_002FA3C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002FA3CC; } }
L_002FA3C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA3CCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002FA3CCu) [[unlikely]] return; }
L_002FA3CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26401u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 640u), c.r[2].w[0]);  if (t) { goto L_002FA3E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002FA3F0; } }
L_002FA3E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA3F0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002FA3F0u) [[unlikely]] return; }
L_002FA3F0:
    st32((c.r[29].w[0] + 636u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 648u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], c.r[29].w[0] + 644u);
    set32(c.r[4], ld32((c.r[29].w[0] + 332u)));
    set32(c.r[7], c.r[29].w[0] + 640u);
    set32(c.r[8], c.r[29].w[0] + 636u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA41Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002FA41Cu) [[unlikely]] return; }
L_002FA41C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 636u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FA47C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA44Cu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002FA44Cu) [[unlikely]] return; }
L_002FA44C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA45Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002FA45Cu) [[unlikely]] return; }
L_002FA45C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FA47C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA47Cu); set32(c.r[5], c.r[29].w[0] + 636u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002FA47Cu) [[unlikely]] return; }
L_002FA47C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 640u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FA4D8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA4A8u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002FA4A8u) [[unlikely]] return; }
L_002FA4A8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA4B8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002FA4B8u) [[unlikely]] return; }
L_002FA4B8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FA4D8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA4D8u); set32(c.r[5], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002FA4D8u) [[unlikely]] return; }
L_002FA4D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 644u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FA534; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA504u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002FA504u) [[unlikely]] return; }
L_002FA504:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA514u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002FA514u) [[unlikely]] return; }
L_002FA514:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FA534; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA534u); set32(c.r[5], c.r[29].w[0] + 644u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002FA534u) [[unlikely]] return; }
L_002FA534:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 648u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FA590; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA560u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002FA560u) [[unlikely]] return; }
L_002FA560:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA570u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002FA570u) [[unlikely]] return; }
L_002FA570:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FA590; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA590u); set32(c.r[5], c.r[29].w[0] + 648u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002FA590u) [[unlikely]] return; }
L_002FA590:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26401u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002FA5AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002FA5B4; } }
L_002FA5AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA5B4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002FA5B4u) [[unlikely]] return; }
L_002FA5B4:
    set32(c.r[16], ld32((c.r[29].w[0] + 336u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA5C4u); st32((c.r[29].w[0] + 632u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002FA5C4u) [[unlikely]] return; }
L_002FA5C4:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA5D0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 247u, depth + 1u); else { c.pc = 0x002B5DF0u; return; } if (c.pc != 0x002FA5D0u) [[unlikely]] return; }
L_002FA5D0:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA5DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 246u, depth + 1u); else { c.pc = 0x002B5DE0u; return; } if (c.pc != 0x002FA5DCu) [[unlikely]] return; }
L_002FA5DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 632u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA604u); st64((c.r[29].w[0]), 0ull);  if (depth < kMaxDepth) unit_006D(c, 20u, depth + 1u); else { c.pc = 0x002B4140u; return; } if (c.pc != 0x002FA604u) [[unlikely]] return; }
L_002FA604:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 632u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 320u)));  goto L_002FA668; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA634u); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002FA634u) [[unlikely]] return; }
L_002FA634:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA644u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002FA644u) [[unlikely]] return; }
L_002FA644:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FA664; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA664u); set32(c.r[5], c.r[29].w[0] + 632u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002FA664u) [[unlikely]] return; }
L_002FA664:
    set32(c.r[4], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 1;
L_002FA668:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA674u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002FA674u) [[unlikely]] return; }
L_002FA674:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 1;
L_002FA678:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA688u); st32((c.r[29].w[0] + 760u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x002FA688u) [[unlikely]] return; }
L_002FA688:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 320u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 272u);
    set32(c.r[8], 0u + 12u);
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA6ACu); set32(c.r[9], c.r[29].w[0] + 760u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FA6ACu) [[unlikely]] return; }
L_002FA6AC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[19].w[0] + 4u)));  goto L_002FA708; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA6C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002FA6C4u) [[unlikely]] return; }
L_002FA6C4:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA6D0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002FA6D0u) [[unlikely]] return; }
L_002FA6D0:
    set32(c.r[4], c.r[29].w[0] + 332u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA6DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002FA6DCu) [[unlikely]] return; }
L_002FA6DC:
    set32(c.r[4], c.r[29].w[0] + 328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA6E8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002FA6E8u) [[unlikely]] return; }
L_002FA6E8:
    set32(c.r[4], c.r[29].w[0] + 324u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA6F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002FA6F4u) [[unlikely]] return; }
L_002FA6F4:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA700u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002FA700u) [[unlikely]] return; }
L_002FA700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FAA88; } }
L_002FA708:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00E00000u);
    set32(c.r[2], c.r[29].w[0] + 760u);
    c.r[11].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    set32(c.r[6], c.r[4].w[0] >> 19);
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[7].d[0] & 49152ull;
    set32(c.r[5], c.r[5].w[0] >> 16);
    set32(c.r[4], c.r[4].w[0] >> 14);
    set32(c.r[3], c.r[3].w[0] >> 21);
    st64((c.r[29].w[0]), c.r[4].d[0]);
    set32(c.r[7], 0u + 12u);
    st64((c.r[29].w[0] + 8u), c.r[5].d[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[6].d[0]);
    set32(c.r[5], c.r[29].w[0] + 320u);
    st64((c.r[29].w[0] + 24u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[2].d[0]);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[8], ld32((c.r[29].w[0] + 824u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 820u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 812u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 192u)));
    c.budget -= 28;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA778u); set32(c.r[6], c.r[29].w[0] + 272u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FA778u) [[unlikely]] return; }
L_002FA778:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002FA7D4; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA790u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002FA790u) [[unlikely]] return; }
L_002FA790:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA79Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002FA79Cu) [[unlikely]] return; }
L_002FA79C:
    set32(c.r[4], c.r[29].w[0] + 332u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA7A8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002FA7A8u) [[unlikely]] return; }
L_002FA7A8:
    set32(c.r[4], c.r[29].w[0] + 328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA7B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002FA7B4u) [[unlikely]] return; }
L_002FA7B4:
    set32(c.r[4], c.r[29].w[0] + 324u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA7C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002FA7C0u) [[unlikely]] return; }
L_002FA7C0:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA7CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002FA7CCu) [[unlikely]] return; }
L_002FA7CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FAA88; } }
L_002FA7D4:
    set32(c.r[16], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002FA98C; } }
L_002FA7E0:
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002FA7F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002FA7FC; } }
L_002FA7F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA7FCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002FA7FCu) [[unlikely]] return; }
L_002FA7FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 628u), c.r[2].w[0]);  if (t) { goto L_002FA814; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002FA81C; } }
L_002FA814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA81Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002FA81Cu) [[unlikely]] return; }
L_002FA81C:
    st32((c.r[29].w[0] + 624u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 620u);
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA838u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FA838u) [[unlikely]] return; }
L_002FA838:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[21], c.r[2].w[0] + 272u);
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA850u); set32(c.r[18], ld32((c.r[29].w[0] + 336u)));  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002FA850u) [[unlikely]] return; }
L_002FA850:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 628u);
    set32(c.r[7], c.r[29].w[0] + 624u);
    set32(c.r[8], c.r[29].w[0] + 620u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA878u); st64((c.r[29].w[0]), 0ull);  if (depth < kMaxDepth) unit_006D(c, 20u, depth + 1u); else { c.pc = 0x002B4140u; return; } if (c.pc != 0x002FA878u) [[unlikely]] return; }
L_002FA878:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 620u)));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 624u)));  goto L_002FA8D4; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA8A0u); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002FA8A0u) [[unlikely]] return; }
L_002FA8A0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA8B0u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002FA8B0u) [[unlikely]] return; }
L_002FA8B0:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FA8D0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA8D0u); set32(c.r[5], c.r[29].w[0] + 620u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002FA8D0u) [[unlikely]] return; }
L_002FA8D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 624u)));
    c.budget -= 1;
L_002FA8D4:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 628u)));  goto L_002FA928; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA8F4u); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002FA8F4u) [[unlikely]] return; }
L_002FA8F4:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA904u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002FA904u) [[unlikely]] return; }
L_002FA904:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FA924; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA924u); set32(c.r[5], c.r[29].w[0] + 624u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002FA924u) [[unlikely]] return; }
L_002FA924:
    set32(c.r[2], ld32((c.r[29].w[0] + 628u)));
    c.budget -= 1;
L_002FA928:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[5], ld32((c.r[21].w[0])));  goto L_002FA97C; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA948u); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002FA948u) [[unlikely]] return; }
L_002FA948:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA958u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002FA958u) [[unlikely]] return; }
L_002FA958:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FA978; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA978u); set32(c.r[5], c.r[29].w[0] + 628u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002FA978u) [[unlikely]] return; }
L_002FA978:
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_002FA97C:
    set32(c.r[4], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA988u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002FA988u) [[unlikely]] return; }
L_002FA988:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002FA98C:
    set32(c.r[2], ld32((c.r[29].w[0] + 760u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA7E0u | kUnwind; return; } goto L_002FA7E0; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 808u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA9B8u); set32(c.r[5], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FA9B8u) [[unlikely]] return; }
L_002FA9B8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 320u)));  goto L_002FAA14; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA9D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002FA9D0u) [[unlikely]] return; }
L_002FA9D0:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA9DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002FA9DCu) [[unlikely]] return; }
L_002FA9DC:
    set32(c.r[4], c.r[29].w[0] + 332u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA9E8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002FA9E8u) [[unlikely]] return; }
L_002FA9E8:
    set32(c.r[4], c.r[29].w[0] + 328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA9F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002FA9F4u) [[unlikely]] return; }
L_002FA9F4:
    set32(c.r[4], c.r[29].w[0] + 324u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAA00u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002FAA00u) [[unlikely]] return; }
L_002FAA00:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAA0Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002FAA0Cu) [[unlikely]] return; }
L_002FAA0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FAA88; } }
L_002FAA14:
    set32(c.r[5], c.r[29].w[0] + 352u);
    set32(c.r[7], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAA2Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FAA2Cu) [[unlikely]] return; }
L_002FAA2C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 336u);  goto L_002FAA4C; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAA48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 169u, depth + 1u); else { c.pc = 0x002A15B0u; return; } if (c.pc != 0x002FAA48u) [[unlikely]] return; }
L_002FAA48:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 1;
L_002FAA4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAA54u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 143u, depth + 1u); else { c.pc = 0x0029A260u; return; } if (c.pc != 0x002FAA54u) [[unlikely]] return; }
L_002FAA54:
    set32(c.r[4], c.r[29].w[0] + 332u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAA60u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002FAA60u) [[unlikely]] return; }
L_002FAA60:
    set32(c.r[4], c.r[29].w[0] + 328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAA6Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002FAA6Cu) [[unlikely]] return; }
L_002FAA6C:
    set32(c.r[4], c.r[29].w[0] + 324u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAA78u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 138u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002FAA78u) [[unlikely]] return; }
L_002FAA78:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAA84u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0066(c, 133u, depth + 1u); else { c.pc = 0x0029A120u; return; } if (c.pc != 0x002FAA84u) [[unlikely]] return; }
L_002FAA84:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002FAA88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.budget -= 1;
L_002FAA8C:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 832u);  c.pc = t; return; }
L_002FAAC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[10].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002FAB40; }
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[10].w[0]), c.r[3].w[0]);  if (t) { goto L_002FAAEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FAB38; } }
L_002FAAEC:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] + 40u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] & 65280ull;
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[3].d[0] & 255ull;  goto L_002FAB24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FAB38; } }
L_002FAB24:
    set32(c.r[4], ld32((c.r[5].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 255ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 5;
L_002FAB38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002FAB68; } }
L_002FAB40:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FAB5C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAB54u); st32((c.r[10].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007E(c, 420u, depth + 1u); else { c.pc = 0x002FABB0u; return; } if (c.pc != 0x002FAB54u) [[unlikely]] return; }
L_002FAB54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FAB64; } }
L_002FAB5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAB64u);  if (depth < kMaxDepth) unit_007F(c, 11u, depth + 1u); else { c.pc = 0x002FC2C0u; return; } if (c.pc != 0x002FAB64u) [[unlikely]] return; }
L_002FAB64:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002FAB68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002FAB70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[10].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FAB98; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAB90u); st32((c.r[10].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007E(c, 420u, depth + 1u); else { c.pc = 0x002FABB0u; return; } if (c.pc != 0x002FAB90u) [[unlikely]] return; }
L_002FAB90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002FABA4; } }
L_002FAB98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FABA0u);  if (depth < kMaxDepth) unit_007F(c, 11u, depth + 1u); else { c.pc = 0x002FC2C0u; return; } if (c.pc != 0x002FABA0u) [[unlikely]] return; }
L_002FABA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002FABA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002FABB0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002FABFC; } }
    c.r[2].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 2);  goto L_002FAC00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FB0C4; } }
L_002FABFC:
    set32(c.r[2], c.r[6].w[0] << 2);
    c.budget -= 1;
L_002FAC00:
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[19], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    set32(c.r[2], c.r[2].w[0] >> 7);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[19].w[0] + 40u);  if (t) { goto L_002FAC30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FB0C4; } }
L_002FAC30:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    set32(c.r[7], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[8], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[5], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    set32(c.r[6], 0u + 64u);
    set32(c.r[9], c.r[2].w[0] >> 11);
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[8].d[0] & 240ull;
    set32(c.r[7], c.r[3].w[0] >> 28);
    set32(c.r[3], c.r[2].w[0] >> 4);
    c.r[22].d[0] = c.r[9].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[8].d[0] & 15ull;
    c.r[22].d[0] = c.r[22].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAC7Cu); set32(c.r[23], c.r[7].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x002FAC7Cu) [[unlikely]] return; }
L_002FAC7C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAC8Cu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x002FAC8Cu) [[unlikely]] return; }
L_002FAC8C:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002FACCC; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FACACu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FACACu) [[unlikely]] return; }
L_002FACAC:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_002FACD0; }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FACC8u); set32(c.r[7], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FACC8u) [[unlikely]] return; }
L_002FACC8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002FACCC:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_002FACD0:
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    set32(c.r[16], c.r[2].w[0] >> 9);
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_002FAD18; }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FACECu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FACECu) [[unlikely]] return; }
L_002FACEC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FAD14; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAD10u); set32(c.r[7], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FAD10u) [[unlikely]] return; }
L_002FAD10:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002FAD14:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_002FAD18:
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    set32(c.r[2], c.r[2].w[0] >> 10);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_002FAD60; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAD34u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FAD34u) [[unlikely]] return; }
L_002FAD34:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FAD5C; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAD58u); set32(c.r[7], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FAD58u) [[unlikely]] return; }
L_002FAD58:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002FAD5C:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_002FAD60:
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    set32(c.r[2], c.r[2].w[0] >> 11);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_002FADA8; }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAD7Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FAD7Cu) [[unlikely]] return; }
L_002FAD7C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FADA4; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FADA0u); set32(c.r[7], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FADA0u) [[unlikely]] return; }
L_002FADA0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002FADA4:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_002FADA8:
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    set32(c.r[2], c.r[2].w[0] >> 12);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_002FADF0; }
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FADC4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FADC4u) [[unlikely]] return; }
L_002FADC4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FADEC; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FADE8u); set32(c.r[7], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FADE8u) [[unlikely]] return; }
L_002FADE8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002FADEC:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_002FADF0:
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    set32(c.r[2], c.r[2].w[0] >> 13);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_002FAE38; }
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAE0Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FAE0Cu) [[unlikely]] return; }
L_002FAE0C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FAE34; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAE30u); set32(c.r[7], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FAE30u) [[unlikely]] return; }
L_002FAE30:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002FAE34:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_002FAE38:
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    set32(c.r[2], c.r[2].w[0] >> 14);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_002FAE80; }
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAE54u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FAE54u) [[unlikely]] return; }
L_002FAE54:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FAE7C; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAE78u); set32(c.r[7], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FAE78u) [[unlikely]] return; }
L_002FAE78:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002FAE7C:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_002FAE80:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    set32(c.r[2], c.r[2].w[0] >> 15);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 4u)));  goto L_002FAEC8; }
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAE9Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FAE9Cu) [[unlikely]] return; }
L_002FAE9C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FAEC4; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAEC0u); set32(c.r[7], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FAEC0u) [[unlikely]] return; }
L_002FAEC0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002FAEC4:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_002FAEC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 4u)));  goto L_002FAF14; }
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAEE8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FAEE8u) [[unlikely]] return; }
L_002FAEE8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FAF10; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAF0Cu); set32(c.r[7], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FAF0Cu) [[unlikely]] return; }
L_002FAF0C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002FAF10:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_002FAF14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 17);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 4u)));  goto L_002FAF60; }
    set32(c.r[4], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAF34u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FAF34u) [[unlikely]] return; }
L_002FAF34:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FAF5C; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAF58u); set32(c.r[7], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FAF58u) [[unlikely]] return; }
L_002FAF58:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002FAF5C:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_002FAF60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 18);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 4u)));  goto L_002FAFAC; }
    set32(c.r[4], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAF80u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FAF80u) [[unlikely]] return; }
L_002FAF80:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FAFA8; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAFA4u); set32(c.r[7], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FAFA4u) [[unlikely]] return; }
L_002FAFA4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002FAFA8:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_002FAFAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 19);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 4u)));  goto L_002FAFF8; }
    set32(c.r[4], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAFCCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FAFCCu) [[unlikely]] return; }
L_002FAFCC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FAFF4; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAFF0u); set32(c.r[7], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FAFF0u) [[unlikely]] return; }
L_002FAFF0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002FAFF4:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_002FAFF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[2].w[0] >> 20);  if (t) { goto L_002FB040; } }
L_002FB00C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB014u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FB014u) [[unlikely]] return; }
L_002FB014:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002FB040; }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB038u); set32(c.r[7], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FB038u) [[unlikely]] return; }
L_002FB038:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_002FB040:
    c.r[2].d[0] = c.r[17].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 13u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB00Cu | kUnwind; return; } goto L_002FB00C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], 0u - 129u);
    set32(c.r[2], 0u - 33u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002FB078; } }
    c.budget -= 2;
    if (c.r[23].d[0] != 0ull) { c.r[6].d[0] = c.r[18].d[0] + 0ull;  goto L_002FB0AC; }
L_002FB078:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002FB0A8; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], 0u - 9u);
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 10;
L_002FB0A8:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002FB0AC:
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB0C0u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_007F(c, 35u, depth + 1u); else { c.pc = 0x002FCBC0u; return; } if (c.pc != 0x002FB0C0u) [[unlikely]] return; }
L_002FB0C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002FB0C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_002FB100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[10].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FB180; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[10].w[0]), c.r[3].w[0]);  if (t) { goto L_002FB12C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FB178; } }
L_002FB12C:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] + 40u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] & 65280ull;
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[3].d[0] & 255ull;  goto L_002FB164; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FB178; } }
L_002FB164:
    set32(c.r[4], ld32((c.r[5].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 255ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 5;
L_002FB178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002FB18C; } }
L_002FB180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB188u);  if (depth < kMaxDepth) unit_007E(c, 453u, depth + 1u); else { c.pc = 0x002FB1A0u; return; } if (c.pc != 0x002FB188u) [[unlikely]] return; }
L_002FB188:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002FB18C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002FB1A0:
    set32(c.r[29], c.r[29].w[0] - 368u);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 236u), c.r[9].w[0]);  if (t) { goto L_002FB1F8; } }
    c.r[2].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 236u)));  goto L_002FB1FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FBAA4; } }
L_002FB1F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 1;
L_002FB1FC:
    set32(c.r[3], c.r[8].w[0] - 1u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[17].w[0] << 2);  goto L_002FB218; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FBAA4; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_002FB218:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x07000000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[21], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[18], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[19], c.r[18].w[0] + 40u);
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 48u)));
    c.r[4].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[8].d[0] & 16384ull;
    c.r[8].d[0] = c.r[2].d[0] & c.r[5].d[0];
    set32(c.r[5], c.r[3].w[0] >> 14);
    set32(c.r[8], c.r[8].w[0] >> 16);
    c.r[3].d[0] = c.r[7].d[0] & 2048ull;
    c.r[30].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] >> 11);
    set32(c.r[7], ld32((c.r[18].w[0] + 52u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    set32(c.r[3], c.r[4].w[0] >> 24);
    c.r[4].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[4], c.r[4].w[0] >> 4);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[7].d[0] & c.r[6].d[0];
    set32(c.r[4], c.r[4].w[0] >> 28);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 35;
    { const bool t = c.r[3].d[0] != 0ull; st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (t) { goto L_002FB2F0; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[1].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;  goto L_002FB2F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FBAA4; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_002FB2B8:
    set32(c.r[3], c.r[16].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[22].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB2ECu); set32(c.r[5], c.r[22].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0068(c, 383u, depth + 1u); else { c.pc = 0x002A3290u; return; } if (c.pc != 0x002FB2ECu) [[unlikely]] return; }
L_002FB2EC:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_002FB2F0:
    c.r[1].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002FB2F4:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB2B8u | kUnwind; return; } goto L_002FB2B8; }
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[6], 0u + 64u);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[16], c.r[22].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB32Cu); set32(c.r[17], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x002FB32Cu) [[unlikely]] return; }
L_002FB32C:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB33Cu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x002FB33Cu) [[unlikely]] return; }
L_002FB33C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    set32(c.r[2], c.r[2].w[0] >> 7);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002FB37C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB35Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FB35Cu) [[unlikely]] return; }
L_002FB35C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_002FB380; }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB378u); set32(c.r[7], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FB378u) [[unlikely]] return; }
L_002FB378:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002FB37C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_002FB380:
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_002FB3C8; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB39Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FB39Cu) [[unlikely]] return; }
L_002FB39C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FB3C4; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 304u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB3C0u); set32(c.r[7], c.r[2].w[0] + 240u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FB3C0u) [[unlikely]] return; }
L_002FB3C0:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002FB3C4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_002FB3C8:
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    set32(c.r[2], c.r[2].w[0] >> 9);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_002FB410; }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB3E4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FB3E4u) [[unlikely]] return; }
L_002FB3E4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FB40C; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 304u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB408u); set32(c.r[7], c.r[2].w[0] + 240u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FB408u) [[unlikely]] return; }
L_002FB408:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002FB40C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_002FB410:
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    set32(c.r[2], c.r[2].w[0] >> 10);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_002FB458; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB42Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FB42Cu) [[unlikely]] return; }
L_002FB42C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FB454; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 304u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB450u); set32(c.r[7], c.r[2].w[0] + 240u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FB450u) [[unlikely]] return; }
L_002FB450:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002FB454:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_002FB458:
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    set32(c.r[2], c.r[2].w[0] >> 11);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FB49C; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB474u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FB474u) [[unlikely]] return; }
L_002FB474:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FB49C; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 304u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB498u); set32(c.r[7], c.r[2].w[0] + 240u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FB498u) [[unlikely]] return; }
L_002FB498:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002FB49C:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_002FB4F0; }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    set32(c.r[2], c.r[2].w[0] >> 13);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FB4EC; } }
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB4C4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FB4C4u) [[unlikely]] return; }
L_002FB4C4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FB4EC; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 304u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB4E8u); set32(c.r[7], c.r[2].w[0] + 240u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FB4E8u) [[unlikely]] return; }
L_002FB4E8:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002FB4EC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_002FB4F0:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    set32(c.r[2], c.r[2].w[0] >> 15);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  goto L_002FB538; }
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB50Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FB50Cu) [[unlikely]] return; }
L_002FB50C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FB534; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 304u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB530u); set32(c.r[7], c.r[2].w[0] + 240u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FB530u) [[unlikely]] return; }
L_002FB530:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002FB534:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_002FB538:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  goto L_002FB584; }
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB558u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FB558u) [[unlikely]] return; }
L_002FB558:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FB580; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 304u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB57Cu); set32(c.r[7], c.r[2].w[0] + 240u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FB57Cu) [[unlikely]] return; }
L_002FB57C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002FB580:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_002FB584:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 17);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  goto L_002FB5D0; }
    set32(c.r[4], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB5A4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FB5A4u) [[unlikely]] return; }
L_002FB5A4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FB5CC; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 304u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB5C8u); set32(c.r[7], c.r[2].w[0] + 240u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FB5C8u) [[unlikely]] return; }
L_002FB5C8:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002FB5CC:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_002FB5D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 18);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  goto L_002FB61C; }
    set32(c.r[4], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB5F0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FB5F0u) [[unlikely]] return; }
L_002FB5F0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FB618; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 304u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB614u); set32(c.r[7], c.r[2].w[0] + 240u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FB614u) [[unlikely]] return; }
L_002FB614:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002FB618:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_002FB61C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 19);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  goto L_002FB668; }
    set32(c.r[4], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB63Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FB63Cu) [[unlikely]] return; }
L_002FB63C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FB664; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 304u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB660u); set32(c.r[7], c.r[2].w[0] + 240u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FB660u) [[unlikely]] return; }
L_002FB660:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002FB664:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_002FB668:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[23].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 20);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (t) { goto L_002FB6B8; } }
    set32(c.r[4], c.r[23].w[0] + 13u);
    c.budget -= 1;
L_002FB684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB68Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FB68Cu) [[unlikely]] return; }
L_002FB68C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[23], c.r[23].w[0] + 1u);  goto L_002FB6B8; }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 304u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB6B0u); set32(c.r[7], c.r[2].w[0] + 240u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FB6B0u) [[unlikely]] return; }
L_002FB6B0:
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 2;
L_002FB6B8:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[23].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[23].w[0] + 13u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB684u | kUnwind; return; } goto L_002FB684; }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u - 14337u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[30].d[0] == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002FB6E8; } }
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 4u)));  goto L_002FB708; }
L_002FB6E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], 0u - 17u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 8;
L_002FB708:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF8FF0000u);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], 0u - 4097u);
    set32(c.r[2], 0u - 16385u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[19].w[0] + 4u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[30].d[0] != 0ull; st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002FB744; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u - 8193u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_002FB744:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB75Cu); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 35u, depth + 1u); else { c.pc = 0x002FCBC0u; return; } if (c.pc != 0x002FB75Cu) [[unlikely]] return; }
L_002FB75C:
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB76Cu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x002FB76Cu) [[unlikely]] return; }
L_002FB76C:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB77Cu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x002FB77Cu) [[unlikely]] return; }
L_002FB77C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    set32(c.r[2], c.r[2].w[0] >> 7);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002FB7BC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB79Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FB79Cu) [[unlikely]] return; }
L_002FB79C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_002FB7C0; }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB7B8u); set32(c.r[7], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FB7B8u) [[unlikely]] return; }
L_002FB7B8:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002FB7BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002FB7C0:
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_002FB824; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB7DCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FB7DCu) [[unlikely]] return; }
L_002FB7DC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FB820; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 304u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB800u); set32(c.r[7], c.r[2].w[0] + 240u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FB800u) [[unlikely]] return; }
L_002FB800:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 8;
L_002FB820:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002FB824:
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    set32(c.r[2], c.r[2].w[0] >> 9);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_002FB86C; }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB840u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FB840u) [[unlikely]] return; }
L_002FB840:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FB868; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 304u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB864u); set32(c.r[7], c.r[2].w[0] + 240u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FB864u) [[unlikely]] return; }
L_002FB864:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002FB868:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002FB86C:
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    set32(c.r[2], c.r[2].w[0] >> 12);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_002FB8B4; }
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB888u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FB888u) [[unlikely]] return; }
L_002FB888:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FB8B0; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 304u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB8ACu); set32(c.r[7], c.r[2].w[0] + 240u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FB8ACu) [[unlikely]] return; }
L_002FB8AC:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002FB8B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002FB8B4:
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    set32(c.r[2], c.r[2].w[0] >> 13);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_002FB8FC; }
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB8D0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FB8D0u) [[unlikely]] return; }
L_002FB8D0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FB8F8; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 304u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB8F4u); set32(c.r[7], c.r[2].w[0] + 240u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FB8F4u) [[unlikely]] return; }
L_002FB8F4:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002FB8F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002FB8FC:
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    set32(c.r[2], c.r[2].w[0] >> 14);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  goto L_002FB944; }
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB918u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002FB918u) [[unlikely]] return; }
L_002FB918:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FB940; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 304u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB93Cu); set32(c.r[7], c.r[2].w[0] + 240u);  if (depth < kMaxDepth) unit_0080(c, 219u, depth + 1u); else { c.pc = 0x00301A30u; return; } if (c.pc != 0x002FB93Cu) [[unlikely]] return; }
L_002FB93C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002FB940:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.budget -= 1;
L_002FB944:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[2].d[0] | 16383ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFE70000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[17].w[0] + 4u)));  goto L_002FB9A0; }
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FB99C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], 0u - 5u);
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
L_002FB99C:
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002FB9A0:
    set32(c.r[5], 0u - 1025u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF8F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xE7FF0000u);
    set32(c.r[4], 0u - 2049u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[17].w[0] + 4u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF7F0000u);
    c.r[10].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[4], 0u - 25u);
    c.r[9].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[12], 0u - 16u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[11], 0u - 241u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], 0u - 5u);
    set32(c.r[13], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], 0u - 3u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[13].d[0] = c.r[13].d[0] << 36;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[13].d[0] = c.r[13].d[0] >> 36;
    st32((c.r[17].w[0] + 12u), c.r[13].w[0]);
    set32(c.r[13], ld32((c.r[17].w[0] + 16u)));
    c.r[12].d[0] = c.r[13].d[0] & c.r[12].d[0];
    c.r[11].d[0] = c.r[12].d[0] & c.r[11].d[0];
    st32((c.r[17].w[0] + 16u), c.r[12].w[0]);
    c.r[10].d[0] = c.r[11].d[0] & c.r[10].d[0];
    st32((c.r[17].w[0] + 16u), c.r[11].w[0]);
    c.r[9].d[0] = c.r[10].d[0] & c.r[9].d[0];
    st32((c.r[17].w[0] + 16u), c.r[10].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[9].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 51;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBA6Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007F(c, 35u, depth + 1u); else { c.pc = 0x002FCBC0u; return; } if (c.pc != 0x002FBA6Cu) [[unlikely]] return; }
L_002FBA6C:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 61u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 62u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(0u));
    st32((c.r[3].w[0] + 80u), 0u);
    st32((c.r[3].w[0] + 84u), 0u);
    set32(c.r[3], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 236u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 14;
L_002FBAA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_002FBAE0:
    set32(c.r[29], c.r[29].w[0] - 368u);
    c.r[2].d[0] = c.r[5].d[0] & 4ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 316u), c.r[9].w[0]);  if (t) { goto L_002FBB28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_007F(c, 7u, depth); } }
L_002FBB28:
    c.r[2].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[3], c.r[8].w[0] - 1u);
    set32(c.r[30], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[30].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[18].w[0] << 2);  goto L_002FBB44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_007F(c, 7u, depth); } }
L_002FBB44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00F00000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[19], c.r[18].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[23], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[23].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[23].w[0] + 48u)));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    set32(c.r[16], c.r[4].w[0] >> 20);
    c.r[2].d[0] = c.r[5].d[0] & 61440ull;
    set32(c.r[3], c.r[3].w[0] >> 11);
    set32(c.r[2], c.r[2].w[0] >> 12);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.budget -= 25;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[20], c.r[2].w[0] + c.r[4].w[0]);  if (t) { goto L_002FBBB0; } }
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { c.r[17].d[0] = c.r[30].d[0] + 0ull;  goto L_002FBBF0; }
L_002FBBB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_007F(c, 7u, depth); } }
L_002FBBB8:
    set32(c.r[3], c.r[17].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[21].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBBECu); set32(c.r[5], c.r[21].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0068(c, 383u, depth + 1u); else { c.pc = 0x002A3290u; return; } if (c.pc != 0x002FBBECu) [[unlikely]] return; }
L_002FBBEC:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_002FBBF0:
    c.r[1].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FBBB8u | kUnwind; return; } goto L_002FBBB8; }
    set32(c.r[2], c.r[20].w[0] >> 1);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[20].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[5], c.r[2].w[0] << 1);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + c.r[19].w[0]);
    set32(c.r[18], c.r[5].w[0] << 3);
    set32(c.r[19], c.r[18].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[2].w[0] >> 1);
    st32((c.r[19].w[0] + 72u), 0u);
    set32(c.r[20], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[17], c.r[19].w[0] + 72u);
    c.r[1].d[0] = c.r[4].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[19].w[0] + 63u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002FBC40; } }
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_002FBC40:
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] - c.r[20].w[0]);
    set32(c.r[3], c.r[2].w[0] >> 1);
    set32(c.r[22], c.r[2].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[4].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] >> 1);  goto L_002FBC64; }
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] >> 1);
    c.budget -= 2;
L_002FBC64:
    set32(c.r[3], c.r[4].w[0] - c.r[22].w[0]);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] - c.r[2].w[0]);  goto L_002FBC80; }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_002FBC80:
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[3]);
    set32(c.r[5], c.r[2].w[0] << 20);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[3]);
    set32(c.r[3], c.r[3].w[0] - c.r[22].w[0]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[3]);
    set32(c.r[3], c.r[3].w[0] - c.r[20].w[0]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF0F0000u);
    c.r[4].d[0] = c.r[3].d[0] | 65535ull;
    c.r[6].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 4095ull;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[22].w[0] << 12);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 12u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    st32((c.r[19].w[0] + 12u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[20].w[0] << 16);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[18].w[0] + c.r[21].w[0]);
    st8((c.r[3].w[0] + 61u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 62u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(0u));
    st32((c.r[3].w[0] + 80u), 0u);
    c.budget -= 35;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[3].w[0] + 84u), 0u);  if (t) { goto L_002FBE68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBD14u); set32(c.r[4], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0068(c, 382u, depth + 1u); else { c.pc = 0x002A3270u; return; } if (c.pc != 0x002FBD14u) [[unlikely]] return; }
L_002FBD14:
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 356u), c.r[4].w[0]);
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBD2Cu); st32((c.r[29].w[0] + 352u), 0u);  if (depth < kMaxDepth) unit_0067(c, 238u, depth + 1u); else { c.pc = 0x0029DF80u; return; } if (c.pc != 0x002FBD2Cu) [[unlikely]] return; }
L_002FBD2C:
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[3]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] + c.r[21].w[0]);
    st32((c.r[29].w[0] + 360u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + 68u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 10;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_002FBE30; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_002FBD60; }
    set32(c.r[16], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002FBD60:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002FBE2C; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 312u), 0u);  goto L_002FBDF4; }
    set32(c.r[2], c.r[16].w[0] << 1);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBD88u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002FBD88u) [[unlikely]] return; }
L_002FBD88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12912u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBDA4u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002FBDA4u) [[unlikely]] return; }
L_002FBDA4:
    st32((c.r[29].w[0] + 312u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002FBDE4; } }
L_002FBDB0:
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 13;
L_002FBDE4:
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FBDB0u | kUnwind; return; } goto L_002FBDB0; }
L_002FBDF4:
    set32(c.r[3], c.r[18].w[0] + c.r[21].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 64u)));
    set32(c.r[2], c.r[3].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBE18u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002FBE18u) [[unlikely]] return; }
L_002FBE18:
    set32(c.r[3], ld32((c.r[29].w[0] + 312u)));
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.budget -= 5;
L_002FBE2C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_002FBE30:
    set32(c.r[5], c.r[18].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 356u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 360u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 14;
L_002FBE68:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002FBFC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBE78u); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0068(c, 382u, depth + 1u); else { c.pc = 0x002A3270u; return; } if (c.pc != 0x002FBE78u) [[unlikely]] return; }
L_002FBE78:
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 340u), c.r[4].w[0]);
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBE90u); st32((c.r[29].w[0] + 336u), 0u);  if (depth < kMaxDepth) unit_0067(c, 238u, depth + 1u); else { c.pc = 0x0029DF80u; return; } if (c.pc != 0x002FBE90u) [[unlikely]] return; }
L_002FBE90:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] + c.r[21].w[0]);
    st32((c.r[29].w[0] + 344u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + 68u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 10;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_002FBF8C; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_002FBEC4; }
    set32(c.r[16], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002FBEC4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002FBF88; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_002FBF54; }
    set32(c.r[2], c.r[16].w[0] << 1);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBEECu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002FBEECu) [[unlikely]] return; }
L_002FBEEC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12912u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBF08u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002FBF08u) [[unlikely]] return; }
L_002FBF08:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002FBF44; } }
L_002FBF14:
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 12;
L_002FBF44:
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FBF14u | kUnwind; return; } goto L_002FBF14; }
L_002FBF54:
    set32(c.r[3], c.r[18].w[0] + c.r[21].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 64u)));
    set32(c.r[2], c.r[3].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBF78u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002FBF78u) [[unlikely]] return; }
L_002FBF78:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    st32((c.r[2].w[0]), c.r[20].w[0]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.budget -= 4;
L_002FBF88:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_002FBF8C:
    set32(c.r[5], c.r[18].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 340u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 344u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 14;
L_002FBFC4:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);  [[clang::musttail]] return unit_007F(c, 6u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBFD4u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0068(c, 382u, depth + 1u); else { c.pc = 0x002A3270u; return; } if (c.pc != 0x002FBFD4u) [[unlikely]] return; }
L_002FBFD4:
    set32(c.r[4], 0u + 2u);
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 324u), c.r[4].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBFECu); st32((c.r[29].w[0] + 320u), 0u);  if (depth < kMaxDepth) unit_0067(c, 238u, depth + 1u); else { c.pc = 0x0029DF80u; return; } if (c.pc != 0x002FBFECu) [[unlikely]] return; }
L_002FBFEC:
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[3]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[21].w[0]);
    st32((c.r[29].w[0] + 328u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 5;
    [[clang::musttail]] return unit_007F(c, 1u, depth);
}

}
