#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00CA[4096] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0,
    0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31,
    0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 39,
    0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 53,
    0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0,
    0, 0, 60, 0, 0, 0, 61, 0, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0, 67, 0, 0, 68, 0, 0,
    69, 0, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78,
    0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0,
    0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0,
    0, 0, 103, 0, 0, 104, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122,
    0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0,
    0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0,
    0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0,
    145, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0,
    0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0,
    166, 0, 167, 0, 168, 0, 169, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0,
    0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 184,
    0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0,
    0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0,
    0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0,
    0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0,
    0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0,
    0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0,
    229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0,
    236, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0,
    0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 270,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 274, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 278,
    0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    0, 299, 0, 300, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0,
    0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 322, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0,
    0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 328, 0, 329, 0, 0, 0, 330, 0, 0, 331, 0, 0, 332, 0, 333, 0, 0, 0,
    334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 339, 0, 0, 0, 340, 0, 0, 0,
    0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 345, 0, 0, 0, 346, 0, 0, 347, 0, 0, 348, 0, 349, 0, 0,
    0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0,
    0, 354, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0,
    359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 366, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374,
    0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385,
    0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0,
    0, 0, 391, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0,
    0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403,
    0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415,
    0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0,
    0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426,
    0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0,
    0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0,
    0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439,
    0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0,
    446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0,
    458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    460, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0,
    470, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 478,
    0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 480, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0,
    0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0,
    0, 493, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0,
    501, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0,
    0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 521, 0, 522, 0, 0, 0, 0, 523, 0,
    0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0, 0,
    0, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 0, 0, 0,
    548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0,
    0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0,
    0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0,
    0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0,
    566, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 0, 0,
    572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0,
    0, 575, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0,
    0, 579, 0, 580, 0, 0, 581, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0,
    0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0,
};

void unit_00CA(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00428000;
    case 2u: goto L_00428008;
    case 3u: goto L_00428018;
    case 4u: goto L_00428024;
    case 5u: goto L_00428030;
    case 6u: goto L_00428048;
    case 7u: goto L_00428050;
    case 8u: goto L_00428064;
    case 9u: goto L_00428074;
    case 10u: goto L_00428090;
    case 11u: goto L_0042809C;
    case 12u: goto L_004280D0;
    case 13u: goto L_004280F8;
    case 14u: goto L_00428104;
    case 15u: goto L_00428114;
    case 16u: goto L_00428130;
    case 17u: goto L_004281C0;
    case 18u: goto L_004281DC;
    case 19u: goto L_00428210;
    case 20u: goto L_00428258;
    case 21u: goto L_00428290;
    case 22u: goto L_004282A0;
    case 23u: goto L_004282D0;
    case 24u: goto L_00428300;
    case 25u: goto L_0042830C;
    case 26u: goto L_0042831C;
    case 27u: goto L_0042833C;
    case 28u: goto L_00428348;
    case 29u: goto L_00428354;
    case 30u: goto L_00428370;
    case 31u: goto L_0042837C;
    case 32u: goto L_00428388;
    case 33u: goto L_004283A0;
    case 34u: goto L_004283AC;
    case 35u: goto L_004283B8;
    case 36u: goto L_004283C8;
    case 37u: goto L_004283E4;
    case 38u: goto L_004283F0;
    case 39u: goto L_004283FC;
    case 40u: goto L_00428408;
    case 41u: goto L_00428414;
    case 42u: goto L_00428420;
    case 43u: goto L_00428490;
    case 44u: goto L_004284A0;
    case 45u: goto L_00428520;
    case 46u: goto L_00428530;
    case 47u: goto L_004285A0;
    case 48u: goto L_004285B0;
    case 49u: goto L_004285B8;
    case 50u: goto L_004285CC;
    case 51u: goto L_004285DC;
    case 52u: goto L_004285E8;
    case 53u: goto L_004285FC;
    case 54u: goto L_0042861C;
    case 55u: goto L_0042862C;
    case 56u: goto L_004286B8;
    case 57u: goto L_004286C8;
    case 58u: goto L_004286E4;
    case 59u: goto L_004286F8;
    case 60u: goto L_00428708;
    case 61u: goto L_00428718;
    case 62u: goto L_00428724;
    case 63u: goto L_00428730;
    case 64u: goto L_00428740;
    case 65u: goto L_0042874C;
    case 66u: goto L_00428758;
    case 67u: goto L_00428768;
    case 68u: goto L_00428774;
    case 69u: goto L_00428780;
    case 70u: goto L_00428790;
    case 71u: goto L_0042879C;
    case 72u: goto L_004287A8;
    case 73u: goto L_004287B0;
    case 74u: goto L_004287BC;
    case 75u: goto L_004287DC;
    case 76u: goto L_00428840;
    case 77u: goto L_00428850;
    case 78u: goto L_0042887C;
    case 79u: goto L_00428888;
    case 80u: goto L_004288A4;
    case 81u: goto L_004288B0;
    case 82u: goto L_004288BC;
    case 83u: goto L_004288F8;
    case 84u: goto L_00428904;
    case 85u: goto L_00428910;
    case 86u: goto L_00428938;
    case 87u: goto L_00428944;
    case 88u: goto L_00428950;
    case 89u: goto L_00428990;
    case 90u: goto L_0042899C;
    case 91u: goto L_004289B0;
    case 92u: goto L_004289C0;
    case 93u: goto L_004289DC;
    case 94u: goto L_004289E8;
    case 95u: goto L_00428A20;
    case 96u: goto L_00428A48;
    case 97u: goto L_00428A54;
    case 98u: goto L_00428AA0;
    case 99u: goto L_00428AB0;
    case 100u: goto L_00428AB8;
    case 101u: goto L_00428AE8;
    case 102u: goto L_00428AF0;
    case 103u: goto L_00428B08;
    case 104u: goto L_00428B14;
    case 105u: goto L_00428B1C;
    case 106u: goto L_00428B28;
    case 107u: goto L_00428B34;
    case 108u: goto L_00428B4C;
    case 109u: goto L_00428BD0;
    case 110u: goto L_00428BF0;
    case 111u: goto L_00428C00;
    case 112u: goto L_00428C1C;
    case 113u: goto L_00428C30;
    case 114u: goto L_00428C40;
    case 115u: goto L_00428C4C;
    case 116u: goto L_00428C54;
    case 117u: goto L_00428C80;
    case 118u: goto L_00428C9C;
    case 119u: goto L_00428CA8;
    case 120u: goto L_00428CB8;
    case 121u: goto L_00428CDC;
    case 122u: goto L_00428CFC;
    case 123u: goto L_00428D0C;
    case 124u: goto L_00428D28;
    case 125u: goto L_00428D3C;
    case 126u: goto L_00428D4C;
    case 127u: goto L_00428D64;
    case 128u: goto L_00428D70;
    case 129u: goto L_00428D84;
    case 130u: goto L_00428DA4;
    case 131u: goto L_00428DB4;
    case 132u: goto L_00428DD0;
    case 133u: goto L_00428DE4;
    case 134u: goto L_00428DF4;
    case 135u: goto L_00428E08;
    case 136u: goto L_00428E10;
    case 137u: goto L_00428E30;
    case 138u: goto L_00428E60;
    case 139u: goto L_00428E84;
    case 140u: goto L_00428E94;
    case 141u: goto L_00428EB0;
    case 142u: goto L_00428EC0;
    case 143u: goto L_00428EDC;
    case 144u: goto L_00428EF0;
    case 145u: goto L_00428F00;
    case 146u: goto L_00428F0C;
    case 147u: goto L_00428F24;
    case 148u: goto L_00428F44;
    case 149u: goto L_00428F54;
    case 150u: goto L_00428F70;
    case 151u: goto L_00428F84;
    case 152u: goto L_00428F94;
    case 153u: goto L_00428FA0;
    case 154u: goto L_00428FC8;
    case 155u: goto L_00428FD4;
    case 156u: goto L_00428FEC;
    case 157u: goto L_0042900C;
    case 158u: goto L_0042901C;
    case 159u: goto L_00429038;
    case 160u: goto L_0042904C;
    case 161u: goto L_0042905C;
    case 162u: goto L_00429068;
    case 163u: goto L_00429090;
    case 164u: goto L_004290E0;
    case 165u: goto L_004290F8;
    case 166u: goto L_00429100;
    case 167u: goto L_00429108;
    case 168u: goto L_00429110;
    case 169u: goto L_00429118;
    case 170u: goto L_00429124;
    case 171u: goto L_00429134;
    case 172u: goto L_00429148;
    case 173u: goto L_00429168;
    case 174u: goto L_00429178;
    case 175u: goto L_00429194;
    case 176u: goto L_004291A8;
    case 177u: goto L_004291B8;
    case 178u: goto L_004291C4;
    case 179u: goto L_004291DC;
    case 180u: goto L_004291EC;
    case 181u: goto L_00429210;
    case 182u: goto L_00429258;
    case 183u: goto L_0042926C;
    case 184u: goto L_0042927C;
    case 185u: goto L_00429298;
    case 186u: goto L_004292AC;
    case 187u: goto L_004292C4;
    case 188u: goto L_004292D4;
    case 189u: goto L_004292F4;
    case 190u: goto L_00429304;
    case 191u: goto L_00429320;
    case 192u: goto L_00429340;
    case 193u: goto L_00429350;
    case 194u: goto L_0042936C;
    case 195u: goto L_0042938C;
    case 196u: goto L_0042939C;
    case 197u: goto L_004293B8;
    case 198u: goto L_004293D8;
    case 199u: goto L_004293E8;
    case 200u: goto L_00429404;
    case 201u: goto L_00429424;
    case 202u: goto L_00429434;
    case 203u: goto L_00429450;
    case 204u: goto L_00429470;
    case 205u: goto L_00429480;
    case 206u: goto L_0042949C;
    case 207u: goto L_004294BC;
    case 208u: goto L_004294CC;
    case 209u: goto L_004294E8;
    case 210u: goto L_00429508;
    case 211u: goto L_00429518;
    case 212u: goto L_00429534;
    case 213u: goto L_00429554;
    case 214u: goto L_00429564;
    case 215u: goto L_00429580;
    case 216u: goto L_004295A0;
    case 217u: goto L_004295B0;
    case 218u: goto L_004295CC;
    case 219u: goto L_004295F8;
    case 220u: goto L_00429620;
    case 221u: goto L_00429668;
    case 222u: goto L_00429678;
    case 223u: goto L_0042968C;
    case 224u: goto L_0042969C;
    case 225u: goto L_004296B0;
    case 226u: goto L_004296C0;
    case 227u: goto L_004296DC;
    case 228u: goto L_004296EC;
    case 229u: goto L_00429700;
    case 230u: goto L_00429710;
    case 231u: goto L_00429728;
    case 232u: goto L_00429738;
    case 233u: goto L_0042974C;
    case 234u: goto L_0042975C;
    case 235u: goto L_00429770;
    case 236u: goto L_00429780;
    case 237u: goto L_00429794;
    case 238u: goto L_004297A4;
    case 239u: goto L_004297B8;
    case 240u: goto L_004297C8;
    case 241u: goto L_004297E0;
    case 242u: goto L_00429800;
    case 243u: goto L_00429838;
    case 244u: goto L_0042987C;
    case 245u: goto L_00429890;
    case 246u: goto L_004298BC;
    case 247u: goto L_004298D0;
    case 248u: goto L_004298F4;
    case 249u: goto L_00429900;
    case 250u: goto L_00429920;
    case 251u: goto L_00429930;
    case 252u: goto L_00429950;
    case 253u: goto L_00429960;
    case 254u: goto L_00429984;
    case 255u: goto L_00429990;
    case 256u: goto L_004299B4;
    case 257u: goto L_004299D0;
    case 258u: goto L_00429A34;
    case 259u: goto L_00429A4C;
    case 260u: goto L_00429A70;
    case 261u: goto L_00429A94;
    case 262u: goto L_00429AC0;
    case 263u: goto L_00429AD8;
    case 264u: goto L_00429AF0;
    case 265u: goto L_00429B10;
    case 266u: goto L_00429B30;
    case 267u: goto L_00429B40;
    case 268u: goto L_00429B60;
    case 269u: goto L_00429B70;
    case 270u: goto L_00429B7C;
    case 271u: goto L_00429BB0;
    case 272u: goto L_00429BD8;
    case 273u: goto L_00429BE8;
    case 274u: goto L_00429BF4;
    case 275u: goto L_00429C30;
    case 276u: goto L_00429C60;
    case 277u: goto L_00429C70;
    case 278u: goto L_00429C7C;
    case 279u: goto L_00429CA0;
    case 280u: goto L_00429CB4;
    case 281u: goto L_00429CC0;
    case 282u: goto L_00429CE0;
    case 283u: goto L_00429D0C;
    case 284u: goto L_00429D24;
    case 285u: goto L_00429D40;
    case 286u: goto L_00429D50;
    case 287u: goto L_00429D64;
    case 288u: goto L_00429D80;
    case 289u: goto L_00429D90;
    case 290u: goto L_00429DA0;
    case 291u: goto L_00429DD0;
    case 292u: goto L_00429DE4;
    case 293u: goto L_00429E14;
    case 294u: goto L_00429E40;
    case 295u: goto L_00429E60;
    case 296u: goto L_00429EB0;
    case 297u: goto L_00429EC8;
    case 298u: goto L_00429EE0;
    case 299u: goto L_00429F04;
    case 300u: goto L_00429F0C;
    case 301u: goto L_00429F14;
    case 302u: goto L_00429F24;
    case 303u: goto L_00429F40;
    case 304u: goto L_00429F4C;
    case 305u: goto L_00429F58;
    case 306u: goto L_00429F68;
    case 307u: goto L_00429F84;
    case 308u: goto L_00429FB0;
    case 309u: goto L_00429FD0;
    case 310u: goto L_00429FEC;
    case 311u: goto L_0042A010;
    case 312u: goto L_0042A020;
    case 313u: goto L_0042A030;
    case 314u: goto L_0042A040;
    case 315u: goto L_0042A074;
    case 316u: goto L_0042A07C;
    case 317u: goto L_0042A0AC;
    case 318u: goto L_0042A0E0;
    case 319u: goto L_0042A128;
    case 320u: goto L_0042A13C;
    case 321u: goto L_0042A148;
    case 322u: goto L_0042A154;
    case 323u: goto L_0042A15C;
    case 324u: goto L_0042A16C;
    case 325u: goto L_0042A18C;
    case 326u: goto L_0042A1A0;
    case 327u: goto L_0042A1AC;
    case 328u: goto L_0042A1B8;
    case 329u: goto L_0042A1C0;
    case 330u: goto L_0042A1D0;
    case 331u: goto L_0042A1DC;
    case 332u: goto L_0042A1E8;
    case 333u: goto L_0042A1F0;
    case 334u: goto L_0042A200;
    case 335u: goto L_0042A22C;
    case 336u: goto L_0042A240;
    case 337u: goto L_0042A24C;
    case 338u: goto L_0042A258;
    case 339u: goto L_0042A260;
    case 340u: goto L_0042A270;
    case 341u: goto L_0042A290;
    case 342u: goto L_0042A2A4;
    case 343u: goto L_0042A2B0;
    case 344u: goto L_0042A2BC;
    case 345u: goto L_0042A2C4;
    case 346u: goto L_0042A2D4;
    case 347u: goto L_0042A2E0;
    case 348u: goto L_0042A2EC;
    case 349u: goto L_0042A2F4;
    case 350u: goto L_0042A304;
    case 351u: goto L_0042A344;
    case 352u: goto L_0042A354;
    case 353u: goto L_0042A370;
    case 354u: goto L_0042A384;
    case 355u: goto L_0042A390;
    case 356u: goto L_0042A3A0;
    case 357u: goto L_0042A3E0;
    case 358u: goto L_0042A3F0;
    case 359u: goto L_0042A400;
    case 360u: goto L_0042A44C;
    case 361u: goto L_0042A458;
    case 362u: goto L_0042A494;
    case 363u: goto L_0042A4B4;
    case 364u: goto L_0042A500;
    case 365u: goto L_0042A530;
    case 366u: goto L_0042A58C;
    case 367u: goto L_0042A594;
    case 368u: goto L_0042A5A0;
    case 369u: goto L_0042A5BC;
    case 370u: goto L_0042A604;
    case 371u: goto L_0042A640;
    case 372u: goto L_0042A650;
    case 373u: goto L_0042A660;
    case 374u: goto L_0042A67C;
    case 375u: goto L_0042A684;
    case 376u: goto L_0042A690;
    case 377u: goto L_0042A6B4;
    case 378u: goto L_0042A6CC;
    case 379u: goto L_0042A6EC;
    case 380u: goto L_0042A6F8;
    case 381u: goto L_0042A724;
    case 382u: goto L_0042A734;
    case 383u: goto L_0042A744;
    case 384u: goto L_0042A760;
    case 385u: goto L_0042A77C;
    case 386u: goto L_0042A788;
    case 387u: goto L_0042A7A0;
    case 388u: goto L_0042A7C4;
    case 389u: goto L_0042A7E0;
    case 390u: goto L_0042A7F0;
    case 391u: goto L_0042A808;
    case 392u: goto L_0042A814;
    case 393u: goto L_0042A828;
    case 394u: goto L_0042A844;
    case 395u: goto L_0042A854;
    case 396u: goto L_0042A868;
    case 397u: goto L_0042A884;
    case 398u: goto L_0042A894;
    case 399u: goto L_0042A8A8;
    case 400u: goto L_0042A8C4;
    case 401u: goto L_0042A8D4;
    case 402u: goto L_0042A8E8;
    case 403u: goto L_0042A8FC;
    case 404u: goto L_0042A918;
    case 405u: goto L_0042A928;
    case 406u: goto L_0042A93C;
    case 407u: goto L_0042A950;
    case 408u: goto L_0042A99C;
    case 409u: goto L_0042A9B0;
    case 410u: goto L_0042A9B8;
    case 411u: goto L_0042A9C4;
    case 412u: goto L_0042A9E0;
    case 413u: goto L_0042AA0C;
    case 414u: goto L_0042AA64;
    case 415u: goto L_0042AA7C;
    case 416u: goto L_0042AA94;
    case 417u: goto L_0042AAA8;
    case 418u: goto L_0042AAC0;
    case 419u: goto L_0042AAF0;
    case 420u: goto L_0042AB08;
    case 421u: goto L_0042AB2C;
    case 422u: goto L_0042AB3C;
    case 423u: goto L_0042AB90;
    case 424u: goto L_0042ABB0;
    case 425u: goto L_0042ABE0;
    case 426u: goto L_0042ABFC;
    case 427u: goto L_0042AC20;
    case 428u: goto L_0042AC5C;
    case 429u: goto L_0042AC7C;
    case 430u: goto L_0042ACB0;
    case 431u: goto L_0042ACD0;
    case 432u: goto L_0042ACF0;
    case 433u: goto L_0042AD08;
    case 434u: goto L_0042AD20;
    case 435u: goto L_0042AD40;
    case 436u: goto L_0042AD60;
    case 437u: goto L_0042AD78;
    case 438u: goto L_0042AD90;
    case 439u: goto L_0042ADFC;
    case 440u: goto L_0042AE08;
    case 441u: goto L_0042AE18;
    case 442u: goto L_0042AE30;
    case 443u: goto L_0042AE40;
    case 444u: goto L_0042AE54;
    case 445u: goto L_0042AE68;
    case 446u: goto L_0042AE80;
    case 447u: goto L_0042AE98;
    case 448u: goto L_0042AEC4;
    case 449u: goto L_0042AED8;
    case 450u: goto L_0042AEF4;
    case 451u: goto L_0042AF1C;
    case 452u: goto L_0042AF34;
    case 453u: goto L_0042AF5C;
    case 454u: goto L_0042AF88;
    case 455u: goto L_0042AFB0;
    case 456u: goto L_0042AFD0;
    case 457u: goto L_0042AFEC;
    case 458u: goto L_0042B000;
    case 459u: goto L_0042B010;
    case 460u: goto L_0042B080;
    case 461u: goto L_0042B08C;
    case 462u: goto L_0042B0A0;
    case 463u: goto L_0042B0AC;
    case 464u: goto L_0042B0B8;
    case 465u: goto L_0042B0D0;
    case 466u: goto L_0042B0EC;
    case 467u: goto L_0042B124;
    case 468u: goto L_0042B148;
    case 469u: goto L_0042B160;
    case 470u: goto L_0042B180;
    case 471u: goto L_0042B19C;
    case 472u: goto L_0042B1B0;
    case 473u: goto L_0042B1D0;
    case 474u: goto L_0042B1DC;
    case 475u: goto L_0042B220;
    case 476u: goto L_0042B240;
    case 477u: goto L_0042B25C;
    case 478u: goto L_0042B27C;
    case 479u: goto L_0042B298;
    case 480u: goto L_0042B304;
    case 481u: goto L_0042B318;
    case 482u: goto L_0042B32C;
    case 483u: goto L_0042B33C;
    case 484u: goto L_0042B360;
    case 485u: goto L_0042B398;
    case 486u: goto L_0042B3B0;
    case 487u: goto L_0042B3D4;
    case 488u: goto L_0042B3F0;
    case 489u: goto L_0042B414;
    case 490u: goto L_0042B42C;
    case 491u: goto L_0042B450;
    case 492u: goto L_0042B460;
    case 493u: goto L_0042B484;
    case 494u: goto L_0042B490;
    case 495u: goto L_0042B4A0;
    case 496u: goto L_0042B4B0;
    case 497u: goto L_0042B4C0;
    case 498u: goto L_0042B4D0;
    case 499u: goto L_0042B4E0;
    case 500u: goto L_0042B4F0;
    case 501u: goto L_0042B500;
    case 502u: goto L_0042B510;
    case 503u: goto L_0042B520;
    case 504u: goto L_0042B530;
    case 505u: goto L_0042B540;
    case 506u: goto L_0042B578;
    case 507u: goto L_0042B594;
    case 508u: goto L_0042B5B0;
    case 509u: goto L_0042B5C4;
    case 510u: goto L_0042B5D4;
    case 511u: goto L_0042B5DC;
    case 512u: goto L_0042B624;
    case 513u: goto L_0042B66C;
    case 514u: goto L_0042B6B0;
    case 515u: goto L_0042B6D4;
    case 516u: goto L_0042B70C;
    case 517u: goto L_0042B728;
    case 518u: goto L_0042B79C;
    case 519u: goto L_0042B7AC;
    case 520u: goto L_0042B7C0;
    case 521u: goto L_0042B7DC;
    case 522u: goto L_0042B7E4;
    case 523u: goto L_0042B7F8;
    case 524u: goto L_0042B818;
    case 525u: goto L_0042B82C;
    case 526u: goto L_0042B840;
    case 527u: goto L_0042B854;
    case 528u: goto L_0042B888;
    case 529u: goto L_0042B8B0;
    case 530u: goto L_0042B8C4;
    case 531u: goto L_0042B8D8;
    case 532u: goto L_0042B8F0;
    case 533u: goto L_0042B910;
    case 534u: goto L_0042B920;
    case 535u: goto L_0042B940;
    case 536u: goto L_0042B954;
    case 537u: goto L_0042B9BC;
    case 538u: goto L_0042B9D4;
    case 539u: goto L_0042B9F4;
    case 540u: goto L_0042BA24;
    case 541u: goto L_0042BA50;
    case 542u: goto L_0042BA7C;
    case 543u: goto L_0042BAC0;
    case 544u: goto L_0042BB04;
    case 545u: goto L_0042BB34;
    case 546u: goto L_0042BB60;
    case 547u: goto L_0042BB6C;
    case 548u: goto L_0042BB80;
    case 549u: goto L_0042BB94;
    case 550u: goto L_0042BBC8;
    case 551u: goto L_0042BBEC;
    case 552u: goto L_0042BC0C;
    case 553u: goto L_0042BC2C;
    case 554u: goto L_0042BC60;
    case 555u: goto L_0042BC74;
    case 556u: goto L_0042BC84;
    case 557u: goto L_0042BC9C;
    case 558u: goto L_0042BCB0;
    case 559u: goto L_0042BCD4;
    case 560u: goto L_0042BCF4;
    case 561u: goto L_0042BD04;
    case 562u: goto L_0042BD28;
    case 563u: goto L_0042BD38;
    case 564u: goto L_0042BD4C;
    case 565u: goto L_0042BD74;
    case 566u: goto L_0042BD80;
    case 567u: goto L_0042BDA4;
    case 568u: goto L_0042BDB8;
    case 569u: goto L_0042BDCC;
    case 570u: goto L_0042BDDC;
    case 571u: goto L_0042BDEC;
    case 572u: goto L_0042BE00;
    case 573u: goto L_0042BE2C;
    case 574u: goto L_0042BE64;
    case 575u: goto L_0042BE84;
    case 576u: goto L_0042BE98;
    case 577u: goto L_0042BEB8;
    case 578u: goto L_0042BEF4;
    case 579u: goto L_0042BF04;
    case 580u: goto L_0042BF0C;
    case 581u: goto L_0042BF18;
    case 582u: goto L_0042BF34;
    case 583u: goto L_0042BF48;
    case 584u: goto L_0042BF68;
    case 585u: goto L_0042BF84;
    case 586u: goto L_0042BFA8;
    case 587u: goto L_0042BFC8;
    case 588u: goto L_0042BFF0;
    default: bad_entry(c, 0x00428000u); return;
    }
L_00428000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428008u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x00428008u) [[unlikely]] return; }
L_00428008:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428018u); set32(c.r[4], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x00428018u) [[unlikely]] return; }
L_00428018:
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428024u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x00428024u) [[unlikely]] return; }
L_00428024:
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428030u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x00428030u) [[unlikely]] return; }
L_00428030:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00428048u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00428048u) [[unlikely]] return; }
L_00428048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428050u); set32(c.r[4], ld32((c.r[19].w[0] + 20u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x00428050u) [[unlikely]] return; }
L_00428050:
    set32(c.r[16], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 128u)));  goto L_00428094; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428064u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00428064u) [[unlikely]] return; }
L_00428064:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428074u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00428074u) [[unlikely]] return; }
L_00428074:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00428090; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00428090u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00428090u) [[unlikely]] return; }
L_00428090:
    set32(c.r[4], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 1;
L_00428094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042809Cu);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0042809Cu) [[unlikely]] return; }
L_0042809C:
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
L_004280D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004280F8u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004280F8u) [[unlikely]] return; }
L_004280F8:
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428104u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00428104u) [[unlikely]] return; }
L_00428104:
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428114u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00428114u) [[unlikely]] return; }
L_00428114:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428130u); set32(c.r[8], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00428130u) [[unlikely]] return; }
L_00428130:
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[4], 0u + 48u);
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[5], 0u + 1u);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    st32((c.r[2].w[0]), c.f[0]);
    st32((c.r[2].w[0] + 4u), c.f[1]);
    st32((c.r[2].w[0] + 8u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    st32((c.r[2].w[0] + 16u), c.f[1]);
    st32((c.r[2].w[0] + 20u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.f[1] = fp::add(c.f[1], c.f[20]);
    st32((c.r[2].w[0] + 24u), c.f[0]);
    st32((c.r[2].w[0] + 28u), c.f[1]);
    st32((c.r[2].w[0] + 32u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.f[1] = fp::add(c.f[1], c.f[20]);
    st32((c.r[2].w[0] + 36u), c.f[0]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004281C0u); st32((c.r[2].w[0] + 44u), c.f[2]);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x004281C0u) [[unlikely]] return; }
L_004281C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 28784u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004281DCu); set32(c.r[8], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x004281DCu) [[unlikely]] return; }
L_004281DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 24u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 24u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428210u); st32((c.r[2].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00428210u) [[unlikely]] return; }
L_00428210:
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], 0u + 3u);
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 1u);
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 256u);
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[2].w[0] + 18u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428258u); st16((c.r[2].w[0] + 22u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00428258u) [[unlikely]] return; }
L_00428258:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 120u)));  goto L_00428298; }
    set32(c.r[5], 0u + 4u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[5].d[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428290u); st64((c.r[29].w[0] + 8u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0087(c, 344u, depth + 1u); else { c.pc = 0x0031F1F0u; return; } if (c.pc != 0x00428290u) [[unlikely]] return; }
L_00428290:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 2;
L_00428298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004282A0u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004282A0u) [[unlikely]] return; }
L_004282A0:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004282D0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428300u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x00428300u) [[unlikely]] return; }
L_00428300:
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042830Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0042830Cu) [[unlikely]] return; }
L_0042830C:
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[4], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042831Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0042831Cu) [[unlikely]] return; }
L_0042831C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 44u)));  goto L_00428340; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 15071u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042833Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 152u, depth + 1u); else { c.pc = 0x001F94E0u; return; } if (c.pc != 0x0042833Cu) [[unlikely]] return; }
L_0042833C:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 1;
L_00428340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428348u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x00428348u) [[unlikely]] return; }
L_00428348:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428354u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00428354u) [[unlikely]] return; }
L_00428354:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 44u)));  goto L_00428374; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 15081u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428370u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_003F(c, 82u, depth + 1u); else { c.pc = 0x001FD180u; return; } if (c.pc != 0x00428370u) [[unlikely]] return; }
L_00428370:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 1;
L_00428374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042837Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x0042837Cu) [[unlikely]] return; }
L_0042837C:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428388u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00428388u) [[unlikely]] return; }
L_00428388:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 44u)));  goto L_004283A4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004283A0u); set32(c.r[5], c.r[5].w[0] + 15093u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214210u; return; } if (c.pc != 0x004283A0u) [[unlikely]] return; }
L_004283A0:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 1;
L_004283A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004283ACu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004283ACu) [[unlikely]] return; }
L_004283AC:
    set32(c.r[4], 0u + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004283B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004283B8u) [[unlikely]] return; }
L_004283B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00428428; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004283C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x004283C8u) [[unlikely]] return; }
L_004283C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004283E4u); st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE4B0u; return; } if (c.pc != 0x004283E4u) [[unlikely]] return; }
L_004283E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004283F0u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002F(c, 181u, depth + 1u); else { c.pc = 0x001BE480u; return; } if (c.pc != 0x004283F0u) [[unlikely]] return; }
L_004283F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004283FCu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BE450u; return; } if (c.pc != 0x004283FCu) [[unlikely]] return; }
L_004283FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428408u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 179u, depth + 1u); else { c.pc = 0x001BE420u; return; } if (c.pc != 0x00428408u) [[unlikely]] return; }
L_00428408:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428414u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 178u, depth + 1u); else { c.pc = 0x001BE400u; return; } if (c.pc != 0x00428414u) [[unlikely]] return; }
L_00428414:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428420u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 177u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x00428420u) [[unlikely]] return; }
L_00428420:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00428428:
    c.r[6].d[0] = ld16((c.r[17].w[0] + 28u));
    set32(c.r[5], 0u - 31u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], 0u - 481u);
    set32(c.r[2], 0u - 7169u);
    set32(c.r[4], 0u + 32u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[6].d[0] = c.r[6].d[0] | 12ull;
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 224ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428490u); st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00428490u) [[unlikely]] return; }
L_00428490:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004284E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004284A0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x004284A0u) [[unlikely]] return; }
L_004284A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 13520u);
    set32(c.r[3], c.r[3].w[0] + 19920u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 61u);
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
L_004284E8:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    set32(c.r[2], 0u - 61u);
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428520u); st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00428520u) [[unlikely]] return; }
L_00428520:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00428570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428530u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x00428530u) [[unlikely]] return; }
L_00428530:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    set32(c.r[2], c.r[2].w[0] + 19632u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 49u);
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
L_00428570:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 28u));
    set32(c.r[3], 0u - 9u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], 0u - 49u);
    set32(c.r[4], c.r[4].w[0] + 15102u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004285A0u); st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004285A0u) [[unlikely]] return; }
L_004285A0:
    st32((c.r[20].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004285B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x004285B0u) [[unlikely]] return; }
L_004285B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004285B8u); set32(c.r[4], ld32((c.r[20].w[0] + 88u)));  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x004285B8u) [[unlikely]] return; }
L_004285B8:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 172u), c.r[16].w[0]);  if (t) { goto L_004285DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004285CCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004285CCu) [[unlikely]] return; }
L_004285CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004285DCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004285DCu) [[unlikely]] return; }
L_004285DC:
    set32(c.r[4], 0u + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004285E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004285E8u) [[unlikely]] return; }
L_004285E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_00428604; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004285FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 404u, depth + 1u); else { c.pc = 0x0031B9B0u; return; } if (c.pc != 0x004285FCu) [[unlikely]] return; }
L_004285FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 2;
L_00428604:
    set32(c.r[23], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] != 0ull; set32(c.r[22], ld32((c.r[29].w[0] + 172u)));  if (t) { goto L_0042869C; } }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042861Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0042861Cu) [[unlikely]] return; }
L_0042861C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_00428630; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042862Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x0042862Cu) [[unlikely]] return; }
L_0042862C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_00428630:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[23].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00428654; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00428694; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00428694; } }
L_00428654:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_0042867C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_00428698; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00428694; } }
L_0042867C:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00428694; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00428694:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_00428698:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0042869C:
    set32(c.r[21], ld32((c.r[23].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[21].d[0] == c.r[22].d[0]) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_0042870C; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[23].w[0] + 8u), c.r[22].w[0]);  goto L_004286E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004286B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004286B8u) [[unlikely]] return; }
L_004286B8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004286C8u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004286C8u) [[unlikely]] return; }
L_004286C8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004286E4; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004286E4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004286E4u) [[unlikely]] return; }
L_004286E4:
    st32((c.r[23].w[0] + 8u), c.r[22].w[0]);
    c.budget -= 1;
L_004286E8:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00428708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004286F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004286F8u) [[unlikely]] return; }
L_004286F8:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428708u); st32((c.r[22].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00428708u) [[unlikely]] return; }
L_00428708:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042870C:
    set32(c.r[17], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428718u); set32(c.r[4], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x00428718u) [[unlikely]] return; }
L_00428718:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428724u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x00428724u) [[unlikely]] return; }
L_00428724:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428730u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x00428730u) [[unlikely]] return; }
L_00428730:
    set32(c.r[17], ld32((c.r[20].w[0] + 44u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428740u); set32(c.r[4], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x00428740u) [[unlikely]] return; }
L_00428740:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042874Cu); set32(c.r[5], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x0042874Cu) [[unlikely]] return; }
L_0042874C:
    set32(c.r[4], c.r[29].w[0] + 164u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428758u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x00428758u) [[unlikely]] return; }
L_00428758:
    set32(c.r[17], ld32((c.r[20].w[0] + 44u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428768u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x00428768u) [[unlikely]] return; }
L_00428768:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428774u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x00428774u) [[unlikely]] return; }
L_00428774:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428780u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x00428780u) [[unlikely]] return; }
L_00428780:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428790u); set32(c.r[4], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x00428790u) [[unlikely]] return; }
L_00428790:
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042879Cu); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x0042879Cu) [[unlikely]] return; }
L_0042879C:
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004287A8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004287A8u) [[unlikely]] return; }
L_004287A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004287B0u); set32(c.r[4], ld32((c.r[20].w[0] + 44u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004287B0u) [[unlikely]] return; }
L_004287B0:
    set32(c.r[4], 0u + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004287BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x004287BCu) [[unlikely]] return; }
L_004287BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 13328u);
    set32(c.r[6], c.r[6].w[0] + 13248u);
    set32(c.r[7], 0u + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004287DCu); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x004287DCu) [[unlikely]] return; }
L_004287DC:
    c.f[2] = ld32((c.r[28].w[0] - 31760u));
    st32((c.r[2].w[0]), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[2].w[0] + 16u), c.r[7].w[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32304u));
    st32((c.r[2].w[0] + 20u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    st32((c.r[2].w[0] + 24u), 0u);
    c.f[0] = ld32((c.r[28].w[0] - 31756u));
    st32((c.r[2].w[0] + 28u), c.f[1]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 32u), c.r[6].w[0]);
    set32(c.r[4], 0u + 24u);
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 56u), c.f[0]);
    st32((c.r[2].w[0] + 60u), c.f[1]);
    st32((c.r[2].w[0] + 64u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 80u), 0u);
    st32((c.r[2].w[0] + 84u), 0u);
    st32((c.r[2].w[0] + 88u), 0u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428840u); st32((c.r[2].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00428840u) [[unlikely]] return; }
L_00428840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00428868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428850u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x00428850u) [[unlikely]] return; }
L_00428850:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 432u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 6;
L_00428868:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042887Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0053(c, 233u, depth + 1u); else { c.pc = 0x0024E040u; return; } if (c.pc != 0x0042887Cu) [[unlikely]] return; }
L_0042887C:
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428888u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00428888u) [[unlikely]] return; }
L_00428888:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 44u)));  goto L_004288A8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004288A4u); set32(c.r[5], c.r[5].w[0] + 15126u);  if (depth < kMaxDepth) unit_003F(c, 336u, depth + 1u); else { c.pc = 0x001FF0E0u; return; } if (c.pc != 0x004288A4u) [[unlikely]] return; }
L_004288A4:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 1;
L_004288A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004288B0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004288B0u) [[unlikely]] return; }
L_004288B0:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004288BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004288BCu) [[unlikely]] return; }
L_004288BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 44u)));  goto L_004288FC; }
    set32(c.r[6], ld32((c.r[20].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    set32(c.r[5], c.r[5].w[0] + 15132u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.f[14] = c.f[13];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004288F8u); set32(c.r[9], c.r[9].w[0] + 31040u);  if (depth < kMaxDepth) unit_0040(c, 89u, depth + 1u); else { c.pc = 0x002011C0u; return; } if (c.pc != 0x004288F8u) [[unlikely]] return; }
L_004288F8:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 1;
L_004288FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428904u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x00428904u) [[unlikely]] return; }
L_00428904:
    set32(c.r[4], 0u + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428910u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00428910u) [[unlikely]] return; }
L_00428910:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 44u)));  goto L_0042893C; }
    c.f[12] = ld32((c.r[28].w[0] - 32564u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 15137u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428938u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0042(c, 177u, depth + 1u); else { c.pc = 0x00209CD0u; return; } if (c.pc != 0x00428938u) [[unlikely]] return; }
L_00428938:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 1;
L_0042893C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428944u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x00428944u) [[unlikely]] return; }
L_00428944:
    set32(c.r[4], 0u + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428950u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00428950u) [[unlikely]] return; }
L_00428950:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 44u)));  goto L_00428994; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[12] = c.r[4].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], 0u + 1u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[13] = ld32((c.r[28].w[0] - 32344u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[15] = c.r[3].w[0];
    set32(c.r[5], c.r[5].w[0] + 15147u);
    c.f[14] = 0u;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428990u); set32(c.r[8], c.r[8].w[0] + 31040u);  if (depth < kMaxDepth) unit_0045(c, 159u, depth + 1u); else { c.pc = 0x002159D0u; return; } if (c.pc != 0x00428990u) [[unlikely]] return; }
L_00428990:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 1;
L_00428994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042899Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x0042899Cu) [[unlikely]] return; }
L_0042899C:
    set32(c.r[16], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 144u)));  goto L_004289E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004289B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004289B0u) [[unlikely]] return; }
L_004289B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004289C0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004289C0u) [[unlikely]] return; }
L_004289C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004289DC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004289DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004289DCu) [[unlikely]] return; }
L_004289DC:
    set32(c.r[4], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 1;
L_004289E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004289E8u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004289E8u) [[unlikely]] return; }
L_004289E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00428A20:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), c.f[22]);
    st32((c.r[29].w[0] + 36u), c.f[21]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428A48u); st32((c.r[29].w[0] + 32u), c.f[20]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x00428A48u) [[unlikely]] return; }
L_00428A48:
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428A54u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00428A54u) [[unlikely]] return; }
L_00428A54:
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25592u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00428A88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 15008u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[2].w[0] + 15012u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[2].w[0] + 15016u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 25592u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_00428A88:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428AA0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_00BB(c, 112u, depth + 1u); else { c.pc = 0x003ED5E0u; return; } if (c.pc != 0x00428AA0u) [[unlikely]] return; }
L_00428AA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428AB0u); set32(c.r[4], c.r[4].w[0] + 15008u);  if (depth < kMaxDepth) unit_0046(c, 279u, depth + 1u); else { c.pc = 0x0021AB00u; return; } if (c.pc != 0x00428AB0u) [[unlikely]] return; }
L_00428AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428AB8u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00BB(c, 111u, depth + 1u); else { c.pc = 0x003ED5D0u; return; } if (c.pc != 0x00428AB8u) [[unlikely]] return; }
L_00428AB8:
    c.f[22] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[0] = ld32((c.r[2].w[0] + 15032u));
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.f[1] = ld32((c.r[28].w[0] - 32028u));
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[12] = ld32((c.r[2].w[0] + 15008u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[13] = ld32((c.r[2].w[0] + 15012u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428AE8u); c.f[20] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00BB(c, 112u, depth + 1u); else { c.pc = 0x003ED5E0u; return; } if (c.pc != 0x00428AE8u) [[unlikely]] return; }
L_00428AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428AF0u); set32(c.r[4], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x00428AF0u) [[unlikely]] return; }
L_00428AF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428B08u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_00BB(c, 112u, depth + 1u); else { c.pc = 0x003ED5E0u; return; } if (c.pc != 0x00428B08u) [[unlikely]] return; }
L_00428B08:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428B14u); set32(c.r[4], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0046(c, 279u, depth + 1u); else { c.pc = 0x0021AB00u; return; } if (c.pc != 0x00428B14u) [[unlikely]] return; }
L_00428B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428B1Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00BB(c, 111u, depth + 1u); else { c.pc = 0x003ED5D0u; return; } if (c.pc != 0x00428B1Cu) [[unlikely]] return; }
L_00428B1C:
    c.f[12] = ld32((c.r[29].w[0] + 156u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428B28u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00428B28u) [[unlikely]] return; }
L_00428B28:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428B34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 216u, depth + 1u); else { c.pc = 0x003BDD40u; return; } if (c.pc != 0x00428B34u) [[unlikely]] return; }
L_00428B34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 112u);  goto L_00428B44; }
    c.f[21] = c.f[21] ^ fp::kSign;
    set32(c.r[4], 0u + 112u);
    c.budget -= 2;
L_00428B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428B4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00428B4Cu) [[unlikely]] return; }
L_00428B4C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 56u)));  goto L_00428BD8; }
    c.f[4] = ld32((c.r[17].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = ld32((c.r[17].w[0] + 84u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[28].w[0] - 32344u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[15] = c.f[22];
    set32(c.r[7], c.r[7].w[0] + 18144u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.f[17] = c.f[21];
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    c.f[16] = c.f[20];
    c.f[18] = c.f[20];
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 72u));
    set32(c.r[5], ld32((c.r[28].w[0] - 30220u)));
    c.f[1] = ld32((c.r[17].w[0] + 76u));
    set32(c.r[6], ld32((c.r[17].w[0] + 52u)));
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[13] = fp::mul(c.f[3], c.f[2]);
    c.f[14] = fp::mul(c.f[3], c.f[1]);
    c.f[12] = c.r[2].w[0];
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428BD0u); c.f[19] = fp::mul(c.f[3], c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 300u, depth + 1u); else { c.pc = 0x00216FE0u; return; } if (c.pc != 0x00428BD0u) [[unlikely]] return; }
L_00428BD0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 2;
L_00428BD8:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 44u)));  goto L_00428C44; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 56u), c.r[16].w[0]);  goto L_00428C20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428BF0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00428BF0u) [[unlikely]] return; }
L_00428BF0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428C00u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00428C00u) [[unlikely]] return; }
L_00428C00:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00428C1C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00428C1Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00428C1Cu) [[unlikely]] return; }
L_00428C1C:
    st32((c.r[17].w[0] + 56u), c.r[16].w[0]);
    c.budget -= 1;
L_00428C20:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00428C40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428C30u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00428C30u) [[unlikely]] return; }
L_00428C30:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428C40u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00428C40u) [[unlikely]] return; }
L_00428C40:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_00428C44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428C4Cu); set32(c.r[5], ld32((c.r[17].w[0] + 56u)));  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x00428C4Cu) [[unlikely]] return; }
L_00428C4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428C54u); set32(c.r[4], ld32((c.r[29].w[0] + 168u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00428C54u) [[unlikely]] return; }
L_00428C54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[22] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00428C80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428C9Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x00428C9Cu) [[unlikely]] return; }
L_00428C9C:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428CA8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00428CA8u) [[unlikely]] return; }
L_00428CA8:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], 0u + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428CB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00428CB8u) [[unlikely]] return; }
L_00428CB8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 44u)));  goto L_00428CE4; }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 60u));
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428CDCu); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 103u, depth + 1u); else { c.pc = 0x001F8DE0u; return; } if (c.pc != 0x00428CDCu) [[unlikely]] return; }
L_00428CDC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 2;
L_00428CE4:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_00428D50; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 44u), c.r[16].w[0]);  goto L_00428D2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428CFCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00428CFCu) [[unlikely]] return; }
L_00428CFC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428D0Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00428D0Cu) [[unlikely]] return; }
L_00428D0C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00428D28; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00428D28u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00428D28u) [[unlikely]] return; }
L_00428D28:
    st32((c.r[17].w[0] + 44u), c.r[16].w[0]);
    c.budget -= 1;
L_00428D2C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00428D4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428D3Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00428D3Cu) [[unlikely]] return; }
L_00428D3C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428D4Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00428D4Cu) [[unlikely]] return; }
L_00428D4C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_00428D50:
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00428D64u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00428D64u) [[unlikely]] return; }
L_00428D64:
    set32(c.r[4], 0u + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428D70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00428D70u) [[unlikely]] return; }
L_00428D70:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 48u)));  goto L_00428D8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428D84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 72u, depth + 1u); else { c.pc = 0x00218DC0u; return; } if (c.pc != 0x00428D84u) [[unlikely]] return; }
L_00428D84:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 2;
L_00428D8C:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 48u)));  goto L_00428DF8; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 48u), c.r[16].w[0]);  goto L_00428DD4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428DA4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00428DA4u) [[unlikely]] return; }
L_00428DA4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428DB4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00428DB4u) [[unlikely]] return; }
L_00428DB4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00428DD0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00428DD0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00428DD0u) [[unlikely]] return; }
L_00428DD0:
    st32((c.r[17].w[0] + 48u), c.r[16].w[0]);
    c.budget -= 1;
L_00428DD4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00428DF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428DE4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00428DE4u) [[unlikely]] return; }
L_00428DE4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428DF4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00428DF4u) [[unlikely]] return; }
L_00428DF4:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 1;
L_00428DF8:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00428E08u); set32(c.r[5], ld32((c.r[17].w[0] + 44u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00428E08u) [[unlikely]] return; }
L_00428E08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428E10u); set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00428E10u) [[unlikely]] return; }
L_00428E10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00428E30:
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    c.f[12] = 0u;
    st8((c.r[3].w[0] + 280u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00428000u < 16384u) { entry = entries_00CA[(t - 0x00428000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00428E60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428E84u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x00428E84u) [[unlikely]] return; }
L_00428E84:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428E94u); st32((c.r[29].w[0] + 92u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00428E94u) [[unlikely]] return; }
L_00428E94:
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[19].d[0]; st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_00428F00; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), c.r[19].w[0]);  goto L_00428EE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428EB0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00428EB0u) [[unlikely]] return; }
L_00428EB0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428EC0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00428EC0u) [[unlikely]] return; }
L_00428EC0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00428EDC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00428EDCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00428EDCu) [[unlikely]] return; }
L_00428EDC:
    st32((c.r[17].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_00428EE0:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], 0u + 256u);  goto L_00428F04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428EF0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00428EF0u) [[unlikely]] return; }
L_00428EF0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428F00u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00428F00u) [[unlikely]] return; }
L_00428F00:
    set32(c.r[4], 0u + 256u);
    c.budget -= 1;
L_00428F04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428F0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00428F0Cu) [[unlikely]] return; }
L_00428F0C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 8u)));  goto L_00428F2C; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428F24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x00428F24u) [[unlikely]] return; }
L_00428F24:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 2;
L_00428F2C:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[19].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_00428F98; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), c.r[19].w[0]);  goto L_00428F74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428F44u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00428F44u) [[unlikely]] return; }
L_00428F44:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428F54u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00428F54u) [[unlikely]] return; }
L_00428F54:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00428F70; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00428F70u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00428F70u) [[unlikely]] return; }
L_00428F70:
    st32((c.r[17].w[0] + 8u), c.r[19].w[0]);
    c.budget -= 1;
L_00428F74:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00428F94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428F84u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00428F84u) [[unlikely]] return; }
L_00428F84:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428F94u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00428F94u) [[unlikely]] return; }
L_00428F94:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_00428F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428FA0u);  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x00428FA0u) [[unlikely]] return; }
L_00428FA0:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00428FC8u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00428FC8u) [[unlikely]] return; }
L_00428FC8:
    set32(c.r[4], 0u + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428FD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00428FD4u) [[unlikely]] return; }
L_00428FD4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 52u)));  goto L_00428FF4; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00428FECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x00428FECu) [[unlikely]] return; }
L_00428FEC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 2;
L_00428FF4:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[19].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  goto L_00429060; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 52u), c.r[19].w[0]);  goto L_0042903C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042900Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0042900Cu) [[unlikely]] return; }
L_0042900C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042901Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0042901Cu) [[unlikely]] return; }
L_0042901C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00429038; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00429038u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00429038u) [[unlikely]] return; }
L_00429038:
    st32((c.r[17].w[0] + 52u), c.r[19].w[0]);
    c.budget -= 1;
L_0042903C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0042905C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042904Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0042904Cu) [[unlikely]] return; }
L_0042904C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042905Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0042905Cu) [[unlikely]] return; }
L_0042905C:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 1;
L_00429060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429068u);  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x00429068u) [[unlikely]] return; }
L_00429068:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00429090u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00429090u) [[unlikely]] return; }
L_00429090:
    set32(c.r[2], 0u + 800u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[17].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31764u));
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    st32((c.r[17].w[0] + 68u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 60u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004290E0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004290E0u) [[unlikely]] return; }
L_004290E0:
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[17].w[0] + 60u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004290F8u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x004290F8u) [[unlikely]] return; }
L_004290F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429100u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 117u, depth + 1u); else { c.pc = 0x00428C80u; return; } if (c.pc != 0x00429100u) [[unlikely]] return; }
L_00429100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429108u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 95u, depth + 1u); else { c.pc = 0x00428A20u; return; } if (c.pc != 0x00429108u) [[unlikely]] return; }
L_00429108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429110u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 23u, depth + 1u); else { c.pc = 0x004282D0u; return; } if (c.pc != 0x00429110u) [[unlikely]] return; }
L_00429110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429118u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 445u, depth + 1u); else { c.pc = 0x00427830u; return; } if (c.pc != 0x00429118u) [[unlikely]] return; }
L_00429118:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429124u); st32((c.r[29].w[0] + 84u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00429124u) [[unlikely]] return; }
L_00429124:
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], 0u + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429134u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00429134u) [[unlikely]] return; }
L_00429134:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 12u)));  goto L_00429150; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429148u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 11u, depth + 1u); else { c.pc = 0x004040C0u; return; } if (c.pc != 0x00429148u) [[unlikely]] return; }
L_00429148:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 2;
L_00429150:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 80u)));  goto L_004291BC; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 12u), c.r[16].w[0]);  goto L_00429198; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429168u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00429168u) [[unlikely]] return; }
L_00429168:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429178u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00429178u) [[unlikely]] return; }
L_00429178:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00429194; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00429194u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00429194u) [[unlikely]] return; }
L_00429194:
    st32((c.r[17].w[0] + 12u), c.r[16].w[0]);
    c.budget -= 1;
L_00429198:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004291B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004291A8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004291A8u) [[unlikely]] return; }
L_004291A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004291B8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004291B8u) [[unlikely]] return; }
L_004291B8:
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 1;
L_004291BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004291C4u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004291C4u) [[unlikely]] return; }
L_004291C4:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004291DCu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004291DCu) [[unlikely]] return; }
L_004291DC:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004291ECu); st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004291ECu) [[unlikely]] return; }
L_004291EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00429210:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004295F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 26432u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00429258u); set32(c.r[4], c.r[29].w[0] + 76u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00429258u) [[unlikely]] return; }
L_00429258:
    set32(c.r[18], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  goto L_0042929C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042926Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0042926Cu) [[unlikely]] return; }
L_0042926C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042927Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0042927Cu) [[unlikely]] return; }
L_0042927C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00429298; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00429298u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00429298u) [[unlikely]] return; }
L_00429298:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 1;
L_0042929C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  goto L_004292B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004292ACu);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x004292ACu) [[unlikely]] return; }
L_004292AC:
    st32((c.r[17].w[0] + 88u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 2;
L_004292B4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 92u)));  goto L_004292CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004292C4u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x004292C4u) [[unlikely]] return; }
L_004292C4:
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 2;
L_004292CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004292D4u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004292D4u) [[unlikely]] return; }
L_004292D4:
    set32(c.r[2], c.r[17].w[0] + 56u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_00429320; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 52u);  goto L_00429324; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004292F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004292F4u) [[unlikely]] return; }
L_004292F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429304u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00429304u) [[unlikely]] return; }
L_00429304:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00429320; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00429320u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00429320u) [[unlikely]] return; }
L_00429320:
    set32(c.r[2], c.r[17].w[0] + 52u);
    c.budget -= 1;
L_00429324:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 48u);  goto L_00429370; }
    set32(c.r[18], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0042936C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429340u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00429340u) [[unlikely]] return; }
L_00429340:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429350u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00429350u) [[unlikely]] return; }
L_00429350:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0042936C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042936Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042936Cu) [[unlikely]] return; }
L_0042936C:
    set32(c.r[2], c.r[17].w[0] + 48u);
    c.budget -= 1;
L_00429370:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 44u);  goto L_004293BC; }
    set32(c.r[18], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004293B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042938Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0042938Cu) [[unlikely]] return; }
L_0042938C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042939Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0042939Cu) [[unlikely]] return; }
L_0042939C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004293B8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004293B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004293B8u) [[unlikely]] return; }
L_004293B8:
    set32(c.r[2], c.r[17].w[0] + 44u);
    c.budget -= 1;
L_004293BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 32u);  goto L_00429408; }
    set32(c.r[18], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00429404; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004293D8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004293D8u) [[unlikely]] return; }
L_004293D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004293E8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004293E8u) [[unlikely]] return; }
L_004293E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00429404; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00429404u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00429404u) [[unlikely]] return; }
L_00429404:
    set32(c.r[2], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_00429408:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 24u);  goto L_00429454; }
    set32(c.r[18], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00429450; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429424u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00429424u) [[unlikely]] return; }
L_00429424:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429434u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00429434u) [[unlikely]] return; }
L_00429434:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00429450; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00429450u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00429450u) [[unlikely]] return; }
L_00429450:
    set32(c.r[2], c.r[17].w[0] + 24u);
    c.budget -= 1;
L_00429454:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 20u);  goto L_004294A0; }
    set32(c.r[18], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0042949C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429470u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00429470u) [[unlikely]] return; }
L_00429470:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429480u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00429480u) [[unlikely]] return; }
L_00429480:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0042949C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042949Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042949Cu) [[unlikely]] return; }
L_0042949C:
    set32(c.r[2], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_004294A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 12u);  goto L_004294EC; }
    set32(c.r[18], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004294E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004294BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004294BCu) [[unlikely]] return; }
L_004294BC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004294CCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004294CCu) [[unlikely]] return; }
L_004294CC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004294E8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004294E8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004294E8u) [[unlikely]] return; }
L_004294E8:
    set32(c.r[2], c.r[17].w[0] + 12u);
    c.budget -= 1;
L_004294EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 8u);  goto L_00429538; }
    set32(c.r[18], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00429534; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429508u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00429508u) [[unlikely]] return; }
L_00429508:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429518u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00429518u) [[unlikely]] return; }
L_00429518:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00429534; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00429534u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00429534u) [[unlikely]] return; }
L_00429534:
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_00429538:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_00429584; }
    set32(c.r[18], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00429580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429554u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00429554u) [[unlikely]] return; }
L_00429554:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429564u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00429564u) [[unlikely]] return; }
L_00429564:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00429580; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00429580u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00429580u) [[unlikely]] return; }
L_00429580:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_00429584:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004295CC; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004295CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004295A0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004295A0u) [[unlikely]] return; }
L_004295A0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004295B0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004295B0u) [[unlikely]] return; }
L_004295B0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004295CC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004295CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004295CCu) [[unlikely]] return; }
L_004295CC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004295E4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22384u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_004295E4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004295FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004295F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004295F8u) [[unlikely]] return; }
L_004295F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004295FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00429620:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 22384u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 26432u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 16;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[4].w[0] + 4u), 0u);  if (t) { goto L_00429678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429668u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00429668u) [[unlikely]] return; }
L_00429668:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429678u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00429678u) [[unlikely]] return; }
L_00429678:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_0042969C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042968Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0042968Cu) [[unlikely]] return; }
L_0042968C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042969Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0042969Cu) [[unlikely]] return; }
L_0042969C:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_004296C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004296B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004296B0u) [[unlikely]] return; }
L_004296B0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004296C0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004296C0u) [[unlikely]] return; }
L_004296C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 20u), 0u);  if (t) { goto L_004296EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004296DCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004296DCu) [[unlikely]] return; }
L_004296DC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004296ECu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004296ECu) [[unlikely]] return; }
L_004296EC:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 24u), 0u);  if (t) { goto L_00429710; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429700u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00429700u) [[unlikely]] return; }
L_00429700:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429710u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00429710u) [[unlikely]] return; }
L_00429710:
    st32((c.r[17].w[0] + 28u), 0u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 32u), 0u);  if (t) { goto L_00429738; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429728u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00429728u) [[unlikely]] return; }
L_00429728:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429738u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00429738u) [[unlikely]] return; }
L_00429738:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 44u), 0u);  if (t) { goto L_0042975C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042974Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0042974Cu) [[unlikely]] return; }
L_0042974C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042975Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0042975Cu) [[unlikely]] return; }
L_0042975C:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 48u), 0u);  if (t) { goto L_00429780; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429770u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00429770u) [[unlikely]] return; }
L_00429770:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429780u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00429780u) [[unlikely]] return; }
L_00429780:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_004297A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429794u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00429794u) [[unlikely]] return; }
L_00429794:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004297A4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004297A4u) [[unlikely]] return; }
L_004297A4:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 56u), 0u);  if (t) { goto L_004297C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004297B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004297B8u) [[unlikely]] return; }
L_004297B8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004297C8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004297C8u) [[unlikely]] return; }
L_004297C8:
    st32((c.r[17].w[0] + 88u), 0u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 92u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004297E0u); st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00CA(c, 138u, depth + 1u); else { c.pc = 0x00428E60u; return; } if (c.pc != 0x004297E0u) [[unlikely]] return; }
L_004297E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00429800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 40u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[29].w[0] + 28u), c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 28u)));  if (t) { goto L_00429840; } }
L_00429838:
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 2;
L_00429840:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[6].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 32u)));  goto L_00429860; }
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00429838u | kUnwind; return; } goto L_00429838; }
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 1;
L_00429860:
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_0042987C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042987Cu); set32(c.r[4], c.r[4].w[0] + 8u);  if (depth < kMaxDepth) unit_0009(c, 310u, depth + 1u); else { c.pc = 0x00127460u; return; } if (c.pc != 0x0042987Cu) [[unlikely]] return; }
L_0042987C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00429890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 28u);
    st32((c.r[29].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004298BCu); set32(c.r[4], c.r[4].w[0] + 8u);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x004298BCu) [[unlikely]] return; }
L_004298BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004298D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  goto L_004298EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004298F4; } }
L_004298EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004298F4u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00E5(c, 184u, depth + 1u); else { c.pc = 0x004955C0u; return; } if (c.pc != 0x004298F4u) [[unlikely]] return; }
L_004298F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00429900:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00429924; }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429920u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00E5(c, 185u, depth + 1u); else { c.pc = 0x00495600u; return; } if (c.pc != 0x00429920u) [[unlikely]] return; }
L_00429920:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00429924:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00429930:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00429954; }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429950u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00E5(c, 189u, depth + 1u); else { c.pc = 0x00495660u; return; } if (c.pc != 0x00429950u) [[unlikely]] return; }
L_00429950:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00429954:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00429960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00429988; }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429984u); c.f[12] = ld32((c.r[28].w[0] - 32640u));  if (depth < kMaxDepth) unit_00E5(c, 189u, depth + 1u); else { c.pc = 0x00495660u; return; } if (c.pc != 0x00429984u) [[unlikely]] return; }
L_00429984:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00429988:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00429990:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 25572u), 0u);  goto L_004299B8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004299B4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004299B4u) [[unlikely]] return; }
L_004299B4:
    st32((c.r[28].w[0] - 25572u), 0u);
    c.budget -= 1;
L_004299B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004299D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00429A4C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 26464u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00429A34; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00429A38; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00429A34; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00429A34; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00429A34; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00429A34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429A34u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00429A34u) [[unlikely]] return; }
L_00429A34:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00429A38:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00429A50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429A4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00429A4Cu) [[unlikely]] return; }
L_00429A4C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00429A50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00429A70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 24u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429A94u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00429A94u) [[unlikely]] return; }
L_00429A94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00429B10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[17].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 26464u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; st32((c.r[17].w[0] + 4u), c.r[18].w[0]);  if (t) { goto L_00429AF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429AC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00429AC0u) [[unlikely]] return; }
L_00429AC0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_00429AE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429AD8u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00429AD8u) [[unlikely]] return; }
L_00429AD8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00429AE0:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0]), c.r[18].w[0]);  goto L_00429AF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429AF0u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00429AF0u) [[unlikely]] return; }
L_00429AF0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00429AF4:
    st32((c.r[16].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_00429AF8:
    set32(c.r[4], c.r[17].w[0] + 8u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429B10u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x00429B10u) [[unlikely]] return; }
L_00429B10:
    st32((c.r[28].w[0] - 25572u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00429B30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 15176u);  c.pc = t; return; }
L_00429B40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00429B94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429B60u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00429B60u) [[unlikely]] return; }
L_00429B60:
    set32(c.r[4], c.r[29].w[0] + 60u);
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429B70u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00CA(c, 314u, depth + 1u); else { c.pc = 0x0042A040u; return; } if (c.pc != 0x00429B70u) [[unlikely]] return; }
L_00429B70:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429B7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00429B7Cu) [[unlikely]] return; }
L_00429B7C:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00429B94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[3].w[0] + 28u));  if (t) { goto L_00429B98; } }
L_00429B94:
    c.f[0] = 0u;
    c.budget -= 1;
L_00429B98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00429BB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_00429C10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429BD8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00429BD8u) [[unlikely]] return; }
L_00429BD8:
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429BE8u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00CA(c, 314u, depth + 1u); else { c.pc = 0x0042A040u; return; } if (c.pc != 0x00429BE8u) [[unlikely]] return; }
L_00429BE8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429BF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00429BF4u) [[unlikely]] return; }
L_00429BF4:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[3], c.r[16].w[0] + 16u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00429C14; }
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[4].w[0] + 28u), c.f[0]);
    c.budget -= 3;
L_00429C10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00429C14:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00429C30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_00429C94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429C60u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00429C60u) [[unlikely]] return; }
L_00429C60:
    set32(c.r[4], c.r[29].w[0] + 124u);
    set32(c.r[5], c.r[17].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429C70u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00CA(c, 314u, depth + 1u); else { c.pc = 0x0042A040u; return; } if (c.pc != 0x00429C70u) [[unlikely]] return; }
L_00429C70:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429C7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00429C7Cu) [[unlikely]] return; }
L_00429C7C:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[3], c.r[17].w[0] + 16u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00429C98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 28u), c.f[20]);  if (t) { goto L_00429CC0; } }
L_00429C94:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00429C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429CA0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00429CA0u) [[unlikely]] return; }
L_00429CA0:
    set32(c.r[5], c.r[17].w[0] + 4u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429CB4u); st32((c.r[29].w[0] + 80u), c.f[20]);  if (depth < kMaxDepth) unit_00CA(c, 359u, depth + 1u); else { c.pc = 0x0042A400u; return; } if (c.pc != 0x00429CB4u) [[unlikely]] return; }
L_00429CB4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429CC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00429CC0u) [[unlikely]] return; }
L_00429CC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00429CE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00429D24; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00429D10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429D0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00429D0Cu) [[unlikely]] return; }
L_00429D0C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00429D10:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00429D28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429D24u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00429D24u) [[unlikely]] return; }
L_00429D24:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00429D28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00429D40:
    set32(c.r[2], ld32((c.r[28].w[0] - 26064u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));  c.pc = t; return; }
L_00429D50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429D64u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00E2(c, 296u, depth + 1u); else { c.pc = 0x0048A680u; return; } if (c.pc != 0x00429D64u) [[unlikely]] return; }
L_00429D64:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00429D80:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 48u)));  [[clang::musttail]] return unit_00E2(c, 296u, depth); }
L_00429D90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00429DA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00429E40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 26480u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429DD0u); set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x00429DD0u) [[unlikely]] return; }
L_00429DD0:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 4u);  goto L_00429DE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429DE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00429DE4u) [[unlikely]] return; }
L_00429DE4:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_00429DE8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00429E14; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00429E14; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00429E14; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00429E14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429E14u);  if (depth < kMaxDepth) unit_00CA(c, 318u, depth + 1u); else { c.pc = 0x0042A0E0u; return; } if (c.pc != 0x00429E14u) [[unlikely]] return; }
L_00429E14:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00429E2C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_00429E2C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00429E44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429E40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00429E40u) [[unlikely]] return; }
L_00429E40:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00429E44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00429E60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] - 26416u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + 26480u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 18;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[19].w[0] + 4u);  if (t) { goto L_00429EE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429EB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00429EB0u) [[unlikely]] return; }
L_00429EB0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_00429ED0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429EC8u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00429EC8u) [[unlikely]] return; }
L_00429EC8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00429ED0:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[29].w[0] + 92u);  goto L_00429EE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429EE0u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00429EE0u) [[unlikely]] return; }
L_00429EE0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00429EE4:
    set32(c.r[2], c.r[29].w[0] + 92u);
    c.budget -= 1;
L_00429EE8:
    st32((c.r[29].w[0] + 88u), c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 84u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 88u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429F04u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00CA(c, 364u, depth + 1u); else { c.pc = 0x0042A500u; return; } if (c.pc != 0x00429F04u) [[unlikely]] return; }
L_00429F04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429F0Cu); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00429F0Cu) [[unlikely]] return; }
L_00429F0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429F14u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 287u, depth + 1u); else { c.pc = 0x0048A5B0u; return; } if (c.pc != 0x00429F14u) [[unlikely]] return; }
L_00429F14:
    st32((c.r[19].w[0] + 28u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429F24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x00429F24u) [[unlikely]] return; }
L_00429F24:
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00429F40u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00429F40u) [[unlikely]] return; }
L_00429F40:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429F4Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x00429F4Cu) [[unlikely]] return; }
L_00429F4C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429F58u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x00429F58u) [[unlikely]] return; }
L_00429F58:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429F68u); st8((c.r[19].w[0] + 52u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00429F68u) [[unlikely]] return; }
L_00429F68:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[19].w[0] + 33u);  goto L_00429F7C; }
    set32(c.r[5], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 1;
L_00429F7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429F84u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x00429F84u) [[unlikely]] return; }
L_00429F84:
    st32((c.r[19].w[0] + 48u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00429FB0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30216u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_00429FBC; }
L_00429FBC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00429FD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00429FECu); set32(c.r[4], c.r[4].w[0] + 15160u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00429FECu) [[unlikely]] return; }
L_00429FEC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00429FF4; }
L_00429FF4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0042A010:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0042A020:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0042A030:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30216u)));  c.pc = t; return; }
L_0042A040:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[19].w[0] + 12u);  if (t) { goto L_0042A08C; } }
L_0042A074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A07Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x0042A07Cu) [[unlikely]] return; }
L_0042A07C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], ld32((c.r[17].w[0] + 4u)));  goto L_0042A08C; }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_0042A08C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042A074u | kUnwind; return; } goto L_0042A074; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[19].w[0] + 12u);  goto L_0042A0B8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A0ACu); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x0042A0ACu) [[unlikely]] return; }
L_0042A0AC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[20].w[0]), c.r[16].w[0]);  goto L_0042A0BC; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 1;
L_0042A0B8:
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0042A0BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0042A0E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0042A200; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_0042A170; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0042A12C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A128u);  if (depth < kMaxDepth) unit_00CA(c, 318u, depth + 1u); else { c.pc = 0x0042A0E0u; return; } if (c.pc != 0x0042A128u) [[unlikely]] return; }
L_0042A128:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0042A12C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0042A140; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A13Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 318u, depth + 1u); else { c.pc = 0x0042A0E0u; return; } if (c.pc != 0x0042A13Cu) [[unlikely]] return; }
L_0042A13C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042A140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A148u);  if (depth < kMaxDepth) unit_00CA(c, 358u, depth + 1u); else { c.pc = 0x0042A3F0u; return; } if (c.pc != 0x0042A148u) [[unlikely]] return; }
L_0042A148:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A154u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00CA(c, 356u, depth + 1u); else { c.pc = 0x0042A3A0u; return; } if (c.pc != 0x0042A154u) [[unlikely]] return; }
L_0042A154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A15Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 355u, depth + 1u); else { c.pc = 0x0042A390u; return; } if (c.pc != 0x0042A15Cu) [[unlikely]] return; }
L_0042A15C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A16Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00CA(c, 353u, depth + 1u); else { c.pc = 0x0042A370u; return; } if (c.pc != 0x0042A16Cu) [[unlikely]] return; }
L_0042A16C:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0042A170:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0042A1D4; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0042A190; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A18Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 318u, depth + 1u); else { c.pc = 0x0042A0E0u; return; } if (c.pc != 0x0042A18Cu) [[unlikely]] return; }
L_0042A18C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0042A190:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0042A1A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A1A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 318u, depth + 1u); else { c.pc = 0x0042A0E0u; return; } if (c.pc != 0x0042A1A0u) [[unlikely]] return; }
L_0042A1A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042A1A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A1ACu);  if (depth < kMaxDepth) unit_00CA(c, 358u, depth + 1u); else { c.pc = 0x0042A3F0u; return; } if (c.pc != 0x0042A1ACu) [[unlikely]] return; }
L_0042A1AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A1B8u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00CA(c, 356u, depth + 1u); else { c.pc = 0x0042A3A0u; return; } if (c.pc != 0x0042A1B8u) [[unlikely]] return; }
L_0042A1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A1C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 355u, depth + 1u); else { c.pc = 0x0042A390u; return; } if (c.pc != 0x0042A1C0u) [[unlikely]] return; }
L_0042A1C0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A1D0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00CA(c, 353u, depth + 1u); else { c.pc = 0x0042A370u; return; } if (c.pc != 0x0042A1D0u) [[unlikely]] return; }
L_0042A1D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042A1D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A1DCu);  if (depth < kMaxDepth) unit_00CA(c, 358u, depth + 1u); else { c.pc = 0x0042A3F0u; return; } if (c.pc != 0x0042A1DCu) [[unlikely]] return; }
L_0042A1DC:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A1E8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00CA(c, 282u, depth + 1u); else { c.pc = 0x00429CE0u; return; } if (c.pc != 0x0042A1E8u) [[unlikely]] return; }
L_0042A1E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A1F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 355u, depth + 1u); else { c.pc = 0x0042A390u; return; } if (c.pc != 0x0042A1F0u) [[unlikely]] return; }
L_0042A1F0:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_0042A204; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A200u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0042A200u) [[unlikely]] return; }
L_0042A200:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0042A204:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 12u);  goto L_0042A308; }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_0042A274; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0042A230; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A22Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 318u, depth + 1u); else { c.pc = 0x0042A0E0u; return; } if (c.pc != 0x0042A22Cu) [[unlikely]] return; }
L_0042A22C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0042A230:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0042A244; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A240u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 318u, depth + 1u); else { c.pc = 0x0042A0E0u; return; } if (c.pc != 0x0042A240u) [[unlikely]] return; }
L_0042A240:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042A244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A24Cu);  if (depth < kMaxDepth) unit_00CA(c, 358u, depth + 1u); else { c.pc = 0x0042A3F0u; return; } if (c.pc != 0x0042A24Cu) [[unlikely]] return; }
L_0042A24C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A258u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00CA(c, 356u, depth + 1u); else { c.pc = 0x0042A3A0u; return; } if (c.pc != 0x0042A258u) [[unlikely]] return; }
L_0042A258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A260u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 355u, depth + 1u); else { c.pc = 0x0042A390u; return; } if (c.pc != 0x0042A260u) [[unlikely]] return; }
L_0042A260:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A270u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00CA(c, 353u, depth + 1u); else { c.pc = 0x0042A370u; return; } if (c.pc != 0x0042A270u) [[unlikely]] return; }
L_0042A270:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0042A274:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0042A2D8; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0042A294; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A290u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 318u, depth + 1u); else { c.pc = 0x0042A0E0u; return; } if (c.pc != 0x0042A290u) [[unlikely]] return; }
L_0042A290:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0042A294:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0042A2A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A2A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 318u, depth + 1u); else { c.pc = 0x0042A0E0u; return; } if (c.pc != 0x0042A2A4u) [[unlikely]] return; }
L_0042A2A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042A2A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A2B0u);  if (depth < kMaxDepth) unit_00CA(c, 358u, depth + 1u); else { c.pc = 0x0042A3F0u; return; } if (c.pc != 0x0042A2B0u) [[unlikely]] return; }
L_0042A2B0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A2BCu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00CA(c, 356u, depth + 1u); else { c.pc = 0x0042A3A0u; return; } if (c.pc != 0x0042A2BCu) [[unlikely]] return; }
L_0042A2BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A2C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 355u, depth + 1u); else { c.pc = 0x0042A390u; return; } if (c.pc != 0x0042A2C4u) [[unlikely]] return; }
L_0042A2C4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A2D4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00CA(c, 353u, depth + 1u); else { c.pc = 0x0042A370u; return; } if (c.pc != 0x0042A2D4u) [[unlikely]] return; }
L_0042A2D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042A2D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A2E0u);  if (depth < kMaxDepth) unit_00CA(c, 358u, depth + 1u); else { c.pc = 0x0042A3F0u; return; } if (c.pc != 0x0042A2E0u) [[unlikely]] return; }
L_0042A2E0:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A2ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00CA(c, 282u, depth + 1u); else { c.pc = 0x00429CE0u; return; } if (c.pc != 0x0042A2ECu) [[unlikely]] return; }
L_0042A2EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A2F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 355u, depth + 1u); else { c.pc = 0x0042A390u; return; } if (c.pc != 0x0042A2F4u) [[unlikely]] return; }
L_0042A2F4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0042A304; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A304u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0042A304u) [[unlikely]] return; }
L_0042A304:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_0042A308:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0042A344; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0042A344; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0042A344; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0042A344; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0042A344; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A344u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0042A344u) [[unlikely]] return; }
L_0042A344:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0042A358; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A354u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0042A354u) [[unlikely]] return; }
L_0042A354:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0042A358:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0042A370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0042A384; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A384u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0042A384u) [[unlikely]] return; }
L_0042A384:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042A390:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_0042A3A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0042A3E0; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0042A3E4; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0042A3E0; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0042A3E0; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0042A3E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A3E0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0042A3E0u) [[unlikely]] return; }
L_0042A3E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0042A3E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042A3F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0042A400:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[22], c.r[21].w[0] + 12u);
    set32(c.r[17], ld32((c.r[5].w[0] + 12u)));
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0042A478; } }
L_0042A44C:
    set32(c.r[5], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A458u); c.r[22].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x0042A458u) [[unlikely]] return; }
L_0042A458:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[18].d[0] = c.r[17].d[0] + 0ull;  goto L_0042A46C; }
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0042A478; } }
L_0042A46C:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0042A478:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042A44Cu | kUnwind; return; } goto L_0042A44C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0042A4A0; }
    set32(c.r[4], c.r[18].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A494u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x0042A494u) [[unlikely]] return; }
L_0042A494:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[20].w[0]), c.r[18].w[0]);  goto L_0042A4C4; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0042A4A0:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A4B4u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 365u, depth + 1u); else { c.pc = 0x0042A530u; return; } if (c.pc != 0x0042A4B4u) [[unlikely]] return; }
L_0042A4B4:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30212u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0042A4CC; } }
L_0042A4C4:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30208u));
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0042A4CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0042A500:
    set32(c.r[7], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[4].w[0] + 12u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[6], ld32((c.r[6].w[0])));
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[3].w[0]);  c.pc = t; return; }
L_0042A530:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(-1ll) ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] != 0ull; c.r[18].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0042A594; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A58Cu); set32(c.r[5], c.r[5].w[0] + 15280u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0042A58Cu) [[unlikely]] return; }
L_0042A58C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A594u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0042A594u) [[unlikely]] return; }
L_0042A594:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A5A0u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0042A5A0u) [[unlikely]] return; }
L_0042A5A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] + 12u);
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_0042A5C8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A5BCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0042A5BCu) [[unlikely]] return; }
L_0042A5BC:
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 3;
L_0042A5C8:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0042A5E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[17].w[0]);  if (t) { goto L_0042A5EC; } }
L_0042A5E8:
    st32((c.r[20].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_0042A5EC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A604u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x0042A604u) [[unlikely]] return; }
L_0042A604:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0042A614; }
    st32((c.r[21].w[0] + 20u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0042A614:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0042A640:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 15344u);  c.pc = t; return; }
L_0042A650:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0042A660:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A67Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_00CA(c, 286u, depth + 1u); else { c.pc = 0x00429D50u; return; } if (c.pc != 0x0042A67Cu) [[unlikely]] return; }
L_0042A67C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A684u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0042A684u) [[unlikely]] return; }
L_0042A684:
    set32(c.r[5], ld32((c.r[28].w[0] - 30204u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A690u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 267u, depth + 1u); else { c.pc = 0x00429B40u; return; } if (c.pc != 0x0042A690u) [[unlikely]] return; }
L_0042A690:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_0042A6FC; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30204u)));
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A6B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 271u, depth + 1u); else { c.pc = 0x00429BB0u; return; } if (c.pc != 0x0042A6B4u) [[unlikely]] return; }
L_0042A6B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0042A6F8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30204u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A6CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 267u, depth + 1u); else { c.pc = 0x00429B40u; return; } if (c.pc != 0x0042A6CCu) [[unlikely]] return; }
L_0042A6CC:
    c.f[12] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0042A6F8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A6ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 290u, depth + 1u); else { c.pc = 0x0048A600u; return; } if (c.pc != 0x0042A6ECu) [[unlikely]] return; }
L_0042A6EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A6F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0042A6F8u) [[unlikely]] return; }
L_0042A6F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 1;
L_0042A6FC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_0042A780; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26056u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));  goto L_0042A72C; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A724u); set32(c.r[6], c.r[6].w[0] + 15408u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x0042A724u) [[unlikely]] return; }
L_0042A724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042A77C; } }
L_0042A72C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A734u);  if (depth < kMaxDepth) unit_00D1(c, 5u, depth + 1u); else { c.pc = 0x00444030u; return; } if (c.pc != 0x0042A734u) [[unlikely]] return; }
L_0042A734:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_0042A76C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A744u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x0042A744u) [[unlikely]] return; }
L_0042A744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0042A768; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A760u); set32(c.r[6], c.r[6].w[0] + 15426u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x0042A760u) [[unlikely]] return; }
L_0042A760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042A77C; } }
L_0042A768:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 1;
L_0042A76C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A77Cu); set32(c.r[6], c.r[6].w[0] + 15438u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x0042A77Cu) [[unlikely]] return; }
L_0042A77C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_0042A780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A788u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0042A788u) [[unlikely]] return; }
L_0042A788:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0042A7A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + 15439u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A7C4u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x0042A7C4u) [[unlikely]] return; }
L_0042A7C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 97u);  goto L_0042A7D8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_0042A7D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A7E0u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0042A7E0u) [[unlikely]] return; }
L_0042A7E0:
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A7F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0042A7F0u) [[unlikely]] return; }
L_0042A7F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0042A814; } }
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A808u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 290u, depth + 1u); else { c.pc = 0x0048A600u; return; } if (c.pc != 0x0042A808u) [[unlikely]] return; }
L_0042A808:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A814u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0042A814u) [[unlikely]] return; }
L_0042A814:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A828u); set32(c.r[6], c.r[6].w[0] + 15448u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x0042A828u) [[unlikely]] return; }
L_0042A828:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_0042A83C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0042A83C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A844u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0042A844u) [[unlikely]] return; }
L_0042A844:
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A854u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0042A854u) [[unlikely]] return; }
L_0042A854:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A868u); set32(c.r[6], c.r[6].w[0] + 15460u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x0042A868u) [[unlikely]] return; }
L_0042A868:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_0042A87C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_0042A87C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A884u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0042A884u) [[unlikely]] return; }
L_0042A884:
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A894u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0042A894u) [[unlikely]] return; }
L_0042A894:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A8A8u); set32(c.r[6], c.r[6].w[0] + 15468u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x0042A8A8u) [[unlikely]] return; }
L_0042A8A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_0042A8BC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_0042A8BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A8C4u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0042A8C4u) [[unlikely]] return; }
L_0042A8C4:
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A8D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0042A8D4u) [[unlikely]] return; }
L_0042A8D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0042A8E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A8E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0042A8E8u) [[unlikely]] return; }
L_0042A8E8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A8FCu); set32(c.r[6], c.r[6].w[0] + 15480u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x0042A8FCu) [[unlikely]] return; }
L_0042A8FC:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 33u);  goto L_0042A910; }
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 1;
L_0042A910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A918u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0042A918u) [[unlikely]] return; }
L_0042A918:
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A928u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0042A928u) [[unlikely]] return; }
L_0042A928:
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0042A940; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A93Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0042A93Cu) [[unlikely]] return; }
L_0042A93C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0042A940:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0042A950:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[21], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A99Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0042A99Cu) [[unlikely]] return; }
L_0042A99C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A9B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042A9B0u) [[unlikely]] return; }
L_0042A9B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A9B8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 273u, depth + 1u); else { c.pc = 0x0048A4A0u; return; } if (c.pc != 0x0042A9B8u) [[unlikely]] return; }
L_0042A9B8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A9C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0042A9C4u) [[unlikely]] return; }
L_0042A9C4:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042A9E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042A9E0u) [[unlikely]] return; }
L_0042A9E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 164u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 184u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 180u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 186u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0042AA14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AA0Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0042AA0Cu) [[unlikely]] return; }
L_0042AA0C:
    set32(c.r[2], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 2;
L_0042AA14:
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42960000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    set32(c.r[5], c.r[29].w[0] + 164u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[18], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[23], ld32((c.r[19].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 186u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[23].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 17;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[17], ld32((c.r[29].w[0] + 164u)));  goto L_0042AA88; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AA64u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0042AA64u) [[unlikely]] return; }
L_0042AA64:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0042AA80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AA7Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0042AA7Cu) [[unlikely]] return; }
L_0042AA7C:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0042AA80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0042AAAC; } }
L_0042AA88:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AA94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0042AA94u) [[unlikely]] return; }
L_0042AA94:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AAA8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0042AAA8u) [[unlikely]] return; }
L_0042AAA8:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_0042AAAC:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AAC0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042AAC0u) [[unlikely]] return; }
L_0042AAC0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 186u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 160u), c.r[3].w[0]);  if (t) { goto L_0042AAF0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[2], c.r[29].w[0] + 164u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0042AAF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AAF0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0042AAF0u) [[unlikely]] return; }
L_0042AAF0:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_0042AB80; }
    set32(c.r[2], ld32((c.r[21].w[0] + 320u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AB08u); set32(c.r[4], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_0004(c, 375u, depth + 1u); else { c.pc = 0x00113EC0u; return; } if (c.pc != 0x0042AB08u) [[unlikely]] return; }
L_0042AB08:
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[28].w[0] - 26056u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 320u)));  goto L_0042AB34; }
    set32(c.r[2], ld32((c.r[21].w[0] + 320u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AB2Cu); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x0042AB2Cu) [[unlikely]] return; }
L_0042AB2C:
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[21].w[0] + 320u)));
    c.budget -= 2;
L_0042AB34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AB3Cu);  if (depth < kMaxDepth) unit_00F4(c, 202u, depth + 1u); else { c.pc = 0x004D1CE0u; return; } if (c.pc != 0x0042AB3Cu) [[unlikely]] return; }
L_0042AB3C:
    set32(c.r[3], ld32((c.r[22].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[20].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[22].w[0] + 128u)));  goto L_0042AB54; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0042AB68; } }
    set32(c.r[3], ld32((c.r[22].w[0] + 128u)));
    c.budget -= 1;
L_0042AB54:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_0042AB74; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0042AB74; } }
L_0042AB68:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 15493u);  if (t) { goto L_0042AB84; } }
L_0042AB74:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 15506u);  if (t) { goto L_0042AB84; } }
L_0042AB80:
    set32(c.r[6], c.r[6].w[0] + 15520u);
    c.budget -= 1;
L_0042AB84:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AB90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x0042AB90u) [[unlikely]] return; }
L_0042AB90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042ABB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 190u, depth + 1u); else { c.pc = 0x00489BA0u; return; } if (c.pc != 0x0042ABB0u) [[unlikely]] return; }
L_0042ABB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3610000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.f[13] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC27A0000u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042ABE0u); st32((c.r[29].w[0] + 216u), 0u);  if (depth < kMaxDepth) unit_00E2(c, 216u, depth + 1u); else { c.pc = 0x00489E00u; return; } if (c.pc != 0x0042ABE0u) [[unlikely]] return; }
L_0042ABE0:
    c.f[13] = ld32((c.r[28].w[0] - 32020u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042ABFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 175u, depth + 1u); else { c.pc = 0x004899C0u; return; } if (c.pc != 0x0042ABFCu) [[unlikely]] return; }
L_0042ABFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[13] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AC20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 190u, depth + 1u); else { c.pc = 0x00489BA0u; return; } if (c.pc != 0x0042AC20u) [[unlikely]] return; }
L_0042AC20:
    set32(c.r[2], 0u - 750u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3160000u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 200u), 0u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AC5Cu); st32((c.r[29].w[0] + 192u), c.f[0]);  if (depth < kMaxDepth) unit_00E2(c, 216u, depth + 1u); else { c.pc = 0x00489E00u; return; } if (c.pc != 0x0042AC5Cu) [[unlikely]] return; }
L_0042AC5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AC7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 175u, depth + 1u); else { c.pc = 0x004899C0u; return; } if (c.pc != 0x0042AC7Cu) [[unlikely]] return; }
L_0042AC7C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0042ACB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042ACD0u); set32(c.r[5], c.r[5].w[0] + 15534u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0042ACD0u) [[unlikely]] return; }
L_0042ACD0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0042AD10; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 128u)));  goto L_0042ACF4; }
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042ACF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042ACF0u) [[unlikely]] return; }
L_0042ACF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 1;
L_0042ACF4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(0u));  goto L_0042AD0C; }
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AD08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042AD08u) [[unlikely]] return; }
L_0042AD08:
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0042AD0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0042AD10:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0042AD20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AD40u); set32(c.r[5], c.r[5].w[0] + 15534u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0042AD40u) [[unlikely]] return; }
L_0042AD40:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0042AD80; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 128u)));  goto L_0042AD64; }
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AD60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042AD60u) [[unlikely]] return; }
L_0042AD60:
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 1;
L_0042AD64:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(0u));  goto L_0042AD7C; }
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AD78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042AD78u) [[unlikely]] return; }
L_0042AD78:
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0042AD7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0042AD80:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0042AD90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 14u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0042AED0; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 124u)));  goto L_0042AE70; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[28].w[0] - 30204u)));  goto L_0042AE48; }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 112u)));  goto L_0042AE20; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 112u)));  goto L_0042ADE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0042AF94; } }
L_0042ADE8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0042AF90; } }
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042ADFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 290u, depth + 1u); else { c.pc = 0x0048A600u; return; } if (c.pc != 0x0042ADFCu) [[unlikely]] return; }
L_0042ADFC:
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AE08u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0042AE08u) [[unlikely]] return; }
L_0042AE08:
    set32(c.r[5], ld32((c.r[28].w[0] - 30204u)));
    c.f[12] = ld32((c.r[28].w[0] - 31488u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AE18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 275u, depth + 1u); else { c.pc = 0x00429C30u; return; } if (c.pc != 0x0042AE18u) [[unlikely]] return; }
L_0042AE18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042AF90; } }
L_0042AE20:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0042AF90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AE30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0042AE30u) [[unlikely]] return; }
L_0042AE30:
    set32(c.r[5], ld32((c.r[28].w[0] - 30204u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AE40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 275u, depth + 1u); else { c.pc = 0x00429C30u; return; } if (c.pc != 0x0042AE40u) [[unlikely]] return; }
L_0042AE40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042AF90; } }
L_0042AE48:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AE54u);  if (depth < kMaxDepth) unit_00CA(c, 275u, depth + 1u); else { c.pc = 0x00429C30u; return; } if (c.pc != 0x0042AE54u) [[unlikely]] return; }
L_0042AE54:
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0042AF90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AE68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0042AE68u) [[unlikely]] return; }
L_0042AE68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042AF90; } }
L_0042AE70:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 128u)));  goto L_0042AE84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AE80u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00CA(c, 407u, depth + 1u); else { c.pc = 0x0042A950u; return; } if (c.pc != 0x0042AE80u) [[unlikely]] return; }
L_0042AE80:
    set32(c.r[5], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 1;
L_0042AE84:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[7].d[0] = c.r[17].d[0] + 0ull;  goto L_0042AE9C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AE98u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00CA(c, 407u, depth + 1u); else { c.pc = 0x0042A950u; return; } if (c.pc != 0x0042AE98u) [[unlikely]] return; }
L_0042AE98:
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042AE9C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  goto L_0042AEAC; }
    set32(c.r[7], c.r[17].w[0] + 108u);
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 2;
L_0042AEAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AEC4u); set32(c.r[5], c.r[5].w[0] + 15534u);  if (depth < kMaxDepth) unit_00FC(c, 522u, depth + 1u); else { c.pc = 0x004F3D40u; return; } if (c.pc != 0x0042AEC4u) [[unlikely]] return; }
L_0042AEC4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0042AF90; } }
L_0042AED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AED8u);  if (depth < kMaxDepth) unit_00B3(c, 282u, depth + 1u); else { c.pc = 0x003CE3F0u; return; } if (c.pc != 0x0042AED8u) [[unlikely]] return; }
L_0042AED8:
    set32(c.r[16], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 128u)));  goto L_0042AF20; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AEF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x0042AEF4u) [[unlikely]] return; }
L_0042AEF4:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0042AF1C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 124u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AF1Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 407u, depth + 1u); else { c.pc = 0x0042A950u; return; } if (c.pc != 0x0042AF1Cu) [[unlikely]] return; }
L_0042AF1C:
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 1;
L_0042AF20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[7].d[0] = c.r[17].d[0] + 0ull;  goto L_0042AF60; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AF34u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x0042AF34u) [[unlikely]] return; }
L_0042AF34:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0042AF5C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 128u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AF5Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 407u, depth + 1u); else { c.pc = 0x0042A950u; return; } if (c.pc != 0x0042AF5Cu) [[unlikely]] return; }
L_0042AF5C:
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042AF60:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  goto L_0042AF70; }
    set32(c.r[7], c.r[17].w[0] + 108u);
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 2;
L_0042AF70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AF88u); set32(c.r[5], c.r[5].w[0] + 15534u);  if (depth < kMaxDepth) unit_00FC(c, 522u, depth + 1u); else { c.pc = 0x004F3D40u; return; } if (c.pc != 0x0042AF88u) [[unlikely]] return; }
L_0042AF88:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0042AF90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0042AF94:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0042AFB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 15550u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AFD0u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0042AFD0u) [[unlikely]] return; }
L_0042AFD0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0042B004; }
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0042B000; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042AFECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0042AFECu) [[unlikely]] return; }
L_0042AFEC:
    set32(c.r[5], ld32((c.r[28].w[0] - 30200u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B000u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 275u, depth + 1u); else { c.pc = 0x00429C30u; return; } if (c.pc != 0x0042B000u) [[unlikely]] return; }
L_0042B000:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0042B004:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0042B010:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0042B160; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 26528u);
    set32(c.r[2], c.r[2].w[0] + 26576u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 26592u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 26616u);
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_0042B06C; } }
    set32(c.r[3], c.r[3].w[0] + 56u);
    c.budget -= 1;
L_0042B06C:
    set32(c.r[18], ld32((c.r[28].w[0] - 25072u)));
    set32(c.r[4], c.r[29].w[0] + 84u);
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B080u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 306u, depth + 1u); else { c.pc = 0x001273C0u; return; } if (c.pc != 0x0042B080u) [[unlikely]] return; }
L_0042B080:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B08Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 475u, depth + 1u); else { c.pc = 0x0042B220u; return; } if (c.pc != 0x0042B08Cu) [[unlikely]] return; }
L_0042B08C:
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[6], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B0A0u); set32(c.r[7], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_00CA(c, 473u, depth + 1u); else { c.pc = 0x0042B1D0u; return; } if (c.pc != 0x0042B0A0u) [[unlikely]] return; }
L_0042B0A0:
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B0ACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 475u, depth + 1u); else { c.pc = 0x0042B220u; return; } if (c.pc != 0x0042B0ACu) [[unlikely]] return; }
L_0042B0AC:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B0B8u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_00CA(c, 472u, depth + 1u); else { c.pc = 0x0042B1B0u; return; } if (c.pc != 0x0042B0B8u) [[unlikely]] return; }
L_0042B0B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_0042B0D4; }
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B0D0u); set32(c.r[4], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_00CA(c, 470u, depth + 1u); else { c.pc = 0x0042B180u; return; } if (c.pc != 0x0042B0D0u) [[unlikely]] return; }
L_0042B0D0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042B0D4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 25112u)));  goto L_0042B0E4; }
    set32(c.r[5], c.r[17].w[0] + 60u);
    set32(c.r[4], ld32((c.r[28].w[0] - 25112u)));
    c.budget -= 2;
L_0042B0E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B0ECu);  if (depth < kMaxDepth) unit_00C3(c, 187u, depth + 1u); else { c.pc = 0x0040D4D0u; return; } if (c.pc != 0x0042B0ECu) [[unlikely]] return; }
L_0042B0EC:
    set32(c.r[2], c.r[17].w[0] + 108u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 60u);  goto L_0042B108; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22912u);
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 60u);
    c.budget -= 4;
L_0042B108:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 56u);  goto L_0042B128; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27824u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B124u); st32((c.r[17].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C3(c, 34u, depth + 1u); else { c.pc = 0x0040C3D0u; return; } if (c.pc != 0x0042B124u) [[unlikely]] return; }
L_0042B124:
    set32(c.r[2], c.r[17].w[0] + 56u);
    c.budget -= 1;
L_0042B128:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0042B140; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 26672u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_0042B140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B148u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 290u, depth + 1u); else { c.pc = 0x00429DA0u; return; } if (c.pc != 0x0042B148u) [[unlikely]] return; }
L_0042B148:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0042B164; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B160u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0042B160u) [[unlikely]] return; }
L_0042B160:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042B164:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0042B180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B19Cu); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 310u, depth + 1u); else { c.pc = 0x00127460u; return; } if (c.pc != 0x0042B19Cu) [[unlikely]] return; }
L_0042B19C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0042B1B0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_0042B1D0:
    c.r[8].d[0] = c.r[6].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);  if (t) { goto L_0042B1E4; } }
L_0042B1DC:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_0042B1E4:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[8].d[0]) { c.r[3].d[0] = c.r[5].d[0] << 32;  goto L_0042B208; }
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 4;
    if (c.r[6].d[0] != c.r[3].d[0]) { c.r[3].d[0] = c.r[5].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042B1DCu | kUnwind; return; } goto L_0042B1DC; }
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.budget -= 1;
L_0042B208:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0042B220:
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0042B240:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B25Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 295u, depth + 1u); else { c.pc = 0x00429E60u; return; } if (c.pc != 0x0042B25Cu) [[unlikely]] return; }
L_0042B25C:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 26672u);
    set32(c.r[17], c.r[16].w[0] + 60u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B27Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 84u, depth + 1u); else { c.pc = 0x0040C9F0u; return; } if (c.pc != 0x0042B27Cu) [[unlikely]] return; }
L_0042B27C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27824u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B298u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C3(c, 99u, depth + 1u); else { c.pc = 0x0040CBA0u; return; } if (c.pc != 0x0042B298u) [[unlikely]] return; }
L_0042B298:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22912u);
    set32(c.r[3], c.r[3].w[0] + 26528u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 26576u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 26592u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 26616u);
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 17;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_0042B2E0; } }
    set32(c.r[3], c.r[16].w[0] + 56u);
    c.budget -= 1;
L_0042B2E0:
    set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[7], c.r[29].w[0] + 60u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B304u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0042B304u) [[unlikely]] return; }
L_0042B304:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0042B310; } }
    set32(c.r[5], c.r[16].w[0] + 60u);
    c.budget -= 1;
L_0042B310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B318u); set32(c.r[4], ld32((c.r[28].w[0] - 25112u)));  if (depth < kMaxDepth) unit_00C3(c, 195u, depth + 1u); else { c.pc = 0x0040D5B0u; return; } if (c.pc != 0x0042B318u) [[unlikely]] return; }
L_0042B318:
    set32(c.r[5], ld32((c.r[28].w[0] - 30200u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B32Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 275u, depth + 1u); else { c.pc = 0x00429C30u; return; } if (c.pc != 0x0042B32Cu) [[unlikely]] return; }
L_0042B32C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B33Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042B33Cu) [[unlikely]] return; }
L_0042B33C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0042B360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0042B39C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 26672u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0042B398; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B398u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0042B398u) [[unlikely]] return; }
L_0042B398:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0042B39C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0042B3B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30196u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0042B3CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0042B3DC; } }
L_0042B3CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B3D4u);  if (depth < kMaxDepth) unit_00CA(c, 308u, depth + 1u); else { c.pc = 0x00429FB0u; return; } if (c.pc != 0x0042B3D4u) [[unlikely]] return; }
L_0042B3D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0042B3DC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042B3F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B414u); set32(c.r[4], c.r[4].w[0] + 15312u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0042B414u) [[unlikely]] return; }
L_0042B414:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0042B424; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0042B434; } }
L_0042B424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B42Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 309u, depth + 1u); else { c.pc = 0x00429FD0u; return; } if (c.pc != 0x0042B42Cu) [[unlikely]] return; }
L_0042B42C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0042B434:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0042B450:
    set32(c.r[2], ld32((c.r[28].w[0] - 30216u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0042B460:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30196u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0042B47C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0042B484; } }
L_0042B47C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B484u);  if (depth < kMaxDepth) unit_00CA(c, 312u, depth + 1u); else { c.pc = 0x0042A020u; return; } if (c.pc != 0x0042B484u) [[unlikely]] return; }
L_0042B484:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042B490:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30196u)));  c.pc = t; return; }
L_0042B4A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042B010u | kUnwind; return; } goto L_0042B010; }
L_0042B4B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042AFB0u | kUnwind; return; } goto L_0042AFB0; }
L_0042B4C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042AD90u | kUnwind; return; } goto L_0042AD90; }
L_0042B4D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042B010u | kUnwind; return; } goto L_0042B010; }
L_0042B4E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 108u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042ACB0u | kUnwind; return; } goto L_0042ACB0; }
L_0042B4F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 108u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042AD20u | kUnwind; return; } goto L_0042AD20; }
L_0042B500:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 108u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042A650u | kUnwind; return; } goto L_0042A650; }
L_0042B510:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 108u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042B010u | kUnwind; return; } goto L_0042B010; }
L_0042B520:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 15792u);  c.pc = t; return; }
L_0042B530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0042B540:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.f[22] = c.f[12];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B578u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_00CA(c, 286u, depth + 1u); else { c.pc = 0x00429D50u; return; } if (c.pc != 0x0042B578u) [[unlikely]] return; }
L_0042B578:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 26056u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B594u); c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042B594u) [[unlikely]] return; }
L_0042B594:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0042B5BC; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0042B5B8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B5B0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00CA(c, 288u, depth + 1u); else { c.pc = 0x00429D80u; return; } if (c.pc != 0x0042B5B0u) [[unlikely]] return; }
L_0042B5B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_0042B5CC; } }
L_0042B5B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042B5BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B5C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 288u, depth + 1u); else { c.pc = 0x00429D80u; return; } if (c.pc != 0x0042B5C4u) [[unlikely]] return; }
L_0042B5C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_00CB(c, 35u, depth); } }
L_0042B5CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B5D4u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0042B5D4u) [[unlikely]] return; }
L_0042B5D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B5DCu);  if (depth < kMaxDepth) unit_00B3(c, 282u, depth + 1u); else { c.pc = 0x003CE3F0u; return; } if (c.pc != 0x0042B5DCu) [[unlikely]] return; }
L_0042B5DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 124u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1156u));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 112u)));  goto L_0042B628; }
    set32(c.r[2], ld32((c.r[3].w[0] + 2308u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_0042B610; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0042B610:
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] + 16016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B624u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00CA(c, 253u, depth + 1u); else { c.pc = 0x00429960u; return; } if (c.pc != 0x0042B624u) [[unlikely]] return; }
L_0042B624:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 1;
L_0042B628:
    set32(c.r[3], ld32((c.r[2].w[0] + 124u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1157u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 160u)));  goto L_0042B670; }
    set32(c.r[2], ld32((c.r[3].w[0] + 2308u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_0042B658; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0042B658:
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] + 16026u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B66Cu); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00CA(c, 253u, depth + 1u); else { c.pc = 0x00429960u; return; } if (c.pc != 0x0042B66Cu) [[unlikely]] return; }
L_0042B66C:
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 1;
L_0042B670:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 156u)));  goto L_0042B958; }
    set32(c.r[5], ld32((c.r[17].w[0] + 112u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 15736u);
    set32(c.r[2], ld32((c.r[5].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[19].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[18], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B6B0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042B6B0u) [[unlikely]] return; }
L_0042B6B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 15744u);
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[20], ld32((c.r[3].w[0])));
    c.f[12] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B6D4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042B6D4u) [[unlikely]] return; }
L_0042B6D4:
    set32(c.r[3], c.r[19].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_0042B6EC; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[2].w[0] << 2);  goto L_0042B6F0; }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_0042B6EC:
    set32(c.r[18], c.r[2].w[0] << 2);
    c.budget -= 1;
L_0042B6F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + 15736u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.f[12] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B70Cu); set32(c.r[4], ld32((c.r[17].w[0] + 160u)));  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042B70Cu) [[unlikely]] return; }
L_0042B70C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + 15744u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.f[12] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B728u); set32(c.r[4], ld32((c.r[17].w[0] + 160u)));  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042B728u) [[unlikely]] return; }
L_0042B728:
    set32(c.r[6], ld32((c.r[17].w[0] + 112u)));
    c.f[0] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[2], ld32((c.r[6].w[0] + 412u)));
    c.f[1] = ld32((c.r[2].w[0] + 116u));
    set32(c.r[3], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 108u)));
    st32((c.r[29].w[0] + 180u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 184u), c.f[1]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_0042B79C; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[3].sd[0] <= 0) { set32(c.r[4], ld32((c.r[17].w[0] + 160u)));  goto L_0042B7A0; }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0042B79C; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 416u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0042B794; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042B79C; } }
L_0042B794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B79Cu);  if (depth < kMaxDepth) unit_00D8(c, 208u, depth + 1u); else { c.pc = 0x004623B0u; return; } if (c.pc != 0x0042B79Cu) [[unlikely]] return; }
L_0042B79C:
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 1;
L_0042B7A0:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B7ACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00E2(c, 293u, depth + 1u); else { c.pc = 0x0048A640u; return; } if (c.pc != 0x0042B7ACu) [[unlikely]] return; }
L_0042B7AC:
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B7C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042B7C0u) [[unlikely]] return; }
L_0042B7C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 112u)));  goto L_0042B85C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B7DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042B7DCu) [[unlikely]] return; }
L_0042B7DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B7E4u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0042B7E4u) [[unlikely]] return; }
L_0042B7E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B7F8u); set32(c.r[5], c.r[5].w[0] + 16035u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0042B7F8u) [[unlikely]] return; }
L_0042B7F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 161u);  goto L_0042B80C; }
    set32(c.r[6], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_0042B80C:
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B818u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x0042B818u) [[unlikely]] return; }
L_0042B818:
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B82Cu); set32(c.r[6], c.r[6].w[0] + 16040u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x0042B82Cu) [[unlikely]] return; }
L_0042B82C:
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B840u); set32(c.r[6], c.r[6].w[0] + 16040u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x0042B840u) [[unlikely]] return; }
L_0042B840:
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B854u); set32(c.r[6], c.r[6].w[0] + 16041u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x0042B854u) [[unlikely]] return; }
L_0042B854:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042B954; } }
L_0042B85C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[5].w[0] + 16051u);
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    set32(c.r[18], ld32((c.r[6].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    mmi::pmaxw(c.r[19], c.r[2], c.r[3]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B888u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0042B888u) [[unlikely]] return; }
L_0042B888:
    c.budget -= 2;
    if (c.r[18].sd[0] <= 0) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_0042B8E0; }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 161u);  goto L_0042B8A4; }
    set32(c.r[6], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_0042B8A4:
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B8B0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x0042B8B0u) [[unlikely]] return; }
L_0042B8B0:
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B8C4u); set32(c.r[6], c.r[6].w[0] + 16040u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x0042B8C4u) [[unlikely]] return; }
L_0042B8C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B8D8u); set32(c.r[5], c.r[5].w[0] + 16054u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0042B8D8u) [[unlikely]] return; }
L_0042B8D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 160u)));  if (t) { goto L_0042B924; } }
L_0042B8E0:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B8F0u); set32(c.r[5], c.r[5].w[0] + 16051u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0042B8F0u) [[unlikely]] return; }
L_0042B8F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 161u);  goto L_0042B904; }
    set32(c.r[6], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_0042B904:
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B910u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x0042B910u) [[unlikely]] return; }
L_0042B910:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B920u); set32(c.r[5], c.r[5].w[0] + 16040u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0042B920u) [[unlikely]] return; }
L_0042B920:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 1;
L_0042B924:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 161u);  goto L_0042B934; }
    set32(c.r[6], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_0042B934:
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B940u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x0042B940u) [[unlikely]] return; }
L_0042B940:
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B954u); set32(c.r[6], c.r[6].w[0] + 16058u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x0042B954u) [[unlikely]] return; }
L_0042B954:
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 1;
L_0042B958:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 164u)));  goto L_0042BDF0; }
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    c.f[3] = ld32((c.r[28].w[0] - 30176u));
    c.f[1] = ld32((c.r[28].w[0] - 30172u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 132u));
    c.f[0] = 0u;
    c.f[4] = ld32((c.r[3].w[0] + 120u));
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[28].w[0] - 25520u));
    fpu_div(c, 3u, c.f[4], c.f[3]);
    set32(c.r[3], ld32((c.r[3].w[0] + 124u)));
    c.f[1] = ld32((c.r[3].w[0] + 352u));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[3]));
    c.f[0] = ld32((c.r[28].w[0] - 31480u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[21] = ld32((c.r[28].w[0] - 29052u));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; c.f[1] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_0042B9AC; } }
    c.f[0] = ld32((c.r[28].w[0] - 32100u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 2;
L_0042B9AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B9BCu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 392u, depth + 1u); else { c.pc = 0x003AF2A8u; return; } if (c.pc != 0x0042B9BCu) [[unlikely]] return; }
L_0042B9BC:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[6], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B9D4u); set32(c.r[5], c.r[5].w[0] + 16067u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0042B9D4u) [[unlikely]] return; }
L_0042B9D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 161u);  goto L_0042B9E8; }
    set32(c.r[6], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_0042B9E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042B9F4u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x0042B9F4u) [[unlikely]] return; }
L_0042B9F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 2228u)));
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = ld32((c.r[2].w[0] + 56u));
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BA24u);  if (depth < kMaxDepth) unit_00E2(c, 293u, depth + 1u); else { c.pc = 0x0048A640u; return; } if (c.pc != 0x0042BA24u) [[unlikely]] return; }
L_0042BA24:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.f[1] = ld32((c.r[2].w[0] + 48u));
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BA50u);  if (depth < kMaxDepth) unit_00E2(c, 293u, depth + 1u); else { c.pc = 0x0048A640u; return; } if (c.pc != 0x0042BA50u) [[unlikely]] return; }
L_0042BA50:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.f[1] = ld32((c.r[2].w[0] + 100u));
    c.f[0] = ld32((c.r[2].w[0] + 112u));
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BA7Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00E2(c, 293u, depth + 1u); else { c.pc = 0x0048A640u; return; } if (c.pc != 0x0042BA7Cu) [[unlikely]] return; }
L_0042BA7C:
    c.f[0] = ld32((c.r[28].w[0] - 32304u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[28].w[0] - 32076u));  goto L_0042BAC8; }
    c.f[0] = ld32((c.r[28].w[0] - 31476u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[28].w[0] - 31472u));
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.f[20] = c.r[2].w[0];
    set32(c.r[5], 0u + 3u);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31468u));
    st32((c.r[29].w[0] + 148u), c.f[1]);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BAC0u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00E2(c, 297u, depth + 1u); else { c.pc = 0x0048A690u; return; } if (c.pc != 0x0042BAC0u) [[unlikely]] return; }
L_0042BAC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 112u)));  if (t) { goto L_0042BB38; } }
L_0042BAC8:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[28].w[0] - 31464u));  goto L_0042BB0C; }
    c.f[1] = ld32((c.r[28].w[0] - 31460u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[28].w[0] - 31456u));
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[5], 0u + 3u);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.f[20] = c.r[2].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BB04u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_00E2(c, 297u, depth + 1u); else { c.pc = 0x0048A690u; return; } if (c.pc != 0x0042BB04u) [[unlikely]] return; }
L_0042BB04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042BB34; } }
L_0042BB0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 116u), 0u);
    c.f[20] = c.r[2].w[0];
    st32((c.r[29].w[0] + 120u), 0u);
    set32(c.r[5], 0u + 3u);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BB34u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00E2(c, 297u, depth + 1u); else { c.pc = 0x0048A690u; return; } if (c.pc != 0x0042BB34u) [[unlikely]] return; }
L_0042BB34:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 1;
L_0042BB38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 420u)));
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 88u)));
    c.f[15] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BB60u); c.f[12] = fp::add(c.f[13], c.f[21]);  if (depth < kMaxDepth) unit_00E2(c, 172u, depth + 1u); else { c.pc = 0x00489910u; return; } if (c.pc != 0x0042BB60u) [[unlikely]] return; }
L_0042BB60:
    c.f[23] = c.f[0];
    c.r[18].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0042BB6C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[18].w[0] + 4u);  if (t) { goto L_0042BB88; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BB80u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042BB80u) [[unlikely]] return; }
L_0042BB80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0042BB98; } }
L_0042BB88:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BB94u); set32(c.r[4], ld32((c.r[17].w[0] + 156u)));  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042BB94u) [[unlikely]] return; }
L_0042BB94:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0042BB98:
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042BB6Cu | kUnwind; return; } goto L_0042BB6C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.f[0] = ld32((c.r[2].w[0] + 120u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[2].w[0] + 124u)));  goto L_0042BBD0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BBC8u); set32(c.r[5], c.r[5].w[0] + 16072u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0042BBC8u) [[unlikely]] return; }
L_0042BBC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 160u)));  if (t) { goto L_0042BC10; } }
L_0042BBD0:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1171u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 2228u)));  goto L_0042BBF4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BBECu); set32(c.r[5], c.r[5].w[0] + 16074u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0042BBECu) [[unlikely]] return; }
L_0042BBEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042BC0C; } }
L_0042BBF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[5].w[0] + 16051u);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BC0Cu); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0042BC0Cu) [[unlikely]] return; }
L_0042BC0C:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 1;
L_0042BC10:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 161u);  goto L_0042BC20; }
    set32(c.r[6], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_0042BC20:
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BC2Cu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x0042BC2Cu) [[unlikely]] return; }
L_0042BC2C:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 97u));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 156u)));  goto L_0042BC8C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[14] = c.r[3].w[0];
    c.f[15] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BC60u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_00E2(c, 172u, depth + 1u); else { c.pc = 0x00489910u; return; } if (c.pc != 0x0042BC60u) [[unlikely]] return; }
L_0042BC60:
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.f[23] = c.f[0];
    set32(c.r[5], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BC74u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042BC74u) [[unlikely]] return; }
L_0042BC74:
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.f[12] = c.f[23];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BC84u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042BC84u) [[unlikely]] return; }
L_0042BC84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 112u)));  if (t) { goto L_0042BCB4; } }
L_0042BC8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BC9Cu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042BC9Cu) [[unlikely]] return; }
L_0042BC9C:
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BCB0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042BCB0u) [[unlikely]] return; }
L_0042BCB0:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 1;
L_0042BCB4:
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 96u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  goto L_0042BCD8; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30188u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BCD4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00CA(c, 275u, depth + 1u); else { c.pc = 0x00429C30u; return; } if (c.pc != 0x0042BCD4u) [[unlikely]] return; }
L_0042BCD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 1;
L_0042BCD8:
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[15] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BCF4u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_00E2(c, 172u, depth + 1u); else { c.pc = 0x00489910u; return; } if (c.pc != 0x0042BCF4u) [[unlikely]] return; }
L_0042BCF4:
    set32(c.r[5], ld32((c.r[28].w[0] - 30188u)));
    c.f[21] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BD04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 267u, depth + 1u); else { c.pc = 0x00429B40u; return; } if (c.pc != 0x0042BD04u) [[unlikely]] return; }
L_0042BD04:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[17].w[0] + 156u)));  goto L_0042BD40; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30188u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BD28u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00CA(c, 271u, depth + 1u); else { c.pc = 0x00429BB0u; return; } if (c.pc != 0x0042BD28u) [[unlikely]] return; }
L_0042BD28:
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BD38u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042BD38u) [[unlikely]] return; }
L_0042BD38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 112u)));  if (t) { goto L_0042BD50; } }
L_0042BD40:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BD4Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042BD4Cu) [[unlikely]] return; }
L_0042BD4C:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 1;
L_0042BD50:
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 40u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 30192u)));  goto L_0042BD78; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30192u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BD74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 275u, depth + 1u); else { c.pc = 0x00429C30u; return; } if (c.pc != 0x0042BD74u) [[unlikely]] return; }
L_0042BD74:
    set32(c.r[5], ld32((c.r[28].w[0] - 30192u)));
    c.budget -= 1;
L_0042BD78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BD80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 267u, depth + 1u); else { c.pc = 0x00429B40u; return; } if (c.pc != 0x0042BD80u) [[unlikely]] return; }
L_0042BD80:
    c.f[12] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[17].w[0] + 156u)));  goto L_0042BDD4; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30192u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BDA4u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00CA(c, 271u, depth + 1u); else { c.pc = 0x00429BB0u; return; } if (c.pc != 0x0042BDA4u) [[unlikely]] return; }
L_0042BDA4:
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BDB8u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042BDB8u) [[unlikely]] return; }
L_0042BDB8:
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BDCCu); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042BDCCu) [[unlikely]] return; }
L_0042BDCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042BDEC; } }
L_0042BDD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BDDCu); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042BDDCu) [[unlikely]] return; }
L_0042BDDC:
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BDECu); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042BDECu) [[unlikely]] return; }
L_0042BDEC:
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 1;
L_0042BDF0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 148u)));  goto L_0042BE30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BE00u); set32(c.r[4], ld32((c.r[17].w[0] + 112u)));  if (depth < kMaxDepth) unit_00EE(c, 388u, depth + 1u); else { c.pc = 0x004BBEF0u; return; } if (c.pc != 0x0042BE00u) [[unlikely]] return; }
L_0042BE00:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 424u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[5].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 164u)));  goto L_0042BE24; }
    c.r[5].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 2;
L_0042BE24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BE2Cu);  if (depth < kMaxDepth) unit_00E2(c, 296u, depth + 1u); else { c.pc = 0x0048A680u; return; } if (c.pc != 0x0042BE2Cu) [[unlikely]] return; }
L_0042BE2C:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 1;
L_0042BE30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 172u)));  goto L_0042BEBC; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 320u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BE64u); set32(c.r[5], c.r[5].w[0] + 16076u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0042BE64u) [[unlikely]] return; }
L_0042BE64:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 161u);  goto L_0042BE78; }
    set32(c.r[6], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_0042BE78:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BE84u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x0042BE84u) [[unlikely]] return; }
L_0042BE84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BE98u); set32(c.r[5], c.r[5].w[0] + 16081u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0042BE98u) [[unlikely]] return; }
L_0042BE98:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 161u);  goto L_0042BEAC; }
    set32(c.r[6], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_0042BEAC:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BEB8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x0042BEB8u) [[unlikely]] return; }
L_0042BEB8:
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 1;
L_0042BEBC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 176u)));  goto L_0042BFF4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 42u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0042BFF0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0042BFF0; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 52u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0042BFF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BEF4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0042BEF4u) [[unlikely]] return; }
L_0042BEF4:
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BF04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042BF04u) [[unlikely]] return; }
L_0042BF04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BF0Cu); set32(c.r[4], ld32((c.r[17].w[0] + 172u)));  if (depth < kMaxDepth) unit_00E2(c, 273u, depth + 1u); else { c.pc = 0x0048A4A0u; return; } if (c.pc != 0x0042BF0Cu) [[unlikely]] return; }
L_0042BF0C:
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BF18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0042BF18u) [[unlikely]] return; }
L_0042BF18:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BF34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042BF34u) [[unlikely]] return; }
L_0042BF34:
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BF48u); set32(c.r[6], c.r[6].w[0] + 16087u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x0042BF48u) [[unlikely]] return; }
L_0042BF48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BF68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 190u, depth + 1u); else { c.pc = 0x00489BA0u; return; } if (c.pc != 0x0042BF68u) [[unlikely]] return; }
L_0042BF68:
    c.f[13] = ld32((c.r[28].w[0] - 32020u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BF84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 175u, depth + 1u); else { c.pc = 0x004899C0u; return; } if (c.pc != 0x0042BF84u) [[unlikely]] return; }
L_0042BF84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[13] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BFA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 190u, depth + 1u); else { c.pc = 0x00489BA0u; return; } if (c.pc != 0x0042BFA8u) [[unlikely]] return; }
L_0042BFA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BFC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 175u, depth + 1u); else { c.pc = 0x004899C0u; return; } if (c.pc != 0x0042BFC8u) [[unlikely]] return; }
L_0042BFC8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0042BFD4; } }
    set32(c.r[7], c.r[17].w[0] + 104u);
    c.budget -= 1;
L_0042BFD4:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042BFF0u); set32(c.r[5], c.r[5].w[0] + 16102u);  if (depth < kMaxDepth) unit_00FC(c, 522u, depth + 1u); else { c.pc = 0x004F3D40u; return; } if (c.pc != 0x0042BFF0u) [[unlikely]] return; }
L_0042BFF0:
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 1;
L_0042BFF4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 180u)));  [[clang::musttail]] return unit_00CB(c, 16u, depth); }
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 1;
    [[clang::musttail]] return unit_00CB(c, 1u, depth);
}

}
