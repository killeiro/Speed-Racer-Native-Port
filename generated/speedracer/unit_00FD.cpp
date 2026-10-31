#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00FD[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    0, 19, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 25, 0, 26, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32,
    0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 39, 0, 40, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    0, 54, 0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0,
    0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0,
    71, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0,
    0, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 87, 0,
    0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96,
    0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0,
    0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0,
    0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0,
    121, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0,
    129, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 137, 0,
    0, 138, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 146,
    0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0,
    155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0,
    0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172,
    0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0,
    184, 0, 0, 185, 0, 186, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192,
    0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0,
    0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0,
    0, 0, 227, 0, 228, 0, 0, 0, 229, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0,
    0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0,
    0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0,
    0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0,
    256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 273, 0, 274, 0, 0, 275, 0,
    0, 276, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281,
    0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287,
    0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0,
    0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0,
    299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0,
    0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0,
    0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0,
    0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0,
    0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0,
    0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329,
    0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0,
    0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0,
    339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0,
    0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0,
    0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361,
    0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0,
    367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0,
    0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0,
    0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 384, 0,
    385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 392,
    0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0,
    0, 400, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 407, 0, 0,
    408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 415, 0,
    0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 423, 0,
    0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 429, 0, 0, 0, 430, 0, 0, 431, 0,
    0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 435, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440,
    0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 444, 0, 0, 445, 0, 0, 446, 0, 447, 0, 448,
    0, 0, 449, 0, 0, 450, 0, 451, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 0, 0, 456, 0, 0, 0, 457,
    0, 0, 458, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 0, 464, 0, 0, 0,
    465, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0,
    470, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0,
    0, 481, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 493, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 499, 0,
    0, 500, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 505, 0, 0, 506, 0, 507, 0, 0, 0,
    508, 0, 0, 509, 0, 0, 510, 0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 515,
    0, 0, 516, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 520, 0, 0, 521, 0, 0, 522, 0, 523, 0, 0,
    0, 524, 0, 0, 525, 0, 0, 526, 0, 527, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0,
    0, 530, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0,
    0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541,
    0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 547, 0, 0,
    548, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0,
    0, 554, 0, 0, 0, 0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 558, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 561,
    0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566,
    0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 571, 0, 0, 0,
    0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576,
    0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0,
    0, 581, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0,
    586, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 589, 0, 0, 0, 0, 590, 0, 0, 0, 0,
    0, 0, 0, 591, 0, 0, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0,
    596, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 601,
    0, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0, 604, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0,
    0, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 617, 0, 0, 0, 0, 618, 0, 0, 0, 619, 0, 0, 0, 0, 0, 620, 0, 0, 0, 621, 0, 0, 0, 0, 622, 0, 0, 0,
    0, 0, 0, 623, 0, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0,
};

void unit_00FD(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004F4000;
    case 2u: goto L_004F4010;
    case 3u: goto L_004F4024;
    case 4u: goto L_004F4044;
    case 5u: goto L_004F4050;
    case 6u: goto L_004F4058;
    case 7u: goto L_004F4060;
    case 8u: goto L_004F408C;
    case 9u: goto L_004F40A8;
    case 10u: goto L_004F40B4;
    case 11u: goto L_004F40F8;
    case 12u: goto L_004F4138;
    case 13u: goto L_004F4144;
    case 14u: goto L_004F4150;
    case 15u: goto L_004F4170;
    case 16u: goto L_004F41A0;
    case 17u: goto L_004F41C0;
    case 18u: goto L_004F41F8;
    case 19u: goto L_004F4204;
    case 20u: goto L_004F420C;
    case 21u: goto L_004F4220;
    case 22u: goto L_004F4240;
    case 23u: goto L_004F4268;
    case 24u: goto L_004F4280;
    case 25u: goto L_004F4290;
    case 26u: goto L_004F4298;
    case 27u: goto L_004F42A0;
    case 28u: goto L_004F42B0;
    case 29u: goto L_004F42C0;
    case 30u: goto L_004F42D0;
    case 31u: goto L_004F42F0;
    case 32u: goto L_004F42FC;
    case 33u: goto L_004F4308;
    case 34u: goto L_004F4320;
    case 35u: goto L_004F4340;
    case 36u: goto L_004F434C;
    case 37u: goto L_004F4358;
    case 38u: goto L_004F4378;
    case 39u: goto L_004F438C;
    case 40u: goto L_004F4394;
    case 41u: goto L_004F439C;
    case 42u: goto L_004F43AC;
    case 43u: goto L_004F43BC;
    case 44u: goto L_004F43CC;
    case 45u: goto L_004F43F0;
    case 46u: goto L_004F4420;
    case 47u: goto L_004F4428;
    case 48u: goto L_004F44AC;
    case 49u: goto L_004F44B4;
    case 50u: goto L_004F4520;
    case 51u: goto L_004F454C;
    case 52u: goto L_004F4554;
    case 53u: goto L_004F4568;
    case 54u: goto L_004F4584;
    case 55u: goto L_004F458C;
    case 56u: goto L_004F459C;
    case 57u: goto L_004F45A8;
    case 58u: goto L_004F45B0;
    case 59u: goto L_004F45D4;
    case 60u: goto L_004F4600;
    case 61u: goto L_004F4610;
    case 62u: goto L_004F4634;
    case 63u: goto L_004F4650;
    case 64u: goto L_004F4668;
    case 65u: goto L_004F4674;
    case 66u: goto L_004F4684;
    case 67u: goto L_004F46A0;
    case 68u: goto L_004F46B4;
    case 69u: goto L_004F46BC;
    case 70u: goto L_004F46E8;
    case 71u: goto L_004F4700;
    case 72u: goto L_004F470C;
    case 73u: goto L_004F4720;
    case 74u: goto L_004F472C;
    case 75u: goto L_004F4738;
    case 76u: goto L_004F4744;
    case 77u: goto L_004F4754;
    case 78u: goto L_004F476C;
    case 79u: goto L_004F4778;
    case 80u: goto L_004F478C;
    case 81u: goto L_004F4798;
    case 82u: goto L_004F47A4;
    case 83u: goto L_004F47B0;
    case 84u: goto L_004F47C0;
    case 85u: goto L_004F47D8;
    case 86u: goto L_004F47E4;
    case 87u: goto L_004F47F8;
    case 88u: goto L_004F4804;
    case 89u: goto L_004F4810;
    case 90u: goto L_004F481C;
    case 91u: goto L_004F482C;
    case 92u: goto L_004F4844;
    case 93u: goto L_004F4850;
    case 94u: goto L_004F4864;
    case 95u: goto L_004F4870;
    case 96u: goto L_004F487C;
    case 97u: goto L_004F4888;
    case 98u: goto L_004F4898;
    case 99u: goto L_004F48B0;
    case 100u: goto L_004F48BC;
    case 101u: goto L_004F48D0;
    case 102u: goto L_004F48DC;
    case 103u: goto L_004F48E8;
    case 104u: goto L_004F48F4;
    case 105u: goto L_004F4904;
    case 106u: goto L_004F491C;
    case 107u: goto L_004F4928;
    case 108u: goto L_004F493C;
    case 109u: goto L_004F4948;
    case 110u: goto L_004F4954;
    case 111u: goto L_004F4960;
    case 112u: goto L_004F4970;
    case 113u: goto L_004F4988;
    case 114u: goto L_004F4994;
    case 115u: goto L_004F49A8;
    case 116u: goto L_004F49B4;
    case 117u: goto L_004F49C0;
    case 118u: goto L_004F49CC;
    case 119u: goto L_004F49DC;
    case 120u: goto L_004F49F4;
    case 121u: goto L_004F4A00;
    case 122u: goto L_004F4A14;
    case 123u: goto L_004F4A20;
    case 124u: goto L_004F4A2C;
    case 125u: goto L_004F4A38;
    case 126u: goto L_004F4A48;
    case 127u: goto L_004F4A60;
    case 128u: goto L_004F4A6C;
    case 129u: goto L_004F4A80;
    case 130u: goto L_004F4A8C;
    case 131u: goto L_004F4A98;
    case 132u: goto L_004F4AA4;
    case 133u: goto L_004F4AB4;
    case 134u: goto L_004F4ACC;
    case 135u: goto L_004F4AD8;
    case 136u: goto L_004F4AEC;
    case 137u: goto L_004F4AF8;
    case 138u: goto L_004F4B04;
    case 139u: goto L_004F4B10;
    case 140u: goto L_004F4B20;
    case 141u: goto L_004F4B38;
    case 142u: goto L_004F4B44;
    case 143u: goto L_004F4B58;
    case 144u: goto L_004F4B64;
    case 145u: goto L_004F4B70;
    case 146u: goto L_004F4B7C;
    case 147u: goto L_004F4B8C;
    case 148u: goto L_004F4B9C;
    case 149u: goto L_004F4BA8;
    case 150u: goto L_004F4BB8;
    case 151u: goto L_004F4BC8;
    case 152u: goto L_004F4BD4;
    case 153u: goto L_004F4BE4;
    case 154u: goto L_004F4BF4;
    case 155u: goto L_004F4C00;
    case 156u: goto L_004F4C10;
    case 157u: goto L_004F4C20;
    case 158u: goto L_004F4C2C;
    case 159u: goto L_004F4C3C;
    case 160u: goto L_004F4C4C;
    case 161u: goto L_004F4C58;
    case 162u: goto L_004F4C68;
    case 163u: goto L_004F4C78;
    case 164u: goto L_004F4C84;
    case 165u: goto L_004F4C94;
    case 166u: goto L_004F4CA4;
    case 167u: goto L_004F4CB0;
    case 168u: goto L_004F4CC0;
    case 169u: goto L_004F4CD0;
    case 170u: goto L_004F4CDC;
    case 171u: goto L_004F4CEC;
    case 172u: goto L_004F4CFC;
    case 173u: goto L_004F4D08;
    case 174u: goto L_004F4D18;
    case 175u: goto L_004F4D28;
    case 176u: goto L_004F4D34;
    case 177u: goto L_004F4D44;
    case 178u: goto L_004F4D54;
    case 179u: goto L_004F4D60;
    case 180u: goto L_004F4D70;
    case 181u: goto L_004F4DB8;
    case 182u: goto L_004F4DD4;
    case 183u: goto L_004F4DE4;
    case 184u: goto L_004F4E00;
    case 185u: goto L_004F4E0C;
    case 186u: goto L_004F4E14;
    case 187u: goto L_004F4E1C;
    case 188u: goto L_004F4E30;
    case 189u: goto L_004F4E40;
    case 190u: goto L_004F4E5C;
    case 191u: goto L_004F4E6C;
    case 192u: goto L_004F4E7C;
    case 193u: goto L_004F4E98;
    case 194u: goto L_004F4EA8;
    case 195u: goto L_004F4EB8;
    case 196u: goto L_004F4ED4;
    case 197u: goto L_004F4EE4;
    case 198u: goto L_004F4EF4;
    case 199u: goto L_004F4F10;
    case 200u: goto L_004F4F2C;
    case 201u: goto L_004F4F48;
    case 202u: goto L_004F4F54;
    case 203u: goto L_004F4F5C;
    case 204u: goto L_004F4F68;
    case 205u: goto L_004F4F8C;
    case 206u: goto L_004F4F98;
    case 207u: goto L_004F4FAC;
    case 208u: goto L_004F4FB8;
    case 209u: goto L_004F4FC4;
    case 210u: goto L_004F4FDC;
    case 211u: goto L_004F4FE4;
    case 212u: goto L_004F5000;
    case 213u: goto L_004F5044;
    case 214u: goto L_004F5074;
    case 215u: goto L_004F50B4;
    case 216u: goto L_004F50F4;
    case 217u: goto L_004F512C;
    case 218u: goto L_004F5144;
    case 219u: goto L_004F5170;
    case 220u: goto L_004F5194;
    case 221u: goto L_004F51D8;
    case 222u: goto L_004F51EC;
    case 223u: goto L_004F5200;
    case 224u: goto L_004F5244;
    case 225u: goto L_004F5264;
    case 226u: goto L_004F5274;
    case 227u: goto L_004F5288;
    case 228u: goto L_004F5290;
    case 229u: goto L_004F52A0;
    case 230u: goto L_004F52A8;
    case 231u: goto L_004F52B8;
    case 232u: goto L_004F52C8;
    case 233u: goto L_004F52E8;
    case 234u: goto L_004F52F8;
    case 235u: goto L_004F5308;
    case 236u: goto L_004F5334;
    case 237u: goto L_004F5344;
    case 238u: goto L_004F5354;
    case 239u: goto L_004F5380;
    case 240u: goto L_004F5390;
    case 241u: goto L_004F53A0;
    case 242u: goto L_004F53CC;
    case 243u: goto L_004F53DC;
    case 244u: goto L_004F53EC;
    case 245u: goto L_004F540C;
    case 246u: goto L_004F541C;
    case 247u: goto L_004F542C;
    case 248u: goto L_004F5458;
    case 249u: goto L_004F5468;
    case 250u: goto L_004F5478;
    case 251u: goto L_004F5498;
    case 252u: goto L_004F54A8;
    case 253u: goto L_004F54B8;
    case 254u: goto L_004F54E0;
    case 255u: goto L_004F54F0;
    case 256u: goto L_004F5500;
    case 257u: goto L_004F5520;
    case 258u: goto L_004F552C;
    case 259u: goto L_004F553C;
    case 260u: goto L_004F5550;
    case 261u: goto L_004F5560;
    case 262u: goto L_004F5570;
    case 263u: goto L_004F5594;
    case 264u: goto L_004F55A4;
    case 265u: goto L_004F55B4;
    case 266u: goto L_004F55D8;
    case 267u: goto L_004F55E4;
    case 268u: goto L_004F5610;
    case 269u: goto L_004F561C;
    case 270u: goto L_004F562C;
    case 271u: goto L_004F5648;
    case 272u: goto L_004F5658;
    case 273u: goto L_004F5664;
    case 274u: goto L_004F566C;
    case 275u: goto L_004F5678;
    case 276u: goto L_004F5684;
    case 277u: goto L_004F5694;
    case 278u: goto L_004F56A0;
    case 279u: goto L_004F56B0;
    case 280u: goto L_004F56C0;
    case 281u: goto L_004F56FC;
    case 282u: goto L_004F5720;
    case 283u: goto L_004F573C;
    case 284u: goto L_004F575C;
    case 285u: goto L_004F57C0;
    case 286u: goto L_004F57E4;
    case 287u: goto L_004F57FC;
    case 288u: goto L_004F5810;
    case 289u: goto L_004F5848;
    case 290u: goto L_004F586C;
    case 291u: goto L_004F5888;
    case 292u: goto L_004F58A8;
    case 293u: goto L_004F5900;
    case 294u: goto L_004F5924;
    case 295u: goto L_004F5940;
    case 296u: goto L_004F5960;
    case 297u: goto L_004F59C4;
    case 298u: goto L_004F59E8;
    case 299u: goto L_004F5A00;
    case 300u: goto L_004F5A14;
    case 301u: goto L_004F5A4C;
    case 302u: goto L_004F5A70;
    case 303u: goto L_004F5A8C;
    case 304u: goto L_004F5AAC;
    case 305u: goto L_004F5B10;
    case 306u: goto L_004F5B34;
    case 307u: goto L_004F5B50;
    case 308u: goto L_004F5B60;
    case 309u: goto L_004F5B9C;
    case 310u: goto L_004F5BC0;
    case 311u: goto L_004F5BD8;
    case 312u: goto L_004F5BEC;
    case 313u: goto L_004F5C24;
    case 314u: goto L_004F5C48;
    case 315u: goto L_004F5C64;
    case 316u: goto L_004F5C84;
    case 317u: goto L_004F5CF4;
    case 318u: goto L_004F5D18;
    case 319u: goto L_004F5D34;
    case 320u: goto L_004F5D54;
    case 321u: goto L_004F5DB8;
    case 322u: goto L_004F5DDC;
    case 323u: goto L_004F5DF8;
    case 324u: goto L_004F5E08;
    case 325u: goto L_004F5E44;
    case 326u: goto L_004F5E68;
    case 327u: goto L_004F5E84;
    case 328u: goto L_004F5EA4;
    case 329u: goto L_004F5EFC;
    case 330u: goto L_004F5F20;
    case 331u: goto L_004F5F3C;
    case 332u: goto L_004F5F5C;
    case 333u: goto L_004F5FB4;
    case 334u: goto L_004F5FD8;
    case 335u: goto L_004F5FF4;
    case 336u: goto L_004F6004;
    case 337u: goto L_004F6040;
    case 338u: goto L_004F6064;
    case 339u: goto L_004F6080;
    case 340u: goto L_004F60A0;
    case 341u: goto L_004F6104;
    case 342u: goto L_004F6128;
    case 343u: goto L_004F6144;
    case 344u: goto L_004F6154;
    case 345u: goto L_004F6190;
    case 346u: goto L_004F61B4;
    case 347u: goto L_004F61D0;
    case 348u: goto L_004F61F0;
    case 349u: goto L_004F6254;
    case 350u: goto L_004F6278;
    case 351u: goto L_004F6294;
    case 352u: goto L_004F62B4;
    case 353u: goto L_004F630C;
    case 354u: goto L_004F6330;
    case 355u: goto L_004F634C;
    case 356u: goto L_004F636C;
    case 357u: goto L_004F63C4;
    case 358u: goto L_004F63E8;
    case 359u: goto L_004F6404;
    case 360u: goto L_004F6424;
    case 361u: goto L_004F647C;
    case 362u: goto L_004F64A0;
    case 363u: goto L_004F64BC;
    case 364u: goto L_004F64DC;
    case 365u: goto L_004F6540;
    case 366u: goto L_004F6564;
    case 367u: goto L_004F6580;
    case 368u: goto L_004F65A0;
    case 369u: goto L_004F65F8;
    case 370u: goto L_004F661C;
    case 371u: goto L_004F6638;
    case 372u: goto L_004F6658;
    case 373u: goto L_004F66B0;
    case 374u: goto L_004F66D4;
    case 375u: goto L_004F66F0;
    case 376u: goto L_004F6710;
    case 377u: goto L_004F6774;
    case 378u: goto L_004F6798;
    case 379u: goto L_004F67B4;
    case 380u: goto L_004F67D4;
    case 381u: goto L_004F6838;
    case 382u: goto L_004F685C;
    case 383u: goto L_004F6870;
    case 384u: goto L_004F6878;
    case 385u: goto L_004F6880;
    case 386u: goto L_004F6898;
    case 387u: goto L_004F68B0;
    case 388u: goto L_004F68C0;
    case 389u: goto L_004F68D0;
    case 390u: goto L_004F68DC;
    case 391u: goto L_004F68F0;
    case 392u: goto L_004F68FC;
    case 393u: goto L_004F6910;
    case 394u: goto L_004F6924;
    case 395u: goto L_004F6934;
    case 396u: goto L_004F6940;
    case 397u: goto L_004F694C;
    case 398u: goto L_004F6964;
    case 399u: goto L_004F6974;
    case 400u: goto L_004F6984;
    case 401u: goto L_004F6990;
    case 402u: goto L_004F69A4;
    case 403u: goto L_004F69B0;
    case 404u: goto L_004F69C4;
    case 405u: goto L_004F69D8;
    case 406u: goto L_004F69E8;
    case 407u: goto L_004F69F4;
    case 408u: goto L_004F6A00;
    case 409u: goto L_004F6A18;
    case 410u: goto L_004F6A28;
    case 411u: goto L_004F6A38;
    case 412u: goto L_004F6A44;
    case 413u: goto L_004F6A58;
    case 414u: goto L_004F6A64;
    case 415u: goto L_004F6A78;
    case 416u: goto L_004F6A8C;
    case 417u: goto L_004F6A9C;
    case 418u: goto L_004F6AA8;
    case 419u: goto L_004F6AB4;
    case 420u: goto L_004F6ACC;
    case 421u: goto L_004F6ADC;
    case 422u: goto L_004F6AEC;
    case 423u: goto L_004F6AF8;
    case 424u: goto L_004F6B0C;
    case 425u: goto L_004F6B18;
    case 426u: goto L_004F6B2C;
    case 427u: goto L_004F6B40;
    case 428u: goto L_004F6B50;
    case 429u: goto L_004F6B5C;
    case 430u: goto L_004F6B6C;
    case 431u: goto L_004F6B78;
    case 432u: goto L_004F6B90;
    case 433u: goto L_004F6BB0;
    case 434u: goto L_004F6BE8;
    case 435u: goto L_004F6BEC;
    case 436u: goto L_004F6C14;
    case 437u: goto L_004F6C28;
    case 438u: goto L_004F6C34;
    case 439u: goto L_004F6C68;
    case 440u: goto L_004F6C7C;
    case 441u: goto L_004F6C88;
    case 442u: goto L_004F6CBC;
    case 443u: goto L_004F6CCC;
    case 444u: goto L_004F6CD4;
    case 445u: goto L_004F6CE0;
    case 446u: goto L_004F6CEC;
    case 447u: goto L_004F6CF4;
    case 448u: goto L_004F6CFC;
    case 449u: goto L_004F6D08;
    case 450u: goto L_004F6D14;
    case 451u: goto L_004F6D1C;
    case 452u: goto L_004F6D28;
    case 453u: goto L_004F6D38;
    case 454u: goto L_004F6D54;
    case 455u: goto L_004F6D5C;
    case 456u: goto L_004F6D6C;
    case 457u: goto L_004F6D7C;
    case 458u: goto L_004F6D88;
    case 459u: goto L_004F6D94;
    case 460u: goto L_004F6DA4;
    case 461u: goto L_004F6DC0;
    case 462u: goto L_004F6DD8;
    case 463u: goto L_004F6DE0;
    case 464u: goto L_004F6DF0;
    case 465u: goto L_004F6E00;
    case 466u: goto L_004F6E0C;
    case 467u: goto L_004F6E30;
    case 468u: goto L_004F6E50;
    case 469u: goto L_004F6E68;
    case 470u: goto L_004F6E80;
    case 471u: goto L_004F6EA4;
    case 472u: goto L_004F6EC0;
    case 473u: goto L_004F6EDC;
    case 474u: goto L_004F6F10;
    case 475u: goto L_004F6F38;
    case 476u: goto L_004F6F50;
    case 477u: goto L_004F6F70;
    case 478u: goto L_004F6FB0;
    case 479u: goto L_004F6FC8;
    case 480u: goto L_004F6FE0;
    case 481u: goto L_004F7004;
    case 482u: goto L_004F7010;
    case 483u: goto L_004F7060;
    case 484u: goto L_004F7070;
    case 485u: goto L_004F70B0;
    case 486u: goto L_004F70C4;
    case 487u: goto L_004F70EC;
    case 488u: goto L_004F7114;
    case 489u: goto L_004F7150;
    case 490u: goto L_004F71A0;
    case 491u: goto L_004F71B8;
    case 492u: goto L_004F71D0;
    case 493u: goto L_004F7210;
    case 494u: goto L_004F721C;
    case 495u: goto L_004F7250;
    case 496u: goto L_004F7290;
    case 497u: goto L_004F72D8;
    case 498u: goto L_004F72EC;
    case 499u: goto L_004F72F8;
    case 500u: goto L_004F7304;
    case 501u: goto L_004F730C;
    case 502u: goto L_004F731C;
    case 503u: goto L_004F733C;
    case 504u: goto L_004F7350;
    case 505u: goto L_004F735C;
    case 506u: goto L_004F7368;
    case 507u: goto L_004F7370;
    case 508u: goto L_004F7380;
    case 509u: goto L_004F738C;
    case 510u: goto L_004F7398;
    case 511u: goto L_004F73A0;
    case 512u: goto L_004F73B0;
    case 513u: goto L_004F73DC;
    case 514u: goto L_004F73F0;
    case 515u: goto L_004F73FC;
    case 516u: goto L_004F7408;
    case 517u: goto L_004F7410;
    case 518u: goto L_004F7420;
    case 519u: goto L_004F7440;
    case 520u: goto L_004F7454;
    case 521u: goto L_004F7460;
    case 522u: goto L_004F746C;
    case 523u: goto L_004F7474;
    case 524u: goto L_004F7484;
    case 525u: goto L_004F7490;
    case 526u: goto L_004F749C;
    case 527u: goto L_004F74A4;
    case 528u: goto L_004F74B4;
    case 529u: goto L_004F74F4;
    case 530u: goto L_004F7504;
    case 531u: goto L_004F7520;
    case 532u: goto L_004F7534;
    case 533u: goto L_004F7540;
    case 534u: goto L_004F7550;
    case 535u: goto L_004F7590;
    case 536u: goto L_004F75A0;
    case 537u: goto L_004F75B0;
    case 538u: goto L_004F75E4;
    case 539u: goto L_004F7608;
    case 540u: goto L_004F763C;
    case 541u: goto L_004F767C;
    case 542u: goto L_004F768C;
    case 543u: goto L_004F76B0;
    case 544u: goto L_004F76E0;
    case 545u: goto L_004F7710;
    case 546u: goto L_004F776C;
    case 547u: goto L_004F7774;
    case 548u: goto L_004F7780;
    case 549u: goto L_004F779C;
    case 550u: goto L_004F77FC;
    case 551u: goto L_004F7840;
    case 552u: goto L_004F7850;
    case 553u: goto L_004F7860;
    case 554u: goto L_004F7884;
    case 555u: goto L_004F78A4;
    case 556u: goto L_004F78AC;
    case 557u: goto L_004F78E0;
    case 558u: goto L_004F78F4;
    case 559u: goto L_004F792C;
    case 560u: goto L_004F7960;
    case 561u: goto L_004F797C;
    case 562u: goto L_004F7990;
    case 563u: goto L_004F79AC;
    case 564u: goto L_004F79C0;
    case 565u: goto L_004F79E0;
    case 566u: goto L_004F79FC;
    case 567u: goto L_004F7A10;
    case 568u: goto L_004F7A2C;
    case 569u: goto L_004F7A40;
    case 570u: goto L_004F7A5C;
    case 571u: goto L_004F7A70;
    case 572u: goto L_004F7A94;
    case 573u: goto L_004F7AAC;
    case 574u: goto L_004F7AB8;
    case 575u: goto L_004F7AD0;
    case 576u: goto L_004F7AFC;
    case 577u: goto L_004F7B10;
    case 578u: goto L_004F7B30;
    case 579u: goto L_004F7B44;
    case 580u: goto L_004F7B64;
    case 581u: goto L_004F7B84;
    case 582u: goto L_004F7BA0;
    case 583u: goto L_004F7BC0;
    case 584u: goto L_004F7BD4;
    case 585u: goto L_004F7BE8;
    case 586u: goto L_004F7C00;
    case 587u: goto L_004F7C10;
    case 588u: goto L_004F7C44;
    case 589u: goto L_004F7C58;
    case 590u: goto L_004F7C6C;
    case 591u: goto L_004F7C8C;
    case 592u: goto L_004F7CA0;
    case 593u: goto L_004F7CB4;
    case 594u: goto L_004F7CD4;
    case 595u: goto L_004F7CE8;
    case 596u: goto L_004F7D00;
    case 597u: goto L_004F7D24;
    case 598u: goto L_004F7D34;
    case 599u: goto L_004F7D50;
    case 600u: goto L_004F7D60;
    case 601u: goto L_004F7D7C;
    case 602u: goto L_004F7D90;
    case 603u: goto L_004F7DA0;
    case 604u: goto L_004F7DAC;
    case 605u: goto L_004F7DC4;
    case 606u: goto L_004F7DE4;
    case 607u: goto L_004F7DF4;
    case 608u: goto L_004F7E10;
    case 609u: goto L_004F7E24;
    case 610u: goto L_004F7E34;
    case 611u: goto L_004F7E58;
    case 612u: goto L_004F7E68;
    case 613u: goto L_004F7E94;
    case 614u: goto L_004F7EA4;
    case 615u: goto L_004F7EC4;
    case 616u: goto L_004F7EDC;
    case 617u: goto L_004F7F10;
    case 618u: goto L_004F7F24;
    case 619u: goto L_004F7F34;
    case 620u: goto L_004F7F4C;
    case 621u: goto L_004F7F5C;
    case 622u: goto L_004F7F70;
    case 623u: goto L_004F7F8C;
    case 624u: goto L_004F7FA0;
    case 625u: goto L_004F7FB0;
    case 626u: goto L_004F7FC4;
    case 627u: goto L_004F7FD4;
    case 628u: goto L_004F7FE8;
    case 629u: goto L_004F7FF8;
    default: bad_entry(c, 0x004F4000u); return;
    }
L_004F4000:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4010u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F4010u) [[unlikely]] return; }
L_004F4010:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F402C; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4024u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4024u) [[unlikely]] return; }
L_004F4024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004F4154; } }
L_004F402C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_004F403C; }
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_004F403C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4044u);  if (depth < kMaxDepth) unit_00FD(c, 480u, depth + 1u); else { c.pc = 0x004F6FE0u; return; } if (c.pc != 0x004F4044u) [[unlikely]] return; }
L_004F4044:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4050u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 407u, depth + 1u); else { c.pc = 0x0047F530u; return; } if (c.pc != 0x004F4050u) [[unlikely]] return; }
L_004F4050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4058u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004F4058u) [[unlikely]] return; }
L_004F4058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 76u)));  if (t) { goto L_004F4104; } }
L_004F4060:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_004F40FC; }
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[6].w[0] + 14000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F408Cu); set32(c.r[7], c.r[7].w[0] + 13933u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004F408Cu) [[unlikely]] return; }
L_004F408C:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_004F40A0; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_004F40A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F40A8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004F40A8u) [[unlikely]] return; }
L_004F40A8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F40B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F40B4u) [[unlikely]] return; }
L_004F40B4:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  goto L_004F40DC; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 80u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_004F40DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F40F8; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 88u)));  goto L_004F40F0; }
    set32(c.r[5], c.r[29].w[0] + 81u);
    c.budget -= 1;
L_004F40F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F40F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 419u, depth + 1u); else { c.pc = 0x0047F6E0u; return; } if (c.pc != 0x004F40F8u) [[unlikely]] return; }
L_004F40F8:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_004F40FC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_004F4104:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F4060u | kUnwind; return; } goto L_004F4060; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4138u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 392u, depth + 1u); else { c.pc = 0x0047F310u; return; } if (c.pc != 0x004F4138u) [[unlikely]] return; }
L_004F4138:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4144u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4144u) [[unlikely]] return; }
L_004F4144:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4150u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4150u) [[unlikely]] return; }
L_004F4150:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004F4154:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004F4170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004F41AC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F41A0u); set32(c.r[5], ld32((c.r[2].w[0] - 4u)));  if (depth < kMaxDepth) unit_00FD(c, 21u, depth + 1u); else { c.pc = 0x004F4220u; return; } if (c.pc != 0x004F41A0u) [[unlikely]] return; }
L_004F41A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 3;
L_004F41AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004F41C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[7], c.r[17].w[0] + 80u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F41F8u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x004F41F8u) [[unlikely]] return; }
L_004F41F8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4204u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 21u, depth + 1u); else { c.pc = 0x004F4220u; return; } if (c.pc != 0x004F4204u) [[unlikely]] return; }
L_004F4204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F420Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 551u, depth + 1u); else { c.pc = 0x004F3FA0u; return; } if (c.pc != 0x004F420Cu) [[unlikely]] return; }
L_004F420C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F4220:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4240u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 498u, depth + 1u); else { c.pc = 0x004F3AE0u; return; } if (c.pc != 0x004F4240u) [[unlikely]] return; }
L_004F4240:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[18].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  goto L_004F4274; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_004F43D0; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 1024u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4268u); set32(c.r[6], c.r[6].w[0] + 14017u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004F4268u) [[unlikely]] return; }
L_004F4268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F43CC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 1;
L_004F4274:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4280u); set32(c.r[5], c.r[5].w[0] + 14071u);  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x004F4280u) [[unlikely]] return; }
L_004F4280:
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4290u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 60u, depth + 1u); else { c.pc = 0x0019CF90u; return; } if (c.pc != 0x004F4290u) [[unlikely]] return; }
L_004F4290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4298u);  if (depth < kMaxDepth) unit_0029(c, 108u, depth + 1u); else { c.pc = 0x001A5B50u; return; } if (c.pc != 0x004F4298u) [[unlikely]] return; }
L_004F4298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F42A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 46u, depth + 1u); else { c.pc = 0x001A4880u; return; } if (c.pc != 0x004F42A0u) [[unlikely]] return; }
L_004F42A0:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { set32(c.r[17], ld32((c.r[16].w[0] + 80u)));  goto L_004F42D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F42B0u);  if (depth < kMaxDepth) unit_0029(c, 108u, depth + 1u); else { c.pc = 0x001A5B50u; return; } if (c.pc != 0x004F42B0u) [[unlikely]] return; }
L_004F42B0:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F42C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F42C0u) [[unlikely]] return; }
L_004F42C0:
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F42D0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 60u, depth + 1u); else { c.pc = 0x0019CF90u; return; } if (c.pc != 0x004F42D0u) [[unlikely]] return; }
L_004F42D0:
    set32(c.r[17], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_004F42D4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), c.r[18].w[0]);  goto L_004F4324; }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F42F0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F42F0u) [[unlikely]] return; }
L_004F42F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F42FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x004F42FCu) [[unlikely]] return; }
L_004F42FC:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4308u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x004F4308u) [[unlikely]] return; }
L_004F4308:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F4320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4320u); set32(c.r[5], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0027(c, 186u, depth + 1u); else { c.pc = 0x0019EEA0u; return; } if (c.pc != 0x004F4320u) [[unlikely]] return; }
L_004F4320:
    st32((c.r[16].w[0] + 80u), c.r[18].w[0]);
    c.budget -= 1;
L_004F4324:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004F43CC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4340u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F4340u) [[unlikely]] return; }
L_004F4340:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F434Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x004F434Cu) [[unlikely]] return; }
L_004F434C:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4358u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x004F4358u) [[unlikely]] return; }
L_004F4358:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 80u)));  goto L_004F437C; }
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F4378; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4378u); set32(c.r[5], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0027(c, 194u, depth + 1u); else { c.pc = 0x0019F0E0u; return; } if (c.pc != 0x004F4378u) [[unlikely]] return; }
L_004F4378:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_004F437C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F438Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 60u, depth + 1u); else { c.pc = 0x0019CF90u; return; } if (c.pc != 0x004F438Cu) [[unlikely]] return; }
L_004F438C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4394u);  if (depth < kMaxDepth) unit_0029(c, 108u, depth + 1u); else { c.pc = 0x001A5B50u; return; } if (c.pc != 0x004F4394u) [[unlikely]] return; }
L_004F4394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F439Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 46u, depth + 1u); else { c.pc = 0x001A4880u; return; } if (c.pc != 0x004F439Cu) [[unlikely]] return; }
L_004F439C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004F43CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F43ACu);  if (depth < kMaxDepth) unit_0029(c, 108u, depth + 1u); else { c.pc = 0x001A5B50u; return; } if (c.pc != 0x004F43ACu) [[unlikely]] return; }
L_004F43AC:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F43BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F43BCu) [[unlikely]] return; }
L_004F43BC:
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F43CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 60u, depth + 1u); else { c.pc = 0x0019CF90u; return; } if (c.pc != 0x004F43CCu) [[unlikely]] return; }
L_004F43CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004F43D0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004F43F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 5;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_004F448C; }
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 169u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 28808u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4420u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 200u, depth + 1u); else { c.pc = 0x00145AB0u; return; } if (c.pc != 0x004F4420u) [[unlikely]] return; }
L_004F4420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_004F4478; } }
L_004F4428:
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 44u));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 36u)));  goto L_004F4448; }
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_004F4450; } }
L_004F4448:
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 2;
L_004F4450:
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 36u)));  goto L_004F4468; }
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
L_004F4468:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 36u)));  goto L_004F447C; }
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 1;
L_004F4478:
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 1;
L_004F447C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F4428u | kUnwind; return; } goto L_004F4428; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004F4514; } }
L_004F448C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_004F4510; } }
    st8((c.r[4].w[0] + 169u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 28808u)));
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F44ACu); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 200u, depth + 1u); else { c.pc = 0x00145AB0u; return; } if (c.pc != 0x004F44ACu) [[unlikely]] return; }
L_004F44AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 20u)));  if (t) { goto L_004F4508; } }
L_004F44B4:
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 28u));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 20u)));  goto L_004F44D4; }
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_004F44DC; } }
L_004F44D4:
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 2;
L_004F44DC:
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 20u)));  goto L_004F44F4; }
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
L_004F44F4:
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004F4504; } }
    st32((c.r[29].w[0] + 20u), 0u);
    c.budget -= 1;
L_004F4504:
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 1;
L_004F4508:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F44B4u | kUnwind; return; } goto L_004F44B4; }
L_004F4510:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004F4514:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F4520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22500u)));
    st8((c.r[2].w[0] + 168u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F454Cu); c.f[20] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F454Cu) [[unlikely]] return; }
L_004F454C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4554u);  if (depth < kMaxDepth) unit_0029(c, 108u, depth + 1u); else { c.pc = 0x001A5B50u; return; } if (c.pc != 0x004F4554u) [[unlikely]] return; }
L_004F4554:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4568u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F4568u) [[unlikely]] return; }
L_004F4568:
    set32(c.r[2], ld32((c.r[28].w[0] - 22500u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 169u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F4584; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 24560u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4584u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00D6(c, 251u, depth + 1u); else { c.pc = 0x00459D50u; return; } if (c.pc != 0x004F4584u) [[unlikely]] return; }
L_004F4584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F458Cu);  if (depth < kMaxDepth) unit_0023(c, 91u, depth + 1u); else { c.pc = 0x0018D700u; return; } if (c.pc != 0x004F458Cu) [[unlikely]] return; }
L_004F458C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F459Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F459Cu) [[unlikely]] return; }
L_004F459C:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F45A8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00FC(c, 478u, depth + 1u); else { c.pc = 0x004F3850u; return; } if (c.pc != 0x004F45A8u) [[unlikely]] return; }
L_004F45A8:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 2;
L_004F45B0:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 128u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_004F45D8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F45D4u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F45D4u) [[unlikely]] return; }
L_004F45D4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004F45D8:
    c.r[3].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 22500u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F45B0u | kUnwind; return; } goto L_004F45B0; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F4600:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0019C7F0u | kUnwind; return; } [[clang::musttail]] return unit_0027(c, 36u, depth); }
L_004F4610:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 22500u), 0u);  goto L_004F4638; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4634u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F4634u) [[unlikely]] return; }
L_004F4634:
    st32((c.r[28].w[0] - 22500u), 0u);
    c.budget -= 1;
L_004F4638:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004F4650:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4668u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0027(c, 184u, depth + 1u); else { c.pc = 0x0019EE50u; return; } if (c.pc != 0x004F4668u) [[unlikely]] return; }
L_004F4668:
    set32(c.r[4], 0u + 188u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4674u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F4674u) [[unlikely]] return; }
L_004F4674:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004F4688; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4684u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 219u, depth + 1u); else { c.pc = 0x004F5170u; return; } if (c.pc != 0x004F4684u) [[unlikely]] return; }
L_004F4684:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004F4688:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004F46A0:
    set32(c.r[29], c.r[29].w[0] - 912u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F46B4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00BD(c, 392u, depth + 1u); else { c.pc = 0x003F7660u; return; } if (c.pc != 0x004F46B4u) [[unlikely]] return; }
L_004F46B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F46BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 390u, depth + 1u); else { c.pc = 0x003F7600u; return; } if (c.pc != 0x004F46BCu) [[unlikely]] return; }
L_004F46BC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004F46D4; }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 14086u);  if (t) { goto L_004F46D8; } }
L_004F46D4:
    set32(c.r[16], c.r[16].w[0] + 14091u);
    c.budget -= 1;
L_004F46D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F46E8u); set32(c.r[5], c.r[5].w[0] + 14095u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004F46E8u) [[unlikely]] return; }
L_004F46E8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 880u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + 14113u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4700u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004F4700u) [[unlikely]] return; }
L_004F4700:
    set32(c.r[4], c.r[29].w[0] + 848u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F470Cu); set32(c.r[5], c.r[29].w[0] + 880u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x004F470Cu) [[unlikely]] return; }
L_004F470C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 896u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4720u); set32(c.r[7], c.r[29].w[0] + 848u);  if (depth < kMaxDepth) unit_0013(c, 130u, depth + 1u); else { c.pc = 0x0014D240u; return; } if (c.pc != 0x004F4720u) [[unlikely]] return; }
L_004F4720:
    set32(c.r[4], c.r[29].w[0] + 848u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F472Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x004F472Cu) [[unlikely]] return; }
L_004F472C:
    set32(c.r[4], c.r[29].w[0] + 880u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4738u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4738u) [[unlikely]] return; }
L_004F4738:
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4744u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4744u) [[unlikely]] return; }
L_004F4744:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 832u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4754u); set32(c.r[5], c.r[5].w[0] + 14146u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004F4754u) [[unlikely]] return; }
L_004F4754:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 816u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + 14171u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F476Cu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004F476Cu) [[unlikely]] return; }
L_004F476C:
    set32(c.r[4], c.r[29].w[0] + 784u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4778u); set32(c.r[5], c.r[29].w[0] + 816u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x004F4778u) [[unlikely]] return; }
L_004F4778:
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F478Cu); set32(c.r[7], c.r[29].w[0] + 784u);  if (depth < kMaxDepth) unit_0013(c, 130u, depth + 1u); else { c.pc = 0x0014D240u; return; } if (c.pc != 0x004F478Cu) [[unlikely]] return; }
L_004F478C:
    set32(c.r[4], c.r[29].w[0] + 784u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4798u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x004F4798u) [[unlikely]] return; }
L_004F4798:
    set32(c.r[4], c.r[29].w[0] + 816u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F47A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F47A4u) [[unlikely]] return; }
L_004F47A4:
    set32(c.r[4], c.r[29].w[0] + 832u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F47B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F47B0u) [[unlikely]] return; }
L_004F47B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F47C0u); set32(c.r[5], c.r[5].w[0] + 14211u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004F47C0u) [[unlikely]] return; }
L_004F47C0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 752u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + 14229u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F47D8u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004F47D8u) [[unlikely]] return; }
L_004F47D8:
    set32(c.r[4], c.r[29].w[0] + 720u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F47E4u); set32(c.r[5], c.r[29].w[0] + 752u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x004F47E4u) [[unlikely]] return; }
L_004F47E4:
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 768u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F47F8u); set32(c.r[7], c.r[29].w[0] + 720u);  if (depth < kMaxDepth) unit_0013(c, 130u, depth + 1u); else { c.pc = 0x0014D240u; return; } if (c.pc != 0x004F47F8u) [[unlikely]] return; }
L_004F47F8:
    set32(c.r[4], c.r[29].w[0] + 720u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4804u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x004F4804u) [[unlikely]] return; }
L_004F4804:
    set32(c.r[4], c.r[29].w[0] + 752u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4810u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4810u) [[unlikely]] return; }
L_004F4810:
    set32(c.r[4], c.r[29].w[0] + 768u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F481Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F481Cu) [[unlikely]] return; }
L_004F481C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 704u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F482Cu); set32(c.r[5], c.r[5].w[0] + 14262u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004F482Cu) [[unlikely]] return; }
L_004F482C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 688u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + 14287u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4844u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004F4844u) [[unlikely]] return; }
L_004F4844:
    set32(c.r[4], c.r[29].w[0] + 656u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4850u); set32(c.r[5], c.r[29].w[0] + 688u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x004F4850u) [[unlikely]] return; }
L_004F4850:
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4864u); set32(c.r[7], c.r[29].w[0] + 656u);  if (depth < kMaxDepth) unit_0013(c, 130u, depth + 1u); else { c.pc = 0x0014D240u; return; } if (c.pc != 0x004F4864u) [[unlikely]] return; }
L_004F4864:
    set32(c.r[4], c.r[29].w[0] + 656u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4870u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x004F4870u) [[unlikely]] return; }
L_004F4870:
    set32(c.r[4], c.r[29].w[0] + 688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F487Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F487Cu) [[unlikely]] return; }
L_004F487C:
    set32(c.r[4], c.r[29].w[0] + 704u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4888u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4888u) [[unlikely]] return; }
L_004F4888:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 640u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4898u); set32(c.r[5], c.r[5].w[0] + 14327u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004F4898u) [[unlikely]] return; }
L_004F4898:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 624u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + 14345u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F48B0u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004F48B0u) [[unlikely]] return; }
L_004F48B0:
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F48BCu); set32(c.r[5], c.r[29].w[0] + 624u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x004F48BCu) [[unlikely]] return; }
L_004F48BC:
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F48D0u); set32(c.r[7], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_0013(c, 130u, depth + 1u); else { c.pc = 0x0014D240u; return; } if (c.pc != 0x004F48D0u) [[unlikely]] return; }
L_004F48D0:
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F48DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x004F48DCu) [[unlikely]] return; }
L_004F48DC:
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F48E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F48E8u) [[unlikely]] return; }
L_004F48E8:
    set32(c.r[4], c.r[29].w[0] + 640u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F48F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F48F4u) [[unlikely]] return; }
L_004F48F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 576u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4904u); set32(c.r[5], c.r[5].w[0] + 14378u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004F4904u) [[unlikely]] return; }
L_004F4904:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 560u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + 14392u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F491Cu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004F491Cu) [[unlikely]] return; }
L_004F491C:
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4928u); set32(c.r[5], c.r[29].w[0] + 560u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x004F4928u) [[unlikely]] return; }
L_004F4928:
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 576u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F493Cu); set32(c.r[7], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_0013(c, 130u, depth + 1u); else { c.pc = 0x0014D240u; return; } if (c.pc != 0x004F493Cu) [[unlikely]] return; }
L_004F493C:
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4948u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x004F4948u) [[unlikely]] return; }
L_004F4948:
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4954u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4954u) [[unlikely]] return; }
L_004F4954:
    set32(c.r[4], c.r[29].w[0] + 576u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4960u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4960u) [[unlikely]] return; }
L_004F4960:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4970u); set32(c.r[5], c.r[5].w[0] + 14421u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004F4970u) [[unlikely]] return; }
L_004F4970:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 496u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + 14438u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4988u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004F4988u) [[unlikely]] return; }
L_004F4988:
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4994u); set32(c.r[5], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x004F4994u) [[unlikely]] return; }
L_004F4994:
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 512u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F49A8u); set32(c.r[7], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_0013(c, 130u, depth + 1u); else { c.pc = 0x0014D240u; return; } if (c.pc != 0x004F49A8u) [[unlikely]] return; }
L_004F49A8:
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F49B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x004F49B4u) [[unlikely]] return; }
L_004F49B4:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F49C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F49C0u) [[unlikely]] return; }
L_004F49C0:
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F49CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F49CCu) [[unlikely]] return; }
L_004F49CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F49DCu); set32(c.r[5], c.r[5].w[0] + 14470u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004F49DCu) [[unlikely]] return; }
L_004F49DC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 432u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + 14487u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F49F4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004F49F4u) [[unlikely]] return; }
L_004F49F4:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4A00u); set32(c.r[5], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x004F4A00u) [[unlikely]] return; }
L_004F4A00:
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4A14u); set32(c.r[7], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_0013(c, 130u, depth + 1u); else { c.pc = 0x0014D240u; return; } if (c.pc != 0x004F4A14u) [[unlikely]] return; }
L_004F4A14:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4A20u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x004F4A20u) [[unlikely]] return; }
L_004F4A20:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4A2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4A2Cu) [[unlikely]] return; }
L_004F4A2C:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4A38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4A38u) [[unlikely]] return; }
L_004F4A38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4A48u); set32(c.r[5], c.r[5].w[0] + 14519u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004F4A48u) [[unlikely]] return; }
L_004F4A48:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + 14536u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4A60u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004F4A60u) [[unlikely]] return; }
L_004F4A60:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4A6Cu); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x004F4A6Cu) [[unlikely]] return; }
L_004F4A6C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4A80u); set32(c.r[7], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0013(c, 130u, depth + 1u); else { c.pc = 0x0014D240u; return; } if (c.pc != 0x004F4A80u) [[unlikely]] return; }
L_004F4A80:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4A8Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x004F4A8Cu) [[unlikely]] return; }
L_004F4A8C:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4A98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4A98u) [[unlikely]] return; }
L_004F4A98:
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4AA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4AA4u) [[unlikely]] return; }
L_004F4AA4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4AB4u); set32(c.r[5], c.r[5].w[0] + 14568u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004F4AB4u) [[unlikely]] return; }
L_004F4AB4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + 14582u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4ACCu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004F4ACCu) [[unlikely]] return; }
L_004F4ACC:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4AD8u); set32(c.r[5], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x004F4AD8u) [[unlikely]] return; }
L_004F4AD8:
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4AECu); set32(c.r[7], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0013(c, 130u, depth + 1u); else { c.pc = 0x0014D240u; return; } if (c.pc != 0x004F4AECu) [[unlikely]] return; }
L_004F4AEC:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4AF8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x004F4AF8u) [[unlikely]] return; }
L_004F4AF8:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4B04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4B04u) [[unlikely]] return; }
L_004F4B04:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4B10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4B10u) [[unlikely]] return; }
L_004F4B10:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4B20u); set32(c.r[5], c.r[5].w[0] + 14611u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004F4B20u) [[unlikely]] return; }
L_004F4B20:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4B38u); set32(c.r[6], c.r[6].w[0] + 14636u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004F4B38u) [[unlikely]] return; }
L_004F4B38:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4B44u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x004F4B44u) [[unlikely]] return; }
L_004F4B44:
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4B58u); set32(c.r[7], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0013(c, 130u, depth + 1u); else { c.pc = 0x0014D240u; return; } if (c.pc != 0x004F4B58u) [[unlikely]] return; }
L_004F4B58:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4B64u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x004F4B64u) [[unlikely]] return; }
L_004F4B64:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4B70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4B70u) [[unlikely]] return; }
L_004F4B70:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4B7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4B7Cu) [[unlikely]] return; }
L_004F4B7C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4B8Cu); set32(c.r[5], c.r[5].w[0] + 14095u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004F4B8Cu) [[unlikely]] return; }
L_004F4B8C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4B9Cu); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0013(c, 122u, depth + 1u); else { c.pc = 0x0014D140u; return; } if (c.pc != 0x004F4B9Cu) [[unlikely]] return; }
L_004F4B9C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4BA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4BA8u) [[unlikely]] return; }
L_004F4BA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4BB8u); set32(c.r[5], c.r[5].w[0] + 14146u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004F4BB8u) [[unlikely]] return; }
L_004F4BB8:
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4BC8u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0013(c, 122u, depth + 1u); else { c.pc = 0x0014D140u; return; } if (c.pc != 0x004F4BC8u) [[unlikely]] return; }
L_004F4BC8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4BD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4BD4u) [[unlikely]] return; }
L_004F4BD4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4BE4u); set32(c.r[5], c.r[5].w[0] + 14211u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004F4BE4u) [[unlikely]] return; }
L_004F4BE4:
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4BF4u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0013(c, 122u, depth + 1u); else { c.pc = 0x0014D140u; return; } if (c.pc != 0x004F4BF4u) [[unlikely]] return; }
L_004F4BF4:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4C00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4C00u) [[unlikely]] return; }
L_004F4C00:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4C10u); set32(c.r[5], c.r[5].w[0] + 14262u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004F4C10u) [[unlikely]] return; }
L_004F4C10:
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4C20u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0013(c, 122u, depth + 1u); else { c.pc = 0x0014D140u; return; } if (c.pc != 0x004F4C20u) [[unlikely]] return; }
L_004F4C20:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4C2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4C2Cu) [[unlikely]] return; }
L_004F4C2C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4C3Cu); set32(c.r[5], c.r[5].w[0] + 14327u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004F4C3Cu) [[unlikely]] return; }
L_004F4C3C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4C4Cu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0013(c, 122u, depth + 1u); else { c.pc = 0x0014D140u; return; } if (c.pc != 0x004F4C4Cu) [[unlikely]] return; }
L_004F4C4C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4C58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4C58u) [[unlikely]] return; }
L_004F4C58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4C68u); set32(c.r[5], c.r[5].w[0] + 14378u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004F4C68u) [[unlikely]] return; }
L_004F4C68:
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4C78u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0013(c, 122u, depth + 1u); else { c.pc = 0x0014D140u; return; } if (c.pc != 0x004F4C78u) [[unlikely]] return; }
L_004F4C78:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4C84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4C84u) [[unlikely]] return; }
L_004F4C84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4C94u); set32(c.r[5], c.r[5].w[0] + 14421u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004F4C94u) [[unlikely]] return; }
L_004F4C94:
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4CA4u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0013(c, 122u, depth + 1u); else { c.pc = 0x0014D140u; return; } if (c.pc != 0x004F4CA4u) [[unlikely]] return; }
L_004F4CA4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4CB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4CB0u) [[unlikely]] return; }
L_004F4CB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4CC0u); set32(c.r[5], c.r[5].w[0] + 14470u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004F4CC0u) [[unlikely]] return; }
L_004F4CC0:
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4CD0u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0013(c, 122u, depth + 1u); else { c.pc = 0x0014D140u; return; } if (c.pc != 0x004F4CD0u) [[unlikely]] return; }
L_004F4CD0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4CDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4CDCu) [[unlikely]] return; }
L_004F4CDC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4CECu); set32(c.r[5], c.r[5].w[0] + 14519u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004F4CECu) [[unlikely]] return; }
L_004F4CEC:
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4CFCu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0013(c, 122u, depth + 1u); else { c.pc = 0x0014D140u; return; } if (c.pc != 0x004F4CFCu) [[unlikely]] return; }
L_004F4CFC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4D08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4D08u) [[unlikely]] return; }
L_004F4D08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4D18u); set32(c.r[5], c.r[5].w[0] + 14568u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004F4D18u) [[unlikely]] return; }
L_004F4D18:
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4D28u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0013(c, 122u, depth + 1u); else { c.pc = 0x0014D140u; return; } if (c.pc != 0x004F4D28u) [[unlikely]] return; }
L_004F4D28:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4D34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4D34u) [[unlikely]] return; }
L_004F4D34:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4D44u); set32(c.r[5], c.r[5].w[0] + 14611u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004F4D44u) [[unlikely]] return; }
L_004F4D44:
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4D54u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0013(c, 122u, depth + 1u); else { c.pc = 0x0014D140u; return; } if (c.pc != 0x004F4D54u) [[unlikely]] return; }
L_004F4D54:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4D60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F4D60u) [[unlikely]] return; }
L_004F4D60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 912u);  c.pc = t; return; }
L_004F4D70:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004F5144; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 23184u);
    set32(c.r[2], c.r[2].w[0] - 23160u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4DB8u); set32(c.r[4], ld32((c.r[28].w[0] - 29004u)));  if (depth < kMaxDepth) unit_0010(c, 440u, depth + 1u); else { c.pc = 0x00143460u; return; } if (c.pc != 0x004F4DB8u) [[unlikely]] return; }
L_004F4DB8:
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 56u), 0u);  goto L_004F4DD8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4DD4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F4DD4u) [[unlikely]] return; }
L_004F4DD4:
    st32((c.r[18].w[0] + 56u), 0u);
    c.budget -= 1;
L_004F4DD8:
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4DE4u); set32(c.r[4], ld32((c.r[28].w[0] - 29004u)));  if (depth < kMaxDepth) unit_0010(c, 440u, depth + 1u); else { c.pc = 0x00143460u; return; } if (c.pc != 0x004F4DE4u) [[unlikely]] return; }
L_004F4DE4:
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 60u), 0u);  goto L_004F4E04; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4E00u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F4E00u) [[unlikely]] return; }
L_004F4E00:
    st32((c.r[18].w[0] + 60u), 0u);
    c.budget -= 1;
L_004F4E04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4E0Cu);  if (depth < kMaxDepth) unit_00CA(c, 255u, depth + 1u); else { c.pc = 0x00429990u; return; } if (c.pc != 0x004F4E0Cu) [[unlikely]] return; }
L_004F4E0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4E14u);  if (depth < kMaxDepth) unit_00E9(c, 151u, depth + 1u); else { c.pc = 0x004A5390u; return; } if (c.pc != 0x004F4E14u) [[unlikely]] return; }
L_004F4E14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4E1Cu);  if (depth < kMaxDepth) unit_00D6(c, 283u, depth + 1u); else { c.pc = 0x0045A190u; return; } if (c.pc != 0x004F4E1Cu) [[unlikely]] return; }
L_004F4E1C:
    set32(c.r[16], ld32((c.r[28].w[0] - 28808u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] + 14676u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4E30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x004F4E30u) [[unlikely]] return; }
L_004F4E30:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4E40u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 100u, depth + 1u); else { c.pc = 0x0019DB50u; return; } if (c.pc != 0x004F4E40u) [[unlikely]] return; }
L_004F4E40:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004F4E5C; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4E5Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F4E5Cu) [[unlikely]] return; }
L_004F4E5C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4E6Cu); set32(c.r[5], c.r[5].w[0] + 14691u);  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x004F4E6Cu) [[unlikely]] return; }
L_004F4E6C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4E7Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 100u, depth + 1u); else { c.pc = 0x0019DB50u; return; } if (c.pc != 0x004F4E7Cu) [[unlikely]] return; }
L_004F4E7C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004F4E98; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4E98u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F4E98u) [[unlikely]] return; }
L_004F4E98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4EA8u); set32(c.r[5], c.r[5].w[0] + 14071u);  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x004F4EA8u) [[unlikely]] return; }
L_004F4EA8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4EB8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 100u, depth + 1u); else { c.pc = 0x0019DB50u; return; } if (c.pc != 0x004F4EB8u) [[unlikely]] return; }
L_004F4EB8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004F4ED4; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4ED4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F4ED4u) [[unlikely]] return; }
L_004F4ED4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4EE4u); set32(c.r[5], c.r[5].w[0] + 14705u);  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x004F4EE4u) [[unlikely]] return; }
L_004F4EE4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4EF4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 100u, depth + 1u); else { c.pc = 0x0019DB50u; return; } if (c.pc != 0x004F4EF4u) [[unlikely]] return; }
L_004F4EF4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));  goto L_004F4F14; }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4F10u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F4F10u) [[unlikely]] return; }
L_004F4F10:
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.budget -= 1;
L_004F4F14:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 52u)));  goto L_004F4F30; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4F2Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F4F2Cu) [[unlikely]] return; }
L_004F4F2C:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 1;
L_004F4F30:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_004F4F4C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4F48u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F4F48u) [[unlikely]] return; }
L_004F4F48:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F4F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4F54u); st32((c.r[18].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0023(c, 90u, depth + 1u); else { c.pc = 0x0018D6E0u; return; } if (c.pc != 0x004F4F54u) [[unlikely]] return; }
L_004F4F54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4F5Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 92u, depth + 1u); else { c.pc = 0x0019D890u; return; } if (c.pc != 0x004F4F5Cu) [[unlikely]] return; }
L_004F4F5C:
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4F68u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 186u, depth + 1u); else { c.pc = 0x0019EEA0u; return; } if (c.pc != 0x004F4F68u) [[unlikely]] return; }
L_004F4F68:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004F4F74; } }
    set32(c.r[2], c.r[18].w[0] + 48u);
    c.budget -= 1;
L_004F4F74:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 100u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[16], c.r[2].w[0] + 28u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4F8Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 165u, depth + 1u); else { c.pc = 0x003D5B00u; return; } if (c.pc != 0x004F4F8Cu) [[unlikely]] return; }
L_004F4F8C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4F98u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 2u, depth + 1u); else { c.pc = 0x00418010u; return; } if (c.pc != 0x004F4F98u) [[unlikely]] return; }
L_004F4F98:
    set32(c.r[5], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[6], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4FACu); set32(c.r[7], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_00C5(c, 601u, depth + 1u); else { c.pc = 0x00417FC0u; return; } if (c.pc != 0x004F4FACu) [[unlikely]] return; }
L_004F4FAC:
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4FB8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 2u, depth + 1u); else { c.pc = 0x00418010u; return; } if (c.pc != 0x004F4FB8u) [[unlikely]] return; }
L_004F4FB8:
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4FC4u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_00C5(c, 600u, depth + 1u); else { c.pc = 0x00417FA0u; return; } if (c.pc != 0x004F4FC4u) [[unlikely]] return; }
L_004F4FC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F4FDC; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 104u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4FDCu); set32(c.r[4], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_00C5(c, 598u, depth + 1u); else { c.pc = 0x00417F70u; return; } if (c.pc != 0x004F4FDCu) [[unlikely]] return; }
L_004F4FDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4FE4u);  if (depth < kMaxDepth) unit_00E8(c, 197u, depth + 1u); else { c.pc = 0x004A19C0u; return; } if (c.pc != 0x004F4FE4u) [[unlikely]] return; }
L_004F4FE4:
    set32(c.r[4], ld32((c.r[28].w[0] - 28812u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 172u);  goto L_004F5004; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5000u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F5000u) [[unlikely]] return; }
L_004F5000:
    set32(c.r[2], c.r[18].w[0] + 172u);
    c.budget -= 1;
L_004F5004:
    st32((c.r[28].w[0] - 28812u), 0u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[28].w[0] - 22500u), 0u);  if (t) { goto L_004F5044; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[18].w[0] + 104u);  goto L_004F5048; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F5044; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F5044; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F5044; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F5044; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5044u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004F5044u) [[unlikely]] return; }
L_004F5044:
    set32(c.r[4], c.r[18].w[0] + 104u);
    c.budget -= 1;
L_004F5048:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 88u);  goto L_004F5078; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F5074; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F5074; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004F5074; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5074u);  if (depth < kMaxDepth) unit_00FD(c, 496u, depth + 1u); else { c.pc = 0x004F7290u; return; } if (c.pc != 0x004F5074u) [[unlikely]] return; }
L_004F5074:
    set32(c.r[2], c.r[18].w[0] + 88u);
    c.budget -= 1;
L_004F5078:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 64u);  goto L_004F50B8; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F50B4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F50B4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F50B4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F50B4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F50B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F50B4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004F50B4u) [[unlikely]] return; }
L_004F50B4:
    set32(c.r[2], c.r[18].w[0] + 64u);
    c.budget -= 1;
L_004F50B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 48u);  goto L_004F50F8; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F50F4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F50F4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F50F4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F50F4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F50F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F50F4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004F50F4u) [[unlikely]] return; }
L_004F50F4:
    set32(c.r[2], c.r[18].w[0] + 48u);
    c.budget -= 1;
L_004F50F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F510C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 25616u);
    st32((c.r[18].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 3;
L_004F510C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_004F5130; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17136u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F512Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 145u, depth + 1u); else { c.pc = 0x00199BA0u; return; } if (c.pc != 0x004F512Cu) [[unlikely]] return; }
L_004F512C:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_004F5130:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_004F5148; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5144u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004F5144u) [[unlikely]] return; }
L_004F5144:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004F5148:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004F5170:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[5], 0u + 8u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5194u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 156u, depth + 1u); else { c.pc = 0x00199E90u; return; } if (c.pc != 0x004F5194u) [[unlikely]] return; }
L_004F5194:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 17136u);
    set32(c.r[17], c.r[16].w[0] + 64u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25616u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 23184u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 23160u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F51D8u); st32((c.r[16].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004F51D8u) [[unlikely]] return; }
L_004F51D8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_004F51F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F51ECu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004F51ECu) [[unlikely]] return; }
L_004F51EC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_004F51F0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[17].w[0]), c.r[2].w[0]);  goto L_004F5204; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5200u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004F5200u) [[unlikely]] return; }
L_004F5200:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_004F5204:
    set32(c.r[5], c.r[29].w[0] + 144u);
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], c.r[29].w[0] + 156u);
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[4], c.r[16].w[0] + 104u);
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[6], c.r[29].w[0] + 152u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st32((c.r[29].w[0] + 152u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5244u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00FD(c, 543u, depth + 1u); else { c.pc = 0x004F76B0u; return; } if (c.pc != 0x004F5244u) [[unlikely]] return; }
L_004F5244:
    st8((c.r[16].w[0] + 170u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 64u);
    st32((c.r[16].w[0] + 172u), 0u);
    set32(c.r[5], 0u + 32u);
    st32((c.r[16].w[0] + 176u), 0u);
    st32((c.r[16].w[0] + 180u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5264u); st32((c.r[16].w[0] + 184u), 0u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x004F5264u) [[unlikely]] return; }
L_004F5264:
    set32(c.r[4], 0u + 28u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5274u); st32((c.r[28].w[0] - 22500u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F5274u) [[unlikely]] return; }
L_004F5274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F5288; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5288u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 328u, depth + 1u); else { c.pc = 0x0019BFB0u; return; } if (c.pc != 0x004F5288u) [[unlikely]] return; }
L_004F5288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5290u);  if (depth < kMaxDepth) unit_0026(c, 323u, depth + 1u); else { c.pc = 0x0019BE80u; return; } if (c.pc != 0x004F5290u) [[unlikely]] return; }
L_004F5290:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F52A0u); set32(c.r[5], c.r[5].w[0] + 13856u);  if (depth < kMaxDepth) unit_0026(c, 279u, depth + 1u); else { c.pc = 0x0019B540u; return; } if (c.pc != 0x004F52A0u) [[unlikely]] return; }
L_004F52A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F52A8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 205u, depth + 1u); else { c.pc = 0x004A1AD0u; return; } if (c.pc != 0x004F52A8u) [[unlikely]] return; }
L_004F52A8:
    set32(c.r[18], ld32((c.r[28].w[0] - 23300u)));
    set32(c.r[4], 0u + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F52B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F52B8u) [[unlikely]] return; }
L_004F52B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004F52D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F52C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 213u, depth + 1u); else { c.pc = 0x004A1BA0u; return; } if (c.pc != 0x004F52C8u) [[unlikely]] return; }
L_004F52C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 27616u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004F52D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F52E8u); set32(c.r[5], c.r[5].w[0] + 14721u);  if (depth < kMaxDepth) unit_00E8(c, 193u, depth + 1u); else { c.pc = 0x004A1970u; return; } if (c.pc != 0x004F52E8u) [[unlikely]] return; }
L_004F52E8:
    set32(c.r[18], ld32((c.r[28].w[0] - 23300u)));
    set32(c.r[4], 0u + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F52F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F52F8u) [[unlikely]] return; }
L_004F52F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004F5320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5308u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 213u, depth + 1u); else { c.pc = 0x004A1BA0u; return; } if (c.pc != 0x004F5308u) [[unlikely]] return; }
L_004F5308:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 32464u);
    set32(c.r[2], c.r[2].w[0] - 32400u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_004F5320:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5334u); set32(c.r[5], c.r[5].w[0] + 14730u);  if (depth < kMaxDepth) unit_00E8(c, 193u, depth + 1u); else { c.pc = 0x004A1970u; return; } if (c.pc != 0x004F5334u) [[unlikely]] return; }
L_004F5334:
    set32(c.r[18], ld32((c.r[28].w[0] - 23300u)));
    set32(c.r[4], 0u + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5344u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F5344u) [[unlikely]] return; }
L_004F5344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004F536C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5354u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 213u, depth + 1u); else { c.pc = 0x004A1BA0u; return; } if (c.pc != 0x004F5354u) [[unlikely]] return; }
L_004F5354:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 32464u);
    set32(c.r[2], c.r[2].w[0] - 32528u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_004F536C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5380u); set32(c.r[5], c.r[5].w[0] + 14748u);  if (depth < kMaxDepth) unit_00E8(c, 193u, depth + 1u); else { c.pc = 0x004A1970u; return; } if (c.pc != 0x004F5380u) [[unlikely]] return; }
L_004F5380:
    set32(c.r[18], ld32((c.r[28].w[0] - 23300u)));
    set32(c.r[4], 0u + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5390u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F5390u) [[unlikely]] return; }
L_004F5390:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004F53B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F53A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 213u, depth + 1u); else { c.pc = 0x004A1BA0u; return; } if (c.pc != 0x004F53A0u) [[unlikely]] return; }
L_004F53A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 32464u);
    set32(c.r[2], c.r[2].w[0] - 32592u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_004F53B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F53CCu); set32(c.r[5], c.r[5].w[0] + 14769u);  if (depth < kMaxDepth) unit_00E8(c, 193u, depth + 1u); else { c.pc = 0x004A1970u; return; } if (c.pc != 0x004F53CCu) [[unlikely]] return; }
L_004F53CC:
    set32(c.r[18], ld32((c.r[28].w[0] - 23300u)));
    set32(c.r[4], 0u + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F53DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F53DCu) [[unlikely]] return; }
L_004F53DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004F53F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F53ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 213u, depth + 1u); else { c.pc = 0x004A1BA0u; return; } if (c.pc != 0x004F53ECu) [[unlikely]] return; }
L_004F53EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 25584u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004F53F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F540Cu); set32(c.r[5], c.r[5].w[0] + 14789u);  if (depth < kMaxDepth) unit_00E8(c, 193u, depth + 1u); else { c.pc = 0x004A1970u; return; } if (c.pc != 0x004F540Cu) [[unlikely]] return; }
L_004F540C:
    set32(c.r[18], ld32((c.r[28].w[0] - 23300u)));
    set32(c.r[4], 0u + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F541Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F541Cu) [[unlikely]] return; }
L_004F541C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004F5444; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F542Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 213u, depth + 1u); else { c.pc = 0x004A1BA0u; return; } if (c.pc != 0x004F542Cu) [[unlikely]] return; }
L_004F542C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 32464u);
    set32(c.r[2], c.r[2].w[0] - 27008u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_004F5444:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5458u); set32(c.r[5], c.r[5].w[0] + 14808u);  if (depth < kMaxDepth) unit_00E8(c, 193u, depth + 1u); else { c.pc = 0x004A1970u; return; } if (c.pc != 0x004F5458u) [[unlikely]] return; }
L_004F5458:
    set32(c.r[18], ld32((c.r[28].w[0] - 23300u)));
    set32(c.r[4], 0u + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5468u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F5468u) [[unlikely]] return; }
L_004F5468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004F5484; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5478u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 213u, depth + 1u); else { c.pc = 0x004A1BA0u; return; } if (c.pc != 0x004F5478u) [[unlikely]] return; }
L_004F5478:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 32336u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004F5484:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5498u); set32(c.r[5], c.r[5].w[0] + 14827u);  if (depth < kMaxDepth) unit_00E8(c, 193u, depth + 1u); else { c.pc = 0x004A1970u; return; } if (c.pc != 0x004F5498u) [[unlikely]] return; }
L_004F5498:
    set32(c.r[18], ld32((c.r[28].w[0] - 23300u)));
    set32(c.r[4], 0u + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F54A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F54A8u) [[unlikely]] return; }
L_004F54A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004F54CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F54B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 213u, depth + 1u); else { c.pc = 0x004A1BA0u; return; } if (c.pc != 0x004F54B8u) [[unlikely]] return; }
L_004F54B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 27280u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 72u), 0u);
    c.budget -= 5;
L_004F54CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F54E0u); set32(c.r[5], c.r[5].w[0] + 14850u);  if (depth < kMaxDepth) unit_00E8(c, 193u, depth + 1u); else { c.pc = 0x004A1970u; return; } if (c.pc != 0x004F54E0u) [[unlikely]] return; }
L_004F54E0:
    set32(c.r[18], ld32((c.r[28].w[0] - 23300u)));
    set32(c.r[4], 0u + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F54F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F54F0u) [[unlikely]] return; }
L_004F54F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004F550C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5500u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 213u, depth + 1u); else { c.pc = 0x004A1BA0u; return; } if (c.pc != 0x004F5500u) [[unlikely]] return; }
L_004F5500:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 25520u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004F550C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5520u); set32(c.r[5], c.r[5].w[0] + 14863u);  if (depth < kMaxDepth) unit_00E8(c, 193u, depth + 1u); else { c.pc = 0x004A1970u; return; } if (c.pc != 0x004F5520u) [[unlikely]] return; }
L_004F5520:
    set32(c.r[4], 0u + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F552Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F552Cu) [[unlikely]] return; }
L_004F552C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 23300u)));  goto L_004F5540; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F553Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 95u, depth + 1u); else { c.pc = 0x0047CBC0u; return; } if (c.pc != 0x004F553Cu) [[unlikely]] return; }
L_004F553C:
    set32(c.r[4], ld32((c.r[28].w[0] - 23300u)));
    c.budget -= 1;
L_004F5540:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5550u); set32(c.r[5], c.r[5].w[0] + 14877u);  if (depth < kMaxDepth) unit_00E8(c, 193u, depth + 1u); else { c.pc = 0x004A1970u; return; } if (c.pc != 0x004F5550u) [[unlikely]] return; }
L_004F5550:
    set32(c.r[18], ld32((c.r[28].w[0] - 23300u)));
    set32(c.r[4], 0u + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5560u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F5560u) [[unlikely]] return; }
L_004F5560:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004F5580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5570u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 213u, depth + 1u); else { c.pc = 0x004A1BA0u; return; } if (c.pc != 0x004F5570u) [[unlikely]] return; }
L_004F5570:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31168u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 68u), 0u);
    c.budget -= 4;
L_004F5580:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5594u); set32(c.r[5], c.r[5].w[0] + 14893u);  if (depth < kMaxDepth) unit_00E8(c, 193u, depth + 1u); else { c.pc = 0x004A1970u; return; } if (c.pc != 0x004F5594u) [[unlikely]] return; }
L_004F5594:
    set32(c.r[18], ld32((c.r[28].w[0] - 23300u)));
    set32(c.r[4], 0u + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F55A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F55A4u) [[unlikely]] return; }
L_004F55A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004F55C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F55B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 213u, depth + 1u); else { c.pc = 0x004A1BA0u; return; } if (c.pc != 0x004F55B4u) [[unlikely]] return; }
L_004F55B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 22928u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 68u), 0u);
    c.budget -= 4;
L_004F55C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F55D8u); set32(c.r[5], c.r[5].w[0] + 14906u);  if (depth < kMaxDepth) unit_00E8(c, 193u, depth + 1u); else { c.pc = 0x004A1970u; return; } if (c.pc != 0x004F55D8u) [[unlikely]] return; }
L_004F55D8:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F55E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F55E4u) [[unlikely]] return; }
L_004F55E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_004F5608; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 23968u);
    set32(c.r[3], c.r[3].w[0] + 29440u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
L_004F5608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5610u);  if (depth < kMaxDepth) unit_0014(c, 35u, depth + 1u); else { c.pc = 0x00150B80u; return; } if (c.pc != 0x004F5610u) [[unlikely]] return; }
L_004F5610:
    set32(c.r[4], 0u + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F561Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F561Cu) [[unlikely]] return; }
L_004F561C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004F5658; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F562Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 472u, depth + 1u); else { c.pc = 0x004F6EC0u; return; } if (c.pc != 0x004F562Cu) [[unlikely]] return; }
L_004F562C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[17].w[0] + 52u);
    set32(c.r[2], c.r[2].w[0] - 29376u);
    set32(c.r[5], 0u - 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5648u); st32((c.r[17].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_00FD(c, 467u, depth + 1u); else { c.pc = 0x004F6E30u; return; } if (c.pc != 0x004F5648u) [[unlikely]] return; }
L_004F5648:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5658u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F5658u) [[unlikely]] return; }
L_004F5658:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5664u); st32((c.r[16].w[0] + 52u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0023(c, 90u, depth + 1u); else { c.pc = 0x0018D6E0u; return; } if (c.pc != 0x004F5664u) [[unlikely]] return; }
L_004F5664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F566Cu);  if (depth < kMaxDepth) unit_0023(c, 91u, depth + 1u); else { c.pc = 0x0018D700u; return; } if (c.pc != 0x004F566Cu) [[unlikely]] return; }
L_004F566C:
    set32(c.r[5], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5678u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 194u, depth + 1u); else { c.pc = 0x0019F0E0u; return; } if (c.pc != 0x004F5678u) [[unlikely]] return; }
L_004F5678:
    set32(c.r[4], 0u + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5684u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F5684u) [[unlikely]] return; }
L_004F5684:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_004F5698; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5694u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 153u, depth + 1u); else { c.pc = 0x0014D500u; return; } if (c.pc != 0x004F5694u) [[unlikely]] return; }
L_004F5694:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F5698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F56A0u);  if (depth < kMaxDepth) unit_0030(c, 170u, depth + 1u); else { c.pc = 0x001C1BE0u; return; } if (c.pc != 0x004F56A0u) [[unlikely]] return; }
L_004F56A0:
    set32(c.r[17], ld32((c.r[28].w[0] - 28816u)));
    set32(c.r[4], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F56B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F56B0u) [[unlikely]] return; }
L_004F56B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004F56CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F56C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EC(c, 418u, depth + 1u); else { c.pc = 0x004B34D0u; return; } if (c.pc != 0x004F56C0u) [[unlikely]] return; }
L_004F56C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 32288u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004F56CC:
    set32(c.r[3], ld32((c.r[17].w[0] + 1404u)));
    set32(c.r[2], 0u + 69u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));  goto L_004F5730; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 14917u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F56FCu); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F56FCu) [[unlikely]] return; }
L_004F56FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 1404u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 1404u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5720u); set32(c.r[4], c.r[17].w[0] + 1408u);  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018F980u; return; } if (c.pc != 0x004F5720u) [[unlikely]] return; }
L_004F5720:
    set32(c.r[2], ld32((c.r[17].w[0] + 1404u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 1404u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 4;
L_004F5730:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F573Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F573Cu) [[unlikely]] return; }
L_004F573C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));  goto L_004F5794; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F575Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004F575Cu) [[unlikely]] return; }
L_004F575C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 21552u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17744u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21296u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 32656u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));
    c.budget -= 14;
L_004F5794:
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 24u);  goto L_004F57F4; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 14939u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F57C0u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F57C0u) [[unlikely]] return; }
L_004F57C0:
    set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 1404u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F57E4u); set32(c.r[4], c.r[18].w[0] + 1408u);  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018F980u; return; } if (c.pc != 0x004F57E4u) [[unlikely]] return; }
L_004F57E4:
    set32(c.r[2], ld32((c.r[18].w[0] + 1404u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 1404u), c.r[2].w[0]);
    set32(c.r[4], 0u + 24u);
    c.budget -= 4;
L_004F57F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F57FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F57FCu) [[unlikely]] return; }
L_004F57FC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 28816u)));  goto L_004F5818; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5810u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EC(c, 418u, depth + 1u); else { c.pc = 0x004B34D0u; return; } if (c.pc != 0x004F5810u) [[unlikely]] return; }
L_004F5810:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 2;
L_004F5818:
    set32(c.r[2], 0u + 69u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1404u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));  goto L_004F587C; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 14956u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5848u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F5848u) [[unlikely]] return; }
L_004F5848:
    set32(c.r[3], ld32((c.r[17].w[0] + 1404u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 1404u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F586Cu); set32(c.r[4], c.r[17].w[0] + 1408u);  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018F980u; return; } if (c.pc != 0x004F586Cu) [[unlikely]] return; }
L_004F586C:
    set32(c.r[2], ld32((c.r[17].w[0] + 1404u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 1404u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 4;
L_004F587C:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5888u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F5888u) [[unlikely]] return; }
L_004F5888:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));  goto L_004F58D4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F58A8u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004F58A8u) [[unlikely]] return; }
L_004F58A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 21552u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17744u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31232u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));
    c.budget -= 11;
L_004F58D4:
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));  goto L_004F5934; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 14978u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5900u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F5900u) [[unlikely]] return; }
L_004F5900:
    set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 1404u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5924u); set32(c.r[4], c.r[18].w[0] + 1408u);  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018F980u; return; } if (c.pc != 0x004F5924u) [[unlikely]] return; }
L_004F5924:
    set32(c.r[2], ld32((c.r[18].w[0] + 1404u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 1404u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 4;
L_004F5934:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5940u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F5940u) [[unlikely]] return; }
L_004F5940:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));  goto L_004F5998; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5960u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004F5960u) [[unlikely]] return; }
L_004F5960:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 21552u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17744u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21296u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 27904u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));
    c.budget -= 14;
L_004F5998:
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 24u);  goto L_004F59F8; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 14992u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F59C4u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F59C4u) [[unlikely]] return; }
L_004F59C4:
    set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 1404u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F59E8u); set32(c.r[4], c.r[18].w[0] + 1408u);  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018F980u; return; } if (c.pc != 0x004F59E8u) [[unlikely]] return; }
L_004F59E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 1404u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 1404u), c.r[2].w[0]);
    set32(c.r[4], 0u + 24u);
    c.budget -= 4;
L_004F59F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5A00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F5A00u) [[unlikely]] return; }
L_004F5A00:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 28816u)));  goto L_004F5A1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5A14u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 110u, depth + 1u); else { c.pc = 0x004B4BC0u; return; } if (c.pc != 0x004F5A14u) [[unlikely]] return; }
L_004F5A14:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 2;
L_004F5A1C:
    set32(c.r[2], 0u + 69u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1404u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));  goto L_004F5A80; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 15010u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5A4Cu); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F5A4Cu) [[unlikely]] return; }
L_004F5A4C:
    set32(c.r[3], ld32((c.r[17].w[0] + 1404u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 1404u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5A70u); set32(c.r[4], c.r[17].w[0] + 1408u);  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018F980u; return; } if (c.pc != 0x004F5A70u) [[unlikely]] return; }
L_004F5A70:
    set32(c.r[2], ld32((c.r[17].w[0] + 1404u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 1404u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 4;
L_004F5A80:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5A8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F5A8Cu) [[unlikely]] return; }
L_004F5A8C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));  goto L_004F5AE4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5AACu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004F5AACu) [[unlikely]] return; }
L_004F5AAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 21552u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17744u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21296u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 29296u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));
    c.budget -= 14;
L_004F5AE4:
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[17], ld32((c.r[28].w[0] - 28816u)));  goto L_004F5B44; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 15030u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5B10u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F5B10u) [[unlikely]] return; }
L_004F5B10:
    set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 1404u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5B34u); set32(c.r[4], c.r[18].w[0] + 1408u);  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018F980u; return; } if (c.pc != 0x004F5B34u) [[unlikely]] return; }
L_004F5B34:
    set32(c.r[2], ld32((c.r[18].w[0] + 1404u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 1404u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 4;
L_004F5B44:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5B50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F5B50u) [[unlikely]] return; }
L_004F5B50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004F5B6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5B60u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 97u, depth + 1u); else { c.pc = 0x001890D0u; return; } if (c.pc != 0x004F5B60u) [[unlikely]] return; }
L_004F5B60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 28272u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004F5B6C:
    set32(c.r[3], ld32((c.r[17].w[0] + 1404u)));
    set32(c.r[2], 0u + 69u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 24u);  goto L_004F5BD0; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 15043u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5B9Cu); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F5B9Cu) [[unlikely]] return; }
L_004F5B9C:
    set32(c.r[3], ld32((c.r[17].w[0] + 1404u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 1404u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5BC0u); set32(c.r[4], c.r[17].w[0] + 1408u);  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018F980u; return; } if (c.pc != 0x004F5BC0u) [[unlikely]] return; }
L_004F5BC0:
    set32(c.r[2], ld32((c.r[17].w[0] + 1404u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 1404u), c.r[2].w[0]);
    set32(c.r[4], 0u + 24u);
    c.budget -= 4;
L_004F5BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5BD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F5BD8u) [[unlikely]] return; }
L_004F5BD8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 28816u)));  goto L_004F5BF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5BECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E7(c, 311u, depth + 1u); else { c.pc = 0x0049E620u; return; } if (c.pc != 0x004F5BECu) [[unlikely]] return; }
L_004F5BEC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 2;
L_004F5BF4:
    set32(c.r[2], 0u + 69u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1404u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));  goto L_004F5C58; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 15070u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5C24u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F5C24u) [[unlikely]] return; }
L_004F5C24:
    set32(c.r[3], ld32((c.r[17].w[0] + 1404u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 1404u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5C48u); set32(c.r[4], c.r[17].w[0] + 1408u);  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018F980u; return; } if (c.pc != 0x004F5C48u) [[unlikely]] return; }
L_004F5C48:
    set32(c.r[2], ld32((c.r[17].w[0] + 1404u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 1404u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 4;
L_004F5C58:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5C64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F5C64u) [[unlikely]] return; }
L_004F5C64:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));  goto L_004F5CC8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5C84u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004F5C84u) [[unlikely]] return; }
L_004F5C84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 21552u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17744u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21296u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 29296u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 28592u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));
    c.budget -= 17;
L_004F5CC8:
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));  goto L_004F5D28; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 15090u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5CF4u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F5CF4u) [[unlikely]] return; }
L_004F5CF4:
    set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 1404u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5D18u); set32(c.r[4], c.r[18].w[0] + 1408u);  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018F980u; return; } if (c.pc != 0x004F5D18u) [[unlikely]] return; }
L_004F5D18:
    set32(c.r[2], ld32((c.r[18].w[0] + 1404u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 1404u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 4;
L_004F5D28:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5D34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F5D34u) [[unlikely]] return; }
L_004F5D34:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));  goto L_004F5D8C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5D54u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004F5D54u) [[unlikely]] return; }
L_004F5D54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 21552u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17744u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 20656u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 32016u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));
    c.budget -= 14;
L_004F5D8C:
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[17], ld32((c.r[28].w[0] - 28816u)));  goto L_004F5DEC; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 15110u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5DB8u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F5DB8u) [[unlikely]] return; }
L_004F5DB8:
    set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 1404u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5DDCu); set32(c.r[4], c.r[18].w[0] + 1408u);  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018F980u; return; } if (c.pc != 0x004F5DDCu) [[unlikely]] return; }
L_004F5DDC:
    set32(c.r[2], ld32((c.r[18].w[0] + 1404u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 1404u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 4;
L_004F5DEC:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5DF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F5DF8u) [[unlikely]] return; }
L_004F5DF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004F5E14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5E08u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 283u, depth + 1u); else { c.pc = 0x00187E70u; return; } if (c.pc != 0x004F5E08u) [[unlikely]] return; }
L_004F5E08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 31472u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004F5E14:
    set32(c.r[3], ld32((c.r[17].w[0] + 1404u)));
    set32(c.r[2], 0u + 69u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));  goto L_004F5E78; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 15132u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5E44u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F5E44u) [[unlikely]] return; }
L_004F5E44:
    set32(c.r[3], ld32((c.r[17].w[0] + 1404u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 1404u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5E68u); set32(c.r[4], c.r[17].w[0] + 1408u);  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018F980u; return; } if (c.pc != 0x004F5E68u) [[unlikely]] return; }
L_004F5E68:
    set32(c.r[2], ld32((c.r[17].w[0] + 1404u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 1404u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 4;
L_004F5E78:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5E84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F5E84u) [[unlikely]] return; }
L_004F5E84:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));  goto L_004F5ED0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5EA4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004F5EA4u) [[unlikely]] return; }
L_004F5EA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 21552u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17744u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 31824u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));
    c.budget -= 11;
L_004F5ED0:
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));  goto L_004F5F30; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 15148u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5EFCu); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F5EFCu) [[unlikely]] return; }
L_004F5EFC:
    set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 1404u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5F20u); set32(c.r[4], c.r[18].w[0] + 1408u);  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018F980u; return; } if (c.pc != 0x004F5F20u) [[unlikely]] return; }
L_004F5F20:
    set32(c.r[2], ld32((c.r[18].w[0] + 1404u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 1404u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 4;
L_004F5F30:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5F3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F5F3Cu) [[unlikely]] return; }
L_004F5F3C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));  goto L_004F5F88; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5F5Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004F5F5Cu) [[unlikely]] return; }
L_004F5F5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 21552u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17744u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 32096u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));
    c.budget -= 11;
L_004F5F88:
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[17], ld32((c.r[28].w[0] - 28816u)));  goto L_004F5FE8; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 15166u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5FB4u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F5FB4u) [[unlikely]] return; }
L_004F5FB4:
    set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 1404u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5FD8u); set32(c.r[4], c.r[18].w[0] + 1408u);  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018F980u; return; } if (c.pc != 0x004F5FD8u) [[unlikely]] return; }
L_004F5FD8:
    set32(c.r[2], ld32((c.r[18].w[0] + 1404u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 1404u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 4;
L_004F5FE8:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5FF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F5FF4u) [[unlikely]] return; }
L_004F5FF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004F6010; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6004u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 97u, depth + 1u); else { c.pc = 0x001890D0u; return; } if (c.pc != 0x004F6004u) [[unlikely]] return; }
L_004F6004:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 26832u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004F6010:
    set32(c.r[3], ld32((c.r[17].w[0] + 1404u)));
    set32(c.r[2], 0u + 69u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));  goto L_004F6074; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 15180u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6040u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F6040u) [[unlikely]] return; }
L_004F6040:
    set32(c.r[3], ld32((c.r[17].w[0] + 1404u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 1404u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6064u); set32(c.r[4], c.r[17].w[0] + 1408u);  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018F980u; return; } if (c.pc != 0x004F6064u) [[unlikely]] return; }
L_004F6064:
    set32(c.r[2], ld32((c.r[17].w[0] + 1404u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 1404u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 4;
L_004F6074:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6080u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F6080u) [[unlikely]] return; }
L_004F6080:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));  goto L_004F60D8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F60A0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004F60A0u) [[unlikely]] return; }
L_004F60A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 21552u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17744u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 20656u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 30240u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));
    c.budget -= 14;
L_004F60D8:
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[17], ld32((c.r[28].w[0] - 28816u)));  goto L_004F6138; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 15203u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6104u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F6104u) [[unlikely]] return; }
L_004F6104:
    set32(c.r[3], ld32((c.r[18].w[0] + 1404u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 1404u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6128u); set32(c.r[4], c.r[18].w[0] + 1408u);  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018F980u; return; } if (c.pc != 0x004F6128u) [[unlikely]] return; }
L_004F6128:
    set32(c.r[2], ld32((c.r[18].w[0] + 1404u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 1404u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 4;
L_004F6138:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6144u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F6144u) [[unlikely]] return; }
L_004F6144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004F6160; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6154u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 97u, depth + 1u); else { c.pc = 0x001890D0u; return; } if (c.pc != 0x004F6154u) [[unlikely]] return; }
L_004F6154:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31696u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004F6160:
    set32(c.r[3], ld32((c.r[17].w[0] + 1404u)));
    set32(c.r[2], 0u + 69u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));  goto L_004F61C4; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 15216u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6190u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F6190u) [[unlikely]] return; }
L_004F6190:
    set32(c.r[3], ld32((c.r[17].w[0] + 1404u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 1404u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F61B4u); set32(c.r[4], c.r[17].w[0] + 1408u);  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018F980u; return; } if (c.pc != 0x004F61B4u) [[unlikely]] return; }
L_004F61B4:
    set32(c.r[2], ld32((c.r[17].w[0] + 1404u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 1404u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 4;
L_004F61C4:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F61D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F61D0u) [[unlikely]] return; }
L_004F61D0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));  goto L_004F6228; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F61F0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004F61F0u) [[unlikely]] return; }
L_004F61F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 18208u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17776u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15616u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 22016u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));
    c.budget -= 14;
L_004F6228:
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));  goto L_004F6288; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 15241u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6254u); set32(c.r[4], c.r[2].w[0] + 1436u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F6254u) [[unlikely]] return; }
L_004F6254:
    set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 1452u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 2836u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6278u); set32(c.r[4], c.r[18].w[0] + 2840u);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018F6F0u; return; } if (c.pc != 0x004F6278u) [[unlikely]] return; }
L_004F6278:
    set32(c.r[2], ld32((c.r[18].w[0] + 2836u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 2836u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 4;
L_004F6288:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6294u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F6294u) [[unlikely]] return; }
L_004F6294:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));  goto L_004F62E0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F62B4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004F62B4u) [[unlikely]] return; }
L_004F62B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 18208u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17776u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 29536u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));
    c.budget -= 11;
L_004F62E0:
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));  goto L_004F6340; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 15265u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F630Cu); set32(c.r[4], c.r[2].w[0] + 1436u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F630Cu) [[unlikely]] return; }
L_004F630C:
    set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 1452u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 2836u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6330u); set32(c.r[4], c.r[18].w[0] + 2840u);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018F6F0u; return; } if (c.pc != 0x004F6330u) [[unlikely]] return; }
L_004F6330:
    set32(c.r[2], ld32((c.r[18].w[0] + 2836u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 2836u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 4;
L_004F6340:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F634Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F634Cu) [[unlikely]] return; }
L_004F634C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));  goto L_004F6398; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F636Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004F636Cu) [[unlikely]] return; }
L_004F636C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 18208u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17776u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 32272u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));
    c.budget -= 11;
L_004F6398:
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));  goto L_004F63F8; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 15287u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F63C4u); set32(c.r[4], c.r[2].w[0] + 1436u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F63C4u) [[unlikely]] return; }
L_004F63C4:
    set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 1452u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 2836u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F63E8u); set32(c.r[4], c.r[18].w[0] + 2840u);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018F6F0u; return; } if (c.pc != 0x004F63E8u) [[unlikely]] return; }
L_004F63E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 2836u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 2836u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 4;
L_004F63F8:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6404u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F6404u) [[unlikely]] return; }
L_004F6404:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));  goto L_004F6450; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6424u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004F6424u) [[unlikely]] return; }
L_004F6424:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 18208u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17776u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 24768u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));
    c.budget -= 11;
L_004F6450:
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));  goto L_004F64B0; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 15303u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F647Cu); set32(c.r[4], c.r[2].w[0] + 1436u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F647Cu) [[unlikely]] return; }
L_004F647C:
    set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 1452u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 2836u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F64A0u); set32(c.r[4], c.r[18].w[0] + 2840u);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018F6F0u; return; } if (c.pc != 0x004F64A0u) [[unlikely]] return; }
L_004F64A0:
    set32(c.r[2], ld32((c.r[18].w[0] + 2836u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 2836u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 4;
L_004F64B0:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F64BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F64BCu) [[unlikely]] return; }
L_004F64BC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));  goto L_004F6514; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F64DCu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004F64DCu) [[unlikely]] return; }
L_004F64DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 18208u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17776u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15616u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 29568u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));
    c.budget -= 14;
L_004F6514:
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));  goto L_004F6574; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 15319u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6540u); set32(c.r[4], c.r[2].w[0] + 1436u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F6540u) [[unlikely]] return; }
L_004F6540:
    set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 1452u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 2836u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6564u); set32(c.r[4], c.r[18].w[0] + 2840u);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018F6F0u; return; } if (c.pc != 0x004F6564u) [[unlikely]] return; }
L_004F6564:
    set32(c.r[2], ld32((c.r[18].w[0] + 2836u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 2836u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 4;
L_004F6574:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6580u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F6580u) [[unlikely]] return; }
L_004F6580:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));  goto L_004F65CC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F65A0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004F65A0u) [[unlikely]] return; }
L_004F65A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 18208u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17776u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 26128u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));
    c.budget -= 11;
L_004F65CC:
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));  goto L_004F662C; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 15344u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F65F8u); set32(c.r[4], c.r[2].w[0] + 1436u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F65F8u) [[unlikely]] return; }
L_004F65F8:
    set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 1452u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 2836u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F661Cu); set32(c.r[4], c.r[18].w[0] + 2840u);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018F6F0u; return; } if (c.pc != 0x004F661Cu) [[unlikely]] return; }
L_004F661C:
    set32(c.r[2], ld32((c.r[18].w[0] + 2836u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 2836u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 4;
L_004F662C:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6638u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F6638u) [[unlikely]] return; }
L_004F6638:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));  goto L_004F6684; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6658u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004F6658u) [[unlikely]] return; }
L_004F6658:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 18208u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17776u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 25952u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));
    c.budget -= 11;
L_004F6684:
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));  goto L_004F66E4; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 15374u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F66B0u); set32(c.r[4], c.r[2].w[0] + 1436u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F66B0u) [[unlikely]] return; }
L_004F66B0:
    set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 1452u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 2836u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F66D4u); set32(c.r[4], c.r[18].w[0] + 2840u);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018F6F0u; return; } if (c.pc != 0x004F66D4u) [[unlikely]] return; }
L_004F66D4:
    set32(c.r[2], ld32((c.r[18].w[0] + 2836u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 2836u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 4;
L_004F66E4:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F66F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F66F0u) [[unlikely]] return; }
L_004F66F0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));  goto L_004F6748; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6710u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004F6710u) [[unlikely]] return; }
L_004F6710:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 18208u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17776u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 16384u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 25776u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));
    c.budget -= 14;
L_004F6748:
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));  goto L_004F67A8; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 15395u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6774u); set32(c.r[4], c.r[2].w[0] + 1436u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F6774u) [[unlikely]] return; }
L_004F6774:
    set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 1452u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 2836u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6798u); set32(c.r[4], c.r[18].w[0] + 2840u);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018F6F0u; return; } if (c.pc != 0x004F6798u) [[unlikely]] return; }
L_004F6798:
    set32(c.r[2], ld32((c.r[18].w[0] + 2836u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 2836u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 4;
L_004F67A8:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F67B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F67B4u) [[unlikely]] return; }
L_004F67B4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));  goto L_004F680C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F67D4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004F67D4u) [[unlikely]] return; }
L_004F67D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 18208u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17776u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 16384u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31504u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));
    c.budget -= 14;
L_004F680C:
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004F6868; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 15417u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6838u); set32(c.r[4], c.r[2].w[0] + 1436u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x004F6838u) [[unlikely]] return; }
L_004F6838:
    set32(c.r[3], ld32((c.r[18].w[0] + 2836u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 1452u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 2836u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F685Cu); set32(c.r[4], c.r[18].w[0] + 2840u);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018F6F0u; return; } if (c.pc != 0x004F685Cu) [[unlikely]] return; }
L_004F685C:
    set32(c.r[2], ld32((c.r[18].w[0] + 2836u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 2836u), c.r[2].w[0]);
    c.budget -= 3;
L_004F6868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6870u);  if (depth < kMaxDepth) unit_00E6(c, 611u, depth + 1u); else { c.pc = 0x0049BB90u; return; } if (c.pc != 0x004F6870u) [[unlikely]] return; }
L_004F6870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6878u);  if (depth < kMaxDepth) unit_00B6(c, 456u, depth + 1u); else { c.pc = 0x003DB1E0u; return; } if (c.pc != 0x004F6878u) [[unlikely]] return; }
L_004F6878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6880u);  if (depth < kMaxDepth) unit_00C1(c, 640u, depth + 1u); else { c.pc = 0x00407EB0u; return; } if (c.pc != 0x004F6880u) [[unlikely]] return; }
L_004F6880:
    set32(c.r[4], 0u + 320u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 132u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6898u); st32((c.r[29].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F6898u) [[unlikely]] return; }
L_004F6898:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 72u);  goto L_004F68B8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F68B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 35u, depth + 1u); else { c.pc = 0x001886D0u; return; } if (c.pc != 0x004F68B0u) [[unlikely]] return; }
L_004F68B0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.budget -= 2;
L_004F68B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F68C0u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0029(c, 118u, depth + 1u); else { c.pc = 0x001A5F20u; return; } if (c.pc != 0x004F68C0u) [[unlikely]] return; }
L_004F68C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F68D0u); set32(c.r[5], c.r[5].w[0] + 14691u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004F68D0u) [[unlikely]] return; }
L_004F68D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F68DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x004F68DCu) [[unlikely]] return; }
L_004F68DC:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F68F0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F68F0u) [[unlikely]] return; }
L_004F68F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F68FCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x004F68FCu) [[unlikely]] return; }
L_004F68FC:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6910u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F6910u) [[unlikely]] return; }
L_004F6910:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 280u);
    st8((c.r[17].w[0] + 301u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6924u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x004F6924u) [[unlikely]] return; }
L_004F6924:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6934u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0027(c, 184u, depth + 1u); else { c.pc = 0x0019EE50u; return; } if (c.pc != 0x004F6934u) [[unlikely]] return; }
L_004F6934:
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6940u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 109u, depth + 1u); else { c.pc = 0x0019E000u; return; } if (c.pc != 0x004F6940u) [[unlikely]] return; }
L_004F6940:
    set32(c.r[4], 0u + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F694Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F694Cu) [[unlikely]] return; }
L_004F694C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 72u);  goto L_004F696C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6964u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 35u, depth + 1u); else { c.pc = 0x001886D0u; return; } if (c.pc != 0x004F6964u) [[unlikely]] return; }
L_004F6964:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.budget -= 2;
L_004F696C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6974u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0029(c, 118u, depth + 1u); else { c.pc = 0x001A5F20u; return; } if (c.pc != 0x004F6974u) [[unlikely]] return; }
L_004F6974:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6984u); set32(c.r[5], c.r[5].w[0] + 14676u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004F6984u) [[unlikely]] return; }
L_004F6984:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6990u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x004F6990u) [[unlikely]] return; }
L_004F6990:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F69A4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F69A4u) [[unlikely]] return; }
L_004F69A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F69B0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x004F69B0u) [[unlikely]] return; }
L_004F69B0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F69C4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F69C4u) [[unlikely]] return; }
L_004F69C4:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 280u);
    st8((c.r[17].w[0] + 301u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F69D8u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x004F69D8u) [[unlikely]] return; }
L_004F69D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F69E8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0027(c, 184u, depth + 1u); else { c.pc = 0x0019EE50u; return; } if (c.pc != 0x004F69E8u) [[unlikely]] return; }
L_004F69E8:
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F69F4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 109u, depth + 1u); else { c.pc = 0x0019E000u; return; } if (c.pc != 0x004F69F4u) [[unlikely]] return; }
L_004F69F4:
    set32(c.r[4], 0u + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6A00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F6A00u) [[unlikely]] return; }
L_004F6A00:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 72u);  goto L_004F6A20; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6A18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 35u, depth + 1u); else { c.pc = 0x001886D0u; return; } if (c.pc != 0x004F6A18u) [[unlikely]] return; }
L_004F6A18:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.budget -= 2;
L_004F6A20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6A28u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0029(c, 118u, depth + 1u); else { c.pc = 0x001A5F20u; return; } if (c.pc != 0x004F6A28u) [[unlikely]] return; }
L_004F6A28:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6A38u); set32(c.r[5], c.r[5].w[0] + 15443u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004F6A38u) [[unlikely]] return; }
L_004F6A38:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6A44u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x004F6A44u) [[unlikely]] return; }
L_004F6A44:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6A58u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F6A58u) [[unlikely]] return; }
L_004F6A58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6A64u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x004F6A64u) [[unlikely]] return; }
L_004F6A64:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6A78u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F6A78u) [[unlikely]] return; }
L_004F6A78:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 280u);
    st8((c.r[17].w[0] + 301u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6A8Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x004F6A8Cu) [[unlikely]] return; }
L_004F6A8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6A9Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0027(c, 184u, depth + 1u); else { c.pc = 0x0019EE50u; return; } if (c.pc != 0x004F6A9Cu) [[unlikely]] return; }
L_004F6A9C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6AA8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 109u, depth + 1u); else { c.pc = 0x0019E000u; return; } if (c.pc != 0x004F6AA8u) [[unlikely]] return; }
L_004F6AA8:
    set32(c.r[4], 0u + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6AB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F6AB4u) [[unlikely]] return; }
L_004F6AB4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 72u);  goto L_004F6AD4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6ACCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 35u, depth + 1u); else { c.pc = 0x001886D0u; return; } if (c.pc != 0x004F6ACCu) [[unlikely]] return; }
L_004F6ACC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.budget -= 2;
L_004F6AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6ADCu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0029(c, 118u, depth + 1u); else { c.pc = 0x001A5F20u; return; } if (c.pc != 0x004F6ADCu) [[unlikely]] return; }
L_004F6ADC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6AECu); set32(c.r[5], c.r[5].w[0] + 14071u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004F6AECu) [[unlikely]] return; }
L_004F6AEC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6AF8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x004F6AF8u) [[unlikely]] return; }
L_004F6AF8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6B0Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F6B0Cu) [[unlikely]] return; }
L_004F6B0C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6B18u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x004F6B18u) [[unlikely]] return; }
L_004F6B18:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6B2Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F6B2Cu) [[unlikely]] return; }
L_004F6B2C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 280u);
    st8((c.r[17].w[0] + 301u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6B40u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x004F6B40u) [[unlikely]] return; }
L_004F6B40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6B50u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0027(c, 184u, depth + 1u); else { c.pc = 0x0019EE50u; return; } if (c.pc != 0x004F6B50u) [[unlikely]] return; }
L_004F6B50:
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6B5Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 109u, depth + 1u); else { c.pc = 0x0019E000u; return; } if (c.pc != 0x004F6B5Cu) [[unlikely]] return; }
L_004F6B5C:
    set32(c.r[2], ld32((c.r[28].w[0] - 28808u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6B6Cu); set32(c.r[4], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_0027(c, 194u, depth + 1u); else { c.pc = 0x0019F0E0u; return; } if (c.pc != 0x004F6B6Cu) [[unlikely]] return; }
L_004F6B6C:
    set32(c.r[4], 0u + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6B78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F6B78u) [[unlikely]] return; }
L_004F6B78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004F6BA0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6B90u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 143u, depth + 1u); else { c.pc = 0x0019E820u; return; } if (c.pc != 0x004F6B90u) [[unlikely]] return; }
L_004F6B90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 23136u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 48u), c.r[16].w[0]);
    c.budget -= 4;
L_004F6BA0:
    st32((c.r[16].w[0] + 84u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6BB0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 194u, depth + 1u); else { c.pc = 0x0019F0E0u; return; } if (c.pc != 0x004F6BB0u) [[unlikely]] return; }
L_004F6BB0:
    st8((c.r[16].w[0] + 169u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004F6BC0; } }
    set32(c.r[2], c.r[16].w[0] + 48u);
    c.budget -= 1;
L_004F6BC0:
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[7], c.r[29].w[0] + 148u);
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[2].w[0] + 28u);
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6BE8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x004F6BE8u) [[unlikely]] return; }
L_004F6BE8:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F6BEC:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 128u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F6BECu | kUnwind; return; } goto L_004F6BEC; } }
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6C14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F6C14u) [[unlikely]] return; }
L_004F6C14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_004F6C50; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6C28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E9(c, 507u, depth + 1u); else { c.pc = 0x004A7E30u; return; } if (c.pc != 0x004F6C28u) [[unlikely]] return; }
L_004F6C28:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F6C50; } }
L_004F6C34:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + 128u);
    set32(c.r[3], ld32((c.r[3].w[0] + 128u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_004F6C50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_004F6C5C; } }
L_004F6C50:
    c.r[3].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F6C34u | kUnwind; return; } goto L_004F6C34; }
L_004F6C5C:
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6C68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F6C68u) [[unlikely]] return; }
L_004F6C68:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_004F6CA4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6C7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 32u, depth + 1u); else { c.pc = 0x004884F0u; return; } if (c.pc != 0x004F6C7Cu) [[unlikely]] return; }
L_004F6C7C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F6CA4; } }
L_004F6C88:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + 128u);
    set32(c.r[3], ld32((c.r[3].w[0] + 128u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_004F6CA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_004F6CB0; } }
L_004F6CA4:
    c.r[3].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F6C88u | kUnwind; return; } goto L_004F6C88; }
L_004F6CB0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6CBCu); st8((c.r[16].w[0] + 168u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00E9(c, 153u, depth + 1u); else { c.pc = 0x004A53D0u; return; } if (c.pc != 0x004F6CBCu) [[unlikely]] return; }
L_004F6CBC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6CCCu); set32(c.r[5], c.r[5].w[0] + 15463u);  if (depth < kMaxDepth) unit_000A(c, 391u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x004F6CCCu) [[unlikely]] return; }
L_004F6CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6CD4u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x004F6CD4u) [[unlikely]] return; }
L_004F6CD4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6CE0u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00E8(c, 539u, depth + 1u); else { c.pc = 0x004A3E80u; return; } if (c.pc != 0x004F6CE0u) [[unlikely]] return; }
L_004F6CE0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6CECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x004F6CECu) [[unlikely]] return; }
L_004F6CEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6CF4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 260u, depth + 1u); else { c.pc = 0x00429A70u; return; } if (c.pc != 0x004F6CF4u) [[unlikely]] return; }
L_004F6CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6CFCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 287u, depth + 1u); else { c.pc = 0x0045A210u; return; } if (c.pc != 0x004F6CFCu) [[unlikely]] return; }
L_004F6CFC:
    set32(c.r[4], c.r[16].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6D08u); set32(c.r[5], 0u + 30u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x004F6D08u) [[unlikely]] return; }
L_004F6D08:
    set32(c.r[4], c.r[16].w[0] + 172u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6D14u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x004F6D14u) [[unlikely]] return; }
L_004F6D14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6D1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 391u, depth + 1u); else { c.pc = 0x004F2E40u; return; } if (c.pc != 0x004F6D1Cu) [[unlikely]] return; }
L_004F6D1C:
    set32(c.r[4], 0u + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6D28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F6D28u) [[unlikely]] return; }
L_004F6D28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F6D38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6D38u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 115u, depth + 1u); else { c.pc = 0x00144B80u; return; } if (c.pc != 0x004F6D38u) [[unlikely]] return; }
L_004F6D38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 15489u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6D54u); set32(c.r[6], c.r[6].w[0] + 12384u);  if (depth < kMaxDepth) unit_0011(c, 100u, depth + 1u); else { c.pc = 0x001449A0u; return; } if (c.pc != 0x004F6D54u) [[unlikely]] return; }
L_004F6D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6D5Cu); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0011(c, 85u, depth + 1u); else { c.pc = 0x001447C0u; return; } if (c.pc != 0x004F6D5Cu) [[unlikely]] return; }
L_004F6D5C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6D6Cu); set32(c.r[5], c.r[5].w[0] + 15503u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004F6D6Cu) [[unlikely]] return; }
L_004F6D6C:
    set32(c.r[4], ld32((c.r[28].w[0] - 29004u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6D7Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0010(c, 445u, depth + 1u); else { c.pc = 0x00143520u; return; } if (c.pc != 0x004F6D7Cu) [[unlikely]] return; }
L_004F6D7C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6D88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F6D88u) [[unlikely]] return; }
L_004F6D88:
    set32(c.r[4], 0u + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6D94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F6D94u) [[unlikely]] return; }
L_004F6D94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F6DA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6DA4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 115u, depth + 1u); else { c.pc = 0x00144B80u; return; } if (c.pc != 0x004F6DA4u) [[unlikely]] return; }
L_004F6DA4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 15506u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6DC0u); set32(c.r[6], c.r[6].w[0] + 12336u);  if (depth < kMaxDepth) unit_0011(c, 100u, depth + 1u); else { c.pc = 0x001449A0u; return; } if (c.pc != 0x004F6DC0u) [[unlikely]] return; }
L_004F6DC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], c.r[5].w[0] + 15529u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6DD8u); set32(c.r[6], c.r[6].w[0] + 12288u);  if (depth < kMaxDepth) unit_0011(c, 100u, depth + 1u); else { c.pc = 0x001449A0u; return; } if (c.pc != 0x004F6DD8u) [[unlikely]] return; }
L_004F6DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6DE0u); set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  if (depth < kMaxDepth) unit_0011(c, 85u, depth + 1u); else { c.pc = 0x001447C0u; return; } if (c.pc != 0x004F6DE0u) [[unlikely]] return; }
L_004F6DE0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6DF0u); set32(c.r[5], c.r[5].w[0] + 15556u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004F6DF0u) [[unlikely]] return; }
L_004F6DF0:
    set32(c.r[4], ld32((c.r[28].w[0] - 29004u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6E00u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0010(c, 445u, depth + 1u); else { c.pc = 0x00143520u; return; } if (c.pc != 0x004F6E00u) [[unlikely]] return; }
L_004F6E00:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6E0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004F6E0Cu) [[unlikely]] return; }
L_004F6E0C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004F6E30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004F6E84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6E50u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004F6E50u) [[unlikely]] return; }
L_004F6E50:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_004F6E70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6E68u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004F6E68u) [[unlikely]] return; }
L_004F6E68:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_004F6E70:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[29].w[0] + 44u);  goto L_004F6E88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6E80u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004F6E80u) [[unlikely]] return; }
L_004F6E80:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004F6E84:
    set32(c.r[2], c.r[29].w[0] + 44u);
    c.budget -= 1;
L_004F6E88:
    st32((c.r[29].w[0] + 40u), c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 36u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 40u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6EA4u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00FD(c, 544u, depth + 1u); else { c.pc = 0x004F76E0u; return; } if (c.pc != 0x004F6EA4u) [[unlikely]] return; }
L_004F6EA4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F6EC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6EDCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 156u, depth + 1u); else { c.pc = 0x00199E90u; return; } if (c.pc != 0x004F6EDCu) [[unlikely]] return; }
L_004F6EDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 17136u);
    set32(c.r[3], c.r[3].w[0] - 29328u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004F6F10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6F38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 201u, depth + 1u); else { c.pc = 0x0016DCF0u; return; } if (c.pc != 0x004F6F38u) [[unlikely]] return; }
L_004F6F38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_004F6F54; }
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6F50u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 437u, depth + 1u); else { c.pc = 0x004F34B0u; return; } if (c.pc != 0x004F6F50u) [[unlikely]] return; }
L_004F6F50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004F6F54:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004F6F70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004F6FC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 23136u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004F6FB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6FB0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 145u, depth + 1u); else { c.pc = 0x00199BA0u; return; } if (c.pc != 0x004F6FB0u) [[unlikely]] return; }
L_004F6FB0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004F6FCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6FC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004F6FC8u) [[unlikely]] return; }
L_004F6FC8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004F6FCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F6FE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004F6FF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004F7004; } }
L_004F6FF4:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7004u); set32(c.r[5], ld32((c.r[28].w[0] - 29864u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F7004u) [[unlikely]] return; }
L_004F7004:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004F7010:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[21].w[0] + 12u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 18;
    { const bool t = c.r[17].d[0] == 0ull; c.r[22].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004F7098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[21].w[0] + 16u);  if (t) { goto L_004F7090; } }
L_004F7060:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7070u); c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 87u, depth + 1u); else { c.pc = 0x00164BB0u; return; } if (c.pc != 0x004F7070u) [[unlikely]] return; }
L_004F7070:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = c.r[17].d[0] + 0ull;  goto L_004F7084; }
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004F7090; } }
L_004F7084:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_004F7090:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F7060u | kUnwind; return; } goto L_004F7060; }
L_004F7098:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[5].d[0] = c.r[20].d[0] + 0ull;  goto L_004F70BC; }
    set32(c.r[4], c.r[21].w[0] + 16u);
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F70B0u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 87u, depth + 1u); else { c.pc = 0x00164BB0u; return; } if (c.pc != 0x004F70B0u) [[unlikely]] return; }
L_004F70B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 12u);  goto L_004F7118; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_004F70BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F70C4u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004F70C4u) [[unlikely]] return; }
L_004F70C4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 160u), 0u);
    st32((c.r[29].w[0] + 164u), 0u);
    st32((c.r[29].w[0] + 168u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F70ECu); st8((c.r[29].w[0] + 172u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00FD(c, 545u, depth + 1u); else { c.pc = 0x004F7710u; return; } if (c.pc != 0x004F70ECu) [[unlikely]] return; }
L_004F70EC:
    set32(c.r[16], c.r[2].w[0] + 12u);
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004F7118; }
    set32(c.r[4], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F7114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7114u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004F7114u) [[unlikely]] return; }
L_004F7114:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004F7118:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004F7150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004F71B8; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004F71A4; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004F71A0; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F71A0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F71A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F71A0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004F71A0u) [[unlikely]] return; }
L_004F71A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004F71A4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004F71BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F71B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004F71B8u) [[unlikely]] return; }
L_004F71B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004F71BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F71D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[21].w[0] + 12u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 14;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004F7234; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[21].w[0] + 16u);  if (t) { goto L_004F722C; } }
L_004F7210:
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F721Cu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 87u, depth + 1u); else { c.pc = 0x00164BB0u; return; } if (c.pc != 0x004F721Cu) [[unlikely]] return; }
L_004F721C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], ld32((c.r[19].w[0] + 4u)));  goto L_004F722C; }
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[19].w[0])));
    c.budget -= 2;
L_004F722C:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F7210u | kUnwind; return; } goto L_004F7210; }
L_004F7234:
    set32(c.r[3], c.r[21].w[0] + 12u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[21].w[0] + 12u);  goto L_004F725C; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7250u); set32(c.r[6], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_0019(c, 87u, depth + 1u); else { c.pc = 0x00164BB0u; return; } if (c.pc != 0x004F7250u) [[unlikely]] return; }
L_004F7250:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[18].w[0]);  goto L_004F7260; }
    set32(c.r[3], c.r[21].w[0] + 12u);
    c.budget -= 1;
L_004F725C:
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_004F7260:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004F7290:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004F73B0; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_004F7320; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004F72DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F72D8u);  if (depth < kMaxDepth) unit_00FD(c, 496u, depth + 1u); else { c.pc = 0x004F7290u; return; } if (c.pc != 0x004F72D8u) [[unlikely]] return; }
L_004F72D8:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004F72DC:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004F72F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F72ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 496u, depth + 1u); else { c.pc = 0x004F7290u; return; } if (c.pc != 0x004F72ECu) [[unlikely]] return; }
L_004F72EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004F72F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F72F8u);  if (depth < kMaxDepth) unit_00FD(c, 536u, depth + 1u); else { c.pc = 0x004F75A0u; return; } if (c.pc != 0x004F72F8u) [[unlikely]] return; }
L_004F72F8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7304u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00FD(c, 534u, depth + 1u); else { c.pc = 0x004F7550u; return; } if (c.pc != 0x004F7304u) [[unlikely]] return; }
L_004F7304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F730Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 533u, depth + 1u); else { c.pc = 0x004F7540u; return; } if (c.pc != 0x004F730Cu) [[unlikely]] return; }
L_004F730C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F731Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00FD(c, 531u, depth + 1u); else { c.pc = 0x004F7520u; return; } if (c.pc != 0x004F731Cu) [[unlikely]] return; }
L_004F731C:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_004F7320:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004F7384; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004F7340; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F733Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 496u, depth + 1u); else { c.pc = 0x004F7290u; return; } if (c.pc != 0x004F733Cu) [[unlikely]] return; }
L_004F733C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004F7340:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004F7354; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7350u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 496u, depth + 1u); else { c.pc = 0x004F7290u; return; } if (c.pc != 0x004F7350u) [[unlikely]] return; }
L_004F7350:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004F7354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F735Cu);  if (depth < kMaxDepth) unit_00FD(c, 536u, depth + 1u); else { c.pc = 0x004F75A0u; return; } if (c.pc != 0x004F735Cu) [[unlikely]] return; }
L_004F735C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7368u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00FD(c, 534u, depth + 1u); else { c.pc = 0x004F7550u; return; } if (c.pc != 0x004F7368u) [[unlikely]] return; }
L_004F7368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7370u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 533u, depth + 1u); else { c.pc = 0x004F7540u; return; } if (c.pc != 0x004F7370u) [[unlikely]] return; }
L_004F7370:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7380u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00FD(c, 531u, depth + 1u); else { c.pc = 0x004F7520u; return; } if (c.pc != 0x004F7380u) [[unlikely]] return; }
L_004F7380:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004F7384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F738Cu);  if (depth < kMaxDepth) unit_00FD(c, 536u, depth + 1u); else { c.pc = 0x004F75A0u; return; } if (c.pc != 0x004F738Cu) [[unlikely]] return; }
L_004F738C:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7398u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00FD(c, 489u, depth + 1u); else { c.pc = 0x004F7150u; return; } if (c.pc != 0x004F7398u) [[unlikely]] return; }
L_004F7398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F73A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 533u, depth + 1u); else { c.pc = 0x004F7540u; return; } if (c.pc != 0x004F73A0u) [[unlikely]] return; }
L_004F73A0:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_004F73B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F73B0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004F73B0u) [[unlikely]] return; }
L_004F73B0:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004F73B4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 12u);  goto L_004F74B8; }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_004F7424; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004F73E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F73DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 496u, depth + 1u); else { c.pc = 0x004F7290u; return; } if (c.pc != 0x004F73DCu) [[unlikely]] return; }
L_004F73DC:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004F73E0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004F73F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F73F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 496u, depth + 1u); else { c.pc = 0x004F7290u; return; } if (c.pc != 0x004F73F0u) [[unlikely]] return; }
L_004F73F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004F73F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F73FCu);  if (depth < kMaxDepth) unit_00FD(c, 536u, depth + 1u); else { c.pc = 0x004F75A0u; return; } if (c.pc != 0x004F73FCu) [[unlikely]] return; }
L_004F73FC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7408u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00FD(c, 534u, depth + 1u); else { c.pc = 0x004F7550u; return; } if (c.pc != 0x004F7408u) [[unlikely]] return; }
L_004F7408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7410u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 533u, depth + 1u); else { c.pc = 0x004F7540u; return; } if (c.pc != 0x004F7410u) [[unlikely]] return; }
L_004F7410:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7420u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00FD(c, 531u, depth + 1u); else { c.pc = 0x004F7520u; return; } if (c.pc != 0x004F7420u) [[unlikely]] return; }
L_004F7420:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_004F7424:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004F7488; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004F7444; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7440u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 496u, depth + 1u); else { c.pc = 0x004F7290u; return; } if (c.pc != 0x004F7440u) [[unlikely]] return; }
L_004F7440:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004F7444:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004F7458; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7454u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 496u, depth + 1u); else { c.pc = 0x004F7290u; return; } if (c.pc != 0x004F7454u) [[unlikely]] return; }
L_004F7454:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004F7458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7460u);  if (depth < kMaxDepth) unit_00FD(c, 536u, depth + 1u); else { c.pc = 0x004F75A0u; return; } if (c.pc != 0x004F7460u) [[unlikely]] return; }
L_004F7460:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F746Cu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00FD(c, 534u, depth + 1u); else { c.pc = 0x004F7550u; return; } if (c.pc != 0x004F746Cu) [[unlikely]] return; }
L_004F746C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7474u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 533u, depth + 1u); else { c.pc = 0x004F7540u; return; } if (c.pc != 0x004F7474u) [[unlikely]] return; }
L_004F7474:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7484u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00FD(c, 531u, depth + 1u); else { c.pc = 0x004F7520u; return; } if (c.pc != 0x004F7484u) [[unlikely]] return; }
L_004F7484:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004F7488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7490u);  if (depth < kMaxDepth) unit_00FD(c, 536u, depth + 1u); else { c.pc = 0x004F75A0u; return; } if (c.pc != 0x004F7490u) [[unlikely]] return; }
L_004F7490:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F749Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00FD(c, 489u, depth + 1u); else { c.pc = 0x004F7150u; return; } if (c.pc != 0x004F749Cu) [[unlikely]] return; }
L_004F749C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F74A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 533u, depth + 1u); else { c.pc = 0x004F7540u; return; } if (c.pc != 0x004F74A4u) [[unlikely]] return; }
L_004F74A4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004F74B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F74B4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004F74B4u) [[unlikely]] return; }
L_004F74B4:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_004F74B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F74F4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F74F4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F74F4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F74F4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F74F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F74F4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004F74F4u) [[unlikely]] return; }
L_004F74F4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_004F7508; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7504u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004F7504u) [[unlikely]] return; }
L_004F7504:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004F7508:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004F7520:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004F7534; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7534u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004F7534u) [[unlikely]] return; }
L_004F7534:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004F7540:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_004F7550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004F7590; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004F7594; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004F7590; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F7590; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F7590; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7590u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004F7590u) [[unlikely]] return; }
L_004F7590:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004F7594:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004F75A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004F75B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004F7630; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[17].w[0] + 20u);  if (t) { goto L_004F7608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0])));  if (t) { goto L_004F75EC; } }
L_004F75E4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_004F75EC:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F75E4u | kUnwind; return; } goto L_004F75E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_004F7628; } }
L_004F7608:
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[2], 0u - 2u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    if (c.r[4].d[0] != c.r[2].d[0]) { st32((c.r[5].w[0]), c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F7608u | kUnwind; return; } goto L_004F7608; }
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_004F7628:
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_004F7630:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F763Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 45u, depth + 1u); else { c.pc = 0x001188B0u; return; } if (c.pc != 0x004F763Cu) [[unlikely]] return; }
L_004F763C:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F767C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F767C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F767C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F767C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F767C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F767Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004F767Cu) [[unlikely]] return; }
L_004F767C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_004F7690; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F768Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004F768Cu) [[unlikely]] return; }
L_004F768C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_004F7690:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F76B0:
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
L_004F76E0:
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
L_004F7710:
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
    { const bool t = c.r[1].d[0] != 0ull; c.r[18].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_004F7774; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F776Cu); set32(c.r[5], c.r[5].w[0] + 15669u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x004F776Cu) [[unlikely]] return; }
L_004F776C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7774u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x004F7774u) [[unlikely]] return; }
L_004F7774:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7780u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004F7780u) [[unlikely]] return; }
L_004F7780:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] + 12u);
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_004F77C0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F779Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004F779Cu) [[unlikely]] return; }
L_004F779C:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 28u));
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 9;
L_004F77C0:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_004F77E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[17].w[0]);  if (t) { goto L_004F77E4; } }
L_004F77E0:
    st32((c.r[20].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_004F77E4:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F77FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x004F77FCu) [[unlikely]] return; }
L_004F77FC:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004F780C; }
    st32((c.r[21].w[0] + 20u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004F780C:
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
L_004F7840:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F4D70u | kUnwind; return; } goto L_004F4D70; }
L_004F7850:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F43F0u | kUnwind; return; } goto L_004F43F0; }
L_004F7860:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004F78B8; } }
L_004F7884:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[17].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_004F78B8; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F78A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F78A4u) [[unlikely]] return; }
L_004F78A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F78ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F3(c, 348u, depth + 1u); else { c.pc = 0x004CED70u; return; } if (c.pc != 0x004F78ACu) [[unlikely]] return; }
L_004F78AC:
    set32(c.r[3], c.r[16].w[0] + c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 48u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004F78C0; } }
L_004F78B8:
    c.budget -= 2;
    if (c.r[16].sd[0] <= 0) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F7884u | kUnwind; return; } goto L_004F7884; }
L_004F78C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004F78E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_004F7938; } }
L_004F78F4:
    set32(c.r[3], c.r[2].w[0] + 48u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 48u));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_004F7938; }
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 44u);
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F7934; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F792Cu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00F3(c, 377u, depth + 1u); else { c.pc = 0x004CF010u; return; } if (c.pc != 0x004F792Cu) [[unlikely]] return; }
L_004F792C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_004F7944; } }
L_004F7934:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_004F7938:
    c.budget -= 2;
    if (c.r[6].sd[0] <= 0) { set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F78F4u | kUnwind; return; } goto L_004F78F4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F7944:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004F7960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 60u));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004F7980; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F797Cu); set32(c.r[4], ld32((c.r[4].w[0] + 32u)));  if (depth < kMaxDepth) unit_00B7(c, 196u, depth + 1u); else { c.pc = 0x003DE220u; return; } if (c.pc != 0x004F797Cu) [[unlikely]] return; }
L_004F797C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004F7980:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004F7990:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 60u));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004F79B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F79ACu); set32(c.r[4], ld32((c.r[4].w[0] + 12u)));  if (depth < kMaxDepth) unit_00BD(c, 15u, depth + 1u); else { c.pc = 0x003F42A0u; return; } if (c.pc != 0x004F79ACu) [[unlikely]] return; }
L_004F79AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004F79B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004F79C0:
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { set32(c.r[5], 0u + 2u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EEFC0u | kUnwind; return; } [[clang::musttail]] return unit_00BB(c, 333u, depth); }
L_004F79E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 60u));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004F7A00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F79FCu); set32(c.r[4], ld32((c.r[4].w[0] + 40u)));  if (depth < kMaxDepth) unit_00FC(c, 37u, depth + 1u); else { c.pc = 0x004F0390u; return; } if (c.pc != 0x004F79FCu) [[unlikely]] return; }
L_004F79FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004F7A00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004F7A10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 60u));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004F7A30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7A2Cu); set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  if (depth < kMaxDepth) unit_00BB(c, 87u, depth + 1u); else { c.pc = 0x003ED200u; return; } if (c.pc != 0x004F7A2Cu) [[unlikely]] return; }
L_004F7A2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004F7A30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004F7A40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 60u));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004F7A60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7A5Cu); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  if (depth < kMaxDepth) unit_00D5(c, 146u, depth + 1u); else { c.pc = 0x00455170u; return; } if (c.pc != 0x004F7A5Cu) [[unlikely]] return; }
L_004F7A5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004F7A60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004F7A70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[4].w[0] + 62u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7A94u); set32(c.r[4], ld32((c.r[4].w[0] + 24u)));  if (depth < kMaxDepth) unit_00D3(c, 20u, depth + 1u); else { c.pc = 0x0044C410u; return; } if (c.pc != 0x004F7A94u) [[unlikely]] return; }
L_004F7A94:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 60u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  goto L_004F7AB0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7AACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 289u, depth + 1u); else { c.pc = 0x003F2120u; return; } if (c.pc != 0x004F7AACu) [[unlikely]] return; }
L_004F7AAC:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_004F7AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7AB8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 357u, depth + 1u); else { c.pc = 0x004E6E50u; return; } if (c.pc != 0x004F7AB8u) [[unlikely]] return; }
L_004F7AB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F7AD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 60u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004F7AFC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7AFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F7AFCu) [[unlikely]] return; }
L_004F7AFC:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7B10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F7B10u) [[unlikely]] return; }
L_004F7B10:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 60u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  goto L_004F7B34; }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7B30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F7B30u) [[unlikely]] return; }
L_004F7B30:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_004F7B34:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7B44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F7B44u) [[unlikely]] return; }
L_004F7B44:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 60u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 60u));  goto L_004F7B68; }
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7B64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F7B64u) [[unlikely]] return; }
L_004F7B64:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 60u));
    c.budget -= 1;
L_004F7B68:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004F7B88; }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7B84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F7B84u) [[unlikely]] return; }
L_004F7B84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004F7B88:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004F7BA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7BC0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 408u, depth + 1u); else { c.pc = 0x004574A0u; return; } if (c.pc != 0x004F7BC0u) [[unlikely]] return; }
L_004F7BC0:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7BD4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F7BD4u) [[unlikely]] return; }
L_004F7BD4:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7BE8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F7BE8u) [[unlikely]] return; }
L_004F7BE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F7C00:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004574B0u | kUnwind; return; } [[clang::musttail]] return unit_00D5(c, 409u, depth); }
L_004F7C10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 60u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_004F7C44; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7C44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F7C44u) [[unlikely]] return; }
L_004F7C44:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7C58u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F7C58u) [[unlikely]] return; }
L_004F7C58:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7C6Cu); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F7C6Cu) [[unlikely]] return; }
L_004F7C6C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 60u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_004F7C90; }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7C8Cu); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F7C8Cu) [[unlikely]] return; }
L_004F7C8C:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_004F7C90:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7CA0u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F7CA0u) [[unlikely]] return; }
L_004F7CA0:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7CB4u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F7CB4u) [[unlikely]] return; }
L_004F7CB4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 60u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004F7CEC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7CD4u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F7CD4u) [[unlikely]] return; }
L_004F7CD4:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7CE8u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F7CE8u) [[unlikely]] return; }
L_004F7CE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004F7CEC:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F7D00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7D24u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004F7D24u) [[unlikely]] return; }
L_004F7D24:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7D34u); st32((c.r[29].w[0] + 84u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004F7D34u) [[unlikely]] return; }
L_004F7D34:
    set32(c.r[18], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[19].d[0]; st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_004F7DA0; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 52u), c.r[19].w[0]);  goto L_004F7D80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7D50u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004F7D50u) [[unlikely]] return; }
L_004F7D50:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7D60u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004F7D60u) [[unlikely]] return; }
L_004F7D60:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F7D7C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7D7Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F7D7Cu) [[unlikely]] return; }
L_004F7D7C:
    st32((c.r[17].w[0] + 52u), c.r[19].w[0]);
    c.budget -= 1;
L_004F7D80:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], 0u + 256u);  goto L_004F7DA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7D90u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004F7D90u) [[unlikely]] return; }
L_004F7D90:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7DA0u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004F7DA0u) [[unlikely]] return; }
L_004F7DA0:
    set32(c.r[4], 0u + 256u);
    c.budget -= 1;
L_004F7DA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7DACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004F7DACu) [[unlikely]] return; }
L_004F7DAC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 56u)));  goto L_004F7DCC; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7DC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x004F7DC4u) [[unlikely]] return; }
L_004F7DC4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 2;
L_004F7DCC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[19].d[0];  if (t) { goto L_004F7E34; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 56u), c.r[19].w[0]);  goto L_004F7E14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7DE4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004F7DE4u) [[unlikely]] return; }
L_004F7DE4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7DF4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004F7DF4u) [[unlikely]] return; }
L_004F7DF4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F7E10; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7E10u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F7E10u) [[unlikely]] return; }
L_004F7E10:
    st32((c.r[17].w[0] + 56u), c.r[19].w[0]);
    c.budget -= 1;
L_004F7E14:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004F7E34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7E24u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004F7E24u) [[unlikely]] return; }
L_004F7E24:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7E34u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004F7E34u) [[unlikely]] return; }
L_004F7E34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 16878u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004F7E50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004F7E58; } }
L_004F7E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7E58u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004F7E58u) [[unlikely]] return; }
L_004F7E58:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7E68u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_006F(c, 166u, depth + 1u); else { c.pc = 0x002BD6C0u; return; } if (c.pc != 0x004F7E68u) [[unlikely]] return; }
L_004F7E68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  goto L_004F7EC8; }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7E94u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004F7E94u) [[unlikely]] return; }
L_004F7E94:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7EA4u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004F7EA4u) [[unlikely]] return; }
L_004F7EA4:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004F7EC4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7EC4u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004F7EC4u) [[unlikely]] return; }
L_004F7EC4:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 1;
L_004F7EC8:
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7EDCu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F7EDCu) [[unlikely]] return; }
L_004F7EDC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[17].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 60u));
    c.budget -= 10;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 88u);  goto L_004F7F2C; }
    set32(c.r[4], 0u + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7F10u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F7F10u) [[unlikely]] return; }
L_004F7F10:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  goto L_004F7F28; }
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7F24u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 379u, depth + 1u); else { c.pc = 0x00456E80u; return; } if (c.pc != 0x004F7F24u) [[unlikely]] return; }
L_004F7F24:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_004F7F28:
    set32(c.r[4], 0u + 88u);
    c.budget -= 1;
L_004F7F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7F34u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F7F34u) [[unlikely]] return; }
L_004F7F34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  goto L_004F7F50; }
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7F4Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BC(c, 237u, depth + 1u); else { c.pc = 0x003F1AF0u; return; } if (c.pc != 0x004F7F4Cu) [[unlikely]] return; }
L_004F7F4C:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_004F7F50:
    set32(c.r[4], 0u + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7F5Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F7F5Cu) [[unlikely]] return; }
L_004F7F5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  goto L_004F7F74; }
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7F70u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 97u, depth + 1u); else { c.pc = 0x00458BF0u; return; } if (c.pc != 0x004F7F70u) [[unlikely]] return; }
L_004F7F70:
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 1;
L_004F7F74:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 60u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 752u);  goto L_004F7FA8; }
    set32(c.r[4], 0u + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7F8Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F7F8Cu) [[unlikely]] return; }
L_004F7F8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  goto L_004F7FA4; }
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7FA0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 309u, depth + 1u); else { c.pc = 0x003EED90u; return; } if (c.pc != 0x004F7FA0u) [[unlikely]] return; }
L_004F7FA0:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_004F7FA4:
    set32(c.r[4], 0u + 752u);
    c.budget -= 1;
L_004F7FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7FB0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F7FB0u) [[unlikely]] return; }
L_004F7FB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  goto L_004F7FC8; }
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7FC4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 157u, depth + 1u); else { c.pc = 0x0044D4A0u; return; } if (c.pc != 0x004F7FC4u) [[unlikely]] return; }
L_004F7FC4:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_004F7FC8:
    set32(c.r[4], 0u + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7FD4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F7FD4u) [[unlikely]] return; }
L_004F7FD4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  goto L_004F7FEC; }
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7FE8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 220u, depth + 1u); else { c.pc = 0x00429620u; return; } if (c.pc != 0x004F7FE8u) [[unlikely]] return; }
L_004F7FE8:
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 1;
L_004F7FEC:
    set32(c.r[4], 0u + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7FF8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F7FF8u) [[unlikely]] return; }
L_004F7FF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  [[clang::musttail]] return unit_00FE(c, 3u, depth); }
    [[clang::musttail]] return unit_00FE(c, 1u, depth);
}

}
