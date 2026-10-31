#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0080[4096] = {
    1, 2, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0,
    0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0,
    0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27,
    0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0,
    0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54,
    0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0,
    0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0,
    0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97,
    0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0,
    0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0,
    0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0,
    0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0,
    0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0,
    0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0,
    0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0,
    0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0,
    0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0,
    0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221,
    0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0,
    0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 260, 0,
    0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 269, 270, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 275, 0, 276, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 283, 0, 284,
    0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0,
    0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 295, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 308,
    0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0,
    312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0,
    0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0,
    0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0,
    0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0,
    335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0,
    0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0,
    0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0,
    358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 362, 0, 0,
    0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0,
    0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 373, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0,
    380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 386,
    0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0,
    390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0,
    0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 399, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0,
    0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0,
    0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0,
    0, 0, 415, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0,
    421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 424, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0,
    427, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 431, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 436, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0,
    439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 445,
    0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0,
    449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 455, 0, 0, 0,
    0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 0,
    0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0,
    0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0,
    0, 0, 473, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0,
    479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0, 0, 484,
    0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 487, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 0, 490, 0, 0,
    0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 497, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 501, 0, 0, 0, 0,
    0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 505, 0, 0, 0,
    0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 0, 0, 510, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0,
    512, 0, 0, 0, 0, 0, 0, 513, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0,
    518, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 521, 0, 0, 0, 0, 522, 0, 0,
    0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0, 0, 526, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0,
    0, 0, 0, 529, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0,
    0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0,
    539, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545,
    0, 0, 546, 0, 0, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0,
    551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 555, 0, 0, 556,
    0, 0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 561, 0, 0, 562, 0,
    0, 0, 563, 0, 0, 0, 0, 0, 564, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 571, 0, 0, 572, 0, 573, 0, 574,
    0, 0, 0, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 578, 0, 0, 579, 0, 0, 0, 580, 0, 0,
    0, 0, 0, 581, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 585, 0, 0, 586, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 588, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 0, 0, 591, 0, 0,
    592, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 594, 0, 0, 595, 0, 0, 0, 596, 0, 0, 0, 0, 0, 597, 0, 0, 598, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 602, 0, 0, 0,
};

void unit_0080(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00300000;
    case 2u: goto L_00300004;
    case 3u: goto L_00300008;
    case 4u: goto L_00300010;
    case 5u: goto L_00300018;
    case 6u: goto L_00300030;
    case 7u: goto L_00300040;
    case 8u: goto L_00300050;
    case 9u: goto L_00300064;
    case 10u: goto L_00300074;
    case 11u: goto L_00300084;
    case 12u: goto L_003000A4;
    case 13u: goto L_003000B4;
    case 14u: goto L_003000BC;
    case 15u: goto L_003000E4;
    case 16u: goto L_003000F4;
    case 17u: goto L_00300118;
    case 18u: goto L_00300128;
    case 19u: goto L_00300148;
    case 20u: goto L_00300158;
    case 21u: goto L_00300160;
    case 22u: goto L_00300188;
    case 23u: goto L_00300198;
    case 24u: goto L_003001BC;
    case 25u: goto L_003001CC;
    case 26u: goto L_003001EC;
    case 27u: goto L_003001FC;
    case 28u: goto L_00300204;
    case 29u: goto L_0030022C;
    case 30u: goto L_0030023C;
    case 31u: goto L_00300260;
    case 32u: goto L_00300270;
    case 33u: goto L_00300290;
    case 34u: goto L_003002A0;
    case 35u: goto L_003002A8;
    case 36u: goto L_003002D0;
    case 37u: goto L_003002E0;
    case 38u: goto L_00300304;
    case 39u: goto L_00300314;
    case 40u: goto L_00300334;
    case 41u: goto L_00300344;
    case 42u: goto L_0030034C;
    case 43u: goto L_00300374;
    case 44u: goto L_00300384;
    case 45u: goto L_003003A8;
    case 46u: goto L_003003B8;
    case 47u: goto L_003003D8;
    case 48u: goto L_003003E8;
    case 49u: goto L_003003F0;
    case 50u: goto L_00300418;
    case 51u: goto L_00300428;
    case 52u: goto L_0030044C;
    case 53u: goto L_0030045C;
    case 54u: goto L_0030047C;
    case 55u: goto L_0030048C;
    case 56u: goto L_00300494;
    case 57u: goto L_003004BC;
    case 58u: goto L_003004CC;
    case 59u: goto L_003004F0;
    case 60u: goto L_00300500;
    case 61u: goto L_00300520;
    case 62u: goto L_00300530;
    case 63u: goto L_00300564;
    case 64u: goto L_00300574;
    case 65u: goto L_00300598;
    case 66u: goto L_003005A8;
    case 67u: goto L_003005C8;
    case 68u: goto L_003005D8;
    case 69u: goto L_0030060C;
    case 70u: goto L_0030061C;
    case 71u: goto L_00300640;
    case 72u: goto L_00300650;
    case 73u: goto L_00300670;
    case 74u: goto L_00300680;
    case 75u: goto L_003006B4;
    case 76u: goto L_003006C4;
    case 77u: goto L_003006E8;
    case 78u: goto L_003006F8;
    case 79u: goto L_00300718;
    case 80u: goto L_0030072C;
    case 81u: goto L_00300760;
    case 82u: goto L_00300770;
    case 83u: goto L_00300794;
    case 84u: goto L_003007A4;
    case 85u: goto L_003007C4;
    case 86u: goto L_003007D8;
    case 87u: goto L_00300800;
    case 88u: goto L_0030080C;
    case 89u: goto L_0030081C;
    case 90u: goto L_00300840;
    case 91u: goto L_00300850;
    case 92u: goto L_00300870;
    case 93u: goto L_00300884;
    case 94u: goto L_003008B8;
    case 95u: goto L_003008C8;
    case 96u: goto L_003008EC;
    case 97u: goto L_003008FC;
    case 98u: goto L_0030091C;
    case 99u: goto L_00300930;
    case 100u: goto L_00300964;
    case 101u: goto L_00300974;
    case 102u: goto L_00300998;
    case 103u: goto L_003009A8;
    case 104u: goto L_003009C8;
    case 105u: goto L_003009DC;
    case 106u: goto L_00300A10;
    case 107u: goto L_00300A20;
    case 108u: goto L_00300A44;
    case 109u: goto L_00300A54;
    case 110u: goto L_00300A74;
    case 111u: goto L_00300A88;
    case 112u: goto L_00300AB4;
    case 113u: goto L_00300AC4;
    case 114u: goto L_00300AE8;
    case 115u: goto L_00300AF8;
    case 116u: goto L_00300B18;
    case 117u: goto L_00300B28;
    case 118u: goto L_00300B54;
    case 119u: goto L_00300B64;
    case 120u: goto L_00300B88;
    case 121u: goto L_00300B98;
    case 122u: goto L_00300BB8;
    case 123u: goto L_00300BC8;
    case 124u: goto L_00300BF4;
    case 125u: goto L_00300C04;
    case 126u: goto L_00300C28;
    case 127u: goto L_00300C38;
    case 128u: goto L_00300C58;
    case 129u: goto L_00300C6C;
    case 130u: goto L_00300C98;
    case 131u: goto L_00300CA8;
    case 132u: goto L_00300CCC;
    case 133u: goto L_00300CDC;
    case 134u: goto L_00300CFC;
    case 135u: goto L_00300D10;
    case 136u: goto L_00300D3C;
    case 137u: goto L_00300D4C;
    case 138u: goto L_00300D70;
    case 139u: goto L_00300D80;
    case 140u: goto L_00300DA0;
    case 141u: goto L_00300DB4;
    case 142u: goto L_00300DE0;
    case 143u: goto L_00300DF0;
    case 144u: goto L_00300E14;
    case 145u: goto L_00300E24;
    case 146u: goto L_00300E44;
    case 147u: goto L_00300E58;
    case 148u: goto L_00300E84;
    case 149u: goto L_00300E94;
    case 150u: goto L_00300EB8;
    case 151u: goto L_00300EC8;
    case 152u: goto L_00300EE8;
    case 153u: goto L_00300EFC;
    case 154u: goto L_00300F28;
    case 155u: goto L_00300F38;
    case 156u: goto L_00300F5C;
    case 157u: goto L_00300F6C;
    case 158u: goto L_00300F8C;
    case 159u: goto L_00300FA0;
    case 160u: goto L_00300FCC;
    case 161u: goto L_00300FDC;
    case 162u: goto L_00301000;
    case 163u: goto L_00301010;
    case 164u: goto L_00301030;
    case 165u: goto L_00301040;
    case 166u: goto L_0030106C;
    case 167u: goto L_0030107C;
    case 168u: goto L_003010A0;
    case 169u: goto L_003010B0;
    case 170u: goto L_003010D0;
    case 171u: goto L_003010E0;
    case 172u: goto L_0030110C;
    case 173u: goto L_0030111C;
    case 174u: goto L_00301140;
    case 175u: goto L_00301150;
    case 176u: goto L_00301170;
    case 177u: goto L_00301184;
    case 178u: goto L_003011B0;
    case 179u: goto L_003011C0;
    case 180u: goto L_003011E4;
    case 181u: goto L_003011F4;
    case 182u: goto L_00301214;
    case 183u: goto L_00301228;
    case 184u: goto L_00301254;
    case 185u: goto L_00301264;
    case 186u: goto L_00301288;
    case 187u: goto L_00301298;
    case 188u: goto L_003012B8;
    case 189u: goto L_003012CC;
    case 190u: goto L_003012F8;
    case 191u: goto L_00301308;
    case 192u: goto L_0030132C;
    case 193u: goto L_0030133C;
    case 194u: goto L_0030135C;
    case 195u: goto L_00301370;
    case 196u: goto L_0030139C;
    case 197u: goto L_003013AC;
    case 198u: goto L_003013D0;
    case 199u: goto L_003013E0;
    case 200u: goto L_00301400;
    case 201u: goto L_00301414;
    case 202u: goto L_00301440;
    case 203u: goto L_00301450;
    case 204u: goto L_00301474;
    case 205u: goto L_00301484;
    case 206u: goto L_003014A4;
    case 207u: goto L_003014B4;
    case 208u: goto L_003014E0;
    case 209u: goto L_003016F0;
    case 210u: goto L_00301730;
    case 211u: goto L_00301754;
    case 212u: goto L_00301780;
    case 213u: goto L_00301790;
    case 214u: goto L_003017B0;
    case 215u: goto L_003017E0;
    case 216u: goto L_00301810;
    case 217u: goto L_003018B0;
    case 218u: goto L_00301950;
    case 219u: goto L_00301A30;
    case 220u: goto L_00301A58;
    case 221u: goto L_00301A7C;
    case 222u: goto L_00301AA0;
    case 223u: goto L_00301ACC;
    case 224u: goto L_00301AF8;
    case 225u: goto L_00301B24;
    case 226u: goto L_00301B50;
    case 227u: goto L_00301B70;
    case 228u: goto L_00301B94;
    case 229u: goto L_00301BB8;
    case 230u: goto L_00301BDC;
    case 231u: goto L_00301C08;
    case 232u: goto L_00301C40;
    case 233u: goto L_00301C68;
    case 234u: goto L_00301C98;
    case 235u: goto L_00301CCC;
    case 236u: goto L_00301D04;
    case 237u: goto L_00301D3C;
    case 238u: goto L_00301D74;
    case 239u: goto L_00301DA8;
    case 240u: goto L_00301DD4;
    case 241u: goto L_00301E04;
    case 242u: goto L_00301E34;
    case 243u: goto L_00301E68;
    case 244u: goto L_00301EA0;
    case 245u: goto L_00301EE0;
    case 246u: goto L_00301F3C;
    case 247u: goto L_00301F48;
    case 248u: goto L_00301FBC;
    case 249u: goto L_00301FC8;
    case 250u: goto L_0030203C;
    case 251u: goto L_00302048;
    case 252u: goto L_003020EC;
    case 253u: goto L_0030210C;
    case 254u: goto L_00302120;
    case 255u: goto L_00302134;
    case 256u: goto L_00302220;
    case 257u: goto L_0030224C;
    case 258u: goto L_0030225C;
    case 259u: goto L_00302264;
    case 260u: goto L_00302278;
    case 261u: goto L_00302294;
    case 262u: goto L_003022A0;
    case 263u: goto L_003022B0;
    case 264u: goto L_003022C8;
    case 265u: goto L_003022D4;
    case 266u: goto L_003022E4;
    case 267u: goto L_003022EC;
    case 268u: goto L_00302300;
    case 269u: goto L_0030231C;
    case 270u: goto L_00302320;
    case 271u: goto L_00302328;
    case 272u: goto L_00302338;
    case 273u: goto L_00302350;
    case 274u: goto L_0030235C;
    case 275u: goto L_0030236C;
    case 276u: goto L_00302374;
    case 277u: goto L_00302388;
    case 278u: goto L_003023A4;
    case 279u: goto L_003023B0;
    case 280u: goto L_003023C0;
    case 281u: goto L_003023D8;
    case 282u: goto L_003023E4;
    case 283u: goto L_003023F4;
    case 284u: goto L_003023FC;
    case 285u: goto L_00302410;
    case 286u: goto L_0030242C;
    case 287u: goto L_00302438;
    case 288u: goto L_00302448;
    case 289u: goto L_00302460;
    case 290u: goto L_0030246C;
    case 291u: goto L_00302478;
    case 292u: goto L_00302484;
    case 293u: goto L_003024B0;
    case 294u: goto L_003024D0;
    case 295u: goto L_00302504;
    case 296u: goto L_00302510;
    case 297u: goto L_00302524;
    case 298u: goto L_00302540;
    case 299u: goto L_0030254C;
    case 300u: goto L_0030255C;
    case 301u: goto L_00302574;
    case 302u: goto L_00302580;
    case 303u: goto L_003025A0;
    case 304u: goto L_003025BC;
    case 305u: goto L_003025C8;
    case 306u: goto L_003025D8;
    case 307u: goto L_003025F0;
    case 308u: goto L_003025FC;
    case 309u: goto L_00302620;
    case 310u: goto L_00302640;
    case 311u: goto L_00302674;
    case 312u: goto L_00302680;
    case 313u: goto L_00302694;
    case 314u: goto L_003026B0;
    case 315u: goto L_003026BC;
    case 316u: goto L_003026CC;
    case 317u: goto L_003026E4;
    case 318u: goto L_003026F0;
    case 319u: goto L_00302710;
    case 320u: goto L_0030272C;
    case 321u: goto L_00302738;
    case 322u: goto L_00302748;
    case 323u: goto L_00302760;
    case 324u: goto L_0030276C;
    case 325u: goto L_00302790;
    case 326u: goto L_003027B0;
    case 327u: goto L_003027E4;
    case 328u: goto L_003027F0;
    case 329u: goto L_00302804;
    case 330u: goto L_00302820;
    case 331u: goto L_0030282C;
    case 332u: goto L_0030283C;
    case 333u: goto L_00302854;
    case 334u: goto L_00302860;
    case 335u: goto L_00302880;
    case 336u: goto L_0030289C;
    case 337u: goto L_003028A8;
    case 338u: goto L_003028B8;
    case 339u: goto L_003028D0;
    case 340u: goto L_003028DC;
    case 341u: goto L_00302900;
    case 342u: goto L_00302920;
    case 343u: goto L_00302954;
    case 344u: goto L_00302960;
    case 345u: goto L_00302974;
    case 346u: goto L_00302990;
    case 347u: goto L_0030299C;
    case 348u: goto L_003029AC;
    case 349u: goto L_003029C4;
    case 350u: goto L_003029D0;
    case 351u: goto L_003029F0;
    case 352u: goto L_00302A0C;
    case 353u: goto L_00302A18;
    case 354u: goto L_00302A28;
    case 355u: goto L_00302A40;
    case 356u: goto L_00302A4C;
    case 357u: goto L_00302A70;
    case 358u: goto L_00302A80;
    case 359u: goto L_00302ABC;
    case 360u: goto L_00302AD8;
    case 361u: goto L_00302AE4;
    case 362u: goto L_00302AF4;
    case 363u: goto L_00302B0C;
    case 364u: goto L_00302B18;
    case 365u: goto L_00302B34;
    case 366u: goto L_00302B50;
    case 367u: goto L_00302B5C;
    case 368u: goto L_00302B6C;
    case 369u: goto L_00302B84;
    case 370u: goto L_00302B90;
    case 371u: goto L_00302BB0;
    case 372u: goto L_00302BD0;
    case 373u: goto L_00302C04;
    case 374u: goto L_00302C10;
    case 375u: goto L_00302C24;
    case 376u: goto L_00302C40;
    case 377u: goto L_00302C4C;
    case 378u: goto L_00302C5C;
    case 379u: goto L_00302C74;
    case 380u: goto L_00302C80;
    case 381u: goto L_00302CA0;
    case 382u: goto L_00302CBC;
    case 383u: goto L_00302CC8;
    case 384u: goto L_00302CD8;
    case 385u: goto L_00302CF0;
    case 386u: goto L_00302CFC;
    case 387u: goto L_00302D20;
    case 388u: goto L_00302D40;
    case 389u: goto L_00302D74;
    case 390u: goto L_00302D80;
    case 391u: goto L_00302D94;
    case 392u: goto L_00302DB0;
    case 393u: goto L_00302DBC;
    case 394u: goto L_00302DCC;
    case 395u: goto L_00302DE4;
    case 396u: goto L_00302DF0;
    case 397u: goto L_00302E10;
    case 398u: goto L_00302E2C;
    case 399u: goto L_00302E30;
    case 400u: goto L_00302E38;
    case 401u: goto L_00302E48;
    case 402u: goto L_00302E60;
    case 403u: goto L_00302E6C;
    case 404u: goto L_00302E90;
    case 405u: goto L_00302EA0;
    case 406u: goto L_00302ED4;
    case 407u: goto L_00302EE0;
    case 408u: goto L_00302EF4;
    case 409u: goto L_00302F10;
    case 410u: goto L_00302F1C;
    case 411u: goto L_00302F2C;
    case 412u: goto L_00302F44;
    case 413u: goto L_00302F50;
    case 414u: goto L_00302F6C;
    case 415u: goto L_00302F88;
    case 416u: goto L_00302F94;
    case 417u: goto L_00302FA4;
    case 418u: goto L_00302FBC;
    case 419u: goto L_00302FC8;
    case 420u: goto L_00302FF0;
    case 421u: goto L_00303000;
    case 422u: goto L_00303030;
    case 423u: goto L_0030304C;
    case 424u: goto L_00303054;
    case 425u: goto L_00303058;
    case 426u: goto L_00303068;
    case 427u: goto L_00303080;
    case 428u: goto L_0030308C;
    case 429u: goto L_003030B0;
    case 430u: goto L_003030D0;
    case 431u: goto L_00303104;
    case 432u: goto L_00303110;
    case 433u: goto L_00303124;
    case 434u: goto L_00303140;
    case 435u: goto L_0030314C;
    case 436u: goto L_00303154;
    case 437u: goto L_0030315C;
    case 438u: goto L_00303174;
    case 439u: goto L_00303180;
    case 440u: goto L_003031A0;
    case 441u: goto L_003031BC;
    case 442u: goto L_003031C8;
    case 443u: goto L_003031D8;
    case 444u: goto L_003031F0;
    case 445u: goto L_003031FC;
    case 446u: goto L_00303220;
    case 447u: goto L_00303240;
    case 448u: goto L_00303274;
    case 449u: goto L_00303280;
    case 450u: goto L_00303294;
    case 451u: goto L_003032B0;
    case 452u: goto L_003032BC;
    case 453u: goto L_003032CC;
    case 454u: goto L_003032E4;
    case 455u: goto L_003032F0;
    case 456u: goto L_00303310;
    case 457u: goto L_0030332C;
    case 458u: goto L_00303338;
    case 459u: goto L_00303348;
    case 460u: goto L_00303360;
    case 461u: goto L_0030336C;
    case 462u: goto L_00303390;
    case 463u: goto L_003033A0;
    case 464u: goto L_003033D4;
    case 465u: goto L_003033E0;
    case 466u: goto L_003033F4;
    case 467u: goto L_00303410;
    case 468u: goto L_0030341C;
    case 469u: goto L_0030342C;
    case 470u: goto L_00303444;
    case 471u: goto L_00303450;
    case 472u: goto L_0030346C;
    case 473u: goto L_00303488;
    case 474u: goto L_00303494;
    case 475u: goto L_003034A4;
    case 476u: goto L_003034BC;
    case 477u: goto L_003034C8;
    case 478u: goto L_003034F0;
    case 479u: goto L_00303500;
    case 480u: goto L_00303534;
    case 481u: goto L_00303540;
    case 482u: goto L_00303554;
    case 483u: goto L_00303570;
    case 484u: goto L_0030357C;
    case 485u: goto L_0030358C;
    case 486u: goto L_003035A4;
    case 487u: goto L_003035B0;
    case 488u: goto L_003035CC;
    case 489u: goto L_003035E8;
    case 490u: goto L_003035F4;
    case 491u: goto L_00303604;
    case 492u: goto L_0030361C;
    case 493u: goto L_00303628;
    case 494u: goto L_00303650;
    case 495u: goto L_00303660;
    case 496u: goto L_00303690;
    case 497u: goto L_003036AC;
    case 498u: goto L_003036B8;
    case 499u: goto L_003036C8;
    case 500u: goto L_003036E0;
    case 501u: goto L_003036EC;
    case 502u: goto L_00303710;
    case 503u: goto L_00303730;
    case 504u: goto L_00303764;
    case 505u: goto L_00303770;
    case 506u: goto L_00303784;
    case 507u: goto L_003037A0;
    case 508u: goto L_003037AC;
    case 509u: goto L_003037BC;
    case 510u: goto L_003037D4;
    case 511u: goto L_003037E0;
    case 512u: goto L_00303800;
    case 513u: goto L_0030381C;
    case 514u: goto L_00303828;
    case 515u: goto L_00303838;
    case 516u: goto L_00303850;
    case 517u: goto L_0030385C;
    case 518u: goto L_00303880;
    case 519u: goto L_003038A0;
    case 520u: goto L_003038D4;
    case 521u: goto L_003038E0;
    case 522u: goto L_003038F4;
    case 523u: goto L_00303910;
    case 524u: goto L_0030391C;
    case 525u: goto L_0030392C;
    case 526u: goto L_00303944;
    case 527u: goto L_00303950;
    case 528u: goto L_00303970;
    case 529u: goto L_0030398C;
    case 530u: goto L_00303998;
    case 531u: goto L_003039A8;
    case 532u: goto L_003039C0;
    case 533u: goto L_003039CC;
    case 534u: goto L_003039F0;
    case 535u: goto L_00303A10;
    case 536u: goto L_00303A44;
    case 537u: goto L_00303A50;
    case 538u: goto L_00303A64;
    case 539u: goto L_00303A80;
    case 540u: goto L_00303A8C;
    case 541u: goto L_00303A9C;
    case 542u: goto L_00303AB4;
    case 543u: goto L_00303AC0;
    case 544u: goto L_00303AE0;
    case 545u: goto L_00303AFC;
    case 546u: goto L_00303B08;
    case 547u: goto L_00303B18;
    case 548u: goto L_00303B30;
    case 549u: goto L_00303B3C;
    case 550u: goto L_00303B60;
    case 551u: goto L_00303B80;
    case 552u: goto L_00303BB4;
    case 553u: goto L_00303BC0;
    case 554u: goto L_00303BD4;
    case 555u: goto L_00303BF0;
    case 556u: goto L_00303BFC;
    case 557u: goto L_00303C0C;
    case 558u: goto L_00303C24;
    case 559u: goto L_00303C30;
    case 560u: goto L_00303C50;
    case 561u: goto L_00303C6C;
    case 562u: goto L_00303C78;
    case 563u: goto L_00303C88;
    case 564u: goto L_00303CA0;
    case 565u: goto L_00303CAC;
    case 566u: goto L_00303CD0;
    case 567u: goto L_00303CF0;
    case 568u: goto L_00303D24;
    case 569u: goto L_00303D30;
    case 570u: goto L_00303D44;
    case 571u: goto L_00303D60;
    case 572u: goto L_00303D6C;
    case 573u: goto L_00303D74;
    case 574u: goto L_00303D7C;
    case 575u: goto L_00303D94;
    case 576u: goto L_00303DA0;
    case 577u: goto L_00303DBC;
    case 578u: goto L_00303DD8;
    case 579u: goto L_00303DE4;
    case 580u: goto L_00303DF4;
    case 581u: goto L_00303E0C;
    case 582u: goto L_00303E18;
    case 583u: goto L_00303E40;
    case 584u: goto L_00303E50;
    case 585u: goto L_00303E84;
    case 586u: goto L_00303E90;
    case 587u: goto L_00303EA4;
    case 588u: goto L_00303EC0;
    case 589u: goto L_00303ECC;
    case 590u: goto L_00303EDC;
    case 591u: goto L_00303EF4;
    case 592u: goto L_00303F00;
    case 593u: goto L_00303F1C;
    case 594u: goto L_00303F38;
    case 595u: goto L_00303F44;
    case 596u: goto L_00303F54;
    case 597u: goto L_00303F6C;
    case 598u: goto L_00303F78;
    case 599u: goto L_00303FA0;
    case 600u: goto L_00303FB0;
    case 601u: goto L_00303FE4;
    case 602u: goto L_00303FF0;
    default: bad_entry(c, 0x00300000u); return;
    }
L_00300000:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00300004:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00300008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003014B4; } }
L_00300010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300018u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0086(c, 21u, depth + 1u); else { c.pc = 0x00318390u; return; } if (c.pc != 0x00300018u) [[unlikely]] return; }
L_00300018:
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[19].d[0]) { st32((c.r[16].w[0]), 0u);  goto L_003000AC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 2;
L_00300030:
    c.budget -= 2;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00300054; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300040u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300040u) [[unlikely]] return; }
L_00300040:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300050u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300050u) [[unlikely]] return; }
L_00300050:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00300054:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_003000A8; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.budget -= 2;
L_00300064:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300074u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300074u) [[unlikely]] return; }
L_00300074:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300084u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300084u) [[unlikely]] return; }
L_00300084:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003000A4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003000A4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003000A4u) [[unlikely]] return; }
L_003000A4:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_003000A8:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_003000AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003014B4; } }
L_003000B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003000BCu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0086(c, 21u, depth + 1u); else { c.pc = 0x00318390u; return; } if (c.pc != 0x003000BCu) [[unlikely]] return; }
L_003000BC:
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[19].d[0]) { st32((c.r[16].w[0]), 0u);  goto L_00300150; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_003000F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003000E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003000E4u) [[unlikely]] return; }
L_003000E4:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003000F4u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003000F4u) [[unlikely]] return; }
L_003000F4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003000F8:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_0030014C; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300118u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300118u) [[unlikely]] return; }
L_00300118:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300128u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300128u) [[unlikely]] return; }
L_00300128:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00300148; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300148u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00300148u) [[unlikely]] return; }
L_00300148:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_0030014C:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00300150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003014B4; } }
L_00300158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300160u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0086(c, 21u, depth + 1u); else { c.pc = 0x00318390u; return; } if (c.pc != 0x00300160u) [[unlikely]] return; }
L_00300160:
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[19].d[0]) { st32((c.r[16].w[0]), 0u);  goto L_003001F4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_0030019C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300188u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300188u) [[unlikely]] return; }
L_00300188:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300198u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300198u) [[unlikely]] return; }
L_00300198:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0030019C:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_003001F0; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003001BCu); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003001BCu) [[unlikely]] return; }
L_003001BC:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003001CCu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003001CCu) [[unlikely]] return; }
L_003001CC:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003001EC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003001ECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003001ECu) [[unlikely]] return; }
L_003001EC:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_003001F0:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_003001F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003014B4; } }
L_003001FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300204u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0086(c, 21u, depth + 1u); else { c.pc = 0x00318390u; return; } if (c.pc != 0x00300204u) [[unlikely]] return; }
L_00300204:
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[19].d[0]) { st32((c.r[16].w[0]), 0u);  goto L_00300298; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00300240; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030022Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0030022Cu) [[unlikely]] return; }
L_0030022C:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030023Cu); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0030023Cu) [[unlikely]] return; }
L_0030023C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00300240:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_00300294; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300260u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300260u) [[unlikely]] return; }
L_00300260:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300270u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300270u) [[unlikely]] return; }
L_00300270:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00300290; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300290u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00300290u) [[unlikely]] return; }
L_00300290:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00300294:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00300298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003014B4; } }
L_003002A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003002A8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0086(c, 21u, depth + 1u); else { c.pc = 0x00318390u; return; } if (c.pc != 0x003002A8u) [[unlikely]] return; }
L_003002A8:
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[19].d[0]) { st32((c.r[16].w[0]), 0u);  goto L_0030033C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_003002E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003002D0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003002D0u) [[unlikely]] return; }
L_003002D0:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003002E0u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003002E0u) [[unlikely]] return; }
L_003002E0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003002E4:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_00300338; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300304u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300304u) [[unlikely]] return; }
L_00300304:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300314u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300314u) [[unlikely]] return; }
L_00300314:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00300334; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300334u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00300334u) [[unlikely]] return; }
L_00300334:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00300338:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0030033C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003014B4; } }
L_00300344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030034Cu); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0086(c, 21u, depth + 1u); else { c.pc = 0x00318390u; return; } if (c.pc != 0x0030034Cu) [[unlikely]] return; }
L_0030034C:
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[19].d[0]) { st32((c.r[16].w[0]), 0u);  goto L_003003E0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00300388; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300374u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300374u) [[unlikely]] return; }
L_00300374:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300384u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300384u) [[unlikely]] return; }
L_00300384:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00300388:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_003003DC; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003003A8u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003003A8u) [[unlikely]] return; }
L_003003A8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003003B8u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003003B8u) [[unlikely]] return; }
L_003003B8:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003003D8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003003D8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003003D8u) [[unlikely]] return; }
L_003003D8:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_003003DC:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_003003E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003014B4; } }
L_003003E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003003F0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0086(c, 21u, depth + 1u); else { c.pc = 0x00318390u; return; } if (c.pc != 0x003003F0u) [[unlikely]] return; }
L_003003F0:
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[19].d[0]) { st32((c.r[16].w[0]), 0u);  goto L_00300484; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_0030042C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300418u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300418u) [[unlikely]] return; }
L_00300418:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300428u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300428u) [[unlikely]] return; }
L_00300428:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0030042C:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_00300480; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030044Cu); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0030044Cu) [[unlikely]] return; }
L_0030044C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030045Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0030045Cu) [[unlikely]] return; }
L_0030045C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030047C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030047Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x0030047Cu) [[unlikely]] return; }
L_0030047C:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00300480:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00300484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003014B4; } }
L_0030048C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300494u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_0086(c, 21u, depth + 1u); else { c.pc = 0x00318390u; return; } if (c.pc != 0x00300494u) [[unlikely]] return; }
L_00300494:
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[19].d[0]) { st32((c.r[16].w[0]), 0u);  goto L_00300528; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_003004D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003004BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003004BCu) [[unlikely]] return; }
L_003004BC:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003004CCu); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003004CCu) [[unlikely]] return; }
L_003004CC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003004D0:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_00300524; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003004F0u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003004F0u) [[unlikely]] return; }
L_003004F0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300500u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300500u) [[unlikely]] return; }
L_00300500:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00300520; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300520u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00300520u) [[unlikely]] return; }
L_00300520:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00300524:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00300528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003014B4; } }
L_00300530:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 16496u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 16496u);  if (t) { goto L_003005CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[19], ld32((c.r[4].w[0])));
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00300578; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300564u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300564u) [[unlikely]] return; }
L_00300564:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300574u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300574u) [[unlikely]] return; }
L_00300574:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00300578:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_003005CC; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300598u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300598u) [[unlikely]] return; }
L_00300598:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003005A8u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003005A8u) [[unlikely]] return; }
L_003005A8:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003005C8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003005C8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003005C8u) [[unlikely]] return; }
L_003005C8:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_003005CC:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003014B4; } }
L_003005D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 16496u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 16496u);  if (t) { goto L_00300674; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[19], ld32((c.r[4].w[0])));
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00300620; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030060Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0030060Cu) [[unlikely]] return; }
L_0030060C:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030061Cu); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0030061Cu) [[unlikely]] return; }
L_0030061C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00300620:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_00300674; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300640u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300640u) [[unlikely]] return; }
L_00300640:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300650u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300650u) [[unlikely]] return; }
L_00300650:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00300670; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300670u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00300670u) [[unlikely]] return; }
L_00300670:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00300674:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003014B4; } }
L_00300680:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 16496u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 16496u);  if (t) { goto L_0030071C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[19], ld32((c.r[4].w[0])));
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_003006C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003006B4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003006B4u) [[unlikely]] return; }
L_003006B4:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003006C4u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003006C4u) [[unlikely]] return; }
L_003006C4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003006C8:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_0030071C; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003006E8u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003006E8u) [[unlikely]] return; }
L_003006E8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003006F8u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003006F8u) [[unlikely]] return; }
L_003006F8:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00300718; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300718u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00300718u) [[unlikely]] return; }
L_00300718:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_0030071C:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003014B4; } }
L_0030072C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 16496u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 16496u);  if (t) { goto L_003007C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[19], ld32((c.r[4].w[0])));
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00300774; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300760u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300760u) [[unlikely]] return; }
L_00300760:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300770u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300770u) [[unlikely]] return; }
L_00300770:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00300774:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_003007C8; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300794u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300794u) [[unlikely]] return; }
L_00300794:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003007A4u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003007A4u) [[unlikely]] return; }
L_003007A4:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003007C4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003007C4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003007C4u) [[unlikely]] return; }
L_003007C4:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_003007C8:
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003014B4; } }
L_003007D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 16496u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 16496u);  if (t) { goto L_00300874; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[19], ld32((c.r[4].w[0])));
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00300820; }
    goto L_00300804;
L_00300800:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00300804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030080Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0030080Cu) [[unlikely]] return; }
L_0030080C:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030081Cu); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0030081Cu) [[unlikely]] return; }
L_0030081C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00300820:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_00300874; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300840u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300840u) [[unlikely]] return; }
L_00300840:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300850u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300850u) [[unlikely]] return; }
L_00300850:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00300870; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300870u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00300870u) [[unlikely]] return; }
L_00300870:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00300874:
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003014B4; } }
L_00300884:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 16496u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 16496u);  if (t) { goto L_00300920; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[19], ld32((c.r[4].w[0])));
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_003008CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003008B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003008B8u) [[unlikely]] return; }
L_003008B8:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003008C8u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003008C8u) [[unlikely]] return; }
L_003008C8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003008CC:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_00300920; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003008ECu); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003008ECu) [[unlikely]] return; }
L_003008EC:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003008FCu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003008FCu) [[unlikely]] return; }
L_003008FC:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030091C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030091Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x0030091Cu) [[unlikely]] return; }
L_0030091C:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00300920:
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003014B4; } }
L_00300930:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 16496u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 16496u);  if (t) { goto L_003009CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[19], ld32((c.r[4].w[0])));
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00300978; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300964u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300964u) [[unlikely]] return; }
L_00300964:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300974u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300974u) [[unlikely]] return; }
L_00300974:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00300978:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_003009CC; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300998u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300998u) [[unlikely]] return; }
L_00300998:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003009A8u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003009A8u) [[unlikely]] return; }
L_003009A8:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003009C8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003009C8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003009C8u) [[unlikely]] return; }
L_003009C8:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_003009CC:
    set32(c.r[3], 0u + 6u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003014B4; } }
L_003009DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 16496u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 16496u);  if (t) { goto L_00300A78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[19], ld32((c.r[4].w[0])));
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00300A24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300A10u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300A10u) [[unlikely]] return; }
L_00300A10:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300A20u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300A20u) [[unlikely]] return; }
L_00300A20:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00300A24:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_00300A78; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300A44u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300A44u) [[unlikely]] return; }
L_00300A44:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300A54u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300A54u) [[unlikely]] return; }
L_00300A54:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00300A74; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300A74u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00300A74u) [[unlikely]] return; }
L_00300A74:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00300A78:
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003014B4; } }
L_00300A88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[19], ld32((c.r[2].w[0] + 16500u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[19].d[0]) { st32((c.r[16].w[0]), 0u);  goto L_00300B20; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00300AC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300AB4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300AB4u) [[unlikely]] return; }
L_00300AB4:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300AC4u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300AC4u) [[unlikely]] return; }
L_00300AC4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00300AC8:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_00300B1C; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300AE8u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300AE8u) [[unlikely]] return; }
L_00300AE8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300AF8u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300AF8u) [[unlikely]] return; }
L_00300AF8:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00300B18; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300B18u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00300B18u) [[unlikely]] return; }
L_00300B18:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00300B1C:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00300B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003014B4; } }
L_00300B28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[19], ld32((c.r[2].w[0] + 16500u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[2], 0u + 1u);  goto L_00300BC0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00300B68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300B54u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300B54u) [[unlikely]] return; }
L_00300B54:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300B64u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300B64u) [[unlikely]] return; }
L_00300B64:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00300B68:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_00300BBC; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300B88u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300B88u) [[unlikely]] return; }
L_00300B88:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300B98u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300B98u) [[unlikely]] return; }
L_00300B98:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00300BB8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300BB8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00300BB8u) [[unlikely]] return; }
L_00300BB8:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00300BBC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00300BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003014B4; } }
L_00300BC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[19], ld32((c.r[2].w[0] + 16500u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[3], 0u + 2u);  goto L_00300C60; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00300C08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300BF4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300BF4u) [[unlikely]] return; }
L_00300BF4:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300C04u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300C04u) [[unlikely]] return; }
L_00300C04:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00300C08:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_00300C5C; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300C28u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300C28u) [[unlikely]] return; }
L_00300C28:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300C38u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300C38u) [[unlikely]] return; }
L_00300C38:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00300C58; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300C58u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00300C58u) [[unlikely]] return; }
L_00300C58:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00300C5C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00300C60:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003014B4; } }
L_00300C6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[19], ld32((c.r[2].w[0] + 16500u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[3], 0u + 3u);  goto L_00300D04; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00300CAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300C98u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300C98u) [[unlikely]] return; }
L_00300C98:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300CA8u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300CA8u) [[unlikely]] return; }
L_00300CA8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00300CAC:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_00300D00; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300CCCu); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300CCCu) [[unlikely]] return; }
L_00300CCC:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300CDCu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300CDCu) [[unlikely]] return; }
L_00300CDC:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00300CFC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300CFCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00300CFCu) [[unlikely]] return; }
L_00300CFC:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00300D00:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_00300D04:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003014B4; } }
L_00300D10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[19], ld32((c.r[2].w[0] + 16500u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[3], 0u + 4u);  goto L_00300DA8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00300D50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300D3Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300D3Cu) [[unlikely]] return; }
L_00300D3C:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300D4Cu); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300D4Cu) [[unlikely]] return; }
L_00300D4C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00300D50:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_00300DA4; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300D70u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300D70u) [[unlikely]] return; }
L_00300D70:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300D80u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300D80u) [[unlikely]] return; }
L_00300D80:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00300DA0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300DA0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00300DA0u) [[unlikely]] return; }
L_00300DA0:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00300DA4:
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_00300DA8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003014B4; } }
L_00300DB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[19], ld32((c.r[2].w[0] + 16500u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[3], 0u + 5u);  goto L_00300E4C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00300DF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300DE0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300DE0u) [[unlikely]] return; }
L_00300DE0:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300DF0u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300DF0u) [[unlikely]] return; }
L_00300DF0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00300DF4:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_00300E48; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300E14u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300E14u) [[unlikely]] return; }
L_00300E14:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300E24u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300E24u) [[unlikely]] return; }
L_00300E24:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00300E44; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300E44u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00300E44u) [[unlikely]] return; }
L_00300E44:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00300E48:
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_00300E4C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003014B4; } }
L_00300E58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[19], ld32((c.r[2].w[0] + 16500u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[3], 0u + 6u);  goto L_00300EF0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00300E98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300E84u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300E84u) [[unlikely]] return; }
L_00300E84:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300E94u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300E94u) [[unlikely]] return; }
L_00300E94:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00300E98:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_00300EEC; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300EB8u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300EB8u) [[unlikely]] return; }
L_00300EB8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300EC8u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300EC8u) [[unlikely]] return; }
L_00300EC8:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00300EE8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300EE8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00300EE8u) [[unlikely]] return; }
L_00300EE8:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00300EEC:
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_00300EF0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003014B4; } }
L_00300EFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[19], ld32((c.r[2].w[0] + 16500u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[3], 0u + 7u);  goto L_00300F94; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00300F3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300F28u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300F28u) [[unlikely]] return; }
L_00300F28:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300F38u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300F38u) [[unlikely]] return; }
L_00300F38:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00300F3C:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_00300F90; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300F5Cu); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300F5Cu) [[unlikely]] return; }
L_00300F5C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300F6Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300F6Cu) [[unlikely]] return; }
L_00300F6C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00300F8C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300F8Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00300F8Cu) [[unlikely]] return; }
L_00300F8C:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00300F90:
    set32(c.r[3], 0u + 7u);
    c.budget -= 1;
L_00300F94:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003014B4; } }
L_00300FA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[19], ld32((c.r[2].w[0] + 16504u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[19].d[0]) { st32((c.r[16].w[0]), 0u);  goto L_00301038; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00300FE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300FCCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00300FCCu) [[unlikely]] return; }
L_00300FCC:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00300FDCu); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00300FDCu) [[unlikely]] return; }
L_00300FDC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00300FE0:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_00301034; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301000u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00301000u) [[unlikely]] return; }
L_00301000:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301010u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00301010u) [[unlikely]] return; }
L_00301010:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00301030; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301030u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00301030u) [[unlikely]] return; }
L_00301030:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00301034:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00301038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003014B4; } }
L_00301040:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[19], ld32((c.r[2].w[0] + 16504u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[2], 0u + 1u);  goto L_003010D8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00301080; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030106Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0030106Cu) [[unlikely]] return; }
L_0030106C:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030107Cu); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0030107Cu) [[unlikely]] return; }
L_0030107C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00301080:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_003010D4; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003010A0u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003010A0u) [[unlikely]] return; }
L_003010A0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003010B0u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003010B0u) [[unlikely]] return; }
L_003010B0:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003010D0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003010D0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003010D0u) [[unlikely]] return; }
L_003010D0:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_003010D4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003010D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003014B4; } }
L_003010E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[19], ld32((c.r[2].w[0] + 16504u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[3], 0u + 2u);  goto L_00301178; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00301120; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030110Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0030110Cu) [[unlikely]] return; }
L_0030110C:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030111Cu); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0030111Cu) [[unlikely]] return; }
L_0030111C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00301120:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_00301174; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301140u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00301140u) [[unlikely]] return; }
L_00301140:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301150u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00301150u) [[unlikely]] return; }
L_00301150:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00301170; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301170u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00301170u) [[unlikely]] return; }
L_00301170:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00301174:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00301178:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003014B4; } }
L_00301184:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[19], ld32((c.r[2].w[0] + 16504u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[3], 0u + 3u);  goto L_0030121C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_003011C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003011B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003011B0u) [[unlikely]] return; }
L_003011B0:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003011C0u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003011C0u) [[unlikely]] return; }
L_003011C0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003011C4:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_00301218; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003011E4u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003011E4u) [[unlikely]] return; }
L_003011E4:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003011F4u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003011F4u) [[unlikely]] return; }
L_003011F4:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00301214; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301214u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00301214u) [[unlikely]] return; }
L_00301214:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00301218:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_0030121C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003014B4; } }
L_00301228:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[19], ld32((c.r[2].w[0] + 16504u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[3], 0u + 4u);  goto L_003012C0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00301268; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301254u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00301254u) [[unlikely]] return; }
L_00301254:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301264u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00301264u) [[unlikely]] return; }
L_00301264:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00301268:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_003012BC; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301288u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00301288u) [[unlikely]] return; }
L_00301288:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301298u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00301298u) [[unlikely]] return; }
L_00301298:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003012B8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003012B8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003012B8u) [[unlikely]] return; }
L_003012B8:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_003012BC:
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_003012C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003014B4; } }
L_003012CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[19], ld32((c.r[2].w[0] + 16504u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[3], 0u + 5u);  goto L_00301364; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_0030130C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003012F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003012F8u) [[unlikely]] return; }
L_003012F8:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301308u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00301308u) [[unlikely]] return; }
L_00301308:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0030130C:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_00301360; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030132Cu); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0030132Cu) [[unlikely]] return; }
L_0030132C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030133Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0030133Cu) [[unlikely]] return; }
L_0030133C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030135C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030135Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x0030135Cu) [[unlikely]] return; }
L_0030135C:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00301360:
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_00301364:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003014B4; } }
L_00301370:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[19], ld32((c.r[2].w[0] + 16504u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[3], 0u + 6u);  goto L_00301408; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_003013B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030139Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0030139Cu) [[unlikely]] return; }
L_0030139C:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003013ACu); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003013ACu) [[unlikely]] return; }
L_003013AC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003013B0:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_00301404; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003013D0u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003013D0u) [[unlikely]] return; }
L_003013D0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003013E0u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003013E0u) [[unlikely]] return; }
L_003013E0:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00301400; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301400u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00301400u) [[unlikely]] return; }
L_00301400:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00301404:
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_00301408:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003014B4; } }
L_00301414:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[19], ld32((c.r[2].w[0] + 16504u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[3], 0u + 7u);  goto L_003014AC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00301454; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301440u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00301440u) [[unlikely]] return; }
L_00301440:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301450u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00301450u) [[unlikely]] return; }
L_00301450:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00301454:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_003014A8; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301474u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00301474u) [[unlikely]] return; }
L_00301474:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301484u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00301484u) [[unlikely]] return; }
L_00301484:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003014A4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003014A4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003014A4u) [[unlikely]] return; }
L_003014A4:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_003014A8:
    set32(c.r[3], 0u + 7u);
    c.budget -= 1;
L_003014AC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003014B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003014E0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003016D8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  goto L_003016CC; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  goto L_003016BC; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  goto L_003016AC; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  goto L_0030169C; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  goto L_0030168C; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  goto L_0030167C; }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  goto L_0030166C; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  goto L_0030165C; }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[5].w[0] + 4u)));  goto L_00301648; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[5].w[0] + 4u)));  goto L_00301634; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[5].w[0] + 4u)));  goto L_00301620; }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[5].w[0] + 4u)));  goto L_0030160C; }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[5].w[0] + 4u)));  goto L_003015F0; }
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[5].w[0] + 4u)));  goto L_003015D0; }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[5].w[0] + 4u)));  goto L_003015B0; }
    set32(c.r[3], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003016E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003016E8; } }
L_003015B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] >> 20);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003015CC; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_003015CC:
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 1;
L_003015D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] >> 20);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003015EC; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_003015EC:
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 1;
L_003015F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] >> 20);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00301608; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00301608:
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 1;
L_0030160C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] >> 19);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 5;
L_00301620:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] >> 18);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 5;
L_00301634:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] >> 17);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 5;
L_00301648:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] >> 16);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 5;
L_0030165C:
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    set32(c.r[3], c.r[3].w[0] >> 15);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 4;
L_0030166C:
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    set32(c.r[3], c.r[3].w[0] >> 14);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 4;
L_0030167C:
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    set32(c.r[3], c.r[3].w[0] >> 13);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 4;
L_0030168C:
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    set32(c.r[3], c.r[3].w[0] >> 12);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 4;
L_0030169C:
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    set32(c.r[3], c.r[3].w[0] >> 11);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 4;
L_003016AC:
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    set32(c.r[3], c.r[3].w[0] >> 10);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 4;
L_003016BC:
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    set32(c.r[3], c.r[3].w[0] >> 9);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 4;
L_003016CC:
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    set32(c.r[3], c.r[3].w[0] >> 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_003016D8:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    set32(c.r[3], c.r[3].w[0] >> 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_003016E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003016F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] - 25577u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00301728; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_00301730; } }
L_00301728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301730u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x00301730u) [[unlikely]] return; }
L_00301730:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 76u);
    set32(c.r[7], 0u + 16u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301754u); set32(c.r[9], 0u + 26u);  if (depth < kMaxDepth) unit_0068(c, 338u, depth + 1u); else { c.pc = 0x002A2C80u; return; } if (c.pc != 0x00301754u) [[unlikely]] return; }
L_00301754:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003017B0; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301780u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00301780u) [[unlikely]] return; }
L_00301780:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00301790u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00301790u) [[unlikely]] return; }
L_00301790:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003017B0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003017B0u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003017B0u) [[unlikely]] return; }
L_003017B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] + 16176u);
    set32(c.r[4], c.r[4].w[0] - 25673u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_003017D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 656u), c.r[2].w[0]);  if (t) { goto L_003017E4; } }
L_003017D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003017E0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003017E0u) [[unlikely]] return; }
L_003017E0:
    st32((c.r[18].w[0] + 656u), c.r[2].w[0]);
    c.budget -= 1;
L_003017E4:
    st8((c.r[18].w[0] + 660u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 661u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 662u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00301810:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 224ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[8], c.r[3].w[0] >> 5);  if (t) { goto L_00301830; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[9], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[8].d[0] | c.r[9].d[0];  if (t) { goto L_00301840; } }
L_00301830:
    set32(c.r[3], 0u + 1u);
    set32(c.r[9], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = ~(c.r[9].d[0] | 0ull);
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.budget -= 4;
L_00301840:
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[6], 0u - 225u);
    set32(c.r[5], c.r[3].w[0] << 5);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], 0u + 1u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.budget -= 9;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; st32((c.r[4].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_00301868; } }
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00301868:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 28ull;
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] >> 2);  if (t) { goto L_00301880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] | c.r[9].d[0];  if (t) { goto L_00301888; } }
L_00301880:
    c.r[3].d[0] = ~(c.r[9].d[0] | 0ull);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 2;
L_00301888:
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], 0u - 29u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  c.pc = t; return; }
L_003018B0:
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xE0000000u);
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[8], c.r[3].w[0] >> 29);  if (t) { goto L_003018D4; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[9], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[8].d[0] | c.r[9].d[0];  if (t) { goto L_003018E4; } }
L_003018D4:
    set32(c.r[3], 0u + 1u);
    set32(c.r[9], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = ~(c.r[9].d[0] | 0ull);
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.budget -= 4;
L_003018E4:
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], c.r[3].w[0] << 29);
    set32(c.r[3], 0u + 1u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[6].d[0] = c.r[6].d[0] << 35;
    c.r[6].d[0] = c.r[6].d[0] >> 35;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.budget -= 9;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; st32((c.r[4].w[0] + 8u), c.r[5].w[0]);  if (t) { goto L_0030190C; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030190C:
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x1C000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] >> 26);  if (t) { goto L_00301928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] | c.r[9].d[0];  if (t) { goto L_00301930; } }
L_00301928:
    c.r[3].d[0] = ~(c.r[9].d[0] | 0ull);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 2;
L_00301930:
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xE3FF0000u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    set32(c.r[3], c.r[3].w[0] << 26);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  c.pc = t; return; }
L_00301950:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[6].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[5].d[0] = c.r[3].d[0] & c.r[5].d[0];
    set32(c.r[7], c.r[6].w[0] >> 16);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[6], c.r[5].w[0] >> 17);
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[5].d[0] = c.r[3].d[0] & 32768ull;
    set32(c.r[8], c.r[5].w[0] >> 15);
    set32(c.r[5], c.r[4].w[0] >> 20);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] >> 21);
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[5].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[5], c.r[5].w[0] >> 22);
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] >> 23);
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[5].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], c.r[5].w[0] >> 24);
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] >> 28);
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[5].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[5], c.r[5].w[0] >> 29);
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] >> 30);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[4].w[0] >> 31);
    c.r[2].d[0] = c.r[2].d[0] & 6ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] >> 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 54;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_00301A30:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00301C30; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 25552u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00300000u < 16384u) { entry = entries_0080[(t - 0x00300000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00301A58:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 1792ull;
    set32(c.r[3], c.r[3].w[0] >> 8);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    set32(c.r[3], c.r[3].w[0] >> 11);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_00301C30; } }
L_00301A7C:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 28672ull;
    set32(c.r[3], c.r[3].w[0] >> 12);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    set32(c.r[3], c.r[3].w[0] >> 15);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_00301C30; } }
L_00301AA0:
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    set32(c.r[5], c.r[5].w[0] >> 16);
    st32((c.r[6].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] >> 19);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_00301C30; } }
L_00301ACC:
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    set32(c.r[5], c.r[5].w[0] >> 20);
    st32((c.r[6].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] >> 23);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_00301C30; } }
L_00301AF8:
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x07000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    set32(c.r[5], c.r[5].w[0] >> 24);
    st32((c.r[6].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] >> 27);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_00301C30; } }
L_00301B24:
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    set32(c.r[5], c.r[5].w[0] >> 28);
    st32((c.r[6].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_00301C30; } }
L_00301B50:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    set32(c.r[3], c.r[3].w[0] >> 3);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_00301C30; } }
L_00301B70:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] & 112ull;
    set32(c.r[3], c.r[3].w[0] >> 4);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    set32(c.r[3], c.r[3].w[0] >> 7);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_00301C30; } }
L_00301B94:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] & 1792ull;
    set32(c.r[3], c.r[3].w[0] >> 8);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    set32(c.r[3], c.r[3].w[0] >> 11);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_00301C30; } }
L_00301BB8:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] & 28672ull;
    set32(c.r[3], c.r[3].w[0] >> 12);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    set32(c.r[3], c.r[3].w[0] >> 15);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_00301C30; } }
L_00301BDC:
    set32(c.r[8], ld32((c.r[4].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    set32(c.r[5], c.r[5].w[0] >> 16);
    st32((c.r[6].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] >> 19);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_00301C30; } }
L_00301C08:
    set32(c.r[8], ld32((c.r[4].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    set32(c.r[5], c.r[5].w[0] >> 20);
    st32((c.r[6].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] >> 23);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 10;
L_00301C30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00301C40:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00301ED4; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 25504u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00300000u < 16384u) { entry = entries_0080[(t - 0x00300000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00301C68:
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
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00301ED4; } }
L_00301C98:
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[7].w[0] << 15);
    set32(c.r[7], 0u - 28673u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[6], c.r[6].w[0] << 12);
    c.r[5].d[0] = c.r[5].d[0] | 32767ull;
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00301ED4; } }
L_00301CCC:
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[7].w[0] << 19);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFF80000u);
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[7].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00301ED4; } }
L_00301D04:
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[7].w[0] << 23);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF8F0000u);
    set32(c.r[6], c.r[6].w[0] << 20);
    c.r[7].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF7F0000u);
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00301ED4; } }
L_00301D3C:
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[7].w[0] << 27);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xF8FF0000u);
    set32(c.r[6], c.r[6].w[0] << 24);
    c.r[7].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00301ED4; } }
L_00301D74:
    set32(c.r[3], c.r[7].w[0] << 31);
    set32(c.r[5], c.r[6].w[0] << 28);
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x8FFF0000u);
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[5].d[0] << 33;
    c.r[5].d[0] = c.r[5].d[0] >> 33;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00301ED4; } }
L_00301DA8:
    set32(c.r[8], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[7], 0u - 8u);
    set32(c.r[5], 0u - 9u);
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_00301ED4; } }
L_00301DD4:
    set32(c.r[8], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[7].w[0] << 7);
    set32(c.r[7], 0u - 113u);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], 0u - 129u);
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_00301ED4; } }
L_00301E04:
    set32(c.r[8], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[7].w[0] << 11);
    set32(c.r[7], 0u - 1793u);
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[5], 0u - 2049u);
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_00301ED4; } }
L_00301E34:
    set32(c.r[8], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[7].w[0] << 15);
    set32(c.r[7], 0u - 28673u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[6], c.r[6].w[0] << 12);
    c.r[5].d[0] = c.r[5].d[0] | 32767ull;
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_00301ED4; } }
L_00301E68:
    set32(c.r[8], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[7].w[0] << 19);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFF80000u);
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[7].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_00301ED4; } }
L_00301EA0:
    set32(c.r[8], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[7].w[0] << 23);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF8F0000u);
    set32(c.r[6], c.r[6].w[0] << 20);
    c.r[7].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF7F0000u);
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 13;
L_00301ED4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00301EE0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[1].d[0] = c.r[22].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003021E8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00301F2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00301F68; } }
L_00301F2C:
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00301F3Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00301F3Cu) [[unlikely]] return; }
L_00301F3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 28784u);  if (t) { goto L_00301F58; } }
L_00301F48:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00301F58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00301F64; } }
L_00301F58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00301F48u | kUnwind; return; } goto L_00301F48; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00301F64:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00301F68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00301FA0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u - 3841u);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[4].d[0] & 3840ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[4].w[0] >> 8);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003020A0; } }
L_00301FA0:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_00301FB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00301FE8; } }
L_00301FB0:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00301FBCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00301FBCu) [[unlikely]] return; }
L_00301FBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 31120u);  if (t) { goto L_00301FD8; } }
L_00301FC8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00301FD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00301FE4; } }
L_00301FD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00301FC8u | kUnwind; return; } goto L_00301FC8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00301FE4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00301FE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00302020; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u - 241u);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[4].d[0] & 240ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[4].w[0] >> 4);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003020A0; } }
L_00302020:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_00302030; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00302068; } }
L_00302030:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030203Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030203Cu) [[unlikely]] return; }
L_0030203C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 18440u);  if (t) { goto L_00302058; } }
L_00302048:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00302058; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00302064; } }
L_00302058:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00302048u | kUnwind; return; } goto L_00302048; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00302064:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00302068:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], ld32((c.r[19].w[0] + 224u)));  goto L_003020A4; }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 4095ull;
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[4].d[0] & 61440ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[4].w[0] >> 12);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 12);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 12;
L_003020A0:
    set32(c.r[19], ld32((c.r[19].w[0] + 224u)));
    c.budget -= 1;
L_003020A4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003021EC; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003021DC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 27556u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003021DC; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 188u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003021DC; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_003020E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003021EC; } }
L_003020E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003020ECu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 529u, depth + 1u); else { c.pc = 0x002D7CE0u; return; } if (c.pc != 0x003020ECu) [[unlikely]] return; }
L_003020EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 60u)));  goto L_003020FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003021EC; } }
L_003020FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00302114; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030210Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030210Cu) [[unlikely]] return; }
L_0030210C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00302118; } }
L_00302114:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00302118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00302144; } }
L_00302120:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00302134; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00302134u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00302134u) [[unlikely]] return; }
L_00302134:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_00302144; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00302150; } }
L_00302144:
    c.r[2].d[0] = c.r[20].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00302120u | kUnwind; return; } goto L_00302120; }
L_00302150:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 12u)));  goto L_00302160; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003021EC; } }
L_00302160:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003021DC; } }
    c.r[8].d[0] = ld16((c.r[2].w[0] + 68u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[7], ld32((c.r[17].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] << (c.r[22].w[0] & 31u));
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    set32(c.r[3], c.r[6].w[0] >> 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 28);
    c.r[1].d[0] = c.r[2].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003021DC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xCFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[2], c.r[8].w[0] << 28);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 7;
L_003021DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003021EC; } }
L_003021E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003021EC:
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
L_00302220:
    set32(c.r[29], c.r[29].w[0] - 1120u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1116u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030224Cu); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_0084(c, 104u, depth + 1u); else { c.pc = 0x00310CE0u; return; } if (c.pc != 0x0030224Cu) [[unlikely]] return; }
L_0030224C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030225Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0080(c, 503u, depth + 1u); else { c.pc = 0x00303730u; return; } if (c.pc != 0x0030225Cu) [[unlikely]] return; }
L_0030225C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302264u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 502u, depth + 1u); else { c.pc = 0x00303710u; return; } if (c.pc != 0x00302264u) [[unlikely]] return; }
L_00302264:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1116u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302278u); set32(c.r[18], c.r[18].w[0] - 24336u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00302278u) [[unlikely]] return; }
L_00302278:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_00302298; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[29].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302294u); set32(c.r[5], c.r[5].w[0] - 24344u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302294u) [[unlikely]] return; }
L_00302294:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00302298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003022A0u); set32(c.r[4], c.r[29].w[0] + 1116u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003022A0u) [[unlikely]] return; }
L_003022A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[29].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003022B0u); set32(c.r[5], c.r[5].w[0] - 24352u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003022B0u) [[unlikely]] return; }
L_003022B0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003022C8u); set32(c.r[6], c.r[6].w[0] - 24360u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003022C8u) [[unlikely]] return; }
L_003022C8:
    set32(c.r[4], c.r[29].w[0] + 1116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003022D4u); set32(c.r[5], c.r[29].w[0] + 848u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003022D4u) [[unlikely]] return; }
L_003022D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003022E4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0080(c, 430u, depth + 1u); else { c.pc = 0x003030D0u; return; } if (c.pc != 0x003022E4u) [[unlikely]] return; }
L_003022E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003022ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 429u, depth + 1u); else { c.pc = 0x003030B0u; return; } if (c.pc != 0x003022ECu) [[unlikely]] return; }
L_003022EC:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1116u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302300u); set32(c.r[18], c.r[18].w[0] - 23888u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00302300u) [[unlikely]] return; }
L_00302300:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_00302320; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[29].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030231Cu); set32(c.r[5], c.r[5].w[0] - 23896u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030231Cu) [[unlikely]] return; }
L_0030231C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00302320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302328u); set32(c.r[4], c.r[29].w[0] + 1116u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302328u) [[unlikely]] return; }
L_00302328:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[29].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302338u); set32(c.r[5], c.r[5].w[0] - 23904u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302338u) [[unlikely]] return; }
L_00302338:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 592u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302350u); set32(c.r[6], c.r[6].w[0] - 23912u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00302350u) [[unlikely]] return; }
L_00302350:
    set32(c.r[4], c.r[29].w[0] + 1116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030235Cu); set32(c.r[5], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x0030235Cu) [[unlikely]] return; }
L_0030235C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030236Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0080(c, 372u, depth + 1u); else { c.pc = 0x00302BD0u; return; } if (c.pc != 0x0030236Cu) [[unlikely]] return; }
L_0030236C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302374u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 371u, depth + 1u); else { c.pc = 0x00302BB0u; return; } if (c.pc != 0x00302374u) [[unlikely]] return; }
L_00302374:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1116u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302388u); set32(c.r[18], c.r[18].w[0] - 23568u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00302388u) [[unlikely]] return; }
L_00302388:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_003023A8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[29].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003023A4u); set32(c.r[5], c.r[5].w[0] - 23576u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003023A4u) [[unlikely]] return; }
L_003023A4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003023A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003023B0u); set32(c.r[4], c.r[29].w[0] + 1116u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003023B0u) [[unlikely]] return; }
L_003023B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[29].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003023C0u); set32(c.r[5], c.r[5].w[0] - 23584u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003023C0u) [[unlikely]] return; }
L_003023C0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003023D8u); set32(c.r[6], c.r[6].w[0] - 23592u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003023D8u) [[unlikely]] return; }
L_003023D8:
    set32(c.r[4], c.r[29].w[0] + 1116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003023E4u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003023E4u) [[unlikely]] return; }
L_003023E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003023F4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0080(c, 294u, depth + 1u); else { c.pc = 0x003024D0u; return; } if (c.pc != 0x003023F4u) [[unlikely]] return; }
L_003023F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003023FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 293u, depth + 1u); else { c.pc = 0x003024B0u; return; } if (c.pc != 0x003023FCu) [[unlikely]] return; }
L_003023FC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1116u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302410u); set32(c.r[16], c.r[16].w[0] - 23080u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00302410u) [[unlikely]] return; }
L_00302410:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00302430; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[29].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030242Cu); set32(c.r[5], c.r[5].w[0] - 23088u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030242Cu) [[unlikely]] return; }
L_0030242C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00302430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302438u); set32(c.r[4], c.r[29].w[0] + 1116u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302438u) [[unlikely]] return; }
L_00302438:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[29].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302448u); set32(c.r[5], c.r[5].w[0] - 23096u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302448u) [[unlikely]] return; }
L_00302448:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302460u); set32(c.r[6], c.r[6].w[0] - 23104u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00302460u) [[unlikely]] return; }
L_00302460:
    set32(c.r[4], c.r[29].w[0] + 1116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030246Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x0030246Cu) [[unlikely]] return; }
L_0030246C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302478u); set32(c.r[5], c.r[29].w[0] + 1116u);  if (depth < kMaxDepth) unit_0084(c, 91u, depth + 1u); else { c.pc = 0x00310B10u; return; } if (c.pc != 0x00302478u) [[unlikely]] return; }
L_00302478:
    set32(c.r[4], c.r[29].w[0] + 1116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302484u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 86u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x00302484u) [[unlikely]] return; }
L_00302484:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1120u);  c.pc = t; return; }
L_003024B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 28);  c.pc = t; return; }
L_003024D0:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00302580; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00302508; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302504u);  if (depth < kMaxDepth) unit_0080(c, 310u, depth + 1u); else { c.pc = 0x00302640u; return; } if (c.pc != 0x00302504u) [[unlikely]] return; }
L_00302504:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00302508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302510u);  if (depth < kMaxDepth) unit_0080(c, 309u, depth + 1u); else { c.pc = 0x00302620u; return; } if (c.pc != 0x00302510u) [[unlikely]] return; }
L_00302510:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302524u); set32(c.r[16], c.r[16].w[0] - 23168u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00302524u) [[unlikely]] return; }
L_00302524:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00302544; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302540u); set32(c.r[5], c.r[5].w[0] - 23176u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302540u) [[unlikely]] return; }
L_00302540:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00302544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030254Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030254Cu) [[unlikely]] return; }
L_0030254C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030255Cu); set32(c.r[5], c.r[5].w[0] - 23184u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030255Cu) [[unlikely]] return; }
L_0030255C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302574u); set32(c.r[6], c.r[6].w[0] - 23192u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00302574u) [[unlikely]] return; }
L_00302574:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302580u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00302580u) [[unlikely]] return; }
L_00302580:
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0F000000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 23120u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003025A0u); set32(c.r[18], c.r[2].w[0] >> 24);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x003025A0u) [[unlikely]] return; }
L_003025A0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_003025C0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003025BCu); set32(c.r[5], c.r[5].w[0] - 23136u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003025BCu) [[unlikely]] return; }
L_003025BC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003025C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003025C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003025C8u) [[unlikely]] return; }
L_003025C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003025D8u); set32(c.r[5], c.r[5].w[0] - 23144u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003025D8u) [[unlikely]] return; }
L_003025D8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003025F0u); set32(c.r[6], c.r[6].w[0] - 23152u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003025F0u) [[unlikely]] return; }
L_003025F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003025FCu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003025FCu) [[unlikely]] return; }
L_003025FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00302620:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 23);  c.pc = t; return; }
L_00302640:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003026F0; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00302678; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302674u);  if (depth < kMaxDepth) unit_0080(c, 326u, depth + 1u); else { c.pc = 0x003027B0u; return; } if (c.pc != 0x00302674u) [[unlikely]] return; }
L_00302674:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00302678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302680u);  if (depth < kMaxDepth) unit_0080(c, 325u, depth + 1u); else { c.pc = 0x00302790u; return; } if (c.pc != 0x00302680u) [[unlikely]] return; }
L_00302680:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302694u); set32(c.r[16], c.r[16].w[0] - 23264u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00302694u) [[unlikely]] return; }
L_00302694:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_003026B4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003026B0u); set32(c.r[5], c.r[5].w[0] - 23272u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003026B0u) [[unlikely]] return; }
L_003026B0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003026B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003026BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003026BCu) [[unlikely]] return; }
L_003026BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003026CCu); set32(c.r[5], c.r[5].w[0] - 23280u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003026CCu) [[unlikely]] return; }
L_003026CC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003026E4u); set32(c.r[6], c.r[6].w[0] - 23288u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003026E4u) [[unlikely]] return; }
L_003026E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003026F0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003026F0u) [[unlikely]] return; }
L_003026F0:
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 23216u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302710u); set32(c.r[18], c.r[2].w[0] >> 22);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00302710u) [[unlikely]] return; }
L_00302710:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00302730; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030272Cu); set32(c.r[5], c.r[5].w[0] - 23232u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030272Cu) [[unlikely]] return; }
L_0030272C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00302730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302738u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302738u) [[unlikely]] return; }
L_00302738:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302748u); set32(c.r[5], c.r[5].w[0] - 23240u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302748u) [[unlikely]] return; }
L_00302748:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302760u); set32(c.r[6], c.r[6].w[0] - 23248u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00302760u) [[unlikely]] return; }
L_00302760:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030276Cu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x0030276Cu) [[unlikely]] return; }
L_0030276C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00302790:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 21);  c.pc = t; return; }
L_003027B0:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00302860; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003027E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003027E4u);  if (depth < kMaxDepth) unit_0080(c, 342u, depth + 1u); else { c.pc = 0x00302920u; return; } if (c.pc != 0x003027E4u) [[unlikely]] return; }
L_003027E4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003027E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003027F0u);  if (depth < kMaxDepth) unit_0080(c, 341u, depth + 1u); else { c.pc = 0x00302900u; return; } if (c.pc != 0x003027F0u) [[unlikely]] return; }
L_003027F0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302804u); set32(c.r[16], c.r[16].w[0] - 23344u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00302804u) [[unlikely]] return; }
L_00302804:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00302824; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302820u); set32(c.r[5], c.r[5].w[0] - 23360u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302820u) [[unlikely]] return; }
L_00302820:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00302824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030282Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030282Cu) [[unlikely]] return; }
L_0030282C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030283Cu); set32(c.r[5], c.r[5].w[0] - 23368u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030283Cu) [[unlikely]] return; }
L_0030283C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302854u); set32(c.r[6], c.r[6].w[0] - 23376u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00302854u) [[unlikely]] return; }
L_00302854:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302860u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00302860u) [[unlikely]] return; }
L_00302860:
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 23304u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302880u); set32(c.r[18], c.r[2].w[0] >> 19);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00302880u) [[unlikely]] return; }
L_00302880:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_003028A0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030289Cu); set32(c.r[5], c.r[5].w[0] - 23312u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030289Cu) [[unlikely]] return; }
L_0030289C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003028A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003028A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003028A8u) [[unlikely]] return; }
L_003028A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003028B8u); set32(c.r[5], c.r[5].w[0] - 23320u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003028B8u) [[unlikely]] return; }
L_003028B8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003028D0u); set32(c.r[6], c.r[6].w[0] - 23328u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003028D0u) [[unlikely]] return; }
L_003028D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003028DCu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003028DCu) [[unlikely]] return; }
L_003028DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00302900:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 17);  c.pc = t; return; }
L_00302920:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003029D0; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00302958; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302954u);  if (depth < kMaxDepth) unit_0080(c, 358u, depth + 1u); else { c.pc = 0x00302A80u; return; } if (c.pc != 0x00302954u) [[unlikely]] return; }
L_00302954:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00302958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302960u);  if (depth < kMaxDepth) unit_0080(c, 357u, depth + 1u); else { c.pc = 0x00302A70u; return; } if (c.pc != 0x00302960u) [[unlikely]] return; }
L_00302960:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302974u); set32(c.r[16], c.r[16].w[0] - 23440u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00302974u) [[unlikely]] return; }
L_00302974:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00302994; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302990u); set32(c.r[5], c.r[5].w[0] - 23456u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302990u) [[unlikely]] return; }
L_00302990:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00302994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030299Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030299Cu) [[unlikely]] return; }
L_0030299C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003029ACu); set32(c.r[5], c.r[5].w[0] - 23464u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003029ACu) [[unlikely]] return; }
L_003029AC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003029C4u); set32(c.r[6], c.r[6].w[0] - 23472u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003029C4u) [[unlikely]] return; }
L_003029C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003029D0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003029D0u) [[unlikely]] return; }
L_003029D0:
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 23392u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003029F0u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x003029F0u) [[unlikely]] return; }
L_003029F0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00302A10; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302A0Cu); set32(c.r[5], c.r[5].w[0] - 23400u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302A0Cu) [[unlikely]] return; }
L_00302A0C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00302A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302A18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302A18u) [[unlikely]] return; }
L_00302A18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302A28u); set32(c.r[5], c.r[5].w[0] - 23408u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302A28u) [[unlikely]] return; }
L_00302A28:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302A40u); set32(c.r[6], c.r[6].w[0] - 23416u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00302A40u) [[unlikely]] return; }
L_00302A40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302A4Cu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00302A4Cu) [[unlikely]] return; }
L_00302A4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00302A70:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 65280ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 8);  c.pc = t; return; }
L_00302A80:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00302B18; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 23528u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302ABCu); c.r[17].d[0] = c.r[2].d[0] & 15ull;  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00302ABCu) [[unlikely]] return; }
L_00302ABC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_00302ADC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302AD8u); set32(c.r[5], c.r[5].w[0] - 23536u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302AD8u) [[unlikely]] return; }
L_00302AD8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00302ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302AE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302AE4u) [[unlikely]] return; }
L_00302AE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302AF4u); set32(c.r[5], c.r[5].w[0] - 23544u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302AF4u) [[unlikely]] return; }
L_00302AF4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302B0Cu); set32(c.r[6], c.r[6].w[0] - 23552u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00302B0Cu) [[unlikely]] return; }
L_00302B0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302B18u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00302B18u) [[unlikely]] return; }
L_00302B18:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 23488u);
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302B34u); set32(c.r[17], c.r[2].w[0] >> 4);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00302B34u) [[unlikely]] return; }
L_00302B34:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_00302B54; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302B50u); set32(c.r[5], c.r[5].w[0] - 23496u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302B50u) [[unlikely]] return; }
L_00302B50:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00302B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302B5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302B5Cu) [[unlikely]] return; }
L_00302B5C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302B6Cu); set32(c.r[5], c.r[5].w[0] - 23504u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302B6Cu) [[unlikely]] return; }
L_00302B6C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302B84u); set32(c.r[6], c.r[6].w[0] - 23512u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00302B84u) [[unlikely]] return; }
L_00302B84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302B90u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00302B90u) [[unlikely]] return; }
L_00302B90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00302BB0:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 28);  c.pc = t; return; }
L_00302BD0:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00302C80; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00302C08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302C04u);  if (depth < kMaxDepth) unit_0080(c, 388u, depth + 1u); else { c.pc = 0x00302D40u; return; } if (c.pc != 0x00302C04u) [[unlikely]] return; }
L_00302C04:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00302C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302C10u);  if (depth < kMaxDepth) unit_0080(c, 387u, depth + 1u); else { c.pc = 0x00302D20u; return; } if (c.pc != 0x00302C10u) [[unlikely]] return; }
L_00302C10:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302C24u); set32(c.r[16], c.r[16].w[0] - 23648u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00302C24u) [[unlikely]] return; }
L_00302C24:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00302C44; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302C40u); set32(c.r[5], c.r[5].w[0] - 23656u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302C40u) [[unlikely]] return; }
L_00302C40:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00302C44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302C4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302C4Cu) [[unlikely]] return; }
L_00302C4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302C5Cu); set32(c.r[5], c.r[5].w[0] - 23664u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302C5Cu) [[unlikely]] return; }
L_00302C5C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302C74u); set32(c.r[6], c.r[6].w[0] - 23672u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00302C74u) [[unlikely]] return; }
L_00302C74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302C80u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00302C80u) [[unlikely]] return; }
L_00302C80:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0F000000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 23608u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302CA0u); set32(c.r[18], c.r[2].w[0] >> 24);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00302CA0u) [[unlikely]] return; }
L_00302CA0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00302CC0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302CBCu); set32(c.r[5], c.r[5].w[0] - 23616u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302CBCu) [[unlikely]] return; }
L_00302CBC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00302CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302CC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302CC8u) [[unlikely]] return; }
L_00302CC8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302CD8u); set32(c.r[5], c.r[5].w[0] - 23624u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302CD8u) [[unlikely]] return; }
L_00302CD8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302CF0u); set32(c.r[6], c.r[6].w[0] - 23632u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00302CF0u) [[unlikely]] return; }
L_00302CF0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302CFCu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00302CFCu) [[unlikely]] return; }
L_00302CFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00302D20:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F00000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 20);  c.pc = t; return; }
L_00302D40:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00302DF0; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00302D78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302D74u);  if (depth < kMaxDepth) unit_0080(c, 405u, depth + 1u); else { c.pc = 0x00302EA0u; return; } if (c.pc != 0x00302D74u) [[unlikely]] return; }
L_00302D74:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00302D78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302D80u);  if (depth < kMaxDepth) unit_0080(c, 404u, depth + 1u); else { c.pc = 0x00302E90u; return; } if (c.pc != 0x00302D80u) [[unlikely]] return; }
L_00302D80:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302D94u); set32(c.r[16], c.r[16].w[0] - 23728u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00302D94u) [[unlikely]] return; }
L_00302D94:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00302DB4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302DB0u); set32(c.r[5], c.r[5].w[0] - 23736u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302DB0u) [[unlikely]] return; }
L_00302DB0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00302DB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302DBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302DBCu) [[unlikely]] return; }
L_00302DBC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302DCCu); set32(c.r[5], c.r[5].w[0] - 23744u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302DCCu) [[unlikely]] return; }
L_00302DCC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302DE4u); set32(c.r[6], c.r[6].w[0] - 23752u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00302DE4u) [[unlikely]] return; }
L_00302DE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302DF0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00302DF0u) [[unlikely]] return; }
L_00302DF0:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 23688u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302E10u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00302E10u) [[unlikely]] return; }
L_00302E10:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00302E30; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302E2Cu); set32(c.r[5], c.r[5].w[0] - 23696u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302E2Cu) [[unlikely]] return; }
L_00302E2C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00302E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302E38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302E38u) [[unlikely]] return; }
L_00302E38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302E48u); set32(c.r[5], c.r[5].w[0] - 23704u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302E48u) [[unlikely]] return; }
L_00302E48:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302E60u); set32(c.r[6], c.r[6].w[0] - 23712u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00302E60u) [[unlikely]] return; }
L_00302E60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302E6Cu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00302E6Cu) [[unlikely]] return; }
L_00302E6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00302E90:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 61440ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 12);  c.pc = t; return; }
L_00302EA0:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00302F50; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00302ED8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302ED4u);  if (depth < kMaxDepth) unit_0080(c, 421u, depth + 1u); else { c.pc = 0x00303000u; return; } if (c.pc != 0x00302ED4u) [[unlikely]] return; }
L_00302ED4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00302ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302EE0u);  if (depth < kMaxDepth) unit_0080(c, 420u, depth + 1u); else { c.pc = 0x00302FF0u; return; } if (c.pc != 0x00302EE0u) [[unlikely]] return; }
L_00302EE0:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302EF4u); set32(c.r[17], c.r[17].w[0] - 23808u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00302EF4u) [[unlikely]] return; }
L_00302EF4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00302F14; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F10u); set32(c.r[5], c.r[5].w[0] - 23816u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302F10u) [[unlikely]] return; }
L_00302F10:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00302F14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302F1Cu) [[unlikely]] return; }
L_00302F1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F2Cu); set32(c.r[5], c.r[5].w[0] - 23824u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302F2Cu) [[unlikely]] return; }
L_00302F2C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F44u); set32(c.r[6], c.r[6].w[0] - 23832u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00302F44u) [[unlikely]] return; }
L_00302F44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F50u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00302F50u) [[unlikely]] return; }
L_00302F50:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 23768u);
    c.r[2].d[0] = c.r[2].d[0] & 3840ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F6Cu); set32(c.r[17], c.r[2].w[0] >> 8);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00302F6Cu) [[unlikely]] return; }
L_00302F6C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_00302F8C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F88u); set32(c.r[5], c.r[5].w[0] - 23776u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302F88u) [[unlikely]] return; }
L_00302F88:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00302F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302F94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302F94u) [[unlikely]] return; }
L_00302F94:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302FA4u); set32(c.r[5], c.r[5].w[0] - 23784u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00302FA4u) [[unlikely]] return; }
L_00302FA4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302FBCu); set32(c.r[6], c.r[6].w[0] - 23792u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00302FBCu) [[unlikely]] return; }
L_00302FBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00302FC8u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00302FC8u) [[unlikely]] return; }
L_00302FC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00302FF0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 4);  c.pc = t; return; }
L_00303000:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[17], c.r[17].w[0] - 23848u);
    c.r[16].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303030u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00303030u) [[unlikely]] return; }
L_00303030:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00303050; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030304Cu); set32(c.r[5], c.r[5].w[0] - 23856u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030304Cu) [[unlikely]] return; }
L_0030304C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00303050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303058u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303058u) [[unlikely]] return; }
    goto L_00303058;
L_00303054:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00303058:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303068u); set32(c.r[5], c.r[5].w[0] - 23864u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303068u) [[unlikely]] return; }
L_00303068:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303080u); set32(c.r[6], c.r[6].w[0] - 23872u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00303080u) [[unlikely]] return; }
L_00303080:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030308Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x0030308Cu) [[unlikely]] return; }
L_0030308C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003030B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 28);  c.pc = t; return; }
L_003030D0:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00303180; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00303108; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303104u);  if (depth < kMaxDepth) unit_0080(c, 447u, depth + 1u); else { c.pc = 0x00303240u; return; } if (c.pc != 0x00303104u) [[unlikely]] return; }
L_00303104:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00303108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303110u);  if (depth < kMaxDepth) unit_0080(c, 446u, depth + 1u); else { c.pc = 0x00303220u; return; } if (c.pc != 0x00303110u) [[unlikely]] return; }
L_00303110:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303124u); set32(c.r[16], c.r[16].w[0] - 23968u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00303124u) [[unlikely]] return; }
L_00303124:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00303144; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303140u); set32(c.r[5], c.r[5].w[0] - 23976u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303140u) [[unlikely]] return; }
L_00303140:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00303144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030314Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030314Cu) [[unlikely]] return; }
L_0030314C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00303154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030315Cu); set32(c.r[5], c.r[5].w[0] - 23984u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030315Cu) [[unlikely]] return; }
L_0030315C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303174u); set32(c.r[6], c.r[6].w[0] - 23992u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00303174u) [[unlikely]] return; }
L_00303174:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303180u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00303180u) [[unlikely]] return; }
L_00303180:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0F000000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 23928u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003031A0u); set32(c.r[18], c.r[2].w[0] >> 24);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x003031A0u) [[unlikely]] return; }
L_003031A0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_003031C0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003031BCu); set32(c.r[5], c.r[5].w[0] - 23936u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003031BCu) [[unlikely]] return; }
L_003031BC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003031C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003031C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003031C8u) [[unlikely]] return; }
L_003031C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003031D8u); set32(c.r[5], c.r[5].w[0] - 23944u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003031D8u) [[unlikely]] return; }
L_003031D8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003031F0u); set32(c.r[6], c.r[6].w[0] - 23952u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003031F0u) [[unlikely]] return; }
L_003031F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003031FCu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003031FCu) [[unlikely]] return; }
L_003031FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00303220:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F00000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 20);  c.pc = t; return; }
L_00303240:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003032F0; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00303278; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303274u);  if (depth < kMaxDepth) unit_0080(c, 463u, depth + 1u); else { c.pc = 0x003033A0u; return; } if (c.pc != 0x00303274u) [[unlikely]] return; }
L_00303274:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00303278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303280u);  if (depth < kMaxDepth) unit_0080(c, 462u, depth + 1u); else { c.pc = 0x00303390u; return; } if (c.pc != 0x00303280u) [[unlikely]] return; }
L_00303280:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303294u); set32(c.r[16], c.r[16].w[0] - 24048u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00303294u) [[unlikely]] return; }
L_00303294:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_003032B4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003032B0u); set32(c.r[5], c.r[5].w[0] - 24056u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003032B0u) [[unlikely]] return; }
L_003032B0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003032B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003032BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003032BCu) [[unlikely]] return; }
L_003032BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003032CCu); set32(c.r[5], c.r[5].w[0] - 24064u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003032CCu) [[unlikely]] return; }
L_003032CC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003032E4u); set32(c.r[6], c.r[6].w[0] - 24072u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003032E4u) [[unlikely]] return; }
L_003032E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003032F0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003032F0u) [[unlikely]] return; }
L_003032F0:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 24008u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303310u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00303310u) [[unlikely]] return; }
L_00303310:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00303330; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030332Cu); set32(c.r[5], c.r[5].w[0] - 24016u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030332Cu) [[unlikely]] return; }
L_0030332C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00303330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303338u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303338u) [[unlikely]] return; }
L_00303338:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303348u); set32(c.r[5], c.r[5].w[0] - 24024u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303348u) [[unlikely]] return; }
L_00303348:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303360u); set32(c.r[6], c.r[6].w[0] - 24032u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00303360u) [[unlikely]] return; }
L_00303360:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030336Cu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x0030336Cu) [[unlikely]] return; }
L_0030336C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00303390:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 61440ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 12);  c.pc = t; return; }
L_003033A0:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00303450; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003033D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003033D4u);  if (depth < kMaxDepth) unit_0080(c, 479u, depth + 1u); else { c.pc = 0x00303500u; return; } if (c.pc != 0x003033D4u) [[unlikely]] return; }
L_003033D4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003033D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003033E0u);  if (depth < kMaxDepth) unit_0080(c, 478u, depth + 1u); else { c.pc = 0x003034F0u; return; } if (c.pc != 0x003033E0u) [[unlikely]] return; }
L_003033E0:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003033F4u); set32(c.r[17], c.r[17].w[0] - 24144u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x003033F4u) [[unlikely]] return; }
L_003033F4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00303414; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303410u); set32(c.r[5], c.r[5].w[0] - 24152u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303410u) [[unlikely]] return; }
L_00303410:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00303414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030341Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030341Cu) [[unlikely]] return; }
L_0030341C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030342Cu); set32(c.r[5], c.r[5].w[0] - 24160u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030342Cu) [[unlikely]] return; }
L_0030342C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303444u); set32(c.r[6], c.r[6].w[0] - 24168u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00303444u) [[unlikely]] return; }
L_00303444:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303450u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00303450u) [[unlikely]] return; }
L_00303450:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 24096u);
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030346Cu); set32(c.r[17], c.r[2].w[0] >> 11);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x0030346Cu) [[unlikely]] return; }
L_0030346C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_0030348C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303488u); set32(c.r[5], c.r[5].w[0] - 24104u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303488u) [[unlikely]] return; }
L_00303488:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0030348C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303494u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303494u) [[unlikely]] return; }
L_00303494:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003034A4u); set32(c.r[5], c.r[5].w[0] - 24112u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003034A4u) [[unlikely]] return; }
L_003034A4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003034BCu); set32(c.r[6], c.r[6].w[0] - 24120u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003034BCu) [[unlikely]] return; }
L_003034BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003034C8u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003034C8u) [[unlikely]] return; }
L_003034C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_003034F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1792ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 8);  c.pc = t; return; }
L_00303500:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003035B0; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00303538; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303534u);  if (depth < kMaxDepth) unit_0080(c, 495u, depth + 1u); else { c.pc = 0x00303660u; return; } if (c.pc != 0x00303534u) [[unlikely]] return; }
L_00303534:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00303538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303540u);  if (depth < kMaxDepth) unit_0080(c, 494u, depth + 1u); else { c.pc = 0x00303650u; return; } if (c.pc != 0x00303540u) [[unlikely]] return; }
L_00303540:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303554u); set32(c.r[17], c.r[17].w[0] - 24240u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00303554u) [[unlikely]] return; }
L_00303554:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00303574; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303570u); set32(c.r[5], c.r[5].w[0] - 24248u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303570u) [[unlikely]] return; }
L_00303570:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00303574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030357Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030357Cu) [[unlikely]] return; }
L_0030357C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030358Cu); set32(c.r[5], c.r[5].w[0] - 24256u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030358Cu) [[unlikely]] return; }
L_0030358C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003035A4u); set32(c.r[6], c.r[6].w[0] - 24264u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003035A4u) [[unlikely]] return; }
L_003035A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003035B0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003035B0u) [[unlikely]] return; }
L_003035B0:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 24192u);
    c.r[2].d[0] = c.r[2].d[0] & 224ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003035CCu); set32(c.r[17], c.r[2].w[0] >> 5);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x003035CCu) [[unlikely]] return; }
L_003035CC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_003035EC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003035E8u); set32(c.r[5], c.r[5].w[0] - 24200u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003035E8u) [[unlikely]] return; }
L_003035E8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003035EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003035F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003035F4u) [[unlikely]] return; }
L_003035F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303604u); set32(c.r[5], c.r[5].w[0] - 24208u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303604u) [[unlikely]] return; }
L_00303604:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030361Cu); set32(c.r[6], c.r[6].w[0] - 24216u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x0030361Cu) [[unlikely]] return; }
L_0030361C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303628u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00303628u) [[unlikely]] return; }
L_00303628:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00303650:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 24ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 3);  c.pc = t; return; }
L_00303660:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[17], c.r[17].w[0] - 24288u);
    c.r[16].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303690u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00303690u) [[unlikely]] return; }
L_00303690:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_003036B0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003036ACu); set32(c.r[5], c.r[5].w[0] - 24296u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003036ACu) [[unlikely]] return; }
L_003036AC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003036B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003036B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003036B8u) [[unlikely]] return; }
L_003036B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003036C8u); set32(c.r[5], c.r[5].w[0] - 24304u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003036C8u) [[unlikely]] return; }
L_003036C8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003036E0u); set32(c.r[6], c.r[6].w[0] - 24312u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003036E0u) [[unlikely]] return; }
L_003036E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003036ECu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003036ECu) [[unlikely]] return; }
L_003036EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_00303710:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xE0000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 29);  c.pc = t; return; }
L_00303730:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003037E0; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00303768; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303764u);  if (depth < kMaxDepth) unit_0080(c, 519u, depth + 1u); else { c.pc = 0x003038A0u; return; } if (c.pc != 0x00303764u) [[unlikely]] return; }
L_00303764:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00303768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303770u);  if (depth < kMaxDepth) unit_0080(c, 518u, depth + 1u); else { c.pc = 0x00303880u; return; } if (c.pc != 0x00303770u) [[unlikely]] return; }
L_00303770:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303784u); set32(c.r[16], c.r[16].w[0] - 24432u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00303784u) [[unlikely]] return; }
L_00303784:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_003037A4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003037A0u); set32(c.r[5], c.r[5].w[0] - 24440u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003037A0u) [[unlikely]] return; }
L_003037A0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003037A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003037ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003037ACu) [[unlikely]] return; }
L_003037AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003037BCu); set32(c.r[5], c.r[5].w[0] - 24448u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003037BCu) [[unlikely]] return; }
L_003037BC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003037D4u); set32(c.r[6], c.r[6].w[0] - 24456u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003037D4u) [[unlikely]] return; }
L_003037D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003037E0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003037E0u) [[unlikely]] return; }
L_003037E0:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x18000000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 24384u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303800u); set32(c.r[18], c.r[2].w[0] >> 27);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00303800u) [[unlikely]] return; }
L_00303800:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00303820; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030381Cu); set32(c.r[5], c.r[5].w[0] - 24400u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030381Cu) [[unlikely]] return; }
L_0030381C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00303820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303828u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303828u) [[unlikely]] return; }
L_00303828:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303838u); set32(c.r[5], c.r[5].w[0] - 24408u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303838u) [[unlikely]] return; }
L_00303838:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303850u); set32(c.r[6], c.r[6].w[0] - 24416u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00303850u) [[unlikely]] return; }
L_00303850:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030385Cu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x0030385Cu) [[unlikely]] return; }
L_0030385C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00303880:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x07000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 24);  c.pc = t; return; }
L_003038A0:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00303950; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003038D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003038D4u);  if (depth < kMaxDepth) unit_0080(c, 535u, depth + 1u); else { c.pc = 0x00303A10u; return; } if (c.pc != 0x003038D4u) [[unlikely]] return; }
L_003038D4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003038D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003038E0u);  if (depth < kMaxDepth) unit_0080(c, 534u, depth + 1u); else { c.pc = 0x003039F0u; return; } if (c.pc != 0x003038E0u) [[unlikely]] return; }
L_003038E0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003038F4u); set32(c.r[16], c.r[16].w[0] - 24512u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x003038F4u) [[unlikely]] return; }
L_003038F4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00303914; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303910u); set32(c.r[5], c.r[5].w[0] - 24520u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303910u) [[unlikely]] return; }
L_00303910:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00303914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030391Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030391Cu) [[unlikely]] return; }
L_0030391C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030392Cu); set32(c.r[5], c.r[5].w[0] - 24528u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030392Cu) [[unlikely]] return; }
L_0030392C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303944u); set32(c.r[6], c.r[6].w[0] - 24536u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00303944u) [[unlikely]] return; }
L_00303944:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303950u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00303950u) [[unlikely]] return; }
L_00303950:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 24472u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303970u); set32(c.r[18], c.r[2].w[0] >> 23);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00303970u) [[unlikely]] return; }
L_00303970:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00303990; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030398Cu); set32(c.r[5], c.r[5].w[0] - 24480u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x0030398Cu) [[unlikely]] return; }
L_0030398C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00303990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303998u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303998u) [[unlikely]] return; }
L_00303998:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003039A8u); set32(c.r[5], c.r[5].w[0] - 24488u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x003039A8u) [[unlikely]] return; }
L_003039A8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003039C0u); set32(c.r[6], c.r[6].w[0] - 24496u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x003039C0u) [[unlikely]] return; }
L_003039C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003039CCu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x003039CCu) [[unlikely]] return; }
L_003039CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_003039F0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 20);  c.pc = t; return; }
L_00303A10:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00303AC0; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00303A48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303A44u);  if (depth < kMaxDepth) unit_0080(c, 551u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x00303A44u) [[unlikely]] return; }
L_00303A44:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00303A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303A50u);  if (depth < kMaxDepth) unit_0080(c, 550u, depth + 1u); else { c.pc = 0x00303B60u; return; } if (c.pc != 0x00303A50u) [[unlikely]] return; }
L_00303A50:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303A64u); set32(c.r[16], c.r[16].w[0] - 24608u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00303A64u) [[unlikely]] return; }
L_00303A64:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00303A84; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303A80u); set32(c.r[5], c.r[5].w[0] - 24616u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303A80u) [[unlikely]] return; }
L_00303A80:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00303A84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303A8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303A8Cu) [[unlikely]] return; }
L_00303A8C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303A9Cu); set32(c.r[5], c.r[5].w[0] - 24624u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303A9Cu) [[unlikely]] return; }
L_00303A9C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303AB4u); set32(c.r[6], c.r[6].w[0] - 24632u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00303AB4u) [[unlikely]] return; }
L_00303AB4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303AC0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00303AC0u) [[unlikely]] return; }
L_00303AC0:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 24560u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303AE0u); set32(c.r[18], c.r[2].w[0] >> 19);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00303AE0u) [[unlikely]] return; }
L_00303AE0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00303B00; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303AFCu); set32(c.r[5], c.r[5].w[0] - 24568u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303AFCu) [[unlikely]] return; }
L_00303AFC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00303B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303B08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303B08u) [[unlikely]] return; }
L_00303B08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303B18u); set32(c.r[5], c.r[5].w[0] - 24576u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303B18u) [[unlikely]] return; }
L_00303B18:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303B30u); set32(c.r[6], c.r[6].w[0] - 24584u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00303B30u) [[unlikely]] return; }
L_00303B30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303B3Cu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00303B3Cu) [[unlikely]] return; }
L_00303B3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00303B60:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 18);  c.pc = t; return; }
L_00303B80:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00303C30; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00303BB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303BB4u);  if (depth < kMaxDepth) unit_0080(c, 567u, depth + 1u); else { c.pc = 0x00303CF0u; return; } if (c.pc != 0x00303BB4u) [[unlikely]] return; }
L_00303BB4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00303BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303BC0u);  if (depth < kMaxDepth) unit_0080(c, 566u, depth + 1u); else { c.pc = 0x00303CD0u; return; } if (c.pc != 0x00303BC0u) [[unlikely]] return; }
L_00303BC0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303BD4u); set32(c.r[16], c.r[16].w[0] - 24704u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00303BD4u) [[unlikely]] return; }
L_00303BD4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00303BF4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303BF0u); set32(c.r[5], c.r[5].w[0] - 24712u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303BF0u) [[unlikely]] return; }
L_00303BF0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00303BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303BFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303BFCu) [[unlikely]] return; }
L_00303BFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303C0Cu); set32(c.r[5], c.r[5].w[0] - 24720u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303C0Cu) [[unlikely]] return; }
L_00303C0C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303C24u); set32(c.r[6], c.r[6].w[0] - 24728u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00303C24u) [[unlikely]] return; }
L_00303C24:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303C30u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00303C30u) [[unlikely]] return; }
L_00303C30:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 24656u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303C50u); set32(c.r[18], c.r[2].w[0] >> 17);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00303C50u) [[unlikely]] return; }
L_00303C50:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00303C70; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303C6Cu); set32(c.r[5], c.r[5].w[0] - 24664u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303C6Cu) [[unlikely]] return; }
L_00303C6C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00303C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303C78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303C78u) [[unlikely]] return; }
L_00303C78:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303C88u); set32(c.r[5], c.r[5].w[0] - 24672u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303C88u) [[unlikely]] return; }
L_00303C88:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303CA0u); set32(c.r[6], c.r[6].w[0] - 24680u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00303CA0u) [[unlikely]] return; }
L_00303CA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303CACu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00303CACu) [[unlikely]] return; }
L_00303CAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00303CD0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 16);  c.pc = t; return; }
L_00303CF0:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00303DA0; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00303D28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303D24u);  if (depth < kMaxDepth) unit_0080(c, 584u, depth + 1u); else { c.pc = 0x00303E50u; return; } if (c.pc != 0x00303D24u) [[unlikely]] return; }
L_00303D24:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00303D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303D30u);  if (depth < kMaxDepth) unit_0080(c, 583u, depth + 1u); else { c.pc = 0x00303E40u; return; } if (c.pc != 0x00303D30u) [[unlikely]] return; }
L_00303D30:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303D44u); set32(c.r[17], c.r[17].w[0] - 24800u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00303D44u) [[unlikely]] return; }
L_00303D44:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00303D64; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303D60u); set32(c.r[5], c.r[5].w[0] - 24808u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303D60u) [[unlikely]] return; }
L_00303D60:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00303D64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303D6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303D6Cu) [[unlikely]] return; }
L_00303D6C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00303D74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303D7Cu); set32(c.r[5], c.r[5].w[0] - 24816u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303D7Cu) [[unlikely]] return; }
L_00303D7C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303D94u); set32(c.r[6], c.r[6].w[0] - 24824u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00303D94u) [[unlikely]] return; }
L_00303D94:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303DA0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00303DA0u) [[unlikely]] return; }
L_00303DA0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 24752u);
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303DBCu); set32(c.r[17], c.r[2].w[0] >> 15);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00303DBCu) [[unlikely]] return; }
L_00303DBC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_00303DDC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303DD8u); set32(c.r[5], c.r[5].w[0] - 24768u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303DD8u) [[unlikely]] return; }
L_00303DD8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00303DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303DE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303DE4u) [[unlikely]] return; }
L_00303DE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303DF4u); set32(c.r[5], c.r[5].w[0] - 24776u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303DF4u) [[unlikely]] return; }
L_00303DF4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303E0Cu); set32(c.r[6], c.r[6].w[0] - 24784u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00303E0Cu) [[unlikely]] return; }
L_00303E0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303E18u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00303E18u) [[unlikely]] return; }
L_00303E18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00303E40:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 14);  c.pc = t; return; }
L_00303E50:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00303F00; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00303E88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303E84u);  if (depth < kMaxDepth) unit_0080(c, 600u, depth + 1u); else { c.pc = 0x00303FB0u; return; } if (c.pc != 0x00303E84u) [[unlikely]] return; }
L_00303E84:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00303E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303E90u);  if (depth < kMaxDepth) unit_0080(c, 599u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x00303E90u) [[unlikely]] return; }
L_00303E90:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303EA4u); set32(c.r[17], c.r[17].w[0] - 24880u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00303EA4u) [[unlikely]] return; }
L_00303EA4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00303EC4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303EC0u); set32(c.r[5], c.r[5].w[0] - 24888u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303EC0u) [[unlikely]] return; }
L_00303EC0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00303EC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303ECCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303ECCu) [[unlikely]] return; }
L_00303ECC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303EDCu); set32(c.r[5], c.r[5].w[0] - 24896u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303EDCu) [[unlikely]] return; }
L_00303EDC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303EF4u); set32(c.r[6], c.r[6].w[0] - 24904u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00303EF4u) [[unlikely]] return; }
L_00303EF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303F00u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00303F00u) [[unlikely]] return; }
L_00303F00:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 24840u);
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303F1Cu); set32(c.r[17], c.r[2].w[0] >> 13);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00303F1Cu) [[unlikely]] return; }
L_00303F1C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_00303F3C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303F38u); set32(c.r[5], c.r[5].w[0] - 24848u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303F38u) [[unlikely]] return; }
L_00303F38:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00303F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303F44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303F44u) [[unlikely]] return; }
L_00303F44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303F54u); set32(c.r[5], c.r[5].w[0] - 24856u);  if (depth < kMaxDepth) unit_0084(c, 37u, depth + 1u); else { c.pc = 0x00310410u; return; } if (c.pc != 0x00303F54u) [[unlikely]] return; }
L_00303F54:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303F6Cu); set32(c.r[6], c.r[6].w[0] - 24864u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x00303F6Cu) [[unlikely]] return; }
L_00303F6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303F78u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0084(c, 39u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x00303F78u) [[unlikely]] return; }
L_00303F78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00303FA0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 12);  c.pc = t; return; }
L_00303FB0:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0081(c, 7u, depth); } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00303FE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303FE4u);  if (depth < kMaxDepth) unit_0081(c, 15u, depth + 1u); else { c.pc = 0x00304110u; return; } if (c.pc != 0x00303FE4u) [[unlikely]] return; }
L_00303FE4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00303FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00303FF0u);  if (depth < kMaxDepth) unit_0081(c, 14u, depth + 1u); else { c.pc = 0x00304100u; return; } if (c.pc != 0x00303FF0u) [[unlikely]] return; }
L_00303FF0:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304004u); set32(c.r[17], c.r[17].w[0] - 24960u);  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00304004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0081(c, 2u, depth);
}

}
