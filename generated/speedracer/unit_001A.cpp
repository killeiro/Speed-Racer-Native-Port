#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_001A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0,
    0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0,
    69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 76,
    0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0,
    83, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 116,
    0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123,
    0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0,
    0, 135, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 0,
    0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    149, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 161,
    0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0,
    170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0,
    0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0,
    194, 0, 195, 0, 196, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200,
    0, 201, 0, 202, 0, 203, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0,
    219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 222, 0, 0, 0, 0,
    0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0,
    0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 243, 0, 0, 0,
    0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0,
    0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293,
    0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0,
    298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304,
    0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0,
    0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0,
    0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326,
    0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 332, 0, 0, 0, 333, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0,
    0, 346, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 353,
    0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0,
    0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 363, 0, 0,
    0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0,
    371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 378, 0, 0, 0,
    0, 0, 379, 0, 0, 0, 380, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 385,
    0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0,
    0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 394, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 401, 0, 402, 0, 0,
    0, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 406, 0, 407, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 413,
    0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0,
    0, 424, 0, 0, 425, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0, 0,
    435, 0, 0, 0, 436, 0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 439, 440, 441, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    443, 0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0,
    0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0,
    0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0,
    0, 460, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466,
    0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 469, 0, 470, 0, 471, 0, 472, 0, 473, 0, 0,
    0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0,
    0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 482, 0, 483, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 487, 0, 488, 0, 489, 0, 490, 0, 491, 0, 0, 492, 0, 0, 0, 493, 0,
    0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 495, 0, 0, 0, 496, 0, 497, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 500,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 503, 0, 504, 0, 505, 0, 506, 0, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0,
    0, 0, 0, 0, 0, 509, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 513, 0, 514, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 518, 0, 519, 0, 520, 0, 521, 0, 522, 0, 523, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0, 0, 526, 0, 527,
    0, 0, 0, 0, 0, 528, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0,
    537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 539, 0, 540, 0, 541, 0, 542, 0, 543, 0, 0, 0, 544, 0,
    545, 0, 0, 546, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0,
    0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0,
    559, 0, 560, 0, 561, 0, 562, 0, 0, 0, 563, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    565, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 569, 0, 570, 0, 571, 0, 572, 0, 573, 0, 574, 0, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0,
    578, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 584, 0, 585, 0, 586, 0, 587, 0, 588, 0, 589, 0, 590,
    0, 591, 0, 592, 0, 593, 0, 594, 0, 595, 0, 596, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 599, 0, 0,
    600, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0,
    605, 0, 0, 0, 0, 0, 0, 606, 0, 0, 607, 0, 0, 608, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0,
    611, 0, 0, 0, 0, 0, 0, 612, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 615, 0,
    0, 616, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 619, 0, 0, 620, 0, 0, 621, 0, 0, 622, 0, 0, 0,
    0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 625, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 627, 0, 0,
};

void unit_001A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00168000;
    case 2u: goto L_00168038;
    case 3u: goto L_0016803C;
    case 4u: goto L_00168040;
    case 5u: goto L_00168048;
    case 6u: goto L_00168080;
    case 7u: goto L_0016808C;
    case 8u: goto L_001680C0;
    case 9u: goto L_001680F0;
    case 10u: goto L_00168100;
    case 11u: goto L_00168108;
    case 12u: goto L_00168128;
    case 13u: goto L_00168138;
    case 14u: goto L_00168160;
    case 15u: goto L_00168188;
    case 16u: goto L_001681A0;
    case 17u: goto L_001681C0;
    case 18u: goto L_001681F8;
    case 19u: goto L_00168224;
    case 20u: goto L_00168240;
    case 21u: goto L_00168250;
    case 22u: goto L_00168280;
    case 23u: goto L_001682A4;
    case 24u: goto L_001682C8;
    case 25u: goto L_001682F0;
    case 26u: goto L_00168320;
    case 27u: goto L_00168344;
    case 28u: goto L_00168368;
    case 29u: goto L_00168390;
    case 30u: goto L_001683BC;
    case 31u: goto L_001683D4;
    case 32u: goto L_001683EC;
    case 33u: goto L_00168410;
    case 34u: goto L_00168450;
    case 35u: goto L_00168470;
    case 36u: goto L_00168490;
    case 37u: goto L_001684C8;
    case 38u: goto L_001684E0;
    case 39u: goto L_001684F0;
    case 40u: goto L_00168504;
    case 41u: goto L_00168514;
    case 42u: goto L_0016853C;
    case 43u: goto L_00168550;
    case 44u: goto L_00168570;
    case 45u: goto L_00168580;
    case 46u: goto L_001685A0;
    case 47u: goto L_001685B0;
    case 48u: goto L_001685C0;
    case 49u: goto L_001685D0;
    case 50u: goto L_001685F0;
    case 51u: goto L_00168600;
    case 52u: goto L_00168620;
    case 53u: goto L_00168630;
    case 54u: goto L_00168640;
    case 55u: goto L_00168650;
    case 56u: goto L_00168670;
    case 57u: goto L_00168680;
    case 58u: goto L_00168690;
    case 59u: goto L_001686B4;
    case 60u: goto L_001686C0;
    case 61u: goto L_001686C8;
    case 62u: goto L_00168730;
    case 63u: goto L_00168828;
    case 64u: goto L_00168880;
    case 65u: goto L_001688A0;
    case 66u: goto L_001688E0;
    case 67u: goto L_001688EC;
    case 68u: goto L_001688F8;
    case 69u: goto L_00168900;
    case 70u: goto L_0016891C;
    case 71u: goto L_00168928;
    case 72u: goto L_00168934;
    case 73u: goto L_0016894C;
    case 74u: goto L_00168958;
    case 75u: goto L_00168970;
    case 76u: goto L_0016897C;
    case 77u: goto L_00168988;
    case 78u: goto L_001689B0;
    case 79u: goto L_001689BC;
    case 80u: goto L_001689C8;
    case 81u: goto L_001689E0;
    case 82u: goto L_001689EC;
    case 83u: goto L_00168A00;
    case 84u: goto L_00168A0C;
    case 85u: goto L_00168A18;
    case 86u: goto L_00168A30;
    case 87u: goto L_00168A3C;
    case 88u: goto L_00168A54;
    case 89u: goto L_00168A60;
    case 90u: goto L_00168A6C;
    case 91u: goto L_00168A94;
    case 92u: goto L_00168AA0;
    case 93u: goto L_00168AAC;
    case 94u: goto L_00168AC4;
    case 95u: goto L_00168AD0;
    case 96u: goto L_00168AE8;
    case 97u: goto L_00168AF4;
    case 98u: goto L_00168B00;
    case 99u: goto L_00168B50;
    case 100u: goto L_00168B80;
    case 101u: goto L_00168BAC;
    case 102u: goto L_00168BB4;
    case 103u: goto L_00168BC4;
    case 104u: goto L_00168BF0;
    case 105u: goto L_00168C0C;
    case 106u: goto L_00168C18;
    case 107u: goto L_00168C2C;
    case 108u: goto L_00168C48;
    case 109u: goto L_00168C54;
    case 110u: goto L_00168C90;
    case 111u: goto L_00168C9C;
    case 112u: goto L_00168CB0;
    case 113u: goto L_00168CCC;
    case 114u: goto L_00168CD8;
    case 115u: goto L_00168CEC;
    case 116u: goto L_00168CFC;
    case 117u: goto L_00168D0C;
    case 118u: goto L_00168DA0;
    case 119u: goto L_00168DAC;
    case 120u: goto L_00168DC8;
    case 121u: goto L_00168DD4;
    case 122u: goto L_00168DE0;
    case 123u: goto L_00168DFC;
    case 124u: goto L_00168E08;
    case 125u: goto L_00168E14;
    case 126u: goto L_00168E30;
    case 127u: goto L_00168E3C;
    case 128u: goto L_00168E48;
    case 129u: goto L_00168E54;
    case 130u: goto L_00168E70;
    case 131u: goto L_00168E80;
    case 132u: goto L_00168EB8;
    case 133u: goto L_00168ED8;
    case 134u: goto L_00168EF8;
    case 135u: goto L_00168F04;
    case 136u: goto L_00168F18;
    case 137u: goto L_00168F24;
    case 138u: goto L_00168F58;
    case 139u: goto L_00168F64;
    case 140u: goto L_00168F70;
    case 141u: goto L_00168F84;
    case 142u: goto L_00168F90;
    case 143u: goto L_00168FF0;
    case 144u: goto L_00169014;
    case 145u: goto L_00169020;
    case 146u: goto L_00169030;
    case 147u: goto L_00169044;
    case 148u: goto L_00169070;
    case 149u: goto L_00169080;
    case 150u: goto L_0016908C;
    case 151u: goto L_0016909C;
    case 152u: goto L_001690B4;
    case 153u: goto L_001690C4;
    case 154u: goto L_001690D0;
    case 155u: goto L_001690E0;
    case 156u: goto L_001690F0;
    case 157u: goto L_00169110;
    case 158u: goto L_00169138;
    case 159u: goto L_00169164;
    case 160u: goto L_00169174;
    case 161u: goto L_0016917C;
    case 162u: goto L_00169194;
    case 163u: goto L_001691A4;
    case 164u: goto L_001691D0;
    case 165u: goto L_00169210;
    case 166u: goto L_00169220;
    case 167u: goto L_00169234;
    case 168u: goto L_0016924C;
    case 169u: goto L_0016925C;
    case 170u: goto L_00169280;
    case 171u: goto L_001692B8;
    case 172u: goto L_001692C8;
    case 173u: goto L_001692DC;
    case 174u: goto L_001692E8;
    case 175u: goto L_00169310;
    case 176u: goto L_00169370;
    case 177u: goto L_00169380;
    case 178u: goto L_001693B8;
    case 179u: goto L_001693E0;
    case 180u: goto L_001693F8;
    case 181u: goto L_00169408;
    case 182u: goto L_00169418;
    case 183u: goto L_00169428;
    case 184u: goto L_00169438;
    case 185u: goto L_00169448;
    case 186u: goto L_00169470;
    case 187u: goto L_00169490;
    case 188u: goto L_001694BC;
    case 189u: goto L_001694CC;
    case 190u: goto L_0016950C;
    case 191u: goto L_0016951C;
    case 192u: goto L_00169570;
    case 193u: goto L_00169578;
    case 194u: goto L_00169580;
    case 195u: goto L_00169588;
    case 196u: goto L_00169590;
    case 197u: goto L_00169598;
    case 198u: goto L_001695A8;
    case 199u: goto L_001695F4;
    case 200u: goto L_001695FC;
    case 201u: goto L_00169604;
    case 202u: goto L_0016960C;
    case 203u: goto L_00169614;
    case 204u: goto L_0016961C;
    case 205u: goto L_0016962C;
    case 206u: goto L_00169658;
    case 207u: goto L_00169668;
    case 208u: goto L_001696B0;
    case 209u: goto L_001696B8;
    case 210u: goto L_001696C0;
    case 211u: goto L_001696C8;
    case 212u: goto L_001696D0;
    case 213u: goto L_001696D8;
    case 214u: goto L_001696E8;
    case 215u: goto L_001696F8;
    case 216u: goto L_00169710;
    case 217u: goto L_00169738;
    case 218u: goto L_0016976C;
    case 219u: goto L_00169780;
    case 220u: goto L_001697DC;
    case 221u: goto L_001697E4;
    case 222u: goto L_001697EC;
    case 223u: goto L_00169808;
    case 224u: goto L_00169810;
    case 225u: goto L_00169828;
    case 226u: goto L_00169838;
    case 227u: goto L_00169844;
    case 228u: goto L_0016984C;
    case 229u: goto L_0016986C;
    case 230u: goto L_00169878;
    case 231u: goto L_001698A0;
    case 232u: goto L_001698C0;
    case 233u: goto L_001698E0;
    case 234u: goto L_001698F0;
    case 235u: goto L_00169910;
    case 236u: goto L_00169920;
    case 237u: goto L_00169930;
    case 238u: goto L_00169940;
    case 239u: goto L_00169968;
    case 240u: goto L_00169984;
    case 241u: goto L_001699E0;
    case 242u: goto L_001699E8;
    case 243u: goto L_001699F0;
    case 244u: goto L_00169A0C;
    case 245u: goto L_00169A14;
    case 246u: goto L_00169A2C;
    case 247u: goto L_00169A3C;
    case 248u: goto L_00169A48;
    case 249u: goto L_00169A50;
    case 250u: goto L_00169A70;
    case 251u: goto L_00169A7C;
    case 252u: goto L_00169AB0;
    case 253u: goto L_00169AD0;
    case 254u: goto L_00169B10;
    case 255u: goto L_00169B34;
    case 256u: goto L_00169B44;
    case 257u: goto L_00169B4C;
    case 258u: goto L_00169B58;
    case 259u: goto L_00169BA8;
    case 260u: goto L_00169BB8;
    case 261u: goto L_00169BC0;
    case 262u: goto L_00169BE4;
    case 263u: goto L_00169C3C;
    case 264u: goto L_00169CC8;
    case 265u: goto L_00169CD8;
    case 266u: goto L_00169D08;
    case 267u: goto L_00169D1C;
    case 268u: goto L_00169D4C;
    case 269u: goto L_00169D5C;
    case 270u: goto L_00169D74;
    case 271u: goto L_00169DB0;
    case 272u: goto L_00169DF0;
    case 273u: goto L_00169E38;
    case 274u: goto L_00169E44;
    case 275u: goto L_00169E50;
    case 276u: goto L_00169E74;
    case 277u: goto L_00169E88;
    case 278u: goto L_00169E94;
    case 279u: goto L_00169EAC;
    case 280u: goto L_00169EC0;
    case 281u: goto L_00169ED0;
    case 282u: goto L_00169EE0;
    case 283u: goto L_00169EEC;
    case 284u: goto L_00169F50;
    case 285u: goto L_00169F60;
    case 286u: goto L_00169FA8;
    case 287u: goto L_00169FB0;
    case 288u: goto L_00169FB8;
    case 289u: goto L_00169FC0;
    case 290u: goto L_00169FC8;
    case 291u: goto L_00169FD0;
    case 292u: goto L_0016A064;
    case 293u: goto L_0016A07C;
    case 294u: goto L_0016A094;
    case 295u: goto L_0016A0AC;
    case 296u: goto L_0016A0C8;
    case 297u: goto L_0016A0E8;
    case 298u: goto L_0016A100;
    case 299u: goto L_0016A124;
    case 300u: goto L_0016A158;
    case 301u: goto L_0016A190;
    case 302u: goto L_0016A1D0;
    case 303u: goto L_0016A1E4;
    case 304u: goto L_0016A1FC;
    case 305u: goto L_0016A220;
    case 306u: goto L_0016A23C;
    case 307u: goto L_0016A250;
    case 308u: goto L_0016A264;
    case 309u: goto L_0016A298;
    case 310u: goto L_0016A2B0;
    case 311u: goto L_0016A2E0;
    case 312u: goto L_0016A2F8;
    case 313u: goto L_0016A304;
    case 314u: goto L_0016A318;
    case 315u: goto L_0016A32C;
    case 316u: goto L_0016A360;
    case 317u: goto L_0016A374;
    case 318u: goto L_0016A390;
    case 319u: goto L_0016A3B8;
    case 320u: goto L_0016A3C4;
    case 321u: goto L_0016A3E4;
    case 322u: goto L_0016A3F8;
    case 323u: goto L_0016A470;
    case 324u: goto L_0016A49C;
    case 325u: goto L_0016A4D0;
    case 326u: goto L_0016A4FC;
    case 327u: goto L_0016A508;
    case 328u: goto L_0016A560;
    case 329u: goto L_0016A56C;
    case 330u: goto L_0016A5C0;
    case 331u: goto L_0016A5E0;
    case 332u: goto L_0016A608;
    case 333u: goto L_0016A618;
    case 334u: goto L_0016A624;
    case 335u: goto L_0016A630;
    case 336u: goto L_0016A654;
    case 337u: goto L_0016A664;
    case 338u: goto L_0016A6AC;
    case 339u: goto L_0016A6BC;
    case 340u: goto L_0016A6C4;
    case 341u: goto L_0016A6FC;
    case 342u: goto L_0016A728;
    case 343u: goto L_0016A734;
    case 344u: goto L_0016A760;
    case 345u: goto L_0016A76C;
    case 346u: goto L_0016A784;
    case 347u: goto L_0016A798;
    case 348u: goto L_0016A7A4;
    case 349u: goto L_0016A7BC;
    case 350u: goto L_0016A7CC;
    case 351u: goto L_0016A7D8;
    case 352u: goto L_0016A7F0;
    case 353u: goto L_0016A7FC;
    case 354u: goto L_0016A820;
    case 355u: goto L_0016A850;
    case 356u: goto L_0016A870;
    case 357u: goto L_0016A8A0;
    case 358u: goto L_0016A8C0;
    case 359u: goto L_0016A8EC;
    case 360u: goto L_0016A90C;
    case 361u: goto L_0016A964;
    case 362u: goto L_0016A96C;
    case 363u: goto L_0016A974;
    case 364u: goto L_0016A990;
    case 365u: goto L_0016A998;
    case 366u: goto L_0016A9B0;
    case 367u: goto L_0016A9C0;
    case 368u: goto L_0016A9CC;
    case 369u: goto L_0016A9D4;
    case 370u: goto L_0016A9F4;
    case 371u: goto L_0016AA00;
    case 372u: goto L_0016AA2C;
    case 373u: goto L_0016AA90;
    case 374u: goto L_0016AABC;
    case 375u: goto L_0016AAC4;
    case 376u: goto L_0016AACC;
    case 377u: goto L_0016AAE8;
    case 378u: goto L_0016AAF0;
    case 379u: goto L_0016AB08;
    case 380u: goto L_0016AB18;
    case 381u: goto L_0016AB24;
    case 382u: goto L_0016AB2C;
    case 383u: goto L_0016AB4C;
    case 384u: goto L_0016AB58;
    case 385u: goto L_0016AB7C;
    case 386u: goto L_0016AB9C;
    case 387u: goto L_0016ABC0;
    case 388u: goto L_0016ABE0;
    case 389u: goto L_0016ABF0;
    case 390u: goto L_0016AC10;
    case 391u: goto L_0016AC20;
    case 392u: goto L_0016AC30;
    case 393u: goto L_0016AC40;
    case 394u: goto L_0016AC84;
    case 395u: goto L_0016AC8C;
    case 396u: goto L_0016AC94;
    case 397u: goto L_0016ACB0;
    case 398u: goto L_0016ACB8;
    case 399u: goto L_0016ACD0;
    case 400u: goto L_0016ACE0;
    case 401u: goto L_0016ACEC;
    case 402u: goto L_0016ACF4;
    case 403u: goto L_0016AD14;
    case 404u: goto L_0016AD20;
    case 405u: goto L_0016AD50;
    case 406u: goto L_0016AD94;
    case 407u: goto L_0016AD9C;
    case 408u: goto L_0016ADA4;
    case 409u: goto L_0016ADC0;
    case 410u: goto L_0016ADC8;
    case 411u: goto L_0016ADE0;
    case 412u: goto L_0016ADF0;
    case 413u: goto L_0016ADFC;
    case 414u: goto L_0016AE04;
    case 415u: goto L_0016AE24;
    case 416u: goto L_0016AE30;
    case 417u: goto L_0016AE60;
    case 418u: goto L_0016AEA8;
    case 419u: goto L_0016AEB0;
    case 420u: goto L_0016AEB8;
    case 421u: goto L_0016AED4;
    case 422u: goto L_0016AEDC;
    case 423u: goto L_0016AEF4;
    case 424u: goto L_0016AF04;
    case 425u: goto L_0016AF10;
    case 426u: goto L_0016AF18;
    case 427u: goto L_0016AF38;
    case 428u: goto L_0016AF44;
    case 429u: goto L_0016AF70;
    case 430u: goto L_0016AFB4;
    case 431u: goto L_0016AFBC;
    case 432u: goto L_0016AFC4;
    case 433u: goto L_0016AFE0;
    case 434u: goto L_0016AFE8;
    case 435u: goto L_0016B000;
    case 436u: goto L_0016B010;
    case 437u: goto L_0016B01C;
    case 438u: goto L_0016B024;
    case 439u: goto L_0016B03C;
    case 440u: goto L_0016B040;
    case 441u: goto L_0016B044;
    case 442u: goto L_0016B050;
    case 443u: goto L_0016B080;
    case 444u: goto L_0016B098;
    case 445u: goto L_0016B0A4;
    case 446u: goto L_0016B0B8;
    case 447u: goto L_0016B0D0;
    case 448u: goto L_0016B0E0;
    case 449u: goto L_0016B0F8;
    case 450u: goto L_0016B104;
    case 451u: goto L_0016B118;
    case 452u: goto L_0016B134;
    case 453u: goto L_0016B148;
    case 454u: goto L_0016B168;
    case 455u: goto L_0016B178;
    case 456u: goto L_0016B188;
    case 457u: goto L_0016B1A0;
    case 458u: goto L_0016B1C0;
    case 459u: goto L_0016B1F4;
    case 460u: goto L_0016B204;
    case 461u: goto L_0016B21C;
    case 462u: goto L_0016B224;
    case 463u: goto L_0016B238;
    case 464u: goto L_0016B254;
    case 465u: goto L_0016B268;
    case 466u: goto L_0016B27C;
    case 467u: goto L_0016B28C;
    case 468u: goto L_0016B2CC;
    case 469u: goto L_0016B2D4;
    case 470u: goto L_0016B2DC;
    case 471u: goto L_0016B2E4;
    case 472u: goto L_0016B2EC;
    case 473u: goto L_0016B2F4;
    case 474u: goto L_0016B304;
    case 475u: goto L_0016B320;
    case 476u: goto L_0016B350;
    case 477u: goto L_0016B358;
    case 478u: goto L_0016B370;
    case 479u: goto L_0016B394;
    case 480u: goto L_0016B3A8;
    case 481u: goto L_0016B3B8;
    case 482u: goto L_0016B3C4;
    case 483u: goto L_0016B3CC;
    case 484u: goto L_0016B3D4;
    case 485u: goto L_0016B3EC;
    case 486u: goto L_0016B434;
    case 487u: goto L_0016B43C;
    case 488u: goto L_0016B444;
    case 489u: goto L_0016B44C;
    case 490u: goto L_0016B454;
    case 491u: goto L_0016B45C;
    case 492u: goto L_0016B468;
    case 493u: goto L_0016B478;
    case 494u: goto L_0016B49C;
    case 495u: goto L_0016B4A8;
    case 496u: goto L_0016B4B8;
    case 497u: goto L_0016B4C0;
    case 498u: goto L_0016B4C8;
    case 499u: goto L_0016B4E0;
    case 500u: goto L_0016B4FC;
    case 501u: goto L_0016B528;
    case 502u: goto L_0016B530;
    case 503u: goto L_0016B538;
    case 504u: goto L_0016B540;
    case 505u: goto L_0016B548;
    case 506u: goto L_0016B550;
    case 507u: goto L_0016B55C;
    case 508u: goto L_0016B578;
    case 509u: goto L_0016B594;
    case 510u: goto L_0016B59C;
    case 511u: goto L_0016B5B0;
    case 512u: goto L_0016B5C0;
    case 513u: goto L_0016B5C8;
    case 514u: goto L_0016B5D0;
    case 515u: goto L_0016B5E8;
    case 516u: goto L_0016B610;
    case 517u: goto L_0016B634;
    case 518u: goto L_0016B694;
    case 519u: goto L_0016B69C;
    case 520u: goto L_0016B6A4;
    case 521u: goto L_0016B6AC;
    case 522u: goto L_0016B6B4;
    case 523u: goto L_0016B6BC;
    case 524u: goto L_0016B6CC;
    case 525u: goto L_0016B6DC;
    case 526u: goto L_0016B6F4;
    case 527u: goto L_0016B6FC;
    case 528u: goto L_0016B714;
    case 529u: goto L_0016B724;
    case 530u: goto L_0016B72C;
    case 531u: goto L_0016B744;
    case 532u: goto L_0016B760;
    case 533u: goto L_0016B7A8;
    case 534u: goto L_0016B7BC;
    case 535u: goto L_0016B7CC;
    case 536u: goto L_0016B7F0;
    case 537u: goto L_0016B800;
    case 538u: goto L_0016B840;
    case 539u: goto L_0016B848;
    case 540u: goto L_0016B850;
    case 541u: goto L_0016B858;
    case 542u: goto L_0016B860;
    case 543u: goto L_0016B868;
    case 544u: goto L_0016B878;
    case 545u: goto L_0016B880;
    case 546u: goto L_0016B88C;
    case 547u: goto L_0016B89C;
    case 548u: goto L_0016B8B0;
    case 549u: goto L_0016B8C4;
    case 550u: goto L_0016B8E0;
    case 551u: goto L_0016B8F0;
    case 552u: goto L_0016B91C;
    case 553u: goto L_0016B92C;
    case 554u: goto L_0016B938;
    case 555u: goto L_0016B970;
    case 556u: goto L_0016B98C;
    case 557u: goto L_0016B9F0;
    case 558u: goto L_0016B9F8;
    case 559u: goto L_0016BA00;
    case 560u: goto L_0016BA08;
    case 561u: goto L_0016BA10;
    case 562u: goto L_0016BA18;
    case 563u: goto L_0016BA28;
    case 564u: goto L_0016BA34;
    case 565u: goto L_0016BA80;
    case 566u: goto L_0016BA8C;
    case 567u: goto L_0016BAB4;
    case 568u: goto L_0016BAC4;
    case 569u: goto L_0016BB0C;
    case 570u: goto L_0016BB14;
    case 571u: goto L_0016BB1C;
    case 572u: goto L_0016BB24;
    case 573u: goto L_0016BB2C;
    case 574u: goto L_0016BB34;
    case 575u: goto L_0016BB44;
    case 576u: goto L_0016BB50;
    case 577u: goto L_0016BB6C;
    case 578u: goto L_0016BB80;
    case 579u: goto L_0016BB90;
    case 580u: goto L_0016BBCC;
    case 581u: goto L_0016BBDC;
    case 582u: goto L_0016BC10;
    case 583u: goto L_0016BC44;
    case 584u: goto L_0016BC4C;
    case 585u: goto L_0016BC54;
    case 586u: goto L_0016BC5C;
    case 587u: goto L_0016BC64;
    case 588u: goto L_0016BC6C;
    case 589u: goto L_0016BC74;
    case 590u: goto L_0016BC7C;
    case 591u: goto L_0016BC84;
    case 592u: goto L_0016BC8C;
    case 593u: goto L_0016BC94;
    case 594u: goto L_0016BC9C;
    case 595u: goto L_0016BCA4;
    case 596u: goto L_0016BCAC;
    case 597u: goto L_0016BCC0;
    case 598u: goto L_0016BCD8;
    case 599u: goto L_0016BCF4;
    case 600u: goto L_0016BD00;
    case 601u: goto L_0016BD20;
    case 602u: goto L_0016BD58;
    case 603u: goto L_0016BD68;
    case 604u: goto L_0016BDE4;
    case 605u: goto L_0016BE00;
    case 606u: goto L_0016BE1C;
    case 607u: goto L_0016BE28;
    case 608u: goto L_0016BE34;
    case 609u: goto L_0016BE40;
    case 610u: goto L_0016BE60;
    case 611u: goto L_0016BE80;
    case 612u: goto L_0016BE9C;
    case 613u: goto L_0016BEA8;
    case 614u: goto L_0016BEDC;
    case 615u: goto L_0016BEF8;
    case 616u: goto L_0016BF04;
    case 617u: goto L_0016BF14;
    case 618u: goto L_0016BF30;
    case 619u: goto L_0016BF4C;
    case 620u: goto L_0016BF58;
    case 621u: goto L_0016BF64;
    case 622u: goto L_0016BF70;
    case 623u: goto L_0016BF90;
    case 624u: goto L_0016BFB0;
    case 625u: goto L_0016BFC4;
    case 626u: goto L_0016BFD8;
    case 627u: goto L_0016BFF4;
    default: bad_entry(c, 0x00168000u); return;
    }
L_00168000:
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00168020; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_0016802C; } }
L_00168020:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_0016802C:
    st8((c.r[29].w[0] + 79u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168038u); set32(c.r[4], c.r[29].w[0] + 79u);  if (depth < kMaxDepth) unit_0019(c, 442u, depth + 1u); else { c.pc = 0x00167F70u; return; } if (c.pc != 0x00168038u) [[unlikely]] return; }
L_00168038:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 79u)));
    c.budget -= 1;
L_0016803C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00168040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168048u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 78u, depth + 1u); else { c.pc = 0x0013CD40u; return; } if (c.pc != 0x00168048u) [[unlikely]] return; }
L_00168048:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0016809C; }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], ld32((c.r[18].w[0] + 4u)));  goto L_00168078; }
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[6].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_00168078:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 8u)));  goto L_00168084; }
L_00168080:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00168084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016808Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 80u, depth + 1u); else { c.pc = 0x0013CD70u; return; } if (c.pc != 0x0016808Cu) [[unlikely]] return; }
L_0016808C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00168098; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00168098:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0016809C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001680C0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001680F0u); set32(c.r[5], c.r[29].w[0] + 303u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001680F0u) [[unlikely]] return; }
L_001680F0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 303u);  goto L_00168100; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00168144; } }
L_00168100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168108u);  if (depth < kMaxDepth) unit_0019(c, 441u, depth + 1u); else { c.pc = 0x00167F60u; return; } if (c.pc != 0x00168108u) [[unlikely]] return; }
L_00168108:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 303u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[6].w[0] + c.r[29].w[0]);
    st8((c.r[2].w[0] + 48u), static_cast<std::uint8_t>(0u));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00168128u); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00168128u) [[unlikely]] return; }
L_00168128:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168138u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00168138u) [[unlikely]] return; }
L_00168138:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 303u));
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_00168144:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_00168160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00168188u); set32(c.r[5], c.r[29].w[0] + 47u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00168188u) [[unlikely]] return; }
L_00168188:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[29].w[0] + 47u));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001681A0u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001681A0u) [[unlikely]] return; }
L_001681A0:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 47u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001681C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00168224; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] - 21904u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001681F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001681F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001681F8u) [[unlikely]] return; }
L_001681F8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00168210; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 22448u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_00168210:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00168228; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168224u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00168224u) [[unlikely]] return; }
L_00168224:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00168228:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00168240:
    c.budget -= 2;
    { set32(c.r[5], c.r[5].w[0] + 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E8E0u | kUnwind; return; } [[clang::musttail]] return unit_000F(c, 258u, depth); }
L_00168250:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00168280u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00168280u) [[unlikely]] return; }
L_00168280:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001682A8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], c.r[17].w[0] + 4u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001682A4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001682A4u) [[unlikely]] return; }
L_001682A4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001682A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001682D0; }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], c.r[17].w[0] + 8u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001682C8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001682C8u) [[unlikely]] return; }
L_001682C8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_001682D0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001682F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00168320u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00168320u) [[unlikely]] return; }
L_00168320:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00168348; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00168344u); set32(c.r[6], c.r[16].w[0] + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00168344u) [[unlikely]] return; }
L_00168344:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00168348:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00168370; }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00168368u); set32(c.r[6], c.r[16].w[0] + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00168368u) [[unlikely]] return; }
L_00168368:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_00168370:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00168390:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001683BCu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001683BCu) [[unlikely]] return; }
L_001683BC:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001683D4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001683D4u) [[unlikely]] return; }
L_001683D4:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001683ECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001683ECu) [[unlikely]] return; }
L_001683EC:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00168410:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] - 22448u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 21904u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168450u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00168450u) [[unlikely]] return; }
L_00168450:
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[17].w[0] + 1u);  goto L_00168468; }
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_00168468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168470u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00168470u) [[unlikely]] return; }
L_00168470:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00168490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001684CC; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 21872u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_001684C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001684C8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001684C8u) [[unlikely]] return; }
L_001684C8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001684CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001684E0:
    set32(c.r[4], ld32((c.r[28].w[0] - 28936u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { st8((c.r[28].w[0] - 28884u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015F1E0u | kUnwind; return; } [[clang::musttail]] return unit_0017(c, 342u, depth); }
L_001684F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168504u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00168504u) [[unlikely]] return; }
L_00168504:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00168514; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168514u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 350u, depth + 1u); else { c.pc = 0x0015F2F0u; return; } if (c.pc != 0x00168514u) [[unlikely]] return; }
L_00168514:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[28].w[0] - 28936u), c.r[2].w[0]);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 24273u);
    set32(c.r[7], c.r[7].w[0] + 24304u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016853Cu); set32(c.r[8], c.r[8].w[0] + 24308u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0016853Cu) [[unlikely]] return; }
L_0016853C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00168550:
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[6].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[6].w[0]);  c.pc = t; return; }
L_00168570:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00168580:
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_001685A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_001685B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_001685C0:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_001685D0:
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[6].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[6].w[0]);  c.pc = t; return; }
L_001685F0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00168600:
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00168620:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_00168630:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_00168640:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00168650:
    c.r[3].d[0] = ld64((c.r[4].w[0] + 32u));
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] + c.r[5].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 32u), c.r[3].d[0]);  c.pc = t; return; }
L_00168670:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00168680:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 4u);  c.pc = t; return; }
L_00168690:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001686B4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001686B4u) [[unlikely]] return; }
L_001686B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001686F0; } }
L_001686C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001686C8u); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_001A(c, 62u, depth + 1u); else { c.pc = 0x00168730u; return; } if (c.pc != 0x001686C8u) [[unlikely]] return; }
L_001686C8:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 8));
    set32(c.r[4], c.r[3].w[0] << 8);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[17].w[0] << 1);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 10;
L_001686F0:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] + c.r[17].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001686C0u | kUnwind; return; } goto L_001686C0; }
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00168730:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0016875C; } }
    c.r[1].d[0] = c.r[5].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[5].sd[0] < 48ll ? 1ull : 0ull;  goto L_00168760; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00168830; } }
L_0016875C:
    c.r[2].d[0] = c.r[5].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 1;
L_00168760:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[5].sd[0] < 58ll ? 1ull : 0ull;  goto L_00168780; }
    c.r[1].d[0] = c.r[5].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016877C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00168830; } }
L_0016877C:
    c.r[2].d[0] = c.r[5].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 1;
L_00168780:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;  goto L_001687A0; }
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016879C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(11ll);  if (t) { goto L_00168830; } }
L_0016879C:
    c.r[2].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 1;
L_001687A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[5].sd[0] < 91ll ? 1ull : 0ull;  goto L_001687C0; }
    c.r[1].d[0] = c.r[5].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001687BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00168830; } }
L_001687BC:
    c.r[2].d[0] = c.r[5].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 1;
L_001687C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[5].sd[0] < 97ll ? 1ull : 0ull;  goto L_001687E0; }
    c.r[1].d[0] = c.r[5].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001687DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(37ll);  if (t) { goto L_00168830; } }
L_001687DC:
    c.r[2].d[0] = c.r[5].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 1;
L_001687E0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[5].sd[0] < 123ll ? 1ull : 0ull;  goto L_00168800; }
    c.r[1].d[0] = c.r[5].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001687FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (t) { goto L_00168830; } }
L_001687FC:
    c.r[2].d[0] = c.r[5].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 1;
L_00168800:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016881C; } }
    c.r[1].d[0] = c.r[5].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016881C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(63ll);  if (t) { goto L_00168830; } }
L_0016881C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168828u); set32(c.r[4], c.r[4].w[0] + 24368u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00168828u) [[unlikely]] return; }
L_00168828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00168890; } }
L_00168830:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[4].d[0] & 255ull;  goto L_00168860; }
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], c.r[5].w[0] - 32u);
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 6496u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[2].w[0]));  if (t) { goto L_00168890; } }
L_00168860:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 6360u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 6358u);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 8;
L_00168880:
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
L_00168890:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001688A0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 24400u);
    set32(c.r[17], 0u + 2u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001688E0u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_000B(c, 4u, depth + 1u); else { c.pc = 0x0012C060u; return; } if (c.pc != 0x001688E0u) [[unlikely]] return; }
L_001688E0:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001688ECu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 494u, depth + 1u); else { c.pc = 0x0012BFB0u; return; } if (c.pc != 0x001688ECu) [[unlikely]] return; }
L_001688EC:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001688F8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 487u, depth + 1u); else { c.pc = 0x0012BEC0u; return; } if (c.pc != 0x001688F8u) [[unlikely]] return; }
L_001688F8:
    set32(c.r[3], c.r[20].w[0] + 1023u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 10));  if (t) { goto L_0016890C; } }
    goto L_00168904;
L_00168900:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 10));
    c.budget -= 1;
L_00168904:
    set32(c.r[2], c.r[3].w[0] + 1023u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    c.budget -= 2;
L_0016890C:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016891Cu); set32(c.r[5], c.r[19].w[0] + 28u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x0016891Cu) [[unlikely]] return; }
L_0016891C:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168928u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x00168928u) [[unlikely]] return; }
L_00168928:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168934u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000A(c, 6u, depth + 1u); else { c.pc = 0x001280C0u; return; } if (c.pc != 0x00168934u) [[unlikely]] return; }
L_00168934:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016894Cu); c.r[20].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016894Cu) [[unlikely]] return; }
L_0016894C:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168958u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00168958u) [[unlikely]] return; }
L_00168958:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_00168A8C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[19].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168970u); set32(c.r[5], c.r[5].w[0] + 24400u);  if (depth < kMaxDepth) unit_000B(c, 4u, depth + 1u); else { c.pc = 0x0012C060u; return; } if (c.pc != 0x00168970u) [[unlikely]] return; }
L_00168970:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016897Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 494u, depth + 1u); else { c.pc = 0x0012BFB0u; return; } if (c.pc != 0x0016897Cu) [[unlikely]] return; }
L_0016897C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168988u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 487u, depth + 1u); else { c.pc = 0x0012BEC0u; return; } if (c.pc != 0x00168988u) [[unlikely]] return; }
L_00168988:
    set32(c.r[3], c.r[20].w[0] + 1023u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 10));  if (t) { goto L_0016899C; } }
    set32(c.r[2], c.r[3].w[0] + 1023u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    c.budget -= 2;
L_0016899C:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[19].w[0] + 56u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001689B0u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x001689B0u) [[unlikely]] return; }
L_001689B0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001689BCu); set32(c.r[5], c.r[19].w[0] + 28u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x001689BCu) [[unlikely]] return; }
L_001689BC:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001689C8u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000A(c, 6u, depth + 1u); else { c.pc = 0x001280C0u; return; } if (c.pc != 0x001689C8u) [[unlikely]] return; }
L_001689C8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001689E0u); c.r[20].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001689E0u) [[unlikely]] return; }
L_001689E0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001689ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001689ECu) [[unlikely]] return; }
L_001689EC:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0])));  goto L_00168B20; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168A00u); set32(c.r[5], c.r[19].w[0] + 56u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x00168A00u) [[unlikely]] return; }
L_00168A00:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168A0Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x00168A0Cu) [[unlikely]] return; }
L_00168A0C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168A18u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000A(c, 6u, depth + 1u); else { c.pc = 0x001280C0u; return; } if (c.pc != 0x00168A18u) [[unlikely]] return; }
L_00168A18:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168A30u); c.r[20].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00168A30u) [[unlikely]] return; }
L_00168A30:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168A3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00168A3Cu) [[unlikely]] return; }
L_00168A3C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00168B1C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[19].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168A54u); set32(c.r[5], c.r[5].w[0] + 24400u);  if (depth < kMaxDepth) unit_000B(c, 4u, depth + 1u); else { c.pc = 0x0012C060u; return; } if (c.pc != 0x00168A54u) [[unlikely]] return; }
L_00168A54:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168A60u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 494u, depth + 1u); else { c.pc = 0x0012BFB0u; return; } if (c.pc != 0x00168A60u) [[unlikely]] return; }
L_00168A60:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168A6Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 487u, depth + 1u); else { c.pc = 0x0012BEC0u; return; } if (c.pc != 0x00168A6Cu) [[unlikely]] return; }
L_00168A6C:
    set32(c.r[3], c.r[19].w[0] + 1023u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 10));  if (t) { goto L_00168A80; } }
    set32(c.r[2], c.r[3].w[0] + 1023u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    c.budget -= 2;
L_00168A80:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_00168B1C; } }
L_00168A8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168A94u); set32(c.r[5], c.r[19].w[0] + 56u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x00168A94u) [[unlikely]] return; }
L_00168A94:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168AA0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x00168AA0u) [[unlikely]] return; }
L_00168AA0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168AACu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000A(c, 6u, depth + 1u); else { c.pc = 0x001280C0u; return; } if (c.pc != 0x00168AACu) [[unlikely]] return; }
L_00168AAC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168AC4u); c.r[20].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00168AC4u) [[unlikely]] return; }
L_00168AC4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168AD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00168AD0u) [[unlikely]] return; }
L_00168AD0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00168B1C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[19].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168AE8u); set32(c.r[5], c.r[5].w[0] + 24400u);  if (depth < kMaxDepth) unit_000B(c, 4u, depth + 1u); else { c.pc = 0x0012C060u; return; } if (c.pc != 0x00168AE8u) [[unlikely]] return; }
L_00168AE8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168AF4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 494u, depth + 1u); else { c.pc = 0x0012BFB0u; return; } if (c.pc != 0x00168AF4u) [[unlikely]] return; }
L_00168AF4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168B00u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 487u, depth + 1u); else { c.pc = 0x0012BEC0u; return; } if (c.pc != 0x00168B00u) [[unlikely]] return; }
L_00168B00:
    set32(c.r[3], c.r[19].w[0] + 1023u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 10));  if (t) { goto L_00168B14; } }
    set32(c.r[2], c.r[3].w[0] + 1023u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    c.budget -= 2;
L_00168B14:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_00168B1C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00168B20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00168B50:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168B80u); set32(c.r[6], 0u + 964u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x00168B80u) [[unlikely]] return; }
L_00168B80:
    set32(c.r[2], 0u + 80u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[2], 0u + 83u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 50u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 68u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168BACu); st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00168BACu) [[unlikely]] return; }
L_00168BAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168BB4u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00168BB4u) [[unlikely]] return; }
L_00168BB4:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168BC4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 406u, depth + 1u); else { c.pc = 0x0013FE80u; return; } if (c.pc != 0x00168BC4u) [[unlikely]] return; }
L_00168BC4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 176u)));  goto L_00168C5C; }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168BF0u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x00168BF0u) [[unlikely]] return; }
L_00168BF0:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 145u);  goto L_00168C04; }
    set32(c.r[5], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_00168C04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168C0Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00168C0Cu) [[unlikely]] return; }
L_00168C0C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168C18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00168C18u) [[unlikely]] return; }
L_00168C18:
    set32(c.r[6], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168C2Cu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x00168C2Cu) [[unlikely]] return; }
L_00168C2C:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 129u);  goto L_00168C40; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_00168C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168C48u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00168C48u) [[unlikely]] return; }
L_00168C48:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168C54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00168C54u) [[unlikely]] return; }
L_00168C54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_00168CA0; } }
L_00168C5C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 176u));  goto L_00168C70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 180u)));  if (t) { goto L_00168C78; } }
L_00168C70:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_00168C78:
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 177u);  goto L_00168C94; }
L_00168C90:
    set32(c.r[5], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_00168C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168C9Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00168C9Cu) [[unlikely]] return; }
L_00168C9C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_00168CA0:
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168CB0u); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x00168CB0u) [[unlikely]] return; }
L_00168CB0:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 113u);  goto L_00168CC4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_00168CC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168CCCu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00168CCCu) [[unlikely]] return; }
L_00168CCC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168CD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00168CD8u) [[unlikely]] return; }
L_00168CD8:
    set32(c.r[6], 0u + 64u);
    set32(c.r[4], c.r[17].w[0] + 16u);
    st32((c.r[17].w[0] + 12u), c.r[6].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168CECu); set32(c.r[5], c.r[18].w[0] + 1052u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00168CECu) [[unlikely]] return; }
L_00168CEC:
    set32(c.r[4], c.r[17].w[0] + 80u);
    set32(c.r[5], c.r[18].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168CFCu); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00168CFCu) [[unlikely]] return; }
L_00168CFC:
    set32(c.r[4], c.r[17].w[0] + 128u);
    set32(c.r[5], c.r[18].w[0] + 1164u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168D0Cu); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00168D0Cu) [[unlikely]] return; }
L_00168D0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 84u), 0u);
    st32((c.r[17].w[0] + 88u), 0u);
    st32((c.r[17].w[0] + 92u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 112u), 0u);
    st32((c.r[17].w[0] + 116u), 0u);
    st32((c.r[17].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 124u), 0u);
    st32((c.r[17].w[0] + 128u), 0u);
    st32((c.r[17].w[0] + 132u), 0u);
    st32((c.r[17].w[0] + 136u), 0u);
    st32((c.r[17].w[0] + 140u), 0u);
    st32((c.r[17].w[0] + 144u), 0u);
    st32((c.r[17].w[0] + 148u), 0u);
    st32((c.r[17].w[0] + 152u), 0u);
    st32((c.r[17].w[0] + 156u), 0u);
    st32((c.r[17].w[0] + 160u), 0u);
    st32((c.r[17].w[0] + 164u), 0u);
    st32((c.r[17].w[0] + 168u), 0u);
    st32((c.r[17].w[0] + 172u), 0u);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 180u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 184u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 188u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 34;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 161u);  goto L_00168D98; }
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_00168D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168DA0u); set32(c.r[5], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_001A(c, 58u, depth + 1u); else { c.pc = 0x00168690u; return; } if (c.pc != 0x00168DA0u) [[unlikely]] return; }
L_00168DA0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168DACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 597u, depth + 1u); else { c.pc = 0x0016BCC0u; return; } if (c.pc != 0x00168DACu) [[unlikely]] return; }
L_00168DAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 97u);  goto L_00168DC0; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_00168DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168DC8u); set32(c.r[4], c.r[17].w[0] + 260u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x00168DC8u) [[unlikely]] return; }
L_00168DC8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168DD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00168DD4u) [[unlikely]] return; }
L_00168DD4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168DE0u); set32(c.r[5], c.r[18].w[0] + 28u);  if (depth < kMaxDepth) unit_001A(c, 597u, depth + 1u); else { c.pc = 0x0016BCC0u; return; } if (c.pc != 0x00168DE0u) [[unlikely]] return; }
L_00168DE0:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_00168DF4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_00168DF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168DFCu); set32(c.r[4], c.r[17].w[0] + 324u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x00168DFCu) [[unlikely]] return; }
L_00168DFC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168E08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00168E08u) [[unlikely]] return; }
L_00168E08:
    set32(c.r[5], c.r[18].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168E14u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 597u, depth + 1u); else { c.pc = 0x0016BCC0u; return; } if (c.pc != 0x00168E14u) [[unlikely]] return; }
L_00168E14:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_00168E28; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_00168E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168E30u); set32(c.r[4], c.r[17].w[0] + 388u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x00168E30u) [[unlikely]] return; }
L_00168E30:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168E3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00168E3Cu) [[unlikely]] return; }
L_00168E3C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168E48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00168E48u) [[unlikely]] return; }
L_00168E48:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168E54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00168E54u) [[unlikely]] return; }
L_00168E54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00168E70:
    set32(c.r[4], c.r[4].w[0] + 1052u);
    c.budget -= 3;
    { set32(c.r[6], 0u + 64u);  [[clang::musttail]] return unit_00AE(c, 5u, depth); }
L_00168E80:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 1228u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00168EAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1228u), 0u);  if (t) { goto L_00168FD4; } }
L_00168EAC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1228u), c.r[2].w[0]);  if (t) { goto L_00168FA4; } }
L_00168EB8:
    c.budget -= 2;
    if (c.r[3].sd[0] <= 0) { set32(c.r[3], ld32((c.r[17].w[0] + 1228u)));  goto L_00168F40; }
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168ED8u); set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0004(c, 343u, depth + 1u); else { c.pc = 0x00113B00u; return; } if (c.pc != 0x00168ED8u) [[unlikely]] return; }
L_00168ED8:
    set32(c.r[2], ld32((c.r[17].w[0] + 1228u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168EF8u); set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0004(c, 343u, depth + 1u); else { c.pc = 0x00113B00u; return; } if (c.pc != 0x00168EF8u) [[unlikely]] return; }
L_00168EF8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168F04u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x00168F04u) [[unlikely]] return; }
L_00168F04:
    c.r[18].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168F18u); c.r[18].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00168F18u) [[unlikely]] return; }
L_00168F18:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168F24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00168F24u) [[unlikely]] return; }
L_00168F24:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00168F3C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1228u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1228u), c.r[2].w[0]);  if (t) { goto L_00168FA4; } }
L_00168F3C:
    set32(c.r[3], ld32((c.r[17].w[0] + 1228u)));
    c.budget -= 1;
L_00168F40:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 1228u)));  goto L_00168FB8; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168F58u); set32(c.r[5], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_0004(c, 343u, depth + 1u); else { c.pc = 0x00113B00u; return; } if (c.pc != 0x00168F58u) [[unlikely]] return; }
L_00168F58:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168F64u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 343u, depth + 1u); else { c.pc = 0x00113B00u; return; } if (c.pc != 0x00168F64u) [[unlikely]] return; }
L_00168F64:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168F70u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x00168F70u) [[unlikely]] return; }
L_00168F70:
    c.r[18].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168F84u); c.r[18].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00168F84u) [[unlikely]] return; }
L_00168F84:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168F90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00168F90u) [[unlikely]] return; }
L_00168F90:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00168FB4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1228u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 1228u), c.r[2].w[0]);
    c.budget -= 3;
L_00168FA4:
    set32(c.r[3], ld32((c.r[17].w[0] + 1228u)));
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00168EB8u | kUnwind; return; } goto L_00168EB8; } }
L_00168FB4:
    set32(c.r[2], ld32((c.r[17].w[0] + 1228u)));
    c.budget -= 1;
L_00168FB8:
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 1228u)));  goto L_00168FD8; }
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001690F4; } }
L_00168FD4:
    set32(c.r[3], ld32((c.r[17].w[0] + 1228u)));
    c.budget -= 1;
L_00168FD8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168FF0u); set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_001A(c, 597u, depth + 1u); else { c.pc = 0x0016BCC0u; return; } if (c.pc != 0x00168FF0u) [[unlikely]] return; }
L_00168FF0:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 65u);  goto L_00169004; }
    set32(c.r[6], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_00169004:
    set32(c.r[4], ld32((c.r[17].w[0] + 1216u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 1220u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169014u); set32(c.r[7], 0u + 514u);  if (depth < kMaxDepth) unit_00AD(c, 116u, depth + 1u); else { c.pc = 0x003B5118u; return; } if (c.pc != 0x00169014u) [[unlikely]] return; }
L_00169014:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169020u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00169020u) [[unlikely]] return; }
L_00169020:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169030u); set32(c.r[6], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x00169030u) [[unlikely]] return; }
L_00169030:
    set32(c.r[5], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[5].sd[0] >= 0) { st32((c.r[17].w[0] + 1224u), c.r[5].w[0]);  goto L_0016904C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169044u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_001B(c, 30u, depth + 1u); else { c.pc = 0x0016C340u; return; } if (c.pc != 0x00169044u) [[unlikely]] return; }
L_00169044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001690F8; } }
L_0016904C:
    set32(c.r[3], ld32((c.r[17].w[0] + 1228u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 1048u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_00169070; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169070u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00169070u) [[unlikely]] return; }
L_00169070:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169080u); set32(c.r[5], c.r[5].w[0] + 24400u);  if (depth < kMaxDepth) unit_000B(c, 4u, depth + 1u); else { c.pc = 0x0012C060u; return; } if (c.pc != 0x00169080u) [[unlikely]] return; }
L_00169080:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016908Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 494u, depth + 1u); else { c.pc = 0x0012BFB0u; return; } if (c.pc != 0x0016908Cu) [[unlikely]] return; }
L_0016908C:
    set32(c.r[5], ld32((c.r[17].w[0] + 1212u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016909Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0016909Cu) [[unlikely]] return; }
L_0016909C:
    st32((c.r[17].w[0] + 1048u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001690B4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x001690B4u) [[unlikely]] return; }
L_001690B4:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001690D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001690C4u); set32(c.r[4], ld32((c.r[17].w[0] + 1048u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001690C4u) [[unlikely]] return; }
L_001690C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001690D0u); st32((c.r[17].w[0] + 1048u), 0u);  if (depth < kMaxDepth) unit_000A(c, 487u, depth + 1u); else { c.pc = 0x0012BEC0u; return; } if (c.pc != 0x001690D0u) [[unlikely]] return; }
L_001690D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u - 1u);  if (t) { goto L_001690E0; } }
L_001690D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001690E0u);  if (depth < kMaxDepth) unit_000A(c, 487u, depth + 1u); else { c.pc = 0x0012BEC0u; return; } if (c.pc != 0x001690E0u) [[unlikely]] return; }
L_001690E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 1224u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 1048u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001690F0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 141u, depth + 1u); else { c.pc = 0x003B55E0u; return; } if (c.pc != 0x001690F0u) [[unlikely]] return; }
L_001690F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001690F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001690F8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00169110:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 56u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169138u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_00AD(c, 147u, depth + 1u); else { c.pc = 0x003B5758u; return; } if (c.pc != 0x00169138u) [[unlikely]] return; }
L_00169138:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001691B0; }
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 1224u)));  goto L_0016915C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001691AC; } }
L_0016915C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169164u);  if (depth < kMaxDepth) unit_00AD(c, 124u, depth + 1u); else { c.pc = 0x003B5278u; return; } if (c.pc != 0x00169164u) [[unlikely]] return; }
L_00169164:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169174u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x00169174u) [[unlikely]] return; }
L_00169174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016917Cu); set32(c.r[4], ld32((c.r[17].w[0] + 1048u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0016917Cu) [[unlikely]] return; }
L_0016917C:
    st32((c.r[17].w[0] + 1048u), 0u);
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 4;
    if (c.r[5].sd[0] >= 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0016919C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169194u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_001B(c, 30u, depth + 1u); else { c.pc = 0x0016C340u; return; } if (c.pc != 0x00169194u) [[unlikely]] return; }
L_00169194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001691A4; } }
L_0016919C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001691A4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 131u, depth + 1u); else { c.pc = 0x00168E80u; return; } if (c.pc != 0x001691A4u) [[unlikely]] return; }
L_001691A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001691B4; } }
L_001691AC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001691B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001691B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001691D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 1216u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0] + 1220u), c.r[6].w[0]);
    set32(c.r[7], 0u + 514u);
    st32((c.r[4].w[0] + 1228u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169210u); set32(c.r[6], c.r[6].w[0] + 24403u);  if (depth < kMaxDepth) unit_00AD(c, 116u, depth + 1u); else { c.pc = 0x003B5118u; return; } if (c.pc != 0x00169210u) [[unlikely]] return; }
L_00169210:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169220u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x00169220u) [[unlikely]] return; }
L_00169220:
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[5].sd[0] >= 0) { st32((c.r[17].w[0] + 1224u), c.r[5].w[0]);  goto L_0016923C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169234u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_001B(c, 30u, depth + 1u); else { c.pc = 0x0016C340u; return; } if (c.pc != 0x00169234u) [[unlikely]] return; }
L_00169234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00169264; } }
L_0016923C:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016924Cu); set32(c.r[5], c.r[17].w[0] + 84u);  if (depth < kMaxDepth) unit_001A(c, 99u, depth + 1u); else { c.pc = 0x00168B50u; return; } if (c.pc != 0x0016924Cu) [[unlikely]] return; }
L_0016924C:
    set32(c.r[4], ld32((c.r[17].w[0] + 1224u)));
    set32(c.r[5], c.r[17].w[0] + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016925Cu); set32(c.r[6], 0u + 964u);  if (depth < kMaxDepth) unit_00AD(c, 141u, depth + 1u); else { c.pc = 0x003B55E0u; return; } if (c.pc != 0x0016925Cu) [[unlikely]] return; }
L_0016925C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_00169264:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00169280:
    set32(c.r[29], c.r[29].w[0] - 1280u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[8], 0u + 18u);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 24412u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 64u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001692B8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AD(c, 160u, depth + 1u); else { c.pc = 0x003B5A68u; return; } if (c.pc != 0x001692B8u) [[unlikely]] return; }
L_001692B8:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001692C8u); set32(c.r[6], c.r[29].w[0] + 1276u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x001692C8u) [[unlikely]] return; }
L_001692C8:
    set32(c.r[5], ld32((c.r[29].w[0] + 1276u)));
    c.budget -= 3;
    if (c.r[5].sd[0] >= 0) { c.r[16].d[0] = 0ull + 0ull;  goto L_0016933C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001692DCu); set32(c.r[4], 0u + 13u);  if (depth < kMaxDepth) unit_001B(c, 30u, depth + 1u); else { c.pc = 0x0016C340u; return; } if (c.pc != 0x001692DCu) [[unlikely]] return; }
L_001692DC:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00169354; } }
L_001692E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] + 24403u);
    set32(c.r[3], c.r[2].w[0] + 64u);
    set32(c.r[6], 0u + 32u);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 20u));
    set32(c.r[4], c.r[3].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169310u); c.r[18].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00AE(c, 270u, depth + 1u); else { c.pc = 0x003BA6C0u; return; } if (c.pc != 0x00169310u) [[unlikely]] return; }
L_00169310:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0016933C; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00169338; } }
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00169354; } }
L_00169338:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0016933C:
    set32(c.r[2], ld32((c.r[29].w[0] + 1276u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 6);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001692E8u | kUnwind; return; } goto L_001692E8; }
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00169354:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1280u);  c.pc = t; return; }
L_00169370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 28880u)));  c.pc = t; return; }
L_00169380:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], 0u + 1232u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001693B8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x001693B8u) [[unlikely]] return; }
L_001693B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00169418; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 19760u);
    set32(c.r[6], c.r[6].w[0] - 20128u);
    set32(c.r[7], 0u + 28u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001693E0u); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x001693E0u) [[unlikely]] return; }
L_001693E0:
    st32((c.r[16].w[0] + 1048u), 0u);
    set32(c.r[4], c.r[16].w[0] + 1052u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001693F8u); st32((c.r[16].w[0] + 1212u), c.r[20].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x001693F8u) [[unlikely]] return; }
L_001693F8:
    set32(c.r[4], c.r[16].w[0] + 1116u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169408u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x00169408u) [[unlikely]] return; }
L_00169408:
    set32(c.r[4], c.r[16].w[0] + 1164u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169418u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x00169418u) [[unlikely]] return; }
L_00169418:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169428u); st32((c.r[28].w[0] - 28880u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000A(c, 320u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x00169428u) [[unlikely]] return; }
L_00169428:
    set32(c.r[2], ld32((c.r[28].w[0] - 28880u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169438u); set32(c.r[4], c.r[2].w[0] + 28u);  if (depth < kMaxDepth) unit_000A(c, 320u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x00169438u) [[unlikely]] return; }
L_00169438:
    set32(c.r[2], ld32((c.r[28].w[0] - 28880u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169448u); set32(c.r[4], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_000A(c, 320u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x00169448u) [[unlikely]] return; }
L_00169448:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00169470:
    set32(c.r[29], c.r[29].w[0] - 1248u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 132u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[29].w[0] + 1216u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169490u); set32(c.r[6], c.r[16].w[0] + 100u);  if (depth < kMaxDepth) unit_001A(c, 610u, depth + 1u); else { c.pc = 0x0016BE60u; return; } if (c.pc != 0x00169490u) [[unlikely]] return; }
L_00169490:
    set32(c.r[2], ld32((c.r[29].w[0] + 1216u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 1217u);  goto L_001694A4; }
    set32(c.r[6], ld32((c.r[29].w[0] + 1224u)));
    c.budget -= 1;
L_001694A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[8], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001694BCu); set32(c.r[9], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AD(c, 160u, depth + 1u); else { c.pc = 0x003B5A68u; return; } if (c.pc != 0x001694BCu) [[unlikely]] return; }
L_001694BC:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001694CCu); set32(c.r[6], c.r[29].w[0] + 1244u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x001694CCu) [[unlikely]] return; }
L_001694CC:
    set32(c.r[3], ld32((c.r[29].w[0] + 1244u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001694E8; }
    set32(c.r[2], 0u - 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001695B0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001694E8:
    st8((c.r[16].w[0] + 132u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 1216u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 1217u);  goto L_00169500; }
    set32(c.r[6], ld32((c.r[29].w[0] + 1224u)));
    c.budget -= 1;
L_00169500:
    set32(c.r[5], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016950Cu); set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  if (depth < kMaxDepth) unit_00AD(c, 122u, depth + 1u); else { c.pc = 0x003B5240u; return; } if (c.pc != 0x0016950Cu) [[unlikely]] return; }
L_0016950C:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016951Cu); set32(c.r[6], c.r[29].w[0] + 1244u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x0016951Cu) [[unlikely]] return; }
L_0016951C:
    set32(c.r[3], ld32((c.r[29].w[0] + 1244u)));
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { set32(c.r[2], ld32((c.r[29].w[0] + 1216u)));  goto L_00169638; }
    set32(c.r[2], 0u - 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00169634; } }
    c.r[1].d[0] = c.r[3].sd[0] < -9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 8u);  goto L_00169548; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0016959C; } }
L_00169548:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], 0u + 7u);  goto L_0016959C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 24640u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00168000u < 16384u) { entry = entries_001A[(t - 0x00168000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00169570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0016959C; } }
L_00169578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 5u);  if (t) { goto L_0016959C; } }
L_00169580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_0016959C; } }
L_00169588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 9u);  if (t) { goto L_0016959C; } }
L_00169590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 6u);  if (t) { goto L_0016959C; } }
L_00169598:
    set32(c.r[16], 0u + 7u);
    c.budget -= 1;
L_0016959C:
    set32(c.r[4], c.r[29].w[0] + 1216u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001695A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001695A8u) [[unlikely]] return; }
L_001695A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001696FC; } }
L_001695B0:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00169634; } }
    c.r[1].d[0] = c.r[3].sd[0] < -9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 8u);  goto L_001695CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00169620; } }
L_001695CC:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], 0u + 7u);  goto L_00169620; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 24592u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00168000u < 16384u) { entry = entries_001A[(t - 0x00168000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001695F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00169620; } }
L_001695FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 5u);  if (t) { goto L_00169620; } }
L_00169604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_00169620; } }
L_0016960C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 9u);  if (t) { goto L_00169620; } }
L_00169614:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 6u);  if (t) { goto L_00169620; } }
L_0016961C:
    set32(c.r[16], 0u + 7u);
    c.budget -= 1;
L_00169620:
    set32(c.r[4], c.r[29].w[0] + 1216u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016962Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016962Cu) [[unlikely]] return; }
L_0016962C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001696FC; } }
L_00169634:
    set32(c.r[2], ld32((c.r[29].w[0] + 1216u)));
    c.budget -= 1;
L_00169638:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 1217u);  goto L_00169648; }
    set32(c.r[6], ld32((c.r[29].w[0] + 1224u)));
    c.budget -= 1;
L_00169648:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169658u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 171u, depth + 1u); else { c.pc = 0x003B5C48u; return; } if (c.pc != 0x00169658u) [[unlikely]] return; }
L_00169658:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169668u); set32(c.r[6], c.r[29].w[0] + 1244u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x00169668u) [[unlikely]] return; }
L_00169668:
    set32(c.r[2], ld32((c.r[29].w[0] + 1244u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { set32(c.r[4], c.r[29].w[0] + 1216u);  goto L_001696F0; }
    c.r[1].d[0] = c.r[2].sd[0] < -9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 8u);  goto L_00169688; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001696DC; } }
L_00169688:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], 0u + 7u);  goto L_001696DC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 24544u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00168000u < 16384u) { entry = entries_001A[(t - 0x00168000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001696B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001696DC; } }
L_001696B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 5u);  if (t) { goto L_001696DC; } }
L_001696C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_001696DC; } }
L_001696C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 9u);  if (t) { goto L_001696DC; } }
L_001696D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 6u);  if (t) { goto L_001696DC; } }
L_001696D8:
    set32(c.r[16], 0u + 7u);
    c.budget -= 1;
L_001696DC:
    set32(c.r[4], c.r[29].w[0] + 1216u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001696E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001696E8u) [[unlikely]] return; }
L_001696E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001696FC; } }
L_001696F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001696F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001696F8u) [[unlikely]] return; }
L_001696F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001696FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1248u);  c.pc = t; return; }
L_00169710:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 108u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[6], c.r[29].w[0] + 104u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169738u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x00169738u) [[unlikely]] return; }
L_00169738:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0016988C; }
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_00169774; }
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[6], c.r[28].w[0] - 28852u);
    set32(c.r[5], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[7], c.r[28].w[0] - 28848u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016976Cu); set32(c.r[8], c.r[28].w[0] - 28844u);  if (depth < kMaxDepth) unit_00AD(c, 152u, depth + 1u); else { c.pc = 0x003B5878u; return; } if (c.pc != 0x0016976Cu) [[unlikely]] return; }
L_0016976C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001698A4; } }
L_00169774:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169780u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x00169780u) [[unlikely]] return; }
L_00169780:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[28].w[0] - 28852u)));
    st32((c.r[29].w[0] + 64u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 68u), c.r[4].w[0]);  if (t) { goto L_001697C8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[29].w[0] + 72u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 73u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 28844u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; st8((c.r[29].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001697C8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28848u)));
    st8((c.r[29].w[0] + 75u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st64((c.r[29].w[0] + 80u), c.r[2].d[0]);
    c.budget -= 3;
L_001697C8:
    set32(c.r[4], c.r[29].w[0] + 100u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 96u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001697DCu); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 237u, depth + 1u); else { c.pc = 0x00169930u; return; } if (c.pc != 0x001697DCu) [[unlikely]] return; }
L_001697DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_00169870; } }
L_001697E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001697ECu); set32(c.r[4], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_001A(c, 236u, depth + 1u); else { c.pc = 0x00169920u; return; } if (c.pc != 0x001697ECu) [[unlikely]] return; }
L_001697EC:
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00169808u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00169808u) [[unlikely]] return; }
L_00169808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169810u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001A(c, 235u, depth + 1u); else { c.pc = 0x00169910u; return; } if (c.pc != 0x00169810u) [[unlikely]] return; }
L_00169810:
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001698A0; } }
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169828u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001A(c, 237u, depth + 1u); else { c.pc = 0x00169930u; return; } if (c.pc != 0x00169828u) [[unlikely]] return; }
L_00169828:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169838u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x001698F0u; return; } if (c.pc != 0x00169838u) [[unlikely]] return; }
L_00169838:
    set32(c.r[4], c.r[29].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169844u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001A(c, 233u, depth + 1u); else { c.pc = 0x001698E0u; return; } if (c.pc != 0x00169844u) [[unlikely]] return; }
L_00169844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016984Cu); set32(c.r[4], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_001A(c, 236u, depth + 1u); else { c.pc = 0x00169920u; return; } if (c.pc != 0x0016984Cu) [[unlikely]] return; }
L_0016984C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0016986C; } }
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[5], c.r[29].w[0] + 100u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016986Cu); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_001A(c, 232u, depth + 1u); else { c.pc = 0x001698C0u; return; } if (c.pc != 0x0016986Cu) [[unlikely]] return; }
L_0016986C:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_00169870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169878u);  if (depth < kMaxDepth) unit_001A(c, 235u, depth + 1u); else { c.pc = 0x00169910u; return; } if (c.pc != 0x00169878u) [[unlikely]] return; }
L_00169878:
    c.r[3].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001697E4u | kUnwind; return; } goto L_001697E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001698A0; } }
L_0016988C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001698A0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001698A0u); set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  if (depth < kMaxDepth) unit_00AD(c, 178u, depth + 1u); else { c.pc = 0x003B5D88u; return; } if (c.pc != 0x001698A0u) [[unlikely]] return; }
L_001698A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001698A4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001698C0:
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[6].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[6].w[0]);  c.pc = t; return; }
L_001698E0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_001698F0:
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00169910:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_00169920:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_00169930:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00169940:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 108u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[6], c.r[29].w[0] + 104u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169968u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x00169968u) [[unlikely]] return; }
L_00169968:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00169A90; }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169984u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x00169984u) [[unlikely]] return; }
L_00169984:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[28].w[0] - 28864u)));
    st32((c.r[29].w[0] + 64u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 68u), c.r[4].w[0]);  if (t) { goto L_001699CC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[29].w[0] + 72u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 73u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 28856u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; st8((c.r[29].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001699CC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28860u)));
    st8((c.r[29].w[0] + 75u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st64((c.r[29].w[0] + 80u), c.r[2].d[0]);
    c.budget -= 3;
L_001699CC:
    set32(c.r[4], c.r[29].w[0] + 100u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 96u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001699E0u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 237u, depth + 1u); else { c.pc = 0x00169930u; return; } if (c.pc != 0x001699E0u) [[unlikely]] return; }
L_001699E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_00169A74; } }
L_001699E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001699F0u); set32(c.r[4], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_001A(c, 236u, depth + 1u); else { c.pc = 0x00169920u; return; } if (c.pc != 0x001699F0u) [[unlikely]] return; }
L_001699F0:
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00169A0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00169A0Cu) [[unlikely]] return; }
L_00169A0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169A14u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001A(c, 235u, depth + 1u); else { c.pc = 0x00169910u; return; } if (c.pc != 0x00169A14u) [[unlikely]] return; }
L_00169A14:
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00169AB4; }
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169A2Cu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001A(c, 237u, depth + 1u); else { c.pc = 0x00169930u; return; } if (c.pc != 0x00169A2Cu) [[unlikely]] return; }
L_00169A2C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169A3Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x001698F0u; return; } if (c.pc != 0x00169A3Cu) [[unlikely]] return; }
L_00169A3C:
    set32(c.r[4], c.r[29].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169A48u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001A(c, 233u, depth + 1u); else { c.pc = 0x001698E0u; return; } if (c.pc != 0x00169A48u) [[unlikely]] return; }
L_00169A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169A50u); set32(c.r[4], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_001A(c, 236u, depth + 1u); else { c.pc = 0x00169920u; return; } if (c.pc != 0x00169A50u) [[unlikely]] return; }
L_00169A50:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_00169A70; } }
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[5], c.r[29].w[0] + 100u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169A70u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_001A(c, 232u, depth + 1u); else { c.pc = 0x001698C0u; return; } if (c.pc != 0x00169A70u) [[unlikely]] return; }
L_00169A70:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_00169A74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169A7Cu);  if (depth < kMaxDepth) unit_001A(c, 235u, depth + 1u); else { c.pc = 0x00169910u; return; } if (c.pc != 0x00169A7Cu) [[unlikely]] return; }
L_00169A7C:
    c.r[3].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001699E8u | kUnwind; return; } goto L_001699E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00169AB0; } }
L_00169A90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00169AB0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[6], c.r[28].w[0] - 28864u);
    set32(c.r[5], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[7], c.r[28].w[0] - 28860u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169AB0u); set32(c.r[8], c.r[28].w[0] - 28856u);  if (depth < kMaxDepth) unit_00AD(c, 152u, depth + 1u); else { c.pc = 0x003B5878u; return; } if (c.pc != 0x00169AB0u) [[unlikely]] return; }
L_00169AB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00169AB4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00169AD0:
    set32(c.r[29], c.r[29].w[0] - 1360u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1328u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169B10u); set32(c.r[6], c.r[16].w[0] + 100u);  if (depth < kMaxDepth) unit_001A(c, 601u, depth + 1u); else { c.pc = 0x0016BD20u; return; } if (c.pc != 0x00169B10u) [[unlikely]] return; }
L_00169B10:
    set32(c.r[2], ld32((c.r[29].w[0] + 1328u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 1329u);  goto L_00169B24; }
    set32(c.r[6], ld32((c.r[29].w[0] + 1336u)));
    c.budget -= 1;
L_00169B24:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169B34u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 171u, depth + 1u); else { c.pc = 0x003B5C48u; return; } if (c.pc != 0x00169B34u) [[unlikely]] return; }
L_00169B34:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169B44u); set32(c.r[6], c.r[29].w[0] + 1356u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x00169B44u) [[unlikely]] return; }
L_00169B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169B4Cu); st32((c.r[29].w[0] + 1352u), 0u);  if (depth < kMaxDepth) unit_001A(c, 176u, depth + 1u); else { c.pc = 0x00169370u; return; } if (c.pc != 0x00169B4Cu) [[unlikely]] return; }
L_00169B4C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169B58u); set32(c.r[5], c.r[29].w[0] + 1352u);  if (depth < kMaxDepth) unit_001A(c, 65u, depth + 1u); else { c.pc = 0x001688A0u; return; } if (c.pc != 0x00169B58u) [[unlikely]] return; }
L_00169B58:
    set32(c.r[3], ld32((c.r[29].w[0] + 1356u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 4u);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0])));  goto L_00169D24; }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0])));  goto L_00169CE0; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_00169B88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_00169D64; } }
L_00169B88:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[6], c.r[6].w[0] + 26659u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 18u);
    set32(c.r[9], c.r[29].w[0] + 144u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169BA8u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 160u, depth + 1u); else { c.pc = 0x003B5A68u; return; } if (c.pc != 0x00169BA8u) [[unlikely]] return; }
L_00169BA8:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169BB8u); set32(c.r[6], c.r[29].w[0] + 1348u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x00169BB8u) [[unlikely]] return; }
L_00169BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00169C68; } }
L_00169BC0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[2].w[0] + 144u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 20u));
    set32(c.r[22], c.r[16].w[0] + 32u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169BE4u); c.r[23].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_001A(c, 318u, depth + 1u); else { c.pc = 0x0016A390u; return; } if (c.pc != 0x00169BE4u) [[unlikely]] return; }
L_00169BE4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00169C68; }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_00169C64; } }
    set32(c.r[9], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[23], c.r[16].w[0] + 16u);
    c.r[2].d[0] = c.r[9].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1023ll);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 10);  if (t) { goto L_00169C1C; } }
    c.r[2].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1023ll);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 10);
    c.budget -= 2;
L_00169C1C:
    c.r[8].d[0] = c.r[2].d[0] << 32;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169C3Cu); set32(c.r[6], c.r[6].w[0] + 26661u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00169C3Cu) [[unlikely]] return; }
L_00169C3C:
    c.r[2].d[0] = ld32((c.r[23].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1023ll);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 10);  if (t) { goto L_00169C58; } }
    c.r[2].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1023ll);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 10);
    c.budget -= 2;
L_00169C58:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_00169C64:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00169C68:
    set32(c.r[2], ld32((c.r[29].w[0] + 1348u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 6);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00169BC0u | kUnwind; return; } goto L_00169BC0; }
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00169C8C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00169C8C:
    set32(c.r[3], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 2u);  if (t) { goto L_00169CA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[21].w[0] + 8u)));  if (t) { goto L_00169CAC; } }
L_00169CA8:
    set32(c.r[7], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_00169CAC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 26743u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169CC8u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00169CC8u) [[unlikely]] return; }
L_00169CC8:
    set32(c.r[4], c.r[29].w[0] + 1328u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169CD8u); st32((c.r[20].w[0]), 0u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00169CD8u) [[unlikely]] return; }
L_00169CD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00169D78; } }
L_00169CE0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[21].w[0] + 1u);  goto L_00169CF0; }
    set32(c.r[7], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_00169CF0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 26811u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169D08u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00169D08u) [[unlikely]] return; }
L_00169D08:
    set32(c.r[2], 0u + 5u);
    set32(c.r[4], c.r[29].w[0] + 1328u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169D1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00169D1Cu) [[unlikely]] return; }
L_00169D1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00169D78; } }
L_00169D24:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[21].w[0] + 1u);  goto L_00169D34; }
    set32(c.r[7], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_00169D34:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 26872u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169D4Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00169D4Cu) [[unlikely]] return; }
L_00169D4C:
    set32(c.r[4], c.r[29].w[0] + 1328u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169D5Cu); st32((c.r[20].w[0]), 0u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00169D5Cu) [[unlikely]] return; }
L_00169D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00169D78; } }
L_00169D64:
    set32(c.r[4], c.r[29].w[0] + 1328u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169D74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00169D74u) [[unlikely]] return; }
L_00169D74:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00169D78:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1360u);  c.pc = t; return; }
L_00169DB0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 220u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169DF0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000A(c, 395u, depth + 1u); else { c.pc = 0x0012B2D0u; return; } if (c.pc != 0x00169DF0u) [[unlikely]] return; }
L_00169DF0:
    set32(c.r[2], 0u - 2u);
    set32(c.r[3], 0u - 1u);
    st8((c.r[29].w[0] + 216u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 26932u);
    st64((c.r[29].w[0] + 248u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 256u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 264u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 272u), c.r[2].d[0]);
    st32((c.r[29].w[0] + 280u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 116u)));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 120u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169E38u); st32((c.r[29].w[0] + 212u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 391u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x00169E38u) [[unlikely]] return; }
L_00169E38:
    set32(c.r[4], c.r[29].w[0] + 220u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169E44u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000A(c, 320u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x00169E44u) [[unlikely]] return; }
L_00169E44:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169E50u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x00169E50u) [[unlikely]] return; }
L_00169E50:
    st64((c.r[29].w[0] + 256u), 0ull);
    st64((c.r[29].w[0] + 264u), 0ull);
    st64((c.r[29].w[0] + 248u), 0ull);
    c.budget -= 5;
    { const bool t = c.r[22].d[0] != 0ull; st32((c.r[29].w[0] + 280u), 0u);  if (t) { goto L_00169E74; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169E74u); set32(c.r[6], c.r[29].w[0] + 316u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x00169E74u) [[unlikely]] return; }
L_00169E74:
    st64((c.r[29].w[0] + 264u), 0ull);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00169F08; } }
L_00169E88:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169E94u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_001A(c, 323u, depth + 1u); else { c.pc = 0x0016A470u; return; } if (c.pc != 0x00169E94u) [[unlikely]] return; }
L_00169E94:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_00169EFC; } }
    c.r[5].d[0] = c.r[16].d[0] << 32;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169EACu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00169EACu) [[unlikely]] return; }
L_00169EAC:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169EC0u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_001A(c, 305u, depth + 1u); else { c.pc = 0x0016A220u; return; } if (c.pc != 0x00169EC0u) [[unlikely]] return; }
L_00169EC0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169ED0u); set32(c.r[6], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_001A(c, 253u, depth + 1u); else { c.pc = 0x00169AD0u; return; } if (c.pc != 0x00169ED0u) [[unlikely]] return; }
L_00169ED0:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169EE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 118u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x00169EE0u) [[unlikely]] return; }
L_00169EE0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169EECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00169EECu) [[unlikely]] return; }
L_00169EEC:
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[19].w[0] + 96u), 0u);  goto L_00169F38; }
    set32(c.r[21], c.r[21].w[0] + c.r[23].w[0]);
    c.budget -= 1;
L_00169EFC:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], c.r[2].w[0] + 32u);
    c.budget -= 3;
L_00169F08:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00169E88u | kUnwind; return; } goto L_00169E88; }
    st32((c.r[19].w[0] + 96u), 0u);
    c.budget -= 1;
L_00169F38:
    set32(c.r[6], c.r[29].w[0] + 304u);
    set32(c.r[4], ld32((c.r[19].w[0] + 116u)));
    set32(c.r[7], c.r[29].w[0] + 300u);
    set32(c.r[5], ld32((c.r[19].w[0] + 120u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169F50u); set32(c.r[8], c.r[29].w[0] + 308u);  if (depth < kMaxDepth) unit_00AD(c, 152u, depth + 1u); else { c.pc = 0x003B5878u; return; } if (c.pc != 0x00169F50u) [[unlikely]] return; }
L_00169F50:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169F60u); set32(c.r[6], c.r[29].w[0] + 316u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x00169F60u) [[unlikely]] return; }
L_00169F60:
    set32(c.r[2], ld32((c.r[29].w[0] + 316u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[29].w[0] + 308u)));  goto L_00169FDC; }
    c.r[1].d[0] = c.r[2].sd[0] < -9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 8u);  goto L_00169F80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00169FD4; } }
L_00169F80:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 7u);  goto L_00169FD4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 24688u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00168000u < 16384u) { entry = entries_001A[(t - 0x00168000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00169FA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00169FD4; } }
L_00169FB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_00169FD4; } }
L_00169FB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00169FD4; } }
L_00169FC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_00169FD4; } }
L_00169FC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_00169FD4; } }
L_00169FD0:
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_00169FD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 280u), c.r[2].w[0]);  if (t) { goto L_00169FEC; } }
L_00169FDC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 280u)));  goto L_00169FF0; }
    set32(c.r[2], 0u + 5u);
    st32((c.r[29].w[0] + 280u), c.r[2].w[0]);
    c.budget -= 2;
L_00169FEC:
    set32(c.r[3], ld32((c.r[29].w[0] + 280u)));
    c.budget -= 1;
L_00169FF0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0016A008; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] << 32;  goto L_0016A00C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016A008:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.budget -= 1;
L_0016A00C:
    c.r[3].d[0] = c.r[21].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st64((c.r[29].w[0] + 264u), c.r[2].d[0]);
    c.r[2].d[0] = c.r[2].d[0] - c.r[3].d[0];
    st64((c.r[29].w[0] + 256u), c.r[3].d[0]);
    st8((c.r[29].w[0] + 216u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st64((c.r[29].w[0] + 248u), c.r[2].d[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 300u)));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 216u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 272u), c.r[3].d[0]);  if (t) { goto L_0016A048; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 26982u);  if (t) { goto L_0016A050; } }
L_0016A048:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[7].w[0] + 26987u);
    c.budget -= 2;
L_0016A050:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A064u); set32(c.r[6], c.r[6].w[0] + 26933u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0016A064u) [[unlikely]] return; }
L_0016A064:
    c.r[7].d[0] = ld64((c.r[29].w[0] + 264u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A07Cu); set32(c.r[6], c.r[6].w[0] + 26993u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0016A07Cu) [[unlikely]] return; }
L_0016A07C:
    c.r[7].d[0] = ld64((c.r[29].w[0] + 256u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A094u); set32(c.r[6], c.r[6].w[0] + 27015u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0016A094u) [[unlikely]] return; }
L_0016A094:
    c.r[7].d[0] = ld64((c.r[29].w[0] + 248u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A0ACu); set32(c.r[6], c.r[6].w[0] + 27037u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0016A0ACu) [[unlikely]] return; }
L_0016A0AC:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 264u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(4ll);  goto L_0016A0C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0016A0D0; } }
L_0016A0C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A0C8u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00AB(c, 486u, depth + 1u); else { c.pc = 0x003AFC20u; return; } if (c.pc != 0x0016A0C8u) [[unlikely]] return; }
L_0016A0C8:
    c.r[3].d[0] = c.r[2].d[0] << 2;
    c.r[7].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.budget -= 2;
L_0016A0D0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 264u), c.r[7].d[0]);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A0E8u); set32(c.r[6], c.r[6].w[0] + 27059u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0016A0E8u) [[unlikely]] return; }
L_0016A0E8:
    c.r[7].d[0] = ld64((c.r[29].w[0] + 248u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A100u); set32(c.r[6], c.r[6].w[0] + 27081u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0016A100u) [[unlikely]] return; }
L_0016A100:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[4], c.r[20].w[0] + 12u);
    set32(c.r[5], c.r[29].w[0] + 220u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 216u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A124u); st8((c.r[20].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000A(c, 387u, depth + 1u); else { c.pc = 0x0012B1E0u; return; } if (c.pc != 0x0016A124u) [[unlikely]] return; }
L_0016A124:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 248u));
    set32(c.r[4], c.r[29].w[0] + 220u);
    set32(c.r[5], 0u - 1u);
    st64((c.r[20].w[0] + 40u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 256u));
    st64((c.r[20].w[0] + 48u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 264u));
    st64((c.r[20].w[0] + 56u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 272u));
    st64((c.r[20].w[0] + 64u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A158u); st32((c.r[20].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0016A158u) [[unlikely]] return; }
L_0016A158:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[2].d[0] = 0ull + 0ull;
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
L_0016A190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016A1FC; } }
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016A1D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016A1D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016A1D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A1D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 118u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x0016A1D0u) [[unlikely]] return; }
L_0016A1D0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0016A1E8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A1E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016A1E4u) [[unlikely]] return; }
L_0016A1E4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0016A1E8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0016A200; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A1FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0016A1FCu) [[unlikely]] return; }
L_0016A1FC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0016A200:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016A220:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A23Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0016A23Cu) [[unlikely]] return; }
L_0016A23C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0016A254; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A250u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0016A250u) [[unlikely]] return; }
L_0016A250:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0016A254:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 12u)));  goto L_0016A268; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A264u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0016A264u) [[unlikely]] return; }
L_0016A264:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_0016A268:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 48u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[2], c.r[2].w[0] << 3);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A298u); set32(c.r[6], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 37u, depth + 1u); else { c.pc = 0x0016C3B0u; return; } if (c.pc != 0x0016A298u) [[unlikely]] return; }
L_0016A298:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016A2B0:
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 10;
    { set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  [[clang::musttail]] return unit_001B(c, 42u, depth); }
L_0016A2E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A2F8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0016A2F8u) [[unlikely]] return; }
L_0016A2F8:
    set32(c.r[16], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A304u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0016A304u) [[unlikely]] return; }
L_0016A304:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0016A31C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A318u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0016A318u) [[unlikely]] return; }
L_0016A318:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0016A31C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_0016A330; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A32Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0016A32Cu) [[unlikely]] return; }
L_0016A32C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0016A330:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016A360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A374u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 387u, depth + 1u); else { c.pc = 0x0012B1E0u; return; } if (c.pc != 0x0016A374u) [[unlikely]] return; }
L_0016A374:
    st64((c.r[16].w[0] + 32u), 0ull);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016A390:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016A410; } }
L_0016A3B8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A3C4u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0004(c, 343u, depth + 1u); else { c.pc = 0x00113B00u; return; } if (c.pc != 0x0016A3C4u) [[unlikely]] return; }
L_0016A3C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 81u);  goto L_0016A3D8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0016A3D8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A3E4u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_00AE(c, 259u, depth + 1u); else { c.pc = 0x003BA438u; return; } if (c.pc != 0x0016A3E4u) [[unlikely]] return; }
L_0016A3E4:
    c.r[19].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A3F8u); c.r[19].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016A3F8u) [[unlikely]] return; }
L_0016A3F8:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_0016A408; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016A448; } }
L_0016A408:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] + 40u);
    c.budget -= 2;
L_0016A410:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 13;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016A3B8u | kUnwind; return; } goto L_0016A3B8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016A448:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0016A470:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 108u), 0u);
    set32(c.r[18], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0016A524; } }
L_0016A49C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 32u));
    c.r[3].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1023ll);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 10);  if (t) { goto L_0016A4B8; } }
    c.r[2].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1023ll);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 10);
    c.budget -= 2;
L_0016A4B8:
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.r[19].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A4D0u); c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);  if (depth < kMaxDepth) unit_0004(c, 343u, depth + 1u); else { c.pc = 0x00113B00u; return; } if (c.pc != 0x0016A4D0u) [[unlikely]] return; }
L_0016A4D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[29].w[0] + 81u);  goto L_0016A4E4; }
    set32(c.r[7], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0016A4E4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 27109u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A4FCu); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0016A4FCu) [[unlikely]] return; }
L_0016A4FC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A508u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016A508u) [[unlikely]] return; }
L_0016A508:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], c.r[16].w[0] + c.r[19].w[0]);
    set32(c.r[18], c.r[2].w[0] + 40u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 7;
L_0016A524:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 13;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016A49Cu | kUnwind; return; } goto L_0016A49C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A560u);  if (depth < kMaxDepth) unit_001A(c, 176u, depth + 1u); else { c.pc = 0x00169370u; return; } if (c.pc != 0x0016A560u) [[unlikely]] return; }
L_0016A560:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A56Cu); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_001A(c, 65u, depth + 1u); else { c.pc = 0x001688A0u; return; } if (c.pc != 0x0016A56Cu) [[unlikely]] return; }
L_0016A56C:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_0016A584; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0016A584:
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[4].w[0] + 2u);
    set32(c.r[18], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[17].w[0] + 1u);  goto L_0016A5A4; }
    set32(c.r[7], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_0016A5A4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 27145u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A5C0u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0016A5C0u) [[unlikely]] return; }
L_0016A5C0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0016A5E0:
    set32(c.r[29], c.r[29].w[0] - 1280u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A608u); set32(c.r[4], c.r[29].w[0] + 1216u);  if (depth < kMaxDepth) unit_0013(c, 75u, depth + 1u); else { c.pc = 0x0014C8C0u; return; } if (c.pc != 0x0016A608u) [[unlikely]] return; }
L_0016A608:
    set32(c.r[4], c.r[29].w[0] + 1248u);
    set32(c.r[5], c.r[29].w[0] + 1216u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A618u); set32(c.r[6], c.r[16].w[0] + 100u);  if (depth < kMaxDepth) unit_001A(c, 601u, depth + 1u); else { c.pc = 0x0016BD20u; return; } if (c.pc != 0x0016A618u) [[unlikely]] return; }
L_0016A618:
    set32(c.r[4], c.r[29].w[0] + 1216u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A624u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016A624u) [[unlikely]] return; }
L_0016A624:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A630u); set32(c.r[4], c.r[29].w[0] + 1232u);  if (depth < kMaxDepth) unit_001A(c, 597u, depth + 1u); else { c.pc = 0x0016BCC0u; return; } if (c.pc != 0x0016A630u) [[unlikely]] return; }
L_0016A630:
    set32(c.r[2], ld32((c.r[29].w[0] + 1248u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 1249u);  goto L_0016A644; }
    set32(c.r[6], ld32((c.r[29].w[0] + 1256u)));
    c.budget -= 1;
L_0016A644:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A654u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 171u, depth + 1u); else { c.pc = 0x003B5C48u; return; } if (c.pc != 0x0016A654u) [[unlikely]] return; }
L_0016A654:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A664u); set32(c.r[6], c.r[29].w[0] + 1276u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x0016A664u) [[unlikely]] return; }
L_0016A664:
    set32(c.r[3], ld32((c.r[29].w[0] + 1276u)));
    set32(c.r[2], 0u - 4u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0016A7AC; }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0016A774; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_0016A690; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_0016A7E0; } }
L_0016A690:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], c.r[6].w[0] + 26659u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 18u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A6ACu); set32(c.r[9], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00AD(c, 160u, depth + 1u); else { c.pc = 0x003B5A68u; return; } if (c.pc != 0x0016A6ACu) [[unlikely]] return; }
L_0016A6AC:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A6BCu); set32(c.r[6], c.r[29].w[0] + 1272u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x0016A6BCu) [[unlikely]] return; }
L_0016A6BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0016A740; } }
L_0016A6C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 1232u)));
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[3].w[0] + 64u);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_0016A6F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 1240u)));  if (t) { goto L_0016A6F4; } }
L_0016A6F0:
    set32(c.r[5], c.r[29].w[0] + 1233u);
    c.budget -= 1;
L_0016A6F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A6FCu); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_00AE(c, 270u, depth + 1u); else { c.pc = 0x003BA6C0u; return; } if (c.pc != 0x0016A6FCu) [[unlikely]] return; }
L_0016A6FC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0016A740; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0016A73C; } }
    set32(c.r[4], c.r[29].w[0] + 1232u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A728u); st32((c.r[18].w[0]), 0u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016A728u) [[unlikely]] return; }
L_0016A728:
    set32(c.r[4], c.r[29].w[0] + 1248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A734u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016A734u) [[unlikely]] return; }
L_0016A734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016A800; } }
L_0016A73C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0016A740:
    set32(c.r[2], ld32((c.r[29].w[0] + 1272u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 6);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016A6C4u | kUnwind; return; } goto L_0016A6C4; }
    set32(c.r[4], c.r[29].w[0] + 1232u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A760u); st32((c.r[18].w[0]), 0u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016A760u) [[unlikely]] return; }
L_0016A760:
    set32(c.r[4], c.r[29].w[0] + 1248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A76Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016A76Cu) [[unlikely]] return; }
L_0016A76C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016A800; } }
L_0016A774:
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A784u); set32(c.r[6], c.r[6].w[0] + 27211u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0016A784u) [[unlikely]] return; }
L_0016A784:
    set32(c.r[2], 0u + 5u);
    set32(c.r[4], c.r[29].w[0] + 1232u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A798u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016A798u) [[unlikely]] return; }
L_0016A798:
    set32(c.r[4], c.r[29].w[0] + 1248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A7A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016A7A4u) [[unlikely]] return; }
L_0016A7A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016A800; } }
L_0016A7AC:
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A7BCu); set32(c.r[6], c.r[6].w[0] + 27231u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0016A7BCu) [[unlikely]] return; }
L_0016A7BC:
    set32(c.r[4], c.r[29].w[0] + 1232u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A7CCu); st32((c.r[18].w[0]), 0u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016A7CCu) [[unlikely]] return; }
L_0016A7CC:
    set32(c.r[4], c.r[29].w[0] + 1248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A7D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016A7D8u) [[unlikely]] return; }
L_0016A7D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016A800; } }
L_0016A7E0:
    set32(c.r[4], c.r[29].w[0] + 1232u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A7F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016A7F0u) [[unlikely]] return; }
L_0016A7F0:
    set32(c.r[4], c.r[29].w[0] + 1248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A7FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016A7FCu) [[unlikely]] return; }
L_0016A7FC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016A800:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1280u);  c.pc = t; return; }
L_0016A820:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0016A85C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A850u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x0016A850u) [[unlikely]] return; }
L_0016A850:
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
L_0016A85C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016A870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0016A8AC; }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A8A0u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x0016A8A0u) [[unlikely]] return; }
L_0016A8A0:
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
L_0016A8AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016A8C0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 156u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[6], c.r[29].w[0] + 152u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A8ECu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x0016A8ECu) [[unlikely]] return; }
L_0016A8EC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  goto L_0016AA10; }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A90Cu); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0016A90Cu) [[unlikely]] return; }
L_0016A90C:
    set32(c.r[4], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[28].w[0] - 28876u)));
    st32((c.r[29].w[0] + 80u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 120u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 84u), c.r[4].w[0]);  if (t) { goto L_0016A954; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[29].w[0] + 88u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 89u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 28868u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; st8((c.r[29].w[0] + 90u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0016A954; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28872u)));
    st8((c.r[29].w[0] + 91u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    c.budget -= 3;
L_0016A954:
    set32(c.r[4], c.r[29].w[0] + 148u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A964u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 237u, depth + 1u); else { c.pc = 0x00169930u; return; } if (c.pc != 0x0016A964u) [[unlikely]] return; }
L_0016A964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[18].w[0] + 32u);  if (t) { goto L_0016A9F8; } }
L_0016A96C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A974u); set32(c.r[4], c.r[29].w[0] + 148u);  if (depth < kMaxDepth) unit_001A(c, 236u, depth + 1u); else { c.pc = 0x00169920u; return; } if (c.pc != 0x0016A974u) [[unlikely]] return; }
L_0016A974:
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[18].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A990u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016A990u) [[unlikely]] return; }
L_0016A990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A998u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_001A(c, 235u, depth + 1u); else { c.pc = 0x00169910u; return; } if (c.pc != 0x0016A998u) [[unlikely]] return; }
L_0016A998:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016AA0C; } }
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A9B0u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_001A(c, 237u, depth + 1u); else { c.pc = 0x00169930u; return; } if (c.pc != 0x0016A9B0u) [[unlikely]] return; }
L_0016A9B0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A9C0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x001698F0u; return; } if (c.pc != 0x0016A9C0u) [[unlikely]] return; }
L_0016A9C0:
    set32(c.r[4], c.r[29].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A9CCu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001A(c, 233u, depth + 1u); else { c.pc = 0x001698E0u; return; } if (c.pc != 0x0016A9CCu) [[unlikely]] return; }
L_0016A9CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A9D4u); set32(c.r[4], c.r[29].w[0] + 148u);  if (depth < kMaxDepth) unit_001A(c, 236u, depth + 1u); else { c.pc = 0x00169920u; return; } if (c.pc != 0x0016A9D4u) [[unlikely]] return; }
L_0016A9D4:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_0016A9F4; } }
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[5], c.r[29].w[0] + 148u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A9F4u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_001A(c, 232u, depth + 1u); else { c.pc = 0x001698C0u; return; } if (c.pc != 0x0016A9F4u) [[unlikely]] return; }
L_0016A9F4:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 1;
L_0016A9F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AA00u);  if (depth < kMaxDepth) unit_001A(c, 235u, depth + 1u); else { c.pc = 0x00169910u; return; } if (c.pc != 0x0016AA00u) [[unlikely]] return; }
L_0016AA00:
    c.r[3].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016A96Cu | kUnwind; return; } goto L_0016A96C; } }
L_0016AA0C:
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 1;
L_0016AA10:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_0016AB80; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0016AB7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AA2Cu); set32(c.r[4], ld32((c.r[18].w[0] + 116u)));  if (depth < kMaxDepth) unit_00AD(c, 111u, depth + 1u); else { c.pc = 0x003B5058u; return; } if (c.pc != 0x0016AA2Cu) [[unlikely]] return; }
L_0016AA2C:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 4u);  goto L_0016AA54; }
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[3].w[0] + 152u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 152u));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 4ull;  goto L_0016AA78; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_0016AA54:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 116u)));  goto L_0016AB68; }
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[3].w[0] + 152u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 152u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016AB64; } }
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.budget -= 1;
L_0016AA78:
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AA90u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0016AA90u) [[unlikely]] return; }
L_0016AA90:
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 132u);
    set32(c.r[5], c.r[18].w[0] + 48u);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 152u));
    st8((c.r[29].w[0] + 108u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AABCu); st32((c.r[29].w[0] + 112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001A(c, 392u, depth + 1u); else { c.pc = 0x0016AC30u; return; } if (c.pc != 0x0016AABCu) [[unlikely]] return; }
L_0016AABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[18].w[0] + 48u);  if (t) { goto L_0016AB50; } }
L_0016AAC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AACCu); set32(c.r[4], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_001A(c, 391u, depth + 1u); else { c.pc = 0x0016AC20u; return; } if (c.pc != 0x0016AACCu) [[unlikely]] return; }
L_0016AACC:
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[18].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 104u);
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AAE8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016AAE8u) [[unlikely]] return; }
L_0016AAE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AAF0u); set32(c.r[4], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_001A(c, 390u, depth + 1u); else { c.pc = 0x0016AC10u; return; } if (c.pc != 0x0016AAF0u) [[unlikely]] return; }
L_0016AAF0:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016AB64; } }
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AB08u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_001A(c, 392u, depth + 1u); else { c.pc = 0x0016AC30u; return; } if (c.pc != 0x0016AB08u) [[unlikely]] return; }
L_0016AB08:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AB18u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 389u, depth + 1u); else { c.pc = 0x0016ABF0u; return; } if (c.pc != 0x0016AB18u) [[unlikely]] return; }
L_0016AB18:
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AB24u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001A(c, 388u, depth + 1u); else { c.pc = 0x0016ABE0u; return; } if (c.pc != 0x0016AB24u) [[unlikely]] return; }
L_0016AB24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AB2Cu); set32(c.r[4], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_001A(c, 391u, depth + 1u); else { c.pc = 0x0016AC20u; return; } if (c.pc != 0x0016AB2Cu) [[unlikely]] return; }
L_0016AB2C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_0016AB4C; } }
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[5], c.r[29].w[0] + 132u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AB4Cu); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_001A(c, 387u, depth + 1u); else { c.pc = 0x0016ABC0u; return; } if (c.pc != 0x0016AB4Cu) [[unlikely]] return; }
L_0016AB4C:
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 1;
L_0016AB50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AB58u);  if (depth < kMaxDepth) unit_001A(c, 390u, depth + 1u); else { c.pc = 0x0016AC10u; return; } if (c.pc != 0x0016AB58u) [[unlikely]] return; }
L_0016AB58:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016AAC4u | kUnwind; return; } goto L_0016AAC4; } }
L_0016AB64:
    set32(c.r[4], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 1;
L_0016AB68:
    set32(c.r[6], c.r[28].w[0] - 28876u);
    set32(c.r[5], ld32((c.r[18].w[0] + 120u)));
    set32(c.r[7], c.r[28].w[0] - 28872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AB7Cu); set32(c.r[8], c.r[28].w[0] - 28868u);  if (depth < kMaxDepth) unit_00AD(c, 152u, depth + 1u); else { c.pc = 0x003B5878u; return; } if (c.pc != 0x0016AB7Cu) [[unlikely]] return; }
L_0016AB7C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0016AB80:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0016ABA4; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AB9Cu); set32(c.r[6], c.r[6].w[0] + 27256u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0016AB9Cu) [[unlikely]] return; }
L_0016AB9C:
    st32((c.r[18].w[0] + 96u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_0016ABA4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0016ABC0:
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[6].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[6].w[0]);  c.pc = t; return; }
L_0016ABE0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0016ABF0:
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0016AC10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_0016AC20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_0016AC30:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0016AC40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 116u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 120u)));
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 124u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AC84u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_001A(c, 54u, depth + 1u); else { c.pc = 0x00168640u; return; } if (c.pc != 0x0016AC84u) [[unlikely]] return; }
L_0016AC84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0016AD18; } }
L_0016AC8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AC94u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_001A(c, 53u, depth + 1u); else { c.pc = 0x00168630u; return; } if (c.pc != 0x0016AC94u) [[unlikely]] return; }
L_0016AC94:
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ACB0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016ACB0u) [[unlikely]] return; }
L_0016ACB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ACB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 52u, depth + 1u); else { c.pc = 0x00168620u; return; } if (c.pc != 0x0016ACB8u) [[unlikely]] return; }
L_0016ACB8:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0016AD30; }
    set32(c.r[4], c.r[29].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ACD0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 54u, depth + 1u); else { c.pc = 0x00168640u; return; } if (c.pc != 0x0016ACD0u) [[unlikely]] return; }
L_0016ACD0:
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[5], c.r[29].w[0] + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ACE0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 51u, depth + 1u); else { c.pc = 0x00168600u; return; } if (c.pc != 0x0016ACE0u) [[unlikely]] return; }
L_0016ACE0:
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ACECu); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_001A(c, 50u, depth + 1u); else { c.pc = 0x001685F0u; return; } if (c.pc != 0x0016ACECu) [[unlikely]] return; }
L_0016ACEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ACF4u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_001A(c, 53u, depth + 1u); else { c.pc = 0x00168630u; return; } if (c.pc != 0x0016ACF4u) [[unlikely]] return; }
L_0016ACF4:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0016AD14; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AD14u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_001A(c, 49u, depth + 1u); else { c.pc = 0x001685D0u; return; } if (c.pc != 0x0016AD14u) [[unlikely]] return; }
L_0016AD14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0016AD18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AD20u);  if (depth < kMaxDepth) unit_001A(c, 52u, depth + 1u); else { c.pc = 0x00168620u; return; } if (c.pc != 0x0016AD20u) [[unlikely]] return; }
L_0016AD20:
    c.r[3].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016AC8Cu | kUnwind; return; } goto L_0016AC8C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0016AD30:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0016AD50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 116u)));
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 120u)));
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 124u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AD94u); set32(c.r[4], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_001A(c, 48u, depth + 1u); else { c.pc = 0x001685C0u; return; } if (c.pc != 0x0016AD94u) [[unlikely]] return; }
L_0016AD94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 16u);  if (t) { goto L_0016AE28; } }
L_0016AD9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ADA4u); set32(c.r[4], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_001A(c, 47u, depth + 1u); else { c.pc = 0x001685B0u; return; } if (c.pc != 0x0016ADA4u) [[unlikely]] return; }
L_0016ADA4:
    set32(c.r[18], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ADC0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016ADC0u) [[unlikely]] return; }
L_0016ADC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ADC8u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_001A(c, 46u, depth + 1u); else { c.pc = 0x001685A0u; return; } if (c.pc != 0x0016ADC8u) [[unlikely]] return; }
L_0016ADC8:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0016AE40; }
    set32(c.r[4], c.r[29].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ADE0u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_001A(c, 48u, depth + 1u); else { c.pc = 0x001685C0u; return; } if (c.pc != 0x0016ADE0u) [[unlikely]] return; }
L_0016ADE0:
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[29].w[0] + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ADF0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 45u, depth + 1u); else { c.pc = 0x00168580u; return; } if (c.pc != 0x0016ADF0u) [[unlikely]] return; }
L_0016ADF0:
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ADFCu); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_001A(c, 44u, depth + 1u); else { c.pc = 0x00168570u; return; } if (c.pc != 0x0016ADFCu) [[unlikely]] return; }
L_0016ADFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AE04u); set32(c.r[4], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_001A(c, 47u, depth + 1u); else { c.pc = 0x001685B0u; return; } if (c.pc != 0x0016AE04u) [[unlikely]] return; }
L_0016AE04:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0016AE24; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 108u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AE24u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_001A(c, 43u, depth + 1u); else { c.pc = 0x00168550u; return; } if (c.pc != 0x0016AE24u) [[unlikely]] return; }
L_0016AE24:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_0016AE28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AE30u);  if (depth < kMaxDepth) unit_001A(c, 46u, depth + 1u); else { c.pc = 0x001685A0u; return; } if (c.pc != 0x0016AE30u) [[unlikely]] return; }
L_0016AE30:
    c.r[3].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016AD9Cu | kUnwind; return; } goto L_0016AD9C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0016AE40:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0016AE60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 116u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 120u)));
    st32((c.r[29].w[0] + 72u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 16u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 124u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AEA8u); set32(c.r[4], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_001A(c, 48u, depth + 1u); else { c.pc = 0x001685C0u; return; } if (c.pc != 0x0016AEA8u) [[unlikely]] return; }
L_0016AEA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 16u);  if (t) { goto L_0016AF3C; } }
L_0016AEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AEB8u); set32(c.r[4], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_001A(c, 47u, depth + 1u); else { c.pc = 0x001685B0u; return; } if (c.pc != 0x0016AEB8u) [[unlikely]] return; }
L_0016AEB8:
    set32(c.r[18], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AED4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016AED4u) [[unlikely]] return; }
L_0016AED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AEDCu); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_001A(c, 46u, depth + 1u); else { c.pc = 0x001685A0u; return; } if (c.pc != 0x0016AEDCu) [[unlikely]] return; }
L_0016AEDC:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0016AF54; }
    set32(c.r[4], c.r[29].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AEF4u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_001A(c, 48u, depth + 1u); else { c.pc = 0x001685C0u; return; } if (c.pc != 0x0016AEF4u) [[unlikely]] return; }
L_0016AEF4:
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[29].w[0] + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AF04u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 45u, depth + 1u); else { c.pc = 0x00168580u; return; } if (c.pc != 0x0016AF04u) [[unlikely]] return; }
L_0016AF04:
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AF10u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_001A(c, 44u, depth + 1u); else { c.pc = 0x00168570u; return; } if (c.pc != 0x0016AF10u) [[unlikely]] return; }
L_0016AF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AF18u); set32(c.r[4], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_001A(c, 47u, depth + 1u); else { c.pc = 0x001685B0u; return; } if (c.pc != 0x0016AF18u) [[unlikely]] return; }
L_0016AF18:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0016AF38; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 108u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AF38u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_001A(c, 43u, depth + 1u); else { c.pc = 0x00168550u; return; } if (c.pc != 0x0016AF38u) [[unlikely]] return; }
L_0016AF38:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_0016AF3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AF44u);  if (depth < kMaxDepth) unit_001A(c, 46u, depth + 1u); else { c.pc = 0x001685A0u; return; } if (c.pc != 0x0016AF44u) [[unlikely]] return; }
L_0016AF44:
    c.r[3].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016AEB0u | kUnwind; return; } goto L_0016AEB0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0016AF54:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0016AF70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 116u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 120u)));
    st32((c.r[29].w[0] + 72u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 124u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AFB4u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_001A(c, 54u, depth + 1u); else { c.pc = 0x00168640u; return; } if (c.pc != 0x0016AFB4u) [[unlikely]] return; }
L_0016AFB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0016B048; } }
L_0016AFBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AFC4u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_001A(c, 53u, depth + 1u); else { c.pc = 0x00168630u; return; } if (c.pc != 0x0016AFC4u) [[unlikely]] return; }
L_0016AFC4:
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AFE0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016AFE0u) [[unlikely]] return; }
L_0016AFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AFE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 52u, depth + 1u); else { c.pc = 0x00168620u; return; } if (c.pc != 0x0016AFE8u) [[unlikely]] return; }
L_0016AFE8:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0016B060; }
    set32(c.r[4], c.r[29].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B000u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 54u, depth + 1u); else { c.pc = 0x00168640u; return; } if (c.pc != 0x0016B000u) [[unlikely]] return; }
L_0016B000:
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[5], c.r[29].w[0] + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B010u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 51u, depth + 1u); else { c.pc = 0x00168600u; return; } if (c.pc != 0x0016B010u) [[unlikely]] return; }
L_0016B010:
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B01Cu); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_001A(c, 50u, depth + 1u); else { c.pc = 0x001685F0u; return; } if (c.pc != 0x0016B01Cu) [[unlikely]] return; }
L_0016B01C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B024u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_001A(c, 53u, depth + 1u); else { c.pc = 0x00168630u; return; } if (c.pc != 0x0016B024u) [[unlikely]] return; }
L_0016B024:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0016B044; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0016B03C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B044u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_001A(c, 49u, depth + 1u); else { c.pc = 0x001685D0u; return; } if (c.pc != 0x0016B044u) [[unlikely]] return; }
    goto L_0016B044;
L_0016B040:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0016B044:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0016B048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B050u);  if (depth < kMaxDepth) unit_001A(c, 52u, depth + 1u); else { c.pc = 0x00168620u; return; } if (c.pc != 0x0016B050u) [[unlikely]] return; }
L_0016B050:
    c.r[3].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016AFBCu | kUnwind; return; } goto L_0016AFBC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0016B060:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0016B080:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B098u); st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001B(c, 162u, depth + 1u); else { c.pc = 0x0016D620u; return; } if (c.pc != 0x0016B098u) [[unlikely]] return; }
L_0016B098:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B0A4u); set32(c.r[5], c.r[29].w[0] + 47u);  if (depth < kMaxDepth) unit_001B(c, 146u, depth + 1u); else { c.pc = 0x0016D3D0u; return; } if (c.pc != 0x0016B0A4u) [[unlikely]] return; }
L_0016B0A4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[29].w[0] + 47u));  goto L_0016B0C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B0B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 429u, depth + 1u); else { c.pc = 0x0016AF70u; return; } if (c.pc != 0x0016B0B8u) [[unlikely]] return; }
L_0016B0B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0016B0D4; } }
L_0016B0C0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016B0D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B0D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 393u, depth + 1u); else { c.pc = 0x0016AC40u; return; } if (c.pc != 0x0016B0D0u) [[unlikely]] return; }
L_0016B0D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0016B0D4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016B0E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B0F8u); st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001A(c, 176u, depth + 1u); else { c.pc = 0x00169370u; return; } if (c.pc != 0x0016B0F8u) [[unlikely]] return; }
L_0016B0F8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B104u); set32(c.r[5], c.r[29].w[0] + 47u);  if (depth < kMaxDepth) unit_001A(c, 157u, depth + 1u); else { c.pc = 0x00169110u; return; } if (c.pc != 0x0016B104u) [[unlikely]] return; }
L_0016B104:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_0016B120; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B118u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 429u, depth + 1u); else { c.pc = 0x0016AF70u; return; } if (c.pc != 0x0016B118u) [[unlikely]] return; }
L_0016B118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0016B194; } }
L_0016B120:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 47u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016B190; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B134u);  if (depth < kMaxDepth) unit_001B(c, 162u, depth + 1u); else { c.pc = 0x0016D620u; return; } if (c.pc != 0x0016B134u) [[unlikely]] return; }
L_0016B134:
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B148u); set32(c.r[7], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0016D510u; return; } if (c.pc != 0x0016B148u) [[unlikely]] return; }
L_0016B148:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016B170; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016B170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B168u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 393u, depth + 1u); else { c.pc = 0x0016AC40u; return; } if (c.pc != 0x0016B168u) [[unlikely]] return; }
L_0016B168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016B190; } }
L_0016B170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B178u);  if (depth < kMaxDepth) unit_001B(c, 162u, depth + 1u); else { c.pc = 0x0016D620u; return; } if (c.pc != 0x0016B178u) [[unlikely]] return; }
L_0016B178:
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B188u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0016D470u; return; } if (c.pc != 0x0016B188u) [[unlikely]] return; }
L_0016B188:
    set32(c.r[3], 0u + 7u);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_0016B190:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0016B194:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016B1A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], c.r[29].w[0] + 40u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B1C0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00AD(c, 147u, depth + 1u); else { c.pc = 0x003B5758u; return; } if (c.pc != 0x0016B1C0u) [[unlikely]] return; }
L_0016B1C0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0016B308; }
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[4], 0u + 6u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 40u)));  goto L_0016B1E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016B304; } }
L_0016B1E4:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[1].d[0] = c.r[2].sd[0] < -9ll ? 1ull : 0ull;  goto L_0016B294; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B1F4u); set32(c.r[4], ld32((c.r[16].w[0] + 128u)));  if (depth < kMaxDepth) unit_00AD(c, 124u, depth + 1u); else { c.pc = 0x003B5278u; return; } if (c.pc != 0x0016B1F4u) [[unlikely]] return; }
L_0016B1F4:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B204u); set32(c.r[6], c.r[29].w[0] + 36u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x0016B204u) [[unlikely]] return; }
L_0016B204:
    set32(c.r[7], ld32((c.r[16].w[0] + 128u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B21Cu); set32(c.r[6], c.r[6].w[0] + 27308u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0016B21Cu) [[unlikely]] return; }
L_0016B21C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B224u);  if (depth < kMaxDepth) unit_001A(c, 176u, depth + 1u); else { c.pc = 0x00169370u; return; } if (c.pc != 0x0016B224u) [[unlikely]] return; }
L_0016B224:
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B238u); set32(c.r[7], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_001A(c, 170u, depth + 1u); else { c.pc = 0x00169280u; return; } if (c.pc != 0x0016B238u) [[unlikely]] return; }
L_0016B238:
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0016B284; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0016B274; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B254u);  if (depth < kMaxDepth) unit_001A(c, 176u, depth + 1u); else { c.pc = 0x00169370u; return; } if (c.pc != 0x0016B254u) [[unlikely]] return; }
L_0016B254:
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B268u); set32(c.r[7], c.r[16].w[0] + 136u);  if (depth < kMaxDepth) unit_001A(c, 164u, depth + 1u); else { c.pc = 0x001691D0u; return; } if (c.pc != 0x0016B268u) [[unlikely]] return; }
L_0016B268:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_0016B304; } }
L_0016B274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B27Cu);  if (depth < kMaxDepth) unit_001A(c, 393u, depth + 1u); else { c.pc = 0x0016AC40u; return; } if (c.pc != 0x0016B27Cu) [[unlikely]] return; }
L_0016B27C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016B304; } }
L_0016B284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B28Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 429u, depth + 1u); else { c.pc = 0x0016AF70u; return; } if (c.pc != 0x0016B28Cu) [[unlikely]] return; }
L_0016B28C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016B304; } }
L_0016B294:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 8u);  goto L_0016B2A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0016B2FC; } }
L_0016B2A4:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], 0u + 7u);  goto L_0016B2F8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 24736u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00168000u < 16384u) { entry = entries_001A[(t - 0x00168000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016B2CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0016B2F8; } }
L_0016B2D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_0016B2F8; } }
L_0016B2DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_0016B2F8; } }
L_0016B2E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 9u);  if (t) { goto L_0016B2F8; } }
L_0016B2EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016B2F8; } }
L_0016B2F4:
    set32(c.r[5], 0u + 7u);
    c.budget -= 1;
L_0016B2F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0016B2FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B304u);  if (depth < kMaxDepth) unit_001A(c, 429u, depth + 1u); else { c.pc = 0x0016AF70u; return; } if (c.pc != 0x0016B304u) [[unlikely]] return; }
L_0016B304:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0016B308:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016B320:
    set32(c.r[29], c.r[29].w[0] - 6496u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B350u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 302u, depth + 1u); else { c.pc = 0x00142680u; return; } if (c.pc != 0x0016B350u) [[unlikely]] return; }
L_0016B350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B358u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0016B358u) [[unlikely]] return; }
L_0016B358:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B370u); set32(c.r[6], c.r[6].w[0] + 27356u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0016B370u) [[unlikely]] return; }
L_0016B370:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 26659u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 99u);
    set32(c.r[9], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B394u); st32((c.r[18].w[0] + 124u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00AD(c, 160u, depth + 1u); else { c.pc = 0x003B5A68u; return; } if (c.pc != 0x0016B394u) [[unlikely]] return; }
L_0016B394:
    st32((c.r[29].w[0] + 6492u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B3A8u); set32(c.r[6], c.r[29].w[0] + 6492u);  if (depth < kMaxDepth) unit_00AD(c, 147u, depth + 1u); else { c.pc = 0x003B5758u; return; } if (c.pc != 0x0016B3A8u) [[unlikely]] return; }
L_0016B3A8:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B3B8u); set32(c.r[6], c.r[29].w[0] + 6488u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x0016B3B8u) [[unlikely]] return; }
L_0016B3B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B3C4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 186u, depth + 1u); else { c.pc = 0x00169470u; return; } if (c.pc != 0x0016B3C4u) [[unlikely]] return; }
L_0016B3C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B3CCu); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 302u, depth + 1u); else { c.pc = 0x00142680u; return; } if (c.pc != 0x0016B3CCu) [[unlikely]] return; }
L_0016B3CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B3D4u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0016B3D4u) [[unlikely]] return; }
L_0016B3D4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B3ECu); set32(c.r[6], c.r[6].w[0] + 27388u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0016B3ECu) [[unlikely]] return; }
L_0016B3EC:
    c.budget -= 2;
    if (c.r[19].sd[0] >= 0) { c.r[5].d[0] = c.r[20].d[0] + 0ull;  goto L_0016B470; }
    set32(c.r[2], ld32((c.r[29].w[0] + 6488u)));
    c.r[1].d[0] = c.r[2].sd[0] < -9ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 8u);  goto L_0016B40C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0016B460; } }
L_0016B40C:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], 0u + 7u);  goto L_0016B460; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00168000u < 16384u) { entry = entries_001A[(t - 0x00168000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016B434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0016B460; } }
L_0016B43C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_0016B460; } }
L_0016B444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_0016B460; } }
L_0016B44C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 9u);  if (t) { goto L_0016B460; } }
L_0016B454:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_0016B460; } }
L_0016B45C:
    set32(c.r[5], 0u + 7u);
    c.budget -= 1;
L_0016B460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B468u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 429u, depth + 1u); else { c.pc = 0x0016AF70u; return; } if (c.pc != 0x0016B468u) [[unlikely]] return; }
L_0016B468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0016B5F4; } }
L_0016B470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B478u); set32(c.r[4], c.r[29].w[0] + 6464u);  if (depth < kMaxDepth) unit_001A(c, 597u, depth + 1u); else { c.pc = 0x0016BCC0u; return; } if (c.pc != 0x0016B478u) [[unlikely]] return; }
L_0016B478:
    set32(c.r[2], ld32((c.r[29].w[0] + 6464u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 6465u);  goto L_0016B48C; }
    set32(c.r[6], ld32((c.r[29].w[0] + 6472u)));
    c.budget -= 1;
L_0016B48C:
    set32(c.r[4], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B49Cu); set32(c.r[7], 0u + 514u);  if (depth < kMaxDepth) unit_00AD(c, 116u, depth + 1u); else { c.pc = 0x003B5118u; return; } if (c.pc != 0x0016B49Cu) [[unlikely]] return; }
L_0016B49C:
    set32(c.r[4], c.r[29].w[0] + 6464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B4A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016B4A8u) [[unlikely]] return; }
L_0016B4A8:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B4B8u); set32(c.r[6], c.r[29].w[0] + 6488u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x0016B4B8u) [[unlikely]] return; }
L_0016B4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B4C0u);  if (depth < kMaxDepth) unit_0010(c, 302u, depth + 1u); else { c.pc = 0x00142680u; return; } if (c.pc != 0x0016B4C0u) [[unlikely]] return; }
L_0016B4C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B4C8u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0016B4C8u) [[unlikely]] return; }
L_0016B4C8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B4E0u); set32(c.r[6], c.r[6].w[0] + 27427u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0016B4E0u) [[unlikely]] return; }
L_0016B4E0:
    set32(c.r[7], ld32((c.r[29].w[0] + 6488u)));
    c.budget -= 3;
    if (c.r[7].sd[0] >= 0) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0016B564; }
    c.r[1].d[0] = c.r[7].sd[0] < -9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[7].w[0] + 8u);  goto L_0016B500; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0016B554; } }
    goto L_0016B500;
L_0016B4FC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0016B500:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], 0u + 7u);  goto L_0016B554; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 24784u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00168000u < 16384u) { entry = entries_001A[(t - 0x00168000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016B528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0016B554; } }
L_0016B530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_0016B554; } }
L_0016B538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_0016B554; } }
L_0016B540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 9u);  if (t) { goto L_0016B554; } }
L_0016B548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_0016B554; } }
L_0016B550:
    set32(c.r[5], 0u + 7u);
    c.budget -= 1;
L_0016B554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B55Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 429u, depth + 1u); else { c.pc = 0x0016AF70u; return; } if (c.pc != 0x0016B55Cu) [[unlikely]] return; }
L_0016B55C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016B5F0; } }
L_0016B564:
    st32((c.r[18].w[0] + 128u), c.r[7].w[0]);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B578u); set32(c.r[6], c.r[6].w[0] + 27465u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0016B578u) [[unlikely]] return; }
L_0016B578:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 1u);  goto L_0016B58C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_0016B58C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B594u); set32(c.r[4], c.r[18].w[0] + 136u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0016B594u) [[unlikely]] return; }
L_0016B594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B59Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 65u, depth + 1u); else { c.pc = 0x0013CA00u; return; } if (c.pc != 0x0016B59Cu) [[unlikely]] return; }
L_0016B59C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B5B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016B5B0u) [[unlikely]] return; }
L_0016B5B0:
    set32(c.r[4], ld32((c.r[18].w[0] + 128u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B5C0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 141u, depth + 1u); else { c.pc = 0x003B55E0u; return; } if (c.pc != 0x0016B5C0u) [[unlikely]] return; }
L_0016B5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B5C8u);  if (depth < kMaxDepth) unit_0010(c, 302u, depth + 1u); else { c.pc = 0x00142680u; return; } if (c.pc != 0x0016B5C8u) [[unlikely]] return; }
L_0016B5C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B5D0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0016B5D0u) [[unlikely]] return; }
L_0016B5D0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 27513u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B5E8u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0016B5E8u) [[unlikely]] return; }
L_0016B5E8:
    set32(c.r[3], 0u + 4u);
    st32((c.r[18].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_0016B5F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0016B5F4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 6496u);  c.pc = t; return; }
L_0016B610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], c.r[29].w[0] + 40u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B634u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x0016B634u) [[unlikely]] return; }
L_0016B634:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0016B748; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[7].d[0] != c.r[5].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0016B734; }
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  goto L_0016B6D4; }
    c.r[1].d[0] = c.r[2].sd[0] < -9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 8u);  goto L_0016B66C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0016B6C4; } }
L_0016B66C:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], 0u + 7u);  goto L_0016B6C0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 24880u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00168000u < 16384u) { entry = entries_001A[(t - 0x00168000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016B694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0016B6C0; } }
L_0016B69C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_0016B6C0; } }
L_0016B6A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_0016B6C0; } }
L_0016B6AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 9u);  if (t) { goto L_0016B6C0; } }
L_0016B6B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_0016B6C0; } }
L_0016B6BC:
    set32(c.r[5], 0u + 7u);
    c.budget -= 1;
L_0016B6C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0016B6C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B6CCu);  if (depth < kMaxDepth) unit_001A(c, 417u, depth + 1u); else { c.pc = 0x0016AE60u; return; } if (c.pc != 0x0016B6CCu) [[unlikely]] return; }
L_0016B6CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016B744; } }
L_0016B6D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B6DCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 59u, depth + 1u); else { c.pc = 0x0013C890u; return; } if (c.pc != 0x0016B6DCu) [[unlikely]] return; }
L_0016B6DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B6F4u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016B6F4u) [[unlikely]] return; }
L_0016B6F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B6FCu); set32(c.r[4], ld32((c.r[16].w[0] + 128u)));  if (depth < kMaxDepth) unit_00AD(c, 124u, depth + 1u); else { c.pc = 0x003B5278u; return; } if (c.pc != 0x0016B6FCu) [[unlikely]] return; }
L_0016B6FC:
    set32(c.r[7], ld32((c.r[16].w[0] + 128u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B714u); set32(c.r[6], c.r[6].w[0] + 27554u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0016B714u) [[unlikely]] return; }
L_0016B714:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B724u); set32(c.r[6], c.r[29].w[0] + 36u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x0016B724u) [[unlikely]] return; }
L_0016B724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B72Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 405u, depth + 1u); else { c.pc = 0x0016AD50u; return; } if (c.pc != 0x0016B72Cu) [[unlikely]] return; }
L_0016B72C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016B744; } }
L_0016B734:
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B744u); set32(c.r[6], c.r[6].w[0] + 27603u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0016B744u) [[unlikely]] return; }
L_0016B744:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0016B748:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016B760:
    set32(c.r[29], c.r[29].w[0] - 1344u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 124u), c.r[19].w[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B7A8u); set32(c.r[6], c.r[29].w[0] + 1340u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x0016B7A8u) [[unlikely]] return; }
L_0016B7A8:
    set32(c.r[5], ld32((c.r[20].w[0] + 116u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], ld32((c.r[20].w[0] + 120u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B7BCu); set32(c.r[4], c.r[4].w[0] + 27666u);  if (depth < kMaxDepth) unit_000B(c, 413u, depth + 1u); else { c.pc = 0x0012FF20u; return; } if (c.pc != 0x0016B7BCu) [[unlikely]] return; }
L_0016B7BC:
    set32(c.r[4], c.r[29].w[0] + 1296u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B7CCu); set32(c.r[6], c.r[20].w[0] + 100u);  if (depth < kMaxDepth) unit_001A(c, 610u, depth + 1u); else { c.pc = 0x0016BE60u; return; } if (c.pc != 0x0016B7CCu) [[unlikely]] return; }
L_0016B7CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 1296u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 1297u);  goto L_0016B7E0; }
    set32(c.r[6], ld32((c.r[29].w[0] + 1304u)));
    c.budget -= 1;
L_0016B7E0:
    set32(c.r[4], ld32((c.r[20].w[0] + 116u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B7F0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 171u, depth + 1u); else { c.pc = 0x003B5C48u; return; } if (c.pc != 0x0016B7F0u) [[unlikely]] return; }
L_0016B7F0:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B800u); set32(c.r[6], c.r[29].w[0] + 1332u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x0016B800u) [[unlikely]] return; }
L_0016B800:
    set32(c.r[2], ld32((c.r[29].w[0] + 1332u)));
    c.r[1].d[0] = c.r[2].sd[0] < -9ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 8u);  goto L_0016B818; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0016B86C; } }
L_0016B818:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[17], 0u + 7u);  goto L_0016B86C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 25024u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00168000u < 16384u) { entry = entries_001A[(t - 0x00168000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016B840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0016B86C; } }
L_0016B848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 5u);  if (t) { goto L_0016B86C; } }
L_0016B850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 3u);  if (t) { goto L_0016B86C; } }
L_0016B858:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 9u);  if (t) { goto L_0016B86C; } }
L_0016B860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 6u);  if (t) { goto L_0016B86C; } }
L_0016B868:
    set32(c.r[17], 0u + 7u);
    c.budget -= 1;
L_0016B86C:
    set32(c.r[4], c.r[29].w[0] + 1296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B878u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016B878u) [[unlikely]] return; }
L_0016B878:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; st32((c.r[29].w[0] + 1336u), c.r[17].w[0]);  if (t) { goto L_0016B894; } }
L_0016B880:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B88Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 417u, depth + 1u); else { c.pc = 0x0016AE60u; return; } if (c.pc != 0x0016B88Cu) [[unlikely]] return; }
L_0016B88C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0016BBE0; } }
L_0016B894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B89Cu);  if (depth < kMaxDepth) unit_001A(c, 176u, depth + 1u); else { c.pc = 0x00169370u; return; } if (c.pc != 0x0016B89Cu) [[unlikely]] return; }
L_0016B89C:
    set32(c.r[5], ld32((c.r[20].w[0] + 116u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[20].w[0] + 120u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B8B0u); set32(c.r[7], c.r[29].w[0] + 1336u);  if (depth < kMaxDepth) unit_001A(c, 170u, depth + 1u); else { c.pc = 0x00169280u; return; } if (c.pc != 0x0016B8B0u) [[unlikely]] return; }
L_0016B8B0:
    set32(c.r[5], ld32((c.r[29].w[0] + 1336u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0016B8CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B8C4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 417u, depth + 1u); else { c.pc = 0x0016AE60u; return; } if (c.pc != 0x0016B8C4u) [[unlikely]] return; }
L_0016B8C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BBDC; } }
L_0016B8CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_0016B8E8; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B8E0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_001A(c, 417u, depth + 1u); else { c.pc = 0x0016AE60u; return; } if (c.pc != 0x0016B8E0u) [[unlikely]] return; }
L_0016B8E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BBDC; } }
L_0016B8E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B8F0u); set32(c.r[4], c.r[29].w[0] + 1312u);  if (depth < kMaxDepth) unit_001A(c, 597u, depth + 1u); else { c.pc = 0x0016BCC0u; return; } if (c.pc != 0x0016B8F0u) [[unlikely]] return; }
L_0016B8F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 1312u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 1313u);  goto L_0016B904; }
    set32(c.r[6], ld32((c.r[29].w[0] + 1320u)));
    c.budget -= 1;
L_0016B904:
    set32(c.r[4], ld32((c.r[20].w[0] + 116u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 120u)));
    set32(c.r[8], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B91Cu); set32(c.r[9], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_00AD(c, 160u, depth + 1u); else { c.pc = 0x003B5A68u; return; } if (c.pc != 0x0016B91Cu) [[unlikely]] return; }
L_0016B91C:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B92Cu); set32(c.r[6], c.r[29].w[0] + 1340u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x0016B92Cu) [[unlikely]] return; }
L_0016B92C:
    set32(c.r[17], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0016B99C; } }
L_0016B938:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], c.r[29].w[0] + 1313u);  goto L_0016B948; }
    set32(c.r[8], ld32((c.r[29].w[0] + 1320u)));
    c.budget -= 1;
L_0016B948:
    set32(c.r[2], c.r[16].w[0] << 6);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], 0u + 64u);
    set32(c.r[22], c.r[2].w[0] + 128u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[21], c.r[22].w[0] + 32u);
    set32(c.r[6], c.r[6].w[0] + 27705u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B970u); c.r[7].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0016B970u) [[unlikely]] return; }
L_0016B970:
    set32(c.r[2], ld32((c.r[29].w[0] + 1312u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 1313u);  goto L_0016B984; }
    set32(c.r[5], ld32((c.r[29].w[0] + 1320u)));
    c.budget -= 1;
L_0016B984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B98Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0016B98Cu) [[unlikely]] return; }
L_0016B98C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0016B99C; }
    set32(c.r[17], ld32((c.r[22].w[0] + 16u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0016B99C:
    set32(c.r[3], ld32((c.r[29].w[0] + 1340u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 1312u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016B938u | kUnwind; return; } goto L_0016B938; }
    c.budget -= 2;
    if (c.r[3].sd[0] >= 0) { set32(c.r[2], 0u - 1u);  goto L_0016BA3C; }
    c.r[1].d[0] = c.r[3].sd[0] < -9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 8u);  goto L_0016B9C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0016BA1C; } }
L_0016B9C8:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], 0u + 7u);  goto L_0016BA1C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 24976u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00168000u < 16384u) { entry = entries_001A[(t - 0x00168000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016B9F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0016BA1C; } }
L_0016B9F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_0016BA1C; } }
L_0016BA00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_0016BA1C; } }
L_0016BA08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 9u);  if (t) { goto L_0016BA1C; } }
L_0016BA10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_0016BA1C; } }
L_0016BA18:
    set32(c.r[5], 0u + 7u);
    c.budget -= 1;
L_0016BA1C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BA28u); st32((c.r[29].w[0] + 1336u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_001A(c, 417u, depth + 1u); else { c.pc = 0x0016AE60u; return; } if (c.pc != 0x0016BA28u) [[unlikely]] return; }
L_0016BA28:
    set32(c.r[4], c.r[29].w[0] + 1312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BA34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016BA34u) [[unlikely]] return; }
L_0016BA34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BBDC; } }
L_0016BA3C:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0016BA50; }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 1312u)));  goto L_0016BA94; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0016BA50:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0016BA64; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1336u), c.r[2].w[0]);  if (t) { goto L_0016BA74; } }
L_0016BA64:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 1336u)));  goto L_0016BA78; }
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 1336u), c.r[2].w[0]);
    c.budget -= 2;
L_0016BA74:
    set32(c.r[5], ld32((c.r[29].w[0] + 1336u)));
    c.budget -= 1;
L_0016BA78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BA80u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 417u, depth + 1u); else { c.pc = 0x0016AE60u; return; } if (c.pc != 0x0016BA80u) [[unlikely]] return; }
L_0016BA80:
    set32(c.r[4], c.r[29].w[0] + 1312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BA8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016BA8Cu) [[unlikely]] return; }
L_0016BA8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BBDC; } }
L_0016BA94:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 1313u);  goto L_0016BAA4; }
    set32(c.r[6], ld32((c.r[29].w[0] + 1320u)));
    c.budget -= 1;
L_0016BAA4:
    set32(c.r[4], ld32((c.r[20].w[0] + 116u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BAB4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00AD(c, 116u, depth + 1u); else { c.pc = 0x003B5118u; return; } if (c.pc != 0x0016BAB4u) [[unlikely]] return; }
L_0016BAB4:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BAC4u); set32(c.r[6], c.r[29].w[0] + 1340u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x0016BAC4u) [[unlikely]] return; }
L_0016BAC4:
    set32(c.r[7], ld32((c.r[29].w[0] + 1340u)));
    c.budget -= 3;
    if (c.r[7].sd[0] >= 0) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0016BB58; }
    c.r[1].d[0] = c.r[7].sd[0] < -9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[7].w[0] + 8u);  goto L_0016BAE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0016BB38; } }
L_0016BAE4:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], 0u + 7u);  goto L_0016BB38; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 24928u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00168000u < 16384u) { entry = entries_001A[(t - 0x00168000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016BB0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0016BB38; } }
L_0016BB14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_0016BB38; } }
L_0016BB1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_0016BB38; } }
L_0016BB24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 9u);  if (t) { goto L_0016BB38; } }
L_0016BB2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_0016BB38; } }
L_0016BB34:
    set32(c.r[5], 0u + 7u);
    c.budget -= 1;
L_0016BB38:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BB44u); st32((c.r[29].w[0] + 1336u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_001A(c, 417u, depth + 1u); else { c.pc = 0x0016AE60u; return; } if (c.pc != 0x0016BB44u) [[unlikely]] return; }
L_0016BB44:
    set32(c.r[4], c.r[29].w[0] + 1312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BB50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016BB50u) [[unlikely]] return; }
L_0016BB50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BBDC; } }
L_0016BB58:
    st32((c.r[20].w[0] + 128u), c.r[7].w[0]);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BB6Cu); set32(c.r[6], c.r[6].w[0] + 27726u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0016BB6Cu) [[unlikely]] return; }
L_0016BB6C:
    c.budget -= 2;
    if (c.r[18].sd[0] >= 0) { c.r[17].d[0] = c.r[18].d[0] + 0ull;  goto L_0016BB74; }
L_0016BB74:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BB80u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 60u, depth + 1u); else { c.pc = 0x0013C8C0u; return; } if (c.pc != 0x0016BB80u) [[unlikely]] return; }
L_0016BB80:
    set32(c.r[4], ld32((c.r[20].w[0] + 128u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BB90u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 135u, depth + 1u); else { c.pc = 0x003B54C8u; return; } if (c.pc != 0x0016BB90u) [[unlikely]] return; }
L_0016BB90:
    set32(c.r[3], 0u - 200u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[29].w[0] + 1340u), c.r[2].w[0]);  if (t) { goto L_0016BBB0; } }
    set32(c.r[3], 0u - 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0016BBB0; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0016BBB0; }
L_0016BBB0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0016BBC4; }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_0016BBD0; } }
L_0016BBC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BBCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 59u, depth + 1u); else { c.pc = 0x0013C890u; return; } if (c.pc != 0x0016BBCCu) [[unlikely]] return; }
L_0016BBCC:
    st32((c.r[20].w[0] + 96u), 0u);
    c.budget -= 1;
L_0016BBD0:
    set32(c.r[4], c.r[29].w[0] + 1312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BBDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016BBDCu) [[unlikely]] return; }
L_0016BBDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0016BBE0:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1344u);  c.pc = t; return; }
L_0016BC10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0016BCB0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 25072u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00168000u < 16384u) { entry = entries_001A[(t - 0x00168000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016BC44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BC4Cu);  if (depth < kMaxDepth) unit_001A(c, 358u, depth + 1u); else { c.pc = 0x0016A8C0u; return; } if (c.pc != 0x0016BC4Cu) [[unlikely]] return; }
L_0016BC4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BCAC; } }
L_0016BC54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BC5Cu);  if (depth < kMaxDepth) unit_001A(c, 238u, depth + 1u); else { c.pc = 0x00169940u; return; } if (c.pc != 0x0016BC5Cu) [[unlikely]] return; }
L_0016BC5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BCAC; } }
L_0016BC64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BC6Cu);  if (depth < kMaxDepth) unit_001A(c, 216u, depth + 1u); else { c.pc = 0x00169710u; return; } if (c.pc != 0x0016BC6Cu) [[unlikely]] return; }
L_0016BC6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BCAC; } }
L_0016BC74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BC7Cu);  if (depth < kMaxDepth) unit_001A(c, 457u, depth + 1u); else { c.pc = 0x0016B1A0u; return; } if (c.pc != 0x0016BC7Cu) [[unlikely]] return; }
L_0016BC7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BCAC; } }
L_0016BC84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BC8Cu);  if (depth < kMaxDepth) unit_001A(c, 516u, depth + 1u); else { c.pc = 0x0016B610u; return; } if (c.pc != 0x0016BC8Cu) [[unlikely]] return; }
L_0016BC8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BCAC; } }
L_0016BC94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BC9Cu);  if (depth < kMaxDepth) unit_001A(c, 448u, depth + 1u); else { c.pc = 0x0016B0E0u; return; } if (c.pc != 0x0016BC9Cu) [[unlikely]] return; }
L_0016BC9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BCAC; } }
L_0016BCA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BCACu);  if (depth < kMaxDepth) unit_001A(c, 443u, depth + 1u); else { c.pc = 0x0016B080u; return; } if (c.pc != 0x0016BCACu) [[unlikely]] return; }
L_0016BCAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0016BCB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016BCC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BCD8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0004(c, 343u, depth + 1u); else { c.pc = 0x00113B00u; return; } if (c.pc != 0x0016BCD8u) [[unlikely]] return; }
L_0016BCD8:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 33u);  goto L_0016BCEC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 1;
L_0016BCEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BCF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 331u, depth + 1u); else { c.pc = 0x0013F2A0u; return; } if (c.pc != 0x0016BCF4u) [[unlikely]] return; }
L_0016BCF4:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BD00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016BD00u) [[unlikely]] return; }
L_0016BD00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016BD20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0016BD4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[5].w[0] + 8u)));  if (t) { goto L_0016BD50; } }
L_0016BD4C:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0016BD50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BD58u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 331u, depth + 1u); else { c.pc = 0x0013F2A0u; return; } if (c.pc != 0x0016BD58u) [[unlikely]] return; }
L_0016BD58:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 47u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 92u);  if (t) { goto L_0016BDA4; } }
L_0016BD68:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 72u)));  goto L_0016BD7C; }
    set32(c.r[2], c.r[29].w[0] + 65u);
    c.budget -= 1;
L_0016BD7C:
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_0016BDA4; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 72u)));  goto L_0016BD98; }
    set32(c.r[2], c.r[29].w[0] + 65u);
    c.budget -= 1;
L_0016BD98:
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 3;
L_0016BDA4:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 64u));  goto L_0016BDC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 68u)));  if (t) { goto L_0016BDC8; } }
L_0016BDC0:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0016BDC8:
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016BD68u | kUnwind; return; } goto L_0016BD68; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BDE4u); set32(c.r[5], c.r[5].w[0] + 27775u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0016BDE4u) [[unlikely]] return; }
L_0016BDE4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 1u);  goto L_0016BDF8; }
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_0016BDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BE00u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0016BE00u) [[unlikely]] return; }
L_0016BE00:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_0016BE14; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_0016BE14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BE1Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0016BE1Cu) [[unlikely]] return; }
L_0016BE1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BE28u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0016BE28u) [[unlikely]] return; }
L_0016BE28:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BE34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016BE34u) [[unlikely]] return; }
L_0016BE34:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BE40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016BE40u) [[unlikely]] return; }
L_0016BE40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016BE60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BE80u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0013(c, 75u, depth + 1u); else { c.pc = 0x0014C8C0u; return; } if (c.pc != 0x0016BE80u) [[unlikely]] return; }
L_0016BE80:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_0016BE94; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_0016BE94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BE9Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 331u, depth + 1u); else { c.pc = 0x0013F2A0u; return; } if (c.pc != 0x0016BE9Cu) [[unlikely]] return; }
L_0016BE9C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BEA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016BEA8u) [[unlikely]] return; }
L_0016BEA8:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 96u));  goto L_0016BEC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 100u)));  if (t) { goto L_0016BEC8; } }
L_0016BEC0:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0016BEC8:
    set32(c.r[7], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BEDCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x0016BEDCu) [[unlikely]] return; }
L_0016BEDC:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_0016BEF0; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_0016BEF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BEF8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0016BEF8u) [[unlikely]] return; }
L_0016BEF8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BF04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016BF04u) [[unlikely]] return; }
L_0016BF04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BF14u); set32(c.r[5], c.r[5].w[0] + 27775u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0016BF14u) [[unlikely]] return; }
L_0016BF14:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 1u);  goto L_0016BF28; }
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_0016BF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BF30u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0016BF30u) [[unlikely]] return; }
L_0016BF30:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 97u);  goto L_0016BF44; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_0016BF44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BF4Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0016BF4Cu) [[unlikely]] return; }
L_0016BF4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BF58u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0016BF58u) [[unlikely]] return; }
L_0016BF58:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BF64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016BF64u) [[unlikely]] return; }
L_0016BF64:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BF70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016BF70u) [[unlikely]] return; }
L_0016BF70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0016BF90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BFB0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0016BFB0u) [[unlikely]] return; }
L_0016BFB0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0016BFC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BFC4u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0016BFC4u) [[unlikely]] return; }
L_0016BFC4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0016BFC8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[17].w[0]), c.r[2].w[0]);  goto L_0016BFDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BFD8u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0016BFD8u) [[unlikely]] return; }
L_0016BFD8:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0016BFDC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 8u);
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BFF4u); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x0016BFF4u) [[unlikely]] return; }
L_0016BFF4:
    set32(c.r[18], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C000u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0016C000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_001B(c, 1u, depth);
}

}
