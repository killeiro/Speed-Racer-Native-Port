#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0038[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0,
    0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 19,
    0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0,
    0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31,
    0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0,
    0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 54, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0,
    0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 72, 0,
    0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 100, 0,
    0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 113, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 128, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 133,
    0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0,
    0, 139, 0, 0, 0, 140, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 146, 0, 147, 0, 0,
    148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 159, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0,
    0, 0, 163, 0, 164, 0, 165, 0, 166, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 170, 0, 171, 0, 172, 0, 0, 173,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 176, 0, 177, 0, 178, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181,
    0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 185, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0,
    0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 194, 0, 195, 0, 0, 196, 0,
    197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 201, 0, 202, 0, 203, 0, 0, 204, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 209, 0, 0, 210, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0,
    215, 216, 0, 217, 0, 0, 218, 0, 219, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 224, 0, 225, 0,
    226, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 230, 0, 231, 0, 232, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 235, 0, 236, 0, 237, 0, 238, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 242, 0, 243, 0, 244, 0, 0, 245,
    246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 249, 0, 250, 0, 251, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0,
    255, 0, 256, 0, 257, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 261, 0, 262, 0, 263, 0, 0, 264, 0, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0,
    270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0,
    0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0,
    0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0,
    0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0,
    0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0,
    0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342,
    0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0,
    354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 360, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0,
    364, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0,
    386, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0,
    409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 411, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413,
    414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418,
    0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0,
    0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0,
    0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    443, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0,
    450, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 456, 0,
    457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0,
    0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0,
    472, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 478,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0,
    482, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0,
    487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0,
    492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0,
    0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0,
    0, 503, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0,
    509, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0, 0, 517, 0, 0, 0, 0, 0,
    518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 528, 0, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0,
};

void unit_0038(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001E0000;
    case 2u: goto L_001E0010;
    case 3u: goto L_001E0028;
    case 4u: goto L_001E0034;
    case 5u: goto L_001E0044;
    case 6u: goto L_001E0050;
    case 7u: goto L_001E0070;
    case 8u: goto L_001E0090;
    case 9u: goto L_001E009C;
    case 10u: goto L_001E00B4;
    case 11u: goto L_001E00CC;
    case 12u: goto L_001E00F4;
    case 13u: goto L_001E0104;
    case 14u: goto L_001E0120;
    case 15u: goto L_001E0134;
    case 16u: goto L_001E0140;
    case 17u: goto L_001E015C;
    case 18u: goto L_001E0168;
    case 19u: goto L_001E017C;
    case 20u: goto L_001E0188;
    case 21u: goto L_001E0194;
    case 22u: goto L_001E01B8;
    case 23u: goto L_001E01C8;
    case 24u: goto L_001E01D4;
    case 25u: goto L_001E01E0;
    case 26u: goto L_001E01F4;
    case 27u: goto L_001E0214;
    case 28u: goto L_001E0228;
    case 29u: goto L_001E0240;
    case 30u: goto L_001E0260;
    case 31u: goto L_001E027C;
    case 32u: goto L_001E0294;
    case 33u: goto L_001E02AC;
    case 34u: goto L_001E02D4;
    case 35u: goto L_001E02E4;
    case 36u: goto L_001E0300;
    case 37u: goto L_001E0314;
    case 38u: goto L_001E0320;
    case 39u: goto L_001E033C;
    case 40u: goto L_001E0348;
    case 41u: goto L_001E035C;
    case 42u: goto L_001E0368;
    case 43u: goto L_001E0374;
    case 44u: goto L_001E0394;
    case 45u: goto L_001E03B0;
    case 46u: goto L_001E03CC;
    case 47u: goto L_001E03E0;
    case 48u: goto L_001E0408;
    case 49u: goto L_001E041C;
    case 50u: goto L_001E0434;
    case 51u: goto L_001E0440;
    case 52u: goto L_001E044C;
    case 53u: goto L_001E0470;
    case 54u: goto L_001E0488;
    case 55u: goto L_001E0494;
    case 56u: goto L_001E04A4;
    case 57u: goto L_001E04BC;
    case 58u: goto L_001E04D0;
    case 59u: goto L_001E04F4;
    case 60u: goto L_001E0508;
    case 61u: goto L_001E0514;
    case 62u: goto L_001E0530;
    case 63u: goto L_001E0540;
    case 64u: goto L_001E054C;
    case 65u: goto L_001E0558;
    case 66u: goto L_001E0564;
    case 67u: goto L_001E0580;
    case 68u: goto L_001E05A8;
    case 69u: goto L_001E05CC;
    case 70u: goto L_001E05D8;
    case 71u: goto L_001E05EC;
    case 72u: goto L_001E05F8;
    case 73u: goto L_001E060C;
    case 74u: goto L_001E063C;
    case 75u: goto L_001E064C;
    case 76u: goto L_001E0664;
    case 77u: goto L_001E06A4;
    case 78u: goto L_001E06B0;
    case 79u: goto L_001E06C4;
    case 80u: goto L_001E06E0;
    case 81u: goto L_001E0700;
    case 82u: goto L_001E0714;
    case 83u: goto L_001E0720;
    case 84u: goto L_001E0728;
    case 85u: goto L_001E0730;
    case 86u: goto L_001E073C;
    case 87u: goto L_001E074C;
    case 88u: goto L_001E0758;
    case 89u: goto L_001E0774;
    case 90u: goto L_001E079C;
    case 91u: goto L_001E07B0;
    case 92u: goto L_001E07BC;
    case 93u: goto L_001E07E4;
    case 94u: goto L_001E0800;
    case 95u: goto L_001E0810;
    case 96u: goto L_001E0838;
    case 97u: goto L_001E084C;
    case 98u: goto L_001E0858;
    case 99u: goto L_001E0864;
    case 100u: goto L_001E0878;
    case 101u: goto L_001E088C;
    case 102u: goto L_001E0898;
    case 103u: goto L_001E08B0;
    case 104u: goto L_001E08C0;
    case 105u: goto L_001E08D0;
    case 106u: goto L_001E08E0;
    case 107u: goto L_001E0900;
    case 108u: goto L_001E093C;
    case 109u: goto L_001E096C;
    case 110u: goto L_001E097C;
    case 111u: goto L_001E09A4;
    case 112u: goto L_001E09B8;
    case 113u: goto L_001E09C0;
    case 114u: goto L_001E09C8;
    case 115u: goto L_001E09DC;
    case 116u: goto L_001E09EC;
    case 117u: goto L_001E0A00;
    case 118u: goto L_001E0A2C;
    case 119u: goto L_001E0A48;
    case 120u: goto L_001E0A50;
    case 121u: goto L_001E0A58;
    case 122u: goto L_001E0A6C;
    case 123u: goto L_001E0A80;
    case 124u: goto L_001E0AB0;
    case 125u: goto L_001E0AD0;
    case 126u: goto L_001E0AE0;
    case 127u: goto L_001E0AEC;
    case 128u: goto L_001E0AF4;
    case 129u: goto L_001E0B20;
    case 130u: goto L_001E0B40;
    case 131u: goto L_001E0B60;
    case 132u: goto L_001E0B70;
    case 133u: goto L_001E0B7C;
    case 134u: goto L_001E0B84;
    case 135u: goto L_001E0BB0;
    case 136u: goto L_001E0BD0;
    case 137u: goto L_001E0BEC;
    case 138u: goto L_001E0BF4;
    case 139u: goto L_001E0C04;
    case 140u: goto L_001E0C14;
    case 141u: goto L_001E0C1C;
    case 142u: goto L_001E0C28;
    case 143u: goto L_001E0C40;
    case 144u: goto L_001E0C58;
    case 145u: goto L_001E0C60;
    case 146u: goto L_001E0C6C;
    case 147u: goto L_001E0C74;
    case 148u: goto L_001E0C80;
    case 149u: goto L_001E0C90;
    case 150u: goto L_001E0CB0;
    case 151u: goto L_001E0CC8;
    case 152u: goto L_001E0CD0;
    case 153u: goto L_001E0CDC;
    case 154u: goto L_001E0CE4;
    case 155u: goto L_001E0CF0;
    case 156u: goto L_001E0D10;
    case 157u: goto L_001E0D28;
    case 158u: goto L_001E0D30;
    case 159u: goto L_001E0D3C;
    case 160u: goto L_001E0D44;
    case 161u: goto L_001E0D50;
    case 162u: goto L_001E0D70;
    case 163u: goto L_001E0D88;
    case 164u: goto L_001E0D90;
    case 165u: goto L_001E0D98;
    case 166u: goto L_001E0DA0;
    case 167u: goto L_001E0DAC;
    case 168u: goto L_001E0DC0;
    case 169u: goto L_001E0DD8;
    case 170u: goto L_001E0DE0;
    case 171u: goto L_001E0DE8;
    case 172u: goto L_001E0DF0;
    case 173u: goto L_001E0DFC;
    case 174u: goto L_001E0E10;
    case 175u: goto L_001E0E28;
    case 176u: goto L_001E0E30;
    case 177u: goto L_001E0E38;
    case 178u: goto L_001E0E40;
    case 179u: goto L_001E0E4C;
    case 180u: goto L_001E0E60;
    case 181u: goto L_001E0E7C;
    case 182u: goto L_001E0E84;
    case 183u: goto L_001E0E94;
    case 184u: goto L_001E0E9C;
    case 185u: goto L_001E0EA8;
    case 186u: goto L_001E0EB0;
    case 187u: goto L_001E0EBC;
    case 188u: goto L_001E0EE0;
    case 189u: goto L_001E0EF8;
    case 190u: goto L_001E0F14;
    case 191u: goto L_001E0F30;
    case 192u: goto L_001E0F4C;
    case 193u: goto L_001E0F54;
    case 194u: goto L_001E0F64;
    case 195u: goto L_001E0F6C;
    case 196u: goto L_001E0F78;
    case 197u: goto L_001E0F80;
    case 198u: goto L_001E0F8C;
    case 199u: goto L_001E0FB0;
    case 200u: goto L_001E0FC8;
    case 201u: goto L_001E0FD0;
    case 202u: goto L_001E0FD8;
    case 203u: goto L_001E0FE0;
    case 204u: goto L_001E0FEC;
    case 205u: goto L_001E1000;
    case 206u: goto L_001E1018;
    case 207u: goto L_001E1020;
    case 208u: goto L_001E1028;
    case 209u: goto L_001E1030;
    case 210u: goto L_001E103C;
    case 211u: goto L_001E1040;
    case 212u: goto L_001E1050;
    case 213u: goto L_001E106C;
    case 214u: goto L_001E1074;
    case 215u: goto L_001E1080;
    case 216u: goto L_001E1084;
    case 217u: goto L_001E108C;
    case 218u: goto L_001E1098;
    case 219u: goto L_001E10A0;
    case 220u: goto L_001E10AC;
    case 221u: goto L_001E10C0;
    case 222u: goto L_001E10D0;
    case 223u: goto L_001E10E8;
    case 224u: goto L_001E10F0;
    case 225u: goto L_001E10F8;
    case 226u: goto L_001E1100;
    case 227u: goto L_001E110C;
    case 228u: goto L_001E1120;
    case 229u: goto L_001E1138;
    case 230u: goto L_001E1140;
    case 231u: goto L_001E1148;
    case 232u: goto L_001E1150;
    case 233u: goto L_001E115C;
    case 234u: goto L_001E1170;
    case 235u: goto L_001E1188;
    case 236u: goto L_001E1190;
    case 237u: goto L_001E1198;
    case 238u: goto L_001E11A0;
    case 239u: goto L_001E11AC;
    case 240u: goto L_001E11C0;
    case 241u: goto L_001E11D8;
    case 242u: goto L_001E11E0;
    case 243u: goto L_001E11E8;
    case 244u: goto L_001E11F0;
    case 245u: goto L_001E11FC;
    case 246u: goto L_001E1200;
    case 247u: goto L_001E1210;
    case 248u: goto L_001E1228;
    case 249u: goto L_001E1230;
    case 250u: goto L_001E1238;
    case 251u: goto L_001E1240;
    case 252u: goto L_001E124C;
    case 253u: goto L_001E1260;
    case 254u: goto L_001E1278;
    case 255u: goto L_001E1280;
    case 256u: goto L_001E1288;
    case 257u: goto L_001E1290;
    case 258u: goto L_001E129C;
    case 259u: goto L_001E12B0;
    case 260u: goto L_001E12C8;
    case 261u: goto L_001E12D0;
    case 262u: goto L_001E12D8;
    case 263u: goto L_001E12E0;
    case 264u: goto L_001E12EC;
    case 265u: goto L_001E1300;
    case 266u: goto L_001E1320;
    case 267u: goto L_001E1330;
    case 268u: goto L_001E1360;
    case 269u: goto L_001E1378;
    case 270u: goto L_001E1380;
    case 271u: goto L_001E13A8;
    case 272u: goto L_001E13F0;
    case 273u: goto L_001E143C;
    case 274u: goto L_001E1450;
    case 275u: goto L_001E1470;
    case 276u: goto L_001E153C;
    case 277u: goto L_001E1550;
    case 278u: goto L_001E1564;
    case 279u: goto L_001E15AC;
    case 280u: goto L_001E15C0;
    case 281u: goto L_001E15C8;
    case 282u: goto L_001E15D8;
    case 283u: goto L_001E15EC;
    case 284u: goto L_001E160C;
    case 285u: goto L_001E1628;
    case 286u: goto L_001E167C;
    case 287u: goto L_001E16A8;
    case 288u: goto L_001E16D4;
    case 289u: goto L_001E16F4;
    case 290u: goto L_001E173C;
    case 291u: goto L_001E1764;
    case 292u: goto L_001E178C;
    case 293u: goto L_001E1794;
    case 294u: goto L_001E17AC;
    case 295u: goto L_001E17C0;
    case 296u: goto L_001E17D4;
    case 297u: goto L_001E17E4;
    case 298u: goto L_001E17F8;
    case 299u: goto L_001E1820;
    case 300u: goto L_001E183C;
    case 301u: goto L_001E1854;
    case 302u: goto L_001E1868;
    case 303u: goto L_001E1880;
    case 304u: goto L_001E18C0;
    case 305u: goto L_001E1940;
    case 306u: goto L_001E194C;
    case 307u: goto L_001E1970;
    case 308u: goto L_001E1988;
    case 309u: goto L_001E19C0;
    case 310u: goto L_001E19F4;
    case 311u: goto L_001E1A08;
    case 312u: goto L_001E1A4C;
    case 313u: goto L_001E1A78;
    case 314u: goto L_001E1A90;
    case 315u: goto L_001E1AA4;
    case 316u: goto L_001E1AC4;
    case 317u: goto L_001E1AD0;
    case 318u: goto L_001E1AE8;
    case 319u: goto L_001E1AF8;
    case 320u: goto L_001E1B1C;
    case 321u: goto L_001E1B64;
    case 322u: goto L_001E1BA8;
    case 323u: goto L_001E1BB0;
    case 324u: goto L_001E1BC0;
    case 325u: goto L_001E1BF0;
    case 326u: goto L_001E1C34;
    case 327u: goto L_001E1C48;
    case 328u: goto L_001E1C58;
    case 329u: goto L_001E1C64;
    case 330u: goto L_001E1C90;
    case 331u: goto L_001E1CEC;
    case 332u: goto L_001E1D4C;
    case 333u: goto L_001E1D74;
    case 334u: goto L_001E1DA0;
    case 335u: goto L_001E1DB4;
    case 336u: goto L_001E1DC0;
    case 337u: goto L_001E1DE0;
    case 338u: goto L_001E1DF4;
    case 339u: goto L_001E1E18;
    case 340u: goto L_001E1E2C;
    case 341u: goto L_001E1E50;
    case 342u: goto L_001E1E7C;
    case 343u: goto L_001E1E90;
    case 344u: goto L_001E1EB0;
    case 345u: goto L_001E1EBC;
    case 346u: goto L_001E1ECC;
    case 347u: goto L_001E1EDC;
    case 348u: goto L_001E1F10;
    case 349u: goto L_001E1F2C;
    case 350u: goto L_001E1F3C;
    case 351u: goto L_001E1F48;
    case 352u: goto L_001E1F54;
    case 353u: goto L_001E1F68;
    case 354u: goto L_001E1F80;
    case 355u: goto L_001E1FA8;
    case 356u: goto L_001E1FB8;
    case 357u: goto L_001E1FC8;
    case 358u: goto L_001E1FE8;
    case 359u: goto L_001E2030;
    case 360u: goto L_001E203C;
    case 361u: goto L_001E2040;
    case 362u: goto L_001E2068;
    case 363u: goto L_001E2074;
    case 364u: goto L_001E2080;
    case 365u: goto L_001E2088;
    case 366u: goto L_001E20AC;
    case 367u: goto L_001E20C0;
    case 368u: goto L_001E20E8;
    case 369u: goto L_001E2114;
    case 370u: goto L_001E2128;
    case 371u: goto L_001E2140;
    case 372u: goto L_001E2180;
    case 373u: goto L_001E21B0;
    case 374u: goto L_001E21C4;
    case 375u: goto L_001E21E0;
    case 376u: goto L_001E21E8;
    case 377u: goto L_001E2240;
    case 378u: goto L_001E2258;
    case 379u: goto L_001E2288;
    case 380u: goto L_001E22A8;
    case 381u: goto L_001E22E4;
    case 382u: goto L_001E2324;
    case 383u: goto L_001E2334;
    case 384u: goto L_001E2358;
    case 385u: goto L_001E236C;
    case 386u: goto L_001E2380;
    case 387u: goto L_001E2388;
    case 388u: goto L_001E23B0;
    case 389u: goto L_001E23DC;
    case 390u: goto L_001E23F0;
    case 391u: goto L_001E2430;
    case 392u: goto L_001E2460;
    case 393u: goto L_001E24B4;
    case 394u: goto L_001E24C4;
    case 395u: goto L_001E24F8;
    case 396u: goto L_001E2530;
    case 397u: goto L_001E2558;
    case 398u: goto L_001E25C8;
    case 399u: goto L_001E25F4;
    case 400u: goto L_001E2630;
    case 401u: goto L_001E265C;
    case 402u: goto L_001E268C;
    case 403u: goto L_001E26C0;
    case 404u: goto L_001E26F0;
    case 405u: goto L_001E273C;
    case 406u: goto L_001E277C;
    case 407u: goto L_001E27C4;
    case 408u: goto L_001E27E4;
    case 409u: goto L_001E2800;
    case 410u: goto L_001E283C;
    case 411u: goto L_001E2840;
    case 412u: goto L_001E2864;
    case 413u: goto L_001E287C;
    case 414u: goto L_001E2880;
    case 415u: goto L_001E2900;
    case 416u: goto L_001E2930;
    case 417u: goto L_001E29DC;
    case 418u: goto L_001E29FC;
    case 419u: goto L_001E2A18;
    case 420u: goto L_001E2AA4;
    case 421u: goto L_001E2AB8;
    case 422u: goto L_001E2B24;
    case 423u: goto L_001E2B50;
    case 424u: goto L_001E2BBC;
    case 425u: goto L_001E2BD0;
    case 426u: goto L_001E2BF8;
    case 427u: goto L_001E2C0C;
    case 428u: goto L_001E2C48;
    case 429u: goto L_001E2CB4;
    case 430u: goto L_001E2CC8;
    case 431u: goto L_001E2CF0;
    case 432u: goto L_001E2D08;
    case 433u: goto L_001E2D3C;
    case 434u: goto L_001E2D4C;
    case 435u: goto L_001E2DB4;
    case 436u: goto L_001E2DC8;
    case 437u: goto L_001E2E40;
    case 438u: goto L_001E2E84;
    case 439u: goto L_001E2EA8;
    case 440u: goto L_001E2F00;
    case 441u: goto L_001E2F40;
    case 442u: goto L_001E2F5C;
    case 443u: goto L_001E3000;
    case 444u: goto L_001E3020;
    case 445u: goto L_001E31A0;
    case 446u: goto L_001E31BC;
    case 447u: goto L_001E31C8;
    case 448u: goto L_001E31DC;
    case 449u: goto L_001E31F4;
    case 450u: goto L_001E3200;
    case 451u: goto L_001E3220;
    case 452u: goto L_001E3230;
    case 453u: goto L_001E3240;
    case 454u: goto L_001E3260;
    case 455u: goto L_001E3270;
    case 456u: goto L_001E3278;
    case 457u: goto L_001E3280;
    case 458u: goto L_001E32AC;
    case 459u: goto L_001E32C8;
    case 460u: goto L_001E32F4;
    case 461u: goto L_001E3320;
    case 462u: goto L_001E3344;
    case 463u: goto L_001E3360;
    case 464u: goto L_001E3368;
    case 465u: goto L_001E33F4;
    case 466u: goto L_001E3410;
    case 467u: goto L_001E3430;
    case 468u: goto L_001E3440;
    case 469u: goto L_001E3454;
    case 470u: goto L_001E345C;
    case 471u: goto L_001E346C;
    case 472u: goto L_001E3480;
    case 473u: goto L_001E34A0;
    case 474u: goto L_001E34C0;
    case 475u: goto L_001E34D0;
    case 476u: goto L_001E34D8;
    case 477u: goto L_001E34F0;
    case 478u: goto L_001E34FC;
    case 479u: goto L_001E352C;
    case 480u: goto L_001E3550;
    case 481u: goto L_001E3570;
    case 482u: goto L_001E3580;
    case 483u: goto L_001E3588;
    case 484u: goto L_001E35A0;
    case 485u: goto L_001E35AC;
    case 486u: goto L_001E35DC;
    case 487u: goto L_001E3600;
    case 488u: goto L_001E3628;
    case 489u: goto L_001E363C;
    case 490u: goto L_001E3644;
    case 491u: goto L_001E3678;
    case 492u: goto L_001E3680;
    case 493u: goto L_001E36F0;
    case 494u: goto L_001E3708;
    case 495u: goto L_001E3730;
    case 496u: goto L_001E374C;
    case 497u: goto L_001E3784;
    case 498u: goto L_001E37A0;
    case 499u: goto L_001E37B0;
    case 500u: goto L_001E37DC;
    case 501u: goto L_001E3844;
    case 502u: goto L_001E3864;
    case 503u: goto L_001E3884;
    case 504u: goto L_001E38A0;
    case 505u: goto L_001E38CC;
    case 506u: goto L_001E3934;
    case 507u: goto L_001E3954;
    case 508u: goto L_001E3974;
    case 509u: goto L_001E3980;
    case 510u: goto L_001E3990;
    case 511u: goto L_001E39AC;
    case 512u: goto L_001E39DC;
    case 513u: goto L_001E3A18;
    case 514u: goto L_001E3A2C;
    case 515u: goto L_001E3A40;
    case 516u: goto L_001E3A5C;
    case 517u: goto L_001E3A68;
    case 518u: goto L_001E3A80;
    case 519u: goto L_001E3AB0;
    case 520u: goto L_001E3B74;
    case 521u: goto L_001E3BA0;
    case 522u: goto L_001E3BD8;
    case 523u: goto L_001E3C0C;
    case 524u: goto L_001E3C1C;
    case 525u: goto L_001E3C30;
    case 526u: goto L_001E3C74;
    case 527u: goto L_001E3CB0;
    case 528u: goto L_001E3D10;
    case 529u: goto L_001E3D1C;
    case 530u: goto L_001E3D30;
    case 531u: goto L_001E3D80;
    case 532u: goto L_001E3DB0;
    case 533u: goto L_001E3DE0;
    case 534u: goto L_001E3DF0;
    case 535u: goto L_001E3E2C;
    case 536u: goto L_001E3E3C;
    case 537u: goto L_001E3E60;
    case 538u: goto L_001E3E9C;
    case 539u: goto L_001E3EAC;
    case 540u: goto L_001E3ED0;
    case 541u: goto L_001E3F24;
    case 542u: goto L_001E3F54;
    case 543u: goto L_001E3F68;
    case 544u: goto L_001E3F98;
    case 545u: goto L_001E3FC0;
    case 546u: goto L_001E3FF0;
    default: bad_entry(c, 0x001E0000u); return;
    }
L_001E0000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E0010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0028u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 392u, depth + 1u); else { c.pc = 0x001DE760u; return; } if (c.pc != 0x001E0028u) [[unlikely]] return; }
L_001E0028:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0034u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0037(c, 392u, depth + 1u); else { c.pc = 0x001DE760u; return; } if (c.pc != 0x001E0034u) [[unlikely]] return; }
L_001E0034:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0044u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 55u, depth + 1u); else { c.pc = 0x001C5540u; return; } if (c.pc != 0x001E0044u) [[unlikely]] return; }
L_001E0044:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0050u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 21u, depth + 1u); else { c.pc = 0x001C4730u; return; } if (c.pc != 0x001E0050u) [[unlikely]] return; }
L_001E0050:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E0070:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], 0u + 5u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0090u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 399u, depth + 1u); else { c.pc = 0x001DE840u; return; } if (c.pc != 0x001E0090u) [[unlikely]] return; }
L_001E0090:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E009Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001E009Cu) [[unlikely]] return; }
L_001E009C:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_001E00BC; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E00B4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001E00B4u) [[unlikely]] return; }
L_001E00B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E0160; } }
L_001E00BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E00CCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 341u, depth + 1u); else { c.pc = 0x001DE1A0u; return; } if (c.pc != 0x001E00CCu) [[unlikely]] return; }
L_001E00CC:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 5;
    if (c.r[16].sd[0] >= 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001E00F8; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E00F4u); set32(c.r[6], c.r[6].w[0] - 22814u);  if (depth < kMaxDepth) unit_0037(c, 426u, depth + 1u); else { c.pc = 0x001DEB50u; return; } if (c.pc != 0x001E00F4u) [[unlikely]] return; }
L_001E00F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E00F8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0104u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0032(c, 119u, depth + 1u); else { c.pc = 0x001CA610u; return; } if (c.pc != 0x001E0104u) [[unlikely]] return; }
L_001E0104:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E0120; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0120u); set32(c.r[6], c.r[6].w[0] - 22787u);  if (depth < kMaxDepth) unit_0037(c, 426u, depth + 1u); else { c.pc = 0x001DEB50u; return; } if (c.pc != 0x001E0120u) [[unlikely]] return; }
L_001E0120:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 22773u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0134u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0032(c, 106u, depth + 1u); else { c.pc = 0x001CA130u; return; } if (c.pc != 0x001E0134u) [[unlikely]] return; }
L_001E0134:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0140u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001E0140u) [[unlikely]] return; }
L_001E0140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E015C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E015Cu); set32(c.r[5], c.r[5].w[0] - 22771u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E015Cu) [[unlikely]] return; }
L_001E015C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E0160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0168u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 8u, depth + 1u); else { c.pc = 0x001C4200u; return; } if (c.pc != 0x001E0168u) [[unlikely]] return; }
L_001E0168:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 22721u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E017Cu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001E017Cu) [[unlikely]] return; }
L_001E017C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0188u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 15u, depth + 1u); else { c.pc = 0x001C4570u; return; } if (c.pc != 0x001E0188u) [[unlikely]] return; }
L_001E0188:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0194u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001E0194u) [[unlikely]] return; }
L_001E0194:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001E01C0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E01B8u); set32(c.r[5], c.r[5].w[0] - 22714u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E01B8u) [[unlikely]] return; }
L_001E01B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E01CC; } }
L_001E01C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E01C8u); set32(c.r[5], 0u - 3u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001E01C8u) [[unlikely]] return; }
L_001E01C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E01CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E01D4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001E01D4u) [[unlikely]] return; }
L_001E01D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E01E0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 58u, depth + 1u); else { c.pc = 0x001C57E0u; return; } if (c.pc != 0x001E01E0u) [[unlikely]] return; }
L_001E01E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001E0220; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E01F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 50u, depth + 1u); else { c.pc = 0x001C5280u; return; } if (c.pc != 0x001E01F4u) [[unlikely]] return; }
L_001E01F4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E021C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0214u); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 64u, depth + 1u); else { c.pc = 0x001C5B90u; return; } if (c.pc != 0x001E0214u) [[unlikely]] return; }
L_001E0214:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001E0244; } }
L_001E021C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E0220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0228u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0030(c, 383u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001E0228u) [[unlikely]] return; }
L_001E0228:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E0240; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0240u); set32(c.r[5], c.r[5].w[0] - 22666u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E0240u) [[unlikely]] return; }
L_001E0240:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001E0244:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001E0260:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E027Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001E027Cu) [[unlikely]] return; }
L_001E027C:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_001E029C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0294u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001E0294u) [[unlikely]] return; }
L_001E0294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E0340; } }
L_001E029C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E02ACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 341u, depth + 1u); else { c.pc = 0x001DE1A0u; return; } if (c.pc != 0x001E02ACu) [[unlikely]] return; }
L_001E02AC:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 5;
    if (c.r[16].sd[0] >= 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001E02D8; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E02D4u); set32(c.r[6], c.r[6].w[0] - 22814u);  if (depth < kMaxDepth) unit_0037(c, 426u, depth + 1u); else { c.pc = 0x001DEB50u; return; } if (c.pc != 0x001E02D4u) [[unlikely]] return; }
L_001E02D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E02D8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E02E4u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0032(c, 119u, depth + 1u); else { c.pc = 0x001CA610u; return; } if (c.pc != 0x001E02E4u) [[unlikely]] return; }
L_001E02E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E0300; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0300u); set32(c.r[6], c.r[6].w[0] - 22787u);  if (depth < kMaxDepth) unit_0037(c, 426u, depth + 1u); else { c.pc = 0x001DEB50u; return; } if (c.pc != 0x001E0300u) [[unlikely]] return; }
L_001E0300:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 22773u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0314u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0032(c, 106u, depth + 1u); else { c.pc = 0x001CA130u; return; } if (c.pc != 0x001E0314u) [[unlikely]] return; }
L_001E0314:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0320u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001E0320u) [[unlikely]] return; }
L_001E0320:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E033C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E033Cu); set32(c.r[5], c.r[5].w[0] - 22771u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E033Cu) [[unlikely]] return; }
L_001E033C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E0340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0348u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 8u, depth + 1u); else { c.pc = 0x001C4200u; return; } if (c.pc != 0x001E0348u) [[unlikely]] return; }
L_001E0348:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 22721u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E035Cu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001E035Cu) [[unlikely]] return; }
L_001E035C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0368u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 15u, depth + 1u); else { c.pc = 0x001C4570u; return; } if (c.pc != 0x001E0368u) [[unlikely]] return; }
L_001E0368:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0374u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001E0374u) [[unlikely]] return; }
L_001E0374:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001E0398; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0394u); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001E0394u) [[unlikely]] return; }
L_001E0394:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001E0398:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001E03B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E03CCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001E03CCu) [[unlikely]] return; }
L_001E03CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E03E0u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0037(c, 399u, depth + 1u); else { c.pc = 0x001DE840u; return; } if (c.pc != 0x001E03E0u) [[unlikely]] return; }
L_001E03E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001E0408; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001E0408; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0408u); set32(c.r[6], c.r[6].w[0] - 22612u);  if (depth < kMaxDepth) unit_0037(c, 426u, depth + 1u); else { c.pc = 0x001DEB50u; return; } if (c.pc != 0x001E0408u) [[unlikely]] return; }
L_001E0408:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E041Cu); set32(c.r[6], c.r[6].w[0] - 22590u);  if (depth < kMaxDepth) unit_0037(c, 334u, depth + 1u); else { c.pc = 0x001DE110u; return; } if (c.pc != 0x001E041Cu) [[unlikely]] return; }
L_001E041C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001E0438; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0434u); set32(c.r[5], c.r[5].w[0] - 22578u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E0434u) [[unlikely]] return; }
L_001E0434:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E0438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0440u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001E0440u) [[unlikely]] return; }
L_001E0440:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E044Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 384u, depth + 1u); else { c.pc = 0x001C3E80u; return; } if (c.pc != 0x001E044Cu) [[unlikely]] return; }
L_001E044C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E0470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0488u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 392u, depth + 1u); else { c.pc = 0x001DE760u; return; } if (c.pc != 0x001E0488u) [[unlikely]] return; }
L_001E0488:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0494u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 9u, depth + 1u); else { c.pc = 0x001C42E0u; return; } if (c.pc != 0x001E0494u) [[unlikely]] return; }
L_001E0494:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E04AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E04A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 40u, depth + 1u); else { c.pc = 0x001C4A80u; return; } if (c.pc != 0x001E04A4u) [[unlikely]] return; }
L_001E04A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E04C0; } }
L_001E04AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E04BCu); set32(c.r[6], c.r[6].w[0] - 22590u);  if (depth < kMaxDepth) unit_0037(c, 334u, depth + 1u); else { c.pc = 0x001DE110u; return; } if (c.pc != 0x001E04BCu) [[unlikely]] return; }
L_001E04BC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001E04C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E04D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[12] = c.r[2].w[0];
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E04F4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 341u, depth + 1u); else { c.pc = 0x001DE1A0u; return; } if (c.pc != 0x001E04F4u) [[unlikely]] return; }
L_001E04F4:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0508u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 392u, depth + 1u); else { c.pc = 0x001DE760u; return; } if (c.pc != 0x001E0508u) [[unlikely]] return; }
L_001E0508:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0514u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 57u, depth + 1u); else { c.pc = 0x001C56F0u; return; } if (c.pc != 0x001E0514u) [[unlikely]] return; }
L_001E0514:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001E0528; }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001E0538; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E0528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0530u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001E0530u) [[unlikely]] return; }
L_001E0530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E055C; } }
L_001E0538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0540u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 421u, depth + 1u); else { c.pc = 0x001DEAD0u; return; } if (c.pc != 0x001E0540u) [[unlikely]] return; }
L_001E0540:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E054Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001E054Cu) [[unlikely]] return; }
L_001E054C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0558u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0030(c, 361u, depth + 1u); else { c.pc = 0x001C3940u; return; } if (c.pc != 0x001E0558u) [[unlikely]] return; }
L_001E0558:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E055C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0564u);  if (depth < kMaxDepth) unit_0030(c, 367u, depth + 1u); else { c.pc = 0x001C3AF0u; return; } if (c.pc != 0x001E0564u) [[unlikely]] return; }
L_001E0564:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E0580:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], 0u + 2u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E05A8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 341u, depth + 1u); else { c.pc = 0x001DE1A0u; return; } if (c.pc != 0x001E05A8u) [[unlikely]] return; }
L_001E05A8:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], 0u + 10u);
    set32(c.r[18], c.f[0]);
    c.budget -= 6;
    if (c.r[18].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001E0600; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E05CCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 392u, depth + 1u); else { c.pc = 0x001DE760u; return; } if (c.pc != 0x001E05CCu) [[unlikely]] return; }
L_001E05CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E05D8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 58u, depth + 1u); else { c.pc = 0x001C57E0u; return; } if (c.pc != 0x001E05D8u) [[unlikely]] return; }
L_001E05D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001E06BC; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E05ECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 50u, depth + 1u); else { c.pc = 0x001C5280u; return; } if (c.pc != 0x001E05ECu) [[unlikely]] return; }
L_001E05EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E05F8u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E05F8u) [[unlikely]] return; }
L_001E05F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E06C8; } }
L_001E0600:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E060Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0037(c, 380u, depth + 1u); else { c.pc = 0x001DE600u; return; } if (c.pc != 0x001E060Cu) [[unlikely]] return; }
L_001E060C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E0628; } }
    c.r[1].d[0] = c.r[18].sd[0] < 37ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[6].d[0] = c.r[18].d[0] + 0ull;  goto L_001E0640; }
L_001E0628:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E063Cu); set32(c.r[6], c.r[6].w[0] - 22542u);  if (depth < kMaxDepth) unit_0037(c, 426u, depth + 1u); else { c.pc = 0x001DEB50u; return; } if (c.pc != 0x001E063Cu) [[unlikely]] return; }
L_001E063C:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001E0640:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E064Cu); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_00AE(c, 309u, depth + 1u); else { c.pc = 0x003BAF90u; return; } if (c.pc != 0x001E064Cu) [[unlikely]] return; }
L_001E064C:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_001E06B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 31769u);  if (t) { goto L_001E066C; } }
L_001E0664:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 2;
L_001E066C:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 76u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0664u | kUnwind; return; } goto L_001E0664; }
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E06B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E06A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 230u, depth + 1u); else { c.pc = 0x003BDE50u; return; } if (c.pc != 0x001E06A4u) [[unlikely]] return; }
L_001E06A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E06B0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E06B0u) [[unlikely]] return; }
L_001E06B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E06C8; } }
L_001E06B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E06BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E06C4u);  if (depth < kMaxDepth) unit_0031(c, 40u, depth + 1u); else { c.pc = 0x001C4A80u; return; } if (c.pc != 0x001E06C4u) [[unlikely]] return; }
L_001E06C4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001E06C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E06E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0700u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x001E0700u) [[unlikely]] return; }
L_001E0700:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0714u); set32(c.r[5], c.r[5].w[0] - 23455u);  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x001E0714u) [[unlikely]] return; }
L_001E0714:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0720u); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 17u, depth + 1u); else { c.pc = 0x001C4640u; return; } if (c.pc != 0x001E0720u) [[unlikely]] return; }
L_001E0720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_001E07C0; } }
L_001E0728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0730u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001E0730u) [[unlikely]] return; }
L_001E0730:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E073Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001E073Cu) [[unlikely]] return; }
L_001E073C:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E074Cu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 382u, depth + 1u); else { c.pc = 0x001C3D80u; return; } if (c.pc != 0x001E074Cu) [[unlikely]] return; }
L_001E074C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0758u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x001E0758u) [[unlikely]] return; }
L_001E0758:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { c.r[1].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;  goto L_001E077C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0774u); set32(c.r[5], c.r[5].w[0] - 22524u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E0774u) [[unlikely]] return; }
L_001E0774:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001E07EC; } }
L_001E077C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E079C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E079Cu); set32(c.r[4], c.r[4].w[0] - 22481u);  if (depth < kMaxDepth) unit_00AD(c, 274u, depth + 1u); else { c.pc = 0x003B70E0u; return; } if (c.pc != 0x001E079Cu) [[unlikely]] return; }
L_001E079C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E07B0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 274u, depth + 1u); else { c.pc = 0x003B70E0u; return; } if (c.pc != 0x001E07B0u) [[unlikely]] return; }
L_001E07B0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E07BCu); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001E07BCu) [[unlikely]] return; }
L_001E07BC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001E07C0:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0728u | kUnwind; return; } goto L_001E0728; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E07E4u); set32(c.r[4], c.r[4].w[0] - 22479u);  if (depth < kMaxDepth) unit_00AD(c, 274u, depth + 1u); else { c.pc = 0x003B70E0u; return; } if (c.pc != 0x001E07E4u) [[unlikely]] return; }
L_001E07E4:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_001E07EC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E0800:
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 1;
    c.pc = 0x001E0804u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_001E0810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 22135u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 22464u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0838u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0037(c, 307u, depth + 1u); else { c.pc = 0x001DDEC0u; return; } if (c.pc != 0x001E0838u) [[unlikely]] return; }
L_001E0838:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 22130u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E084Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001E084Cu) [[unlikely]] return; }
L_001E084C:
    c.f[12] = ld32((c.r[28].w[0] - 32288u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0858u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E0858u) [[unlikely]] return; }
L_001E0858:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0864u); set32(c.r[5], 0u - 3u);  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x001E0864u) [[unlikely]] return; }
L_001E0864:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 22127u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0878u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001E0878u) [[unlikely]] return; }
L_001E0878:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3680u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E088Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 22u, depth + 1u); else { c.pc = 0x001C4760u; return; } if (c.pc != 0x001E088Cu) [[unlikely]] return; }
L_001E088C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0898u); set32(c.r[5], 0u - 10001u);  if (depth < kMaxDepth) unit_0031(c, 6u, depth + 1u); else { c.pc = 0x001C4130u; return; } if (c.pc != 0x001E0898u) [[unlikely]] return; }
L_001E0898:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E08B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E08C0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E08C0u) [[unlikely]] return; }
L_001E08C0:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E08D0u);  if (depth < kMaxDepth) unit_00AE(c, 84u, depth + 1u); else { c.pc = 0x003B8D38u; return; } if (c.pc != 0x001E08D0u) [[unlikely]] return; }
L_001E08D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E08E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0900u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x001E0900u) [[unlikely]] return; }
L_001E0900:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[5].d[0] = c.r[4].d[0] | 65535ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[3].w[0];
    c.r[2].d[0] = c.hi.d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E093Cu);  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x001E093Cu) [[unlikely]] return; }
L_001E093C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001E09E4; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001E0974; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001E0964; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_001E0A74; } }
L_001E0964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E096Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E096Cu) [[unlikely]] return; }
L_001E096C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E0A8C; } }
L_001E0974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E097Cu);  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E097Cu) [[unlikely]] return; }
L_001E097C:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[17].sd[0] > 0;  if (t) { goto L_001E09A4; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E09A4u); set32(c.r[6], c.r[6].w[0] - 22121u);  if (depth < kMaxDepth) unit_0037(c, 426u, depth + 1u); else { c.pc = 0x001DEB50u; return; } if (c.pc != 0x001E09A4u) [[unlikely]] return; }
L_001E09A4:
    c.f[0] = c.r[17].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E09B8u); c.f[12] = fp::mul(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E09B8u) [[unlikely]] return; }
L_001E09B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E09C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 323u, depth + 1u); else { c.pc = 0x003AE768u; return; } if (c.pc != 0x001E09C0u) [[unlikely]] return; }
L_001E09C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E09C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 103u, depth + 1u); else { c.pc = 0x003B24D0u; return; } if (c.pc != 0x001E09C8u) [[unlikely]] return; }
L_001E09C8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E09DCu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E09DCu) [[unlikely]] return; }
L_001E09DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E0A88; } }
L_001E09E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E09ECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E09ECu) [[unlikely]] return; }
L_001E09EC:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0A00u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E0A00u) [[unlikely]] return; }
L_001E0A00:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.r[1].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] - c.r[18].w[0]);  goto L_001E0A30; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0A2Cu); set32(c.r[6], c.r[6].w[0] - 22121u);  if (depth < kMaxDepth) unit_0037(c, 426u, depth + 1u); else { c.pc = 0x001DEB50u; return; } if (c.pc != 0x001E0A2Cu) [[unlikely]] return; }
L_001E0A2C:
    set32(c.r[2], c.r[17].w[0] - c.r[18].w[0]);
    c.budget -= 1;
L_001E0A30:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0A48u); c.f[12] = fp::mul(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E0A48u) [[unlikely]] return; }
L_001E0A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0A50u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 323u, depth + 1u); else { c.pc = 0x003AE768u; return; } if (c.pc != 0x001E0A50u) [[unlikely]] return; }
L_001E0A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0A58u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 103u, depth + 1u); else { c.pc = 0x003B24D0u; return; } if (c.pc != 0x001E0A58u) [[unlikely]] return; }
L_001E0A58:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0A6Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E0A6Cu) [[unlikely]] return; }
L_001E0A6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E0A88; } }
L_001E0A74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0A80u); set32(c.r[5], c.r[5].w[0] - 22103u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E0A80u) [[unlikely]] return; }
L_001E0A80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001E0A90; } }
L_001E0A88:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001E0A8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001E0A90:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E0AB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0AD0u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x001E0AD0u) [[unlikely]] return; }
L_001E0AD0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0AE0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E0AE0u) [[unlikely]] return; }
L_001E0AE0:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_001E0B08; } }
L_001E0AEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0AF4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E0AF4u) [[unlikely]] return; }
L_001E0AF4:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001E0B08; }
    c.f[20] = c.f[0];
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_001E0B08:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0AECu | kUnwind; return; } goto L_001E0AEC; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0B20u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E0B20u) [[unlikely]] return; }
L_001E0B20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E0B40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0B60u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x001E0B60u) [[unlikely]] return; }
L_001E0B60:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0B70u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E0B70u) [[unlikely]] return; }
L_001E0B70:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_001E0B98; } }
L_001E0B7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0B84u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E0B84u) [[unlikely]] return; }
L_001E0B84:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001E0B98; }
    c.f[20] = c.f[0];
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_001E0B98:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0B7Cu | kUnwind; return; } goto L_001E0B7C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0BB0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E0BB0u) [[unlikely]] return; }
L_001E0BB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E0BD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0BECu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E0BECu) [[unlikely]] return; }
L_001E0BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0BF4u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E0BF4u) [[unlikely]] return; }
L_001E0BF4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0C04u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E0C04u) [[unlikely]] return; }
L_001E0C04:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0C14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 340u, depth + 1u); else { c.pc = 0x003AEA90u; return; } if (c.pc != 0x001E0C14u) [[unlikely]] return; }
L_001E0C14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0C1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001E0C1Cu) [[unlikely]] return; }
L_001E0C1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0C28u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E0C28u) [[unlikely]] return; }
L_001E0C28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E0C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0C58u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E0C58u) [[unlikely]] return; }
L_001E0C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0C60u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E0C60u) [[unlikely]] return; }
L_001E0C60:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0C6Cu); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_00AB(c, 336u, depth + 1u); else { c.pc = 0x003AE940u; return; } if (c.pc != 0x001E0C6Cu) [[unlikely]] return; }
L_001E0C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0C74u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001E0C74u) [[unlikely]] return; }
L_001E0C74:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0C80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E0C80u) [[unlikely]] return; }
L_001E0C80:
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0C90u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E0C90u) [[unlikely]] return; }
L_001E0C90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 2u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E0CB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0CC8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E0CC8u) [[unlikely]] return; }
L_001E0CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0CD0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E0CD0u) [[unlikely]] return; }
L_001E0CD0:
    c.r[4].d[0] = ld64((c.r[28].w[0] - 32704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0CDCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001E0CDCu) [[unlikely]] return; }
L_001E0CDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0CE4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001E0CE4u) [[unlikely]] return; }
L_001E0CE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0CF0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E0CF0u) [[unlikely]] return; }
L_001E0CF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E0D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0D28u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E0D28u) [[unlikely]] return; }
L_001E0D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0D30u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E0D30u) [[unlikely]] return; }
L_001E0D30:
    c.r[5].d[0] = ld64((c.r[28].w[0] - 32704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0D3Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001E0D3Cu) [[unlikely]] return; }
L_001E0D3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0D44u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001E0D44u) [[unlikely]] return; }
L_001E0D44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0D50u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E0D50u) [[unlikely]] return; }
L_001E0D50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E0D70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0D88u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E0D88u) [[unlikely]] return; }
L_001E0D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0D90u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E0D90u) [[unlikely]] return; }
L_001E0D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0D98u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 422u, depth + 1u); else { c.pc = 0x003AF680u; return; } if (c.pc != 0x001E0D98u) [[unlikely]] return; }
L_001E0D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0DA0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001E0DA0u) [[unlikely]] return; }
L_001E0DA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0DACu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E0DACu) [[unlikely]] return; }
L_001E0DAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E0DC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0DD8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E0DD8u) [[unlikely]] return; }
L_001E0DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0DE0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E0DE0u) [[unlikely]] return; }
L_001E0DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0DE8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 425u, depth + 1u); else { c.pc = 0x003AF6C8u; return; } if (c.pc != 0x001E0DE8u) [[unlikely]] return; }
L_001E0DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0DF0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001E0DF0u) [[unlikely]] return; }
L_001E0DF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0DFCu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E0DFCu) [[unlikely]] return; }
L_001E0DFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E0E10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0E28u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E0E28u) [[unlikely]] return; }
L_001E0E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0E30u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E0E30u) [[unlikely]] return; }
L_001E0E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0E38u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 424u, depth + 1u); else { c.pc = 0x003AF6B0u; return; } if (c.pc != 0x001E0E38u) [[unlikely]] return; }
L_001E0E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0E40u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001E0E40u) [[unlikely]] return; }
L_001E0E40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0E4Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E0E4Cu) [[unlikely]] return; }
L_001E0E4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E0E60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0E7Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E0E7Cu) [[unlikely]] return; }
L_001E0E7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0E84u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E0E84u) [[unlikely]] return; }
L_001E0E84:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0E94u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E0E94u) [[unlikely]] return; }
L_001E0E94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0E9Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E0E9Cu) [[unlikely]] return; }
L_001E0E9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0EA8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 426u, depth + 1u); else { c.pc = 0x003AF6E0u; return; } if (c.pc != 0x001E0EA8u) [[unlikely]] return; }
L_001E0EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0EB0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001E0EB0u) [[unlikely]] return; }
L_001E0EB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0EBCu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E0EBCu) [[unlikely]] return; }
L_001E0EBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E0EE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0EF8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E0EF8u) [[unlikely]] return; }
L_001E0EF8:
    c.f[12] = fp::sqrt(c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0F14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E0F14u) [[unlikely]] return; }
L_001E0F14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E0F30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0F4Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E0F4Cu) [[unlikely]] return; }
L_001E0F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0F54u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E0F54u) [[unlikely]] return; }
L_001E0F54:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0F64u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E0F64u) [[unlikely]] return; }
L_001E0F64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0F6Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E0F6Cu) [[unlikely]] return; }
L_001E0F6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0F78u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 423u, depth + 1u); else { c.pc = 0x003AF698u; return; } if (c.pc != 0x001E0F78u) [[unlikely]] return; }
L_001E0F78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0F80u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001E0F80u) [[unlikely]] return; }
L_001E0F80:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0F8Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E0F8Cu) [[unlikely]] return; }
L_001E0F8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E0FB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0FC8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E0FC8u) [[unlikely]] return; }
L_001E0FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0FD0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E0FD0u) [[unlikely]] return; }
L_001E0FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0FD8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 323u, depth + 1u); else { c.pc = 0x003AE768u; return; } if (c.pc != 0x001E0FD8u) [[unlikely]] return; }
L_001E0FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0FE0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001E0FE0u) [[unlikely]] return; }
L_001E0FE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0FECu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E0FECu) [[unlikely]] return; }
L_001E0FEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E1000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1018u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E1018u) [[unlikely]] return; }
L_001E1018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1020u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E1020u) [[unlikely]] return; }
L_001E1020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1028u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 295u, depth + 1u); else { c.pc = 0x003AE448u; return; } if (c.pc != 0x001E1028u) [[unlikely]] return; }
L_001E1028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1030u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001E1030u) [[unlikely]] return; }
L_001E1030:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E103Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E103Cu) [[unlikely]] return; }
L_001E103C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001E1040:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E1050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E106Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E106Cu) [[unlikely]] return; }
L_001E106C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1074u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E1074u) [[unlikely]] return; }
L_001E1074:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1084u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E1084u) [[unlikely]] return; }
    goto L_001E1084;
L_001E1080:
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_001E1084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E108Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E108Cu) [[unlikely]] return; }
L_001E108C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1098u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 421u, depth + 1u); else { c.pc = 0x003AF668u; return; } if (c.pc != 0x001E1098u) [[unlikely]] return; }
L_001E1098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E10A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001E10A0u) [[unlikely]] return; }
L_001E10A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E10ACu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E10ACu) [[unlikely]] return; }
L_001E10AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E10C0:
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 1;
    c.pc = 0x001E10C4u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_001E10D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E10E8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E10E8u) [[unlikely]] return; }
L_001E10E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E10F0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E10F0u) [[unlikely]] return; }
L_001E10F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E10F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 247u, depth + 1u); else { c.pc = 0x003AE068u; return; } if (c.pc != 0x001E10F8u) [[unlikely]] return; }
L_001E10F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1100u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001E1100u) [[unlikely]] return; }
L_001E1100:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E110Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E110Cu) [[unlikely]] return; }
L_001E110C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E1120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1138u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E1138u) [[unlikely]] return; }
L_001E1138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1140u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E1140u) [[unlikely]] return; }
L_001E1140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1148u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 419u, depth + 1u); else { c.pc = 0x003AF638u; return; } if (c.pc != 0x001E1148u) [[unlikely]] return; }
L_001E1148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1150u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001E1150u) [[unlikely]] return; }
L_001E1150:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E115Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E115Cu) [[unlikely]] return; }
L_001E115C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E1170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1188u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E1188u) [[unlikely]] return; }
L_001E1188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1190u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E1190u) [[unlikely]] return; }
L_001E1190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1198u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 420u, depth + 1u); else { c.pc = 0x003AF650u; return; } if (c.pc != 0x001E1198u) [[unlikely]] return; }
L_001E1198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E11A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001E11A0u) [[unlikely]] return; }
L_001E11A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E11ACu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E11ACu) [[unlikely]] return; }
L_001E11AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E11C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E11D8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E11D8u) [[unlikely]] return; }
L_001E11D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E11E0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E11E0u) [[unlikely]] return; }
L_001E11E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E11E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 366u, depth + 1u); else { c.pc = 0x003AED80u; return; } if (c.pc != 0x001E11E8u) [[unlikely]] return; }
L_001E11E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E11F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001E11F0u) [[unlikely]] return; }
L_001E11F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E11FCu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E11FCu) [[unlikely]] return; }
L_001E11FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001E1200:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E1210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1228u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E1228u) [[unlikely]] return; }
L_001E1228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1230u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E1230u) [[unlikely]] return; }
L_001E1230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1238u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 310u, depth + 1u); else { c.pc = 0x003AE640u; return; } if (c.pc != 0x001E1238u) [[unlikely]] return; }
L_001E1238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1240u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001E1240u) [[unlikely]] return; }
L_001E1240:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E124Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E124Cu) [[unlikely]] return; }
L_001E124C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E1260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1278u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E1278u) [[unlikely]] return; }
L_001E1278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1280u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E1280u) [[unlikely]] return; }
L_001E1280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1288u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 355u, depth + 1u); else { c.pc = 0x003AECA0u; return; } if (c.pc != 0x001E1288u) [[unlikely]] return; }
L_001E1288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1290u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001E1290u) [[unlikely]] return; }
L_001E1290:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E129Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E129Cu) [[unlikely]] return; }
L_001E129C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E12B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E12C8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E12C8u) [[unlikely]] return; }
L_001E12C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E12D0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E12D0u) [[unlikely]] return; }
L_001E12D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E12D8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x001E12D8u) [[unlikely]] return; }
L_001E12D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E12E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x001E12E0u) [[unlikely]] return; }
L_001E12E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E12ECu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E12ECu) [[unlikely]] return; }
L_001E12EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E1300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 21890u);
    set32(c.r[6], c.r[6].w[0] - 22064u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1320u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0037(c, 307u, depth + 1u); else { c.pc = 0x001DDEC0u; return; } if (c.pc != 0x001E1320u) [[unlikely]] return; }
L_001E1320:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E1330:
    set32(c.r[29], c.r[29].w[0] - 1696u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 1692u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1360u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 380u, depth + 1u); else { c.pc = 0x001DE600u; return; } if (c.pc != 0x001E1360u) [[unlikely]] return; }
L_001E1360:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 1692u)));
    set32(c.r[5], c.r[29].w[0] + 640u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1378u); set32(c.r[16], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0037(c, 226u, depth + 1u); else { c.pc = 0x001DD640u; return; } if (c.pc != 0x001E1378u) [[unlikely]] return; }
L_001E1378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;  if (t) { goto L_001E17E8; } }
L_001E1380:
    set32(c.r[3], 0u + 37u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001E13C8; }
    set32(c.r[3], ld32((c.r[29].w[0] + 640u)));
    set32(c.r[2], c.r[29].w[0] + 1676u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));  goto L_001E13AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E13A8u); set32(c.r[4], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_0037(c, 248u, depth + 1u); else { c.pc = 0x001DD9B0u; return; } if (c.pc != 0x001E13A8u) [[unlikely]] return; }
L_001E13A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 1;
L_001E13AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 640u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 640u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 640u), c.r[2].w[0]);  if (t) { goto L_001E17E4; } }
L_001E13C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 1688u), 0u);  goto L_001E1410; }
    set32(c.r[3], ld32((c.r[29].w[0] + 640u)));
    set32(c.r[2], c.r[29].w[0] + 1676u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));  goto L_001E13F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E13F0u); set32(c.r[4], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_0037(c, 248u, depth + 1u); else { c.pc = 0x001DD9B0u; return; } if (c.pc != 0x001E13F0u) [[unlikely]] return; }
L_001E13F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 1;
L_001E13F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 640u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 640u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 640u), c.r[2].w[0]);  if (t) { goto L_001E17E4; } }
L_001E1410:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[2], c.r[2].w[0] - 31769u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_001E145C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[2], 0u + 36u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E1458; } }
    goto L_001E1440;
L_001E143C:
    c.budget -= 1;
L_001E1440:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1450u); set32(c.r[5], c.r[5].w[0] - 21883u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E1450u) [[unlikely]] return; }
L_001E1450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001E1800; } }
L_001E1458:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001E145C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 608u);
    set32(c.r[7], c.r[29].w[0] + 1688u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1470u); set32(c.r[19], c.r[19].w[0] + 1u);  if (depth < kMaxDepth) unit_0038(c, 299u, depth + 1u); else { c.pc = 0x001E1820u; return; } if (c.pc != 0x001E1470u) [[unlikely]] return; }
L_001E1470:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], 0u + 115u);
    set32(c.r[18], c.r[3].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 7;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001E1758; }
    set32(c.r[2], 0u + 113u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001E15E0; }
    set32(c.r[2], 0u + 71u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001E15B8; }
    set32(c.r[2], 0u + 103u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E15B4; } }
    set32(c.r[2], 0u + 102u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E15B4; } }
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E15B4; } }
    set32(c.r[2], 0u + 101u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E15B4; } }
    set32(c.r[2], 0u + 88u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001E155C; }
    set32(c.r[2], 0u + 120u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E1558; } }
    set32(c.r[2], 0u + 117u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E1558; } }
    set32(c.r[2], 0u + 111u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E1558; } }
    set32(c.r[2], 0u + 105u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001E1534; }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E1530; } }
    set32(c.r[2], 0u + 99u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E1530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_001E17B4; } }
L_001E1530:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001E1534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E153Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E153Cu) [[unlikely]] return; }
L_001E153C:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[6], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1550u); set32(c.r[5], c.r[29].w[0] + 608u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x001E1550u) [[unlikely]] return; }
L_001E1550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_001E17CC; } }
L_001E1558:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001E155C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1564u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E1564u) [[unlikely]] return; }
L_001E1564:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[0], c.f[1]);  goto L_001E158C; }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_001E15A4; } }
L_001E158C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 6;
L_001E15A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E15ACu); set32(c.r[5], c.r[29].w[0] + 608u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x001E15ACu) [[unlikely]] return; }
L_001E15AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E17C8; } }
L_001E15B4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001E15B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E15C0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E15C0u) [[unlikely]] return; }
L_001E15C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E15C8u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E15C8u) [[unlikely]] return; }
L_001E15C8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E15D8u); set32(c.r[5], c.r[29].w[0] + 608u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x001E15D8u) [[unlikely]] return; }
L_001E15D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E17C8; } }
L_001E15E0:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E15ECu); set32(c.r[6], c.r[29].w[0] + 1680u);  if (depth < kMaxDepth) unit_0037(c, 380u, depth + 1u); else { c.pc = 0x001DE600u; return; } if (c.pc != 0x001E15ECu) [[unlikely]] return; }
L_001E15EC:
    set32(c.r[3], ld32((c.r[29].w[0] + 640u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 1676u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 640u)));  goto L_001E1610; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E160Cu); set32(c.r[4], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_0037(c, 248u, depth + 1u); else { c.pc = 0x001DD9B0u; return; } if (c.pc != 0x001E160Cu) [[unlikely]] return; }
L_001E160C:
    set32(c.r[2], ld32((c.r[29].w[0] + 640u)));
    c.budget -= 1;
L_001E1610:
    set32(c.r[3], 0u + 34u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 640u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 640u), c.r[2].w[0]);  if (t) { goto L_001E1710; } }
L_001E1628:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E16C4; }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 640u)));  goto L_001E1664; }
    set32(c.r[2], 0u + 92u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E1660; } }
    set32(c.r[2], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E1660; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 640u)));  if (t) { goto L_001E16DC; } }
L_001E1660:
    set32(c.r[3], ld32((c.r[29].w[0] + 640u)));
    c.budget -= 1;
L_001E1664:
    set32(c.r[2], c.r[29].w[0] + 1676u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 640u)));  goto L_001E1680; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E167Cu); set32(c.r[4], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_0037(c, 248u, depth + 1u); else { c.pc = 0x001DD9B0u; return; } if (c.pc != 0x001E167Cu) [[unlikely]] return; }
L_001E167C:
    set32(c.r[3], ld32((c.r[29].w[0] + 640u)));
    c.budget -= 1;
L_001E1680:
    set32(c.r[4], 0u + 92u);
    set32(c.r[2], c.r[29].w[0] + 1676u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 640u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 640u), c.r[3].w[0]);  if (t) { goto L_001E16A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E16A8u); set32(c.r[4], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_0037(c, 248u, depth + 1u); else { c.pc = 0x001DD9B0u; return; } if (c.pc != 0x001E16A8u) [[unlikely]] return; }
L_001E16A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 640u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 640u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 640u), c.r[2].w[0]);  if (t) { goto L_001E170C; } }
L_001E16C4:
    set32(c.r[4], c.r[29].w[0] + 640u);
    set32(c.r[5], c.r[5].w[0] - 21850u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E16D4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0037(c, 241u, depth + 1u); else { c.pc = 0x001DD850u; return; } if (c.pc != 0x001E16D4u) [[unlikely]] return; }
L_001E16D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_001E1710; } }
L_001E16DC:
    set32(c.r[2], c.r[29].w[0] + 1676u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));  goto L_001E16F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E16F4u); set32(c.r[4], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_0037(c, 248u, depth + 1u); else { c.pc = 0x001DD9B0u; return; } if (c.pc != 0x001E16F4u) [[unlikely]] return; }
L_001E16F4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 1;
L_001E16F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 640u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 640u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 640u), c.r[2].w[0]);
    c.budget -= 5;
L_001E170C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001E1710:
    set32(c.r[3], ld32((c.r[29].w[0] + 1680u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 1680u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1628u | kUnwind; return; } goto L_001E1628; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 640u)));
    set32(c.r[2], c.r[29].w[0] + 1676u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 640u)));  goto L_001E1740; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E173Cu); set32(c.r[4], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_0037(c, 248u, depth + 1u); else { c.pc = 0x001DD9B0u; return; } if (c.pc != 0x001E173Cu) [[unlikely]] return; }
L_001E173C:
    set32(c.r[2], ld32((c.r[29].w[0] + 640u)));
    c.budget -= 1;
L_001E1740:
    set32(c.r[3], 0u + 34u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 640u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 640u), c.r[2].w[0]);  if (t) { goto L_001E17E4; } }
L_001E1758:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1764u); set32(c.r[6], c.r[29].w[0] + 1684u);  if (depth < kMaxDepth) unit_0037(c, 380u, depth + 1u); else { c.pc = 0x001DE600u; return; } if (c.pc != 0x001E1764u) [[unlikely]] return; }
L_001E1764:
    set32(c.r[3], ld32((c.r[29].w[0] + 1688u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = c.r[2].d[0] + 0ull;  goto L_001E17A0; }
    set32(c.r[3], ld32((c.r[29].w[0] + 1684u)));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(100ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E179C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E178Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001E178Cu) [[unlikely]] return; }
L_001E178C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1794u); set32(c.r[4], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_0037(c, 227u, depth + 1u); else { c.pc = 0x001DD660u; return; } if (c.pc != 0x001E1794u) [[unlikely]] return; }
L_001E1794:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E17E4; } }
L_001E179C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E17A0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E17ACu); set32(c.r[5], c.r[29].w[0] + 608u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x001E17ACu) [[unlikely]] return; }
L_001E17AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E17C8; } }
L_001E17B4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E17C0u); set32(c.r[5], c.r[5].w[0] - 21845u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E17C0u) [[unlikely]] return; }
L_001E17C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E17FC; } }
L_001E17C8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_001E17CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E17D4u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001E17D4u) [[unlikely]] return; }
L_001E17D4:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 640u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E17E4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0037(c, 241u, depth + 1u); else { c.pc = 0x001DD850u; return; } if (c.pc != 0x001E17E4u) [[unlikely]] return; }
L_001E17E4:
    c.r[2].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001E17E8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1380u | kUnwind; return; } goto L_001E1380; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E17F8u); set32(c.r[4], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_0037(c, 238u, depth + 1u); else { c.pc = 0x001DD7E0u; return; } if (c.pc != 0x001E17F8u) [[unlikely]] return; }
L_001E17F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001E17FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001E1800:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1696u);  c.pc = t; return; }
L_001E1820:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
L_001E183C:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001E1858; } }
L_001E1854:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001E1858:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1868u); set32(c.r[4], c.r[4].w[0] - 21818u);  if (depth < kMaxDepth) unit_00AE(c, 149u, depth + 1u); else { c.pc = 0x003B9A38u; return; } if (c.pc != 0x001E1868u) [[unlikely]] return; }
L_001E1868:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1854u | kUnwind; return; } goto L_001E1854; } }
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 31768u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_001E1880:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0]));  goto L_001E1898; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 2;
L_001E1898:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 31768u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));  goto L_001E18BC; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 2;
L_001E18BC:
    set32(c.r[2], 0u + 46u);
    c.budget -= 1;
L_001E18C0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].d[0] = ld8((c.r[17].w[0]));  goto L_001E1920; }
    set32(c.r[2], 0u + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 31768u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0]));  goto L_001E18FC; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 2;
L_001E18FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 31768u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E191C; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001E191C:
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 1;
L_001E1920:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 31768u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[17].w[0] - c.r[19].w[0]);  goto L_001E1950; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 1;
L_001E1940:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E194Cu); set32(c.r[5], c.r[5].w[0] - 21812u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E194Cu) [[unlikely]] return; }
L_001E194C:
    set32(c.r[16], c.r[17].w[0] - c.r[19].w[0]);
    c.budget -= 1;
L_001E1950:
    set32(c.r[2], c.r[16].w[0] + 2u);
    c.r[1].d[0] = c.r[2].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], 0u + 37u);  goto L_001E1974; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1970u); set32(c.r[5], c.r[5].w[0] - 21767u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E1970u) [[unlikely]] return; }
L_001E1970:
    set32(c.r[2], 0u + 37u);
    c.budget -= 1;
L_001E1974:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[16].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1988u); set32(c.r[4], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x001E1988u) [[unlikely]] return; }
L_001E1988:
    set32(c.r[3], c.r[16].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001E19C0:
    set32(c.r[29], c.r[29].w[0] - 1712u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 1708u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E19F4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 380u, depth + 1u); else { c.pc = 0x001DE600u; return; } if (c.pc != 0x001E19F4u) [[unlikely]] return; }
L_001E19F4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1A08u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0037(c, 380u, depth + 1u); else { c.pc = 0x001DE600u; return; } if (c.pc != 0x001E1A08u) [[unlikely]] return; }
L_001E1A08:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 1708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001E1A28; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E1A40; } }
L_001E1A28:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::add(c.f[12], c.f[12]);
    c.budget -= 6;
L_001E1A40:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1A4Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0037(c, 341u, depth + 1u); else { c.pc = 0x001DE1A0u; return; } if (c.pc != 0x001E1A4Cu) [[unlikely]] return; }
L_001E1A4C:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[2], 0u + 94u);
    set32(c.r[22], c.f[0]);
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_001E1A6C; }
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_001E1A6C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1A78u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x001E1A78u) [[unlikely]] return; }
L_001E1A78:
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E1AB0; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1A90u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0031(c, 57u, depth + 1u); else { c.pc = 0x001C56F0u; return; } if (c.pc != 0x001E1A90u) [[unlikely]] return; }
L_001E1A90:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_001E1AC8; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1AA4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0031(c, 62u, depth + 1u); else { c.pc = 0x001C5A00u; return; } if (c.pc != 0x001E1AA4u) [[unlikely]] return; }
L_001E1AA4:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001E1AC4; } }
L_001E1AB0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1AC4u); set32(c.r[6], c.r[6].w[0] - 21741u);  if (depth < kMaxDepth) unit_0037(c, 426u, depth + 1u); else { c.pc = 0x001DEB50u; return; } if (c.pc != 0x001E1AC4u) [[unlikely]] return; }
L_001E1AC4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_001E1AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1AD0u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0037(c, 226u, depth + 1u); else { c.pc = 0x001DD640u; return; } if (c.pc != 0x001E1AD0u) [[unlikely]] return; }
L_001E1AD0:
    set32(c.r[2], ld32((c.r[29].w[0] + 1708u)));
    st32((c.r[29].w[0] + 1176u), c.r[21].w[0]);
    st32((c.r[29].w[0] + 1168u), c.r[20].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1172u), c.r[2].w[0]);  if (t) { goto L_001E1B88; } }
L_001E1AE8:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1AF8u); st32((c.r[29].w[0] + 1180u), 0u);  if (depth < kMaxDepth) unit_0038(c, 396u, depth + 1u); else { c.pc = 0x001E2530u; return; } if (c.pc != 0x001E1AF8u) [[unlikely]] return; }
L_001E1AF8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001E1B1C; } }
    set32(c.r[4], c.r[29].w[0] + 1168u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1B1Cu); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0038(c, 325u, depth + 1u); else { c.pc = 0x001E1BF0u; return; } if (c.pc != 0x001E1B1Cu) [[unlikely]] return; }
L_001E1B1C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 1172u)));  goto L_001E1B3C; }
    c.r[1].d[0] = c.r[20].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E1B38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E1B80; } }
L_001E1B38:
    set32(c.r[2], ld32((c.r[29].w[0] + 1172u)));
    c.budget -= 1;
L_001E1B3C:
    c.r[1].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 1172u)));  goto L_001E1B98; }
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[2], c.r[29].w[0] + 1164u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));  goto L_001E1B68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1B64u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0037(c, 248u, depth + 1u); else { c.pc = 0x001DD9B0u; return; } if (c.pc != 0x001E1B64u) [[unlikely]] return; }
L_001E1B64:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 1;
L_001E1B68:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 6;
L_001E1B80:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001E1B94; } }
L_001E1B88:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 1168u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1AE8u | kUnwind; return; } goto L_001E1AE8; }
L_001E1B94:
    set32(c.r[2], ld32((c.r[29].w[0] + 1172u)));
    c.budget -= 1;
L_001E1B98:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1BA8u); set32(c.r[6], c.r[2].w[0] - c.r[20].w[0]);  if (depth < kMaxDepth) unit_0037(c, 241u, depth + 1u); else { c.pc = 0x001DD850u; return; } if (c.pc != 0x001E1BA8u) [[unlikely]] return; }
L_001E1BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1BB0u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0037(c, 238u, depth + 1u); else { c.pc = 0x001DD7E0u; return; } if (c.pc != 0x001E1BB0u) [[unlikely]] return; }
L_001E1BB0:
    c.f[0] = c.r[18].w[0];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1BC0u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E1BC0u) [[unlikely]] return; }
L_001E1BC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    set32(c.r[2], 0u + 2u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1712u);  c.pc = t; return; }
L_001E1BF0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[5], 0u + 3u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[4].w[0] + 8u)));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1C34u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 57u, depth + 1u); else { c.pc = 0x001C56F0u; return; } if (c.pc != 0x001E1C34u) [[unlikely]] return; }
L_001E1C34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001E1DD8; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1C48u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x001E1C48u) [[unlikely]] return; }
L_001E1C48:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1C58u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0031(c, 44u, depth + 1u); else { c.pc = 0x001C4EF0u; return; } if (c.pc != 0x001E1C58u) [[unlikely]] return; }
L_001E1C58:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001E1DC4; } }
L_001E1C64:
    set32(c.r[3], 0u + 37u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_001E1CA8; }
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[20].w[0] + 1036u);
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0])));  goto L_001E1C94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1C90u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 248u, depth + 1u); else { c.pc = 0x001DD9B0u; return; } if (c.pc != 0x001E1C90u) [[unlikely]] return; }
L_001E1C90:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_001E1C94:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001E1DC0; } }
L_001E1CA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[16], c.r[17].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] - 31769u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 10;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[5].d[0] << 56;  goto L_001E1D04; }
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[20].w[0] + 1036u);
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0])));  goto L_001E1CF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1CECu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 248u, depth + 1u); else { c.pc = 0x001DD9B0u; return; } if (c.pc != 0x001E1CECu) [[unlikely]] return; }
L_001E1CEC:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_001E1CF0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001E1DC0; } }
L_001E1D04:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], c.r[4].w[0] - 49u);
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[4], ld32((c.r[21].w[0] + 8u)));  goto L_001E1D40; }
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E1D3C; } }
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[21].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld64((c.r[4].w[0] - 760u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E1D4C; } }
L_001E1D3C:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_001E1D40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1D4Cu); set32(c.r[5], c.r[5].w[0] - 21713u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E1D4Cu) [[unlikely]] return; }
L_001E1D4C:
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[16], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    set32(c.r[18], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 6;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 2u);  goto L_001E1D78; }
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1D74u); set32(c.r[5], c.r[5].w[0] - 21691u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E1D74u) [[unlikely]] return; }
L_001E1D74:
    set32(c.r[2], 0u - 2u);
    c.budget -= 1;
L_001E1D78:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 16u)));  goto L_001E1DA8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1DA0u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E1DA0u) [[unlikely]] return; }
L_001E1DA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001E1DB8; } }
L_001E1DA8:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1DB4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001E1DB4u) [[unlikely]] return; }
L_001E1DB4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001E1DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1DC0u);  if (depth < kMaxDepth) unit_0037(c, 227u, depth + 1u); else { c.pc = 0x001DD660u; return; } if (c.pc != 0x001E1DC0u) [[unlikely]] return; }
L_001E1DC0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001E1DC4:
    c.r[3].d[0] = c.r[19].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[16], c.r[17].w[0] + c.r[19].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1C64u | kUnwind; return; } goto L_001E1C64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_001E1EE0; } }
L_001E1DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1DE0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0031(c, 63u, depth + 1u); else { c.pc = 0x001C5AE0u; return; } if (c.pc != 0x001E1DE0u) [[unlikely]] return; }
L_001E1DE0:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1DF4u); set32(c.r[6], c.r[6].w[0] - 21672u);  if (depth < kMaxDepth) unit_0037(c, 410u, depth + 1u); else { c.pc = 0x001DE970u; return; } if (c.pc != 0x001E1DF4u) [[unlikely]] return; }
L_001E1DF4:
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_001E1E94; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001E1E20; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[6], c.r[16].w[0] - c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1E18u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001E1E18u) [[unlikely]] return; }
L_001E1E18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001E1EA4; } }
L_001E1E20:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1E94; } }
L_001E1E2C:
    set32(c.r[2], 0u - 1u);
    set32(c.r[16], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 5;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 2u);  goto L_001E1E54; }
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1E50u); set32(c.r[5], c.r[5].w[0] - 21691u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E1E50u) [[unlikely]] return; }
L_001E1E50:
    set32(c.r[2], 0u - 2u);
    c.budget -= 1;
L_001E1E54:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 16u)));  goto L_001E1E84; }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1E7Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E1E7Cu) [[unlikely]] return; }
L_001E1E7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_001E1E94; } }
L_001E1E84:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1E90u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001E1E90u) [[unlikely]] return; }
L_001E1E90:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001E1E94:
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1E2Cu | kUnwind; return; } goto L_001E1E2C; }
L_001E1EA4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1EB0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 382u, depth + 1u); else { c.pc = 0x001C3D80u; return; } if (c.pc != 0x001E1EB0u) [[unlikely]] return; }
L_001E1EB0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1EBCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 57u, depth + 1u); else { c.pc = 0x001C56F0u; return; } if (c.pc != 0x001E1EBCu) [[unlikely]] return; }
L_001E1EBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001E1ED4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1ECCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 227u, depth + 1u); else { c.pc = 0x001DD660u; return; } if (c.pc != 0x001E1ECCu) [[unlikely]] return; }
L_001E1ECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1EDC; } }
L_001E1ED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1EDCu); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001E1EDCu) [[unlikely]] return; }
L_001E1EDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_001E1EE0:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001E1F10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1F2Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 380u, depth + 1u); else { c.pc = 0x001DE600u; return; } if (c.pc != 0x001E1F2Cu) [[unlikely]] return; }
L_001E1F2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1F3Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0037(c, 380u, depth + 1u); else { c.pc = 0x001DE600u; return; } if (c.pc != 0x001E1F3Cu) [[unlikely]] return; }
L_001E1F3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1F48u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0031(c, 69u, depth + 1u); else { c.pc = 0x001C5DD0u; return; } if (c.pc != 0x001E1F48u) [[unlikely]] return; }
L_001E1F48:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1F54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E1F54u) [[unlikely]] return; }
L_001E1F54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 8064u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1F68u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0031(c, 22u, depth + 1u); else { c.pc = 0x001C4760u; return; } if (c.pc != 0x001E1F68u) [[unlikely]] return; }
L_001E1F68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E1F80:
    set32(c.r[29], c.r[29].w[0] - 624u);
    set32(c.r[5], 0u - 10002u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1FA8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x001E1FA8u) [[unlikely]] return; }
L_001E1FA8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1FB8u); set32(c.r[5], 0u - 10002u);  if (depth < kMaxDepth) unit_0031(c, 44u, depth + 1u); else { c.pc = 0x001C4EF0u; return; } if (c.pc != 0x001E1FB8u) [[unlikely]] return; }
L_001E1FB8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1FC8u); set32(c.r[5], 0u - 10003u);  if (depth < kMaxDepth) unit_0031(c, 46u, depth + 1u); else { c.pc = 0x001C5010u; return; } if (c.pc != 0x001E1FC8u) [[unlikely]] return; }
L_001E1FC8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[5], 0u - 10004u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[19].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1FE8u); st32((c.r[29].w[0] + 96u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0031(c, 50u, depth + 1u); else { c.pc = 0x001C5280u; return; } if (c.pc != 0x001E1FE8u) [[unlikely]] return; }
L_001E1FE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[0], c.f[1]);  goto L_001E2010; }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_001E2028; } }
L_001E2010:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[17], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_001E2028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 100u)));  if (t) { goto L_001E2148; } }
L_001E2030:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2040u); st32((c.r[29].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0038(c, 396u, depth + 1u); else { c.pc = 0x001E2530u; return; } if (c.pc != 0x001E2040u) [[unlikely]] return; }
    goto L_001E2040;
L_001E203C:
    st32((c.r[29].w[0] + 108u), 0u);
    c.budget -= 1;
L_001E2040:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001E2144; }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[17].d[0]; set32(c.r[2], c.r[20].w[0] - c.r[16].w[0]);  if (t) { goto L_001E2058; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_001E2058:
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2068u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E2068u) [[unlikely]] return; }
L_001E2068:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2074u); set32(c.r[5], 0u - 10004u);  if (depth < kMaxDepth) unit_0031(c, 64u, depth + 1u); else { c.pc = 0x001C5B90u; return; } if (c.pc != 0x001E2074u) [[unlikely]] return; }
L_001E2074:
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
L_001E2080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2088u); set32(c.r[6], c.r[6].w[0] - 21672u);  if (depth < kMaxDepth) unit_0037(c, 410u, depth + 1u); else { c.pc = 0x001DE970u; return; } if (c.pc != 0x001E2088u) [[unlikely]] return; }
L_001E2088:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_001E212C; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001E20B4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[6], c.r[20].w[0] - c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E20ACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001E20ACu) [[unlikely]] return; }
L_001E20AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E213C; } }
L_001E20B4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E212C; } }
L_001E20C0:
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[3].w[0] + 96u);
    set32(c.r[18], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 6;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 2u);  goto L_001E20EC; }
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E20E8u); set32(c.r[5], c.r[5].w[0] - 21691u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E20E8u) [[unlikely]] return; }
L_001E20E8:
    set32(c.r[2], 0u - 2u);
    c.budget -= 1;
L_001E20EC:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 16u)));  goto L_001E211C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2114u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E2114u) [[unlikely]] return; }
L_001E2114:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_001E212C; } }
L_001E211C:
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2128u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001E2128u) [[unlikely]] return; }
L_001E2128:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001E212C:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E20C0u | kUnwind; return; } goto L_001E20C0; }
L_001E213C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001E215C; } }
    goto L_001E2144;
L_001E2140:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001E2144:
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 1;
L_001E2148:
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2030u | kUnwind; return; } goto L_001E2030; }
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 2;
L_001E215C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 624u);  c.pc = t; return; }
L_001E2180:
    set32(c.r[29], c.r[29].w[0] - 656u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 652u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E21B0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 380u, depth + 1u); else { c.pc = 0x001DE600u; return; } if (c.pc != 0x001E21B0u) [[unlikely]] return; }
L_001E21B0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E21C4u); set32(c.r[6], c.r[29].w[0] + 648u);  if (depth < kMaxDepth) unit_0037(c, 380u, depth + 1u); else { c.pc = 0x001DE600u; return; } if (c.pc != 0x001E21C4u) [[unlikely]] return; }
L_001E21C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[29].w[0] + 652u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E21E0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0037(c, 341u, depth + 1u); else { c.pc = 0x001DE1A0u; return; } if (c.pc != 0x001E21E0u) [[unlikely]] return; }
L_001E21E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E21E8u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 484u, depth + 1u); else { c.pc = 0x003AFBE0u; return; } if (c.pc != 0x001E21E8u) [[unlikely]] return; }
L_001E21E8:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[3].d[0] = c.r[18].d[0] << 32;  goto L_001E21F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);  if (t) { goto L_001E2208; } }
L_001E21F8:
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[18].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    c.budget -= 4;
L_001E2208:
    c.budget -= 2;
    if (c.r[18].sd[0] >= 0) { set32(c.r[3], ld32((c.r[29].w[0] + 652u)));  goto L_001E2218; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001E2234; } }
L_001E2218:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001E2238; }
    c.r[18].d[0] = c.r[3].d[0] << 32;
    c.r[18].d[0] = c.r[18].d[0] >> 32;
    c.budget -= 2;
L_001E2234:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E2238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2240u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0031(c, 49u, depth + 1u); else { c.pc = 0x001C5160u; return; } if (c.pc != 0x001E2240u) [[unlikely]] return; }
L_001E2240:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_001E2264; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2258u); set32(c.r[5], c.r[5].w[0] - 21654u);  if (depth < kMaxDepth) unit_00AE(c, 279u, depth + 1u); else { c.pc = 0x003BAA38u; return; } if (c.pc != 0x001E2258u) [[unlikely]] return; }
L_001E2258:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  goto L_001E22EC; }
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_001E2264:
    set32(c.r[7], ld32((c.r[29].w[0] + 648u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld32((c.r[29].w[0] + 652u));
    c.r[2].d[0] = c.r[2].d[0] - c.r[18].d[0];
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2288u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0038(c, 392u, depth + 1u); else { c.pc = 0x001E2460u; return; } if (c.pc != 0x001E2288u) [[unlikely]] return; }
L_001E2288:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001E2428; }
    set32(c.r[16], c.r[2].w[0] - c.r[19].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E22A8u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E22A8u) [[unlikely]] return; }
L_001E22A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 648u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001E22C4; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E22DC; } }
L_001E22C4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::add(c.f[12], c.f[12]);
    c.budget -= 6;
L_001E22DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E22E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E22E4u) [[unlikely]] return; }
L_001E22E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001E2434; } }
L_001E22EC:
    set32(c.r[2], 0u + 94u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[20].d[0] = 0ull + 0ull;  goto L_001E2300; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[20], 0u + 1u);
    c.budget -= 2;
L_001E2300:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    st32((c.r[29].w[0] + 120u), c.r[17].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 112u), c.r[19].w[0]);
    set32(c.r[21], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 652u)));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 9;
L_001E2324:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2334u); st32((c.r[29].w[0] + 124u), 0u);  if (depth < kMaxDepth) unit_0038(c, 396u, depth + 1u); else { c.pc = 0x001E2530u; return; } if (c.pc != 0x001E2334u) [[unlikely]] return; }
L_001E2334:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 116u)));  goto L_001E240C; }
    set32(c.r[2], c.r[21].w[0] - c.r[19].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2358u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E2358u) [[unlikely]] return; }
L_001E2358:
    set32(c.r[2], c.r[18].w[0] - c.r[19].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E236Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E236Cu) [[unlikely]] return; }
L_001E236C:
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2380u); set32(c.r[6], c.r[6].w[0] - 21672u);  if (depth < kMaxDepth) unit_0037(c, 410u, depth + 1u); else { c.pc = 0x001DE970u; return; } if (c.pc != 0x001E2380u) [[unlikely]] return; }
L_001E2380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001E23F4; } }
L_001E2388:
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[3].w[0] + 112u);
    set32(c.r[18], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 6;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 2u);  goto L_001E23B4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E23B0u); set32(c.r[5], c.r[5].w[0] - 21691u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E23B0u) [[unlikely]] return; }
L_001E23B0:
    set32(c.r[2], 0u - 2u);
    c.budget -= 1;
L_001E23B4:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 16u)));  goto L_001E23E4; }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E23DCu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E23DCu) [[unlikely]] return; }
L_001E23DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_001E23F4; } }
L_001E23E4:
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E23F0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001E23F0u) [[unlikely]] return; }
L_001E23F0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001E23F4:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2388u | kUnwind; return; } goto L_001E2388; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + 2u);  if (t) { goto L_001E2434; } }
L_001E240C:
    c.r[3].d[0] = c.r[21].d[0] + 0ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_001E2424; } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2324u | kUnwind; return; } goto L_001E2324; }
L_001E2424:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E2428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2430u);  if (depth < kMaxDepth) unit_0031(c, 40u, depth + 1u); else { c.pc = 0x001C4A80u; return; } if (c.pc != 0x001E2430u) [[unlikely]] return; }
L_001E2430:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001E2434:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_001E2460:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001E2498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E2504; } }
L_001E2498:
    c.r[1].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] - 1u);  goto L_001E24AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E2504; } }
L_001E24AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] - c.r[2].w[0]);  if (t) { goto L_001E24E0; } }
L_001E24B4:
    set32(c.r[6], c.r[16].w[0] - 1u);
    set32(c.r[4], c.r[20].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E24C4u); set32(c.r[5], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E24C4u) [[unlikely]] return; }
L_001E24C4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[20].w[0] + 1u);  goto L_001E24D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001E2504; } }
L_001E24D4:
    set32(c.r[2], c.r[3].w[0] - c.r[19].w[0]);
    set32(c.r[18], c.r[18].w[0] - c.r[2].w[0]);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
L_001E24E0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E2504; }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E24F8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 368u, depth + 1u); else { c.pc = 0x003B7F20u; return; } if (c.pc != 0x001E24F8u) [[unlikely]] return; }
L_001E24F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E24B4u | kUnwind; return; } goto L_001E24B4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E2504:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001E2530:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
L_001E2558:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 36u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  goto L_001E2970; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001E2E14; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  goto L_001E270C; }
    set32(c.r[3], 0u + 41u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_001E267C; }
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  goto L_001E25A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  if (t) { goto L_001E29A0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 1;
L_001E25A0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[19], ld32((c.r[18].w[0] + 12u)));  goto L_001E2614; }
    set32(c.r[19], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = c.r[19].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 4);  goto L_001E25CC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E25C8u); set32(c.r[5], c.r[5].w[0] - 21672u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E25C8u) [[unlikely]] return; }
L_001E25C8:
    set32(c.r[2], c.r[19].w[0] << 4);
    c.budget -= 1;
L_001E25CC:
    set32(c.r[3], 0u - 2u);
    set32(c.r[7], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[16].w[0] + 2u);
    st32((c.r[7].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[2], c.r[19].w[0] + 1u);
    st64((c.r[7].w[0] + 24u), c.r[3].d[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E25F4u); st32((c.r[18].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 396u, depth + 1u); else { c.pc = 0x001E2530u; return; } if (c.pc != 0x001E25F4u) [[unlikely]] return; }
L_001E25F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E2E14; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2E14; } }
    set32(c.r[19], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_001E2614:
    c.r[2].d[0] = c.r[19].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 4);  goto L_001E2634; }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2630u); set32(c.r[5], c.r[5].w[0] - 21672u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E2630u) [[unlikely]] return; }
L_001E2630:
    set32(c.r[2], c.r[19].w[0] << 4);
    c.budget -= 1;
L_001E2634:
    set32(c.r[3], 0u - 1u);
    set32(c.r[7], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[16].w[0] + 1u);
    st32((c.r[7].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[2], c.r[19].w[0] + 1u);
    st64((c.r[7].w[0] + 24u), c.r[3].d[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E265Cu); st32((c.r[18].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 396u, depth + 1u); else { c.pc = 0x001E2530u; return; } if (c.pc != 0x001E265Cu) [[unlikely]] return; }
L_001E265C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E2E14; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2E14; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_001E267C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_001E26A8; } }
    set32(c.r[4], c.r[2].w[0] << 4);
    c.budget -= 1;
L_001E268C:
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld64((c.r[4].w[0] + 24u));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_001E26A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 4);  if (t) { goto L_001E26C4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_001E26A8:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[4], c.r[2].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E268Cu | kUnwind; return; } goto L_001E268C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E26C0u); set32(c.r[5], c.r[5].w[0] - 21643u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E26C0u) [[unlikely]] return; }
L_001E26C0:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 1;
L_001E26C4:
    set32(c.r[6], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[16], c.r[3].w[0] + 24u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E26F0u); st64((c.r[3].w[0] + 24u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0038(c, 396u, depth + 1u); else { c.pc = 0x001E2530u; return; } if (c.pc != 0x001E26F0u) [[unlikely]] return; }
L_001E26F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E2E14; } }
    set32(c.r[3], 0u - 1u);
    st64((c.r[16].w[0]), c.r[3].d[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2E14; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 1;
L_001E270C:
    set32(c.r[2], 0u + 102u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));  goto L_001E2760; }
    set32(c.r[2], 0u + 98u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001E2730; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E289C; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E2730:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E273Cu); set32(c.r[6], c.r[16].w[0] + 2u);  if (depth < kMaxDepth) unit_0038(c, 437u, depth + 1u); else { c.pc = 0x001E2E40u; return; } if (c.pc != 0x001E273Cu) [[unlikely]] return; }
L_001E273C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2558u | kUnwind; return; } goto L_001E2558; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E2E14; } }
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2558u | kUnwind; return; } goto L_001E2558; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 1;
L_001E2760:
    set32(c.r[2], 0u + 91u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 2u);  goto L_001E2780; }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E277Cu); set32(c.r[5], c.r[5].w[0] - 21619u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E277Cu) [[unlikely]] return; }
L_001E277C:
    set32(c.r[2], c.r[16].w[0] + 2u);
    c.budget -= 1;
L_001E2780:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[19], c.r[2].w[0] + 1u);
    set32(c.r[2], 0u + 91u);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));  goto L_001E27D4; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));  goto L_001E27AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2834; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 1;
L_001E27AC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_001E2834; }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E27C4u); set32(c.r[5], c.r[5].w[0] - 21584u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E27C4u) [[unlikely]] return; }
L_001E27C4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2834; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 1;
L_001E27D4:
    set32(c.r[2], 0u + 94u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));  goto L_001E27E8; }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001E27E4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 1;
L_001E27E8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));  goto L_001E2804; }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2800u); set32(c.r[5], c.r[5].w[0] - 21550u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E2800u) [[unlikely]] return; }
L_001E2800:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 1;
L_001E2804:
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_001E2820; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));  goto L_001E2824; }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001E2820:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 1;
L_001E2824:
    set32(c.r[2], 0u + 93u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E27E4u | kUnwind; return; } goto L_001E27E4; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001E2834:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] - 1u)));  goto L_001E284C; }
    goto L_001E2840;
L_001E283C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] - 1u)));
    c.budget -= 1;
L_001E2840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E284C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] - 1u)));
    c.budget -= 1;
L_001E284C:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    set32(c.r[5], c.r[16].w[0] + 2u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[6], c.r[19].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2864u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0038(c, 440u, depth + 1u); else { c.pc = 0x001E2F00u; return; } if (c.pc != 0x001E2864u) [[unlikely]] return; }
L_001E2864:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E2E14; }
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[5], c.r[16].w[0] + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E287Cu); set32(c.r[6], c.r[19].w[0] - 1u);  if (depth < kMaxDepth) unit_0038(c, 440u, depth + 1u); else { c.pc = 0x001E2F00u; return; } if (c.pc != 0x001E287Cu) [[unlikely]] return; }
L_001E287C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2558u | kUnwind; return; } goto L_001E2558; }
    goto L_001E2884;
L_001E2880:
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001E2884:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2E14; } }
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2558u | kUnwind; return; } goto L_001E2558; } }
L_001E289C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] - 31769u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E299C; } }
    set32(c.r[2], c.r[4].w[0] - 49u);
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  goto L_001E28F4; }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E28F0; } }
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld64((c.r[4].w[0] - 760u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E2900; } }
L_001E28F0:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_001E28F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2900u); set32(c.r[5], c.r[5].w[0] - 21713u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E2900u) [[unlikely]] return; }
L_001E2900:
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_001E2944; }
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2930u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E2930u) [[unlikely]] return; }
L_001E2930:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E2940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + c.r[19].w[0]);  if (t) { goto L_001E2944; } }
L_001E2940:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E2944:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 2u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2558u | kUnwind; return; } goto L_001E2558; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E2E14; } }
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2558u | kUnwind; return; } goto L_001E2558; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2E14; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 1;
L_001E2970:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E299C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_001E2990; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E2994; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E2990:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E2994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2E14; } }
L_001E299C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 1;
L_001E29A0:
    set32(c.r[2], 0u + 91u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[20], c.r[16].w[0] + 1u);  if (t) { goto L_001E29E8; } }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));  goto L_001E29C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2A4C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 1;
L_001E29C4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_001E2A4C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E29DCu); set32(c.r[5], c.r[5].w[0] - 21584u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E29DCu) [[unlikely]] return; }
L_001E29DC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2A4C; } }
L_001E29E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[2], 0u + 94u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));  goto L_001E2A00; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001E29FC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 1;
L_001E2A00:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));  goto L_001E2A1C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2A18u); set32(c.r[5], c.r[5].w[0] - 21550u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E2A18u) [[unlikely]] return; }
L_001E2A18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 1;
L_001E2A1C:
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_001E2A38; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));  goto L_001E2A3C; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001E2A38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 1;
L_001E2A3C:
    set32(c.r[2], 0u + 93u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E29FCu | kUnwind; return; } goto L_001E29FC; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001E2A4C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));  goto L_001E2AD4; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 91u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = ld8((c.r[17].w[0]));  if (t) { goto L_001E2AAC; } }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  goto L_001E2A9C; }
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_001E2ACC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001E2AC4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2ACC; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 1;
L_001E2A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2AA4u);  if (depth < kMaxDepth) unit_0038(c, 443u, depth + 1u); else { c.pc = 0x001E3000u; return; } if (c.pc != 0x001E2AA4u) [[unlikely]] return; }
L_001E2AA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2ACC; } }
L_001E2AAC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2AB8u); set32(c.r[6], c.r[20].w[0] - 1u);  if (depth < kMaxDepth) unit_0038(c, 440u, depth + 1u); else { c.pc = 0x001E2F00u; return; } if (c.pc != 0x001E2AB8u) [[unlikely]] return; }
L_001E2AB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2ACC; } }
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_001E2AC4:
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_001E2ACC:
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 2;
L_001E2AD4:
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E2D3C; } }
    set32(c.r[2], 0u + 43u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E2C34; } }
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[19].d[0] = 0ull + 0ull;  goto L_001E2B50; }
    set32(c.r[2], 0u + 63u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E2B0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2DF8; } }
L_001E2B0C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[20].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2558u | kUnwind; return; } goto L_001E2558; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2B24u); set32(c.r[6], c.r[20].w[0] + 1u);  if (depth < kMaxDepth) unit_0038(c, 396u, depth + 1u); else { c.pc = 0x001E2530u; return; } if (c.pc != 0x001E2B24u) [[unlikely]] return; }
L_001E2B24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E2B34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2E14; } }
L_001E2B34:
    set32(c.r[16], c.r[20].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2558u | kUnwind; return; } goto L_001E2558; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2B50; } }
    c.r[19].d[0] = c.r[19].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001E2B50:
    c.r[3].d[0] = c.r[19].d[0] << 32;
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E2C20; } }
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], 0u + 91u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001E2BC8; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  goto L_001E2BB4; }
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_001E2BE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001E2BDC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2BE4; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 1;
L_001E2BB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2BBCu);  if (depth < kMaxDepth) unit_0038(c, 443u, depth + 1u); else { c.pc = 0x001E3000u; return; } if (c.pc != 0x001E2BBCu) [[unlikely]] return; }
L_001E2BBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2BE4; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E2BC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2BD0u); set32(c.r[6], c.r[20].w[0] - 1u);  if (depth < kMaxDepth) unit_0038(c, 440u, depth + 1u); else { c.pc = 0x001E2F00u; return; } if (c.pc != 0x001E2BD0u) [[unlikely]] return; }
L_001E2BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2BE4; } }
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_001E2BDC:
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_001E2BE4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[19].d[0] = c.r[19].d[0] + static_cast<std::uint64_t>(1ll);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2B50u | kUnwind; return; } goto L_001E2B50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2C20; } }
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.budget -= 1;
L_001E2BF8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[6], c.r[20].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2C0Cu); set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 396u, depth + 1u); else { c.pc = 0x001E2530u; return; } if (c.pc != 0x001E2C0Cu) [[unlikely]] return; }
L_001E2C0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = c.r[19].d[0] + static_cast<std::uint64_t>(-1ll);  goto L_001E2C20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2C2C; } }
    c.r[19].d[0] = c.r[19].d[0] + static_cast<std::uint64_t>(-1ll);
    c.budget -= 1;
L_001E2C20:
    c.budget -= 2;
    if (c.r[19].sd[0] >= 0) { c.r[2].d[0] = c.r[19].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2BF8u | kUnwind; return; } goto L_001E2BF8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E2C2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2E14; } }
L_001E2C34:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E2D34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001E2C48; } }
    c.r[19].d[0] = c.r[19].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001E2C48:
    c.r[3].d[0] = c.r[19].d[0] << 32;
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E2D1C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 91u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = ld8((c.r[4].w[0] + 1u));  if (t) { goto L_001E2CBC; } }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  goto L_001E2CAC; }
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_001E2CDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001E2CD4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2CDC; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 1;
L_001E2CAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2CB4u);  if (depth < kMaxDepth) unit_0038(c, 443u, depth + 1u); else { c.pc = 0x001E3000u; return; } if (c.pc != 0x001E2CB4u) [[unlikely]] return; }
L_001E2CB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2CDC; } }
L_001E2CBC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2CC8u); set32(c.r[6], c.r[20].w[0] - 1u);  if (depth < kMaxDepth) unit_0038(c, 440u, depth + 1u); else { c.pc = 0x001E2F00u; return; } if (c.pc != 0x001E2CC8u) [[unlikely]] return; }
L_001E2CC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2CDC; } }
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_001E2CD4:
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_001E2CDC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[19].d[0] = c.r[19].d[0] + static_cast<std::uint64_t>(1ll);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2C48u | kUnwind; return; } goto L_001E2C48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2D1C; } }
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.budget -= 1;
L_001E2CF0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[6], c.r[20].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2D08u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0038(c, 396u, depth + 1u); else { c.pc = 0x001E2530u; return; } if (c.pc != 0x001E2D08u) [[unlikely]] return; }
L_001E2D08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = c.r[19].d[0] + static_cast<std::uint64_t>(-1ll);  goto L_001E2D1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2D28; } }
    c.r[19].d[0] = c.r[19].d[0] + static_cast<std::uint64_t>(-1ll);
    c.budget -= 1;
L_001E2D1C:
    c.budget -= 2;
    if (c.r[19].sd[0] >= 0) { c.r[2].d[0] = c.r[19].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2CF0u | kUnwind; return; } goto L_001E2CF0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E2D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2D34; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E2D34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2E14; } }
L_001E2D3C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2D4Cu); set32(c.r[6], c.r[20].w[0] + 1u);  if (depth < kMaxDepth) unit_0038(c, 396u, depth + 1u); else { c.pc = 0x001E2530u; return; } if (c.pc != 0x001E2D4Cu) [[unlikely]] return; }
L_001E2D4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  goto L_001E2D60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2DF0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_001E2D60:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E2DF0; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 91u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = ld8((c.r[17].w[0]));  if (t) { goto L_001E2DBC; } }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  goto L_001E2DAC; }
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_001E2DDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001E2DD4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2DDC; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 1;
L_001E2DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2DB4u);  if (depth < kMaxDepth) unit_0038(c, 443u, depth + 1u); else { c.pc = 0x001E3000u; return; } if (c.pc != 0x001E2DB4u) [[unlikely]] return; }
L_001E2DB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2DDC; } }
L_001E2DBC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2DC8u); set32(c.r[6], c.r[20].w[0] - 1u);  if (depth < kMaxDepth) unit_0038(c, 440u, depth + 1u); else { c.pc = 0x001E2F00u; return; } if (c.pc != 0x001E2DC8u) [[unlikely]] return; }
L_001E2DC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2DDC; } }
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_001E2DD4:
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_001E2DDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E2DEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2D3Cu | kUnwind; return; } goto L_001E2D3C; } }
L_001E2DEC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E2DF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2E14; } }
L_001E2DF8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.r[16].d[0] = c.r[20].d[0] + 0ull;  goto L_001E2E0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E2E14; } }
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001E2E0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2558u | kUnwind; return; } goto L_001E2558; } }
L_001E2E14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001E2E40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001E2E74; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  goto L_001E2E88; }
L_001E2E74:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2E84u); set32(c.r[5], c.r[5].w[0] - 21518u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E2E84u) [[unlikely]] return; }
L_001E2E84:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 1;
L_001E2E88:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  goto L_001E2E9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E2EE4; } }
L_001E2E9C:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_001E2ED0; } }
L_001E2EA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001E2EC4; } }
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001E2ED4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { goto L_001E2EE4; } }
L_001E2EC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_001E2ED0; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001E2ED0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001E2ED4:
    c.r[2].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2EA8u | kUnwind; return; } goto L_001E2EA8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E2EE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E2F00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 94u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], 0u + 1u);  if (t) { goto L_001E2FC4; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_001E2FC4; } }
L_001E2F40:
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));  goto L_001E2F6C; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2F5Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 443u, depth + 1u); else { c.pc = 0x001E3000u; return; } if (c.pc != 0x001E2F5Cu) [[unlikely]] return; }
L_001E2F5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001E2FC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E2FDC; } }
L_001E2F6C:
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[4].d[0] & 255ull;  goto L_001E2FB4; }
    set32(c.r[3], c.r[18].w[0] + 2u);
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E2FB0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] - 2u));
    c.r[1].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[18].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_001E2FC4; } }
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E2FC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E2FDC; } }
L_001E2FB0:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_001E2FB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_001E2FC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E2FDC; } }
L_001E2FC4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001E2FC8:
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2F40u | kUnwind; return; } goto L_001E2F40; }
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 2;
L_001E2FDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E3000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3020u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 310u, depth + 1u); else { c.pc = 0x003BAFC0u; return; } if (c.pc != 0x001E3020u) [[unlikely]] return; }
L_001E3020:
    set32(c.r[3], 0u + 122u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].d[0] = c.r[17].d[0] ^ 0ull;  goto L_001E3154; }
    set32(c.r[3], 0u + 120u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_001E3140; }
    set32(c.r[3], 0u + 119u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_001E312C; }
    set32(c.r[3], 0u + 117u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_001E3118; }
    set32(c.r[3], 0u + 115u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_001E3104; }
    set32(c.r[3], 0u + 112u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_001E30F0; }
    set32(c.r[3], 0u + 108u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_001E30DC; }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_001E30C8; }
    set32(c.r[3], 0u + 99u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_001E30B4; }
    set32(c.r[3], 0u + 97u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_001E30A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] ^ c.r[17].d[0];  if (t) { goto L_001E315C; } }
L_001E30A0:
    set32(c.r[2], c.r[2].w[0] - 31768u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_001E3164; } }
L_001E30B4:
    set32(c.r[2], c.r[2].w[0] - 31768u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 32ull;  if (t) { goto L_001E3164; } }
L_001E30C8:
    set32(c.r[2], c.r[2].w[0] - 31768u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 4ull;  if (t) { goto L_001E3164; } }
L_001E30DC:
    set32(c.r[2], c.r[2].w[0] - 31768u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 2ull;  if (t) { goto L_001E3164; } }
L_001E30F0:
    set32(c.r[2], c.r[2].w[0] - 31768u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 16ull;  if (t) { goto L_001E3164; } }
L_001E3104:
    set32(c.r[2], c.r[2].w[0] - 31768u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 8ull;  if (t) { goto L_001E3164; } }
L_001E3118:
    set32(c.r[2], c.r[2].w[0] - 31768u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_001E3164; } }
L_001E312C:
    set32(c.r[2], c.r[2].w[0] - 31768u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 7ull;  if (t) { goto L_001E3164; } }
L_001E3140:
    set32(c.r[2], c.r[2].w[0] - 31768u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 68ull;  if (t) { goto L_001E3164; } }
L_001E3154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_001E3164; } }
L_001E315C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_001E318C; } }
L_001E3164:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] - 31768u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  goto L_001E3188; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E318C; } }
L_001E3188:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_001E318C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E31A0:
    set32(c.r[29], c.r[29].w[0] - 1072u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 6u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E31BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 399u, depth + 1u); else { c.pc = 0x001DE840u; return; } if (c.pc != 0x001E31BCu) [[unlikely]] return; }
L_001E31BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E31C8u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0037(c, 226u, depth + 1u); else { c.pc = 0x001DD640u; return; } if (c.pc != 0x001E31C8u) [[unlikely]] return; }
L_001E31C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E31DCu); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0030(c, 373u, depth + 1u); else { c.pc = 0x001C3BC0u; return; } if (c.pc != 0x001E31DCu) [[unlikely]] return; }
L_001E31DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 32u);  goto L_001E31F8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E31F4u); set32(c.r[5], c.r[5].w[0] - 21499u);  if (depth < kMaxDepth) unit_0037(c, 413u, depth + 1u); else { c.pc = 0x001DE9C0u; return; } if (c.pc != 0x001E31F4u) [[unlikely]] return; }
L_001E31F4:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_001E31F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3200u);  if (depth < kMaxDepth) unit_0037(c, 238u, depth + 1u); else { c.pc = 0x001DD7E0u; return; } if (c.pc != 0x001E3200u) [[unlikely]] return; }
L_001E3200:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1072u);  c.pc = t; return; }
L_001E3220:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3230u); c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 241u, depth + 1u); else { c.pc = 0x001DD850u; return; } if (c.pc != 0x001E3230u) [[unlikely]] return; }
L_001E3230:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E3240:
    set32(c.r[29], c.r[29].w[0] - 1120u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3260u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C5E30u; return; } if (c.pc != 0x001E3260u) [[unlikely]] return; }
L_001E3260:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3270u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0037(c, 226u, depth + 1u); else { c.pc = 0x001DD640u; return; } if (c.pc != 0x001E3270u) [[unlikely]] return; }
L_001E3270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_001E32E0; } }
L_001E3278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3280u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E3280u) [[unlikely]] return; }
L_001E3280:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 6;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 80u)));  goto L_001E32B0; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E32ACu); set32(c.r[6], c.r[6].w[0] - 21469u);  if (depth < kMaxDepth) unit_0037(c, 426u, depth + 1u); else { c.pc = 0x001DEB50u; return; } if (c.pc != 0x001E32ACu) [[unlikely]] return; }
L_001E32AC:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 1;
L_001E32B0:
    set32(c.r[2], c.r[29].w[0] + 1116u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 80u)));  goto L_001E32CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E32C8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0037(c, 248u, depth + 1u); else { c.pc = 0x001DD9B0u; return; } if (c.pc != 0x001E32C8u) [[unlikely]] return; }
L_001E32C8:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 1;
L_001E32CC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 5;
L_001E32E0:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3278u | kUnwind; return; } goto L_001E3278; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E32F4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0037(c, 238u, depth + 1u); else { c.pc = 0x001DD7E0u; return; } if (c.pc != 0x001E32F4u) [[unlikely]] return; }
L_001E32F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1120u);  c.pc = t; return; }
L_001E3320:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 76u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3344u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 380u, depth + 1u); else { c.pc = 0x001DE600u; return; } if (c.pc != 0x001E3344u) [[unlikely]] return; }
L_001E3344:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[29].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3360u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0037(c, 341u, depth + 1u); else { c.pc = 0x001DE1A0u; return; } if (c.pc != 0x001E3360u) [[unlikely]] return; }
L_001E3360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3368u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 484u, depth + 1u); else { c.pc = 0x003AFBE0u; return; } if (c.pc != 0x001E3368u) [[unlikely]] return; }
L_001E3368:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[3].d[0] = c.r[18].d[0] << 32;  goto L_001E3378; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3384; } }
L_001E3378:
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
L_001E3384:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E33F8; }
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);  goto L_001E33B0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E33F8; } }
L_001E33B0:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001E33D4; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E33EC; } }
L_001E33D4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::add(c.f[12], c.f[12]);
    c.budget -= 6;
L_001E33EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E33F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E33F4u) [[unlikely]] return; }
L_001E33F4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001E33F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E3410:
    set32(c.r[29], c.r[29].w[0] - 1088u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 1084u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3430u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 380u, depth + 1u); else { c.pc = 0x001DE600u; return; } if (c.pc != 0x001E3430u) [[unlikely]] return; }
L_001E3430:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3440u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E3440u) [[unlikely]] return; }
L_001E3440:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3454u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0037(c, 226u, depth + 1u); else { c.pc = 0x001DD640u; return; } if (c.pc != 0x001E3454u) [[unlikely]] return; }
L_001E3454:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E3470; } }
L_001E345C:
    set32(c.r[6], ld32((c.r[29].w[0] + 1084u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E346Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 241u, depth + 1u); else { c.pc = 0x001DD850u; return; } if (c.pc != 0x001E346Cu) [[unlikely]] return; }
L_001E346C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E3470:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E345Cu | kUnwind; return; } goto L_001E345C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3480u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0037(c, 238u, depth + 1u); else { c.pc = 0x001DD7E0u; return; } if (c.pc != 0x001E3480u) [[unlikely]] return; }
L_001E3480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1088u);  c.pc = t; return; }
L_001E34A0:
    set32(c.r[29], c.r[29].w[0] - 1088u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 1084u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E34C0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 380u, depth + 1u); else { c.pc = 0x001DE600u; return; } if (c.pc != 0x001E34C0u) [[unlikely]] return; }
L_001E34C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E34D0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0037(c, 226u, depth + 1u); else { c.pc = 0x001DD640u; return; } if (c.pc != 0x001E34D0u) [[unlikely]] return; }
L_001E34D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001E3514; } }
L_001E34D8:
    set32(c.r[2], c.r[29].w[0] + 1084u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);  goto L_001E34F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E34F0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0037(c, 248u, depth + 1u); else { c.pc = 0x001DD9B0u; return; } if (c.pc != 0x001E34F0u) [[unlikely]] return; }
L_001E34F0:
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_001E34F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E34FCu); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 311u, depth + 1u); else { c.pc = 0x003BAFE8u; return; } if (c.pc != 0x001E34FCu) [[unlikely]] return; }
L_001E34FC:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 6;
L_001E3514:
    set32(c.r[2], ld32((c.r[29].w[0] + 1084u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 48u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E34D8u | kUnwind; return; } goto L_001E34D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E352Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0037(c, 238u, depth + 1u); else { c.pc = 0x001DD7E0u; return; } if (c.pc != 0x001E352Cu) [[unlikely]] return; }
L_001E352C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1088u);  c.pc = t; return; }
L_001E3550:
    set32(c.r[29], c.r[29].w[0] - 1088u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 1084u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3570u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 380u, depth + 1u); else { c.pc = 0x001DE600u; return; } if (c.pc != 0x001E3570u) [[unlikely]] return; }
L_001E3570:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3580u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0037(c, 226u, depth + 1u); else { c.pc = 0x001DD640u; return; } if (c.pc != 0x001E3580u) [[unlikely]] return; }
L_001E3580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001E35C4; } }
L_001E3588:
    set32(c.r[2], c.r[29].w[0] + 1084u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);  goto L_001E35A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E35A0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0037(c, 248u, depth + 1u); else { c.pc = 0x001DD9B0u; return; } if (c.pc != 0x001E35A0u) [[unlikely]] return; }
L_001E35A0:
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_001E35A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E35ACu); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 310u, depth + 1u); else { c.pc = 0x003BAFC0u; return; } if (c.pc != 0x001E35ACu) [[unlikely]] return; }
L_001E35AC:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 6;
L_001E35C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 1084u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 48u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3588u | kUnwind; return; } goto L_001E3588; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E35DCu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0037(c, 238u, depth + 1u); else { c.pc = 0x001DD7E0u; return; } if (c.pc != 0x001E35DCu) [[unlikely]] return; }
L_001E35DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1088u);  c.pc = t; return; }
L_001E3600:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 92u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3628u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 380u, depth + 1u); else { c.pc = 0x001DE600u; return; } if (c.pc != 0x001E3628u) [[unlikely]] return; }
L_001E3628:
    set32(c.r[17], ld32((c.r[29].w[0] + 92u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E363Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0037(c, 354u, depth + 1u); else { c.pc = 0x001DE310u; return; } if (c.pc != 0x001E363Cu) [[unlikely]] return; }
L_001E363C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3644u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 484u, depth + 1u); else { c.pc = 0x003AFBE0u; return; } if (c.pc != 0x001E3644u) [[unlikely]] return; }
L_001E3644:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[3].d[0] = c.r[17].d[0] << 32;  goto L_001E3654; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E3660; } }
L_001E3654:
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[17].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
L_001E3660:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[19], ld32((c.r[29].w[0] + 92u)));
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3678u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0037(c, 341u, depth + 1u); else { c.pc = 0x001DE1A0u; return; } if (c.pc != 0x001E3678u) [[unlikely]] return; }
L_001E3678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3680u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 484u, depth + 1u); else { c.pc = 0x003AFBE0u; return; } if (c.pc != 0x001E3680u) [[unlikely]] return; }
L_001E3680:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[3].d[0] = c.r[19].d[0] << 32;  goto L_001E3690; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E369C; } }
L_001E3690:
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
L_001E369C:
    c.budget -= 2;
    if (c.r[17].sd[0] > 0) { c.r[3].d[0] = ld32((c.r[29].w[0] + 92u));  goto L_001E36AC; }
    set32(c.r[17], 0u + 1u);
    c.r[3].d[0] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 2;
L_001E36AC:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  goto L_001E36C0; }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001E36C0:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E36F8; }
    c.r[2].d[0] = c.r[2].d[0] - c.r[17].d[0];
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E36F0u); set32(c.r[5], c.r[3].w[0] - 1u);  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001E36F0u) [[unlikely]] return; }
L_001E36F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001E370C; } }
L_001E36F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 21455u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3708u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 36u, depth + 1u); else { c.pc = 0x001C49E0u; return; } if (c.pc != 0x001E3708u) [[unlikely]] return; }
L_001E3708:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001E370C:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001E3730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E374Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 380u, depth + 1u); else { c.pc = 0x001DE600u; return; } if (c.pc != 0x001E374Cu) [[unlikely]] return; }
L_001E374C:
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001E3764; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E377C; } }
L_001E3764:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::add(c.f[12], c.f[12]);
    c.budget -= 6;
L_001E377C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3784u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 39u, depth + 1u); else { c.pc = 0x001C4A60u; return; } if (c.pc != 0x001E3784u) [[unlikely]] return; }
L_001E3784:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E37A0:
    st32((c.r[4].w[0] + 216u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 208u), c.r[6].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 212u), c.r[7].w[0]);  c.pc = t; return; }
L_001E37B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 35u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E386C; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_001E37F8; } }
L_001E37DC:
    set32(c.r[2], c.r[7].w[0] + c.r[29].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    st8((c.r[2].w[0] + 32u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[1].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;  goto L_001E3808; }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_001E37F8:
    c.r[2].d[0] = c.r[7].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[6].w[0] + c.r[7].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E37DCu | kUnwind; return; } goto L_001E37DC; }
    c.r[1].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_001E3808:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E384C; } }
    c.r[1].d[0] = c.r[7].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E384C; } }
    set32(c.r[2], c.r[7].w[0] + c.r[29].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] - 21424u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3844u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x001E3844u) [[unlikely]] return; }
L_001E3844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3884; } }
L_001E384C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3864u); set32(c.r[5], c.r[5].w[0] - 21397u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x001E3864u) [[unlikely]] return; }
L_001E3864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3884; } }
L_001E386C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3884u); set32(c.r[5], c.r[5].w[0] - 21397u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x001E3884u) [[unlikely]] return; }
L_001E3884:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E38A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 35u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E395C; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_001E38E8; } }
L_001E38CC:
    set32(c.r[2], c.r[7].w[0] + c.r[29].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    st8((c.r[2].w[0] + 32u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[1].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;  goto L_001E38F8; }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_001E38E8:
    c.r[2].d[0] = c.r[7].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[6].w[0] + c.r[7].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E38CCu | kUnwind; return; } goto L_001E38CC; }
    c.r[1].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_001E38F8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E393C; } }
    c.r[1].d[0] = c.r[7].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E393C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[7].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 21377u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3934u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x001E3934u) [[unlikely]] return; }
L_001E3934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E3978; } }
L_001E393C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3954u); set32(c.r[5], c.r[5].w[0] - 21352u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x001E3954u) [[unlikely]] return; }
L_001E3954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3974; } }
L_001E395C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3974u); set32(c.r[5], c.r[5].w[0] - 21323u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x001E3974u) [[unlikely]] return; }
L_001E3974:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E3978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3980u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AE(c, 103u, depth + 1u); else { c.pc = 0x003B9050u; return; } if (c.pc != 0x001E3980u) [[unlikely]] return; }
L_001E3980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E3990:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E39ACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 518u, depth + 1u); else { c.pc = 0x001E3A80u; return; } if (c.pc != 0x001E39ACu) [[unlikely]] return; }
L_001E39AC:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 256u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000C0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001E39FC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 32u)));
    set32(c.r[2], 0u + 35u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 212u)));  goto L_001E3A00; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_001E39F0; } }
L_001E39DC:
    set32(c.r[2], c.r[4].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001E39FC; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_001E39F0:
    c.r[2].d[0] = c.r[4].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E39DCu | kUnwind; return; } goto L_001E39DC; } }
L_001E39FC:
    set32(c.r[3], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 1;
L_001E3A00:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + c.r[29].w[0]);  goto L_001E3A20; }
    set32(c.r[2], c.r[4].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3A18u); set32(c.r[5], c.r[2].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E3A18u) [[unlikely]] return; }
L_001E3A18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001E3A30; } }
L_001E3A20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3A2Cu); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0038(c, 499u, depth + 1u); else { c.pc = 0x001E37B0u; return; } if (c.pc != 0x001E3A2Cu) [[unlikely]] return; }
L_001E3A2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001E3A30:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001E3A40:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3A5Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 518u, depth + 1u); else { c.pc = 0x001E3A80u; return; } if (c.pc != 0x001E3A5Cu) [[unlikely]] return; }
L_001E3A5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3A68u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E3A68u) [[unlikely]] return; }
L_001E3A68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001E3A80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[12].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[9], 0u + 91u);
    set32(c.r[8], c.r[8].w[0] - 21440u);
    set32(c.r[5], 0u + 93u);
    set32(c.r[3], c.r[4].w[0] + c.r[12].w[0]);
    c.budget -= 12;
L_001E3AB0:
    c.r[11].d[0] = ld8((c.r[3].w[0] + 496u));
    c.r[3].d[0] = c.r[11].sd[0] < 41ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 1u);  if (t) { goto L_001E3AE4; } }
    c.r[1].d[0] = c.r[11].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = c.r[11].d[0] & 240ull;  goto L_001E3AE8; }
    c.r[1].d[0] = c.r[11].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);  goto L_001E3B20; }
    c.r[1].d[0] = c.r[11].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E3B1C; } }
L_001E3AE4:
    c.r[3].d[0] = c.r[11].d[0] & 240ull;
    c.budget -= 1;
L_001E3AE8:
    set32(c.r[10], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[3].d[0] = c.r[11].d[0] & 15ull;
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[16], c.r[16].w[0] + 4u);
    st8((c.r[10].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[10].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001E3B28; } }
L_001E3B1C:
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_001E3B20:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_001E3B28:
    c.r[3].d[0] = c.r[12].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[4].w[0] + c.r[12].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3AB0u | kUnwind; return; } goto L_001E3AB0; }
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[3], 0u + 58u);  goto L_001E3B48; }
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_001E3B80; } }
L_001E3B48:
    set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 32u);
    set32(c.r[3], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[16].w[0] + 2u);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3B74u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001E3B74u) [[unlikely]] return; }
L_001E3B74:
    set32(c.r[3], c.r[16].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st8((c.r[3].w[0] + 63u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_001E3B80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E3BA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000C0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 256u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001E3BF8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], 0u + 35u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 212u)));  goto L_001E3BFC; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_001E3BEC; } }
L_001E3BD8:
    set32(c.r[2], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001E3BF8; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001E3BEC:
    c.r[2].d[0] = c.r[6].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3BD8u | kUnwind; return; } goto L_001E3BD8; } }
L_001E3BF8:
    set32(c.r[2], ld32((c.r[4].w[0] + 212u)));
    c.budget -= 1;
L_001E3BFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);  goto L_001E3C14; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3C0Cu); set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E3C0Cu) [[unlikely]] return; }
L_001E3C0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001E3C20; } }
L_001E3C14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3C1Cu);  if (depth < kMaxDepth) unit_0038(c, 499u, depth + 1u); else { c.pc = 0x001E37B0u; return; } if (c.pc != 0x001E3C1Cu) [[unlikely]] return; }
L_001E3C1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001E3C20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E3C30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000C0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld64((c.r[4].w[0] + 256u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001E3CF8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 35u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);  goto L_001E3CDC; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_001E3C88; } }
L_001E3C74:
    set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);  goto L_001E3C98; }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001E3C88:
    c.r[2].d[0] = c.r[5].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3C74u | kUnwind; return; } goto L_001E3C74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.budget -= 1;
L_001E3C98:
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + c.r[5].w[0]);  goto L_001E3CF8; }
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001E3CC0; } }
L_001E3CB0:
    set32(c.r[2], c.r[5].w[0] + c.r[29].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[2].w[0] + 48u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_001E3CC0:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + c.r[5].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3CB0u | kUnwind; return; } goto L_001E3CB0; }
    set32(c.r[2], c.r[5].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 48u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001E3CF8; } }
L_001E3CDC:
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 208u)));  goto L_001E3CFC; }
    set32(c.r[2], 0u + 48u);
    st8((c.r[29].w[0] + 49u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.budget -= 4;
L_001E3CF8:
    set32(c.r[2], ld32((c.r[17].w[0] + 208u)));
    c.budget -= 1;
L_001E3CFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001E3D14; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3D10u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E3D10u) [[unlikely]] return; }
L_001E3D10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E3D14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3D1Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 504u, depth + 1u); else { c.pc = 0x001E38A0u; return; } if (c.pc != 0x001E3D1Cu) [[unlikely]] return; }
L_001E3D1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E3D30:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E3D6C; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001E3D68; } }
    c.r[2].d[0] = ld64((c.r[5].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3D68; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001E3D68; } }
    set32(c.r[3], c.r[5].w[0] + 84u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[3].w[0]);  if (t) { goto L_001E3D6C; } }
L_001E3D68:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E3D6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E3D80:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E3D9C; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001E3D98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[5].w[0] + 24u));  if (t) { goto L_001E3D9C; } }
L_001E3D98:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E3D9C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E3DB0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E3DD0; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001E3DCC; } }
    c.r[2].d[0] = ld64((c.r[5].w[0] + 16u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];  if (t) { goto L_001E3DD0; } }
L_001E3DCC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E3DD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E3DE0:
    st32((c.r[4].w[0] + 840u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 844u), c.r[6].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 848u), c.r[7].w[0]);  c.pc = t; return; }
L_001E3DF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[7].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == c.r[7].d[0]; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001E3E2C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3E2Cu); set32(c.r[5], c.r[5].w[0] - 21296u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E3E2Cu) [[unlikely]] return; }
L_001E3E2C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3E3Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x001E3E3Cu) [[unlikely]] return; }
L_001E3E3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E3E60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[7].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == c.r[7].d[0]; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001E3E9C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3E9Cu); set32(c.r[5], c.r[5].w[0] - 21266u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E3E9Cu) [[unlikely]] return; }
L_001E3E9C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3EACu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001E3EACu) [[unlikely]] return; }
L_001E3EAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E3ED0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = ld64((c.r[4].w[0] + 256u));
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; st64((c.r[4].w[0] + 256u), c.r[2].d[0]);  if (t) { goto L_001E3F04; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 844u)));  goto L_001E3F10; }
L_001E3F04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001E3F98; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 844u)));
    c.budget -= 1;
L_001E3F10:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[5].d[0] << 32;  goto L_001E3F60; }
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3F24u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E3F24u) [[unlikely]] return; }
L_001E3F24:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { st64((c.r[18].w[0] + 256u), c.r[16].d[0]);  goto L_001E3F9C; }
    c.r[3].d[0] = ld64((c.r[18].w[0] + 256u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E3F98; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3F54u); set32(c.r[5], c.r[5].w[0] - 21236u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E3F54u) [[unlikely]] return; }
L_001E3F54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3F98; } }
    c.r[4].d[0] = c.r[5].d[0] << 32;
    c.budget -= 1;
L_001E3F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3F68u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);  if (depth < kMaxDepth) unit_0000(c, 26u, depth + 1u); else { c.pc = 0x001002E0u; return; } if (c.pc != 0x001E3F68u) [[unlikely]] return; }
L_001E3F68:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001E3F98; } }
    c.r[3].d[0] = ld64((c.r[18].w[0] + 256u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E3F98; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3F98u); set32(c.r[5], c.r[5].w[0] - 21221u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E3F98u) [[unlikely]] return; }
L_001E3F98:
    st64((c.r[18].w[0] + 256u), c.r[16].d[0]);
    c.budget -= 1;
L_001E3F9C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E3FC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { [[clang::musttail]] return unit_0039(c, 2u, depth); } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 848u)));  goto L_001E3FE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { [[clang::musttail]] return unit_0039(c, 3u, depth); } }
    set32(c.r[3], ld32((c.r[4].w[0] + 848u)));
    c.budget -= 1;
L_001E3FE0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E3FF8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3FF0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E3FF0u) [[unlikely]] return; }
L_001E3FF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 2u, depth); } }
L_001E3FF8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 2u, depth); } }
    [[clang::musttail]] return unit_0039(c, 1u, depth);
}

}
