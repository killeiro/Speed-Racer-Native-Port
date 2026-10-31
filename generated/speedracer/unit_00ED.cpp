#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00ED[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5,
    0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9,
    0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 19,
    0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23,
    0, 0, 24, 25, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37,
    0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 64, 0, 65, 0, 0, 0, 0, 66,
    0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 72,
    0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 75, 76, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    0, 88, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0,
    96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 115, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0,
    0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0,
    0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0,
    155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0,
    0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0,
    0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0,
    0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203,
    0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0,
    0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 243, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250,
    0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0,
    0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0,
    0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0,
    0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294,
    0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0,
    0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0,
    312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0,
    0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0,
    0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0,
    0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0,
    0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338,
    0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0,
    0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0,
    0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0,
    355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0,
    363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0,
    0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0,
    0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0,
    376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0,
    382, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0,
    388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392,
    0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 397, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0,
    0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0,
    0, 407, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0,
    414, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0,
    420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0,
    423, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0,
    0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0,
    0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0,
    0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 439, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0,
    445, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449,
    0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0,
    453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0,
    0, 0, 458, 0, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0,
    462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0,
    0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 472, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0,
    478, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 482, 0, 0, 0, 483, 0, 0, 484, 0, 0, 485, 0, 0, 486, 0, 0, 487, 0, 0, 0, 488, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0,
    0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0,
    0, 0, 0, 501, 0, 0, 502, 0, 0, 503, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 506, 0, 0, 507, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512,
    0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0,
    0, 0, 0, 518, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0,
    0, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0,
    0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0,
    0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 545, 0, 0, 0, 0, 546, 0, 0, 547, 0, 0, 548, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0,
    552, 0, 0, 553, 0, 0, 554, 0, 555, 0, 0, 0, 556, 0, 0, 557, 0, 0, 558, 0, 559, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 563, 0, 0, 564, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0,
    0, 568, 0, 0, 569, 0, 0, 570, 0, 571, 0, 0, 0, 572, 0, 0, 573, 0, 0, 574, 0, 575, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 580, 0, 0, 581, 0, 0, 0,
    582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00ED(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004B4000;
    case 2u: goto L_004B401C;
    case 3u: goto L_004B4034;
    case 4u: goto L_004B4058;
    case 5u: goto L_004B407C;
    case 6u: goto L_004B4098;
    case 7u: goto L_004B40B4;
    case 8u: goto L_004B40D8;
    case 9u: goto L_004B40FC;
    case 10u: goto L_004B4114;
    case 11u: goto L_004B4120;
    case 12u: goto L_004B412C;
    case 13u: goto L_004B4158;
    case 14u: goto L_004B4174;
    case 15u: goto L_004B4190;
    case 16u: goto L_004B41B4;
    case 17u: goto L_004B41D8;
    case 18u: goto L_004B41F0;
    case 19u: goto L_004B41FC;
    case 20u: goto L_004B4208;
    case 21u: goto L_004B421C;
    case 22u: goto L_004B4264;
    case 23u: goto L_004B427C;
    case 24u: goto L_004B4288;
    case 25u: goto L_004B428C;
    case 26u: goto L_004B4294;
    case 27u: goto L_004B42A4;
    case 28u: goto L_004B42C0;
    case 29u: goto L_004B42D0;
    case 30u: goto L_004B42E0;
    case 31u: goto L_004B4314;
    case 32u: goto L_004B4328;
    case 33u: goto L_004B4340;
    case 34u: goto L_004B4360;
    case 35u: goto L_004B4380;
    case 36u: goto L_004B43B0;
    case 37u: goto L_004B43FC;
    case 38u: goto L_004B440C;
    case 39u: goto L_004B441C;
    case 40u: goto L_004B442C;
    case 41u: goto L_004B4440;
    case 42u: goto L_004B445C;
    case 43u: goto L_004B446C;
    case 44u: goto L_004B447C;
    case 45u: goto L_004B4490;
    case 46u: goto L_004B44AC;
    case 47u: goto L_004B44D0;
    case 48u: goto L_004B44E0;
    case 49u: goto L_004B44F0;
    case 50u: goto L_004B4500;
    case 51u: goto L_004B4520;
    case 52u: goto L_004B4534;
    case 53u: goto L_004B4544;
    case 54u: goto L_004B4554;
    case 55u: goto L_004B4564;
    case 56u: goto L_004B4580;
    case 57u: goto L_004B4594;
    case 58u: goto L_004B45BC;
    case 59u: goto L_004B4600;
    case 60u: goto L_004B4610;
    case 61u: goto L_004B4634;
    case 62u: goto L_004B4644;
    case 63u: goto L_004B4654;
    case 64u: goto L_004B4660;
    case 65u: goto L_004B4668;
    case 66u: goto L_004B467C;
    case 67u: goto L_004B4688;
    case 68u: goto L_004B4698;
    case 69u: goto L_004B46C0;
    case 70u: goto L_004B4758;
    case 71u: goto L_004B4764;
    case 72u: goto L_004B477C;
    case 73u: goto L_004B47A0;
    case 74u: goto L_004B47C4;
    case 75u: goto L_004B4814;
    case 76u: goto L_004B4818;
    case 77u: goto L_004B4824;
    case 78u: goto L_004B482C;
    case 79u: goto L_004B4844;
    case 80u: goto L_004B4874;
    case 81u: goto L_004B48B0;
    case 82u: goto L_004B48D4;
    case 83u: goto L_004B48F0;
    case 84u: goto L_004B4914;
    case 85u: goto L_004B492C;
    case 86u: goto L_004B4950;
    case 87u: goto L_004B4960;
    case 88u: goto L_004B4984;
    case 89u: goto L_004B4990;
    case 90u: goto L_004B49A0;
    case 91u: goto L_004B49B0;
    case 92u: goto L_004B49C0;
    case 93u: goto L_004B49D0;
    case 94u: goto L_004B49E0;
    case 95u: goto L_004B49F0;
    case 96u: goto L_004B4A00;
    case 97u: goto L_004B4A10;
    case 98u: goto L_004B4A20;
    case 99u: goto L_004B4A30;
    case 100u: goto L_004B4A40;
    case 101u: goto L_004B4A80;
    case 102u: goto L_004B4A90;
    case 103u: goto L_004B4AA0;
    case 104u: goto L_004B4AD4;
    case 105u: goto L_004B4AE8;
    case 106u: goto L_004B4B38;
    case 107u: goto L_004B4B60;
    case 108u: goto L_004B4B90;
    case 109u: goto L_004B4BA8;
    case 110u: goto L_004B4BC0;
    case 111u: goto L_004B4BD4;
    case 112u: goto L_004B4C00;
    case 113u: goto L_004B4C28;
    case 114u: goto L_004B4C30;
    case 115u: goto L_004B4C3C;
    case 116u: goto L_004B4C44;
    case 117u: goto L_004B4C50;
    case 118u: goto L_004B4C78;
    case 119u: goto L_004B4C94;
    case 120u: goto L_004B4CB0;
    case 121u: goto L_004B4CC0;
    case 122u: goto L_004B4CDC;
    case 123u: goto L_004B4D04;
    case 124u: goto L_004B4D20;
    case 125u: goto L_004B4D44;
    case 126u: goto L_004B4D5C;
    case 127u: goto L_004B4D74;
    case 128u: goto L_004B4D80;
    case 129u: goto L_004B4DAC;
    case 130u: goto L_004B4DC8;
    case 131u: goto L_004B4DEC;
    case 132u: goto L_004B4E04;
    case 133u: goto L_004B4E1C;
    case 134u: goto L_004B4E28;
    case 135u: goto L_004B4E34;
    case 136u: goto L_004B4E40;
    case 137u: goto L_004B4E58;
    case 138u: goto L_004B4E90;
    case 139u: goto L_004B4EB4;
    case 140u: goto L_004B4EC0;
    case 141u: goto L_004B4EE0;
    case 142u: goto L_004B4F40;
    case 143u: goto L_004B4F58;
    case 144u: goto L_004B4F70;
    case 145u: goto L_004B4F94;
    case 146u: goto L_004B4FB0;
    case 147u: goto L_004B4FD4;
    case 148u: goto L_004B4FEC;
    case 149u: goto L_004B5010;
    case 150u: goto L_004B5020;
    case 151u: goto L_004B5044;
    case 152u: goto L_004B5050;
    case 153u: goto L_004B5060;
    case 154u: goto L_004B5070;
    case 155u: goto L_004B5080;
    case 156u: goto L_004B5090;
    case 157u: goto L_004B50A0;
    case 158u: goto L_004B50B0;
    case 159u: goto L_004B50C0;
    case 160u: goto L_004B50D0;
    case 161u: goto L_004B50E0;
    case 162u: goto L_004B50F0;
    case 163u: goto L_004B5100;
    case 164u: goto L_004B5168;
    case 165u: goto L_004B5180;
    case 166u: goto L_004B51A0;
    case 167u: goto L_004B51E0;
    case 168u: goto L_004B51F0;
    case 169u: goto L_004B5230;
    case 170u: goto L_004B5244;
    case 171u: goto L_004B5250;
    case 172u: goto L_004B5268;
    case 173u: goto L_004B5294;
    case 174u: goto L_004B52A0;
    case 175u: goto L_004B52B8;
    case 176u: goto L_004B52D0;
    case 177u: goto L_004B52E0;
    case 178u: goto L_004B52F4;
    case 179u: goto L_004B5308;
    case 180u: goto L_004B5314;
    case 181u: goto L_004B533C;
    case 182u: goto L_004B5344;
    case 183u: goto L_004B5350;
    case 184u: goto L_004B535C;
    case 185u: goto L_004B5390;
    case 186u: goto L_004B53A4;
    case 187u: goto L_004B53B8;
    case 188u: goto L_004B53D0;
    case 189u: goto L_004B5400;
    case 190u: goto L_004B5430;
    case 191u: goto L_004B5440;
    case 192u: goto L_004B5460;
    case 193u: goto L_004B546C;
    case 194u: goto L_004B5490;
    case 195u: goto L_004B549C;
    case 196u: goto L_004B54E4;
    case 197u: goto L_004B5504;
    case 198u: goto L_004B5514;
    case 199u: goto L_004B5530;
    case 200u: goto L_004B5544;
    case 201u: goto L_004B5554;
    case 202u: goto L_004B5568;
    case 203u: goto L_004B557C;
    case 204u: goto L_004B5588;
    case 205u: goto L_004B55B0;
    case 206u: goto L_004B55C8;
    case 207u: goto L_004B55D0;
    case 208u: goto L_004B55DC;
    case 209u: goto L_004B55F0;
    case 210u: goto L_004B5624;
    case 211u: goto L_004B5640;
    case 212u: goto L_004B565C;
    case 213u: goto L_004B5674;
    case 214u: goto L_004B5680;
    case 215u: goto L_004B569C;
    case 216u: goto L_004B56A8;
    case 217u: goto L_004B56BC;
    case 218u: goto L_004B56D0;
    case 219u: goto L_004B570C;
    case 220u: goto L_004B571C;
    case 221u: goto L_004B5758;
    case 222u: goto L_004B5768;
    case 223u: goto L_004B5780;
    case 224u: goto L_004B5798;
    case 225u: goto L_004B57B8;
    case 226u: goto L_004B57C0;
    case 227u: goto L_004B57E4;
    case 228u: goto L_004B57F0;
    case 229u: goto L_004B5804;
    case 230u: goto L_004B5824;
    case 231u: goto L_004B5834;
    case 232u: goto L_004B5844;
    case 233u: goto L_004B58E4;
    case 234u: goto L_004B58F4;
    case 235u: goto L_004B5980;
    case 236u: goto L_004B598C;
    case 237u: goto L_004B5998;
    case 238u: goto L_004B59A4;
    case 239u: goto L_004B59B4;
    case 240u: goto L_004B5A20;
    case 241u: goto L_004B5A2C;
    case 242u: goto L_004B5A38;
    case 243u: goto L_004B5A40;
    case 244u: goto L_004B5A50;
    case 245u: goto L_004B5A58;
    case 246u: goto L_004B5A80;
    case 247u: goto L_004B5AA8;
    case 248u: goto L_004B5AB8;
    case 249u: goto L_004B5ADC;
    case 250u: goto L_004B5AFC;
    case 251u: goto L_004B5B0C;
    case 252u: goto L_004B5B28;
    case 253u: goto L_004B5B3C;
    case 254u: goto L_004B5B4C;
    case 255u: goto L_004B5B58;
    case 256u: goto L_004B5B6C;
    case 257u: goto L_004B5B88;
    case 258u: goto L_004B5B98;
    case 259u: goto L_004B5BB8;
    case 260u: goto L_004B5BC4;
    case 261u: goto L_004B5BE8;
    case 262u: goto L_004B5BF4;
    case 263u: goto L_004B5C64;
    case 264u: goto L_004B5C78;
    case 265u: goto L_004B5CA0;
    case 266u: goto L_004B5CB0;
    case 267u: goto L_004B5CF0;
    case 268u: goto L_004B5D0C;
    case 269u: goto L_004B5D20;
    case 270u: goto L_004B5D58;
    case 271u: goto L_004B5D74;
    case 272u: goto L_004B5D90;
    case 273u: goto L_004B5DA8;
    case 274u: goto L_004B5DB8;
    case 275u: goto L_004B5DF0;
    case 276u: goto L_004B5E0C;
    case 277u: goto L_004B5E44;
    case 278u: goto L_004B5E60;
    case 279u: goto L_004B5E6C;
    case 280u: goto L_004B5EA8;
    case 281u: goto L_004B5ECC;
    case 282u: goto L_004B5EF4;
    case 283u: goto L_004B5F24;
    case 284u: goto L_004B5F40;
    case 285u: goto L_004B5F54;
    case 286u: goto L_004B5F78;
    case 287u: goto L_004B5F90;
    case 288u: goto L_004B5FB8;
    case 289u: goto L_004B5FE0;
    case 290u: goto L_004B6010;
    case 291u: goto L_004B602C;
    case 292u: goto L_004B6040;
    case 293u: goto L_004B6064;
    case 294u: goto L_004B607C;
    case 295u: goto L_004B6088;
    case 296u: goto L_004B60A0;
    case 297u: goto L_004B60F4;
    case 298u: goto L_004B6124;
    case 299u: goto L_004B6130;
    case 300u: goto L_004B6158;
    case 301u: goto L_004B61EC;
    case 302u: goto L_004B6208;
    case 303u: goto L_004B6220;
    case 304u: goto L_004B622C;
    case 305u: goto L_004B6234;
    case 306u: goto L_004B6254;
    case 307u: goto L_004B6284;
    case 308u: goto L_004B6290;
    case 309u: goto L_004B62B4;
    case 310u: goto L_004B62D0;
    case 311u: goto L_004B62F0;
    case 312u: goto L_004B6300;
    case 313u: goto L_004B6340;
    case 314u: goto L_004B635C;
    case 315u: goto L_004B636C;
    case 316u: goto L_004B6388;
    case 317u: goto L_004B639C;
    case 318u: goto L_004B63AC;
    case 319u: goto L_004B63C8;
    case 320u: goto L_004B63D8;
    case 321u: goto L_004B63F4;
    case 322u: goto L_004B6408;
    case 323u: goto L_004B6418;
    case 324u: goto L_004B6434;
    case 325u: goto L_004B6444;
    case 326u: goto L_004B6460;
    case 327u: goto L_004B6474;
    case 328u: goto L_004B6484;
    case 329u: goto L_004B6498;
    case 330u: goto L_004B64B8;
    case 331u: goto L_004B64C8;
    case 332u: goto L_004B64E4;
    case 333u: goto L_004B6504;
    case 334u: goto L_004B6514;
    case 335u: goto L_004B6530;
    case 336u: goto L_004B6550;
    case 337u: goto L_004B6560;
    case 338u: goto L_004B657C;
    case 339u: goto L_004B659C;
    case 340u: goto L_004B65AC;
    case 341u: goto L_004B65C8;
    case 342u: goto L_004B65D4;
    case 343u: goto L_004B65EC;
    case 344u: goto L_004B6610;
    case 345u: goto L_004B6634;
    case 346u: goto L_004B6668;
    case 347u: goto L_004B6678;
    case 348u: goto L_004B668C;
    case 349u: goto L_004B669C;
    case 350u: goto L_004B66B0;
    case 351u: goto L_004B66C0;
    case 352u: goto L_004B66D4;
    case 353u: goto L_004B66E4;
    case 354u: goto L_004B66EC;
    case 355u: goto L_004B6700;
    case 356u: goto L_004B6730;
    case 357u: goto L_004B675C;
    case 358u: goto L_004B676C;
    case 359u: goto L_004B679C;
    case 360u: goto L_004B67CC;
    case 361u: goto L_004B67F8;
    case 362u: goto L_004B6868;
    case 363u: goto L_004B6880;
    case 364u: goto L_004B6898;
    case 365u: goto L_004B68AC;
    case 366u: goto L_004B68C4;
    case 367u: goto L_004B68F4;
    case 368u: goto L_004B6914;
    case 369u: goto L_004B692C;
    case 370u: goto L_004B6950;
    case 371u: goto L_004B6974;
    case 372u: goto L_004B6990;
    case 373u: goto L_004B69B4;
    case 374u: goto L_004B69CC;
    case 375u: goto L_004B69F0;
    case 376u: goto L_004B6A00;
    case 377u: goto L_004B6A24;
    case 378u: goto L_004B6A30;
    case 379u: goto L_004B6A40;
    case 380u: goto L_004B6A50;
    case 381u: goto L_004B6A74;
    case 382u: goto L_004B6A80;
    case 383u: goto L_004B6A90;
    case 384u: goto L_004B6AA0;
    case 385u: goto L_004B6AC8;
    case 386u: goto L_004B6AE4;
    case 387u: goto L_004B6AF4;
    case 388u: goto L_004B6B00;
    case 389u: goto L_004B6B1C;
    case 390u: goto L_004B6B34;
    case 391u: goto L_004B6B4C;
    case 392u: goto L_004B6B7C;
    case 393u: goto L_004B6B90;
    case 394u: goto L_004B6BBC;
    case 395u: goto L_004B6BD8;
    case 396u: goto L_004B6BE8;
    case 397u: goto L_004B6BF4;
    case 398u: goto L_004B6C2C;
    case 399u: goto L_004B6C38;
    case 400u: goto L_004B6C4C;
    case 401u: goto L_004B6C64;
    case 402u: goto L_004B6C78;
    case 403u: goto L_004B6C84;
    case 404u: goto L_004B6CA0;
    case 405u: goto L_004B6CB4;
    case 406u: goto L_004B6CF4;
    case 407u: goto L_004B6D04;
    case 408u: goto L_004B6D18;
    case 409u: goto L_004B6D24;
    case 410u: goto L_004B6D38;
    case 411u: goto L_004B6D50;
    case 412u: goto L_004B6D64;
    case 413u: goto L_004B6D70;
    case 414u: goto L_004B6D80;
    case 415u: goto L_004B6D94;
    case 416u: goto L_004B6DA0;
    case 417u: goto L_004B6DBC;
    case 418u: goto L_004B6DE0;
    case 419u: goto L_004B6DF4;
    case 420u: goto L_004B6E00;
    case 421u: goto L_004B6E64;
    case 422u: goto L_004B6E70;
    case 423u: goto L_004B6E80;
    case 424u: goto L_004B6E8C;
    case 425u: goto L_004B6EB0;
    case 426u: goto L_004B6ED4;
    case 427u: goto L_004B6EF4;
    case 428u: goto L_004B6F14;
    case 429u: goto L_004B6F34;
    case 430u: goto L_004B6F54;
    case 431u: goto L_004B6F74;
    case 432u: goto L_004B6F94;
    case 433u: goto L_004B6FA4;
    case 434u: goto L_004B6FCC;
    case 435u: goto L_004B6FF4;
    case 436u: goto L_004B7018;
    case 437u: goto L_004B7034;
    case 438u: goto L_004B7058;
    case 439u: goto L_004B7078;
    case 440u: goto L_004B70A8;
    case 441u: goto L_004B70D4;
    case 442u: goto L_004B7118;
    case 443u: goto L_004B7144;
    case 444u: goto L_004B7170;
    case 445u: goto L_004B7180;
    case 446u: goto L_004B7188;
    case 447u: goto L_004B7198;
    case 448u: goto L_004B71D0;
    case 449u: goto L_004B71FC;
    case 450u: goto L_004B7218;
    case 451u: goto L_004B7244;
    case 452u: goto L_004B7260;
    case 453u: goto L_004B7280;
    case 454u: goto L_004B7290;
    case 455u: goto L_004B72B0;
    case 456u: goto L_004B72DC;
    case 457u: goto L_004B72F8;
    case 458u: goto L_004B7308;
    case 459u: goto L_004B7314;
    case 460u: goto L_004B7330;
    case 461u: goto L_004B7360;
    case 462u: goto L_004B7380;
    case 463u: goto L_004B7398;
    case 464u: goto L_004B73AC;
    case 465u: goto L_004B73C4;
    case 466u: goto L_004B73D0;
    case 467u: goto L_004B73DC;
    case 468u: goto L_004B73F0;
    case 469u: goto L_004B7414;
    case 470u: goto L_004B7438;
    case 471u: goto L_004B7448;
    case 472u: goto L_004B7454;
    case 473u: goto L_004B7460;
    case 474u: goto L_004B7474;
    case 475u: goto L_004B74A0;
    case 476u: goto L_004B74D4;
    case 477u: goto L_004B74F4;
    case 478u: goto L_004B7500;
    case 479u: goto L_004B750C;
    case 480u: goto L_004B7524;
    case 481u: goto L_004B7538;
    case 482u: goto L_004B7584;
    case 483u: goto L_004B7594;
    case 484u: goto L_004B75A0;
    case 485u: goto L_004B75AC;
    case 486u: goto L_004B75B8;
    case 487u: goto L_004B75C4;
    case 488u: goto L_004B75D4;
    case 489u: goto L_004B75E0;
    case 490u: goto L_004B75EC;
    case 491u: goto L_004B7610;
    case 492u: goto L_004B7640;
    case 493u: goto L_004B767C;
    case 494u: goto L_004B76B0;
    case 495u: goto L_004B76C8;
    case 496u: goto L_004B7714;
    case 497u: goto L_004B7734;
    case 498u: goto L_004B774C;
    case 499u: goto L_004B7760;
    case 500u: goto L_004B7770;
    case 501u: goto L_004B778C;
    case 502u: goto L_004B7798;
    case 503u: goto L_004B77A4;
    case 504u: goto L_004B77BC;
    case 505u: goto L_004B77DC;
    case 506u: goto L_004B77E8;
    case 507u: goto L_004B77F4;
    case 508u: goto L_004B7820;
    case 509u: goto L_004B7838;
    case 510u: goto L_004B7848;
    case 511u: goto L_004B7854;
    case 512u: goto L_004B787C;
    case 513u: goto L_004B7884;
    case 514u: goto L_004B78A0;
    case 515u: goto L_004B78CC;
    case 516u: goto L_004B78DC;
    case 517u: goto L_004B78F8;
    case 518u: goto L_004B790C;
    case 519u: goto L_004B7918;
    case 520u: goto L_004B7928;
    case 521u: goto L_004B7950;
    case 522u: goto L_004B796C;
    case 523u: goto L_004B7990;
    case 524u: goto L_004B79A4;
    case 525u: goto L_004B79B8;
    case 526u: goto L_004B79D8;
    case 527u: goto L_004B7A00;
    case 528u: goto L_004B7A54;
    case 529u: goto L_004B7A6C;
    case 530u: goto L_004B7A90;
    case 531u: goto L_004B7AD4;
    case 532u: goto L_004B7AE0;
    case 533u: goto L_004B7B1C;
    case 534u: goto L_004B7B30;
    case 535u: goto L_004B7B4C;
    case 536u: goto L_004B7B74;
    case 537u: goto L_004B7BA0;
    case 538u: goto L_004B7BF0;
    case 539u: goto L_004B7C08;
    case 540u: goto L_004B7C20;
    case 541u: goto L_004B7C54;
    case 542u: goto L_004B7C5C;
    case 543u: goto L_004B7C8C;
    case 544u: goto L_004B7CC0;
    case 545u: goto L_004B7D08;
    case 546u: goto L_004B7D1C;
    case 547u: goto L_004B7D28;
    case 548u: goto L_004B7D34;
    case 549u: goto L_004B7D3C;
    case 550u: goto L_004B7D4C;
    case 551u: goto L_004B7D6C;
    case 552u: goto L_004B7D80;
    case 553u: goto L_004B7D8C;
    case 554u: goto L_004B7D98;
    case 555u: goto L_004B7DA0;
    case 556u: goto L_004B7DB0;
    case 557u: goto L_004B7DBC;
    case 558u: goto L_004B7DC8;
    case 559u: goto L_004B7DD0;
    case 560u: goto L_004B7DE0;
    case 561u: goto L_004B7E0C;
    case 562u: goto L_004B7E20;
    case 563u: goto L_004B7E2C;
    case 564u: goto L_004B7E38;
    case 565u: goto L_004B7E40;
    case 566u: goto L_004B7E50;
    case 567u: goto L_004B7E70;
    case 568u: goto L_004B7E84;
    case 569u: goto L_004B7E90;
    case 570u: goto L_004B7E9C;
    case 571u: goto L_004B7EA4;
    case 572u: goto L_004B7EB4;
    case 573u: goto L_004B7EC0;
    case 574u: goto L_004B7ECC;
    case 575u: goto L_004B7ED4;
    case 576u: goto L_004B7EE4;
    case 577u: goto L_004B7F24;
    case 578u: goto L_004B7F34;
    case 579u: goto L_004B7F50;
    case 580u: goto L_004B7F64;
    case 581u: goto L_004B7F70;
    case 582u: goto L_004B7F80;
    case 583u: goto L_004B7FC0;
    case 584u: goto L_004B7FD0;
    case 585u: goto L_004B7FE0;
    default: bad_entry(c, 0x004B4000u); return;
    }
L_004B4000:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_004B4024; }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B401Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B401Cu) [[unlikely]] return; }
L_004B401C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B4034; } }
L_004B4024:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4034u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B4034u) [[unlikely]] return; }
L_004B4034:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_004B4048; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004B4208; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_004B4048:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4058u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B4058u) [[unlikely]] return; }
L_004B4058:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004B4134; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_004B4134; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25180u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B407Cu); set32(c.r[6], c.r[6].w[0] - 2868u);  if (depth < kMaxDepth) unit_00CD(c, 130u, depth + 1u); else { c.pc = 0x00434D60u; return; } if (c.pc != 0x004B407Cu) [[unlikely]] return; }
L_004B407C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 2857u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4098u); set32(c.r[7], c.r[7].w[0] - 2891u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004B4098u) [[unlikely]] return; }
L_004B4098:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 2842u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B40B4u); set32(c.r[7], c.r[7].w[0] - 2891u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004B40B4u) [[unlikely]] return; }
L_004B40B4:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 177u);  goto L_004B40C8; }
    set32(c.r[6], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_004B40C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B40D8u); set32(c.r[5], c.r[5].w[0] - 2842u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x004B40D8u) [[unlikely]] return; }
L_004B40D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 161u);  goto L_004B40EC; }
    set32(c.r[6], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_004B40EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B40FCu); set32(c.r[5], c.r[5].w[0] - 2857u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x004B40FCu) [[unlikely]] return; }
L_004B40FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 2890u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4114u); set32(c.r[6], c.r[6].w[0] - 2883u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x004B4114u) [[unlikely]] return; }
L_004B4114:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4120u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B4120u) [[unlikely]] return; }
L_004B4120:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B412Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B412Cu) [[unlikely]] return; }
L_004B412C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B4208; } }
L_004B4134:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_004B4208; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_004B4208; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25180u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4158u); set32(c.r[6], c.r[6].w[0] - 2834u);  if (depth < kMaxDepth) unit_00CD(c, 130u, depth + 1u); else { c.pc = 0x00434D60u; return; } if (c.pc != 0x004B4158u) [[unlikely]] return; }
L_004B4158:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 2842u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4174u); set32(c.r[7], c.r[7].w[0] - 2891u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004B4174u) [[unlikely]] return; }
L_004B4174:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 2857u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4190u); set32(c.r[7], c.r[7].w[0] - 2891u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004B4190u) [[unlikely]] return; }
L_004B4190:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 129u);  goto L_004B41A4; }
    set32(c.r[6], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_004B41A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B41B4u); set32(c.r[5], c.r[5].w[0] - 2842u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x004B41B4u) [[unlikely]] return; }
L_004B41B4:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 145u);  goto L_004B41C8; }
    set32(c.r[6], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_004B41C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B41D8u); set32(c.r[5], c.r[5].w[0] - 2857u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x004B41D8u) [[unlikely]] return; }
L_004B41D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 2890u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B41F0u); set32(c.r[6], c.r[6].w[0] - 2825u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x004B41F0u) [[unlikely]] return; }
L_004B41F0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B41FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B41FCu) [[unlikely]] return; }
L_004B41FC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4208u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B4208u) [[unlikely]] return; }
L_004B4208:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004B421C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B421Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x004B421Cu) [[unlikely]] return; }
L_004B421C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[19].w[0] + 192u));  goto L_004B4234; }
    set32(c.r[2], ld32((c.r[20].w[0] + 400u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 400u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 192u));
    c.budget -= 4;
L_004B4234:
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 192u);  goto L_004B4274; }
    set32(c.r[3], ld32((c.r[20].w[0] + 376u)));
    set32(c.r[4], c.r[20].w[0] + 368u);
    set32(c.r[2], ld32((c.r[20].w[0] + 380u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 236u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4264u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x004B4264u) [[unlikely]] return; }
L_004B4264:
    set32(c.r[2], ld32((c.r[20].w[0] + 396u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 396u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
L_004B4274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B427Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B427Cu) [[unlikely]] return; }
L_004B427C:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4288u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B4288u) [[unlikely]] return; }
L_004B4288:
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 1;
L_004B428C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    c.budget -= 2;
L_004B4294:
    c.r[16].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B42A4u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);  if (depth < kMaxDepth) unit_0022(c, 185u, depth + 1u); else { c.pc = 0x0018AB20u; return; } if (c.pc != 0x004B42A4u) [[unlikely]] return; }
L_004B42A4:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B3EFCu | kUnwind; return; } [[clang::musttail]] return unit_00EC(c, 475u, depth); }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B42C0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B42C0u) [[unlikely]] return; }
L_004B42C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_004B4384; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B42D0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 16u, depth + 1u); else { c.pc = 0x0018C2E0u; return; } if (c.pc != 0x004B42D0u) [[unlikely]] return; }
L_004B42D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B4380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B42E0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 16u, depth + 1u); else { c.pc = 0x0018C2E0u; return; } if (c.pc != 0x004B42E0u) [[unlikely]] return; }
L_004B42E0:
    c.r[4].d[0] = ld8((c.r[2].w[0] + 192u));
    c.r[3].d[0] = c.r[4].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B4304; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_004B4304:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B4380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4314u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 16u, depth + 1u); else { c.pc = 0x0018C2E0u; return; } if (c.pc != 0x004B4314u) [[unlikely]] return; }
L_004B4314:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4328u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B4328u) [[unlikely]] return; }
L_004B4328:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 240u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4340u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B4340u) [[unlikely]] return; }
L_004B4340:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B4380; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 244u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4360u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B4360u) [[unlikely]] return; }
L_004B4360:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B4380; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 236u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4380u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B4380u) [[unlikely]] return; }
L_004B4380:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_004B4384:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_004B43B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 384u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_004B4420; } }
    c.f[0] = ld32((c.r[16].w[0] + 392u));
    c.f[1] = fp::add(c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 392u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 388u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004B4424; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 292u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B43FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B43FCu) [[unlikely]] return; }
L_004B43FC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B440Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B440Cu) [[unlikely]] return; }
L_004B440C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 268u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B441Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B441Cu) [[unlikely]] return; }
L_004B441C:
    st32((c.r[16].w[0] + 392u), 0u);
    c.budget -= 1;
L_004B4420:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004B4424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B442Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0022(c, 171u, depth + 1u); else { c.pc = 0x0018A610u; return; } if (c.pc != 0x004B442Cu) [[unlikely]] return; }
L_004B442C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B4440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 292u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B445Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B445Cu) [[unlikely]] return; }
L_004B445C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B446Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B446Cu) [[unlikely]] return; }
L_004B446C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 268u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B447Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B447Cu) [[unlikely]] return; }
L_004B447C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B4490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B44ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 43u, depth + 1u); else { c.pc = 0x0018C900u; return; } if (c.pc != 0x004B44ACu) [[unlikely]] return; }
L_004B44AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 296u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_004B44D4; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 240u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B44D0u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B44D0u) [[unlikely]] return; }
L_004B44D0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_004B44D4:
    set32(c.r[25], ld32((c.r[25].w[0] + 292u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B44E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B44E0u) [[unlikely]] return; }
L_004B44E0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B44F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B44F0u) [[unlikely]] return; }
L_004B44F0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 268u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4500u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B4500u) [[unlikely]] return; }
L_004B4500:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B4520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4534u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 53u, depth + 1u); else { c.pc = 0x0018CF30u; return; } if (c.pc != 0x004B4534u) [[unlikely]] return; }
L_004B4534:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 292u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4544u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B4544u) [[unlikely]] return; }
L_004B4544:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4554u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B4554u) [[unlikely]] return; }
L_004B4554:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 268u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4564u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B4564u) [[unlikely]] return; }
L_004B4564:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B4580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004B45C8; } }
L_004B4594:
    set32(c.r[2], ld32((c.r[16].w[0] + 292u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 288u)));  goto L_004B45C0; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B45BCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B45BCu) [[unlikely]] return; }
L_004B45BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 288u)));
    c.budget -= 1;
L_004B45C0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 2;
L_004B45C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 288u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 288u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4594u | kUnwind; return; } goto L_004B4594; }
    st32((c.r[16].w[0] + 296u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 304u), 0u);
    st32((c.r[16].w[0] + 404u), 0u);
    st32((c.r[16].w[0] + 396u), 0u);
    st32((c.r[16].w[0] + 400u), 0u);
    st32((c.r[16].w[0] + 408u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4600u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B4600u) [[unlikely]] return; }
L_004B4600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B4610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 292u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4634u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B4634u) [[unlikely]] return; }
L_004B4634:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4644u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B4644u) [[unlikely]] return; }
L_004B4644:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 268u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4654u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B4654u) [[unlikely]] return; }
L_004B4654:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4660u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 108u, depth + 1u); else { c.pc = 0x001A1C50u; return; } if (c.pc != 0x004B4660u) [[unlikely]] return; }
L_004B4660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004B4680; } }
L_004B4668:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 240u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B467Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B467Cu) [[unlikely]] return; }
L_004B467C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004B4680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4688u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 16u, depth + 1u); else { c.pc = 0x0018C2E0u; return; } if (c.pc != 0x004B4688u) [[unlikely]] return; }
L_004B4688:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0] + 392u), 0u);  goto L_004B46A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4698u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 185u, depth + 1u); else { c.pc = 0x0018AB20u; return; } if (c.pc != 0x004B4698u) [[unlikely]] return; }
L_004B4698:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4668u | kUnwind; return; } goto L_004B4668; }
    st32((c.r[17].w[0] + 392u), 0u);
    c.budget -= 1;
L_004B46A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B46C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004B477C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 25408u);
    set32(c.r[2], c.r[2].w[0] - 25384u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 25352u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 25340u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 25316u);
    set32(c.r[2], c.r[17].w[0] + 368u);
    st32((c.r[17].w[0] + 132u), c.r[3].w[0]);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 376u), 0u);  if (t) { goto L_004B4758; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004B475C; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B4758; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B4758; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 380u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B4758; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B4758; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4758u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004B4758u) [[unlikely]] return; }
L_004B4758:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004B475C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4764u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001D(c, 308u, depth + 1u); else { c.pc = 0x00177DE0u; return; } if (c.pc != 0x004B4764u) [[unlikely]] return; }
L_004B4764:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004B4780; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B477Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004B477Cu) [[unlikely]] return; }
L_004B477C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004B4780:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B47A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B47C4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_001D(c, 311u, depth + 1u); else { c.pc = 0x00177E90u; return; } if (c.pc != 0x004B47C4u) [[unlikely]] return; }
L_004B47C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 25408u);
    set32(c.r[3], c.r[3].w[0] - 25384u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 25352u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 25340u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[18].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 25316u);
    st32((c.r[18].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 18;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[18].w[0] + 368u);  if (t) { goto L_004B4848; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4814u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004B4814u) [[unlikely]] return; }
L_004B4814:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004B4818:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_004B4834; }
L_004B4824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B482Cu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004B482Cu) [[unlikely]] return; }
L_004B482C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_004B4834:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0]), c.r[17].w[0]);  goto L_004B484C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4844u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004B4844u) [[unlikely]] return; }
L_004B4844:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004B4848:
    st32((c.r[16].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_004B484C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[4], c.r[18].w[0] + 368u);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), 0u);
    st8((c.r[18].w[0] + 384u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 388u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4874u); st32((c.r[18].w[0] + 392u), 0u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x004B4874u) [[unlikely]] return; }
L_004B4874:
    st32((c.r[18].w[0] + 376u), 0u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[18].w[0] + 404u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 396u), 0u);
    st32((c.r[18].w[0] + 400u), 0u);
    st32((c.r[18].w[0] + 408u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004B48B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29572u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_004B48CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004B48DC; } }
L_004B48CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B48D4u);  if (depth < kMaxDepth) unit_001E(c, 3u, depth + 1u); else { c.pc = 0x00178020u; return; } if (c.pc != 0x004B48D4u) [[unlikely]] return; }
L_004B48D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_004B48DC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004B48F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4914u); set32(c.r[4], c.r[4].w[0] - 3040u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004B4914u) [[unlikely]] return; }
L_004B4914:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004B4924; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004B4934; } }
L_004B4924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B492Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001E(c, 5u, depth + 1u); else { c.pc = 0x00178080u; return; } if (c.pc != 0x004B492Cu) [[unlikely]] return; }
L_004B492C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004B4934:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B4950:
    set32(c.r[2], ld32((c.r[28].w[0] - 30968u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004B4960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29572u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_004B497C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004B4984; } }
L_004B497C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4984u);  if (depth < kMaxDepth) unit_001E(c, 9u, depth + 1u); else { c.pc = 0x00178120u; return; } if (c.pc != 0x004B4984u) [[unlikely]] return; }
L_004B4984:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004B4990:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29572u)));  c.pc = t; return; }
L_004B49A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 3008u);  c.pc = t; return; }
L_004B49B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B48F0u | kUnwind; return; } goto L_004B48F0; }
L_004B49C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B48B0u | kUnwind; return; } goto L_004B48B0; }
L_004B49D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4950u | kUnwind; return; } goto L_004B4950; }
L_004B49E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4960u | kUnwind; return; } goto L_004B4960; }
L_004B49F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4990u | kUnwind; return; } goto L_004B4990; }
L_004B4A00:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B46C0u | kUnwind; return; } goto L_004B46C0; }
L_004B4A10:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B46C0u | kUnwind; return; } goto L_004B46C0; }
L_004B4A20:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 72u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B46C0u | kUnwind; return; } goto L_004B46C0; }
L_004B4A30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 132u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B46C0u | kUnwind; return; } goto L_004B46C0; }
L_004B4A40:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004B4A68; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_004B4A60; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_004B4A60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B4A6C; } }
L_004B4A68:
    set32(c.r[2], c.r[2].w[0] - 2728u);
    c.budget -= 1;
L_004B4A6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004B4A80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 2720u);  c.pc = t; return; }
L_004B4A90:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0017A900u | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 212u, depth); }
L_004B4AA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004B4B24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4AD4u); set32(c.r[4], 0u + 388u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004B4AD4u) [[unlikely]] return; }
L_004B4AD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004B4B24; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4AE8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 154u, depth + 1u); else { c.pc = 0x00182490u; return; } if (c.pc != 0x004B4AE8u) [[unlikely]] return; }
L_004B4AE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 25040u);
    set32(c.r[3], c.r[3].w[0] - 25016u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 24984u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 24972u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 24948u);
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 15;
L_004B4B24:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4B38u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001E(c, 214u, depth + 1u); else { c.pc = 0x0017A950u; return; } if (c.pc != 0x004B4B38u) [[unlikely]] return; }
L_004B4B38:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004B4B60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004B4BA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25088u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4B90u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 2u, depth + 1u); else { c.pc = 0x0017C010u; return; } if (c.pc != 0x004B4B90u) [[unlikely]] return; }
L_004B4B90:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004B4BAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4BA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004B4BA8u) [[unlikely]] return; }
L_004B4BA8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004B4BAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B4BC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4BD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 5u, depth + 1u); else { c.pc = 0x0017C080u; return; } if (c.pc != 0x004B4BD4u) [[unlikely]] return; }
L_004B4BD4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 25088u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B4C00:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_004B4E50; } }
L_004B4C28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004B4E38; } }
L_004B4C30:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4C3Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 20u, depth + 1u); else { c.pc = 0x001802F0u; return; } if (c.pc != 0x004B4C3Cu) [[unlikely]] return; }
L_004B4C3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4C44u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 179u, depth + 1u); else { c.pc = 0x00182BF0u; return; } if (c.pc != 0x004B4C44u) [[unlikely]] return; }
L_004B4C44:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4C50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 152u, depth + 1u); else { c.pc = 0x00189FB0u; return; } if (c.pc != 0x004B4C50u) [[unlikely]] return; }
L_004B4C50:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_004B4E38; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 2688u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4C78u); set32(c.r[7], c.r[7].w[0] - 2677u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004B4C78u) [[unlikely]] return; }
L_004B4C78:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 2665u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4C94u); set32(c.r[7], c.r[7].w[0] - 2658u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004B4C94u) [[unlikely]] return; }
L_004B4C94:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 97u);  goto L_004B4CA8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_004B4CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4CB0u);  if (depth < kMaxDepth) unit_000F(c, 289u, depth + 1u); else { c.pc = 0x0013EE00u; return; } if (c.pc != 0x004B4CB0u) [[unlikely]] return; }
L_004B4CB0:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4CC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B4CC0u) [[unlikely]] return; }
L_004B4CC0:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 145u);  goto L_004B4CD4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_004B4CD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4CDCu); set32(c.r[4], ld32((c.r[28].w[0] - 22944u)));  if (depth < kMaxDepth) unit_00ED(c, 491u, depth + 1u); else { c.pc = 0x004B7610u; return; } if (c.pc != 0x004B4CDCu) [[unlikely]] return; }
L_004B4CDC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B4D88; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004B4D88; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25180u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4D04u); set32(c.r[6], c.r[6].w[0] - 2656u);  if (depth < kMaxDepth) unit_00CD(c, 130u, depth + 1u); else { c.pc = 0x00434D60u; return; } if (c.pc != 0x004B4D04u) [[unlikely]] return; }
L_004B4D04:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 2645u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4D20u); set32(c.r[7], c.r[7].w[0] - 2630u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004B4D20u) [[unlikely]] return; }
L_004B4D20:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 129u);  goto L_004B4D34; }
    set32(c.r[6], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_004B4D34:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4D44u); set32(c.r[5], c.r[5].w[0] - 2629u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x004B4D44u) [[unlikely]] return; }
L_004B4D44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 2645u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4D5Cu); set32(c.r[6], c.r[6].w[0] - 2630u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x004B4D5Cu) [[unlikely]] return; }
L_004B4D5C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 2665u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4D74u); set32(c.r[6], c.r[6].w[0] - 2658u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x004B4D74u) [[unlikely]] return; }
L_004B4D74:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4D80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B4D80u) [[unlikely]] return; }
L_004B4D80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_004B4E2C; } }
L_004B4D88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B4E28; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004B4E28; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25180u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4DACu); set32(c.r[6], c.r[6].w[0] - 2621u);  if (depth < kMaxDepth) unit_00CD(c, 130u, depth + 1u); else { c.pc = 0x00434D60u; return; } if (c.pc != 0x004B4DACu) [[unlikely]] return; }
L_004B4DAC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 2629u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4DC8u); set32(c.r[7], c.r[7].w[0] - 2630u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004B4DC8u) [[unlikely]] return; }
L_004B4DC8:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 113u);  goto L_004B4DDC; }
    set32(c.r[6], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_004B4DDC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4DECu); set32(c.r[5], c.r[5].w[0] - 2645u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x004B4DECu) [[unlikely]] return; }
L_004B4DEC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 2629u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4E04u); set32(c.r[6], c.r[6].w[0] - 2630u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x004B4E04u) [[unlikely]] return; }
L_004B4E04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 2665u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4E1Cu); set32(c.r[6], c.r[6].w[0] - 2612u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x004B4E1Cu) [[unlikely]] return; }
L_004B4E1C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4E28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B4E28u) [[unlikely]] return; }
L_004B4E28:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_004B4E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4E34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B4E34u) [[unlikely]] return; }
L_004B4E34:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_004B4E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4E40u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 21u, depth + 1u); else { c.pc = 0x001803B0u; return; } if (c.pc != 0x004B4E40u) [[unlikely]] return; }
L_004B4E40:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4C30u | kUnwind; return; } goto L_004B4C30; }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_004B4E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4E58u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 22u, depth + 1u); else { c.pc = 0x001803E0u; return; } if (c.pc != 0x004B4E58u) [[unlikely]] return; }
L_004B4E58:
    c.r[3].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4C28u | kUnwind; return; } goto L_004B4C28; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004B4E90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4EB4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B4EB4u) [[unlikely]] return; }
L_004B4EB4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4EC0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 108u, depth + 1u); else { c.pc = 0x001A1C50u; return; } if (c.pc != 0x004B4EC0u) [[unlikely]] return; }
L_004B4EC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B4EE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004B4F58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 25040u);
    set32(c.r[3], c.r[3].w[0] - 25016u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 24984u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 24972u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 24948u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4F40u); st32((c.r[17].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0020(c, 115u, depth + 1u); else { c.pc = 0x001819D0u; return; } if (c.pc != 0x004B4F40u) [[unlikely]] return; }
L_004B4F40:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004B4F5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4F58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004B4F58u) [[unlikely]] return; }
L_004B4F58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004B4F5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B4F70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29568u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_004B4F8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004B4F9C; } }
L_004B4F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4F94u);  if (depth < kMaxDepth) unit_0020(c, 162u, depth + 1u); else { c.pc = 0x00182710u; return; } if (c.pc != 0x004B4F94u) [[unlikely]] return; }
L_004B4F94:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_004B4F9C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004B4FB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4FD4u); set32(c.r[4], c.r[4].w[0] - 2784u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004B4FD4u) [[unlikely]] return; }
L_004B4FD4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004B4FE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004B4FF4; } }
L_004B4FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4FECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 164u, depth + 1u); else { c.pc = 0x00182770u; return; } if (c.pc != 0x004B4FECu) [[unlikely]] return; }
L_004B4FEC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004B4FF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B5010:
    set32(c.r[2], ld32((c.r[28].w[0] - 30956u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004B5020:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29568u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_004B503C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004B5044; } }
L_004B503C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5044u);  if (depth < kMaxDepth) unit_0020(c, 168u, depth + 1u); else { c.pc = 0x00182810u; return; } if (c.pc != 0x004B5044u) [[unlikely]] return; }
L_004B5044:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004B5050:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29568u)));  c.pc = t; return; }
L_004B5060:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 2752u);  c.pc = t; return; }
L_004B5070:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4FB0u | kUnwind; return; } goto L_004B4FB0; }
L_004B5080:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4F70u | kUnwind; return; } goto L_004B4F70; }
L_004B5090:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B5010u | kUnwind; return; } goto L_004B5010; }
L_004B50A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B5020u | kUnwind; return; } goto L_004B5020; }
L_004B50B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B5050u | kUnwind; return; } goto L_004B5050; }
L_004B50C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4EE0u | kUnwind; return; } goto L_004B4EE0; }
L_004B50D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4EE0u | kUnwind; return; } goto L_004B4EE0; }
L_004B50E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 72u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4EE0u | kUnwind; return; } goto L_004B4EE0; }
L_004B50F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 132u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4EE0u | kUnwind; return; } goto L_004B4EE0; }
L_004B5100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004B5180; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 24768u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004B5168; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17776u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004B5168; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 18208u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004B5168; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004B5168; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5168u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B5168u) [[unlikely]] return; }
L_004B5168:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004B5184; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5180u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004B5180u) [[unlikely]] return; }
L_004B5180:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004B5184:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B51A0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004B51C8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_004B51C0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_004B51C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B51CC; } }
L_004B51C8:
    set32(c.r[2], c.r[2].w[0] - 2576u);
    c.budget -= 1;
L_004B51CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004B51E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 2560u);  c.pc = t; return; }
L_004B51F0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_004B5248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5230u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004B5230u) [[unlikely]] return; }
L_004B5230:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_004B5248; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5244u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 344u, depth + 1u); else { c.pc = 0x004B6610u; return; } if (c.pc != 0x004B5244u) [[unlikely]] return; }
L_004B5244:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004B5248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5250u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004B5250u) [[unlikely]] return; }
L_004B5250:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 2528u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5268u); set32(c.r[7], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004B5268u) [[unlikely]] return; }
L_004B5268:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_004B5298; }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 161u);  goto L_004B5284; }
    set32(c.r[5], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_004B5284:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5294u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B5294u) [[unlikely]] return; }
L_004B5294:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_004B5298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B52A0u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004B52A0u) [[unlikely]] return; }
L_004B52A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 2517u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B52B8u); set32(c.r[7], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004B52B8u) [[unlikely]] return; }
L_004B52B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_004B5328; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B52D0u); set32(c.r[5], c.r[5].w[0] - 2505u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004B52D0u) [[unlikely]] return; }
L_004B52D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B52E0u); set32(c.r[5], c.r[5].w[0] - 2500u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004B52E0u) [[unlikely]] return; }
L_004B52E0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B52F4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004B52F4u) [[unlikely]] return; }
L_004B52F4:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[21].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5308u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B5308u) [[unlikely]] return; }
L_004B5308:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5314u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B5314u) [[unlikely]] return; }
L_004B5314:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_004B5324; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004B5324:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_004B5328:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B533Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 155u, depth + 1u); else { c.pc = 0x00192610u; return; } if (c.pc != 0x004B533Cu) [[unlikely]] return; }
L_004B533C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5344u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 188u, depth + 1u); else { c.pc = 0x004B53D0u; return; } if (c.pc != 0x004B5344u) [[unlikely]] return; }
L_004B5344:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5350u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B5350u) [[unlikely]] return; }
L_004B5350:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B535Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B535Cu) [[unlikely]] return; }
L_004B535C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004B5390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B53A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 170u, depth + 1u); else { c.pc = 0x001B2E50u; return; } if (c.pc != 0x004B53A4u) [[unlikely]] return; }
L_004B53A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004B53BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B53B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 188u, depth + 1u); else { c.pc = 0x004B53D0u; return; } if (c.pc != 0x004B53B8u) [[unlikely]] return; }
L_004B53B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004B53BC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B53D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5400u); st32((c.r[29].w[0] + 140u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004B5400u) [[unlikely]] return; }
L_004B5400:
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    set32(c.r[5], c.r[29].w[0] + 120u);
    c.f[1] = ld32((c.r[2].w[0] + 180u));
    c.f[0] = ld32((c.r[2].w[0] + 176u));
    c.f[22] = fp::cvt_s_w(c.f[1]);
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 124u), 0u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5430u); c.f[21] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0029(c, 112u, depth + 1u); else { c.pc = 0x001A5D90u; return; } if (c.pc != 0x004B5430u) [[unlikely]] return; }
L_004B5430:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5440u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B5440u) [[unlikely]] return; }
L_004B5440:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.f[20] = c.f[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5460u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004B5460u) [[unlikely]] return; }
L_004B5460:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B546Cu); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x004B546Cu) [[unlikely]] return; }
L_004B546C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 104u);  goto L_004B5494; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004B5490; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5490u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004B5490u) [[unlikely]] return; }
L_004B5490:
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 1;
L_004B5494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B549Cu); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x004B549Cu) [[unlikely]] return; }
L_004B549C:
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.f[2] = ld32((c.r[29].w[0] + 124u));
    fpu_div(c, 12u, c.f[0], c.f[22]);
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    fpu_div(c, 13u, c.f[2], c.f[21]);
    fpu_div(c, 14u, c.f[1], c.f[22]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    fpu_div(c, 15u, c.f[0], c.f[21]);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B5570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B54E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 218u, depth + 1u); else { c.pc = 0x004B56D0u; return; } if (c.pc != 0x004B54E4u) [[unlikely]] return; }
L_004B54E4:
    set32(c.r[18], ld32((c.r[16].w[0] + 140u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 140u)));  goto L_004B5558; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 140u), c.r[17].w[0]);  goto L_004B5534; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5504u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B5504u) [[unlikely]] return; }
L_004B5504:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5514u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B5514u) [[unlikely]] return; }
L_004B5514:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B5530; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5530u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B5530u) [[unlikely]] return; }
L_004B5530:
    st32((c.r[16].w[0] + 140u), c.r[17].w[0]);
    c.budget -= 1;
L_004B5534:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004B5554; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5544u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B5544u) [[unlikely]] return; }
L_004B5544:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5554u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B5554u) [[unlikely]] return; }
L_004B5554:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 1;
L_004B5558:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 136u)));  goto L_004B5580; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5568u); set32(c.r[4], ld32((c.r[29].w[0] + 136u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004B5568u) [[unlikely]] return; }
L_004B5568:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_004B558C; } }
L_004B5570:
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B557Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 132u, depth + 1u); else { c.pc = 0x002CD020u; return; } if (c.pc != 0x004B557Cu) [[unlikely]] return; }
L_004B557C:
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_004B5580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5588u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004B5588u) [[unlikely]] return; }
L_004B5588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004B558C:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004B55B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B55C8u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004B55C8u) [[unlikely]] return; }
L_004B55C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B55D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 380u, depth + 1u); else { c.pc = 0x004B6A50u; return; } if (c.pc != 0x004B55D0u) [[unlikely]] return; }
L_004B55D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B55DCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 209u, depth + 1u); else { c.pc = 0x004B55F0u; return; } if (c.pc != 0x004B55DCu) [[unlikely]] return; }
L_004B55DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B55F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 172u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    if (c.r[4].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004B56C0; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B565C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5624u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x004B5624u) [[unlikely]] return; }
L_004B5624:
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  goto L_004B5644; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5640u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B5640u) [[unlikely]] return; }
L_004B5640:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 1;
L_004B5644:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B565C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B565Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B565Cu) [[unlikely]] return; }
L_004B565C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004B56B0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5674u); st32((c.r[17].w[0] + 172u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x004B5674u) [[unlikely]] return; }
L_004B5674:
    set32(c.r[5], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5680u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00FC(c, 16u, depth + 1u); else { c.pc = 0x004F0190u; return; } if (c.pc != 0x004B5680u) [[unlikely]] return; }
L_004B5680:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_004B5694; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_004B5694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B569Cu); set32(c.r[4], c.r[17].w[0] + 156u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004B569Cu) [[unlikely]] return; }
L_004B569C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B56A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B56A8u) [[unlikely]] return; }
L_004B56A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B56BC; } }
L_004B56B0:
    set32(c.r[4], c.r[17].w[0] + 156u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B56BCu); set32(c.r[5], c.r[5].w[0] - 2498u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004B56BCu) [[unlikely]] return; }
L_004B56BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004B56C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004B56D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 28u), c.f[23]);
    st32((c.r[29].w[0] + 24u), c.f[22]);
    st32((c.r[29].w[0] + 20u), c.f[21]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 132u)));
    c.f[23] = c.f[12];
    c.f[22] = c.f[13];
    c.f[21] = c.f[14];
    c.f[20] = c.f[15];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B570Cu); st32((c.r[29].w[0] + 84u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004B570Cu) [[unlikely]] return; }
L_004B570C:
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], 0u + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B571Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004B571Cu) [[unlikely]] return; }
L_004B571C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], 0u + 256u);  goto L_004B5760; }
    set32(c.r[2], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[7].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5758u); c.r[11].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 178u, depth + 1u); else { c.pc = 0x002CDAE0u; return; } if (c.pc != 0x004B5758u) [[unlikely]] return; }
L_004B5758:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 256u);
    c.budget -= 2;
L_004B5760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5768u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004B5768u) [[unlikely]] return; }
L_004B5768:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 220u)));  goto L_004B5788; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5780u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 65u, depth + 1u); else { c.pc = 0x002CC790u; return; } if (c.pc != 0x004B5780u) [[unlikely]] return; }
L_004B5780:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 220u)));
    c.budget -= 2;
L_004B5788:
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5798u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 138u, depth + 1u); else { c.pc = 0x002CD2F0u; return; } if (c.pc != 0x004B5798u) [[unlikely]] return; }
L_004B5798:
    set32(c.r[4], ld32((c.r[17].w[0] + 220u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = c.f[23];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.f[22];
    c.f[14] = c.f[21];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B57B8u); c.f[15] = c.f[20];  if (depth < kMaxDepth) unit_0073(c, 132u, depth + 1u); else { c.pc = 0x002CD020u; return; } if (c.pc != 0x004B57B8u) [[unlikely]] return; }
L_004B57B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B57C0u); set32(c.r[4], ld32((c.r[17].w[0] + 220u)));  if (depth < kMaxDepth) unit_0073(c, 124u, depth + 1u); else { c.pc = 0x002CCCA0u; return; } if (c.pc != 0x004B57C0u) [[unlikely]] return; }
L_004B57C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 220u)));
    c.f[14] = c.r[2].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B57E4u); c.f[15] = c.f[14];  if (depth < kMaxDepth) unit_0073(c, 126u, depth + 1u); else { c.pc = 0x002CCCD0u; return; } if (c.pc != 0x004B57E4u) [[unlikely]] return; }
L_004B57E4:
    set32(c.r[4], 0u + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B57F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004B57F0u) [[unlikely]] return; }
L_004B57F0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));  goto L_004B580C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5804u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 404u, depth + 1u); else { c.pc = 0x0031B9B0u; return; } if (c.pc != 0x004B5804u) [[unlikely]] return; }
L_004B5804:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.budget -= 2;
L_004B580C:
    set32(c.r[2], 0u - 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[2].w[0]));  goto L_004B58B8; }
    goto L_004B5828;
L_004B5824:
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 1;
L_004B5828:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5834u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004B5834u) [[unlikely]] return; }
L_004B5834:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_004B5848; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5844u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x004B5844u) [[unlikely]] return; }
L_004B5844:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_004B5848:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B586C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004B58AC; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004B58AC; } }
L_004B586C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_004B5894; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_004B58B0; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004B58AC; } }
L_004B5894:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B58AC; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004B58AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_004B58B0:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 2;
L_004B58B8:
    set32(c.r[3], 0u - 3841u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[6].d[0] = ld16((c.r[2].w[0]));  goto L_004B5968; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B58E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004B58E4u) [[unlikely]] return; }
L_004B58E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_004B58F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B58F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x004B58F4u) [[unlikely]] return; }
L_004B58F4:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_004B58F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B591C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004B595C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004B595C; } }
L_004B591C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_004B5944; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_004B5960; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004B595C; } }
L_004B5944:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B595C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004B595C:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_004B5960:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 2;
L_004B5968:
    set32(c.r[3], 0u - 12289u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5980u); st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004B5980u) [[unlikely]] return; }
L_004B5980:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B598Cu); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004B598Cu) [[unlikely]] return; }
L_004B598C:
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5998u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004B5998u) [[unlikely]] return; }
L_004B5998:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B59A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004B59A4u) [[unlikely]] return; }
L_004B59A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004B59FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B59B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x004B59B4u) [[unlikely]] return; }
L_004B59B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 13520u);
    set32(c.r[3], c.r[3].w[0] + 19920u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 61u);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
L_004B59FC:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 28u));
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5A20u); st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004B5A20u) [[unlikely]] return; }
L_004B5A20:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5A2Cu); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004B5A2Cu) [[unlikely]] return; }
L_004B5A2C:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5A38u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004B5A38u) [[unlikely]] return; }
L_004B5A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5A40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004B5A40u) [[unlikely]] return; }
L_004B5A40:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5A50u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x004B5A50u) [[unlikely]] return; }
L_004B5A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5A58u); set32(c.r[4], ld32((c.r[29].w[0] + 80u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004B5A58u) [[unlikely]] return; }
L_004B5A58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[23] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 24u));
    c.f[21] = ld32((c.r[29].w[0] + 20u));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004B5A80:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5AA8u); st32((c.r[29].w[0] + 188u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004B5AA8u) [[unlikely]] return; }
L_004B5AA8:
    set32(c.r[5], ld32((c.r[17].w[0] + 172u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5AB8u); st32((c.r[29].w[0] + 184u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00ED(c, 265u, depth + 1u); else { c.pc = 0x004B5CA0u; return; } if (c.pc != 0x004B5AB8u) [[unlikely]] return; }
L_004B5AB8:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 113u);  goto L_004B5ACC; }
    set32(c.r[6], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_004B5ACC:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5ADCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0101(c, 8u, depth + 1u); else { c.pc = 0x00504060u; return; } if (c.pc != 0x004B5ADCu) [[unlikely]] return; }
L_004B5ADC:
    set32(c.r[18], ld32((c.r[17].w[0] + 148u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_004B5B50; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 148u), c.r[16].w[0]);  goto L_004B5B2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5AFCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B5AFCu) [[unlikely]] return; }
L_004B5AFC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5B0Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B5B0Cu) [[unlikely]] return; }
L_004B5B0C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B5B28; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5B28u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B5B28u) [[unlikely]] return; }
L_004B5B28:
    st32((c.r[17].w[0] + 148u), c.r[16].w[0]);
    c.budget -= 1;
L_004B5B2C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004B5B4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5B3Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B5B3Cu) [[unlikely]] return; }
L_004B5B3C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5B4Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B5B4Cu) [[unlikely]] return; }
L_004B5B4C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_004B5B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5B58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B5B58u) [[unlikely]] return; }
L_004B5B58:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004B5B74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5B6Cu); set32(c.r[4], ld32((c.r[29].w[0] + 184u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004B5B6Cu) [[unlikely]] return; }
L_004B5B6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B5C7C; } }
L_004B5B74:
    set32(c.r[5], c.r[29].w[0] + 168u);
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 172u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5B88u); st32((c.r[29].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_0029(c, 112u, depth + 1u); else { c.pc = 0x001A5D90u; return; } if (c.pc != 0x004B5B88u) [[unlikely]] return; }
L_004B5B88:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5B98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B5B98u) [[unlikely]] return; }
L_004B5B98:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.f[20] = c.f[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5BB8u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004B5BB8u) [[unlikely]] return; }
L_004B5BB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5BC4u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x004B5BC4u) [[unlikely]] return; }
L_004B5BC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 152u);  goto L_004B5BEC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004B5BE8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5BE8u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004B5BE8u) [[unlikely]] return; }
L_004B5BE8:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 1;
L_004B5BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5BF4u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x004B5BF4u) [[unlikely]] return; }
L_004B5BF4:
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[2] = 0u;
    set32(c.r[2], c.r[2].w[0] - 16600u);
    c.f[3] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.f[4] = fp::cvt_w_s(c.f[0]);
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 168u));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[20], c.f[3]));
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    c.facc = fp::add(c.f[2], c.f[1]);
    set32(c.r[2], c.f[4]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[20], c.f[0]));
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.f[2] = fp::cvt_w_s(c.f[3]);
    set32(c.r[2], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5C64u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0100(c, 435u, depth + 1u); else { c.pc = 0x005039E0u; return; } if (c.pc != 0x004B5C64u) [[unlikely]] return; }
L_004B5C64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] - 16600u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5C78u); st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004B5C78u) [[unlikely]] return; }
L_004B5C78:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004B5C7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_004B5CA0:
    c.budget -= 2;
    { set32(c.r[5], c.r[5].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012B100u | kUnwind; return; } [[clang::musttail]] return unit_000A(c, 378u, depth); }
L_004B5CB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004B5CD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004B5CD4; } }
L_004B5CD0:
    c.r[16].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_004B5CD4:
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  goto L_004B5CF4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5CF0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B5CF0u) [[unlikely]] return; }
L_004B5CF0:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 1;
L_004B5CF4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004B5D10; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5D0Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B5D0Cu) [[unlikely]] return; }
L_004B5D0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004B5D10:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B5D20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[4].w[0] + 137u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 10;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  goto L_004B5D5C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5D58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B5D58u) [[unlikely]] return; }
L_004B5D58:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 1;
L_004B5D5C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004B5D78; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5D74u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B5D74u) [[unlikely]] return; }
L_004B5D74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004B5D78:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B5D90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5DA8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x004B5DA8u) [[unlikely]] return; }
L_004B5DA8:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5DB8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B5DB8u) [[unlikely]] return; }
L_004B5DB8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B5E14; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B5E14; } }
    set32(c.r[5], 0u + 1u);
    st8((c.r[17].w[0] + 137u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  goto L_004B5DF4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5DF0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B5DF0u) [[unlikely]] return; }
L_004B5DF0:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 1;
L_004B5DF4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 132u)));  goto L_004B5E64; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5E0Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B5E0Cu) [[unlikely]] return; }
L_004B5E0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B5E60; } }
L_004B5E14:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B5E60; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B5E60; } }
    st8((c.r[17].w[0] + 137u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  goto L_004B5E48; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5E44u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B5E44u) [[unlikely]] return; }
L_004B5E44:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 1;
L_004B5E48:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B5E60; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5E60u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B5E60u) [[unlikely]] return; }
L_004B5E60:
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 1;
L_004B5E64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5E6Cu); st32((c.r[29].w[0] + 60u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004B5E6Cu) [[unlikely]] return; }
L_004B5E6C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[28].w[0] - 27612u)));  if (t) { goto L_004B5EA8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 144u)));  goto L_004B5EAC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[17].w[0] + 157u);  goto L_004B5E9C; }
    set32(c.r[5], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 1;
L_004B5E9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5EA8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 246u, depth + 1u); else { c.pc = 0x004B5A80u; return; } if (c.pc != 0x004B5EA8u) [[unlikely]] return; }
L_004B5EA8:
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 1;
L_004B5EAC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  goto L_004B5F98; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 156u)));  goto L_004B5ED8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5ECCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B5ECCu) [[unlikely]] return; }
L_004B5ECC:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[17].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 144u)));  goto L_004B5F44; }
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 1;
L_004B5ED8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[17].w[0] + 157u);  goto L_004B5EE8; }
    set32(c.r[5], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 1;
L_004B5EE8:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5EF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 246u, depth + 1u); else { c.pc = 0x004B5A80u; return; } if (c.pc != 0x004B5EF4u) [[unlikely]] return; }
L_004B5EF4:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B5F40; } }
    set32(c.r[5], 0u + 1u);
    st8((c.r[17].w[0] + 137u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  goto L_004B5F28; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5F24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B5F24u) [[unlikely]] return; }
L_004B5F24:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 1;
L_004B5F28:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B5F40; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5F40u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B5F40u) [[unlikely]] return; }
L_004B5F40:
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 1;
L_004B5F44:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0] + 136u));  goto L_004B5F5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5F54u); set32(c.r[4], ld32((c.r[29].w[0] + 56u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004B5F54u) [[unlikely]] return; }
L_004B5F54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004B608C; } }
L_004B5F5C:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 16u)));  if (t) { goto L_004B5F80; } }
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_004B5F84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5F78u); set32(c.r[4], ld32((c.r[29].w[0] + 56u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004B5F78u) [[unlikely]] return; }
L_004B5F78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B6088; } }
L_004B5F80:
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_004B5F84:
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5F90u); set32(c.r[5], ld32((c.r[17].w[0] + 152u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B5F90u) [[unlikely]] return; }
L_004B5F90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 56u)));  if (t) { goto L_004B6080; } }
L_004B5F98:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B607C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 156u)));  goto L_004B5FC4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5FB8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B5FB8u) [[unlikely]] return; }
L_004B5FB8:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[17].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  goto L_004B6030; }
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 1;
L_004B5FC4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[17].w[0] + 157u);  goto L_004B5FD4; }
    set32(c.r[5], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 1;
L_004B5FD4:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5FE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 246u, depth + 1u); else { c.pc = 0x004B5A80u; return; } if (c.pc != 0x004B5FE0u) [[unlikely]] return; }
L_004B5FE0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B602C; } }
    set32(c.r[5], 0u + 1u);
    st8((c.r[17].w[0] + 137u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  goto L_004B6014; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6010u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B6010u) [[unlikely]] return; }
L_004B6010:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 1;
L_004B6014:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B602C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B602Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B602Cu) [[unlikely]] return; }
L_004B602C:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 1;
L_004B6030:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0] + 136u));  goto L_004B6048; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6040u); set32(c.r[4], ld32((c.r[29].w[0] + 56u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004B6040u) [[unlikely]] return; }
L_004B6040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B6088; } }
L_004B6048:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 16u)));  if (t) { goto L_004B606C; } }
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_004B6070; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6064u); set32(c.r[4], ld32((c.r[29].w[0] + 56u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004B6064u) [[unlikely]] return; }
L_004B6064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B6088; } }
L_004B606C:
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_004B6070:
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B607Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B607Cu) [[unlikely]] return; }
L_004B607C:
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_004B6080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6088u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004B6088u) [[unlikely]] return; }
L_004B6088:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004B608C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004B60A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004B60D4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004B60DC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B60DC; } }
L_004B60D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004B62B8; } }
L_004B60DC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  goto L_004B623C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B60F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B60F4u) [[unlikely]] return; }
L_004B60F4:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[17].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 140u)));  goto L_004B6144; }
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[17].w[0] + 157u);  goto L_004B6110; }
    set32(c.r[16], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 1;
L_004B6110:
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6124u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B6124u) [[unlikely]] return; }
L_004B6124:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6130u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004B6130u) [[unlikely]] return; }
L_004B6130:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B6140; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004B62B8; } }
L_004B6140:
    set32(c.r[2], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 1;
L_004B6144:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_004B62B8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6158u); st32((c.r[29].w[0] + 52u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004B6158u) [[unlikely]] return; }
L_004B6158:
    set32(c.r[16], ld32((c.r[28].w[0] - 27612u)));
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 60u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B6184; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_004B6184:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B6198; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_004B6198:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 96u));  goto L_004B61A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B61C8; } }
L_004B61A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_004B61C8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_004B61C8; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004B61C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 140u)));  goto L_004B6224; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 132u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_004B61F8; }
    set32(c.r[4], c.r[29].w[0] + 60u);
    set32(c.r[5], c.r[16].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B61ECu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x004B61ECu) [[unlikely]] return; }
L_004B61EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B6220; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_004B61F8:
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 352u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6208u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B6208u) [[unlikely]] return; }
L_004B6208:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 136u);
    st8((c.r[16].w[0] + 132u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6220u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B6220u) [[unlikely]] return; }
L_004B6220:
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 1;
L_004B6224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B622Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 61u, depth + 1u); else { c.pc = 0x002CC700u; return; } if (c.pc != 0x004B622Cu) [[unlikely]] return; }
L_004B622C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6234u); set32(c.r[4], ld32((c.r[29].w[0] + 48u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004B6234u) [[unlikely]] return; }
L_004B6234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B62B4; } }
L_004B623C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B62B4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6254u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B6254u) [[unlikely]] return; }
L_004B6254:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[17].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  goto L_004B62A4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[17].w[0] + 157u);  goto L_004B6270; }
    set32(c.r[16], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 1;
L_004B6270:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6284u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B6284u) [[unlikely]] return; }
L_004B6284:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6290u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004B6290u) [[unlikely]] return; }
L_004B6290:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B62A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004B62B8; } }
L_004B62A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 1;
L_004B62A4:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B62B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B62B4u) [[unlikely]] return; }
L_004B62B4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004B62B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004B62D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 29u);  goto L_004B62E4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 1;
L_004B62E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004B62F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004B6300:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004B65EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 24736u);
    set32(c.r[2], c.r[2].w[0] - 24712u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6340u); st32((c.r[17].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00ED(c, 209u, depth + 1u); else { c.pc = 0x004B55F0u; return; } if (c.pc != 0x004B6340u) [[unlikely]] return; }
L_004B6340:
    set32(c.r[18], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 144u)));  goto L_004B63B0; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_004B638C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B635Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B635Cu) [[unlikely]] return; }
L_004B635C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B636Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B636Cu) [[unlikely]] return; }
L_004B636C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B6388; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6388u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B6388u) [[unlikely]] return; }
L_004B6388:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004B638C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 140u), 0u);  if (t) { goto L_004B63AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B639Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B639Cu) [[unlikely]] return; }
L_004B639C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B63ACu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B63ACu) [[unlikely]] return; }
L_004B63AC:
    set32(c.r[18], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 1;
L_004B63B0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 148u)));  goto L_004B641C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_004B63F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B63C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B63C8u) [[unlikely]] return; }
L_004B63C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B63D8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B63D8u) [[unlikely]] return; }
L_004B63D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B63F4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B63F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B63F4u) [[unlikely]] return; }
L_004B63F4:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004B63F8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 144u), 0u);  if (t) { goto L_004B6418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6408u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B6408u) [[unlikely]] return; }
L_004B6408:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6418u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B6418u) [[unlikely]] return; }
L_004B6418:
    set32(c.r[18], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 1;
L_004B641C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 156u);  goto L_004B6488; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_004B6464; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6434u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B6434u) [[unlikely]] return; }
L_004B6434:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6444u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B6444u) [[unlikely]] return; }
L_004B6444:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B6460; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6460u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B6460u) [[unlikely]] return; }
L_004B6460:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004B6464:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 148u), 0u);  if (t) { goto L_004B6484; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6474u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B6474u) [[unlikely]] return; }
L_004B6474:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6484u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B6484u) [[unlikely]] return; }
L_004B6484:
    set32(c.r[4], c.r[17].w[0] + 156u);
    c.budget -= 1;
L_004B6488:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 152u);  goto L_004B649C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6498u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B6498u) [[unlikely]] return; }
L_004B6498:
    set32(c.r[2], c.r[17].w[0] + 152u);
    c.budget -= 1;
L_004B649C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 148u);  goto L_004B64E8; }
    set32(c.r[18], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004B64E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B64B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B64B8u) [[unlikely]] return; }
L_004B64B8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B64C8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B64C8u) [[unlikely]] return; }
L_004B64C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B64E4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B64E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B64E4u) [[unlikely]] return; }
L_004B64E4:
    set32(c.r[2], c.r[17].w[0] + 148u);
    c.budget -= 1;
L_004B64E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 144u);  goto L_004B6534; }
    set32(c.r[18], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004B6530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6504u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B6504u) [[unlikely]] return; }
L_004B6504:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6514u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B6514u) [[unlikely]] return; }
L_004B6514:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B6530; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6530u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B6530u) [[unlikely]] return; }
L_004B6530:
    set32(c.r[2], c.r[17].w[0] + 144u);
    c.budget -= 1;
L_004B6534:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 140u);  goto L_004B6580; }
    set32(c.r[18], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004B657C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6550u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B6550u) [[unlikely]] return; }
L_004B6550:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6560u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B6560u) [[unlikely]] return; }
L_004B6560:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B657C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B657Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B657Cu) [[unlikely]] return; }
L_004B657C:
    set32(c.r[2], c.r[17].w[0] + 140u);
    c.budget -= 1;
L_004B6580:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004B65CC; }
    set32(c.r[18], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004B65C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B659Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B659Cu) [[unlikely]] return; }
L_004B659C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B65ACu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B65ACu) [[unlikely]] return; }
L_004B65AC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B65C8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B65C8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B65C8u) [[unlikely]] return; }
L_004B65C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004B65CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B65D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 208u, depth + 1u); else { c.pc = 0x001B3480u; return; } if (c.pc != 0x004B65D4u) [[unlikely]] return; }
L_004B65D4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004B65F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B65ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004B65ECu) [[unlikely]] return; }
L_004B65EC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004B65F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004B6610:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6634u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 222u, depth + 1u); else { c.pc = 0x001B3670u; return; } if (c.pc != 0x004B6634u) [[unlikely]] return; }
L_004B6634:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 24736u);
    set32(c.r[2], c.r[2].w[0] - 24712u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 132u), c.r[17].w[0]);
    st8((c.r[18].w[0] + 136u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0] + 140u), 0u);  if (t) { goto L_004B6678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6668u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B6668u) [[unlikely]] return; }
L_004B6668:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6678u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B6678u) [[unlikely]] return; }
L_004B6678:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0] + 144u), 0u);  if (t) { goto L_004B669C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B668Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B668Cu) [[unlikely]] return; }
L_004B668C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B669Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B669Cu) [[unlikely]] return; }
L_004B669C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0] + 148u), 0u);  if (t) { goto L_004B66C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B66B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B66B0u) [[unlikely]] return; }
L_004B66B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B66C0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B66C0u) [[unlikely]] return; }
L_004B66C0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0] + 152u), 0u);  if (t) { goto L_004B66E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B66D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004B66D4u) [[unlikely]] return; }
L_004B66D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B66E4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004B66E4u) [[unlikely]] return; }
L_004B66E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B66ECu); set32(c.r[4], c.r[18].w[0] + 156u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004B66ECu) [[unlikely]] return; }
L_004B66EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[18].w[0] + 60u);
    set32(c.r[5], c.r[5].w[0] - 2472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6700u); st32((c.r[18].w[0] + 172u), 0u);  if (depth < kMaxDepth) unit_000C(c, 360u, depth + 1u); else { c.pc = 0x00133730u; return; } if (c.pc != 0x004B6700u) [[unlikely]] return; }
L_004B6700:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] << 5);
    set32(c.r[2], 0u + 16u);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 10;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  goto L_004B673C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6730u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B6730u) [[unlikely]] return; }
L_004B6730:
    set32(c.r[2], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
L_004B673C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B675Cu); set32(c.r[4], c.r[18].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B675Cu) [[unlikely]] return; }
L_004B675C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[18].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B676Cu); set32(c.r[5], c.r[5].w[0] - 2454u);  if (depth < kMaxDepth) unit_000C(c, 360u, depth + 1u); else { c.pc = 0x00133730u; return; } if (c.pc != 0x004B676Cu) [[unlikely]] return; }
L_004B676C:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] << 5);
    set32(c.r[2], 0u + 16u);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 10;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  goto L_004B67A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B679Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B679Cu) [[unlikely]] return; }
L_004B679C:
    set32(c.r[2], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
L_004B67A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B67CCu); set32(c.r[4], c.r[18].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B67CCu) [[unlikely]] return; }
L_004B67CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 84u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 104u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 100u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004B6800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B67F8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B67F8u) [[unlikely]] return; }
L_004B67F8:
    set32(c.r[2], c.r[29].w[0] + 84u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 2;
L_004B6800:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 100u)));
    c.f[0] = ld32((c.r[2].w[0] - 8816u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[29].w[0] + 84u);
    st32((c.r[6].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[4].w[0] - 8812u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 8808u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 8804u));
    st32((c.r[6].w[0] + 12u), c.f[0]);
    set32(c.r[17], ld32((c.r[18].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 106u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 23;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 84u)));  goto L_004B688C; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6868u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B6868u) [[unlikely]] return; }
L_004B6868:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004B6884; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6880u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B6880u) [[unlikely]] return; }
L_004B6880:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004B6884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004B68B0; } }
L_004B688C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6898u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004B6898u) [[unlikely]] return; }
L_004B6898:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B68ACu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B68ACu) [[unlikely]] return; }
L_004B68AC:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_004B68B0:
    set32(c.r[25], ld32((c.r[18].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B68C4u); set32(c.r[4], c.r[18].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B68C4u) [[unlikely]] return; }
L_004B68C4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 106u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_004B68F4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], c.r[29].w[0] + 84u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_004B68F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B68F4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B68F4u) [[unlikely]] return; }
L_004B68F4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004B68F8:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_004B6908; }
    set32(c.r[5], c.r[18].w[0] + 60u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.budget -= 2;
L_004B6908:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6914u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B6914u) [[unlikely]] return; }
L_004B6914:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B692Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B692Cu) [[unlikely]] return; }
L_004B692C:
    st8((c.r[18].w[0] + 137u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004B6950:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29564u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_004B696C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004B697C; } }
L_004B696C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6974u);  if (depth < kMaxDepth) unit_002C(c, 227u, depth + 1u); else { c.pc = 0x001B3760u; return; } if (c.pc != 0x004B6974u) [[unlikely]] return; }
L_004B6974:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_004B697C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004B6990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B69B4u); set32(c.r[4], c.r[4].w[0] - 2608u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004B69B4u) [[unlikely]] return; }
L_004B69B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004B69C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004B69D4; } }
L_004B69C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B69CCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 228u, depth + 1u); else { c.pc = 0x001B37A0u; return; } if (c.pc != 0x004B69CCu) [[unlikely]] return; }
L_004B69CC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004B69D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B69F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30836u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004B6A00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29564u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_004B6A1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004B6A24; } }
L_004B6A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6A24u);  if (depth < kMaxDepth) unit_002C(c, 231u, depth + 1u); else { c.pc = 0x001B3810u; return; } if (c.pc != 0x004B6A24u) [[unlikely]] return; }
L_004B6A24:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004B6A30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29564u)));  c.pc = t; return; }
L_004B6A40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 2592u);  c.pc = t; return; }
L_004B6A50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004B6A64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B6A74; } }
L_004B6A64:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6A74u); set32(c.r[5], ld32((c.r[28].w[0] - 29416u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B6A74u) [[unlikely]] return; }
L_004B6A74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004B6A80:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B5390u | kUnwind; return; } goto L_004B5390; }
L_004B6A90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6300u | kUnwind; return; } goto L_004B6300; }
L_004B6AA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 2384u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[28].w[0] - 27036u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6AC8u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x004B6AC8u) [[unlikely]] return; }
L_004B6AC8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 56u);  goto L_004B6ADC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B6B00; } }
L_004B6ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6AE4u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x004B6AE4u) [[unlikely]] return; }
L_004B6AE4:
    set32(c.r[4], c.r[29].w[0] + 52u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6AF4u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x004B6AF4u) [[unlikely]] return; }
L_004B6AF4:
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6B00u); set32(c.r[5], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x004B6B00u) [[unlikely]] return; }
L_004B6B00:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_004B6B64; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6B1Cu); set32(c.r[5], c.r[5].w[0] - 2361u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B6B1Cu) [[unlikely]] return; }
L_004B6B1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_004B6B7C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6B34u); set32(c.r[5], c.r[5].w[0] - 2347u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B6B34u) [[unlikely]] return; }
L_004B6B34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B6B54; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6B4Cu); set32(c.r[5], c.r[5].w[0] - 2336u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B6B4Cu) [[unlikely]] return; }
L_004B6B4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B6B60; } }
L_004B6B54:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B6B7C; } }
L_004B6B60:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_004B6B64:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[17].w[0] + 1u);  goto L_004B6B74; }
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_004B6B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6B7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 143u, depth + 1u); else { c.pc = 0x003C5800u; return; } if (c.pc != 0x004B6B7Cu) [[unlikely]] return; }
L_004B6B7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004B6B90:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 2288u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[28].w[0] - 27036u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6BBCu); st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x004B6BBCu) [[unlikely]] return; }
L_004B6BBC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 204u);  goto L_004B6BD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B6BF4; } }
L_004B6BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6BD8u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x004B6BD8u) [[unlikely]] return; }
L_004B6BD8:
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6BE8u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x004B6BE8u) [[unlikely]] return; }
L_004B6BE8:
    set32(c.r[4], c.r[29].w[0] + 204u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6BF4u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x004B6BF4u) [[unlikely]] return; }
L_004B6BF4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));  goto L_004B6C08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004B6E90; } }
L_004B6C08:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26064u)));  goto L_004B6C18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B6E90; } }
L_004B6C18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6C2Cu); set32(c.r[5], c.r[5].w[0] - 2271u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004B6C2Cu) [[unlikely]] return; }
L_004B6C2C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6C38u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0010(c, 51u, depth + 1u); else { c.pc = 0x001405E0u; return; } if (c.pc != 0x004B6C38u) [[unlikely]] return; }
L_004B6C38:
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[18].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6C4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B6C4Cu) [[unlikely]] return; }
L_004B6C4C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004B6D0C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6C64u); set32(c.r[5], c.r[5].w[0] - 2271u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004B6C64u) [[unlikely]] return; }
L_004B6C64:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6C78u); set32(c.r[7], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0010(c, 37u, depth + 1u); else { c.pc = 0x001403C0u; return; } if (c.pc != 0x004B6C78u) [[unlikely]] return; }
L_004B6C78:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6C84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B6C84u) [[unlikely]] return; }
L_004B6C84:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 177u);  goto L_004B6C98; }
    set32(c.r[4], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_004B6C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6CA0u); set32(c.r[5], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_000F(c, 313u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x004B6CA0u) [[unlikely]] return; }
L_004B6CA0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 220u)));  goto L_004B6CBC; }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6CB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B6CB4u) [[unlikely]] return; }
L_004B6CB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B6E90; } }
L_004B6CBC:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 36u));
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_004B6CFC; }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6CF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B6CF4u) [[unlikely]] return; }
L_004B6CF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B6E90; } }
L_004B6CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6D04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B6D04u) [[unlikely]] return; }
L_004B6D04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004B6E90; } }
L_004B6D0C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6D18u); set32(c.r[5], c.r[5].w[0] - 2271u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004B6D18u) [[unlikely]] return; }
L_004B6D18:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6D24u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0010(c, 51u, depth + 1u); else { c.pc = 0x001405E0u; return; } if (c.pc != 0x004B6D24u) [[unlikely]] return; }
L_004B6D24:
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[18].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6D38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B6D38u) [[unlikely]] return; }
L_004B6D38:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_004B6E90; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6D50u); set32(c.r[5], c.r[5].w[0] - 2271u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004B6D50u) [[unlikely]] return; }
L_004B6D50:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6D64u); set32(c.r[7], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0010(c, 37u, depth + 1u); else { c.pc = 0x001403C0u; return; } if (c.pc != 0x004B6D64u) [[unlikely]] return; }
L_004B6D64:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6D70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B6D70u) [[unlikely]] return; }
L_004B6D70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6D80u); set32(c.r[5], c.r[5].w[0] - 2271u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004B6D80u) [[unlikely]] return; }
L_004B6D80:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6D94u); set32(c.r[7], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0010(c, 37u, depth + 1u); else { c.pc = 0x001403C0u; return; } if (c.pc != 0x004B6D94u) [[unlikely]] return; }
L_004B6D94:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6DA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B6DA0u) [[unlikely]] return; }
L_004B6DA0:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 161u);  goto L_004B6DB4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_004B6DB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6DBCu); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_000F(c, 313u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x004B6DBCu) [[unlikely]] return; }
L_004B6DBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_004B6DEC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 145u);  goto L_004B6DD8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_004B6DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6DE0u); set32(c.r[5], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_000F(c, 313u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x004B6DE0u) [[unlikely]] return; }
L_004B6DE0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 216u)));  goto L_004B6E08; }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_004B6DEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6DF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B6DF4u) [[unlikely]] return; }
L_004B6DF4:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6E00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B6E00u) [[unlikely]] return; }
L_004B6E00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B6E90; } }
L_004B6E08:
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[6], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 20;
    if (c.r[2].sd[0] >= 0) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_004B6E78; }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6E64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B6E64u) [[unlikely]] return; }
L_004B6E64:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6E70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B6E70u) [[unlikely]] return; }
L_004B6E70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B6E90; } }
L_004B6E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6E80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B6E80u) [[unlikely]] return; }
L_004B6E80:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6E8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B6E8Cu) [[unlikely]] return; }
L_004B6E8C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004B6E90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_004B6EB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6ED4u); set32(c.r[5], c.r[5].w[0] - 2240u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B6ED4u) [[unlikely]] return; }
L_004B6ED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B6EE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B7298; } }
L_004B6EE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6EF4u); set32(c.r[5], c.r[5].w[0] - 2233u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B6EF4u) [[unlikely]] return; }
L_004B6EF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B6F04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004B7298; } }
L_004B6F04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6F14u); set32(c.r[5], c.r[5].w[0] - 2224u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B6F14u) [[unlikely]] return; }
L_004B6F14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B6F24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B7298; } }
L_004B6F24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6F34u); set32(c.r[5], c.r[5].w[0] - 2221u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B6F34u) [[unlikely]] return; }
L_004B6F34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B6F44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004B7298; } }
L_004B6F44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6F54u); set32(c.r[5], c.r[5].w[0] - 2198u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B6F54u) [[unlikely]] return; }
L_004B6F54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B6F64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004B7298; } }
L_004B6F64:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6F74u); set32(c.r[5], c.r[5].w[0] - 2176u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B6F74u) [[unlikely]] return; }
L_004B6F74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B6FBC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_004B7298; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6F94u); set32(c.r[4], ld32((c.r[16].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x004B6F94u) [[unlikely]] return; }
L_004B6F94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B6FB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6FA4u); set32(c.r[4], ld32((c.r[16].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x004B6FA4u) [[unlikely]] return; }
L_004B6FA4:
    set32(c.r[2], ld32((c.r[2].w[0] + 424u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_004B7298; } }
L_004B6FB0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B7298; } }
L_004B6FBC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6FCCu); set32(c.r[5], c.r[5].w[0] - 2169u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B6FCCu) [[unlikely]] return; }
L_004B6FCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B6FE4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26056u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_004B7298; } }
L_004B6FE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6FF4u); set32(c.r[5], c.r[5].w[0] - 2151u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B6FF4u) [[unlikely]] return; }
L_004B6FF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B7024; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26056u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B7298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7018u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00C4(c, 170u, depth + 1u); else { c.pc = 0x00411260u; return; } if (c.pc != 0x004B7018u) [[unlikely]] return; }
L_004B7018:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B7298; } }
L_004B7024:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7034u); set32(c.r[5], c.r[5].w[0] - 2139u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B7034u) [[unlikely]] return; }
L_004B7034:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B7068; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26056u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B7298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7058u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00C3(c, 506u, depth + 1u); else { c.pc = 0x0040FC60u; return; } if (c.pc != 0x004B7058u) [[unlikely]] return; }
L_004B7058:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B7298; } }
L_004B7068:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7078u); set32(c.r[5], c.r[5].w[0] - 2122u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B7078u) [[unlikely]] return; }
L_004B7078:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B70C4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26056u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_004B7298; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B70B8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 24136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B70A8u); set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  if (depth < kMaxDepth) unit_00DD(c, 336u, depth + 1u); else { c.pc = 0x00476DB0u; return; } if (c.pc != 0x004B70A8u) [[unlikely]] return; }
L_004B70A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B70B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004B7298; } }
L_004B70B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B7298; } }
L_004B70C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B70D4u); set32(c.r[5], c.r[5].w[0] - 2107u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B70D4u) [[unlikely]] return; }
L_004B70D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B7108; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26056u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B7298; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 704u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B7298; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B7298; } }
L_004B7108:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7118u); set32(c.r[5], c.r[5].w[0] - 2087u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B7118u) [[unlikely]] return; }
L_004B7118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B7134; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_004B7298; } }
L_004B7134:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7144u); set32(c.r[5], c.r[5].w[0] - 2071u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B7144u) [[unlikely]] return; }
L_004B7144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B7160; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_004B7298; } }
L_004B7160:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7170u); set32(c.r[5], c.r[5].w[0] - 2056u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B7170u) [[unlikely]] return; }
L_004B7170:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B71C0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004B7180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7188u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0015(c, 176u, depth + 1u); else { c.pc = 0x00155A70u; return; } if (c.pc != 0x004B7188u) [[unlikely]] return; }
L_004B7188:
    set32(c.r[25], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7198u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B7198u) [[unlikely]] return; }
L_004B7198:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_004B71A8; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_004B71A8:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B7180u | kUnwind; return; } goto L_004B7180; } }
    c.r[2].d[0] = c.r[17].d[0] ^ 2ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_004B7298; } }
L_004B71C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B71D0u); set32(c.r[5], c.r[5].w[0] - 2026u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B71D0u) [[unlikely]] return; }
L_004B71D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B7208; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26056u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B7298; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22944u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B71FCu); set32(c.r[5], c.r[5].w[0] - 1998u);  if (depth < kMaxDepth) unit_00ED(c, 491u, depth + 1u); else { c.pc = 0x004B7610u; return; } if (c.pc != 0x004B71FCu) [[unlikely]] return; }
L_004B71FC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B7298; } }
L_004B7208:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7218u); set32(c.r[5], c.r[5].w[0] - 1978u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B7218u) [[unlikely]] return; }
L_004B7218:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B7250; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26056u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B7298; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22944u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7244u); set32(c.r[5], c.r[5].w[0] - 1952u);  if (depth < kMaxDepth) unit_00ED(c, 491u, depth + 1u); else { c.pc = 0x004B7610u; return; } if (c.pc != 0x004B7244u) [[unlikely]] return; }
L_004B7244:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B7298; } }
L_004B7250:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7260u); set32(c.r[5], c.r[5].w[0] - 1931u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B7260u) [[unlikely]] return; }
L_004B7260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B7270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004B7298; } }
L_004B7270:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7280u); set32(c.r[5], c.r[5].w[0] - 1921u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B7280u) [[unlikely]] return; }
L_004B7280:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7290u); set32(c.r[5], c.r[5].w[0] - 1911u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B7290u) [[unlikely]] return; }
L_004B7290:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_004B7298:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B72B0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 1856u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[28].w[0] - 27036u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B72DCu); st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x004B72DCu) [[unlikely]] return; }
L_004B72DC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 152u);  goto L_004B72F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B7314; } }
L_004B72F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B72F8u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x004B72F8u) [[unlikely]] return; }
L_004B72F8:
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 148u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7308u); set32(c.r[6], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x004B7308u) [[unlikely]] return; }
L_004B7308:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7314u); set32(c.r[5], c.r[29].w[0] + 148u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x004B7314u) [[unlikely]] return; }
L_004B7314:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_004B7328; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004B75F0; } }
L_004B7328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7330u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004B7330u) [[unlikely]] return; }
L_004B7330:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 128u));  goto L_004B7348; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 132u)));  if (t) { goto L_004B7350; } }
L_004B7348:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_004B7350:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u + 95u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7360u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 406u, depth + 1u); else { c.pc = 0x0013FE80u; return; } if (c.pc != 0x004B7360u) [[unlikely]] return; }
L_004B7360:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004B7374; } }
    c.r[1].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_004B7388; }
L_004B7374:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7380u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B7380u) [[unlikely]] return; }
L_004B7380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B75F0; } }
L_004B7388:
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7398u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x004B7398u) [[unlikely]] return; }
L_004B7398:
    set32(c.r[6], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B73ACu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x004B73ACu) [[unlikely]] return; }
L_004B73AC:
    set32(c.r[16], ld32((c.r[28].w[0] - 26060u)));
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004B73E4; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B73C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B73C4u) [[unlikely]] return; }
L_004B73C4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B73D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B73D0u) [[unlikely]] return; }
L_004B73D0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B73DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B73DCu) [[unlikely]] return; }
L_004B73DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B75F0; } }
L_004B73E4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B73F0u); set32(c.r[5], c.r[5].w[0] - 1839u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B73F0u) [[unlikely]] return; }
L_004B73F0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004B7468; }
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 97u);  goto L_004B740C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_004B740C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7414u); set32(c.r[4], ld32((c.r[28].w[0] - 24272u)));  if (depth < kMaxDepth) unit_00DB(c, 265u, depth + 1u); else { c.pc = 0x0046FBB0u; return; } if (c.pc != 0x004B7414u) [[unlikely]] return; }
L_004B7414:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 26064u)));  if (t) { goto L_004B742C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_004B7430; } }
L_004B742C:
    set32(c.r[5], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_004B7430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7438u); set32(c.r[4], ld32((c.r[4].w[0] + 12u)));  if (depth < kMaxDepth) unit_00DD(c, 34u, depth + 1u); else { c.pc = 0x004745A0u; return; } if (c.pc != 0x004B7438u) [[unlikely]] return; }
L_004B7438:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7448u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B7448u) [[unlikely]] return; }
L_004B7448:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7454u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B7454u) [[unlikely]] return; }
L_004B7454:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7460u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B7460u) [[unlikely]] return; }
L_004B7460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004B75F0; } }
L_004B7468:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7474u); set32(c.r[5], c.r[5].w[0] - 1834u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B7474u) [[unlikely]] return; }
L_004B7474:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_004B75CC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 188u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 188u);  if (t) { goto L_004B7494; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_004B7498; } }
L_004B7494:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_004B7498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B74A0u); set32(c.r[4], ld32((c.r[28].w[0] - 24272u)));  if (depth < kMaxDepth) unit_00DB(c, 265u, depth + 1u); else { c.pc = 0x0046FBB0u; return; } if (c.pc != 0x004B74A0u) [[unlikely]] return; }
L_004B74A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 96u));  goto L_004B74BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 100u)));  if (t) { goto L_004B74C4; } }
L_004B74BC:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[17].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_004B74C4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 95u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B74D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 406u, depth + 1u); else { c.pc = 0x0013FE80u; return; } if (c.pc != 0x004B74D4u) [[unlikely]] return; }
L_004B74D4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004B74E8; } }
    c.r[1].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_004B7514; }
L_004B74E8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B74F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B74F4u) [[unlikely]] return; }
L_004B74F4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7500u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B7500u) [[unlikely]] return; }
L_004B7500:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B750Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B750Cu) [[unlikely]] return; }
L_004B750C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B75F0; } }
L_004B7514:
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7524u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x004B7524u) [[unlikely]] return; }
L_004B7524:
    set32(c.r[6], c.r[18].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7538u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x004B7538u) [[unlikely]] return; }
L_004B7538:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[29].w[0] + 65u);  goto L_004B754C; }
    set32(c.r[7], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_004B754C:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 81u);  goto L_004B7560; }
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_004B7560:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 26064u)));  if (t) { goto L_004B7578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_004B757C; } }
L_004B7578:
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004B757C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7584u); set32(c.r[4], ld32((c.r[3].w[0] + 12u)));  if (depth < kMaxDepth) unit_00DD(c, 26u, depth + 1u); else { c.pc = 0x00474460u; return; } if (c.pc != 0x004B7584u) [[unlikely]] return; }
L_004B7584:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7594u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B7594u) [[unlikely]] return; }
L_004B7594:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B75A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B75A0u) [[unlikely]] return; }
L_004B75A0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B75ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B75ACu) [[unlikely]] return; }
L_004B75AC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B75B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B75B8u) [[unlikely]] return; }
L_004B75B8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B75C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B75C4u) [[unlikely]] return; }
L_004B75C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004B75F0; } }
L_004B75CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B75D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B75D4u) [[unlikely]] return; }
L_004B75D4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B75E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B75E0u) [[unlikely]] return; }
L_004B75E0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B75ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B75ECu) [[unlikely]] return; }
L_004B75EC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004B75F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004B7610:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[5], 0u + 6u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7640u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004B7640u) [[unlikely]] return; }
L_004B7640:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 132u)));  goto L_004B7668; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 128u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_004B7668:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B7684; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B767Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B767Cu) [[unlikely]] return; }
L_004B767C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004B77F8; } }
L_004B7684:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 132u)));  goto L_004B7698; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 128u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_004B7698:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_004B76B8; }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B76B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B76B0u) [[unlikely]] return; }
L_004B76B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B77F8; } }
L_004B76B8:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B76C8u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 9u, depth + 1u); else { c.pc = 0x0013C090u; return; } if (c.pc != 0x004B76C8u) [[unlikely]] return; }
L_004B76C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], 0u + 33u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 128u)));  goto L_004B76E4; }
    set32(c.r[16], 0u + 1u);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 3;
L_004B76E4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 128u));  goto L_004B76F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 132u)));  if (t) { goto L_004B7700; } }
L_004B76F8:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_004B7700:
    set32(c.r[20], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u + 95u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7714u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 406u, depth + 1u); else { c.pc = 0x0013FE80u; return; } if (c.pc != 0x004B7714u) [[unlikely]] return; }
L_004B7714:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004B7728; } }
    c.r[1].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[7], c.r[19].w[0] - c.r[16].w[0]);  goto L_004B773C; }
L_004B7728:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7734u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B7734u) [[unlikely]] return; }
L_004B7734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B77F8; } }
L_004B773C:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B774Cu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x004B774Cu) [[unlikely]] return; }
L_004B774C:
    set32(c.r[6], c.r[19].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7760u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x004B7760u) [[unlikely]] return; }
L_004B7760:
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[5], c.r[18].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7770u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00ED(c, 540u, depth + 1u); else { c.pc = 0x004B7C20u; return; } if (c.pc != 0x004B7770u) [[unlikely]] return; }
L_004B7770:
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[2], c.r[18].w[0] + 16u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[3].w[0] + 28u)));  goto L_004B77AC; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B778Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B778Cu) [[unlikely]] return; }
L_004B778C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7798u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B7798u) [[unlikely]] return; }
L_004B7798:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B77A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B77A4u) [[unlikely]] return; }
L_004B77A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B77F8; } }
L_004B77AC:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B77BCu); set32(c.r[5], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B77BCu) [[unlikely]] return; }
L_004B77BC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_004B77CC; } }
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 2;
L_004B77CC:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B77DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B77DCu) [[unlikely]] return; }
L_004B77DC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B77E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B77E8u) [[unlikely]] return; }
L_004B77E8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B77F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B77F4u) [[unlikely]] return; }
L_004B77F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004B77F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004B7820:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7838u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004B7838u) [[unlikely]] return; }
L_004B7838:
    set32(c.r[4], c.r[29].w[0] + 60u);
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7848u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00ED(c, 540u, depth + 1u); else { c.pc = 0x004B7C20u; return; } if (c.pc != 0x004B7848u) [[unlikely]] return; }
L_004B7848:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7854u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B7854u) [[unlikely]] return; }
L_004B7854:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], c.r[16].w[0] + 16u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[16].w[0] + 4u);  goto L_004B786C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B7888; } }
L_004B786C:
    set32(c.r[5], c.r[29].w[0] + 56u);
    set32(c.r[16], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B787Cu); st32((c.r[29].w[0] + 56u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00ED(c, 585u, depth + 1u); else { c.pc = 0x004B7FE0u; return; } if (c.pc != 0x004B787Cu) [[unlikely]] return; }
L_004B787C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7884u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004B7884u) [[unlikely]] return; }
L_004B7884:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004B7888:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004B78A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B78CCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004B78CCu) [[unlikely]] return; }
L_004B78CC:
    set32(c.r[4], c.r[29].w[0] + 124u);
    set32(c.r[5], c.r[19].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B78DCu); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00ED(c, 540u, depth + 1u); else { c.pc = 0x004B7C20u; return; } if (c.pc != 0x004B78DCu) [[unlikely]] return; }
L_004B78DC:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], c.r[19].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B78F8u); c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B78F8u) [[unlikely]] return; }
L_004B78F8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_004B792C; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B790Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004B790Cu) [[unlikely]] return; }
L_004B790C:
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7918u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00ED(c, 530u, depth + 1u); else { c.pc = 0x004B7A90u; return; } if (c.pc != 0x004B7918u) [[unlikely]] return; }
L_004B7918:
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7928u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B7928u) [[unlikely]] return; }
L_004B7928:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004B792C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004B7950:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], 0u + 28u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B796Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004B796Cu) [[unlikely]] return; }
L_004B796C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { st32((c.r[28].w[0] - 22944u), c.r[16].w[0]);  goto L_004B79DC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[17], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 24552u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7990u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004B7990u) [[unlikely]] return; }
L_004B7990:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_004B79A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B79A4u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004B79A4u) [[unlikely]] return; }
L_004B79A4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_004B79A8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  goto L_004B79BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B79B8u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004B79B8u) [[unlikely]] return; }
L_004B79B8:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 1;
L_004B79BC:
    set32(c.r[5], c.r[29].w[0] + 52u);
    set32(c.r[2], c.r[29].w[0] + 60u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 56u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B79D8u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00EE(c, 6u, depth + 1u); else { c.pc = 0x004B80A0u; return; } if (c.pc != 0x004B79D8u) [[unlikely]] return; }
L_004B79D8:
    st32((c.r[28].w[0] - 22944u), c.r[16].w[0]);
    c.budget -= 1;
L_004B79DC:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004B7A00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004B7A6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 24552u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004B7A54; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004B7A58; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B7A54; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004B7A54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7A54u);  if (depth < kMaxDepth) unit_00ED(c, 544u, depth + 1u); else { c.pc = 0x004B7CC0u; return; } if (c.pc != 0x004B7A54u) [[unlikely]] return; }
L_004B7A54:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004B7A58:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004B7A70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7A6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004B7A6Cu) [[unlikely]] return; }
L_004B7A6C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004B7A70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B7A90:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
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
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004B7B00; } }
L_004B7AD4:
    set32(c.r[5], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7AE0u); c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x004B7AE0u) [[unlikely]] return; }
L_004B7AE0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[19].d[0] = c.r[17].d[0] + 0ull;  goto L_004B7AF4; }
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004B7B00; } }
L_004B7AF4:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_004B7B00:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B7AD4u | kUnwind; return; } goto L_004B7AD4; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[5].d[0] = c.r[20].d[0] + 0ull;  goto L_004B7B28; }
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7B1Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x004B7B1Cu) [[unlikely]] return; }
L_004B7B1C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], c.r[19].w[0] + 12u);  goto L_004B7B78; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_004B7B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7B30u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004B7B30u) [[unlikely]] return; }
L_004B7B30:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7B4Cu); st32((c.r[29].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_00EE(c, 7u, depth + 1u); else { c.pc = 0x004B80D0u; return; } if (c.pc != 0x004B7B4Cu) [[unlikely]] return; }
L_004B7B4C:
    set32(c.r[16], c.r[2].w[0] + 12u);
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004B7B78; }
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B7B74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7B74u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004B7B74u) [[unlikely]] return; }
L_004B7B74:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004B7B78:
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
L_004B7BA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004B7C08; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004B7BF4; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004B7BF0; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B7BF0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B7BF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7BF0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004B7BF0u) [[unlikely]] return; }
L_004B7BF0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004B7BF4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004B7C0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7C08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004B7C08u) [[unlikely]] return; }
L_004B7C08:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004B7C0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B7C20:
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
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[19].w[0] + 12u);  if (t) { goto L_004B7C6C; } }
L_004B7C54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7C5Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x004B7C5Cu) [[unlikely]] return; }
L_004B7C5C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], ld32((c.r[17].w[0] + 4u)));  goto L_004B7C6C; }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_004B7C6C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B7C54u | kUnwind; return; } goto L_004B7C54; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[19].w[0] + 12u);  goto L_004B7C98; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7C8Cu); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x004B7C8Cu) [[unlikely]] return; }
L_004B7C8C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[20].w[0]), c.r[16].w[0]);  goto L_004B7C9C; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 1;
L_004B7C98:
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_004B7C9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004B7CC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004B7DE0; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_004B7D50; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004B7D0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7D08u);  if (depth < kMaxDepth) unit_00ED(c, 544u, depth + 1u); else { c.pc = 0x004B7CC0u; return; } if (c.pc != 0x004B7D08u) [[unlikely]] return; }
L_004B7D08:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004B7D0C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004B7D20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7D1Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 544u, depth + 1u); else { c.pc = 0x004B7CC0u; return; } if (c.pc != 0x004B7D1Cu) [[unlikely]] return; }
L_004B7D1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004B7D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7D28u);  if (depth < kMaxDepth) unit_00ED(c, 584u, depth + 1u); else { c.pc = 0x004B7FD0u; return; } if (c.pc != 0x004B7D28u) [[unlikely]] return; }
L_004B7D28:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7D34u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00ED(c, 582u, depth + 1u); else { c.pc = 0x004B7F80u; return; } if (c.pc != 0x004B7D34u) [[unlikely]] return; }
L_004B7D34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7D3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 581u, depth + 1u); else { c.pc = 0x004B7F70u; return; } if (c.pc != 0x004B7D3Cu) [[unlikely]] return; }
L_004B7D3C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7D4Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00ED(c, 579u, depth + 1u); else { c.pc = 0x004B7F50u; return; } if (c.pc != 0x004B7D4Cu) [[unlikely]] return; }
L_004B7D4C:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_004B7D50:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004B7DB4; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004B7D70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7D6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 544u, depth + 1u); else { c.pc = 0x004B7CC0u; return; } if (c.pc != 0x004B7D6Cu) [[unlikely]] return; }
L_004B7D6C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004B7D70:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004B7D84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7D80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 544u, depth + 1u); else { c.pc = 0x004B7CC0u; return; } if (c.pc != 0x004B7D80u) [[unlikely]] return; }
L_004B7D80:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004B7D84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7D8Cu);  if (depth < kMaxDepth) unit_00ED(c, 584u, depth + 1u); else { c.pc = 0x004B7FD0u; return; } if (c.pc != 0x004B7D8Cu) [[unlikely]] return; }
L_004B7D8C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7D98u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00ED(c, 582u, depth + 1u); else { c.pc = 0x004B7F80u; return; } if (c.pc != 0x004B7D98u) [[unlikely]] return; }
L_004B7D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7DA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 581u, depth + 1u); else { c.pc = 0x004B7F70u; return; } if (c.pc != 0x004B7DA0u) [[unlikely]] return; }
L_004B7DA0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7DB0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00ED(c, 579u, depth + 1u); else { c.pc = 0x004B7F50u; return; } if (c.pc != 0x004B7DB0u) [[unlikely]] return; }
L_004B7DB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004B7DB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7DBCu);  if (depth < kMaxDepth) unit_00ED(c, 584u, depth + 1u); else { c.pc = 0x004B7FD0u; return; } if (c.pc != 0x004B7DBCu) [[unlikely]] return; }
L_004B7DBC:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7DC8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00ED(c, 537u, depth + 1u); else { c.pc = 0x004B7BA0u; return; } if (c.pc != 0x004B7DC8u) [[unlikely]] return; }
L_004B7DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7DD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 581u, depth + 1u); else { c.pc = 0x004B7F70u; return; } if (c.pc != 0x004B7DD0u) [[unlikely]] return; }
L_004B7DD0:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_004B7DE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7DE0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004B7DE0u) [[unlikely]] return; }
L_004B7DE0:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004B7DE4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 12u);  goto L_004B7EE8; }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_004B7E54; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004B7E10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7E0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 544u, depth + 1u); else { c.pc = 0x004B7CC0u; return; } if (c.pc != 0x004B7E0Cu) [[unlikely]] return; }
L_004B7E0C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004B7E10:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004B7E24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7E20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 544u, depth + 1u); else { c.pc = 0x004B7CC0u; return; } if (c.pc != 0x004B7E20u) [[unlikely]] return; }
L_004B7E20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004B7E24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7E2Cu);  if (depth < kMaxDepth) unit_00ED(c, 584u, depth + 1u); else { c.pc = 0x004B7FD0u; return; } if (c.pc != 0x004B7E2Cu) [[unlikely]] return; }
L_004B7E2C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7E38u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00ED(c, 582u, depth + 1u); else { c.pc = 0x004B7F80u; return; } if (c.pc != 0x004B7E38u) [[unlikely]] return; }
L_004B7E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7E40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 581u, depth + 1u); else { c.pc = 0x004B7F70u; return; } if (c.pc != 0x004B7E40u) [[unlikely]] return; }
L_004B7E40:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7E50u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00ED(c, 579u, depth + 1u); else { c.pc = 0x004B7F50u; return; } if (c.pc != 0x004B7E50u) [[unlikely]] return; }
L_004B7E50:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_004B7E54:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004B7EB8; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004B7E74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7E70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 544u, depth + 1u); else { c.pc = 0x004B7CC0u; return; } if (c.pc != 0x004B7E70u) [[unlikely]] return; }
L_004B7E70:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004B7E74:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004B7E88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7E84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 544u, depth + 1u); else { c.pc = 0x004B7CC0u; return; } if (c.pc != 0x004B7E84u) [[unlikely]] return; }
L_004B7E84:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004B7E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7E90u);  if (depth < kMaxDepth) unit_00ED(c, 584u, depth + 1u); else { c.pc = 0x004B7FD0u; return; } if (c.pc != 0x004B7E90u) [[unlikely]] return; }
L_004B7E90:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7E9Cu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00ED(c, 582u, depth + 1u); else { c.pc = 0x004B7F80u; return; } if (c.pc != 0x004B7E9Cu) [[unlikely]] return; }
L_004B7E9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7EA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 581u, depth + 1u); else { c.pc = 0x004B7F70u; return; } if (c.pc != 0x004B7EA4u) [[unlikely]] return; }
L_004B7EA4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7EB4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00ED(c, 579u, depth + 1u); else { c.pc = 0x004B7F50u; return; } if (c.pc != 0x004B7EB4u) [[unlikely]] return; }
L_004B7EB4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004B7EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7EC0u);  if (depth < kMaxDepth) unit_00ED(c, 584u, depth + 1u); else { c.pc = 0x004B7FD0u; return; } if (c.pc != 0x004B7EC0u) [[unlikely]] return; }
L_004B7EC0:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7ECCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00ED(c, 537u, depth + 1u); else { c.pc = 0x004B7BA0u; return; } if (c.pc != 0x004B7ECCu) [[unlikely]] return; }
L_004B7ECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7ED4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 581u, depth + 1u); else { c.pc = 0x004B7F70u; return; } if (c.pc != 0x004B7ED4u) [[unlikely]] return; }
L_004B7ED4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004B7EE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7EE4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004B7EE4u) [[unlikely]] return; }
L_004B7EE4:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_004B7EE8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B7F24; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B7F24; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B7F24; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B7F24; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B7F24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7F24u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004B7F24u) [[unlikely]] return; }
L_004B7F24:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_004B7F38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7F34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004B7F34u) [[unlikely]] return; }
L_004B7F34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004B7F38:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004B7F50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004B7F64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7F64u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004B7F64u) [[unlikely]] return; }
L_004B7F64:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004B7F70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_004B7F80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004B7FC0; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004B7FC4; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004B7FC0; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B7FC0; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B7FC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7FC0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004B7FC0u) [[unlikely]] return; }
L_004B7FC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004B7FC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004B7FD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004B7FE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 8;
    [[clang::musttail]] return unit_00EE(c, 1u, depth);
}

}
