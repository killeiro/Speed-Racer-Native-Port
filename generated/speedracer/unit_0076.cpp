#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0076[4096] = {
    1, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    0, 13, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17,
    0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0,
    0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0,
    0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0,
    0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0,
    0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0,
    0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0,
    0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 122, 0, 0,
    0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137,
    0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0,
    0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0,
    0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0,
    0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0,
    0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0,
    0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0,
    203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 220, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223,
    0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228,
    0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 234, 0, 0, 235, 0, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244,
    0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0,
    0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 270,
    0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0,
    279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0,
    289, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0,
    0, 296, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0,
    311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0,
    0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0,
    328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0,
    332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336,
    0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0,
    0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0,
    0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0,
    0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366,
    0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371,
    0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376,
    0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 381, 0, 0, 382, 0, 0, 0, 383, 0, 0,
    384, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0,
    0, 0, 0, 389, 0, 0, 390, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395,
    0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0,
    0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0,
    0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0,
    419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0,
    423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0,
    0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0,
    0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 442,
    0, 443, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0,
    0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 452, 0, 0, 0, 0,
    0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0,
    0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 462, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 469,
    0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0,
    0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0,
    481, 0, 0, 0, 482, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0,
    0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 515, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0076(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002D8000;
    case 2u: goto L_002D8018;
    case 3u: goto L_002D801C;
    case 4u: goto L_002D802C;
    case 5u: goto L_002D803C;
    case 6u: goto L_002D806C;
    case 7u: goto L_002D807C;
    case 8u: goto L_002D8090;
    case 9u: goto L_002D80A4;
    case 10u: goto L_002D80C4;
    case 11u: goto L_002D80D8;
    case 12u: goto L_002D80E8;
    case 13u: goto L_002D8104;
    case 14u: goto L_002D8108;
    case 15u: goto L_002D8130;
    case 16u: goto L_002D8150;
    case 17u: goto L_002D817C;
    case 18u: goto L_002D818C;
    case 19u: goto L_002D81A8;
    case 20u: goto L_002D81B8;
    case 21u: goto L_002D81D4;
    case 22u: goto L_002D81E8;
    case 23u: goto L_002D8208;
    case 24u: goto L_002D8230;
    case 25u: goto L_002D8268;
    case 26u: goto L_002D8284;
    case 27u: goto L_002D82BC;
    case 28u: goto L_002D82CC;
    case 29u: goto L_002D82E0;
    case 30u: goto L_002D8300;
    case 31u: goto L_002D8310;
    case 32u: goto L_002D8324;
    case 33u: goto L_002D8334;
    case 34u: goto L_002D8350;
    case 35u: goto L_002D8370;
    case 36u: goto L_002D83C0;
    case 37u: goto L_002D83D0;
    case 38u: goto L_002D83E4;
    case 39u: goto L_002D8404;
    case 40u: goto L_002D8414;
    case 41u: goto L_002D8428;
    case 42u: goto L_002D8438;
    case 43u: goto L_002D8454;
    case 44u: goto L_002D8480;
    case 45u: goto L_002D84D0;
    case 46u: goto L_002D84E0;
    case 47u: goto L_002D84F4;
    case 48u: goto L_002D8514;
    case 49u: goto L_002D8524;
    case 50u: goto L_002D8538;
    case 51u: goto L_002D8548;
    case 52u: goto L_002D8564;
    case 53u: goto L_002D8590;
    case 54u: goto L_002D85B4;
    case 55u: goto L_002D85EC;
    case 56u: goto L_002D85F8;
    case 57u: goto L_002D8630;
    case 58u: goto L_002D8644;
    case 59u: goto L_002D8680;
    case 60u: goto L_002D86D0;
    case 61u: goto L_002D8714;
    case 62u: goto L_002D8720;
    case 63u: goto L_002D8758;
    case 64u: goto L_002D876C;
    case 65u: goto L_002D8798;
    case 66u: goto L_002D87E0;
    case 67u: goto L_002D8814;
    case 68u: goto L_002D8824;
    case 69u: goto L_002D8840;
    case 70u: goto L_002D885C;
    case 71u: goto L_002D8880;
    case 72u: goto L_002D8894;
    case 73u: goto L_002D88B4;
    case 74u: goto L_002D88C8;
    case 75u: goto L_002D88DC;
    case 76u: goto L_002D88F0;
    case 77u: goto L_002D8904;
    case 78u: goto L_002D8924;
    case 79u: goto L_002D8938;
    case 80u: goto L_002D894C;
    case 81u: goto L_002D896C;
    case 82u: goto L_002D8980;
    case 83u: goto L_002D8994;
    case 84u: goto L_002D89A8;
    case 85u: goto L_002D89BC;
    case 86u: goto L_002D89D0;
    case 87u: goto L_002D89F0;
    case 88u: goto L_002D8A04;
    case 89u: goto L_002D8A18;
    case 90u: goto L_002D8A38;
    case 91u: goto L_002D8A50;
    case 92u: goto L_002D8A84;
    case 93u: goto L_002D8A94;
    case 94u: goto L_002D8AA8;
    case 95u: goto L_002D8AC0;
    case 96u: goto L_002D8AE4;
    case 97u: goto L_002D8AF4;
    case 98u: goto L_002D8B10;
    case 99u: goto L_002D8B24;
    case 100u: goto L_002D8B34;
    case 101u: goto L_002D8B70;
    case 102u: goto L_002D8B84;
    case 103u: goto L_002D8BA4;
    case 104u: goto L_002D8BEC;
    case 105u: goto L_002D8C04;
    case 106u: goto L_002D8C18;
    case 107u: goto L_002D8C30;
    case 108u: goto L_002D8C54;
    case 109u: goto L_002D8C64;
    case 110u: goto L_002D8C80;
    case 111u: goto L_002D8C94;
    case 112u: goto L_002D8CA4;
    case 113u: goto L_002D8CE0;
    case 114u: goto L_002D8CF4;
    case 115u: goto L_002D8D14;
    case 116u: goto L_002D8D3C;
    case 117u: goto L_002D8D70;
    case 118u: goto L_002D8D90;
    case 119u: goto L_002D8DA0;
    case 120u: goto L_002D8DDC;
    case 121u: goto L_002D8DEC;
    case 122u: goto L_002D8DF4;
    case 123u: goto L_002D8E08;
    case 124u: goto L_002D8E30;
    case 125u: goto L_002D8E40;
    case 126u: goto L_002D8E5C;
    case 127u: goto L_002D8E70;
    case 128u: goto L_002D8E80;
    case 129u: goto L_002D8EAC;
    case 130u: goto L_002D8ED4;
    case 131u: goto L_002D8EE4;
    case 132u: goto L_002D8F00;
    case 133u: goto L_002D8F14;
    case 134u: goto L_002D8F24;
    case 135u: goto L_002D8F4C;
    case 136u: goto L_002D8F6C;
    case 137u: goto L_002D8F7C;
    case 138u: goto L_002D8F98;
    case 139u: goto L_002D8FAC;
    case 140u: goto L_002D8FBC;
    case 141u: goto L_002D8FE0;
    case 142u: goto L_002D8FF0;
    case 143u: goto L_002D900C;
    case 144u: goto L_002D9024;
    case 145u: goto L_002D9038;
    case 146u: goto L_002D9048;
    case 147u: goto L_002D9064;
    case 148u: goto L_002D9090;
    case 149u: goto L_002D90C8;
    case 150u: goto L_002D90D8;
    case 151u: goto L_002D90F4;
    case 152u: goto L_002D9108;
    case 153u: goto L_002D9118;
    case 154u: goto L_002D9130;
    case 155u: goto L_002D9150;
    case 156u: goto L_002D9164;
    case 157u: goto L_002D9198;
    case 158u: goto L_002D91D0;
    case 159u: goto L_002D91EC;
    case 160u: goto L_002D9204;
    case 161u: goto L_002D9230;
    case 162u: goto L_002D924C;
    case 163u: goto L_002D9280;
    case 164u: goto L_002D92C0;
    case 165u: goto L_002D9320;
    case 166u: goto L_002D9358;
    case 167u: goto L_002D9368;
    case 168u: goto L_002D9388;
    case 169u: goto L_002D93A4;
    case 170u: goto L_002D93C4;
    case 171u: goto L_002D93E0;
    case 172u: goto L_002D9410;
    case 173u: goto L_002D9420;
    case 174u: goto L_002D9440;
    case 175u: goto L_002D9470;
    case 176u: goto L_002D94BC;
    case 177u: goto L_002D94CC;
    case 178u: goto L_002D94E8;
    case 179u: goto L_002D9520;
    case 180u: goto L_002D9530;
    case 181u: goto L_002D9550;
    case 182u: goto L_002D955C;
    case 183u: goto L_002D9578;
    case 184u: goto L_002D95A0;
    case 185u: goto L_002D95C8;
    case 186u: goto L_002D95F0;
    case 187u: goto L_002D9608;
    case 188u: goto L_002D9618;
    case 189u: goto L_002D9628;
    case 190u: goto L_002D9644;
    case 191u: goto L_002D9658;
    case 192u: goto L_002D9668;
    case 193u: goto L_002D9684;
    case 194u: goto L_002D9694;
    case 195u: goto L_002D96B0;
    case 196u: goto L_002D96C4;
    case 197u: goto L_002D96D4;
    case 198u: goto L_002D96E8;
    case 199u: goto L_002D96F8;
    case 200u: goto L_002D9714;
    case 201u: goto L_002D9740;
    case 202u: goto L_002D9764;
    case 203u: goto L_002D9780;
    case 204u: goto L_002D97A0;
    case 205u: goto L_002D97CC;
    case 206u: goto L_002D97DC;
    case 207u: goto L_002D9808;
    case 208u: goto L_002D9818;
    case 209u: goto L_002D9838;
    case 210u: goto L_002D9870;
    case 211u: goto L_002D9888;
    case 212u: goto L_002D98A8;
    case 213u: goto L_002D98B0;
    case 214u: goto L_002D98BC;
    case 215u: goto L_002D98CC;
    case 216u: goto L_002D98E0;
    case 217u: goto L_002D9900;
    case 218u: goto L_002D9924;
    case 219u: goto L_002D9938;
    case 220u: goto L_002D9940;
    case 221u: goto L_002D994C;
    case 222u: goto L_002D9960;
    case 223u: goto L_002D997C;
    case 224u: goto L_002D998C;
    case 225u: goto L_002D99A4;
    case 226u: goto L_002D99B8;
    case 227u: goto L_002D99E0;
    case 228u: goto L_002D99FC;
    case 229u: goto L_002D9A10;
    case 230u: goto L_002D9A18;
    case 231u: goto L_002D9A28;
    case 232u: goto L_002D9A54;
    case 233u: goto L_002D9A5C;
    case 234u: goto L_002D9A60;
    case 235u: goto L_002D9A6C;
    case 236u: goto L_002D9A90;
    case 237u: goto L_002D9AAC;
    case 238u: goto L_002D9ADC;
    case 239u: goto L_002D9AF4;
    case 240u: goto L_002D9B20;
    case 241u: goto L_002D9B3C;
    case 242u: goto L_002D9B50;
    case 243u: goto L_002D9B74;
    case 244u: goto L_002D9B7C;
    case 245u: goto L_002D9B88;
    case 246u: goto L_002D9BA4;
    case 247u: goto L_002D9BB0;
    case 248u: goto L_002D9BC8;
    case 249u: goto L_002D9BDC;
    case 250u: goto L_002D9C00;
    case 251u: goto L_002D9C10;
    case 252u: goto L_002D9C48;
    case 253u: goto L_002D9C64;
    case 254u: goto L_002D9C80;
    case 255u: goto L_002D9C90;
    case 256u: goto L_002D9CB8;
    case 257u: goto L_002D9CD0;
    case 258u: goto L_002D9CF4;
    case 259u: goto L_002D9D18;
    case 260u: goto L_002D9D30;
    case 261u: goto L_002D9D5C;
    case 262u: goto L_002D9DE0;
    case 263u: goto L_002D9E0C;
    case 264u: goto L_002D9E18;
    case 265u: goto L_002D9E24;
    case 266u: goto L_002D9E40;
    case 267u: goto L_002D9E48;
    case 268u: goto L_002D9E64;
    case 269u: goto L_002D9E70;
    case 270u: goto L_002D9E7C;
    case 271u: goto L_002D9E90;
    case 272u: goto L_002D9EA4;
    case 273u: goto L_002D9EB0;
    case 274u: goto L_002D9F00;
    case 275u: goto L_002D9F10;
    case 276u: goto L_002D9F30;
    case 277u: goto L_002D9F50;
    case 278u: goto L_002D9F70;
    case 279u: goto L_002D9F80;
    case 280u: goto L_002D9F9C;
    case 281u: goto L_002D9FB0;
    case 282u: goto L_002D9FC0;
    case 283u: goto L_002D9FE0;
    case 284u: goto L_002DA00C;
    case 285u: goto L_002DA018;
    case 286u: goto L_002DA024;
    case 287u: goto L_002DA040;
    case 288u: goto L_002DA05C;
    case 289u: goto L_002DA080;
    case 290u: goto L_002DA08C;
    case 291u: goto L_002DA094;
    case 292u: goto L_002DA0B0;
    case 293u: goto L_002DA0BC;
    case 294u: goto L_002DA0C8;
    case 295u: goto L_002DA0E8;
    case 296u: goto L_002DA104;
    case 297u: goto L_002DA110;
    case 298u: goto L_002DA124;
    case 299u: goto L_002DA130;
    case 300u: goto L_002DA180;
    case 301u: goto L_002DA19C;
    case 302u: goto L_002DA1AC;
    case 303u: goto L_002DA1CC;
    case 304u: goto L_002DA1DC;
    case 305u: goto L_002DA210;
    case 306u: goto L_002DA254;
    case 307u: goto L_002DA27C;
    case 308u: goto L_002DA2B4;
    case 309u: goto L_002DA2D4;
    case 310u: goto L_002DA2E4;
    case 311u: goto L_002DA300;
    case 312u: goto L_002DA30C;
    case 313u: goto L_002DA328;
    case 314u: goto L_002DA350;
    case 315u: goto L_002DA360;
    case 316u: goto L_002DA380;
    case 317u: goto L_002DA390;
    case 318u: goto L_002DA3B4;
    case 319u: goto L_002DA3C0;
    case 320u: goto L_002DA3D4;
    case 321u: goto L_002DA3F0;
    case 322u: goto L_002DA404;
    case 323u: goto L_002DA42C;
    case 324u: goto L_002DA440;
    case 325u: goto L_002DA454;
    case 326u: goto L_002DA468;
    case 327u: goto L_002DA474;
    case 328u: goto L_002DA480;
    case 329u: goto L_002DA4C0;
    case 330u: goto L_002DA4C8;
    case 331u: goto L_002DA4DC;
    case 332u: goto L_002DA500;
    case 333u: goto L_002DA514;
    case 334u: goto L_002DA530;
    case 335u: goto L_002DA550;
    case 336u: goto L_002DA57C;
    case 337u: goto L_002DA590;
    case 338u: goto L_002DA5AC;
    case 339u: goto L_002DA5CC;
    case 340u: goto L_002DA5F4;
    case 341u: goto L_002DA640;
    case 342u: goto L_002DA660;
    case 343u: goto L_002DA674;
    case 344u: goto L_002DA688;
    case 345u: goto L_002DA69C;
    case 346u: goto L_002DA6B4;
    case 347u: goto L_002DA6BC;
    case 348u: goto L_002DA6D8;
    case 349u: goto L_002DA710;
    case 350u: goto L_002DA734;
    case 351u: goto L_002DA754;
    case 352u: goto L_002DA770;
    case 353u: goto L_002DA784;
    case 354u: goto L_002DA794;
    case 355u: goto L_002DA7B0;
    case 356u: goto L_002DA7E0;
    case 357u: goto L_002DA838;
    case 358u: goto L_002DA848;
    case 359u: goto L_002DA864;
    case 360u: goto L_002DA878;
    case 361u: goto L_002DA888;
    case 362u: goto L_002DA8A8;
    case 363u: goto L_002DA8B8;
    case 364u: goto L_002DA8D4;
    case 365u: goto L_002DA8EC;
    case 366u: goto L_002DA8FC;
    case 367u: goto L_002DA920;
    case 368u: goto L_002DA944;
    case 369u: goto L_002DA94C;
    case 370u: goto L_002DA96C;
    case 371u: goto L_002DA97C;
    case 372u: goto L_002DA998;
    case 373u: goto L_002DA9AC;
    case 374u: goto L_002DA9BC;
    case 375u: goto L_002DA9DC;
    case 376u: goto L_002DA9FC;
    case 377u: goto L_002DAA0C;
    case 378u: goto L_002DAA28;
    case 379u: goto L_002DAA3C;
    case 380u: goto L_002DAA4C;
    case 381u: goto L_002DAA58;
    case 382u: goto L_002DAA64;
    case 383u: goto L_002DAA74;
    case 384u: goto L_002DAA80;
    case 385u: goto L_002DAA88;
    case 386u: goto L_002DAAD0;
    case 387u: goto L_002DAAE4;
    case 388u: goto L_002DAAEC;
    case 389u: goto L_002DAB0C;
    case 390u: goto L_002DAB18;
    case 391u: goto L_002DAB20;
    case 392u: goto L_002DAB30;
    case 393u: goto L_002DAB4C;
    case 394u: goto L_002DAB5C;
    case 395u: goto L_002DAB7C;
    case 396u: goto L_002DAB8C;
    case 397u: goto L_002DABA0;
    case 398u: goto L_002DABB0;
    case 399u: goto L_002DABE0;
    case 400u: goto L_002DAC10;
    case 401u: goto L_002DAC20;
    case 402u: goto L_002DAC40;
    case 403u: goto L_002DAC50;
    case 404u: goto L_002DAC64;
    case 405u: goto L_002DAC74;
    case 406u: goto L_002DAC98;
    case 407u: goto L_002DACB8;
    case 408u: goto L_002DACC8;
    case 409u: goto L_002DACE4;
    case 410u: goto L_002DACF8;
    case 411u: goto L_002DAD08;
    case 412u: goto L_002DAD28;
    case 413u: goto L_002DAD38;
    case 414u: goto L_002DAD54;
    case 415u: goto L_002DAD68;
    case 416u: goto L_002DAD78;
    case 417u: goto L_002DADAC;
    case 418u: goto L_002DADF0;
    case 419u: goto L_002DAE00;
    case 420u: goto L_002DAE38;
    case 421u: goto L_002DAEB0;
    case 422u: goto L_002DAF60;
    case 423u: goto L_002DAF80;
    case 424u: goto L_002DAFC4;
    case 425u: goto L_002DAFD4;
    case 426u: goto L_002DB010;
    case 427u: goto L_002DB01C;
    case 428u: goto L_002DB034;
    case 429u: goto L_002DB064;
    case 430u: goto L_002DB09C;
    case 431u: goto L_002DB0AC;
    case 432u: goto L_002DB128;
    case 433u: goto L_002DB144;
    case 434u: goto L_002DB170;
    case 435u: goto L_002DB190;
    case 436u: goto L_002DB1A0;
    case 437u: goto L_002DB1C0;
    case 438u: goto L_002DB1E4;
    case 439u: goto L_002DB208;
    case 440u: goto L_002DB250;
    case 441u: goto L_002DB270;
    case 442u: goto L_002DB27C;
    case 443u: goto L_002DB284;
    case 444u: goto L_002DB2A4;
    case 445u: goto L_002DB2D0;
    case 446u: goto L_002DB2E0;
    case 447u: goto L_002DB2F0;
    case 448u: goto L_002DB310;
    case 449u: goto L_002DB31C;
    case 450u: goto L_002DB340;
    case 451u: goto L_002DB360;
    case 452u: goto L_002DB36C;
    case 453u: goto L_002DB38C;
    case 454u: goto L_002DB3C0;
    case 455u: goto L_002DB3D8;
    case 456u: goto L_002DB3E8;
    case 457u: goto L_002DB410;
    case 458u: goto L_002DB468;
    case 459u: goto L_002DB484;
    case 460u: goto L_002DB4B4;
    case 461u: goto L_002DB4D8;
    case 462u: goto L_002DB4F8;
    case 463u: goto L_002DB524;
    case 464u: goto L_002DB538;
    case 465u: goto L_002DB58C;
    case 466u: goto L_002DB598;
    case 467u: goto L_002DB5CC;
    case 468u: goto L_002DB658;
    case 469u: goto L_002DB67C;
    case 470u: goto L_002DB688;
    case 471u: goto L_002DB6A8;
    case 472u: goto L_002DB6B8;
    case 473u: goto L_002DB6D4;
    case 474u: goto L_002DB6E0;
    case 475u: goto L_002DB720;
    case 476u: goto L_002DB758;
    case 477u: goto L_002DB774;
    case 478u: goto L_002DB790;
    case 479u: goto L_002DB7E4;
    case 480u: goto L_002DB7F4;
    case 481u: goto L_002DB800;
    case 482u: goto L_002DB810;
    case 483u: goto L_002DB81C;
    case 484u: goto L_002DB840;
    case 485u: goto L_002DB860;
    case 486u: goto L_002DB8BC;
    case 487u: goto L_002DB8EC;
    case 488u: goto L_002DB918;
    case 489u: goto L_002DB94C;
    case 490u: goto L_002DB9D0;
    case 491u: goto L_002DB9FC;
    case 492u: goto L_002DBA28;
    case 493u: goto L_002DBA5C;
    case 494u: goto L_002DBAF8;
    case 495u: goto L_002DBB3C;
    case 496u: goto L_002DBB88;
    case 497u: goto L_002DBBC0;
    case 498u: goto L_002DBBF8;
    case 499u: goto L_002DBC08;
    case 500u: goto L_002DBC1C;
    case 501u: goto L_002DBC34;
    case 502u: goto L_002DBCB8;
    case 503u: goto L_002DBCE8;
    case 504u: goto L_002DBCF4;
    case 505u: goto L_002DBD2C;
    case 506u: goto L_002DBD50;
    case 507u: goto L_002DBD58;
    case 508u: goto L_002DBE04;
    case 509u: goto L_002DBE10;
    case 510u: goto L_002DBE80;
    case 511u: goto L_002DBEC8;
    case 512u: goto L_002DBEE8;
    case 513u: goto L_002DBF38;
    case 514u: goto L_002DBF54;
    case 515u: goto L_002DBF84;
    case 516u: goto L_002DBFA0;
    default: bad_entry(c, 0x002D8000u); return;
    }
L_002D8000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8018; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8018u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8018u) [[unlikely]] return; }
L_002D8018:
    set32(c.r[18], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 1;
L_002D801C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[16].w[0]), c.r[18].w[0]);  if (t) { goto L_002D803C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D802Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D802Cu) [[unlikely]] return; }
L_002D802C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D803Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D803Cu) [[unlikely]] return; }
L_002D803C:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 4u), c.r[17].w[0]);  goto L_002D8058; }
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_002D8058:
    st32((c.r[19].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_002D80C4; } }
L_002D806C:
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[6], c.r[29].w[0] + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D807Cu); set32(c.r[5], c.r[2].w[0] + 232u);  if (depth < kMaxDepth) unit_0076(c, 15u, depth + 1u); else { c.pc = 0x002D8130u; return; } if (c.pc != 0x002D807Cu) [[unlikely]] return; }
L_002D807C:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 92u)));  goto L_002D80C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8090u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8090u) [[unlikely]] return; }
L_002D8090:
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D80A4u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D80A4u) [[unlikely]] return; }
L_002D80A4:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D80C4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D80C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D80C4u) [[unlikely]] return; }
L_002D80C4:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 1;
L_002D80C8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002D8108; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D80D8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D80D8u) [[unlikely]] return; }
L_002D80D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D80E8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D80E8u) [[unlikely]] return; }
L_002D80E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8104; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8104u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8104u) [[unlikely]] return; }
L_002D8104:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002D8108:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002D8130:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[5].w[0] + 4u)));  if (t) { goto L_002D8168; } }
L_002D8150:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[4].w[0])));  if (t) { goto L_002D8168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 76u), c.r[7].w[0]);  if (t) { goto L_002D8178; } }
L_002D8168:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D8150u | kUnwind; return; } goto L_002D8150; }
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 76u), c.r[7].w[0]);
    c.budget -= 2;
L_002D8178:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002D8194; } }
    goto L_002D8180;
L_002D817C:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D8180:
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D818Cu); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0076(c, 24u, depth + 1u); else { c.pc = 0x002D8230u; return; } if (c.pc != 0x002D818Cu) [[unlikely]] return; }
L_002D818C:
    set32(c.r[18], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 72u);
    c.budget -= 2;
L_002D8194:
    set32(c.r[17], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_002D81B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D81A8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D81A8u) [[unlikely]] return; }
L_002D81A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D81B8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D81B8u) [[unlikely]] return; }
L_002D81B8:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002D820C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8208; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D81D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D81D4u) [[unlikely]] return; }
L_002D81D4:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D81E8u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D81E8u) [[unlikely]] return; }
L_002D81E8:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8208; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8208u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8208u) [[unlikely]] return; }
L_002D8208:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002D820C:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D8230:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D8270; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8268u); st32((c.r[6].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 44u, depth + 1u); else { c.pc = 0x002D8480u; return; } if (c.pc != 0x002D8268u) [[unlikely]] return; }
L_002D8268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002D8358; } }
L_002D8270:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_002D828C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8284u); st32((c.r[6].w[0]), 0u);  if (depth < kMaxDepth) unit_0076(c, 35u, depth + 1u); else { c.pc = 0x002D8370u; return; } if (c.pc != 0x002D8284u) [[unlikely]] return; }
L_002D8284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D8354; } }
L_002D828C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_002D829C; } }
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002D829C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 8u)));  goto L_002D82AC; }
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 2;
L_002D82AC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 92u), c.r[19].w[0]);  if (t) { goto L_002D82CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D82BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D82BCu) [[unlikely]] return; }
L_002D82BC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D82CCu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D82CCu) [[unlikely]] return; }
L_002D82CC:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D82E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D82E0u) [[unlikely]] return; }
L_002D82E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0]), c.r[16].w[0]);  if (t) { goto L_002D8310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8300u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8300u) [[unlikely]] return; }
L_002D8300:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8310u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8310u) [[unlikely]] return; }
L_002D8310:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D8354; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8324u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8324u) [[unlikely]] return; }
L_002D8324:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8334u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8334u) [[unlikely]] return; }
L_002D8334:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8350; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8350u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8350u) [[unlikely]] return; }
L_002D8350:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D8354:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002D8358:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002D8370:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002D83A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_002D83AC; } }
L_002D83A8:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_002D83AC:
    set32(c.r[19], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 92u), c.r[19].w[0]);  if (t) { goto L_002D83D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D83C0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D83C0u) [[unlikely]] return; }
L_002D83C0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D83D0u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D83D0u) [[unlikely]] return; }
L_002D83D0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D83E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D83E4u) [[unlikely]] return; }
L_002D83E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0]), c.r[16].w[0]);  if (t) { goto L_002D8414; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8404u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8404u) [[unlikely]] return; }
L_002D8404:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8414u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8414u) [[unlikely]] return; }
L_002D8414:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002D8458; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8428u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8428u) [[unlikely]] return; }
L_002D8428:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8438u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8438u) [[unlikely]] return; }
L_002D8438:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8454; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8454u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8454u) [[unlikely]] return; }
L_002D8454:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002D8458:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002D8480:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[5].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002D84B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), 0u);  if (t) { goto L_002D84BC; } }
L_002D84B8:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_002D84BC:
    set32(c.r[19], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 92u), c.r[19].w[0]);  if (t) { goto L_002D84E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D84D0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D84D0u) [[unlikely]] return; }
L_002D84D0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D84E0u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D84E0u) [[unlikely]] return; }
L_002D84E0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D84F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D84F4u) [[unlikely]] return; }
L_002D84F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0]), c.r[16].w[0]);  if (t) { goto L_002D8524; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8514u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8514u) [[unlikely]] return; }
L_002D8514:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8524u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8524u) [[unlikely]] return; }
L_002D8524:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002D8568; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8538u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8538u) [[unlikely]] return; }
L_002D8538:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8548u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8548u) [[unlikely]] return; }
L_002D8548:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8564; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8564u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8564u) [[unlikely]] return; }
L_002D8564:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002D8568:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002D8590:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 9;
L_002D85B4:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002D865C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_002D85E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002D8624; } }
L_002D85E0:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D85ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D85ECu) [[unlikely]] return; }
L_002D85EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 15312u);  if (t) { goto L_002D8608; } }
L_002D85F8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_002D8608; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D8614; } }
L_002D8608:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D85F8u | kUnwind; return; } goto L_002D85F8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D8614:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002D8624; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D8624; } }
L_002D8624:
    set32(c.r[19], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 44u)));  if (t) { goto L_002D8644; } }
L_002D8630:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8644u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8644u) [[unlikely]] return; }
L_002D8644:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D8630u | kUnwind; return; } goto L_002D8630; }
    st32((c.r[19].w[0] + 12u), 0u);
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0] + 8u), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 4;
L_002D865C:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D85B4u | kUnwind; return; } goto L_002D85B4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 27556u)));
    set32(c.r[25], ld32((c.r[2].w[0] + 140u)));
    set32(c.r[16], c.r[2].w[0] + 140u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8680u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8680u) [[unlikely]] return; }
L_002D8680:
    st32((c.r[2].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  goto L_002D86A0; }
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002D86A0:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D86D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D8780; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[17].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_002D8708; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002D874C; } }
L_002D8708:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8714u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8714u) [[unlikely]] return; }
L_002D8714:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 15312u);  if (t) { goto L_002D8730; } }
L_002D8720:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_002D8730; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002D873C; } }
L_002D8730:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D8720u | kUnwind; return; } goto L_002D8720; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D873C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002D874C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D874C; } }
L_002D874C:
    set32(c.r[18], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[17].w[0] + 44u)));  if (t) { goto L_002D876C; } }
L_002D8758:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D876Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D876Cu) [[unlikely]] return; }
L_002D876C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D8758u | kUnwind; return; } goto L_002D8758; }
    st32((c.r[18].w[0] + 12u), 0u);
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 3;
L_002D8780:
    set32(c.r[2], ld32((c.r[28].w[0] - 27556u)));
    set32(c.r[25], ld32((c.r[2].w[0] + 108u)));
    set32(c.r[17], c.r[2].w[0] + 108u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8798u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8798u) [[unlikely]] return; }
L_002D8798:
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  goto L_002D87B8; }
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002D87B8:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D87E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D885C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_002D8844; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8814u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8814u) [[unlikely]] return; }
L_002D8814:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8824u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8824u) [[unlikely]] return; }
L_002D8824:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8840; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8840u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8840u) [[unlikely]] return; }
L_002D8840:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_002D8844:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002D8860; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D885Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002D885Cu) [[unlikely]] return; }
L_002D885C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002D8860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D8880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8894u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 532u, depth + 1u); else { c.pc = 0x002D7D60u; return; } if (c.pc != 0x002D8894u) [[unlikely]] return; }
L_002D8894:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 36u), c.r[16].w[0]);  goto L_002D8970; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 44u), c.r[16].w[0]);  if (t) { goto L_002D88C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D88B4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D88B4u) [[unlikely]] return; }
L_002D88B4:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D88C8u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D88C8u) [[unlikely]] return; }
L_002D88C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27556u)));
    set32(c.r[4], c.r[29].w[0] + 40u);
    set32(c.r[6], c.r[29].w[0] + 44u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D88DCu); set32(c.r[5], c.r[2].w[0] + 232u);  if (depth < kMaxDepth) unit_0076(c, 15u, depth + 1u); else { c.pc = 0x002D8130u; return; } if (c.pc != 0x002D88DCu) [[unlikely]] return; }
L_002D88DC:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 44u)));  goto L_002D8928; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D88F0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D88F0u) [[unlikely]] return; }
L_002D88F0:
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8904u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8904u) [[unlikely]] return; }
L_002D8904:
    set32(c.r[4], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8924; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8924u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8924u) [[unlikely]] return; }
L_002D8924:
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 1;
L_002D8928:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D896C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8938u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8938u) [[unlikely]] return; }
L_002D8938:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D894Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D894Cu) [[unlikely]] return; }
L_002D894C:
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D896C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D896Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D896Cu) [[unlikely]] return; }
L_002D896C:
    st32((c.r[29].w[0] + 36u), c.r[16].w[0]);
    c.budget -= 1;
L_002D8970:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 27556u)));  goto L_002D8998; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8980u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8980u) [[unlikely]] return; }
L_002D8980:
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8994u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8994u) [[unlikely]] return; }
L_002D8994:
    set32(c.r[2], ld32((c.r[28].w[0] - 27556u)));
    c.budget -= 1;
L_002D8998:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D89A8u); set32(c.r[5], c.r[2].w[0] + 216u);  if (depth < kMaxDepth) unit_0076(c, 15u, depth + 1u); else { c.pc = 0x002D8130u; return; } if (c.pc != 0x002D89A8u) [[unlikely]] return; }
L_002D89A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 36u)));  goto L_002D89F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D89BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D89BCu) [[unlikely]] return; }
L_002D89BC:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D89D0u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D89D0u) [[unlikely]] return; }
L_002D89D0:
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D89F0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D89F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D89F0u) [[unlikely]] return; }
L_002D89F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 1;
L_002D89F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002D8A3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8A04u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8A04u) [[unlikely]] return; }
L_002D8A04:
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8A18u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8A18u) [[unlikely]] return; }
L_002D8A18:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8A38; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8A38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8A38u) [[unlikely]] return; }
L_002D8A38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002D8A3C:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D8A50:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[20], ld32((c.r[4].w[0] + 76u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8A84u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 291u, depth + 1u); else { c.pc = 0x0029B5B0u; return; } if (c.pc != 0x002D8A84u) [[unlikely]] return; }
L_002D8A84:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 124u), c.r[16].w[0]);  if (t) { goto L_002D8AA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8A94u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8A94u) [[unlikely]] return; }
L_002D8A94:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8AA8u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8AA8u) [[unlikely]] return; }
L_002D8AA8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27556u)));
    set32(c.r[25], ld32((c.r[2].w[0] + 216u)));
    set32(c.r[19], c.r[2].w[0] + 216u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8AC0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8AC0u) [[unlikely]] return; }
L_002D8AC0:
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[21], c.r[18].w[0] + 8u);  if (t) { goto L_002D8B34; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[29].w[0] + 124u)));  goto L_002D8B14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8AE4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8AE4u) [[unlikely]] return; }
L_002D8AE4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8AF4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8AF4u) [[unlikely]] return; }
L_002D8AF4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8B10; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8B10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8B10u) [[unlikely]] return; }
L_002D8B10:
    set32(c.r[17], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 1;
L_002D8B14:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[21].w[0]), c.r[17].w[0]);  if (t) { goto L_002D8B34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8B24u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8B24u) [[unlikely]] return; }
L_002D8B24:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8B34u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8B34u) [[unlikely]] return; }
L_002D8B34:
    st32((c.r[18].w[0]), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 4u), c.r[18].w[0]);  goto L_002D8B50; }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_002D8B50:
    st32((c.r[19].w[0] + 8u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_002D8BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8B70u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8B70u) [[unlikely]] return; }
L_002D8B70:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8B84u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8B84u) [[unlikely]] return; }
L_002D8B84:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 8u));  goto L_002D8BA8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8BA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8BA4u) [[unlikely]] return; }
L_002D8BA4:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 8u));
    c.budget -= 1;
L_002D8BA8:
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 27556u)));  goto L_002D8D18; }
    set32(c.r[2], ld32((c.r[28].w[0] - 27556u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 244u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 180u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002D8BDC; }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 208u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 120u), c.r[16].w[0]);  goto L_002D8BF4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002D8BDC:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8BECu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0075(c, 490u, depth + 1u); else { c.pc = 0x002D7510u; return; } if (c.pc != 0x002D8BECu) [[unlikely]] return; }
L_002D8BEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D8D14; } }
L_002D8BF4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 27556u)));  goto L_002D8C1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8C04u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8C04u) [[unlikely]] return; }
L_002D8C04:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8C18u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8C18u) [[unlikely]] return; }
L_002D8C18:
    set32(c.r[2], ld32((c.r[28].w[0] - 27556u)));
    c.budget -= 1;
L_002D8C1C:
    set32(c.r[25], ld32((c.r[2].w[0] + 232u)));
    set32(c.r[20], c.r[2].w[0] + 232u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8C30u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8C30u) [[unlikely]] return; }
L_002D8C30:
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[18], c.r[19].w[0] + 8u);  if (t) { goto L_002D8CA4; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[29].w[0] + 120u)));  goto L_002D8C84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8C54u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8C54u) [[unlikely]] return; }
L_002D8C54:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8C64u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8C64u) [[unlikely]] return; }
L_002D8C64:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8C80; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8C80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8C80u) [[unlikely]] return; }
L_002D8C80:
    set32(c.r[17], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_002D8C84:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0]), c.r[17].w[0]);  if (t) { goto L_002D8CA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8C94u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8C94u) [[unlikely]] return; }
L_002D8C94:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8CA4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8CA4u) [[unlikely]] return; }
L_002D8CA4:
    st32((c.r[19].w[0]), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 4u), c.r[19].w[0]);  goto L_002D8CC0; }
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_002D8CC0:
    st32((c.r[20].w[0] + 8u), c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_002D8D14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8CE0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8CE0u) [[unlikely]] return; }
L_002D8CE0:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8CF4u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8CF4u) [[unlikely]] return; }
L_002D8CF4:
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8D14; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8D14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8D14u) [[unlikely]] return; }
L_002D8D14:
    set32(c.r[4], ld32((c.r[28].w[0] - 27556u)));
    c.budget -= 1;
L_002D8D18:
    set32(c.r[2], ld32((c.r[4].w[0] + 168u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_002D8D40; }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0] + 156u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8D3Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 467u, depth + 1u); else { c.pc = 0x002D7230u; return; } if (c.pc != 0x002D8D3Cu) [[unlikely]] return; }
L_002D8D3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002D8D40:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002D8D70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[4].w[0] + 16496u);
    set32(c.r[5], c.r[5].w[0] + 6944u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 7;
    { set32(c.r[7], 0u + 3u);  [[clang::musttail]] return unit_00A5(c, 157u, depth); }
L_002D8D90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 29152u);  c.pc = t; return; }
L_002D8DA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 108u), 0u);  if (t) { goto L_002D8DEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8DDCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8DDCu) [[unlikely]] return; }
L_002D8DDC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8DECu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8DECu) [[unlikely]] return; }
L_002D8DEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8DF4u);  if (depth < kMaxDepth) unit_0075(c, 451u, depth + 1u); else { c.pc = 0x002D7040u; return; } if (c.pc != 0x002D8DF4u) [[unlikely]] return; }
L_002D8DF4:
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D8F24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8E08u);  if (depth < kMaxDepth) unit_0074(c, 53u, depth + 1u); else { c.pc = 0x002D0660u; return; } if (c.pc != 0x002D8E08u) [[unlikely]] return; }
L_002D8E08:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_002D8E88; }
    set32(c.r[20], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
    if (c.r[20].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 108u)));  goto L_002D8F28; }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[20], ld32((c.r[19].w[0] + 16u)));  goto L_002D8E60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8E30u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8E30u) [[unlikely]] return; }
L_002D8E30:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8E40u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8E40u) [[unlikely]] return; }
L_002D8E40:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8E5C; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8E5Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8E5Cu) [[unlikely]] return; }
L_002D8E5C:
    set32(c.r[20], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_002D8E60:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0] + 108u), c.r[20].w[0]);  if (t) { goto L_002D8F24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8E70u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8E70u) [[unlikely]] return; }
L_002D8E70:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8E80u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8E80u) [[unlikely]] return; }
L_002D8E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D8F24; } }
L_002D8E88:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_002D8F24; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D8F24; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8EACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8EACu) [[unlikely]] return; }
L_002D8EAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8F24; } }
    set32(c.r[20], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_002D8F24; } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[20], ld32((c.r[19].w[0] + 16u)));  goto L_002D8F04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8ED4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8ED4u) [[unlikely]] return; }
L_002D8ED4:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8EE4u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8EE4u) [[unlikely]] return; }
L_002D8EE4:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8F00; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8F00u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8F00u) [[unlikely]] return; }
L_002D8F00:
    set32(c.r[20], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_002D8F04:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0] + 108u), c.r[20].w[0]);  if (t) { goto L_002D8F24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8F14u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8F14u) [[unlikely]] return; }
L_002D8F14:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8F24u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8F24u) [[unlikely]] return; }
L_002D8F24:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_002D8F28:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  goto L_002D8FC0; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8F4Cu); set32(c.r[7], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8F4Cu) [[unlikely]] return; }
L_002D8F4C:
    set32(c.r[18], ld32((c.r[29].w[0] + 108u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[16].d[0];  if (t) { goto L_002D8FBC; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[29].w[0] + 108u), c.r[16].w[0]);  goto L_002D8F9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8F6Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8F6Cu) [[unlikely]] return; }
L_002D8F6C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8F7Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8F7Cu) [[unlikely]] return; }
L_002D8F7C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D8F98; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8F98u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8F98u) [[unlikely]] return; }
L_002D8F98:
    st32((c.r[29].w[0] + 108u), c.r[16].w[0]);
    c.budget -= 1;
L_002D8F9C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D8FBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8FACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8FACu) [[unlikely]] return; }
L_002D8FAC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8FBCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8FBCu) [[unlikely]] return; }
L_002D8FBC:
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_002D8FC0:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_002D9018; }
    set32(c.r[16], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_002D900C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8FE0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D8FE0u) [[unlikely]] return; }
L_002D8FE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8FF0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D8FF0u) [[unlikely]] return; }
L_002D8FF0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D9068; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D900Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D900Cu) [[unlikely]] return; }
L_002D900C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D9068; } }
L_002D9018:
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9024u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9024u) [[unlikely]] return; }
L_002D9024:
    set32(c.r[16], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_002D9064; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9038u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D9038u) [[unlikely]] return; }
L_002D9038:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9048u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D9048u) [[unlikely]] return; }
L_002D9048:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002D9068; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9064u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9064u) [[unlikely]] return; }
L_002D9064:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D9068:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002D9090:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D9118; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002D911C; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002D90F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D90C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D90C8u) [[unlikely]] return; }
L_002D90C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D90D8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D90D8u) [[unlikely]] return; }
L_002D90D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D90F4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D90F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D90F4u) [[unlikely]] return; }
L_002D90F4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D90F8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 16u), 0u);  if (t) { goto L_002D9118; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9108u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D9108u) [[unlikely]] return; }
L_002D9108:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9118u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D9118u) [[unlikely]] return; }
L_002D9118:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002D911C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D9130:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9150u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0075(c, 451u, depth + 1u); else { c.pc = 0x002D7040u; return; } if (c.pc != 0x002D9150u) [[unlikely]] return; }
L_002D9150:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D91A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9164u);  if (depth < kMaxDepth) unit_0074(c, 53u, depth + 1u); else { c.pc = 0x002D0660u; return; } if (c.pc != 0x002D9164u) [[unlikely]] return; }
L_002D9164:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_002D9174; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  if (t) { goto L_002D9218; } }
L_002D9174:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002D91A8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D91A8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9198u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9198u) [[unlikely]] return; }
L_002D9198:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D91A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  if (t) { goto L_002D9218; } }
L_002D91A8:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_002D91B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D9218; } }
L_002D91B8:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D91D0u); set32(c.r[7], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D91D0u) [[unlikely]] return; }
L_002D91D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D9218; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D91ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D91ECu) [[unlikely]] return; }
L_002D91EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002D9218; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9204u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9204u) [[unlikely]] return; }
L_002D9204:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D9214; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D9218; } }
L_002D9214:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002D9218:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D9230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D9264; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D924Cu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 54u, depth + 1u); else { c.pc = 0x002D0670u; return; } if (c.pc != 0x002D924Cu) [[unlikely]] return; }
L_002D924C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D9268; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D9268; } }
L_002D9264:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D9268:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D9280:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { const bool t = c.r[20].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002D92B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002D92C0; } }
L_002D92B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D92C0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D92C0u) [[unlikely]] return; }
L_002D92C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[17], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (t) { goto L_002D92D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002D92DC; } }
L_002D92D8:
    c.r[3].d[0] = ld16((c.r[2].w[0] - 4u));
    c.budget -= 1;
L_002D92DC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 27664u)));  goto L_002D92EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002D9338; } }
L_002D92EC:
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; mmi::divu(c, 0, c.r[5].w[0], c.r[3].w[0]);  if (t) { goto L_002D9308; } }
    breakpoint(c, 0x002D9304u);
    c.budget -= 1;
L_002D9308:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_002D9330; } }
L_002D9320:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_002D9330; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_002D9338; } }
L_002D9330:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9320u | kUnwind; return; } goto L_002D9320; }
L_002D9338:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_002D9388; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9358u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D9358u) [[unlikely]] return; }
L_002D9358:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9368u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D9368u) [[unlikely]] return; }
L_002D9368:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D9388; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9388u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D9388u) [[unlikely]] return; }
L_002D9388:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], 0u + 24u);  goto L_002D9398; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002D9444; } }
L_002D9398:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D93A4u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002D93A4u) [[unlikely]] return; }
L_002D93A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D93E4; } }
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002D93BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 120u), c.r[17].w[0]);  if (t) { goto L_002D93C8; } }
L_002D93BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D93C4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D93C4u) [[unlikely]] return; }
L_002D93C4:
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 1;
L_002D93C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D93E0u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 184u, depth + 1u); else { c.pc = 0x002D95A0u; return; } if (c.pc != 0x002D93E0u) [[unlikely]] return; }
L_002D93E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002D93E4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002D9444; }
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_002D9440; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[17], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9410u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D9410u) [[unlikely]] return; }
L_002D9410:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9420u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D9420u) [[unlikely]] return; }
L_002D9420:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D9440; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9440u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D9440u) [[unlikely]] return; }
L_002D9440:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002D9444:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002D9470:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002D9578; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[19].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 15120u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_002D94E8; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 12u);  goto L_002D94EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D94BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D94BCu) [[unlikely]] return; }
L_002D94BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D94CCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D94CCu) [[unlikely]] return; }
L_002D94CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D94E8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D94E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D94E8u) [[unlikely]] return; }
L_002D94E8:
    set32(c.r[2], c.r[19].w[0] + 12u);
    c.budget -= 1;
L_002D94EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002D9554; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D9550; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9520u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D9520u) [[unlikely]] return; }
L_002D9520:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9530u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D9530u) [[unlikely]] return; }
L_002D9530:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D9550; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9550u); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D9550u) [[unlikely]] return; }
L_002D9550:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002D9554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D955Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 184u, depth + 1u); else { c.pc = 0x002ACFE0u; return; } if (c.pc != 0x002D955Cu) [[unlikely]] return; }
L_002D955C:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_002D957C; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9578u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002D9578u) [[unlikely]] return; }
L_002D9578:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002D957C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D95A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D95C8u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 194u, depth + 1u); else { c.pc = 0x002AD1C0u; return; } if (c.pc != 0x002D95C8u) [[unlikely]] return; }
L_002D95C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 15120u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_002D95E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_002D95F4; } }
L_002D95E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D95F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D95F0u) [[unlikely]] return; }
L_002D95F0:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_002D95F4:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[18].w[0] + 16u), 0u);  if (t) { goto L_002D9618; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9608u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D9608u) [[unlikely]] return; }
L_002D9608:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9618u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D9618u) [[unlikely]] return; }
L_002D9618:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[18].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002D9714; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9628u);  if (depth < kMaxDepth) unit_0075(c, 451u, depth + 1u); else { c.pc = 0x002D7040u; return; } if (c.pc != 0x002D9628u) [[unlikely]] return; }
L_002D9628:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9644u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9644u) [[unlikely]] return; }
L_002D9644:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_002D9668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9658u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D9658u) [[unlikely]] return; }
L_002D9658:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9668u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D9668u) [[unlikely]] return; }
L_002D9668:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 92u)));  goto L_002D96D8; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002D96B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9684u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D9684u) [[unlikely]] return; }
L_002D9684:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9694u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D9694u) [[unlikely]] return; }
L_002D9694:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D96B0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D96B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D96B0u) [[unlikely]] return; }
L_002D96B0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D96B4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 92u), 0u);  if (t) { goto L_002D96D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D96C4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D96C4u) [[unlikely]] return; }
L_002D96C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D96D4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D96D4u) [[unlikely]] return; }
L_002D96D4:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 1;
L_002D96D8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_002D9718; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D96E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D96E8u) [[unlikely]] return; }
L_002D96E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D96F8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D96F8u) [[unlikely]] return; }
L_002D96F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D9714; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9714u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9714u) [[unlikely]] return; }
L_002D9714:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002D9718:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002D9740:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 27544u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 27544u), 0u);  goto L_002D9768; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9764u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9764u) [[unlikely]] return; }
L_002D9764:
    st32((c.r[28].w[0] - 27544u), 0u);
    c.budget -= 1;
L_002D9768:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D9780:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[4], 0u + 20u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D97A0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002D97A0u) [[unlikely]] return; }
L_002D97A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D984C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29104u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D97C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002D97CC; } }
L_002D97C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D97CCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002D97CCu) [[unlikely]] return; }
L_002D97CC:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D97DCu); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_006C(c, 423u, depth + 1u); else { c.pc = 0x002B33B0u; return; } if (c.pc != 0x002D97DCu) [[unlikely]] return; }
L_002D97DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D9838; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9808u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D9808u) [[unlikely]] return; }
L_002D9808:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9818u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D9818u) [[unlikely]] return; }
L_002D9818:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D9838; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9838u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002D9838u) [[unlikely]] return; }
L_002D9838:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 15168u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 12u), 0u);
    st32((c.r[18].w[0] + 16u), 0u);
    c.budget -= 5;
L_002D984C:
    st32((c.r[28].w[0] - 27544u), c.r[18].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D9870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9888u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0075(c, 451u, depth + 1u); else { c.pc = 0x002D7040u; return; } if (c.pc != 0x002D9888u) [[unlikely]] return; }
L_002D9888:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_002D989C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D98EC; } }
L_002D989C:
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D98A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D98A8u) [[unlikely]] return; }
L_002D98A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D98E0; } }
L_002D98B0:
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D98BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D98BCu) [[unlikely]] return; }
L_002D98BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_002D98D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D98CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 461u, depth + 1u); else { c.pc = 0x002D7180u; return; } if (c.pc != 0x002D98CCu) [[unlikely]] return; }
L_002D98CC:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_002D98D4:
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D98E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D98E0u) [[unlikely]] return; }
L_002D98E0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[2].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D98B0u | kUnwind; return; } goto L_002D98B0; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D98EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D9900:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9924u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0075(c, 451u, depth + 1u); else { c.pc = 0x002D7040u; return; } if (c.pc != 0x002D9924u) [[unlikely]] return; }
L_002D9924:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9938u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9938u) [[unlikely]] return; }
L_002D9938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D99B8; } }
L_002D9940:
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D994Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D994Cu) [[unlikely]] return; }
L_002D994C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D9994; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9960u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 461u, depth + 1u); else { c.pc = 0x002D7180u; return; } if (c.pc != 0x002D9960u) [[unlikely]] return; }
L_002D9960:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D9994; } }
    set32(c.r[5], c.r[19].w[0] - c.r[18].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D997Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 460u, depth + 1u); else { c.pc = 0x002D7160u; return; } if (c.pc != 0x002D997Cu) [[unlikely]] return; }
L_002D997C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D998Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D998Cu) [[unlikely]] return; }
L_002D998C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002D99C8; } }
L_002D9994:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_002D99AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D99A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 461u, depth + 1u); else { c.pc = 0x002D7180u; return; } if (c.pc != 0x002D99A4u) [[unlikely]] return; }
L_002D99A4:
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_002D99AC:
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D99B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D99B8u) [[unlikely]] return; }
L_002D99B8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[2].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9940u | kUnwind; return; } goto L_002D9940; }
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_002D99C8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D99E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D99FCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0075(c, 451u, depth + 1u); else { c.pc = 0x002D7040u; return; } if (c.pc != 0x002D99FCu) [[unlikely]] return; }
L_002D99FC:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9A10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9A10u) [[unlikely]] return; }
L_002D9A10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_002D9A2C; } }
L_002D9A18:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9A28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9A28u) [[unlikely]] return; }
L_002D9A28:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_002D9A2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9A18u | kUnwind; return; } goto L_002D9A18; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_002D9AFC; } }
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9A54u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9A54u) [[unlikely]] return; }
L_002D9A54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D9A94; } }
L_002D9A5C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_002D9A60:
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9A6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9A6Cu) [[unlikely]] return; }
L_002D9A6C:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_002D9AC0; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9A90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9A90u) [[unlikely]] return; }
L_002D9A90:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002D9A94:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9A60u | kUnwind; return; } goto L_002D9A60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9AACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 461u, depth + 1u); else { c.pc = 0x002D7180u; return; } if (c.pc != 0x002D9AACu) [[unlikely]] return; }
L_002D9AAC:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9A5Cu | kUnwind; return; } goto L_002D9A5C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_002D9AC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D9B00; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D9AFC; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9ADCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 461u, depth + 1u); else { c.pc = 0x002D7180u; return; } if (c.pc != 0x002D9ADCu) [[unlikely]] return; }
L_002D9ADC:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D9AFC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9AF4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 460u, depth + 1u); else { c.pc = 0x002D7160u; return; } if (c.pc != 0x002D9AF4u) [[unlikely]] return; }
L_002D9AF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002D9B04; } }
L_002D9AFC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D9B00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002D9B04:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D9B20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9B3Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0075(c, 451u, depth + 1u); else { c.pc = 0x002D7040u; return; } if (c.pc != 0x002D9B3Cu) [[unlikely]] return; }
L_002D9B3C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9B50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9B50u) [[unlikely]] return; }
L_002D9B50:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002D9BE8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9B74u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9B74u) [[unlikely]] return; }
L_002D9B74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D9BA8; } }
L_002D9B7C:
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9B88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9B88u) [[unlikely]] return; }
L_002D9B88:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9BA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9BA4u) [[unlikely]] return; }
L_002D9BA4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002D9BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9BB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 461u, depth + 1u); else { c.pc = 0x002D7180u; return; } if (c.pc != 0x002D9BB0u) [[unlikely]] return; }
L_002D9BB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9B7Cu | kUnwind; return; } goto L_002D9B7C; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D9BE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9BC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 461u, depth + 1u); else { c.pc = 0x002D7180u; return; } if (c.pc != 0x002D9BC8u) [[unlikely]] return; }
L_002D9BC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9BE4; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9BDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 460u, depth + 1u); else { c.pc = 0x002D7160u; return; } if (c.pc != 0x002D9BDCu) [[unlikely]] return; }
L_002D9BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002D9BEC; } }
L_002D9BE4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D9BE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002D9BEC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D9C00:
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { set32(c.r[5], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9280u | kUnwind; return; } goto L_002D9280; }
L_002D9C10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D9C64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15168u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9C48u); st32((c.r[17].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_006C(c, 415u, depth + 1u); else { c.pc = 0x002B3240u; return; } if (c.pc != 0x002D9C48u) [[unlikely]] return; }
L_002D9C48:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002D9C68; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9C64u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002D9C64u) [[unlikely]] return; }
L_002D9C64:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D9C68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D9C80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 29072u);  c.pc = t; return; }
L_002D9C90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9CB8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 418u, depth + 1u); else { c.pc = 0x002BB240u; return; } if (c.pc != 0x002D9CB8u) [[unlikely]] return; }
L_002D9CB8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[20].w[0] + 16u);  goto L_002D9CC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D9DC0; } }
L_002D9CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9CD0u); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0087(c, 267u, depth + 1u); else { c.pc = 0x0031E940u; return; } if (c.pc != 0x002D9CD0u) [[unlikely]] return; }
L_002D9CD0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 84u)));  goto L_002D9CE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D9DC0; } }
L_002D9CE0:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_002D9DAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D9DC0; } }
L_002D9CF4:
    set32(c.r[3], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D18u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 267u, depth + 1u); else { c.pc = 0x0031E940u; return; } if (c.pc != 0x002D9D18u) [[unlikely]] return; }
L_002D9D18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 64u);  goto L_002D9D28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D9DC0; } }
L_002D9D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D30u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_005F(c, 28u, depth + 1u); else { c.pc = 0x0027C830u; return; } if (c.pc != 0x002D9D30u) [[unlikely]] return; }
L_002D9D30:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = ld16((c.r[17].w[0] + 84u));  goto L_002D9D48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D9DC0; } }
L_002D9D48:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 84u));
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_002D9D9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D9DC0; } }
L_002D9D5C:
    set32(c.r[4], c.r[7].w[0] << 3);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.budget -= 8;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[1] = ld32((c.r[5].w[0] + 4u));  goto L_002D9D84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D9DC0; } }
L_002D9D84:
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002D9D9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D9DC0; } }
L_002D9D9C:
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 80u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9D5Cu | kUnwind; return; } goto L_002D9D5C; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002D9DAC:
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9CF4u | kUnwind; return; } goto L_002D9CF4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002D9DC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002D9DE0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9E0Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 424u, depth + 1u); else { c.pc = 0x002BB2D0u; return; } if (c.pc != 0x002D9E0Cu) [[unlikely]] return; }
L_002D9E0C:
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9E18u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 255u, depth + 1u); else { c.pc = 0x0031E7D0u; return; } if (c.pc != 0x002D9E18u) [[unlikely]] return; }
L_002D9E18:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9E24u); set32(c.r[5], c.r[20].w[0] + 84u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x002D9E24u) [[unlikely]] return; }
L_002D9E24:
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 127u);
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9E40u); st8((c.r[29].w[0] + 127u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002D9E40u) [[unlikely]] return; }
L_002D9E40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002D9EC8; } }
L_002D9E48:
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9E64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 255u, depth + 1u); else { c.pc = 0x0031E7D0u; return; } if (c.pc != 0x002D9E64u) [[unlikely]] return; }
L_002D9E64:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9E70u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 384u, depth + 1u); else { c.pc = 0x00287AD0u; return; } if (c.pc != 0x002D9E70u) [[unlikely]] return; }
L_002D9E70:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9E7Cu); set32(c.r[5], c.r[16].w[0] + 84u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002D9E7Cu) [[unlikely]] return; }
L_002D9E7C:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 127u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002D9EC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002D9EB4; } }
L_002D9E90:
    set32(c.r[3], c.r[17].w[0] << 3);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9EA4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002D9EA4u) [[unlikely]] return; }
L_002D9EA4:
    set32(c.r[5], c.r[21].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9EB0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002D9EB0u) [[unlikely]] return; }
L_002D9EB0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002D9EB4:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 84u));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 80u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9E90u | kUnwind; return; } goto L_002D9E90; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002D9EC8:
    set32(c.r[3], ld32((c.r[20].w[0] + 84u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9E48u | kUnwind; return; } goto L_002D9E48; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002D9F00:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB2E0u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 425u, depth); }
L_002D9F10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9F30u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 427u, depth + 1u); else { c.pc = 0x002BB310u; return; } if (c.pc != 0x002D9F30u) [[unlikely]] return; }
L_002D9F30:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 101ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002D9FC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9F50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x002D9F50u) [[unlikely]] return; }
L_002D9F50:
    set32(c.r[18], ld32((c.r[16].w[0] + 8u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[17].d[0];  if (t) { goto L_002D9FC0; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), c.r[17].w[0]);  goto L_002D9FA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9F70u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D9F70u) [[unlikely]] return; }
L_002D9F70:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9F80u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D9F80u) [[unlikely]] return; }
L_002D9F80:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D9F9C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9F9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9F9Cu) [[unlikely]] return; }
L_002D9F9C:
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 1;
L_002D9FA0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002D9FC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9FB0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002D9FB0u) [[unlikely]] return; }
L_002D9FB0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9FC0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002D9FC0u) [[unlikely]] return; }
L_002D9FC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002D9FC4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D9FE0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA00Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 428u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x002DA00Cu) [[unlikely]] return; }
L_002DA00C:
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA018u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 259u, depth + 1u); else { c.pc = 0x0031E820u; return; } if (c.pc != 0x002DA018u) [[unlikely]] return; }
L_002DA018:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA024u); set32(c.r[5], c.r[20].w[0] + 84u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x002DA024u) [[unlikely]] return; }
L_002DA024:
    set32(c.r[16], ld32((c.r[20].w[0] + 84u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA040u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002DA040u) [[unlikely]] return; }
L_002DA040:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23712u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA05Cu); set32(c.r[7], 0u + 96u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002DA05Cu) [[unlikely]] return; }
L_002DA05C:
    st32((c.r[20].w[0] + 80u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.r[1].d[0] = c.r[1].d[0] | 101ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002DA084; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA080u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x002DA080u) [[unlikely]] return; }
L_002DA080:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002DA084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA08Cu); set32(c.r[5], c.r[29].w[0] + 127u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002DA08Cu) [[unlikely]] return; }
L_002DA08C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002DA148; } }
L_002DA094:
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA0B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 259u, depth + 1u); else { c.pc = 0x0031E820u; return; } if (c.pc != 0x002DA0B0u) [[unlikely]] return; }
L_002DA0B0:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA0BCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 387u, depth + 1u); else { c.pc = 0x00287B10u; return; } if (c.pc != 0x002DA0BCu) [[unlikely]] return; }
L_002DA0BC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA0C8u); set32(c.r[5], c.r[16].w[0] + 84u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002DA0C8u) [[unlikely]] return; }
L_002DA0C8:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 127u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), 0u);  goto L_002DA144; }
    c.r[17].d[0] = ld16((c.r[16].w[0] + 84u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 3);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA0E8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002DA0E8u) [[unlikely]] return; }
L_002DA0E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23728u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA104u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002DA104u) [[unlikely]] return; }
L_002DA104:
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002DA134; } }
L_002DA110:
    set32(c.r[3], c.r[17].w[0] << 3);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA124u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002DA124u) [[unlikely]] return; }
L_002DA124:
    set32(c.r[5], c.r[21].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA130u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002DA130u) [[unlikely]] return; }
L_002DA130:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002DA134:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 84u));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 80u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DA110u | kUnwind; return; } goto L_002DA110; }
L_002DA144:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002DA148:
    set32(c.r[3], ld32((c.r[20].w[0] + 84u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DA094u | kUnwind; return; } goto L_002DA094; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002DA180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA19Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002DA19Cu) [[unlikely]] return; }
L_002DA19C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002DA1EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA1ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x002DA1ACu) [[unlikely]] return; }
L_002DA1AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15216u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_002DA1DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA1CCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DA1CCu) [[unlikely]] return; }
L_002DA1CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA1DCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DA1DCu) [[unlikely]] return; }
L_002DA1DC:
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 60u), 0u);
    st32((c.r[17].w[0] + 80u), 0u);
    c.budget -= 4;
L_002DA1EC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DA210:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002DA328; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 15216u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 80u)));  goto L_002DA2A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002DA28C; } }
L_002DA254:
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[16], c.r[3].w[0] << 5);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA27Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002DA27Cu) [[unlikely]] return; }
L_002DA27C:
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 80u), 0u);
    c.budget -= 4;
L_002DA28C:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DA254u | kUnwind; return; } goto L_002DA254; }
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 1;
L_002DA2A0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA2B4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002DA2B4u) [[unlikely]] return; }
L_002DA2B4:
    set32(c.r[2], c.r[19].w[0] + 8u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002DA304; }
    set32(c.r[16], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002DA300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA2D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DA2D4u) [[unlikely]] return; }
L_002DA2D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA2E4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DA2E4u) [[unlikely]] return; }
L_002DA2E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DA300; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA300u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA300u) [[unlikely]] return; }
L_002DA300:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002DA304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA30Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x002DA30Cu) [[unlikely]] return; }
L_002DA30C:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_002DA32C; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA328u); set32(c.r[5], 0u + 96u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002DA328u) [[unlikely]] return; }
L_002DA328:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002DA32C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DA350:
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_002DA360:
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 84u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_002DA380:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 29048u);  c.pc = t; return; }
L_002DA390:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA3B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 411u, depth + 1u); else { c.pc = 0x002BB1A0u; return; } if (c.pc != 0x002DA3B4u) [[unlikely]] return; }
L_002DA3B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA3C0u); set32(c.r[4], ld32((c.r[2].w[0] - 29048u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002DA3C0u) [[unlikely]] return; }
L_002DA3C0:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[19].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA3D4u); set32(c.r[6], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002DA3D4u) [[unlikely]] return; }
L_002DA3D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 8u)));  goto L_002DA408; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA3F0u); set32(c.r[4], c.r[4].w[0] - 29040u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x002DA3F0u) [[unlikely]] return; }
L_002DA3F0:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[19].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA404u); set32(c.r[6], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002DA404u) [[unlikely]] return; }
L_002DA404:
    set32(c.r[17], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_002DA408:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002DA534; }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[2].w[0] + 8u)));  goto L_002DA420; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DA420:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA42Cu); set32(c.r[4], c.r[4].w[0] - 29028u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x002DA42Cu) [[unlikely]] return; }
L_002DA42C:
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[19].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA440u); set32(c.r[6], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002DA440u) [[unlikely]] return; }
L_002DA440:
    set32(c.r[17], ld32((c.r[17].w[0] + 84u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29008u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA454u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x002DA454u) [[unlikely]] return; }
L_002DA454:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[19].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA468u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002DA468u) [[unlikely]] return; }
L_002DA468:
    set32(c.r[4], c.r[17].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA474u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DA474u) [[unlikely]] return; }
L_002DA474:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002DA49C; } }
L_002DA480:
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 7;
L_002DA49C:
    c.r[2].d[0] = c.r[5].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DA480u | kUnwind; return; } goto L_002DA480; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA4C0u); set32(c.r[7], c.r[7].w[0] - 23216u);  if (depth < kMaxDepth) unit_00AE(c, 24u, depth + 1u); else { c.pc = 0x003B83F8u; return; } if (c.pc != 0x002DA4C0u) [[unlikely]] return; }
L_002DA4C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002DA518; } }
L_002DA4C8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], c.r[6].w[0] - 28997u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA4DCu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x002DA4DCu) [[unlikely]] return; }
L_002DA4DC:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002DA4F8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 28991u);
    c.budget -= 2;
L_002DA4F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA500u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x002DA500u) [[unlikely]] return; }
L_002DA500:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[19].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA514u); set32(c.r[6], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002DA514u) [[unlikely]] return; }
L_002DA514:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002DA518:
    c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DA4C8u | kUnwind; return; } goto L_002DA4C8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA530u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DA530u) [[unlikely]] return; }
L_002DA530:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002DA534:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002DA550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002DA564; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DA57C; } }
L_002DA564:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_002DA574; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002DA57C; } }
L_002DA574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA57Cu); set32(c.r[5], ld32((c.r[5].w[0])));  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002DA57Cu) [[unlikely]] return; }
L_002DA57C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002DA590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA5ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 418u, depth + 1u); else { c.pc = 0x002BB240u; return; } if (c.pc != 0x002DA5ACu) [[unlikely]] return; }
L_002DA5AC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_002DA5BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DA628; } }
L_002DA5BC:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA5CCu); set32(c.r[5], ld32((c.r[16].w[0] + 8u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA5CCu) [[unlikely]] return; }
L_002DA5CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  goto L_002DA5DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DA628; } }
L_002DA5DC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_002DA608; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA5F4u); set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA5F4u) [[unlikely]] return; }
L_002DA5F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DA604; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DA628; } }
L_002DA604:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_002DA608:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002DA628; }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DA624; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DA628; } }
L_002DA624:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002DA628:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DA640:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA660u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 424u, depth + 1u); else { c.pc = 0x002BB2D0u; return; } if (c.pc != 0x002DA660u) [[unlikely]] return; }
L_002DA660:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA674u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA674u) [[unlikely]] return; }
L_002DA674:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA688u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA688u) [[unlikely]] return; }
L_002DA688:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA69Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA69Cu) [[unlikely]] return; }
L_002DA69C:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 76u);
    set32(c.r[2], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA6B4u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x002DA6B4u) [[unlikely]] return; }
L_002DA6B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002DA6DC; } }
L_002DA6BC:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA6D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA6D8u) [[unlikely]] return; }
L_002DA6D8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002DA6DC:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DA6BCu | kUnwind; return; } goto L_002DA6BC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DA710:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA734u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 425u, depth + 1u); else { c.pc = 0x002BB2E0u; return; } if (c.pc != 0x002DA734u) [[unlikely]] return; }
L_002DA734:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_002DA744; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DA7C4; } }
L_002DA744:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA754u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA754u) [[unlikely]] return; }
L_002DA754:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 16u)));  goto L_002DA774; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA770u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA770u) [[unlikely]] return; }
L_002DA770:
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_002DA774:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA784u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA784u) [[unlikely]] return; }
L_002DA784:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002DA7B4; } }
L_002DA794:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA7B0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA7B0u) [[unlikely]] return; }
L_002DA7B0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002DA7B4:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DA794u | kUnwind; return; } goto L_002DA794; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002DA7C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DA7E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[1].d[0] = c.r[1].d[0] | 101ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002DA8FC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002DA900; }
    set32(c.r[16], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[18], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[16], ld32((c.r[17].w[0] + 8u)));  goto L_002DA88C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 12u), c.r[16].w[0]);  goto L_002DA868; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA838u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DA838u) [[unlikely]] return; }
L_002DA838:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA848u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DA848u) [[unlikely]] return; }
L_002DA848:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DA864; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA864u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA864u) [[unlikely]] return; }
L_002DA864:
    st32((c.r[17].w[0] + 12u), c.r[16].w[0]);
    c.budget -= 1;
L_002DA868:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002DA888; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA878u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DA878u) [[unlikely]] return; }
L_002DA878:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA888u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DA888u) [[unlikely]] return; }
L_002DA888:
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_002DA88C:
    set32(c.r[17], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002DA8FC; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_002DA8D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA8A8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DA8A8u) [[unlikely]] return; }
L_002DA8A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA8B8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DA8B8u) [[unlikely]] return; }
L_002DA8B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DA8D4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA8D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA8D4u) [[unlikely]] return; }
L_002DA8D4:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_002DA8D8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002DA8FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA8ECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DA8ECu) [[unlikely]] return; }
L_002DA8EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA8FCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DA8FCu) [[unlikely]] return; }
L_002DA8FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002DA900:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DA920:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA944u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 427u, depth + 1u); else { c.pc = 0x002BB310u; return; } if (c.pc != 0x002DA944u) [[unlikely]] return; }
L_002DA944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA94Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x002DA94Cu) [[unlikely]] return; }
L_002DA94C:
    set32(c.r[19], ld32((c.r[17].w[0] + 8u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  goto L_002DA9C0; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), c.r[18].w[0]);  goto L_002DA99C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA96Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DA96Cu) [[unlikely]] return; }
L_002DA96C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA97Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DA97Cu) [[unlikely]] return; }
L_002DA97C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DA998; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA998u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA998u) [[unlikely]] return; }
L_002DA998:
    st32((c.r[17].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 1;
L_002DA99C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002DA9BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA9ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DA9ACu) [[unlikely]] return; }
L_002DA9AC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA9BCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DA9BCu) [[unlikely]] return; }
L_002DA9BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_002DA9C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[2].d[0] = c.r[2].d[0] | 101ull;
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002DAA50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA9DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x002DA9DCu) [[unlikely]] return; }
L_002DA9DC:
    set32(c.r[19], ld32((c.r[17].w[0] + 12u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[18].d[0];  if (t) { goto L_002DAA4C; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[17].w[0] + 12u), c.r[18].w[0]);  goto L_002DAA2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA9FCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DA9FCu) [[unlikely]] return; }
L_002DA9FC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAA0Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DAA0Cu) [[unlikely]] return; }
L_002DAA0C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DAA28; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAA28u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DAA28u) [[unlikely]] return; }
L_002DAA28:
    st32((c.r[17].w[0] + 12u), c.r[18].w[0]);
    c.budget -= 1;
L_002DAA2C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002DAA4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAA3Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DAA3Cu) [[unlikely]] return; }
L_002DAA3C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAA4Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DAA4Cu) [[unlikely]] return; }
L_002DAA4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002DAA50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAA58u);  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x002DAA58u) [[unlikely]] return; }
L_002DAA58:
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAA64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 104u, depth + 1u); else { c.pc = 0x0030CAE0u; return; } if (c.pc != 0x002DAA64u) [[unlikely]] return; }
L_002DAA64:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAA74u); set32(c.r[4], c.r[18].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DAA74u) [[unlikely]] return; }
L_002DAA74:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002DAA9C; } }
L_002DAA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAA88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x002DAA88u) [[unlikely]] return; }
L_002DAA88:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_002DAA9C:
    c.r[3].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DAA80u | kUnwind; return; } goto L_002DAA80; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DAAD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAAE4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 428u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x002DAAE4u) [[unlikely]] return; }
L_002DAAE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAAECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x002DAAECu) [[unlikely]] return; }
L_002DAAEC:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[2].d[0] = c.r[2].d[0] | 101ull;
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002DAB10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAB0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x002DAB0Cu) [[unlikely]] return; }
L_002DAB0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002DAB10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAB18u);  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x002DAB18u) [[unlikely]] return; }
L_002DAB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAB20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 105u, depth + 1u); else { c.pc = 0x0030CB00u; return; } if (c.pc != 0x002DAB20u) [[unlikely]] return; }
L_002DAB20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DAB30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAB4Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002DAB4Cu) [[unlikely]] return; }
L_002DAB4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002DABC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAB5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x002DAB5Cu) [[unlikely]] return; }
L_002DAB5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15296u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_002DAB8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAB7Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DAB7Cu) [[unlikely]] return; }
L_002DAB7C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAB8Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DAB8Cu) [[unlikely]] return; }
L_002DAB8C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_002DABB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DABA0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DABA0u) [[unlikely]] return; }
L_002DABA0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DABB0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DABB0u) [[unlikely]] return; }
L_002DABB0:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 5;
L_002DABC4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DABE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 48u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAC10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002DAC10u) [[unlikely]] return; }
L_002DAC10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002DAC88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAC20u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x002DAC20u) [[unlikely]] return; }
L_002DAC20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15296u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[19].w[0] + 8u), 0u);  if (t) { goto L_002DAC50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAC40u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DAC40u) [[unlikely]] return; }
L_002DAC40:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAC50u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DAC50u) [[unlikely]] return; }
L_002DAC50:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[19].w[0] + 12u), 0u);  if (t) { goto L_002DAC74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAC64u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DAC64u) [[unlikely]] return; }
L_002DAC64:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAC74u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DAC74u) [[unlikely]] return; }
L_002DAC74:
    st32((c.r[19].w[0] + 16u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[19].w[0] + 20u), 0u);
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 40u), 0u);
    c.budget -= 5;
L_002DAC88:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAC98u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 446u, depth + 1u); else { c.pc = 0x002BB4A0u; return; } if (c.pc != 0x002DAC98u) [[unlikely]] return; }
L_002DAC98:
    set32(c.r[18], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[19].w[0] + 12u)));  goto L_002DAD0C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 8u)));  goto L_002DACE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DACB8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DACB8u) [[unlikely]] return; }
L_002DACB8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DACC8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DACC8u) [[unlikely]] return; }
L_002DACC8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DACE4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DACE4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DACE4u) [[unlikely]] return; }
L_002DACE4:
    set32(c.r[18], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_002DACE8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[19].w[0] + 8u), c.r[18].w[0]);  if (t) { goto L_002DAD08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DACF8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DACF8u) [[unlikely]] return; }
L_002DACF8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAD08u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DAD08u) [[unlikely]] return; }
L_002DAD08:
    set32(c.r[18], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 1;
L_002DAD0C:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_002DAD7C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 12u)));  goto L_002DAD58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAD28u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DAD28u) [[unlikely]] return; }
L_002DAD28:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAD38u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DAD38u) [[unlikely]] return; }
L_002DAD38:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DAD54; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAD54u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DAD54u) [[unlikely]] return; }
L_002DAD54:
    set32(c.r[18], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_002DAD58:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[19].w[0] + 12u), c.r[18].w[0]);  if (t) { goto L_002DAD78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAD68u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DAD68u) [[unlikely]] return; }
L_002DAD68:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAD78u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DAD78u) [[unlikely]] return; }
L_002DAD78:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002DAD7C:
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; mmi::divu(c, 0, c.r[4].w[0], c.r[2].w[0]);  if (t) { goto L_002DAD94; } }
    breakpoint(c, 0x002DAD90u);
    c.budget -= 1;
L_002DAD94:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0])));  if (t) { goto L_002DADC0; } }
L_002DADAC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[3].w[0])));  goto L_002DADC0; }
    set32(c.r[20], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002DADCC; } }
L_002DADC0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DADACu | kUnwind; return; } goto L_002DADAC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DADCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DADD8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002DADD8:
    st32((c.r[19].w[0] + 16u), c.r[4].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DADF0u); set32(c.r[4], c.r[18].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DADF0u) [[unlikely]] return; }
L_002DADF0:
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002DAE74; } }
L_002DAE00:
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::divu(c, 0, c.r[6].w[0], c.r[2].w[0]);  if (t) { goto L_002DAE20; } }
    breakpoint(c, 0x002DAE1Cu);
    c.budget -= 1;
L_002DAE20:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0])));  if (t) { goto L_002DAE4C; } }
L_002DAE38:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_002DAE4C; }
    set32(c.r[20], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002DAE58; } }
L_002DAE4C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DAE38u | kUnwind; return; } goto L_002DAE38; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DAE58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DAE64; } }
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002DAE64:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    c.budget -= 4;
L_002DAE74:
    c.r[2].d[0] = c.r[7].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DAE00u | kUnwind; return; } goto L_002DAE00; }
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002DAEB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002DAF1C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 12u)));  goto L_002DAED8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 12u)));  if (t) { goto L_002DAF2C; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_002DAED8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002DAEF4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DAEF4; } }
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 1;
L_002DAEF4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002DAF70; }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 32u));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DAF6C; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DAF6C; } }
L_002DAF1C:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_002DAF6C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_002DAF2C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002DAF6C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DAF68; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DAF68; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAF60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DAF60u) [[unlikely]] return; }
L_002DAF60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DAF6C; } }
L_002DAF68:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DAF6C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002DAF70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002DAF80:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[17], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[6], c.r[3].w[0] + 112u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAFC4u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_005F(c, 23u, depth + 1u); else { c.pc = 0x0027C400u; return; } if (c.pc != 0x002DAFC4u) [[unlikely]] return; }
L_002DAFC4:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_002DB020; } }
L_002DAFD4:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002DB020; }
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB010u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_005F(c, 23u, depth + 1u); else { c.pc = 0x0027C400u; return; } if (c.pc != 0x002DB010u) [[unlikely]] return; }
L_002DB010:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB01Cu); set32(c.r[5], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_005F(c, 24u, depth + 1u); else { c.pc = 0x0027C440u; return; } if (c.pc != 0x002DB01Cu) [[unlikely]] return; }
L_002DB01C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002DB020:
    c.r[2].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DAFD4u | kUnwind; return; } goto L_002DAFD4; }
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[3], c.r[29].w[0] + 336u);
    c.budget -= 2;
L_002DB034:
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB034u | kUnwind; return; } goto L_002DB034; } }
    st32((c.r[29].w[0] + 300u), 0u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    st32((c.r[29].w[0] + 316u), 0u);
    set32(c.r[3], c.r[29].w[0] + 272u);
    st32((c.r[29].w[0] + 332u), 0u);
    c.budget -= 5;
L_002DB064:
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB064u | kUnwind; return; } goto L_002DB064; } }
    st32((c.r[29].w[0] + 236u), 0u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    st32((c.r[29].w[0] + 252u), 0u);
    st32((c.r[29].w[0] + 268u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB09Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0087(c, 263u, depth + 1u); else { c.pc = 0x0031E870u; return; } if (c.pc != 0x002DB09Cu) [[unlikely]] return; }
L_002DB09C:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB0ACu); set32(c.r[16], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_003E(c, 300u, depth + 1u); else { c.pc = 0x001FA730u; return; } if (c.pc != 0x002DB0ACu) [[unlikely]] return; }
L_002DB0AC:
    set32(c.r[2], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    vu::mul(c.vu0, 1u, 13u, 11u, 12u);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 15u, 14u, 3u, c.vu0.vf[4].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[5].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 15u, 15u, 3u, c.vu0.vf[5].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[6].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 15u, 16u, 3u, c.vu0.vf[6].w[2]);
    vu::mulabc(c.vu0, 14u, 1u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 14u, 2u, c.vu0.vf[12].w[1]);
    vu::maddbc(c.vu0, 14u, 13u, 3u, c.vu0.vf[12].w[2]);
    vu::mulbc(c.vu0, 14u, 13u, 13u, c.vu0.vf[11].w[3]);
    vu::add(c.vu0, 14u, 13u, 13u, 11u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[14]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[15]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[16]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB128u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_003E(c, 299u, depth + 1u); else { c.pc = 0x001FA6A0u; return; } if (c.pc != 0x002DB128u) [[unlikely]] return; }
L_002DB128:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 160u));
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 208u));
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[3], 0u + 4u);
    st8((c.r[29].w[0] + 288u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 336u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_002DB144:
    ld128((c.r[6].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB144u | kUnwind; return; } goto L_002DB144; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB170u); set32(c.r[6], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_005F(c, 23u, depth + 1u); else { c.pc = 0x0027C400u; return; } if (c.pc != 0x002DB170u) [[unlikely]] return; }
L_002DB170:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_002DB190:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 28960u);  c.pc = t; return; }
L_002DB1A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB1C0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 418u, depth + 1u); else { c.pc = 0x002BB240u; return; } if (c.pc != 0x002DB1C0u) [[unlikely]] return; }
L_002DB1C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 8u)));  goto L_002DB1D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DB22C; } }
L_002DB1D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_002DB218; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DB22C; } }
L_002DB1E4:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB208u); set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0077(c, 130u, depth + 1u); else { c.pc = 0x002DD5B0u; return; } if (c.pc != 0x002DB208u) [[unlikely]] return; }
L_002DB208:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002DB218; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DB22C; } }
L_002DB218:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB1E4u | kUnwind; return; } goto L_002DB1E4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002DB22C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DB250:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB270u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 424u, depth + 1u); else { c.pc = 0x002BB2D0u; return; } if (c.pc != 0x002DB270u) [[unlikely]] return; }
L_002DB270:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB27Cu); set32(c.r[5], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x002DB27Cu) [[unlikely]] return; }
L_002DB27C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002DB2A8; } }
L_002DB284:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB2A4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0077(c, 139u, depth + 1u); else { c.pc = 0x002DD7A0u; return; } if (c.pc != 0x002DB2A4u) [[unlikely]] return; }
L_002DB2A4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002DB2A8:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB284u | kUnwind; return; } goto L_002DB284; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DB2D0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB2E0u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 425u, depth); }
L_002DB2E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB310u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 427u, depth); }
L_002DB2F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB310u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 428u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x002DB310u) [[unlikely]] return; }
L_002DB310:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB31Cu); set32(c.r[5], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x002DB31Cu) [[unlikely]] return; }
L_002DB31C:
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB340u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002DB340u) [[unlikely]] return; }
L_002DB340:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 7536u);
    set32(c.r[6], c.r[6].w[0] - 7712u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB360u); set32(c.r[7], 0u + 44u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002DB360u) [[unlikely]] return; }
L_002DB360:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002DB390; } }
L_002DB36C:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB38Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0077(c, 156u, depth + 1u); else { c.pc = 0x002DD960u; return; } if (c.pc != 0x002DB38Cu) [[unlikely]] return; }
L_002DB38C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002DB390:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB36Cu | kUnwind; return; } goto L_002DB36C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DB3C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 28u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB3D8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002DB3D8u) [[unlikely]] return; }
L_002DB3D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002DB3F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB3E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x002DB3E8u) [[unlikely]] return; }
L_002DB3E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 15376u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 4;
L_002DB3F8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DB410:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 288u), 0u);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 292u), 0u);
    st32((c.r[29].w[0] + 296u), 0u);
    c.r[5].d[0] = ld16((c.r[5].w[0] + 12u));
    st8((c.r[29].w[0] + 267u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB468u); st32((c.r[29].w[0] + 268u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0077(c, 111u, depth + 1u); else { c.pc = 0x002DD230u; return; } if (c.pc != 0x002DB468u) [[unlikely]] return; }
L_002DB468:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB484u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 24u, depth + 1u); else { c.pc = 0x002DC390u; return; } if (c.pc != 0x002DB484u) [[unlikely]] return; }
L_002DB484:
    st8((c.r[29].w[0] + 240u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 240u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB6B8; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 268u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[9], c.r[29].w[0] + 288u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB4B4u); set32(c.r[10], c.r[29].w[0] + 300u);  if (depth < kMaxDepth) unit_0076(c, 478u, depth + 1u); else { c.pc = 0x002DB790u; return; } if (c.pc != 0x002DB4B4u) [[unlikely]] return; }
L_002DB4B4:
    set32(c.r[17], ld32((c.r[21].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB4D8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002DB4D8u) [[unlikely]] return; }
L_002DB4D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 7536u);
    set32(c.r[6], c.r[6].w[0] - 7712u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB4F8u); set32(c.r[7], 0u + 44u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002DB4F8u) [[unlikely]] return; }
L_002DB4F8:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[22].d[0] & 255ull;
    st32((c.r[29].w[0] + 272u), 0u);
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    st32((c.r[29].w[0] + 276u), 0u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 280u), 0u);
    st8((c.r[29].w[0] + 224u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002DB68C; } }
L_002DB524:
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (t) { goto L_002DB5F8; } }
L_002DB538:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002DB5F8; }
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 276u)));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 280u)));  goto L_002DB5D8; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_002DB570; }
    set32(c.r[16], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002DB570:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002DB5D4; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[23].d[0] = 0ull + 0ull;  goto L_002DB5C0; }
    set32(c.r[4], c.r[16].w[0] << 1);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB58Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DB58Cu) [[unlikely]] return; }
L_002DB58C:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002DB5B0; } }
L_002DB598:
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[23].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002DB5B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 272u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB598u | kUnwind; return; } goto L_002DB598; }
L_002DB5C0:
    set32(c.r[4], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB5CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DB5CCu) [[unlikely]] return; }
L_002DB5CC:
    st32((c.r[29].w[0] + 272u), c.r[23].w[0]);
    st32((c.r[29].w[0] + 276u), c.r[16].w[0]);
    c.budget -= 2;
L_002DB5D4:
    set32(c.r[3], ld32((c.r[29].w[0] + 280u)));
    c.budget -= 1;
L_002DB5D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 1);
    st32((c.r[29].w[0] + 280u), c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 8;
L_002DB5F8:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB538u | kUnwind; return; } goto L_002DB538; }
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[6], c.r[18].w[0] << 2);
    set32(c.r[4], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.r[9].d[0] = ld8((c.r[29].w[0] + 224u));
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 84u)));
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[10].d[0] = ld8((c.r[29].w[0] + 267u));
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.r[11].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], c.r[6].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB658u); set32(c.r[4], c.r[30].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0077(c, 187u, depth + 1u); else { c.pc = 0x002DDCD0u; return; } if (c.pc != 0x002DB658u) [[unlikely]] return; }
L_002DB658:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 280u), 0u);  if (t) { goto L_002DB688; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002DB680; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002DB67C; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB67Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DB67Cu) [[unlikely]] return; }
L_002DB67C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002DB680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB688u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002DB688u) [[unlikely]] return; }
L_002DB688:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002DB68C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[20].w[0] + 80u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB524u | kUnwind; return; } goto L_002DB524; }
    set32(c.r[4], ld32((c.r[29].w[0] + 300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB6A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DB6A8u) [[unlikely]] return; }
L_002DB6A8:
    st32((c.r[21].w[0] + 12u), c.r[30].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB6B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DB6B8u) [[unlikely]] return; }
L_002DB6B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 18656u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB6D4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002DB6D4u) [[unlikely]] return; }
L_002DB6D4:
    set32(c.r[4], ld32((c.r[29].w[0] + 288u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB6E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DB6E0u) [[unlikely]] return; }
L_002DB6E0:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 240u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_002DB720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002DB774; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002DB75C; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002DB758; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB758u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DB758u) [[unlikely]] return; }
L_002DB758:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002DB75C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002DB778; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB774u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002DB774u) [[unlikely]] return; }
L_002DB774:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002DB778:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DB790:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[30].d[0] = ld16((c.r[5].w[0] + 80u));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 300u), c.r[4].w[0]);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB7E4u); st32((c.r[29].w[0] + 296u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0076(c, 510u, depth + 1u); else { c.pc = 0x002DBE80u; return; } if (c.pc != 0x002DB7E4u) [[unlikely]] return; }
L_002DB7E4:
    set32(c.r[4], ld32((c.r[29].w[0] + 300u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB7F4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 497u, depth + 1u); else { c.pc = 0x002DBBC0u; return; } if (c.pc != 0x002DB7F4u) [[unlikely]] return; }
L_002DB7F4:
    set32(c.r[4], c.r[30].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB800u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DB800u) [[unlikely]] return; }
L_002DB800:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB810u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DB810u) [[unlikely]] return; }
L_002DB810:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002DB828; } }
L_002DB81C:
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
L_002DB828:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB81Cu | kUnwind; return; } goto L_002DB81C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002DBAE4; } }
L_002DB840:
    c.r[5].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[6], c.r[29].w[0] + 304u);
    set32(c.r[7], c.r[29].w[0] + 306u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB860u); set32(c.r[8], c.r[29].w[0] + 308u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DB860u) [[unlikely]] return; }
L_002DB860:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 306u));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 304u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002DB884; } }
    c.r[2].d[0] = ld16((c.r[29].w[0] + 308u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002DB884; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DB884:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002DB89C; } }
    c.r[2].d[0] = ld16((c.r[29].w[0] + 308u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002DB89C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DB89C:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002DB9AC; }
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { goto L_002DBAE0; } }
L_002DB8BC:
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002DB9AC; }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);  if (t) { goto L_002DB980; } }
L_002DB8EC:
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 304u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);  if (t) { goto L_002DB95C; } }
L_002DB918:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[3], c.r[20].w[0] << 3);
    set32(c.r[4], c.r[29].w[0] + 318u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st16((c.r[29].w[0] + 318u), static_cast<std::uint16_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB94Cu); set32(c.r[8], c.r[8].w[0] - 7472u);  if (depth < kMaxDepth) unit_00AD(c, 223u, depth + 1u); else { c.pc = 0x003B68D8u; return; } if (c.pc != 0x002DB94Cu) [[unlikely]] return; }
L_002DB94C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_002DB95C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DB970; } }
L_002DB95C:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB918u | kUnwind; return; } goto L_002DB918; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002DB970:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_002DB980; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DB990; } }
L_002DB980:
    c.r[2].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[21].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB8ECu | kUnwind; return; } goto L_002DB8EC; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002DB990:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB9A8; } }
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002DB9C0; } }
L_002DB9A8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002DB9AC:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB8BCu | kUnwind; return; } goto L_002DB8BC; }
    set32(c.r[16], 0u - 1u);
    c.budget -= 1;
L_002DB9C0:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { set32(c.r[2], ld32((c.r[22].w[0])));  goto L_002DBAD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002DBABC; } }
L_002DB9D0:
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002DBABC; }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (t) { goto L_002DBA90; } }
L_002DB9FC:
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 304u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (t) { goto L_002DBA6C; } }
L_002DBA28:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[3], c.r[20].w[0] << 3);
    set32(c.r[4], c.r[29].w[0] + 316u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st16((c.r[29].w[0] + 316u), static_cast<std::uint16_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBA5Cu); set32(c.r[8], c.r[8].w[0] - 7472u);  if (depth < kMaxDepth) unit_00AD(c, 223u, depth + 1u); else { c.pc = 0x003B68D8u; return; } if (c.pc != 0x002DBA5Cu) [[unlikely]] return; }
L_002DBA5C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_002DBA6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DBA80; } }
L_002DBA6C:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBA28u | kUnwind; return; } goto L_002DBA28; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002DBA80:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_002DBA90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DBAA0; } }
L_002DBA90:
    c.r[2].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[21].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB9FCu | kUnwind; return; } goto L_002DB9FC; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002DBAA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DBAB8; } }
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002DBAD0; } }
L_002DBAB8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002DBABC:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB9D0u | kUnwind; return; } goto L_002DB9D0; }
    set32(c.r[16], 0u - 1u);
    c.budget -= 1;
L_002DBAD0:
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.budget -= 1;
L_002DBAD4:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.budget -= 3;
L_002DBAE0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002DBAE4:
    c.r[2].d[0] = c.r[17].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 296u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB840u | kUnwind; return; } goto L_002DB840; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002DBB64; } }
L_002DBAF8:
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_002DBB0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_002DBB64; } }
L_002DBB0C:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002DBB58; } }
L_002DBB3C:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_002DBB58; }
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_002DBB58:
    c.r[2].d[0] = c.r[6].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[22].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBB3Cu | kUnwind; return; } goto L_002DBB3C; }
L_002DBB64:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBAF8u | kUnwind; return; } goto L_002DBAF8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBB88u); st32((c.r[2].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DBB88u) [[unlikely]] return; }
L_002DBB88:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_002DBBC0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[5].d[0] & 255ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 14;
L_002DBBF8:
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[20], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002DBC80; } }
L_002DBC08:
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[19].w[0] + 1u);  if (t) { goto L_002DBC6C; } }
L_002DBC1C:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[23], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBC34u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DE480u; return; } if (c.pc != 0x002DBC34u) [[unlikely]] return; }
L_002DBC34:
    c.r[1].d[0] = c.r[30].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002DBC6C; }
    set32(c.r[3], ld32((c.r[23].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DBC68; } }
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    c.r[22].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_002DBC68:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002DBC6C:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBC1Cu | kUnwind; return; } goto L_002DBC1C; }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002DBC80:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBC08u | kUnwind; return; } goto L_002DBC08; }
    c.budget -= 2;
    if (c.r[20].sd[0] < 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_002DBE54; }
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[17], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[22].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBCB8u); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0077(c, 228u, depth + 1u); else { c.pc = 0x002DE2F0u; return; } if (c.pc != 0x002DBCB8u) [[unlikely]] return; }
L_002DBCB8:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[18].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 8u)));  goto L_002DBCF8; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002DBCEC; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002DBCE8; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBCE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DBCE8u) [[unlikely]] return; }
L_002DBCE8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002DBCEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBCF4u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002DBCF4u) [[unlikely]] return; }
L_002DBCF4:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_002DBCF8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002DBE3C; } }
L_002DBD2C:
    set32(c.r[16], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_002DBE3C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002DBDC8; } }
L_002DBD50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[4].w[0] << 1);  if (t) { goto L_002DBD58; } }
L_002DBD58:
    c.r[1].d[0] = c.r[5].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DBD8C; } }
    set32(c.r[6], ld32((c.r[18].w[0])));
    set32(c.r[8], c.r[5].w[0] << 1);
    set32(c.r[7], ld32((c.r[17].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0]));
    c.r[7].d[0] = ld16((c.r[7].w[0]));
    c.r[6].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[6].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBD58u | kUnwind; return; } goto L_002DBD58; }
L_002DBD8C:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[10].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_002DBDD8; }
    set32(c.r[6], ld32((c.r[18].w[0])));
    set32(c.r[8], c.r[5].w[0] << 1);
    set32(c.r[7], ld32((c.r[17].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0]));
    c.r[7].d[0] = ld16((c.r[7].w[0]));
    c.budget -= 9;
    if (c.r[7].d[0] == c.r[6].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002DBDC4; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DBDD8; } }
L_002DBDC4:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_002DBDC8:
    c.r[6].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[10], ld32((c.r[17].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBD50u | kUnwind; return; } goto L_002DBD50; }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002DBDD8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DBE38; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 8u)));  goto L_002DBE14; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002DBE08; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002DBE04; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBE04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DBE04u) [[unlikely]] return; }
L_002DBE04:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002DBE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBE10u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002DBE10u) [[unlikely]] return; }
L_002DBE10:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_002DBE14:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_002DBE3C; } }
L_002DBE38:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002DBE3C:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBD2Cu | kUnwind; return; } goto L_002DBD2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBBF8u | kUnwind; return; } goto L_002DBBF8; } }
L_002DBE54:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002DBE80:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 80u));
    st32((c.r[29].w[0] + 192u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 196u), c.r[5].w[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);  if (t) { [[clang::musttail]] return unit_0077(c, 23u, depth); } }
L_002DBEC8:
    c.r[5].d[0] = c.r[20].d[0] & 65535ull;
    set32(c.r[6], c.r[29].w[0] + 200u);
    set32(c.r[7], c.r[29].w[0] + 202u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBEE8u); set32(c.r[8], c.r[29].w[0] + 204u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DBEE8u) [[unlikely]] return; }
L_002DBEE8:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 202u));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = ld16((c.r[29].w[0] + 200u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002DBF0C; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 204u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002DBF0C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DBF0C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002DBF24; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 204u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002DBF24; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DBF24:
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  [[clang::musttail]] return unit_0077(c, 23u, depth); }
    set32(c.r[4], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002DBF38u) [[unlikely]] return; }
L_002DBF38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002DBF4C; } }
    st32((c.r[19].w[0]), 0u);
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0] + 8u), 0u);
    c.budget -= 3;
L_002DBF4C:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 1);
    c.budget -= 2;
L_002DBF54:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 200u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[23], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[30], ld32((c.r[23].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[30].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0077(c, 9u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] < c.r[30].d[0] ? 1ull : 0ull;  if (t) { [[clang::musttail]] return unit_0077(c, 8u, depth); } }
L_002DBF84:
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (t) { goto L_002DBFC0; } }
L_002DBFA0:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002DBFC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002DBFD4; } }
L_002DBFC0:
    c.r[2].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBFA0u | kUnwind; return; } goto L_002DBFA0; }
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_002DBFD4:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  [[clang::musttail]] return unit_0077(c, 7u, depth); }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  [[clang::musttail]] return unit_0077(c, 6u, depth); }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_002DBFF8; }
    set32(c.r[16], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002DBFF8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0077(c, 5u, depth); } }
    [[clang::musttail]] return unit_0077(c, 1u, depth);
}

}
