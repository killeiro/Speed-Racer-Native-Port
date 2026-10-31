#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B8[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0,
    0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0,
    0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 54,
    0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0,
    0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0,
    67, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0,
    0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 104,
    0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 108, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0,
    0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0,
    0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0,
    164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0,
    0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0,
    0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201,
    0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0, 0,
    0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 241, 0, 0, 242, 0, 243, 0, 244, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0,
    0, 247, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 0,
    0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 260, 0, 0, 261, 0, 262, 0, 263, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0,
    0, 0, 267, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0,
    0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0,
    0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0,
    0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0,
    0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 317, 0, 0, 318, 0, 319, 0,
    320, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 336, 0, 0, 337, 0, 338, 0, 339, 0,
    340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    356, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0,
    363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 376,
    0, 0, 0, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 381,
    0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0,
    391, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0,
    0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 404, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0,
    0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0,
    0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 0,
    426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0,
    0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0,
    437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0,
    0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 450, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0,
    0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0,
    0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0,
    0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 480, 0,
    0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 488, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0,
    493, 0, 0, 494, 0, 495, 0, 496, 0, 0, 497, 0, 498, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0,
    0, 0, 501, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0,
    0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 516, 0, 0, 517, 0, 518, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 522,
    0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00B8(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003E0000;
    case 2u: goto L_003E0010;
    case 3u: goto L_003E002C;
    case 4u: goto L_003E0040;
    case 5u: goto L_003E0070;
    case 6u: goto L_003E00BC;
    case 7u: goto L_003E00D4;
    case 8u: goto L_003E0104;
    case 9u: goto L_003E0114;
    case 10u: goto L_003E0134;
    case 11u: goto L_003E0158;
    case 12u: goto L_003E016C;
    case 13u: goto L_003E0180;
    case 14u: goto L_003E01A0;
    case 15u: goto L_003E01AC;
    case 16u: goto L_003E01BC;
    case 17u: goto L_003E01C8;
    case 18u: goto L_003E01D8;
    case 19u: goto L_003E01F4;
    case 20u: goto L_003E0208;
    case 21u: goto L_003E0240;
    case 22u: goto L_003E0268;
    case 23u: goto L_003E0294;
    case 24u: goto L_003E02CC;
    case 25u: goto L_003E02E8;
    case 26u: goto L_003E02F8;
    case 27u: goto L_003E0314;
    case 28u: goto L_003E032C;
    case 29u: goto L_003E0350;
    case 30u: goto L_003E0378;
    case 31u: goto L_003E0388;
    case 32u: goto L_003E0394;
    case 33u: goto L_003E03A8;
    case 34u: goto L_003E03BC;
    case 35u: goto L_003E03E0;
    case 36u: goto L_003E0400;
    case 37u: goto L_003E0424;
    case 38u: goto L_003E0430;
    case 39u: goto L_003E0450;
    case 40u: goto L_003E0490;
    case 41u: goto L_003E0570;
    case 42u: goto L_003E059C;
    case 43u: goto L_003E05D0;
    case 44u: goto L_003E05DC;
    case 45u: goto L_003E05E8;
    case 46u: goto L_003E0624;
    case 47u: goto L_003E0664;
    case 48u: goto L_003E0678;
    case 49u: goto L_003E06A0;
    case 50u: goto L_003E06CC;
    case 51u: goto L_003E06D8;
    case 52u: goto L_003E06E4;
    case 53u: goto L_003E06F0;
    case 54u: goto L_003E06FC;
    case 55u: goto L_003E0708;
    case 56u: goto L_003E0714;
    case 57u: goto L_003E0720;
    case 58u: goto L_003E072C;
    case 59u: goto L_003E0750;
    case 60u: goto L_003E075C;
    case 61u: goto L_003E0768;
    case 62u: goto L_003E0774;
    case 63u: goto L_003E0788;
    case 64u: goto L_003E07C4;
    case 65u: goto L_003E07E8;
    case 66u: goto L_003E07F4;
    case 67u: goto L_003E0800;
    case 68u: goto L_003E080C;
    case 69u: goto L_003E0820;
    case 70u: goto L_003E085C;
    case 71u: goto L_003E0880;
    case 72u: goto L_003E08A0;
    case 73u: goto L_003E08D8;
    case 74u: goto L_003E08E8;
    case 75u: goto L_003E0904;
    case 76u: goto L_003E0918;
    case 77u: goto L_003E0928;
    case 78u: goto L_003E0950;
    case 79u: goto L_003E0988;
    case 80u: goto L_003E0998;
    case 81u: goto L_003E09B4;
    case 82u: goto L_003E09C8;
    case 83u: goto L_003E09D8;
    case 84u: goto L_003E0A00;
    case 85u: goto L_003E0A28;
    case 86u: goto L_003E0A38;
    case 87u: goto L_003E0A50;
    case 88u: goto L_003E0A70;
    case 89u: goto L_003E0A98;
    case 90u: goto L_003E0AA8;
    case 91u: goto L_003E0AC0;
    case 92u: goto L_003E0AD0;
    case 93u: goto L_003E0AF8;
    case 94u: goto L_003E0B08;
    case 95u: goto L_003E0B20;
    case 96u: goto L_003E0B30;
    case 97u: goto L_003E0B98;
    case 98u: goto L_003E0BA8;
    case 99u: goto L_003E0BEC;
    case 100u: goto L_003E0C00;
    case 101u: goto L_003E0C20;
    case 102u: goto L_003E0C58;
    case 103u: goto L_003E0C60;
    case 104u: goto L_003E0C7C;
    case 105u: goto L_003E0C98;
    case 106u: goto L_003E0CAC;
    case 107u: goto L_003E0CB8;
    case 108u: goto L_003E0CC8;
    case 109u: goto L_003E0CD4;
    case 110u: goto L_003E0CDC;
    case 111u: goto L_003E0CF8;
    case 112u: goto L_003E0D00;
    case 113u: goto L_003E0D20;
    case 114u: goto L_003E0D2C;
    case 115u: goto L_003E0D3C;
    case 116u: goto L_003E0D48;
    case 117u: goto L_003E0D50;
    case 118u: goto L_003E0D5C;
    case 119u: goto L_003E0DC0;
    case 120u: goto L_003E0DD0;
    case 121u: goto L_003E0E10;
    case 122u: goto L_003E0E20;
    case 123u: goto L_003E0E64;
    case 124u: goto L_003E0E78;
    case 125u: goto L_003E0E90;
    case 126u: goto L_003E0EB0;
    case 127u: goto L_003E0EC0;
    case 128u: goto L_003E0ED0;
    case 129u: goto L_003E0F20;
    case 130u: goto L_003E0F5C;
    case 131u: goto L_003E0F98;
    case 132u: goto L_003E0FC4;
    case 133u: goto L_003E0FD4;
    case 134u: goto L_003E0FE0;
    case 135u: goto L_003E0FE8;
    case 136u: goto L_003E1004;
    case 137u: goto L_003E100C;
    case 138u: goto L_003E1028;
    case 139u: goto L_003E1040;
    case 140u: goto L_003E1050;
    case 141u: goto L_003E105C;
    case 142u: goto L_003E1064;
    case 143u: goto L_003E1070;
    case 144u: goto L_003E1110;
    case 145u: goto L_003E1138;
    case 146u: goto L_003E1160;
    case 147u: goto L_003E11D0;
    case 148u: goto L_003E11D8;
    case 149u: goto L_003E1228;
    case 150u: goto L_003E1230;
    case 151u: goto L_003E1244;
    case 152u: goto L_003E126C;
    case 153u: goto L_003E1274;
    case 154u: goto L_003E1288;
    case 155u: goto L_003E12C4;
    case 156u: goto L_003E12CC;
    case 157u: goto L_003E12E0;
    case 158u: goto L_003E1340;
    case 159u: goto L_003E1350;
    case 160u: goto L_003E1388;
    case 161u: goto L_003E13BC;
    case 162u: goto L_003E13E4;
    case 163u: goto L_003E13EC;
    case 164u: goto L_003E1400;
    case 165u: goto L_003E1428;
    case 166u: goto L_003E1430;
    case 167u: goto L_003E1444;
    case 168u: goto L_003E1468;
    case 169u: goto L_003E1470;
    case 170u: goto L_003E1484;
    case 171u: goto L_003E150C;
    case 172u: goto L_003E151C;
    case 173u: goto L_003E1544;
    case 174u: goto L_003E1580;
    case 175u: goto L_003E15A4;
    case 176u: goto L_003E15AC;
    case 177u: goto L_003E15B8;
    case 178u: goto L_003E15C4;
    case 179u: goto L_003E15D0;
    case 180u: goto L_003E15E4;
    case 181u: goto L_003E1620;
    case 182u: goto L_003E1660;
    case 183u: goto L_003E1684;
    case 184u: goto L_003E1694;
    case 185u: goto L_003E16A0;
    case 186u: goto L_003E16AC;
    case 187u: goto L_003E16B8;
    case 188u: goto L_003E16CC;
    case 189u: goto L_003E1708;
    case 190u: goto L_003E1750;
    case 191u: goto L_003E1780;
    case 192u: goto L_003E1790;
    case 193u: goto L_003E17A4;
    case 194u: goto L_003E17B4;
    case 195u: goto L_003E17C8;
    case 196u: goto L_003E17D8;
    case 197u: goto L_003E17F4;
    case 198u: goto L_003E1804;
    case 199u: goto L_003E1828;
    case 200u: goto L_003E1838;
    case 201u: goto L_003E187C;
    case 202u: goto L_003E188C;
    case 203u: goto L_003E18C0;
    case 204u: goto L_003E1910;
    case 205u: goto L_003E1938;
    case 206u: goto L_003E1940;
    case 207u: goto L_003E1954;
    case 208u: goto L_003E19DC;
    case 209u: goto L_003E19EC;
    case 210u: goto L_003E1A14;
    case 211u: goto L_003E1A30;
    case 212u: goto L_003E1A64;
    case 213u: goto L_003E1A74;
    case 214u: goto L_003E1AA0;
    case 215u: goto L_003E1AE0;
    case 216u: goto L_003E1AF0;
    case 217u: goto L_003E1B1C;
    case 218u: goto L_003E1B34;
    case 219u: goto L_003E1B5C;
    case 220u: goto L_003E1B60;
    case 221u: goto L_003E1B9C;
    case 222u: goto L_003E1BBC;
    case 223u: goto L_003E1C00;
    case 224u: goto L_003E1C0C;
    case 225u: goto L_003E1C18;
    case 226u: goto L_003E1C34;
    case 227u: goto L_003E1C58;
    case 228u: goto L_003E1C64;
    case 229u: goto L_003E1C70;
    case 230u: goto L_003E1C94;
    case 231u: goto L_003E1CA0;
    case 232u: goto L_003E1CAC;
    case 233u: goto L_003E1CCC;
    case 234u: goto L_003E1CD8;
    case 235u: goto L_003E1CE4;
    case 236u: goto L_003E1D00;
    case 237u: goto L_003E1D48;
    case 238u: goto L_003E1D64;
    case 239u: goto L_003E1DA8;
    case 240u: goto L_003E1DB0;
    case 241u: goto L_003E1DB8;
    case 242u: goto L_003E1DC4;
    case 243u: goto L_003E1DCC;
    case 244u: goto L_003E1DD4;
    case 245u: goto L_003E1DDC;
    case 246u: goto L_003E1DE8;
    case 247u: goto L_003E1E04;
    case 248u: goto L_003E1E18;
    case 249u: goto L_003E1E20;
    case 250u: goto L_003E1E30;
    case 251u: goto L_003E1E60;
    case 252u: goto L_003E1E94;
    case 253u: goto L_003E1EEC;
    case 254u: goto L_003E1F18;
    case 255u: goto L_003E1F5C;
    case 256u: goto L_003E1F68;
    case 257u: goto L_003E1F74;
    case 258u: goto L_003E1F98;
    case 259u: goto L_003E1FA0;
    case 260u: goto L_003E1FA8;
    case 261u: goto L_003E1FB4;
    case 262u: goto L_003E1FBC;
    case 263u: goto L_003E1FC4;
    case 264u: goto L_003E1FCC;
    case 265u: goto L_003E1FD8;
    case 266u: goto L_003E1FF4;
    case 267u: goto L_003E2008;
    case 268u: goto L_003E2010;
    case 269u: goto L_003E2020;
    case 270u: goto L_003E2040;
    case 271u: goto L_003E2050;
    case 272u: goto L_003E2078;
    case 273u: goto L_003E208C;
    case 274u: goto L_003E209C;
    case 275u: goto L_003E20A8;
    case 276u: goto L_003E20C0;
    case 277u: goto L_003E2100;
    case 278u: goto L_003E2110;
    case 279u: goto L_003E212C;
    case 280u: goto L_003E2140;
    case 281u: goto L_003E2150;
    case 282u: goto L_003E2170;
    case 283u: goto L_003E2180;
    case 284u: goto L_003E219C;
    case 285u: goto L_003E21B0;
    case 286u: goto L_003E21C0;
    case 287u: goto L_003E21E0;
    case 288u: goto L_003E21F0;
    case 289u: goto L_003E220C;
    case 290u: goto L_003E2220;
    case 291u: goto L_003E2230;
    case 292u: goto L_003E2258;
    case 293u: goto L_003E2268;
    case 294u: goto L_003E228C;
    case 295u: goto L_003E229C;
    case 296u: goto L_003E22BC;
    case 297u: goto L_003E22E8;
    case 298u: goto L_003E22F8;
    case 299u: goto L_003E2314;
    case 300u: goto L_003E2328;
    case 301u: goto L_003E2338;
    case 302u: goto L_003E2388;
    case 303u: goto L_003E2398;
    case 304u: goto L_003E23B4;
    case 305u: goto L_003E23C8;
    case 306u: goto L_003E23D8;
    case 307u: goto L_003E2420;
    case 308u: goto L_003E2440;
    case 309u: goto L_003E2460;
    case 310u: goto L_003E2478;
    case 311u: goto L_003E2490;
    case 312u: goto L_003E24B0;
    case 313u: goto L_003E24F4;
    case 314u: goto L_003E251C;
    case 315u: goto L_003E2554;
    case 316u: goto L_003E255C;
    case 317u: goto L_003E2564;
    case 318u: goto L_003E2570;
    case 319u: goto L_003E2578;
    case 320u: goto L_003E2580;
    case 321u: goto L_003E2588;
    case 322u: goto L_003E2594;
    case 323u: goto L_003E25B0;
    case 324u: goto L_003E25C4;
    case 325u: goto L_003E25CC;
    case 326u: goto L_003E25DC;
    case 327u: goto L_003E260C;
    case 328u: goto L_003E2640;
    case 329u: goto L_003E2694;
    case 330u: goto L_003E26C0;
    case 331u: goto L_003E2710;
    case 332u: goto L_003E271C;
    case 333u: goto L_003E2728;
    case 334u: goto L_003E274C;
    case 335u: goto L_003E2754;
    case 336u: goto L_003E275C;
    case 337u: goto L_003E2768;
    case 338u: goto L_003E2770;
    case 339u: goto L_003E2778;
    case 340u: goto L_003E2780;
    case 341u: goto L_003E278C;
    case 342u: goto L_003E27A8;
    case 343u: goto L_003E27BC;
    case 344u: goto L_003E27C4;
    case 345u: goto L_003E27D4;
    case 346u: goto L_003E2800;
    case 347u: goto L_003E2810;
    case 348u: goto L_003E2830;
    case 349u: goto L_003E2880;
    case 350u: goto L_003E28A8;
    case 351u: goto L_003E28B8;
    case 352u: goto L_003E2934;
    case 353u: goto L_003E2940;
    case 354u: goto L_003E294C;
    case 355u: goto L_003E29A0;
    case 356u: goto L_003E2A00;
    case 357u: goto L_003E2A08;
    case 358u: goto L_003E2A18;
    case 359u: goto L_003E2AA0;
    case 360u: goto L_003E2AD0;
    case 361u: goto L_003E2B30;
    case 362u: goto L_003E2B78;
    case 363u: goto L_003E2B80;
    case 364u: goto L_003E2B9C;
    case 365u: goto L_003E2BD0;
    case 366u: goto L_003E2C50;
    case 367u: goto L_003E2C58;
    case 368u: goto L_003E2C80;
    case 369u: goto L_003E2CB0;
    case 370u: goto L_003E2CD8;
    case 371u: goto L_003E2CE4;
    case 372u: goto L_003E2D2C;
    case 373u: goto L_003E2D3C;
    case 374u: goto L_003E2D58;
    case 375u: goto L_003E2D6C;
    case 376u: goto L_003E2D7C;
    case 377u: goto L_003E2D98;
    case 378u: goto L_003E2DA4;
    case 379u: goto L_003E2DE0;
    case 380u: goto L_003E2DEC;
    case 381u: goto L_003E2DFC;
    case 382u: goto L_003E2E0C;
    case 383u: goto L_003E2E3C;
    case 384u: goto L_003E2E50;
    case 385u: goto L_003E2E64;
    case 386u: goto L_003E2E98;
    case 387u: goto L_003E2EA8;
    case 388u: goto L_003E2EC8;
    case 389u: goto L_003E2ED4;
    case 390u: goto L_003E2EE0;
    case 391u: goto L_003E2F00;
    case 392u: goto L_003E2F0C;
    case 393u: goto L_003E2F44;
    case 394u: goto L_003E2F70;
    case 395u: goto L_003E2F9C;
    case 396u: goto L_003E2FA8;
    case 397u: goto L_003E2FB8;
    case 398u: goto L_003E2FCC;
    case 399u: goto L_003E2FE4;
    case 400u: goto L_003E2FF4;
    case 401u: goto L_003E3014;
    case 402u: goto L_003E3024;
    case 403u: goto L_003E3034;
    case 404u: goto L_003E3040;
    case 405u: goto L_003E3048;
    case 406u: goto L_003E3080;
    case 407u: goto L_003E3090;
    case 408u: goto L_003E30AC;
    case 409u: goto L_003E30C0;
    case 410u: goto L_003E30D0;
    case 411u: goto L_003E30D8;
    case 412u: goto L_003E30E8;
    case 413u: goto L_003E3104;
    case 414u: goto L_003E3110;
    case 415u: goto L_003E3128;
    case 416u: goto L_003E3140;
    case 417u: goto L_003E3150;
    case 418u: goto L_003E3168;
    case 419u: goto L_003E3174;
    case 420u: goto L_003E3188;
    case 421u: goto L_003E3198;
    case 422u: goto L_003E31B4;
    case 423u: goto L_003E31C8;
    case 424u: goto L_003E31D8;
    case 425u: goto L_003E31F4;
    case 426u: goto L_003E3200;
    case 427u: goto L_003E3230;
    case 428u: goto L_003E325C;
    case 429u: goto L_003E3290;
    case 430u: goto L_003E32A0;
    case 431u: goto L_003E32C0;
    case 432u: goto L_003E32E8;
    case 433u: goto L_003E3304;
    case 434u: goto L_003E3310;
    case 435u: goto L_003E3354;
    case 436u: goto L_003E3374;
    case 437u: goto L_003E3380;
    case 438u: goto L_003E33C8;
    case 439u: goto L_003E33E8;
    case 440u: goto L_003E33FC;
    case 441u: goto L_003E3424;
    case 442u: goto L_003E3434;
    case 443u: goto L_003E3454;
    case 444u: goto L_003E3468;
    case 445u: goto L_003E3474;
    case 446u: goto L_003E3494;
    case 447u: goto L_003E34A4;
    case 448u: goto L_003E34C8;
    case 449u: goto L_003E34D8;
    case 450u: goto L_003E34F8;
    case 451u: goto L_003E3520;
    case 452u: goto L_003E3530;
    case 453u: goto L_003E3550;
    case 454u: goto L_003E3570;
    case 455u: goto L_003E35BC;
    case 456u: goto L_003E35CC;
    case 457u: goto L_003E35F0;
    case 458u: goto L_003E3688;
    case 459u: goto L_003E3698;
    case 460u: goto L_003E36D4;
    case 461u: goto L_003E36E4;
    case 462u: goto L_003E3704;
    case 463u: goto L_003E3830;
    case 464u: goto L_003E3890;
    case 465u: goto L_003E38E0;
    case 466u: goto L_003E38EC;
    case 467u: goto L_003E3908;
    case 468u: goto L_003E391C;
    case 469u: goto L_003E3930;
    case 470u: goto L_003E3950;
    case 471u: goto L_003E3968;
    case 472u: goto L_003E3970;
    case 473u: goto L_003E3990;
    case 474u: goto L_003E39E0;
    case 475u: goto L_003E39F0;
    case 476u: goto L_003E3A2C;
    case 477u: goto L_003E3A3C;
    case 478u: goto L_003E3A5C;
    case 479u: goto L_003E3A6C;
    case 480u: goto L_003E3A78;
    case 481u: goto L_003E3A88;
    case 482u: goto L_003E3AA0;
    case 483u: goto L_003E3AB0;
    case 484u: goto L_003E3ABC;
    case 485u: goto L_003E3AC8;
    case 486u: goto L_003E3AF0;
    case 487u: goto L_003E3B6C;
    case 488u: goto L_003E3B78;
    case 489u: goto L_003E3BA0;
    case 490u: goto L_003E3BB4;
    case 491u: goto L_003E3BC8;
    case 492u: goto L_003E3BE8;
    case 493u: goto L_003E3C00;
    case 494u: goto L_003E3C0C;
    case 495u: goto L_003E3C14;
    case 496u: goto L_003E3C1C;
    case 497u: goto L_003E3C28;
    case 498u: goto L_003E3C30;
    case 499u: goto L_003E3C50;
    case 500u: goto L_003E3C78;
    case 501u: goto L_003E3C88;
    case 502u: goto L_003E3C90;
    case 503u: goto L_003E3D50;
    case 504u: goto L_003E3DB0;
    case 505u: goto L_003E3DD0;
    case 506u: goto L_003E3E1C;
    case 507u: goto L_003E3E2C;
    case 508u: goto L_003E3E48;
    case 509u: goto L_003E3E5C;
    case 510u: goto L_003E3E6C;
    case 511u: goto L_003E3E88;
    case 512u: goto L_003E3E98;
    case 513u: goto L_003E3EB4;
    case 514u: goto L_003E3EC8;
    case 515u: goto L_003E3ED8;
    case 516u: goto L_003E3F18;
    case 517u: goto L_003E3F24;
    case 518u: goto L_003E3F2C;
    case 519u: goto L_003E3F38;
    case 520u: goto L_003E3F48;
    case 521u: goto L_003E3F5C;
    case 522u: goto L_003E3F7C;
    case 523u: goto L_003E3F8C;
    case 524u: goto L_003E3FA8;
    case 525u: goto L_003E3FBC;
    case 526u: goto L_003E3FCC;
    case 527u: goto L_003E3FD8;
    default: bad_entry(c, 0x003E0000u); return;
    }
L_003E0000:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_003E0010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003E0044; } }
L_003E002C:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0040u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 503u, depth + 1u); else { c.pc = 0x003E3D50u; return; } if (c.pc != 0x003E0040u) [[unlikely]] return; }
L_003E0040:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003E0044:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E002Cu | kUnwind; return; } goto L_003E002C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E0070:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] - 10330u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 260u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_003E00B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_003E00BC; } }
L_003E00B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E00BCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003E00BCu) [[unlikely]] return; }
L_003E00BC:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E00D4u); set32(c.r[5], c.r[29].w[0] + 104u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E00D4u) [[unlikely]] return; }
L_003E00D4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E0134; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0104u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E0104u) [[unlikely]] return; }
L_003E0104:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0114u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E0114u) [[unlikely]] return; }
L_003E0114:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003E0134; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0134u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003E0134u) [[unlikely]] return; }
L_003E0134:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], c.r[19].w[0] + 4u);  goto L_003E01A4; }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0158u); set32(c.r[4], c.r[29].w[0] + 100u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E0158u) [[unlikely]] return; }
L_003E0158:
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E01A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E016Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E016Cu) [[unlikely]] return; }
L_003E016C:
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0180u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E0180u) [[unlikely]] return; }
L_003E0180:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E01A0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E01A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E01A0u) [[unlikely]] return; }
L_003E01A0:
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 1;
L_003E01A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E01ACu);  if (depth < kMaxDepth) unit_00B8(c, 211u, depth + 1u); else { c.pc = 0x003E1A30u; return; } if (c.pc != 0x003E01ACu) [[unlikely]] return; }
L_003E01AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E01BCu); set32(c.r[5], c.r[5].w[0] - 10330u);  if (depth < kMaxDepth) unit_00B7(c, 408u, depth + 1u); else { c.pc = 0x003DF980u; return; } if (c.pc != 0x003E01BCu) [[unlikely]] return; }
L_003E01BC:
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E01C8u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_00B8(c, 203u, depth + 1u); else { c.pc = 0x003E18C0u; return; } if (c.pc != 0x003E01C8u) [[unlikely]] return; }
L_003E01C8:
    st32((c.r[29].w[0] + 108u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E01D8u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_00B8(c, 96u, depth + 1u); else { c.pc = 0x003E0B30u; return; } if (c.pc != 0x003E01D8u) [[unlikely]] return; }
L_003E01D8:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E01F4u); set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 38u, depth + 1u); else { c.pc = 0x003E0430u; return; } if (c.pc != 0x003E01F4u) [[unlikely]] return; }
L_003E01F4:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));  goto L_003E020C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0208u);  if (depth < kMaxDepth) unit_0087(c, 196u, depth + 1u); else { c.pc = 0x0031DE20u; return; } if (c.pc != 0x003E0208u) [[unlikely]] return; }
L_003E0208:
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 1;
L_003E020C:
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 320u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    st32((c.r[19].w[0] + 36u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003E0240:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E032C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003E0298; } }
L_003E0268:
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_003E0298; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0294u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E0294u) [[unlikely]] return; }
L_003E0294:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003E0298:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E0268u | kUnwind; return; } goto L_003E0268; }
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E02CC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E02CC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E02CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E02CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 214u, depth + 1u); else { c.pc = 0x003E1AA0u; return; } if (c.pc != 0x003E02CCu) [[unlikely]] return; }
L_003E02CC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_003E0318; }
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E0314; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E02E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E02E8u) [[unlikely]] return; }
L_003E02E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E02F8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E02F8u) [[unlikely]] return; }
L_003E02F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E0314; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0314u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E0314u) [[unlikely]] return; }
L_003E0314:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_003E0318:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_003E0330; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E032Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003E032Cu) [[unlikely]] return; }
L_003E032C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003E0330:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E0350:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0]), 0u);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003E0388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0378u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E0378u) [[unlikely]] return; }
L_003E0378:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0388u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E0388u) [[unlikely]] return; }
L_003E0388:
    set32(c.r[17], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0394u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003E0394u) [[unlikely]] return; }
L_003E0394:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003E03AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E03A8u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003E03A8u) [[unlikely]] return; }
L_003E03A8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003E03AC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[17].w[0]), c.r[2].w[0]);  goto L_003E03C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E03BCu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003E03BCu) [[unlikely]] return; }
L_003E03BC:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003E03C0:
    set32(c.r[4], c.r[16].w[0] + 20u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[6], 0u + 8u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E03E0u); st32((c.r[16].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x003E03E0u) [[unlikely]] return; }
L_003E03E0:
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E0400:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003E0414; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E0424; } }
L_003E0414:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0424u); set32(c.r[5], ld32((c.r[28].w[0] - 30244u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E0424u) [[unlikely]] return; }
L_003E0424:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E0430:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
L_003E0450:
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[6], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], 0u + 56u);
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[1].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003E0688; }
    c.r[1].d[0] = c.r[8].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));  goto L_003E0498; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0490u);  if (depth < kMaxDepth) unit_00B8(c, 348u, depth + 1u); else { c.pc = 0x003E2830u; return; } if (c.pc != 0x003E0490u) [[unlikely]] return; }
L_003E0490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E0684; } }
L_003E0498:
    c.budget -= 2;
    if (c.r[8].sd[0] >= 0) { c.r[3].d[0] = c.r[4].d[0] << 32;  goto L_003E04AC; }
    set32(c.r[2], c.r[8].w[0] + 3u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.budget -= 3;
L_003E04AC:
    set32(c.r[2], 0u + 5u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30392u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_003E04E4; } }
    set32(c.r[4], 0u - 4u);
    c.budget -= 1;
L_003E04E4:
    set32(c.r[3], c.r[8].w[0] << 1);
    c.r[2].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_003E0504; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_003E0504:
    c.r[5].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[4], 0u + 5u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[28].w[0] - 30392u), c.r[2].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_003E054C; } }
    set32(c.r[4], 0u - 4u);
    st32((c.r[28].w[0] - 30392u), c.r[4].w[0]);
    c.budget -= 2;
L_003E054C:
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = c.r[7].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[3].d[0] << 32;
    set32(c.r[17], c.r[2].w[0] - 56u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0570u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 220u, depth + 1u); else { c.pc = 0x003E1B60u; return; } if (c.pc != 0x003E0570u) [[unlikely]] return; }
L_003E0570:
    set32(c.r[2], c.r[29].w[0] + 140u);
    c.r[6].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[7], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    st8((c.r[29].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E059Cu); st32((c.r[29].w[0] + 100u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 236u, depth + 1u); else { c.pc = 0x003E1D00u; return; } if (c.pc != 0x003E059Cu) [[unlikely]] return; }
L_003E059C:
    set32(c.r[16], ld32((c.r[29].w[0] + 144u)));
    c.r[4].d[0] = c.r[18].d[0] << 32;
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; st32((c.r[29].w[0] + 108u), c.r[16].w[0]);  if (t) { goto L_003E062C; } }
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E05D0u); st32((c.r[29].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x003E0B20u; return; } if (c.pc != 0x003E05D0u) [[unlikely]] return; }
L_003E05D0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E05DCu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x003E0B20u; return; } if (c.pc != 0x003E05DCu) [[unlikely]] return; }
L_003E05DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E05E8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 49u, depth + 1u); else { c.pc = 0x003E06A0u; return; } if (c.pc != 0x003E05E8u) [[unlikely]] return; }
L_003E05E8:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[6].d[0] = c.r[19].d[0] << 32;
    set32(c.r[5], c.r[3].w[0] + 56u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], c.r[29].w[0] + 132u);
    set32(c.r[7], c.r[29].w[0] + 88u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[4], c.r[29].w[0] + 136u);
    st32((c.r[29].w[0] + 108u), c.r[5].w[0]);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    st8((c.r[29].w[0] + 88u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0624u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 312u, depth + 1u); else { c.pc = 0x003E24B0u; return; } if (c.pc != 0x003E0624u) [[unlikely]] return; }
L_003E0624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 136u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E0450u | kUnwind; return; } goto L_003E0450; } }
L_003E062C:
    set32(c.r[2], c.r[16].w[0] - c.r[4].w[0]);
    set32(c.r[6], 0u + 56u);
    mmi::div(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] - c.r[16].w[0]);
    mmi::div(c, 1, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003E0670; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0664u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 38u, depth + 1u); else { c.pc = 0x003E0430u; return; } if (c.pc != 0x003E0664u) [[unlikely]] return; }
L_003E0664:
    c.r[18].d[0] = c.r[16].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E0450u | kUnwind; return; } goto L_003E0450; } }
L_003E0670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0678u);  if (depth < kMaxDepth) unit_00B8(c, 38u, depth + 1u); else { c.pc = 0x003E0430u; return; } if (c.pc != 0x003E0678u) [[unlikely]] return; }
L_003E0678:
    c.r[19].d[0] = c.r[16].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E0450u | kUnwind; return; } goto L_003E0450; } }
L_003E0684:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003E0688:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003E06A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E06CCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 92u, depth + 1u); else { c.pc = 0x003E0AD0u; return; } if (c.pc != 0x003E06CCu) [[unlikely]] return; }
L_003E06CC:
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E06D8u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_00B8(c, 92u, depth + 1u); else { c.pc = 0x003E0AD0u; return; } if (c.pc != 0x003E06D8u) [[unlikely]] return; }
L_003E06D8:
    set32(c.r[4], c.r[18].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E06E4u); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_00B8(c, 92u, depth + 1u); else { c.pc = 0x003E0AD0u; return; } if (c.pc != 0x003E06E4u) [[unlikely]] return; }
L_003E06E4:
    set32(c.r[4], c.r[18].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E06F0u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_004E(c, 173u, depth + 1u); else { c.pc = 0x00239E20u; return; } if (c.pc != 0x003E06F0u) [[unlikely]] return; }
L_003E06F0:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E06FCu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_00B8(c, 91u, depth + 1u); else { c.pc = 0x003E0AC0u; return; } if (c.pc != 0x003E06FCu) [[unlikely]] return; }
L_003E06FC:
    set32(c.r[4], c.r[18].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0708u); set32(c.r[5], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_00B8(c, 88u, depth + 1u); else { c.pc = 0x003E0A70u; return; } if (c.pc != 0x003E0708u) [[unlikely]] return; }
L_003E0708:
    set32(c.r[4], c.r[18].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0714u); set32(c.r[5], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_00B8(c, 87u, depth + 1u); else { c.pc = 0x003E0A50u; return; } if (c.pc != 0x003E0714u) [[unlikely]] return; }
L_003E0714:
    set32(c.r[4], c.r[18].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0720u); set32(c.r[5], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_00B8(c, 87u, depth + 1u); else { c.pc = 0x003E0A50u; return; } if (c.pc != 0x003E0720u) [[unlikely]] return; }
L_003E0720:
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E072Cu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_00B8(c, 84u, depth + 1u); else { c.pc = 0x003E0A00u; return; } if (c.pc != 0x003E072Cu) [[unlikely]] return; }
L_003E072C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 52u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[29].w[0] + 116u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 53u));
    st8((c.r[29].w[0] + 117u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 54u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0750u); st8((c.r[29].w[0] + 118u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x003E0750u) [[unlikely]] return; }
L_003E0750:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E075Cu); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x003E075Cu) [[unlikely]] return; }
L_003E075C:
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0768u); set32(c.r[5], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x003E0768u) [[unlikely]] return; }
L_003E0768:
    set32(c.r[4], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0774u); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_004E(c, 104u, depth + 1u); else { c.pc = 0x002395A0u; return; } if (c.pc != 0x003E0774u) [[unlikely]] return; }
L_003E0774:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0788u); st32((c.r[17].w[0] + 16u), c.f[0]);  if (depth < kMaxDepth) unit_00B8(c, 78u, depth + 1u); else { c.pc = 0x003E0950u; return; } if (c.pc != 0x003E0788u) [[unlikely]] return; }
L_003E0788:
    c.f[2] = ld32((c.r[16].w[0] + 24u));
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[17].w[0] + 24u), c.f[2]);
    st32((c.r[17].w[0] + 28u), c.f[1]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E07C4u); st32((c.r[17].w[0] + 44u), c.f[0]);  if (depth < kMaxDepth) unit_00B8(c, 72u, depth + 1u); else { c.pc = 0x003E08A0u; return; } if (c.pc != 0x003E07C4u) [[unlikely]] return; }
L_003E07C4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[17].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 53u));
    st8((c.r[17].w[0] + 53u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 54u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E07E8u); st8((c.r[17].w[0] + 54u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x003E07E8u) [[unlikely]] return; }
L_003E07E8:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E07F4u); set32(c.r[5], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x003E07F4u) [[unlikely]] return; }
L_003E07F4:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0800u); set32(c.r[5], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x003E0800u) [[unlikely]] return; }
L_003E0800:
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E080Cu); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_004E(c, 104u, depth + 1u); else { c.pc = 0x002395A0u; return; } if (c.pc != 0x003E080Cu) [[unlikely]] return; }
L_003E080C:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[4], c.r[16].w[0] + 20u);
    set32(c.r[5], c.r[29].w[0] + 84u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0820u); st32((c.r[16].w[0] + 16u), c.f[0]);  if (depth < kMaxDepth) unit_00B8(c, 78u, depth + 1u); else { c.pc = 0x003E0950u; return; } if (c.pc != 0x003E0820u) [[unlikely]] return; }
L_003E0820:
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.f[1] = ld32((c.r[29].w[0] + 92u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[16].w[0] + 24u), c.f[2]);
    st32((c.r[16].w[0] + 28u), c.f[1]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 100u));
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E085Cu); st32((c.r[16].w[0] + 44u), c.f[0]);  if (depth < kMaxDepth) unit_00B8(c, 72u, depth + 1u); else { c.pc = 0x003E08A0u; return; } if (c.pc != 0x003E085Cu) [[unlikely]] return; }
L_003E085C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 116u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 117u));
    st8((c.r[16].w[0] + 53u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 118u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0880u); st8((c.r[16].w[0] + 54u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B9(c, 31u, depth + 1u); else { c.pc = 0x003E44F0u; return; } if (c.pc != 0x003E0880u) [[unlikely]] return; }
L_003E0880:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003E08A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003E0928; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0])));  goto L_003E0908; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E08D8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E08D8u) [[unlikely]] return; }
L_003E08D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E08E8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E08E8u) [[unlikely]] return; }
L_003E08E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E0904; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0904u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E0904u) [[unlikely]] return; }
L_003E0904:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003E0908:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_003E0928; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0918u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E0918u) [[unlikely]] return; }
L_003E0918:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0928u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E0928u) [[unlikely]] return; }
L_003E0928:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E0950:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003E09D8; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0])));  goto L_003E09B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0988u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E0988u) [[unlikely]] return; }
L_003E0988:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0998u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E0998u) [[unlikely]] return; }
L_003E0998:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E09B4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E09B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E09B4u) [[unlikely]] return; }
L_003E09B4:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003E09B8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_003E09D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E09C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E09C8u) [[unlikely]] return; }
L_003E09C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E09D8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E09D8u) [[unlikely]] return; }
L_003E09D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E0A00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[16].w[0]);  if (t) { goto L_003E0A38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0A28u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E0A28u) [[unlikely]] return; }
L_003E0A28:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0A38u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E0A38u) [[unlikely]] return; }
L_003E0A38:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E0A50:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_003E0A70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[16].w[0]);  if (t) { goto L_003E0AA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0A98u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E0A98u) [[unlikely]] return; }
L_003E0A98:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0AA8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E0AA8u) [[unlikely]] return; }
L_003E0AA8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E0AC0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003E0AD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[16].w[0]);  if (t) { goto L_003E0B08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0AF8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E0AF8u) [[unlikely]] return; }
L_003E0AF8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0B08u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E0B08u) [[unlikely]] return; }
L_003E0B08:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E0B20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_003E0B30:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { const bool t = c.r[21].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003E0D90; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[21].w[0] + 196u));  goto L_003E0C04; }
    set32(c.r[16], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E0C00; } }
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_003E0B8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003E0BD4; } }
L_003E0B8C:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0B98u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E0B98u) [[unlikely]] return; }
L_003E0B98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 23832u);  if (t) { goto L_003E0BB8; } }
L_003E0BA8:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_003E0BB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003E0BC4; } }
L_003E0BB8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E0BA8u | kUnwind; return; } goto L_003E0BA8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E0BC4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_003E0BD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003E0BD4; } }
L_003E0BD4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E0C00; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0BECu); set32(c.r[5], c.r[5].w[0] - 10392u);  if (depth < kMaxDepth) unit_00AE(c, 282u, depth + 1u); else { c.pc = 0x003BAAB0u; return; } if (c.pc != 0x003E0BECu) [[unlikely]] return; }
L_003E0BEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_003E0C00; } }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0C00u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 392u, depth + 1u); else { c.pc = 0x003DF750u; return; } if (c.pc != 0x003E0C00u) [[unlikely]] return; }
L_003E0C00:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 196u));
    c.budget -= 1;
L_003E0C04:
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_003E0D94; }
    c.r[3].d[0] = ld16((c.r[21].w[0] + 218u));
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);  if (t) { goto L_003E0D80; } }
L_003E0C20:
    c.r[1].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 212u)));  goto L_003E0C34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003E0C40; } }
L_003E0C34:
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_003E0C40:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_003E0D80; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003E0CB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0C58u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 127u, depth + 1u); else { c.pc = 0x003E0EC0u; return; } if (c.pc != 0x003E0C58u) [[unlikely]] return; }
L_003E0C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0C60u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 126u, depth + 1u); else { c.pc = 0x003E0EB0u; return; } if (c.pc != 0x003E0C60u) [[unlikely]] return; }
L_003E0C60:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E0CAC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0C7Cu); set32(c.r[4], c.r[4].w[0] + 23832u);  if (depth < kMaxDepth) unit_004E(c, 128u, depth + 1u); else { c.pc = 0x00239870u; return; } if (c.pc != 0x003E0C7Cu) [[unlikely]] return; }
L_003E0C7C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E0CAC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0C98u); set32(c.r[5], c.r[5].w[0] - 10392u);  if (depth < kMaxDepth) unit_00AE(c, 282u, depth + 1u); else { c.pc = 0x003BAAB0u; return; } if (c.pc != 0x003E0C98u) [[unlikely]] return; }
L_003E0C98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_003E0CAC; } }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0CACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 392u, depth + 1u); else { c.pc = 0x003DF750u; return; } if (c.pc != 0x003E0CACu) [[unlikely]] return; }
L_003E0CAC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003E0CB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0CB8u); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_00B8(c, 125u, depth + 1u); else { c.pc = 0x003E0E90u; return; } if (c.pc != 0x003E0CB8u) [[unlikely]] return; }
L_003E0CB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E0D7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0CC8u); set32(c.r[4], c.r[18].w[0] + 208u);  if (depth < kMaxDepth) unit_004E(c, 133u, depth + 1u); else { c.pc = 0x00239910u; return; } if (c.pc != 0x003E0CC8u) [[unlikely]] return; }
L_003E0CC8:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003E0D70; } }
L_003E0CD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0CDCu); set32(c.r[4], c.r[18].w[0] + 208u);  if (depth < kMaxDepth) unit_004E(c, 133u, depth + 1u); else { c.pc = 0x00239910u; return; } if (c.pc != 0x003E0CDCu) [[unlikely]] return; }
L_003E0CDC:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] + 208u);  goto L_003E0CF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003E0D04; } }
L_003E0CF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0CF8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 132u, depth + 1u); else { c.pc = 0x00239900u; return; } if (c.pc != 0x003E0CF8u) [[unlikely]] return; }
L_003E0CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0D00u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 131u, depth + 1u); else { c.pc = 0x002398F0u; return; } if (c.pc != 0x003E0D00u) [[unlikely]] return; }
L_003E0D00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003E0D04:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_003E0D70; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003E0D24; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0D20u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 120u, depth + 1u); else { c.pc = 0x003E0DD0u; return; } if (c.pc != 0x003E0D20u) [[unlikely]] return; }
L_003E0D20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E0D24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0D2Cu);  if (depth < kMaxDepth) unit_00B8(c, 119u, depth + 1u); else { c.pc = 0x003E0DC0u; return; } if (c.pc != 0x003E0D2Cu) [[unlikely]] return; }
L_003E0D2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E0D6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0D3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 126u, depth + 1u); else { c.pc = 0x00239830u; return; } if (c.pc != 0x003E0D3Cu) [[unlikely]] return; }
L_003E0D3C:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_003E0D60; } }
L_003E0D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0D50u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 127u, depth + 1u); else { c.pc = 0x00239840u; return; } if (c.pc != 0x003E0D50u) [[unlikely]] return; }
L_003E0D50:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0D5Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 96u, depth + 1u); else { c.pc = 0x003E0B30u; return; } if (c.pc != 0x003E0D5Cu) [[unlikely]] return; }
L_003E0D5C:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_003E0D60:
    c.r[3].d[0] = c.r[22].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E0D48u | kUnwind; return; } goto L_003E0D48; }
L_003E0D6C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003E0D70:
    c.r[3].d[0] = c.r[17].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E0CD4u | kUnwind; return; } goto L_003E0CD4; } }
L_003E0D7C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_003E0D80:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[21].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E0C20u | kUnwind; return; } goto L_003E0C20; }
L_003E0D90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003E0D94:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003E0DC0:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_003E0DD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E0E78; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_003E0E04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003E0E4C; } }
L_003E0E04:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0E10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E0E10u) [[unlikely]] return; }
L_003E0E10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 23832u);  if (t) { goto L_003E0E30; } }
L_003E0E20:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_003E0E30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003E0E3C; } }
L_003E0E30:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E0E20u | kUnwind; return; } goto L_003E0E20; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E0E3C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_003E0E4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E0E4C; } }
L_003E0E4C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003E0E7C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0E64u); set32(c.r[5], c.r[5].w[0] - 10392u);  if (depth < kMaxDepth) unit_00AE(c, 282u, depth + 1u); else { c.pc = 0x003BAAB0u; return; } if (c.pc != 0x003E0E64u) [[unlikely]] return; }
L_003E0E64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_003E0E78; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0E78u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 392u, depth + 1u); else { c.pc = 0x003DF750u; return; } if (c.pc != 0x003E0E78u) [[unlikely]] return; }
L_003E0E78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003E0E7C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E0E90:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_003E0EB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_003E0EC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_003E0ED0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { const bool t = c.r[21].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003E0F10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003E10D4; } }
L_003E0F10:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0F20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E0F20u) [[unlikely]] return; }
L_003E0F20:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_003E0F34; }
    st32((c.r[20].w[0]), c.r[21].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003E0F34:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[21].w[0] + 196u));  goto L_003E0F44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E10D4; } }
L_003E0F44:
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_003E10D4; }
    c.r[30].d[0] = ld16((c.r[21].w[0] + 218u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003E10C4; } }
L_003E0F5C:
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 212u)));  goto L_003E0F70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003E0F7C; } }
L_003E0F70:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_003E0F7C:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_003E0F8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003E10B4; } }
L_003E0F8C:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0F98u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E0F98u) [[unlikely]] return; }
L_003E0F98:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_003E0FAC; }
    st32((c.r[20].w[0]), c.r[18].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003E0FAC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003E0FBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E10B4; } }
L_003E0FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0FC4u); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_00B8(c, 125u, depth + 1u); else { c.pc = 0x003E0E90u; return; } if (c.pc != 0x003E0FC4u) [[unlikely]] return; }
L_003E0FC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_003E10B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0FD4u); set32(c.r[4], c.r[18].w[0] + 208u);  if (depth < kMaxDepth) unit_004E(c, 133u, depth + 1u); else { c.pc = 0x00239910u; return; } if (c.pc != 0x003E0FD4u) [[unlikely]] return; }
L_003E0FD4:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003E10A4; } }
L_003E0FE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0FE8u); set32(c.r[4], c.r[18].w[0] + 208u);  if (depth < kMaxDepth) unit_004E(c, 133u, depth + 1u); else { c.pc = 0x00239910u; return; } if (c.pc != 0x003E0FE8u) [[unlikely]] return; }
L_003E0FE8:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] + 208u);  goto L_003E0FFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003E1010; } }
L_003E0FFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1004u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 132u, depth + 1u); else { c.pc = 0x00239900u; return; } if (c.pc != 0x003E1004u) [[unlikely]] return; }
L_003E1004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E100Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 131u, depth + 1u); else { c.pc = 0x002398F0u; return; } if (c.pc != 0x003E100Cu) [[unlikely]] return; }
L_003E100C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003E1010:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_003E1020; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003E1094; } }
L_003E1020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1028u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 144u, depth + 1u); else { c.pc = 0x003E1110u; return; } if (c.pc != 0x003E1028u) [[unlikely]] return; }
L_003E1028:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003E1038; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E1094; } }
L_003E1038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1040u);  if (depth < kMaxDepth) unit_00B8(c, 119u, depth + 1u); else { c.pc = 0x003E0DC0u; return; } if (c.pc != 0x003E1040u) [[unlikely]] return; }
L_003E1040:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_003E1094; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1050u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 126u, depth + 1u); else { c.pc = 0x00239830u; return; } if (c.pc != 0x003E1050u) [[unlikely]] return; }
L_003E1050:
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_003E1080; } }
L_003E105C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1064u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 127u, depth + 1u); else { c.pc = 0x00239840u; return; } if (c.pc != 0x003E1064u) [[unlikely]] return; }
L_003E1064:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1070u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 128u, depth + 1u); else { c.pc = 0x003E0ED0u; return; } if (c.pc != 0x003E1070u) [[unlikely]] return; }
L_003E1070:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_003E1080; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E1094; } }
L_003E1080:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[22].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E105Cu | kUnwind; return; } goto L_003E105C; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003E1094:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_003E10A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E10B4; } }
L_003E10A4:
    c.r[2].d[0] = c.r[17].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E0FE0u | kUnwind; return; } goto L_003E0FE0; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003E10B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_003E10C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E10D4; } }
L_003E10C4:
    c.r[2].d[0] = c.r[19].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[21].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E0F5Cu | kUnwind; return; } goto L_003E0F5C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003E10D4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003E1110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1138u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E1138u) [[unlikely]] return; }
L_003E1138:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], 0u + 1u);  goto L_003E114C; }
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003E114C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E1160:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 16;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003E1544; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 8u)));  goto L_003E11DC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E11D0u); set32(c.r[5], c.r[5].w[0] - 10208u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003E11D0u) [[unlikely]] return; }
L_003E11D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E11D8u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003E11D8u) [[unlikely]] return; }
L_003E11D8:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_003E11DC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[19].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0])));  goto L_003E1358; }
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[2], 0u + 56u);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[16].w[0] - c.r[20].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[23].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[23].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] << 3);  goto L_003E12B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E1258; } }
L_003E1228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1230u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x003E1230u) [[unlikely]] return; }
L_003E1230:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 8u)));  goto L_003E1248; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1244u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 190u, depth + 1u); else { c.pc = 0x003E1750u; return; } if (c.pc != 0x003E1244u) [[unlikely]] return; }
L_003E1244:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_003E1248:
    set32(c.r[17], c.r[17].w[0] + 56u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_003E1258:
    c.r[1].d[0] = c.r[23].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], 0u + 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1228u | kUnwind; return; } goto L_003E1228; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003E129C; } }
L_003E126C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1274u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x003E1274u) [[unlikely]] return; }
L_003E1274:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 8u)));  goto L_003E128C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1288u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 190u, depth + 1u); else { c.pc = 0x003E1750u; return; } if (c.pc != 0x003E1288u) [[unlikely]] return; }
L_003E1288:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_003E128C:
    set32(c.r[22], c.r[22].w[0] + 56u);
    set32(c.r[17], c.r[17].w[0] + 56u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_003E129C:
    c.r[2].d[0] = c.r[22].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E126Cu | kUnwind; return; } goto L_003E126C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003E1344; } }
L_003E12B0:
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    set32(c.r[30], c.r[2].w[0] << 3);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[16].w[0] - c.r[30].w[0]);  if (t) { goto L_003E12F4; } }
L_003E12C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E12CCu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x003E12CCu) [[unlikely]] return; }
L_003E12CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 8u)));  goto L_003E12E4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E12E0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 190u, depth + 1u); else { c.pc = 0x003E1750u; return; } if (c.pc != 0x003E12E0u) [[unlikely]] return; }
L_003E12E0:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_003E12E4:
    set32(c.r[17], c.r[17].w[0] + 56u);
    set32(c.r[22], c.r[22].w[0] + 56u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_003E12F4:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E12C4u | kUnwind; return; } goto L_003E12C4; }
    set32(c.r[3], c.r[23].w[0] - c.r[19].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[20].w[0] + c.r[3].w[0]);  goto L_003E1334; }
    c.r[1].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E1330; } }
    set32(c.r[18], c.r[18].w[0] + c.r[30].w[0]);
    c.budget -= 1;
L_003E1330:
    set32(c.r[5], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_003E1334:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1340u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 182u, depth + 1u); else { c.pc = 0x003E1660u; return; } if (c.pc != 0x003E1340u) [[unlikely]] return; }
L_003E1340:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003E1344:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1350u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 174u, depth + 1u); else { c.pc = 0x003E1580u; return; } if (c.pc != 0x003E1350u) [[unlikely]] return; }
L_003E1350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003E1548; } }
L_003E1358:
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[29].w[0] + 164u), 0u);
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 172u), 0u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_003E1378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003E1380; } }
L_003E1378:
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_003E1380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_003E13A0; } }
L_003E1388:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_003E139C; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_003E139C:
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003E13A0:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1388u | kUnwind; return; } goto L_003E1388; }
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E13BCu); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003E13BCu) [[unlikely]] return; }
L_003E13BC:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 164u), c.r[16].w[0]);
    set32(c.r[16], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    st32((c.r[29].w[0] + 172u), c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_003E1414; } }
L_003E13E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E13ECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x003E13ECu) [[unlikely]] return; }
L_003E13EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 168u)));  goto L_003E1404; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1400u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 190u, depth + 1u); else { c.pc = 0x003E1750u; return; } if (c.pc != 0x003E1400u) [[unlikely]] return; }
L_003E1400:
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_003E1404:
    set32(c.r[16], c.r[16].w[0] + 56u);
    set32(c.r[17], c.r[17].w[0] + 56u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 4;
L_003E1414:
    c.r[3].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], 0u + 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E13E4u | kUnwind; return; } goto L_003E13E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E1458; } }
L_003E1428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1430u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x003E1430u) [[unlikely]] return; }
L_003E1430:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 168u)));  goto L_003E1448; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1444u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 190u, depth + 1u); else { c.pc = 0x003E1750u; return; } if (c.pc != 0x003E1444u) [[unlikely]] return; }
L_003E1444:
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_003E1448:
    set32(c.r[17], c.r[17].w[0] + 56u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 4;
L_003E1458:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[4], 0u + 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1428u | kUnwind; return; } goto L_003E1428; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[16].d[0] < c.r[22].d[0] ? 1ull : 0ull;  if (t) { goto L_003E149C; } }
L_003E1468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1470u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x003E1470u) [[unlikely]] return; }
L_003E1470:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 168u)));  goto L_003E1488; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1484u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 190u, depth + 1u); else { c.pc = 0x003E1750u; return; } if (c.pc != 0x003E1484u) [[unlikely]] return; }
L_003E1484:
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_003E1488:
    set32(c.r[16], c.r[16].w[0] + 56u);
    set32(c.r[17], c.r[17].w[0] + 56u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_003E149C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], 0u + 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1468u | kUnwind; return; } goto L_003E1468; }
    set32(c.r[3], c.r[29].w[0] + 160u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[21].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 168u)));  goto L_003E14F4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 172u)));
    st32((c.r[21].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    st32((c.r[29].w[0] + 164u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    st32((c.r[29].w[0] + 172u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    st32((c.r[21].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 17;
L_003E14F4:
    set32(c.r[16], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_003E151C; } }
L_003E150C:
    set32(c.r[17], c.r[17].w[0] - 56u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E151Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 31u, depth + 1u); else { c.pc = 0x003E44F0u; return; } if (c.pc != 0x003E151Cu) [[unlikely]] return; }
L_003E151C:
    c.r[1].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E150Cu | kUnwind; return; } goto L_003E150C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 168u), 0u);  if (t) { goto L_003E1544; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E1544; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1544u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003E1544u) [[unlikely]] return; }
L_003E1544:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003E1548:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003E1580:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003E1640; } }
L_003E15A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E15ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x003E15ACu) [[unlikely]] return; }
L_003E15AC:
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E15B8u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x003E15B8u) [[unlikely]] return; }
L_003E15B8:
    set32(c.r[4], c.r[18].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E15C4u); set32(c.r[5], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x003E15C4u) [[unlikely]] return; }
L_003E15C4:
    set32(c.r[4], c.r[18].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E15D0u); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_004E(c, 104u, depth + 1u); else { c.pc = 0x002395A0u; return; } if (c.pc != 0x003E15D0u) [[unlikely]] return; }
L_003E15D0:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[4], c.r[18].w[0] + 20u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E15E4u); st32((c.r[18].w[0] + 16u), c.f[0]);  if (depth < kMaxDepth) unit_00B8(c, 78u, depth + 1u); else { c.pc = 0x003E0950u; return; } if (c.pc != 0x003E15E4u) [[unlikely]] return; }
L_003E15E4:
    c.f[2] = ld32((c.r[16].w[0] + 24u));
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[18].w[0] + 24u), c.f[2]);
    st32((c.r[18].w[0] + 28u), c.f[1]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1620u); st32((c.r[18].w[0] + 44u), c.f[0]);  if (depth < kMaxDepth) unit_00B8(c, 72u, depth + 1u); else { c.pc = 0x003E08A0u; return; } if (c.pc != 0x003E1620u) [[unlikely]] return; }
L_003E1620:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 52u));
    set32(c.r[17], c.r[17].w[0] - 1u);
    st8((c.r[18].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 53u));
    st8((c.r[18].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 54u));
    st8((c.r[18].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[18], c.r[18].w[0] + 56u);
    c.budget -= 8;
L_003E1640:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E15A4u | kUnwind; return; } goto L_003E15A4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E1660:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003E1720; } }
L_003E1684:
    set32(c.r[16], c.r[16].w[0] - 56u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1694u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x003E1694u) [[unlikely]] return; }
L_003E1694:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E16A0u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x003E16A0u) [[unlikely]] return; }
L_003E16A0:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E16ACu); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x003E16ACu) [[unlikely]] return; }
L_003E16AC:
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E16B8u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_004E(c, 104u, depth + 1u); else { c.pc = 0x002395A0u; return; } if (c.pc != 0x003E16B8u) [[unlikely]] return; }
L_003E16B8:
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[4], c.r[16].w[0] + 20u);
    set32(c.r[5], c.r[17].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E16CCu); st32((c.r[16].w[0] + 16u), c.f[0]);  if (depth < kMaxDepth) unit_00B8(c, 78u, depth + 1u); else { c.pc = 0x003E0950u; return; } if (c.pc != 0x003E16CCu) [[unlikely]] return; }
L_003E16CC:
    c.f[2] = ld32((c.r[17].w[0] + 24u));
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[16].w[0] + 24u), c.f[2]);
    st32((c.r[16].w[0] + 28u), c.f[1]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1708u); st32((c.r[16].w[0] + 44u), c.f[0]);  if (depth < kMaxDepth) unit_00B8(c, 72u, depth + 1u); else { c.pc = 0x003E08A0u; return; } if (c.pc != 0x003E1708u) [[unlikely]] return; }
L_003E1708:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 52u));
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 53u));
    st8((c.r[16].w[0] + 53u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 54u));
    st8((c.r[16].w[0] + 54u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_003E1720:
    c.r[1].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] - 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1684u | kUnwind; return; } goto L_003E1684; }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E1750:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[4].w[0]), c.r[18].w[0]);  if (t) { goto L_003E1790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1780u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E1780u) [[unlikely]] return; }
L_003E1780:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1790u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E1790u) [[unlikely]] return; }
L_003E1790:
    set32(c.r[18], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 4u), c.r[18].w[0]);  if (t) { goto L_003E17B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E17A4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E17A4u) [[unlikely]] return; }
L_003E17A4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E17B4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E17B4u) [[unlikely]] return; }
L_003E17B4:
    set32(c.r[18], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[18].w[0]);  if (t) { goto L_003E17D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E17C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E17C8u) [[unlikely]] return; }
L_003E17C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E17D8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E17D8u) [[unlikely]] return; }
L_003E17D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_003E1808; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E17F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E17F4u) [[unlikely]] return; }
L_003E17F4:
    set32(c.r[2], ld32((c.r[18].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1804u); st32((c.r[18].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E1804u) [[unlikely]] return; }
L_003E1804:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_003E1808:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 20u), c.r[18].w[0]);  if (t) { goto L_003E1838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1828u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E1828u) [[unlikely]] return; }
L_003E1828:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1838u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E1838u) [[unlikely]] return; }
L_003E1838:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[17].w[0] + 44u), c.f[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 15;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 48u), c.r[18].w[0]);  if (t) { goto L_003E188C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E187Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E187Cu) [[unlikely]] return; }
L_003E187C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E188Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E188Cu) [[unlikely]] return; }
L_003E188C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 53u));
    st8((c.r[17].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 54u));
    st8((c.r[17].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E18C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003E1A14; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    st32((c.r[29].w[0] + 84u), 0u);
    set32(c.r[4], c.r[2].w[0] << 3);
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 80u), c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1910u); st32((c.r[29].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003E1910u) [[unlikely]] return; }
L_003E1910:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 84u), c.r[16].w[0]);
    set32(c.r[3], c.r[4].w[0] << 3);
    st32((c.r[29].w[0] + 92u), c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + c.r[3].w[0]);  if (t) { goto L_003E1968; } }
L_003E1938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1940u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x003E1940u) [[unlikely]] return; }
L_003E1940:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 88u)));  goto L_003E1958; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1954u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 190u, depth + 1u); else { c.pc = 0x003E1750u; return; } if (c.pc != 0x003E1954u) [[unlikely]] return; }
L_003E1954:
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_003E1958:
    set32(c.r[17], c.r[17].w[0] + 56u);
    set32(c.r[18], c.r[18].w[0] + 56u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 4;
L_003E1968:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], 0u + 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1938u | kUnwind; return; } goto L_003E1938; }
    set32(c.r[3], c.r[29].w[0] + 80u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 88u)));  goto L_003E19C4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    st32((c.r[19].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    st32((c.r[29].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[19].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 17;
L_003E19C4:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_003E19EC; } }
L_003E19DC:
    set32(c.r[17], c.r[17].w[0] - 56u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E19ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 31u, depth + 1u); else { c.pc = 0x003E44F0u; return; } if (c.pc != 0x003E19ECu) [[unlikely]] return; }
L_003E19EC:
    c.r[1].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E19DCu | kUnwind; return; } goto L_003E19DC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 88u), 0u);  if (t) { goto L_003E1A14; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003E1A18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1A14u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003E1A14u) [[unlikely]] return; }
L_003E1A14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003E1A18:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003E1A30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] + c.r[3].w[0]);  if (t) { goto L_003E1A74; } }
L_003E1A64:
    set32(c.r[18], c.r[18].w[0] - 56u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1A74u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 31u, depth + 1u); else { c.pc = 0x003E44F0u; return; } if (c.pc != 0x003E1A74u) [[unlikely]] return; }
L_003E1A74:
    c.r[1].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1A64u | kUnwind; return; } goto L_003E1A64; } }
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E1AA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E1B34; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_003E1AF0; } }
L_003E1AE0:
    set32(c.r[19], c.r[19].w[0] - 56u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1AF0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 31u, depth + 1u); else { c.pc = 0x003E44F0u; return; } if (c.pc != 0x003E1AF0u) [[unlikely]] return; }
L_003E1AF0:
    c.r[1].d[0] = c.r[16].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1AE0u | kUnwind; return; } goto L_003E1AE0; } }
    st32((c.r[18].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_003E1B20; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E1B1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1B1Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003E1B1Cu) [[unlikely]] return; }
L_003E1B1C:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_003E1B20:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_003E1B38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1B34u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003E1B34u) [[unlikely]] return; }
L_003E1B34:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003E1B38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E1B5C:
    c.budget -= 1;
L_003E1B60:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 88u), c.r[5].w[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 84u), c.r[4].w[0]);
    c.r[5].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1B9Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00B8(c, 463u, depth + 1u); else { c.pc = 0x003E3830u; return; } if (c.pc != 0x003E1B9Cu) [[unlikely]] return; }
L_003E1B9C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1BBCu); c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_00B8(c, 463u, depth + 1u); else { c.pc = 0x003E3830u; return; } if (c.pc != 0x003E1BBCu) [[unlikely]] return; }
L_003E1BBC:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003E1BD4; } }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003E1CE8; }
L_003E1BD4:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[5].d[0] = c.r[17].d[0] << 32;  goto L_003E1C24; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E1C20; } }
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[29].w[0] + 124u);
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1C00u); st32((c.r[29].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x003E0B20u; return; } if (c.pc != 0x003E1C00u) [[unlikely]] return; }
L_003E1C00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1C0Cu); set32(c.r[4], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x003E0B20u; return; } if (c.pc != 0x003E1C0Cu) [[unlikely]] return; }
L_003E1C0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1C18u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 49u, depth + 1u); else { c.pc = 0x003E06A0u; return; } if (c.pc != 0x003E1C18u) [[unlikely]] return; }
L_003E1C18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E1CE4; } }
L_003E1C20:
    c.r[5].d[0] = c.r[17].d[0] << 32;
    c.budget -= 1;
L_003E1C24:
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1C34u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);  if (depth < kMaxDepth) unit_00B8(c, 463u, depth + 1u); else { c.pc = 0x003E3830u; return; } if (c.pc != 0x003E1C34u) [[unlikely]] return; }
L_003E1C34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E1C70; } }
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1C58u); st32((c.r[29].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x003E0B20u; return; } if (c.pc != 0x003E1C58u) [[unlikely]] return; }
L_003E1C58:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1C64u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x003E0B20u; return; } if (c.pc != 0x003E1C64u) [[unlikely]] return; }
L_003E1C64:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1C70u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 49u, depth + 1u); else { c.pc = 0x003E06A0u; return; } if (c.pc != 0x003E1C70u) [[unlikely]] return; }
L_003E1C70:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 84u));  goto L_003E1CB4; }
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[29].w[0] + 108u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1C94u); st32((c.r[29].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x003E0B20u; return; } if (c.pc != 0x003E1C94u) [[unlikely]] return; }
L_003E1C94:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1CA0u); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x003E0B20u; return; } if (c.pc != 0x003E1CA0u) [[unlikely]] return; }
L_003E1CA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1CACu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 49u, depth + 1u); else { c.pc = 0x003E06A0u; return; } if (c.pc != 0x003E1CACu) [[unlikely]] return; }
L_003E1CAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E1CE4; } }
L_003E1CB4:
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[29].w[0] + 100u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1CCCu); st32((c.r[29].w[0] + 100u), c.f[0]);  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x003E0B20u; return; } if (c.pc != 0x003E1CCCu) [[unlikely]] return; }
L_003E1CCC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1CD8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x003E0B20u; return; } if (c.pc != 0x003E1CD8u) [[unlikely]] return; }
L_003E1CD8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1CE4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 49u, depth + 1u); else { c.pc = 0x003E06A0u; return; } if (c.pc != 0x003E1CE4u) [[unlikely]] return; }
L_003E1CE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003E1CE8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003E1D00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 96u), c.r[5].w[0]);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[6].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003E1D3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[5].w[0]);  if (t) { goto L_003E2020; } }
L_003E1D3C:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1D48u); set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_00B8(c, 463u, depth + 1u); else { c.pc = 0x003E3830u; return; } if (c.pc != 0x003E1D48u) [[unlikely]] return; }
L_003E1D48:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], c.r[2].w[0] - 56u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1D64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 463u, depth + 1u); else { c.pc = 0x003E3830u; return; } if (c.pc != 0x003E1D64u) [[unlikely]] return; }
L_003E1D64:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003E1E38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E1E38; } }
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[20], c.r[3].w[0] + 56u);
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[20].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 124u), c.f[0]);  if (t) { goto L_003E1DB0; } }
L_003E1DA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1DB0u); set32(c.r[4], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_00B8(c, 311u, depth + 1u); else { c.pc = 0x003E2490u; return; } if (c.pc != 0x003E1DB0u) [[unlikely]] return; }
L_003E1DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1DB8u); set32(c.r[4], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x003E0B20u; return; } if (c.pc != 0x003E1DB8u) [[unlikely]] return; }
L_003E1DB8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1DC4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 309u, depth + 1u); else { c.pc = 0x003E2460u; return; } if (c.pc != 0x003E1DC4u) [[unlikely]] return; }
L_003E1DC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1DA8u | kUnwind; return; } goto L_003E1DA8; } }
L_003E1DCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1DD4u); set32(c.r[4], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_00B8(c, 308u, depth + 1u); else { c.pc = 0x003E2440u; return; } if (c.pc != 0x003E1DD4u) [[unlikely]] return; }
L_003E1DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1DDCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x003E0B20u; return; } if (c.pc != 0x003E1DDCu) [[unlikely]] return; }
L_003E1DDC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1DE8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 309u, depth + 1u); else { c.pc = 0x003E2460u; return; } if (c.pc != 0x003E1DE8u) [[unlikely]] return; }
L_003E1DE8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1DCCu | kUnwind; return; } goto L_003E1DCC; } }
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1E04u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_00B8(c, 307u, depth + 1u); else { c.pc = 0x003E2420u; return; } if (c.pc != 0x003E1E04u) [[unlikely]] return; }
L_003E1E04:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003E1E28; }
    set32(c.r[5], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1E18u); set32(c.r[4], ld32((c.r[29].w[0] + 124u)));  if (depth < kMaxDepth) unit_00B8(c, 271u, depth + 1u); else { c.pc = 0x003E2050u; return; } if (c.pc != 0x003E1E18u) [[unlikely]] return; }
L_003E1E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1E20u); set32(c.r[4], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_00B8(c, 311u, depth + 1u); else { c.pc = 0x003E2490u; return; } if (c.pc != 0x003E1E20u) [[unlikely]] return; }
L_003E1E20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1DB0u | kUnwind; return; } goto L_003E1DB0; } }
L_003E1E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1E30u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_00B8(c, 270u, depth + 1u); else { c.pc = 0x003E2040u; return; } if (c.pc != 0x003E1E30u) [[unlikely]] return; }
L_003E1E30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003E2024; } }
L_003E1E38:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E1EC4; } }
    c.r[4].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 6;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] << 32;  goto L_003E1E64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[4].w[0]);  if (t) { goto L_003E2020; } }
L_003E1E60:
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_003E1E64:
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], c.r[4].w[0] - 56u);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[16].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] << 32;  goto L_003E1EA8; }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1E94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 463u, depth + 1u); else { c.pc = 0x003E3830u; return; } if (c.pc != 0x003E1E94u) [[unlikely]] return; }
L_003E1E94:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1E60u | kUnwind; return; } goto L_003E1E60; } }
    c.r[4].d[0] = c.r[20].d[0] << 32;
    c.budget -= 1;
L_003E1EA8:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.f[0] = ld32((c.r[29].w[0] + 96u));  goto L_003E1F44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[4].w[0]);  if (t) { goto L_003E2020; } }
L_003E1EC4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E1F40; } }
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[20], c.r[3].w[0] + 56u);
    set32(c.r[16], c.r[4].w[0] + 56u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 96u), c.r[20].w[0]);  if (t) { goto L_003E1EF8; } }
L_003E1EEC:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[20], c.r[3].w[0] + 56u);
    st32((c.r[29].w[0] + 96u), c.r[20].w[0]);
    c.budget -= 3;
L_003E1EF8:
    c.r[4].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].d[0] = c.r[16].d[0] << 32;  goto L_003E1F24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1F18u); set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_00B8(c, 463u, depth + 1u); else { c.pc = 0x003E3830u; return; } if (c.pc != 0x003E1F18u) [[unlikely]] return; }
L_003E1F18:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[20].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1EECu | kUnwind; return; } goto L_003E1EEC; }
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_003E1F24:
    c.r[4].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[16], c.r[3].w[0] - 56u);  goto L_003E1F40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[4].w[0]);  if (t) { goto L_003E2020; } }
L_003E1F40:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003E1F44:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1F5Cu); st32((c.r[29].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x003E0B20u; return; } if (c.pc != 0x003E1F5Cu) [[unlikely]] return; }
L_003E1F5C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1F68u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x003E0B20u; return; } if (c.pc != 0x003E1F68u) [[unlikely]] return; }
L_003E1F68:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1F74u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 49u, depth + 1u); else { c.pc = 0x003E06A0u; return; } if (c.pc != 0x003E1F74u) [[unlikely]] return; }
L_003E1F74:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + 56u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_003E1FA0; } }
L_003E1F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1FA0u); set32(c.r[4], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_00B8(c, 311u, depth + 1u); else { c.pc = 0x003E2490u; return; } if (c.pc != 0x003E1FA0u) [[unlikely]] return; }
L_003E1FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1FA8u); set32(c.r[4], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x003E0B20u; return; } if (c.pc != 0x003E1FA8u) [[unlikely]] return; }
L_003E1FA8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1FB4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 309u, depth + 1u); else { c.pc = 0x003E2460u; return; } if (c.pc != 0x003E1FB4u) [[unlikely]] return; }
L_003E1FB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1F98u | kUnwind; return; } goto L_003E1F98; } }
L_003E1FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1FC4u); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_00B8(c, 308u, depth + 1u); else { c.pc = 0x003E2440u; return; } if (c.pc != 0x003E1FC4u) [[unlikely]] return; }
L_003E1FC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1FCCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x003E0B20u; return; } if (c.pc != 0x003E1FCCu) [[unlikely]] return; }
L_003E1FCC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1FD8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 309u, depth + 1u); else { c.pc = 0x003E2460u; return; } if (c.pc != 0x003E1FD8u) [[unlikely]] return; }
L_003E1FD8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1FBCu | kUnwind; return; } goto L_003E1FBC; } }
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1FF4u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_00B8(c, 307u, depth + 1u); else { c.pc = 0x003E2420u; return; } if (c.pc != 0x003E1FF4u) [[unlikely]] return; }
L_003E1FF4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003E2018; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2008u); set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  if (depth < kMaxDepth) unit_00B8(c, 271u, depth + 1u); else { c.pc = 0x003E2050u; return; } if (c.pc != 0x003E2008u) [[unlikely]] return; }
L_003E2008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2010u); set32(c.r[4], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_00B8(c, 311u, depth + 1u); else { c.pc = 0x003E2490u; return; } if (c.pc != 0x003E2010u) [[unlikely]] return; }
L_003E2010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1FA0u | kUnwind; return; } goto L_003E1FA0; } }
L_003E2018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2020u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_00B8(c, 270u, depth + 1u); else { c.pc = 0x003E2040u; return; } if (c.pc != 0x003E2020u) [[unlikely]] return; }
L_003E2020:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003E2024:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003E2040:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003E2050:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] << 32;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2078u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_00B8(c, 190u, depth + 1u); else { c.pc = 0x003E1750u; return; } if (c.pc != 0x003E2078u) [[unlikely]] return; }
L_003E2078:
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[5].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E208Cu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_00B8(c, 276u, depth + 1u); else { c.pc = 0x003E20C0u; return; } if (c.pc != 0x003E208Cu) [[unlikely]] return; }
L_003E208C:
    c.r[4].d[0] = c.r[17].d[0] << 32;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E209Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);  if (depth < kMaxDepth) unit_00B8(c, 276u, depth + 1u); else { c.pc = 0x003E20C0u; return; } if (c.pc != 0x003E209Cu) [[unlikely]] return; }
L_003E209C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E20A8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00B9(c, 31u, depth + 1u); else { c.pc = 0x003E44F0u; return; } if (c.pc != 0x003E20A8u) [[unlikely]] return; }
L_003E20A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003E20C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E2150; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0])));  goto L_003E2130; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2100u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E2100u) [[unlikely]] return; }
L_003E2100:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2110u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E2110u) [[unlikely]] return; }
L_003E2110:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E212C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E212Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E212Cu) [[unlikely]] return; }
L_003E212C:
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003E2130:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0]), c.r[18].w[0]);  if (t) { goto L_003E2150; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2140u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E2140u) [[unlikely]] return; }
L_003E2140:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2150u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E2150u) [[unlikely]] return; }
L_003E2150:
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[17].w[0] + 8u)));  goto L_003E21C4; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 4u)));  goto L_003E21A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2170u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E2170u) [[unlikely]] return; }
L_003E2170:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2180u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E2180u) [[unlikely]] return; }
L_003E2180:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E219C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E219Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E219Cu) [[unlikely]] return; }
L_003E219C:
    set32(c.r[18], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003E21A0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 4u), c.r[18].w[0]);  if (t) { goto L_003E21C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E21B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E21B0u) [[unlikely]] return; }
L_003E21B0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E21C0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E21C0u) [[unlikely]] return; }
L_003E21C0:
    set32(c.r[18], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_003E21C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[19], ld32((c.r[16].w[0] + 12u)));  goto L_003E2234; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 8u)));  goto L_003E2210; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E21E0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E21E0u) [[unlikely]] return; }
L_003E21E0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E21F0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E21F0u) [[unlikely]] return; }
L_003E21F0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E220C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E220Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E220Cu) [[unlikely]] return; }
L_003E220C:
    set32(c.r[18], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_003E2210:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[18].w[0]);  if (t) { goto L_003E2230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2220u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E2220u) [[unlikely]] return; }
L_003E2220:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2230u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E2230u) [[unlikely]] return; }
L_003E2230:
    set32(c.r[19], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_003E2234:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[19].d[0]) { c.f[0] = ld32((c.r[16].w[0] + 16u));  goto L_003E22C4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_003E226C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2258u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E2258u) [[unlikely]] return; }
L_003E2258:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2268u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E2268u) [[unlikely]] return; }
L_003E2268:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_003E226C:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0] + 12u), c.r[19].w[0]);  goto L_003E22C0; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E228Cu); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E228Cu) [[unlikely]] return; }
L_003E228C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E229Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E229Cu) [[unlikely]] return; }
L_003E229C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003E22BC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E22BCu); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003E22BCu) [[unlikely]] return; }
L_003E22BC:
    st32((c.r[17].w[0] + 12u), c.r[19].w[0]);
    c.budget -= 1;
L_003E22C0:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.budget -= 1;
L_003E22C4:
    st32((c.r[17].w[0] + 16u), c.f[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 5;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.f[2] = ld32((c.r[16].w[0] + 24u));  goto L_003E233C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 20u)));  goto L_003E2318; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E22E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E22E8u) [[unlikely]] return; }
L_003E22E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E22F8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E22F8u) [[unlikely]] return; }
L_003E22F8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E2314; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2314u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E2314u) [[unlikely]] return; }
L_003E2314:
    set32(c.r[18], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_003E2318:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 20u), c.r[18].w[0]);  if (t) { goto L_003E2338; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2328u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E2328u) [[unlikely]] return; }
L_003E2328:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2338u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E2338u) [[unlikely]] return; }
L_003E2338:
    c.f[2] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 1;
L_003E233C:
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[17].w[0] + 24u), c.f[2]);
    st32((c.r[17].w[0] + 28u), c.f[1]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 15;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[3].d[0] = ld8((c.r[16].w[0] + 52u));  goto L_003E23DC; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 48u)));  goto L_003E23B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2388u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E2388u) [[unlikely]] return; }
L_003E2388:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2398u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E2398u) [[unlikely]] return; }
L_003E2398:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E23B4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E23B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E23B4u) [[unlikely]] return; }
L_003E23B4:
    set32(c.r[18], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 1;
L_003E23B8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 48u), c.r[18].w[0]);  if (t) { goto L_003E23D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E23C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E23C8u) [[unlikely]] return; }
L_003E23C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E23D8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E23D8u) [[unlikely]] return; }
L_003E23D8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 52u));
    c.budget -= 1;
L_003E23DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 53u));
    st8((c.r[17].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 54u));
    st8((c.r[17].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003E2420:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_003E2440:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 56u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003E2460:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2478u); set32(c.r[5], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_00B8(c, 463u, depth + 1u); else { c.pc = 0x003E3830u; return; } if (c.pc != 0x003E2478u) [[unlikely]] return; }
L_003E2478:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E2490:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 56u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003E24B0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), c.r[5].w[0]);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[6].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003E24EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[5].w[0]);  if (t) { goto L_003E27D4; } }
L_003E24EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E24F4u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00B8(c, 463u, depth + 1u); else { c.pc = 0x003E3830u; return; } if (c.pc != 0x003E24F4u) [[unlikely]] return; }
L_003E24F4:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], c.r[2].w[0] - 56u);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E251Cu); c.r[20].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_00B8(c, 463u, depth + 1u); else { c.pc = 0x003E3830u; return; } if (c.pc != 0x003E251Cu) [[unlikely]] return; }
L_003E251C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003E25E4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E25E4; } }
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[19], c.r[3].w[0] + 56u);
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[19].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 124u), c.f[0]);  if (t) { goto L_003E255C; } }
L_003E2554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E255Cu); set32(c.r[4], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_00B8(c, 311u, depth + 1u); else { c.pc = 0x003E2490u; return; } if (c.pc != 0x003E255Cu) [[unlikely]] return; }
L_003E255C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2564u); set32(c.r[4], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x003E0B20u; return; } if (c.pc != 0x003E2564u) [[unlikely]] return; }
L_003E2564:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2570u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 346u, depth + 1u); else { c.pc = 0x003E2800u; return; } if (c.pc != 0x003E2570u) [[unlikely]] return; }
L_003E2570:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2554u | kUnwind; return; } goto L_003E2554; } }
L_003E2578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2580u); set32(c.r[4], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_00B8(c, 308u, depth + 1u); else { c.pc = 0x003E2440u; return; } if (c.pc != 0x003E2580u) [[unlikely]] return; }
L_003E2580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2588u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x003E0B20u; return; } if (c.pc != 0x003E2588u) [[unlikely]] return; }
L_003E2588:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2594u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 346u, depth + 1u); else { c.pc = 0x003E2800u; return; } if (c.pc != 0x003E2594u) [[unlikely]] return; }
L_003E2594:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2578u | kUnwind; return; } goto L_003E2578; } }
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E25B0u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_00B8(c, 307u, depth + 1u); else { c.pc = 0x003E2420u; return; } if (c.pc != 0x003E25B0u) [[unlikely]] return; }
L_003E25B0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003E25D4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E25C4u); set32(c.r[4], ld32((c.r[29].w[0] + 124u)));  if (depth < kMaxDepth) unit_00B8(c, 271u, depth + 1u); else { c.pc = 0x003E2050u; return; } if (c.pc != 0x003E25C4u) [[unlikely]] return; }
L_003E25C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E25CCu); set32(c.r[4], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_00B8(c, 311u, depth + 1u); else { c.pc = 0x003E2490u; return; } if (c.pc != 0x003E25CCu) [[unlikely]] return; }
L_003E25CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E255Cu | kUnwind; return; } goto L_003E255C; } }
L_003E25D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E25DCu); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_00B8(c, 270u, depth + 1u); else { c.pc = 0x003E2040u; return; } if (c.pc != 0x003E25DCu) [[unlikely]] return; }
L_003E25DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003E27D8; } }
L_003E25E4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E266C; } }
    c.r[4].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 6;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] << 32;  goto L_003E2610; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[4].w[0]);  if (t) { goto L_003E27D4; } }
L_003E260C:
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_003E2610:
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], c.r[4].w[0] - 56u);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[16].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] << 32;  goto L_003E2650; }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2640u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 463u, depth + 1u); else { c.pc = 0x003E3830u; return; } if (c.pc != 0x003E2640u) [[unlikely]] return; }
L_003E2640:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E260Cu | kUnwind; return; } goto L_003E260C; } }
    c.r[4].d[0] = c.r[19].d[0] << 32;
    c.budget -= 1;
L_003E2650:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.f[0] = ld32((c.r[29].w[0] + 96u));  goto L_003E26F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[4].w[0]);  if (t) { goto L_003E27D4; } }
L_003E266C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_003E26F4; } }
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[19], c.r[3].w[0] + 56u);
    set32(c.r[16], c.r[4].w[0] + 56u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 96u), c.r[19].w[0]);  if (t) { goto L_003E26A0; } }
L_003E2694:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[19], c.r[3].w[0] + 56u);
    st32((c.r[29].w[0] + 96u), c.r[19].w[0]);
    c.budget -= 3;
L_003E26A0:
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 6;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[3].d[0] = c.r[16].d[0] << 32;  goto L_003E26D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E26C0u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00B8(c, 463u, depth + 1u); else { c.pc = 0x003E3830u; return; } if (c.pc != 0x003E26C0u) [[unlikely]] return; }
L_003E26C0:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[19].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2694u | kUnwind; return; } goto L_003E2694; }
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_003E26D8:
    c.r[4].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[16], c.r[3].w[0] - 56u);  goto L_003E26F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[4].w[0]);  if (t) { goto L_003E27D4; } }
L_003E26F4:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003E26F8:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2710u); st32((c.r[29].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x003E0B20u; return; } if (c.pc != 0x003E2710u) [[unlikely]] return; }
L_003E2710:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E271Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x003E0B20u; return; } if (c.pc != 0x003E271Cu) [[unlikely]] return; }
L_003E271C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2728u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 49u, depth + 1u); else { c.pc = 0x003E06A0u; return; } if (c.pc != 0x003E2728u) [[unlikely]] return; }
L_003E2728:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + 56u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_003E2754; } }
L_003E274C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2754u); set32(c.r[4], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_00B8(c, 311u, depth + 1u); else { c.pc = 0x003E2490u; return; } if (c.pc != 0x003E2754u) [[unlikely]] return; }
L_003E2754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E275Cu); set32(c.r[4], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x003E0B20u; return; } if (c.pc != 0x003E275Cu) [[unlikely]] return; }
L_003E275C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2768u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 346u, depth + 1u); else { c.pc = 0x003E2800u; return; } if (c.pc != 0x003E2768u) [[unlikely]] return; }
L_003E2768:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E274Cu | kUnwind; return; } goto L_003E274C; } }
L_003E2770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2778u); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_00B8(c, 308u, depth + 1u); else { c.pc = 0x003E2440u; return; } if (c.pc != 0x003E2778u) [[unlikely]] return; }
L_003E2778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2780u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x003E0B20u; return; } if (c.pc != 0x003E2780u) [[unlikely]] return; }
L_003E2780:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E278Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 346u, depth + 1u); else { c.pc = 0x003E2800u; return; } if (c.pc != 0x003E278Cu) [[unlikely]] return; }
L_003E278C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2770u | kUnwind; return; } goto L_003E2770; } }
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E27A8u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_00B8(c, 307u, depth + 1u); else { c.pc = 0x003E2420u; return; } if (c.pc != 0x003E27A8u) [[unlikely]] return; }
L_003E27A8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003E27CC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E27BCu); set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  if (depth < kMaxDepth) unit_00B8(c, 271u, depth + 1u); else { c.pc = 0x003E2050u; return; } if (c.pc != 0x003E27BCu) [[unlikely]] return; }
L_003E27BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E27C4u); set32(c.r[4], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_00B8(c, 311u, depth + 1u); else { c.pc = 0x003E2490u; return; } if (c.pc != 0x003E27C4u) [[unlikely]] return; }
L_003E27C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2754u | kUnwind; return; } goto L_003E2754; } }
L_003E27CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E27D4u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_00B8(c, 270u, depth + 1u); else { c.pc = 0x003E2040u; return; } if (c.pc != 0x003E27D4u) [[unlikely]] return; }
L_003E27D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003E27D8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003E2800:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2810u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  if (depth < kMaxDepth) unit_00B8(c, 463u, depth + 1u); else { c.pc = 0x003E3830u; return; } if (c.pc != 0x003E2810u) [[unlikely]] return; }
L_003E2810:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E2830:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[5].d[0];
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003E2974; } }
    set32(c.r[17], c.r[5].w[0] - 56u);
    c.r[1].d[0] = c.r[4].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_003E2978; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E2958; } }
L_003E2880:
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[16].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[16].d[0] << 32;  goto L_003E28FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[16].w[0] + 56u);  if (t) { goto L_003E28D4; } }
L_003E28A8:
    c.r[5].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E28B8u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_00B8(c, 463u, depth + 1u); else { c.pc = 0x003E3830u; return; } if (c.pc != 0x003E28B8u) [[unlikely]] return; }
L_003E28B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = c.r[21].d[0] << 32;  goto L_003E28CC; }
    c.r[16].d[0] = c.r[21].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[3].d[0] = c.r[21].d[0] << 32;
    c.budget -= 3;
L_003E28CC:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[21], c.r[3].w[0] + 56u);
    c.budget -= 2;
L_003E28D4:
    c.r[4].d[0] = c.r[21].d[0] << 32;
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E28A8u | kUnwind; return; } goto L_003E28A8; }
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_003E28FC:
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[29].w[0] + 152u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[18].d[0] << 32;  goto L_003E2950; }
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[29].w[0] + 128u), c.r[4].w[0]);
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2934u); st32((c.r[29].w[0] + 132u), c.f[0]);  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x003E0B20u; return; } if (c.pc != 0x003E2934u) [[unlikely]] return; }
L_003E2934:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2940u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x003E0B20u; return; } if (c.pc != 0x003E2940u) [[unlikely]] return; }
L_003E2940:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E294Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 49u, depth + 1u); else { c.pc = 0x003E06A0u; return; } if (c.pc != 0x003E294Cu) [[unlikely]] return; }
L_003E294C:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_003E2950:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[18], c.r[3].w[0] + 56u);
    c.budget -= 2;
L_003E2958:
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2880u | kUnwind; return; } goto L_003E2880; }
L_003E2974:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003E2978:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003E29A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003E29F8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[18].d[0] = c.r[16].d[0] + 0ull;  goto L_003E29FC; }
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_003E29F0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E29F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003E2A48; } }
L_003E29F8:
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E29FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E2A00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2A08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 122u, depth + 1u); else { c.pc = 0x004654E0u; return; } if (c.pc != 0x003E2A08u) [[unlikely]] return; }
L_003E2A08:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2A18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 117u, depth + 1u); else { c.pc = 0x00465390u; return; } if (c.pc != 0x003E2A18u) [[unlikely]] return; }
L_003E2A18:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003E2A48; } }
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 24u)));  goto L_003E2A38; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003E2A48; } }
L_003E2A38:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[3].d[0] = ld8((c.r[17].w[0] + 53u));  goto L_003E2A4C; }
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2A00u | kUnwind; return; } goto L_003E2A00; }
L_003E2A48:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 53u));
    c.budget -= 1;
L_003E2A4C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003E2A88; }
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    st32((c.r[17].w[0] + 36u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 44u), c.f[1]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 13;
L_003E2A88:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E2AA0:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st16((c.r[5].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st16((c.r[5].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[5].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003E2AD0:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 36u)));  goto L_003E2B00; }
    set32(c.r[5], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003E2AFC; } }
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    c.budget -= 3;
L_003E2AFC:
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 1;
L_003E2B00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E2B28; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003E2B28; } }
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    c.budget -= 3;
L_003E2B28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E2B30:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.f[20] = ld32((c.r[28].w[0] - 32196u));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2B78u); set32(c.r[18], c.r[2].w[0] + 104u);  if (depth < kMaxDepth) unit_00D6(c, 191u, depth + 1u); else { c.pc = 0x004596D0u; return; } if (c.pc != 0x003E2B78u) [[unlikely]] return; }
L_003E2B78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003E2C0C; } }
L_003E2B80:
    set32(c.r[3], c.r[21].w[0] << 2);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0] + 364u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003E2BF8; } }
L_003E2B9C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_003E2BC0; }
    set32(c.r[2], ld32((c.r[20].w[0] + 364u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[19].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_003E2BF8; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003E2BC0:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2BD0u); c.r[7].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 177u, depth + 1u); else { c.pc = 0x0046A3D0u; return; } if (c.pc != 0x003E2BD0u) [[unlikely]] return; }
L_003E2BD0:
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003E2BF4; } }
    c.f[20] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    st32((c.r[16].w[0]), c.r[20].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 5;
L_003E2BF4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_003E2BF8:
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2B9Cu | kUnwind; return; } goto L_003E2B9C; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_003E2C0C:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2B80u | kUnwind; return; } goto L_003E2B80; }
    c.f[0] = c.f[20];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_003E2C50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[5].w[0] + 12u)));  if (t) { goto L_003E2C64; } }
L_003E2C58:
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 3;
L_003E2C64:
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2C58u | kUnwind; return; } goto L_003E2C58; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E2C80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2CB0u); set32(c.r[5], c.r[28].w[0] - 26724u);  if (depth < kMaxDepth) unit_006F(c, 120u, depth + 1u); else { c.pc = 0x002BCF90u; return; } if (c.pc != 0x003E2CB0u) [[unlikely]] return; }
L_003E2CB0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_003E2F48; }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_003E2CCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003E2D10; } }
L_003E2CCC:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2CD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E2CD8u) [[unlikely]] return; }
L_003E2CD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 23832u);  if (t) { goto L_003E2CF4; } }
L_003E2CE4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_003E2CF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003E2D00; } }
L_003E2CF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2CE4u | kUnwind; return; } goto L_003E2CE4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E2D00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_003E2D10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E2D10; } }
L_003E2D10:
    set32(c.r[18], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[19].d[0];  if (t) { goto L_003E2D7C; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 20u), c.r[19].w[0]);  goto L_003E2D5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2D2Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E2D2Cu) [[unlikely]] return; }
L_003E2D2C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2D3Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E2D3Cu) [[unlikely]] return; }
L_003E2D3C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E2D58; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2D58u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E2D58u) [[unlikely]] return; }
L_003E2D58:
    st32((c.r[17].w[0] + 20u), c.r[19].w[0]);
    c.budget -= 1;
L_003E2D5C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003E2D7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2D6Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E2D6Cu) [[unlikely]] return; }
L_003E2D6C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2D7Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E2D7Cu) [[unlikely]] return; }
L_003E2D7C:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_003E2D8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003E2DD0; } }
L_003E2D8C:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2D98u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E2D98u) [[unlikely]] return; }
L_003E2D98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 17816u);  if (t) { goto L_003E2DB4; } }
L_003E2DA4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_003E2DB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003E2DC0; } }
L_003E2DB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2DA4u | kUnwind; return; } goto L_003E2DA4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E2DC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_003E2DD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E2DD0; } }
L_003E2DD0:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003E2ED8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2DE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003E2DE0u) [[unlikely]] return; }
L_003E2DE0:
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2DECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003E2DECu) [[unlikely]] return; }
L_003E2DEC:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2DFCu); set32(c.r[5], c.r[28].w[0] - 26724u);  if (depth < kMaxDepth) unit_006F(c, 113u, depth + 1u); else { c.pc = 0x002BCDC0u; return; } if (c.pc != 0x003E2DFCu) [[unlikely]] return; }
L_003E2DFC:
    set32(c.r[4], 0u + 16u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2E0Cu); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003E2E0Cu) [[unlikely]] return; }
L_003E2E0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003E2E54; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 10157u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003E2E34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_003E2E40; } }
L_003E2E34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2E3Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003E2E3Cu) [[unlikely]] return; }
L_003E2E3C:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 1;
L_003E2E40:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 108u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2E50u); set32(c.r[19], 0u + 1u);  if (depth < kMaxDepth) unit_0084(c, 173u, depth + 1u); else { c.pc = 0x00311600u; return; } if (c.pc != 0x003E2E50u) [[unlikely]] return; }
L_003E2E50:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003E2E54:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2E64u); set32(c.r[5], c.r[28].w[0] - 26724u);  if (depth < kMaxDepth) unit_006F(c, 142u, depth + 1u); else { c.pc = 0x002BD280u; return; } if (c.pc != 0x003E2E64u) [[unlikely]] return; }
L_003E2E64:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 96u)));  goto L_003E2ECC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E2EC8; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2E98u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E2E98u) [[unlikely]] return; }
L_003E2E98:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2EA8u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E2EA8u) [[unlikely]] return; }
L_003E2EA8:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003E2EC8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2EC8u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003E2EC8u) [[unlikely]] return; }
L_003E2EC8:
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 1;
L_003E2ECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2ED4u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003E2ED4u) [[unlikely]] return; }
L_003E2ED4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E2ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2EE0u); set32(c.r[5], c.r[28].w[0] - 26724u);  if (depth < kMaxDepth) unit_006F(c, 120u, depth + 1u); else { c.pc = 0x002BCF90u; return; } if (c.pc != 0x003E2EE0u) [[unlikely]] return; }
L_003E2EE0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_003E2EF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003E2F38; } }
L_003E2EF4:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2F00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E2F00u) [[unlikely]] return; }
L_003E2F00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 20072u);  if (t) { goto L_003E2F1C; } }
L_003E2F0C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_003E2F1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003E2F28; } }
L_003E2F1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2F0Cu | kUnwind; return; } goto L_003E2F0C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E2F28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_003E2F38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E2F38; } }
L_003E2F38:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2F44u); st32((c.r[17].w[0] + 16u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 427u, depth + 1u); else { c.pc = 0x003E3230u; return; } if (c.pc != 0x003E2F44u) [[unlikely]] return; }
L_003E2F44:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E2F48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003E2F70:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2F9Cu); c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003E2F9Cu) [[unlikely]] return; }
L_003E2F9C:
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2FA8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003E2FA8u) [[unlikely]] return; }
L_003E2FA8:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], 0u + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2FB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003E2FB8u) [[unlikely]] return; }
L_003E2FB8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 108u), c.r[16].w[0]);  goto L_003E2FD4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2FCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 104u, depth + 1u); else { c.pc = 0x002792B0u; return; } if (c.pc != 0x003E2FCCu) [[unlikely]] return; }
L_003E2FCC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 108u), c.r[16].w[0]);
    c.budget -= 2;
L_003E2FD4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[29].w[0] + 108u)));  goto L_003E2FF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2FE4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E2FE4u) [[unlikely]] return; }
L_003E2FE4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2FF4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E2FF4u) [[unlikely]] return; }
L_003E2FF4:
    set32(c.r[18], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_003E2FF8:
    set32(c.r[16], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3014u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3014u) [[unlikely]] return; }
L_003E3014:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], 0u + 112u);  goto L_003E3108; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3024u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E3024u) [[unlikely]] return; }
L_003E3024:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3034u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E3034u) [[unlikely]] return; }
L_003E3034:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3040u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 57u, depth + 1u); else { c.pc = 0x002BC790u; return; } if (c.pc != 0x003E3040u) [[unlikely]] return; }
L_003E3040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 48u)));  if (t) { goto L_003E3050; } }
L_003E3048:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 2;
L_003E3050:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3048u | kUnwind; return; } goto L_003E3048; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[18].d[0];  if (t) { goto L_003E30D0; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 48u), c.r[18].w[0]);  goto L_003E30B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3080u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E3080u) [[unlikely]] return; }
L_003E3080:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3090u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E3090u) [[unlikely]] return; }
L_003E3090:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E30AC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E30ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E30ACu) [[unlikely]] return; }
L_003E30AC:
    st32((c.r[17].w[0] + 48u), c.r[18].w[0]);
    c.budget -= 1;
L_003E30B0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003E30D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E30C0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E30C0u) [[unlikely]] return; }
L_003E30C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E30D0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E30D0u) [[unlikely]] return; }
L_003E30D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E30D8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E30D8u) [[unlikely]] return; }
L_003E30D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E30E8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E30E8u) [[unlikely]] return; }
L_003E30E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E3104; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3104u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3104u) [[unlikely]] return; }
L_003E3104:
    set32(c.r[4], 0u + 112u);
    c.budget -= 1;
L_003E3108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3110u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003E3110u) [[unlikely]] return; }
L_003E3110:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 104u), c.r[16].w[0]);  goto L_003E3130; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3128u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 18u, depth + 1u); else { c.pc = 0x004342E0u; return; } if (c.pc != 0x003E3128u) [[unlikely]] return; }
L_003E3128:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 104u), c.r[16].w[0]);
    c.budget -= 2;
L_003E3130:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  goto L_003E3154; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3140u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E3140u) [[unlikely]] return; }
L_003E3140:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3150u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E3150u) [[unlikely]] return; }
L_003E3150:
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_003E3154:
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3168u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3168u) [[unlikely]] return; }
L_003E3168:
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3174u); set32(c.r[5], ld32((c.r[20].w[0] + 20u)));  if (depth < kMaxDepth) unit_00CD(c, 7u, depth + 1u); else { c.pc = 0x00434150u; return; } if (c.pc != 0x003E3174u) [[unlikely]] return; }
L_003E3174:
    set32(c.r[16], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 108u)));  goto L_003E31B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3188u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E3188u) [[unlikely]] return; }
L_003E3188:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3198u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E3198u) [[unlikely]] return; }
L_003E3198:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E31B4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E31B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E31B4u) [[unlikely]] return; }
L_003E31B4:
    set32(c.r[16], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_003E31B8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 96u)));  goto L_003E31F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E31C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E31C8u) [[unlikely]] return; }
L_003E31C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E31D8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E31D8u) [[unlikely]] return; }
L_003E31D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E31F4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E31F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E31F4u) [[unlikely]] return; }
L_003E31F4:
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 1;
L_003E31F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3200u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003E3200u) [[unlikely]] return; }
L_003E3200:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003E3230:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E325Cu); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_00B8(c, 454u, depth + 1u); else { c.pc = 0x003E3570u; return; } if (c.pc != 0x003E325Cu) [[unlikely]] return; }
L_003E325C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.r[18].d[0] = c.r[5].d[0] ^ c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[18].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;  if (t) { goto L_003E32C0; } }
    set32(c.r[3], ld32((c.r[5].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[17], c.r[5].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3290u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E3290u) [[unlikely]] return; }
L_003E3290:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E32A0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E32A0u) [[unlikely]] return; }
L_003E32A0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003E32C0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E32C0u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003E32C0u) [[unlikely]] return; }
L_003E32C0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_003E3554; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[4], c.r[29].w[0] + 104u);  goto L_003E33E0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 12u)));  if (t) { goto L_003E33D4; } }
L_003E32E8:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_003E32F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003E333C; } }
L_003E32F8:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3304u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3304u) [[unlikely]] return; }
L_003E3304:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 14864u);  if (t) { goto L_003E3320; } }
L_003E3310:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_003E3320; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003E332C; } }
L_003E3320:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3310u | kUnwind; return; } goto L_003E3310; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E332C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_003E333C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003E333C; } }
L_003E333C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[18], ld32((c.r[18].w[0] + 48u)));  goto L_003E33D4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3354u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3354u) [[unlikely]] return; }
L_003E3354:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_003E3368; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003E33AC; } }
L_003E3368:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3374u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3374u) [[unlikely]] return; }
L_003E3374:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 13832u);  if (t) { goto L_003E3390; } }
L_003E3380:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_003E3390; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003E339C; } }
L_003E3390:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3380u | kUnwind; return; } goto L_003E3380; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E339C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_003E33AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E33AC; } }
L_003E33AC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E33D0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E33C8u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E33C8u) [[unlikely]] return; }
L_003E33C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E33DC; } }
L_003E33D0:
    set32(c.r[18], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 1;
L_003E33D4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E32E8u | kUnwind; return; } goto L_003E32E8; } }
L_003E33DC:
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 1;
L_003E33E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E33E8u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_00B8(c, 454u, depth + 1u); else { c.pc = 0x003E3570u; return; } if (c.pc != 0x003E33E8u) [[unlikely]] return; }
L_003E33E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E33FCu); set32(c.r[5], c.r[29].w[0] + 104u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E33FCu) [[unlikely]] return; }
L_003E33FC:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_003E3454; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[17], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3424u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E3424u) [[unlikely]] return; }
L_003E3424:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3434u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E3434u) [[unlikely]] return; }
L_003E3434:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003E3454; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3454u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003E3454u) [[unlikely]] return; }
L_003E3454:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 100u);  goto L_003E346C; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3468u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 394u, depth + 1u); else { c.pc = 0x003E2F70u; return; } if (c.pc != 0x003E3468u) [[unlikely]] return; }
L_003E3468:
    set32(c.r[4], c.r[29].w[0] + 100u);
    c.budget -= 1;
L_003E346C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3474u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_00B8(c, 454u, depth + 1u); else { c.pc = 0x003E3570u; return; } if (c.pc != 0x003E3474u) [[unlikely]] return; }
L_003E3474:
    set32(c.r[18], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[18].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 100u)));  goto L_003E3500; }
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[19].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  goto L_003E34A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3494u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E3494u) [[unlikely]] return; }
L_003E3494:
    set32(c.r[2], ld32((c.r[18].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E34A4u); st32((c.r[18].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E34A4u) [[unlikely]] return; }
L_003E34A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_003E34A8:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[19].d[0]) { st32((c.r[16].w[0] + 12u), c.r[18].w[0]);  goto L_003E34FC; }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E34C8u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E34C8u) [[unlikely]] return; }
L_003E34C8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E34D8u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E34D8u) [[unlikely]] return; }
L_003E34D8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003E34F8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E34F8u); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003E34F8u) [[unlikely]] return; }
L_003E34F8:
    st32((c.r[16].w[0] + 12u), c.r[18].w[0]);
    c.budget -= 1;
L_003E34FC:
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 1;
L_003E3500:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_003E3550; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3520u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E3520u) [[unlikely]] return; }
L_003E3520:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3530u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E3530u) [[unlikely]] return; }
L_003E3530:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003E3550; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3550u); set32(c.r[5], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003E3550u) [[unlikely]] return; }
L_003E3550:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003E3554:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003E3570:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003E3598; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[3].w[0] + 12u);  if (t) { goto L_003E35A0; } }
L_003E3598:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[18], c.r[18].w[0] + 14480u);
    c.budget -= 2;
L_003E35A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[17], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[17].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[18].w[0])));  goto L_003E35D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E35BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E35BCu) [[unlikely]] return; }
L_003E35BC:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E35CCu); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E35CCu) [[unlikely]] return; }
L_003E35CC:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003E35D0:
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E35F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003E362C; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 52u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 24u)));  goto L_003E3630; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E3810; } }
L_003E362C:
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 1;
L_003E3630:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003E3738; }
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));  goto L_003E3650; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E3738; } }
L_003E3650:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 188u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 24u)));  goto L_003E3718; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 10176u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003E3680; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_003E3688; } }
L_003E3680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3688u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003E3688u) [[unlikely]] return; }
L_003E3688:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3698u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_006F(c, 120u, depth + 1u); else { c.pc = 0x002BCF90u; return; } if (c.pc != 0x003E3698u) [[unlikely]] return; }
L_003E3698:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003E36A4; }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 12u));
    c.budget -= 1;
L_003E36A4:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E3704; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E36D4u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E36D4u) [[unlikely]] return; }
L_003E36D4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E36E4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E36E4u) [[unlikely]] return; }
L_003E36E4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003E3704; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3704u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003E3704u) [[unlikely]] return; }
L_003E3704:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E3714; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E3738; } }
L_003E3714:
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 1;
L_003E3718:
    set32(c.r[2], ld32((c.r[2].w[0] + 364u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] & 255ull;  goto L_003E3738; }
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 364u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
L_003E3738:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003E3810; }
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 14;
    if (c.r[3].d[0] != c.r[6].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 36u)));  goto L_003E3798; }
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003E3794; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003E37D8; } }
L_003E3794:
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 1;
L_003E3798:
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E37B4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_003E37B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] & 255ull;  goto L_003E37D8; }
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[20].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003E37D4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E37D4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003E37D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] ^ c.r[6].d[0];  goto L_003E37EC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E3810; } }
L_003E37EC:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E3810; } }
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003E3810; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E3810:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003E3830:
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 44u)));
    set32(c.r[7], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E3884; } }
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003E3884; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E3884:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E3890:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 65533ull;
    st16((c.r[5].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[5].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 15;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003E3970; } }
    st32((c.r[16].w[0] + 96u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 100u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E38E0u); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003E38E0u) [[unlikely]] return; }
L_003E38E0:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E38ECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003E38ECu) [[unlikely]] return; }
L_003E38EC:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] + 60u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3908u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3908u) [[unlikely]] return; }
L_003E3908:
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_003E3954; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E391Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E391Cu) [[unlikely]] return; }
L_003E391C:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3930u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E3930u) [[unlikely]] return; }
L_003E3930:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E3950; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3950u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3950u) [[unlikely]] return; }
L_003E3950:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_003E3954:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3968u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3968u) [[unlikely]] return; }
L_003E3968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3970u); set32(c.r[4], ld32((c.r[29].w[0] + 48u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003E3970u) [[unlikely]] return; }
L_003E3970:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E3990:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E3AC8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 10141u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003E39D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_003E39E0; } }
L_003E39D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E39E0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003E39E0u) [[unlikely]] return; }
L_003E39E0:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E39F0u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_006F(c, 120u, depth + 1u); else { c.pc = 0x002BCF90u; return; } if (c.pc != 0x003E39F0u) [[unlikely]] return; }
L_003E39F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_003E39FC; }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 12u));
    c.budget -= 1;
L_003E39FC:
    c.r[17].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003E3A5C; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3A2Cu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E3A2Cu) [[unlikely]] return; }
L_003E3A2C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3A3Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E3A3Cu) [[unlikely]] return; }
L_003E3A3C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003E3A5C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3A5Cu); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003E3A5Cu) [[unlikely]] return; }
L_003E3A5C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_003E3ACC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3A6Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003E3A6Cu) [[unlikely]] return; }
L_003E3A6C:
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3A78u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003E3A78u) [[unlikely]] return; }
L_003E3A78:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], 0u + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3A88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003E3A88u) [[unlikely]] return; }
L_003E3A88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 96u)));  goto L_003E3AA8; }
    set32(c.r[5], ld32((c.r[20].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3AA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 140u, depth + 1u); else { c.pc = 0x004550E0u; return; } if (c.pc != 0x003E3AA0u) [[unlikely]] return; }
L_003E3AA0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 2;
L_003E3AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3AB0u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003E3AB0u) [[unlikely]] return; }
L_003E3AB0:
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3ABCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 116u, depth + 1u); else { c.pc = 0x00454DE0u; return; } if (c.pc != 0x003E3ABCu) [[unlikely]] return; }
L_003E3ABC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3AC8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 89u, depth + 1u); else { c.pc = 0x002BCAB0u; return; } if (c.pc != 0x003E3AC8u) [[unlikely]] return; }
L_003E3AC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003E3ACC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003E3AF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 29;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E3C14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3B6Cu);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003E3B6Cu) [[unlikely]] return; }
L_003E3B6C:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3B78u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003E3B78u) [[unlikely]] return; }
L_003E3B78:
    st32((c.r[16].w[0] + 96u), 0u);
    set32(c.r[4], c.r[29].w[0] + 76u);
    st32((c.r[16].w[0] + 100u), 0u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3BA0u); st32((c.r[29].w[0] + 64u), c.r[2].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3BA0u) [[unlikely]] return; }
L_003E3BA0:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_003E3BEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3BB4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E3BB4u) [[unlikely]] return; }
L_003E3BB4:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3BC8u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E3BC8u) [[unlikely]] return; }
L_003E3BC8:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E3BE8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3BE8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3BE8u) [[unlikely]] return; }
L_003E3BE8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003E3BEC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3C00u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3C00u) [[unlikely]] return; }
L_003E3C00:
    c.f[12] = ld32((c.r[28].w[0] - 29052u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3C0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 572u, depth + 1u); else { c.pc = 0x00283B30u; return; } if (c.pc != 0x003E3C0Cu) [[unlikely]] return; }
L_003E3C0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3C14u); set32(c.r[4], ld32((c.r[29].w[0] + 64u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003E3C14u) [[unlikely]] return; }
L_003E3C14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3C1Cu); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_0087(c, 218u, depth + 1u); else { c.pc = 0x0031E110u; return; } if (c.pc != 0x003E3C1Cu) [[unlikely]] return; }
L_003E3C1C:
    c.f[12] = ld32((c.r[28].w[0] - 29052u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3C28u); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_0060(c, 572u, depth + 1u); else { c.pc = 0x00283B30u; return; } if (c.pc != 0x003E3C28u) [[unlikely]] return; }
L_003E3C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3C30u); set32(c.r[4], ld32((c.r[18].w[0] + 48u)));  if (depth < kMaxDepth) unit_00BD(c, 405u, depth + 1u); else { c.pc = 0x003F78D0u; return; } if (c.pc != 0x003E3C30u) [[unlikely]] return; }
L_003E3C30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E3C50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 53u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3C78u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 401u, depth + 1u); else { c.pc = 0x003F7810u; return; } if (c.pc != 0x003E3C78u) [[unlikely]] return; }
L_003E3C78:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.f[12] = ld32((c.r[28].w[0] - 29052u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3C88u); c.r[18].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0060(c, 572u, depth + 1u); else { c.pc = 0x00283B30u; return; } if (c.pc != 0x003E3C88u) [[unlikely]] return; }
L_003E3C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3C90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 427u, depth + 1u); else { c.pc = 0x003E3230u; return; } if (c.pc != 0x003E3C90u) [[unlikely]] return; }
L_003E3C90:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[2].d[0] = c.r[18].d[0] & 255ull;  if (t) { goto L_003E3D34; } }
    set32(c.r[7], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[7].w[0] + 44u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  goto L_003E3CF0; }
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003E3CEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003E3D30; } }
L_003E3CEC:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_003E3CF0:
    c.r[2].d[0] = c.r[7].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E3D0C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = c.r[6].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_003E3D0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] & 255ull;  goto L_003E3D30; }
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003E3D2C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E3D2C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003E3D30:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003E3D34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E3D50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 31448u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 64u), c.r[3].d[0]);
    c.f[0] = ld32((c.r[2].w[0] + 31456u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22432u);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    st64((c.r[29].w[0] + 32u), c.r[2].d[0]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    st32((c.r[29].w[0] + 44u), c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 24;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3DB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3DB0u) [[unlikely]] return; }
L_003E3DB0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 65533ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E3DD0:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[4].w[0])));
    c.budget -= 15;
    { const bool t = c.r[20].d[0] == c.r[17].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003E3E6C; } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[19].w[0]), c.r[17].w[0]);  goto L_003E3E4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3E1Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E3E1Cu) [[unlikely]] return; }
L_003E3E1C:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3E2Cu); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E3E2Cu) [[unlikely]] return; }
L_003E3E2C:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E3E48; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3E48u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3E48u) [[unlikely]] return; }
L_003E3E48:
    st32((c.r[19].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_003E3E4C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[20], ld32((c.r[19].w[0] + 8u)));  goto L_003E3E70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3E5Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E3E5Cu) [[unlikely]] return; }
L_003E3E5C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3E6Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E3E6Cu) [[unlikely]] return; }
L_003E3E6C:
    set32(c.r[20], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_003E3E70:
    c.budget -= 2;
    if (c.r[20].d[0] == c.r[18].d[0]) { st8((c.r[19].w[0] + 53u), static_cast<std::uint8_t>(0u));  goto L_003E3EDC; }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[19].w[0] + 8u), c.r[18].w[0]);  goto L_003E3EB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3E88u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E3E88u) [[unlikely]] return; }
L_003E3E88:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3E98u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E3E98u) [[unlikely]] return; }
L_003E3E98:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E3EB4; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3EB4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3EB4u) [[unlikely]] return; }
L_003E3EB4:
    st32((c.r[19].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 1;
L_003E3EB8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003E3ED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3EC8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E3EC8u) [[unlikely]] return; }
L_003E3EC8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3ED8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E3ED8u) [[unlikely]] return; }
L_003E3ED8:
    st8((c.r[19].w[0] + 53u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003E3EDC:
    set32(c.r[4], c.r[29].w[0] + 328u);
    c.f[0] = ld32((c.r[16].w[0] + 160u));
    set32(c.r[5], c.r[19].w[0] + 24u);
    st32((c.r[29].w[0] + 328u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 164u));
    st32((c.r[29].w[0] + 332u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 168u));
    st32((c.r[29].w[0] + 336u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 160u));
    st32((c.r[29].w[0] + 312u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 164u));
    st32((c.r[29].w[0] + 316u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 168u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3F18u); st32((c.r[29].w[0] + 320u), c.f[0]);  if (depth < kMaxDepth) unit_00B8(c, 361u, depth + 1u); else { c.pc = 0x003E2B30u; return; } if (c.pc != 0x003E3F18u) [[unlikely]] return; }
L_003E3F18:
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3F24u); set32(c.r[5], c.r[19].w[0] + 36u);  if (depth < kMaxDepth) unit_00B8(c, 361u, depth + 1u); else { c.pc = 0x003E2B30u; return; } if (c.pc != 0x003E3F24u) [[unlikely]] return; }
L_003E3F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3F2Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003E3F2Cu) [[unlikely]] return; }
L_003E3F2C:
    st32((c.r[29].w[0] + 308u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3F38u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003E3F38u) [[unlikely]] return; }
L_003E3F38:
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[4], 0u + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3F48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003E3F48u) [[unlikely]] return; }
L_003E3F48:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 48u)));  goto L_003E3F64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3F5Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 416u, depth + 1u); else { c.pc = 0x003F7B40u; return; } if (c.pc != 0x003E3F5Cu) [[unlikely]] return; }
L_003E3F5C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 2;
L_003E3F64:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[20].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 304u)));  goto L_003E3FD0; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[19].w[0] + 48u), c.r[20].w[0]);  goto L_003E3FAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3F7Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E3F7Cu) [[unlikely]] return; }
L_003E3F7C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3F8Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E3F8Cu) [[unlikely]] return; }
L_003E3F8C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E3FA8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3FA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3FA8u) [[unlikely]] return; }
L_003E3FA8:
    st32((c.r[19].w[0] + 48u), c.r[20].w[0]);
    c.budget -= 1;
L_003E3FAC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_003E3FCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3FBCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E3FBCu) [[unlikely]] return; }
L_003E3FBC:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3FCCu); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E3FCCu) [[unlikely]] return; }
L_003E3FCC:
    set32(c.r[4], ld32((c.r[29].w[0] + 304u)));
    c.budget -= 1;
L_003E3FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3FD8u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003E3FD8u) [[unlikely]] return; }
L_003E3FD8:
    c.f[2] = ld32((c.r[28].w[0] - 31832u));
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = fp::max(c.f[0], c.f[2]);
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 31820u));
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 44u));
    c.f[0] = fp::max(c.f[0], c.f[2]);
    c.budget -= 10;
    [[clang::musttail]] return unit_00B9(c, 1u, depth);
}

}
