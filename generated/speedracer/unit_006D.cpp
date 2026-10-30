#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006D[4096] = {
    1, 2, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0,
    0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0,
    0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0,
    0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0,
    0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60,
    0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0,
    0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0,
    101, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0,
    124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 130,
    0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 137,
    0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145,
    0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0,
    154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0,
    168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0,
    0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0,
    188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197,
    0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0,
    0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0,
    0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0,
    0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0,
    248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257,
    0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0,
    0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269,
    0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 287,
    0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293,
    0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0,
    0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0,
    0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0,
    0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322,
    0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0,
    0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0,
    336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0,
    343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0,
    352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0,
    359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364,
    0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0,
    0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0,
    0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 385, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 391, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0,
    395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0,
    0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0,
    0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0,
    412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0,
    417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0,
    420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0,
    0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0,
    431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0,
    435, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 442, 0, 443, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0, 447, 0, 448, 0, 0, 0, 449, 0, 450, 0, 0, 451,
    0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0,
    0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0,
    0, 478, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0,
    0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0,
    0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0,
    501, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0, 0, 505, 0, 0, 506, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 507, 0, 0, 508, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0,
    0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 515, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0,
    0, 0, 0, 526, 0, 0, 0, 0, 527, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_006D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002B4000;
    case 2u: goto L_002B4004;
    case 3u: goto L_002B400C;
    case 4u: goto L_002B4018;
    case 5u: goto L_002B4024;
    case 6u: goto L_002B4030;
    case 7u: goto L_002B403C;
    case 8u: goto L_002B4048;
    case 9u: goto L_002B4054;
    case 10u: goto L_002B4060;
    case 11u: goto L_002B4070;
    case 12u: goto L_002B4084;
    case 13u: goto L_002B4094;
    case 14u: goto L_002B40A8;
    case 15u: goto L_002B40BC;
    case 16u: goto L_002B40DC;
    case 17u: goto L_002B40E0;
    case 18u: goto L_002B4110;
    case 19u: goto L_002B4130;
    case 20u: goto L_002B4140;
    case 21u: goto L_002B4198;
    case 22u: goto L_002B41AC;
    case 23u: goto L_002B41BC;
    case 24u: goto L_002B41C8;
    case 25u: goto L_002B41D4;
    case 26u: goto L_002B41E0;
    case 27u: goto L_002B41EC;
    case 28u: goto L_002B41F8;
    case 29u: goto L_002B4204;
    case 30u: goto L_002B4210;
    case 31u: goto L_002B4220;
    case 32u: goto L_002B4234;
    case 33u: goto L_002B4244;
    case 34u: goto L_002B4258;
    case 35u: goto L_002B426C;
    case 36u: goto L_002B428C;
    case 37u: goto L_002B42C0;
    case 38u: goto L_002B42E0;
    case 39u: goto L_002B42F4;
    case 40u: goto L_002B4304;
    case 41u: goto L_002B4318;
    case 42u: goto L_002B432C;
    case 43u: goto L_002B434C;
    case 44u: goto L_002B4360;
    case 45u: goto L_002B4388;
    case 46u: goto L_002B43A4;
    case 47u: goto L_002B43F0;
    case 48u: goto L_002B4410;
    case 49u: goto L_002B4420;
    case 50u: goto L_002B4460;
    case 51u: goto L_002B4470;
    case 52u: goto L_002B4494;
    case 53u: goto L_002B44A4;
    case 54u: goto L_002B44C4;
    case 55u: goto L_002B44F0;
    case 56u: goto L_002B4500;
    case 57u: goto L_002B4570;
    case 58u: goto L_002B45B4;
    case 59u: goto L_002B45EC;
    case 60u: goto L_002B45FC;
    case 61u: goto L_002B461C;
    case 62u: goto L_002B4654;
    case 63u: goto L_002B4664;
    case 64u: goto L_002B4684;
    case 65u: goto L_002B469C;
    case 66u: goto L_002B46AC;
    case 67u: goto L_002B46C8;
    case 68u: goto L_002B46F0;
    case 69u: goto L_002B471C;
    case 70u: goto L_002B472C;
    case 71u: goto L_002B4784;
    case 72u: goto L_002B47A4;
    case 73u: goto L_002B47F8;
    case 74u: goto L_002B4818;
    case 75u: goto L_002B4850;
    case 76u: goto L_002B48A4;
    case 77u: goto L_002B48C0;
    case 78u: goto L_002B48E0;
    case 79u: goto L_002B4924;
    case 80u: goto L_002B4940;
    case 81u: goto L_002B4960;
    case 82u: goto L_002B4990;
    case 83u: goto L_002B49AC;
    case 84u: goto L_002B49D4;
    case 85u: goto L_002B4A20;
    case 86u: goto L_002B4A54;
    case 87u: goto L_002B4A64;
    case 88u: goto L_002B4AAC;
    case 89u: goto L_002B4ACC;
    case 90u: goto L_002B4B10;
    case 91u: goto L_002B4B18;
    case 92u: goto L_002B4B30;
    case 93u: goto L_002B4B40;
    case 94u: goto L_002B4B54;
    case 95u: goto L_002B4B64;
    case 96u: goto L_002B4B70;
    case 97u: goto L_002B4BB4;
    case 98u: goto L_002B4BC0;
    case 99u: goto L_002B4BD4;
    case 100u: goto L_002B4BF8;
    case 101u: goto L_002B4C00;
    case 102u: goto L_002B4C18;
    case 103u: goto L_002B4C24;
    case 104u: goto L_002B4C48;
    case 105u: goto L_002B4C70;
    case 106u: goto L_002B4CD8;
    case 107u: goto L_002B4CF0;
    case 108u: goto L_002B4D00;
    case 109u: goto L_002B4D1C;
    case 110u: goto L_002B4D40;
    case 111u: goto L_002B4D50;
    case 112u: goto L_002B4D60;
    case 113u: goto L_002B4D88;
    case 114u: goto L_002B4D98;
    case 115u: goto L_002B4DB4;
    case 116u: goto L_002B4DC8;
    case 117u: goto L_002B4DD8;
    case 118u: goto L_002B4DF0;
    case 119u: goto L_002B4E0C;
    case 120u: goto L_002B4E20;
    case 121u: goto L_002B4E40;
    case 122u: goto L_002B4E50;
    case 123u: goto L_002B4E6C;
    case 124u: goto L_002B4E80;
    case 125u: goto L_002B4E90;
    case 126u: goto L_002B4EB0;
    case 127u: goto L_002B4ECC;
    case 128u: goto L_002B4ED8;
    case 129u: goto L_002B4EEC;
    case 130u: goto L_002B4EFC;
    case 131u: goto L_002B4F10;
    case 132u: goto L_002B4F20;
    case 133u: goto L_002B4F34;
    case 134u: goto L_002B4F44;
    case 135u: goto L_002B4F58;
    case 136u: goto L_002B4F68;
    case 137u: goto L_002B4F7C;
    case 138u: goto L_002B4F8C;
    case 139u: goto L_002B4FA0;
    case 140u: goto L_002B4FB0;
    case 141u: goto L_002B4FC4;
    case 142u: goto L_002B4FE0;
    case 143u: goto L_002B4FFC;
    case 144u: goto L_002B51E0;
    case 145u: goto L_002B51FC;
    case 146u: goto L_002B5208;
    case 147u: goto L_002B5214;
    case 148u: goto L_002B5220;
    case 149u: goto L_002B522C;
    case 150u: goto L_002B5238;
    case 151u: goto L_002B5244;
    case 152u: goto L_002B5260;
    case 153u: goto L_002B5270;
    case 154u: goto L_002B5280;
    case 155u: goto L_002B529C;
    case 156u: goto L_002B52A8;
    case 157u: goto L_002B52B4;
    case 158u: goto L_002B52C0;
    case 159u: goto L_002B52CC;
    case 160u: goto L_002B52D8;
    case 161u: goto L_002B52E4;
    case 162u: goto L_002B5300;
    case 163u: goto L_002B5314;
    case 164u: goto L_002B5324;
    case 165u: goto L_002B5330;
    case 166u: goto L_002B5358;
    case 167u: goto L_002B536C;
    case 168u: goto L_002B5380;
    case 169u: goto L_002B5410;
    case 170u: goto L_002B543C;
    case 171u: goto L_002B545C;
    case 172u: goto L_002B5478;
    case 173u: goto L_002B5490;
    case 174u: goto L_002B54A4;
    case 175u: goto L_002B553C;
    case 176u: goto L_002B555C;
    case 177u: goto L_002B5580;
    case 178u: goto L_002B55AC;
    case 179u: goto L_002B55C8;
    case 180u: goto L_002B55D8;
    case 181u: goto L_002B563C;
    case 182u: goto L_002B564C;
    case 183u: goto L_002B5670;
    case 184u: goto L_002B5680;
    case 185u: goto L_002B56A0;
    case 186u: goto L_002B56CC;
    case 187u: goto L_002B56DC;
    case 188u: goto L_002B5700;
    case 189u: goto L_002B5710;
    case 190u: goto L_002B5730;
    case 191u: goto L_002B575C;
    case 192u: goto L_002B576C;
    case 193u: goto L_002B5790;
    case 194u: goto L_002B57A0;
    case 195u: goto L_002B57C0;
    case 196u: goto L_002B57EC;
    case 197u: goto L_002B57FC;
    case 198u: goto L_002B5820;
    case 199u: goto L_002B5830;
    case 200u: goto L_002B5850;
    case 201u: goto L_002B5884;
    case 202u: goto L_002B5894;
    case 203u: goto L_002B58B8;
    case 204u: goto L_002B58C8;
    case 205u: goto L_002B58E8;
    case 206u: goto L_002B5930;
    case 207u: goto L_002B5940;
    case 208u: goto L_002B5950;
    case 209u: goto L_002B5960;
    case 210u: goto L_002B5970;
    case 211u: goto L_002B59B0;
    case 212u: goto L_002B59C0;
    case 213u: goto L_002B59E4;
    case 214u: goto L_002B59F4;
    case 215u: goto L_002B5A14;
    case 216u: goto L_002B5A40;
    case 217u: goto L_002B5A80;
    case 218u: goto L_002B5A90;
    case 219u: goto L_002B5AB4;
    case 220u: goto L_002B5AC4;
    case 221u: goto L_002B5AE4;
    case 222u: goto L_002B5B10;
    case 223u: goto L_002B5B50;
    case 224u: goto L_002B5B60;
    case 225u: goto L_002B5B84;
    case 226u: goto L_002B5B94;
    case 227u: goto L_002B5BB4;
    case 228u: goto L_002B5BE0;
    case 229u: goto L_002B5C20;
    case 230u: goto L_002B5C30;
    case 231u: goto L_002B5C54;
    case 232u: goto L_002B5C64;
    case 233u: goto L_002B5C84;
    case 234u: goto L_002B5CB0;
    case 235u: goto L_002B5CF0;
    case 236u: goto L_002B5D00;
    case 237u: goto L_002B5D24;
    case 238u: goto L_002B5D34;
    case 239u: goto L_002B5D54;
    case 240u: goto L_002B5D80;
    case 241u: goto L_002B5D90;
    case 242u: goto L_002B5DA0;
    case 243u: goto L_002B5DB0;
    case 244u: goto L_002B5DC0;
    case 245u: goto L_002B5DD0;
    case 246u: goto L_002B5DE0;
    case 247u: goto L_002B5DF0;
    case 248u: goto L_002B5E00;
    case 249u: goto L_002B5E10;
    case 250u: goto L_002B5E34;
    case 251u: goto L_002B5E44;
    case 252u: goto L_002B5EA0;
    case 253u: goto L_002B5F04;
    case 254u: goto L_002B5F14;
    case 255u: goto L_002B5F34;
    case 256u: goto L_002B5F6C;
    case 257u: goto L_002B5F7C;
    case 258u: goto L_002B5F9C;
    case 259u: goto L_002B5FD4;
    case 260u: goto L_002B5FE4;
    case 261u: goto L_002B6004;
    case 262u: goto L_002B603C;
    case 263u: goto L_002B604C;
    case 264u: goto L_002B606C;
    case 265u: goto L_002B60A4;
    case 266u: goto L_002B60B4;
    case 267u: goto L_002B60D4;
    case 268u: goto L_002B60EC;
    case 269u: goto L_002B60FC;
    case 270u: goto L_002B6118;
    case 271u: goto L_002B6140;
    case 272u: goto L_002B6180;
    case 273u: goto L_002B6190;
    case 274u: goto L_002B61B4;
    case 275u: goto L_002B61C4;
    case 276u: goto L_002B61E4;
    case 277u: goto L_002B6210;
    case 278u: goto L_002B6220;
    case 279u: goto L_002B6230;
    case 280u: goto L_002B6240;
    case 281u: goto L_002B6250;
    case 282u: goto L_002B6298;
    case 283u: goto L_002B62A8;
    case 284u: goto L_002B62C8;
    case 285u: goto L_002B62D8;
    case 286u: goto L_002B62EC;
    case 287u: goto L_002B62FC;
    case 288u: goto L_002B6310;
    case 289u: goto L_002B6320;
    case 290u: goto L_002B6334;
    case 291u: goto L_002B6344;
    case 292u: goto L_002B636C;
    case 293u: goto L_002B637C;
    case 294u: goto L_002B6398;
    case 295u: goto L_002B63AC;
    case 296u: goto L_002B63BC;
    case 297u: goto L_002B63D8;
    case 298u: goto L_002B63E8;
    case 299u: goto L_002B6404;
    case 300u: goto L_002B6418;
    case 301u: goto L_002B6428;
    case 302u: goto L_002B6444;
    case 303u: goto L_002B6454;
    case 304u: goto L_002B6470;
    case 305u: goto L_002B6484;
    case 306u: goto L_002B6494;
    case 307u: goto L_002B64B0;
    case 308u: goto L_002B64C0;
    case 309u: goto L_002B64DC;
    case 310u: goto L_002B64F0;
    case 311u: goto L_002B6500;
    case 312u: goto L_002B6530;
    case 313u: goto L_002B6594;
    case 314u: goto L_002B65A4;
    case 315u: goto L_002B65C4;
    case 316u: goto L_002B65E4;
    case 317u: goto L_002B65F4;
    case 318u: goto L_002B6610;
    case 319u: goto L_002B6630;
    case 320u: goto L_002B6640;
    case 321u: goto L_002B665C;
    case 322u: goto L_002B667C;
    case 323u: goto L_002B668C;
    case 324u: goto L_002B66A8;
    case 325u: goto L_002B66C8;
    case 326u: goto L_002B66D8;
    case 327u: goto L_002B66F4;
    case 328u: goto L_002B670C;
    case 329u: goto L_002B671C;
    case 330u: goto L_002B6738;
    case 331u: goto L_002B6760;
    case 332u: goto L_002B6788;
    case 333u: goto L_002B67AC;
    case 334u: goto L_002B67CC;
    case 335u: goto L_002B67DC;
    case 336u: goto L_002B6800;
    case 337u: goto L_002B6810;
    case 338u: goto L_002B6830;
    case 339u: goto L_002B6860;
    case 340u: goto L_002B68C4;
    case 341u: goto L_002B68D4;
    case 342u: goto L_002B68F4;
    case 343u: goto L_002B6900;
    case 344u: goto L_002B691C;
    case 345u: goto L_002B6940;
    case 346u: goto L_002B6950;
    case 347u: goto L_002B6960;
    case 348u: goto L_002B6988;
    case 349u: goto L_002B69AC;
    case 350u: goto L_002B69CC;
    case 351u: goto L_002B69DC;
    case 352u: goto L_002B6A00;
    case 353u: goto L_002B6A10;
    case 354u: goto L_002B6A30;
    case 355u: goto L_002B6A60;
    case 356u: goto L_002B6AC4;
    case 357u: goto L_002B6AD4;
    case 358u: goto L_002B6AF4;
    case 359u: goto L_002B6B00;
    case 360u: goto L_002B6B1C;
    case 361u: goto L_002B6B40;
    case 362u: goto L_002B6B50;
    case 363u: goto L_002B6B68;
    case 364u: goto L_002B6B7C;
    case 365u: goto L_002B6B8C;
    case 366u: goto L_002B6B98;
    case 367u: goto L_002B6BA8;
    case 368u: goto L_002B6BBC;
    case 369u: goto L_002B6BE8;
    case 370u: goto L_002B6BF4;
    case 371u: goto L_002B6C04;
    case 372u: goto L_002B6C2C;
    case 373u: goto L_002B6C38;
    case 374u: goto L_002B6C48;
    case 375u: goto L_002B6C5C;
    case 376u: goto L_002B6C74;
    case 377u: goto L_002B6C84;
    case 378u: goto L_002B6CAC;
    case 379u: goto L_002B6CC4;
    case 380u: goto L_002B6CD4;
    case 381u: goto L_002B6D08;
    case 382u: goto L_002B6D1C;
    case 383u: goto L_002B6D30;
    case 384u: goto L_002B6D50;
    case 385u: goto L_002B6D90;
    case 386u: goto L_002B6D98;
    case 387u: goto L_002B6DB4;
    case 388u: goto L_002B6DC4;
    case 389u: goto L_002B6DD8;
    case 390u: goto L_002B6DEC;
    case 391u: goto L_002B6DF8;
    case 392u: goto L_002B6E50;
    case 393u: goto L_002B6E58;
    case 394u: goto L_002B6E70;
    case 395u: goto L_002B6E80;
    case 396u: goto L_002B6EA0;
    case 397u: goto L_002B6EC0;
    case 398u: goto L_002B6EE8;
    case 399u: goto L_002B6EF8;
    case 400u: goto L_002B6F10;
    case 401u: goto L_002B6F48;
    case 402u: goto L_002B6F58;
    case 403u: goto L_002B6F74;
    case 404u: goto L_002B6F88;
    case 405u: goto L_002B6F98;
    case 406u: goto L_002B6FC0;
    case 407u: goto L_002B6FE0;
    case 408u: goto L_002B7014;
    case 409u: goto L_002B7024;
    case 410u: goto L_002B7040;
    case 411u: goto L_002B705C;
    case 412u: goto L_002B7080;
    case 413u: goto L_002B70A0;
    case 414u: goto L_002B70C8;
    case 415u: goto L_002B70D8;
    case 416u: goto L_002B70F0;
    case 417u: goto L_002B7100;
    case 418u: goto L_002B7144;
    case 419u: goto L_002B7160;
    case 420u: goto L_002B7180;
    case 421u: goto L_002B71D4;
    case 422u: goto L_002B71F0;
    case 423u: goto L_002B7210;
    case 424u: goto L_002B7254;
    case 425u: goto L_002B7268;
    case 426u: goto L_002B7278;
    case 427u: goto L_002B72EC;
    case 428u: goto L_002B7338;
    case 429u: goto L_002B7348;
    case 430u: goto L_002B7364;
    case 431u: goto L_002B7380;
    case 432u: goto L_002B7390;
    case 433u: goto L_002B73AC;
    case 434u: goto L_002B73E0;
    case 435u: goto L_002B7400;
    case 436u: goto L_002B7408;
    case 437u: goto L_002B7414;
    case 438u: goto L_002B742C;
    case 439u: goto L_002B7438;
    case 440u: goto L_002B7460;
    case 441u: goto L_002B746C;
    case 442u: goto L_002B7494;
    case 443u: goto L_002B749C;
    case 444u: goto L_002B74A8;
    case 445u: goto L_002B74B8;
    case 446u: goto L_002B74C8;
    case 447u: goto L_002B74D0;
    case 448u: goto L_002B74D8;
    case 449u: goto L_002B74E8;
    case 450u: goto L_002B74F0;
    case 451u: goto L_002B74FC;
    case 452u: goto L_002B7520;
    case 453u: goto L_002B7538;
    case 454u: goto L_002B7550;
    case 455u: goto L_002B7598;
    case 456u: goto L_002B75B4;
    case 457u: goto L_002B75D0;
    case 458u: goto L_002B75F4;
    case 459u: goto L_002B7620;
    case 460u: goto L_002B7630;
    case 461u: goto L_002B7654;
    case 462u: goto L_002B7660;
    case 463u: goto L_002B7674;
    case 464u: goto L_002B769C;
    case 465u: goto L_002B76B0;
    case 466u: goto L_002B76C8;
    case 467u: goto L_002B76E4;
    case 468u: goto L_002B76F0;
    case 469u: goto L_002B7704;
    case 470u: goto L_002B7730;
    case 471u: goto L_002B7754;
    case 472u: goto L_002B7778;
    case 473u: goto L_002B7800;
    case 474u: goto L_002B784C;
    case 475u: goto L_002B7898;
    case 476u: goto L_002B78D0;
    case 477u: goto L_002B78F0;
    case 478u: goto L_002B7904;
    case 479u: goto L_002B790C;
    case 480u: goto L_002B793C;
    case 481u: goto L_002B7964;
    case 482u: goto L_002B7978;
    case 483u: goto L_002B798C;
    case 484u: goto L_002B79B0;
    case 485u: goto L_002B79D0;
    case 486u: goto L_002B79E0;
    case 487u: goto L_002B7A14;
    case 488u: goto L_002B7A30;
    case 489u: goto L_002B7A48;
    case 490u: goto L_002B7A70;
    case 491u: goto L_002B7A9C;
    case 492u: goto L_002B7AA4;
    case 493u: goto L_002B7AD4;
    case 494u: goto L_002B7ADC;
    case 495u: goto L_002B7AF4;
    case 496u: goto L_002B7B04;
    case 497u: goto L_002B7B18;
    case 498u: goto L_002B7B28;
    case 499u: goto L_002B7B34;
    case 500u: goto L_002B7B74;
    case 501u: goto L_002B7B80;
    case 502u: goto L_002B7B94;
    case 503u: goto L_002B7BB8;
    case 504u: goto L_002B7BC0;
    case 505u: goto L_002B7BD8;
    case 506u: goto L_002B7BE4;
    case 507u: goto L_002B7C18;
    case 508u: goto L_002B7C24;
    case 509u: goto L_002B7C2C;
    case 510u: goto L_002B7C48;
    case 511u: goto L_002B7C5C;
    case 512u: goto L_002B7C70;
    case 513u: goto L_002B7C90;
    case 514u: goto L_002B7CAC;
    case 515u: goto L_002B7CB4;
    case 516u: goto L_002B7CBC;
    case 517u: goto L_002B7CD8;
    case 518u: goto L_002B7D14;
    case 519u: goto L_002B7D50;
    case 520u: goto L_002B7D68;
    case 521u: goto L_002B7D98;
    case 522u: goto L_002B7DB0;
    case 523u: goto L_002B7DD0;
    case 524u: goto L_002B7E5C;
    case 525u: goto L_002B7E70;
    case 526u: goto L_002B7E8C;
    case 527u: goto L_002B7EA0;
    case 528u: goto L_002B7EA8;
    case 529u: goto L_002B7EC0;
    case 530u: goto L_002B7EE0;
    case 531u: goto L_002B7EF0;
    case 532u: goto L_002B7F38;
    case 533u: goto L_002B7F58;
    case 534u: goto L_002B7FD0;
    default: bad_entry(c, 0x002B4000u); return;
    }
L_002B4000:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002B4004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B400Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 234u, depth + 1u); else { c.pc = 0x002B5CB0u; return; } if (c.pc != 0x002B400Cu) [[unlikely]] return; }
L_002B400C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4018u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 216u, depth + 1u); else { c.pc = 0x002B5A40u; return; } if (c.pc != 0x002B4018u) [[unlikely]] return; }
L_002B4018:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4024u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 222u, depth + 1u); else { c.pc = 0x002B5B10u; return; } if (c.pc != 0x002B4024u) [[unlikely]] return; }
L_002B4024:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4030u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 228u, depth + 1u); else { c.pc = 0x002B5BE0u; return; } if (c.pc != 0x002B4030u) [[unlikely]] return; }
L_002B4030:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B403Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 209u, depth + 1u); else { c.pc = 0x002B5960u; return; } if (c.pc != 0x002B403Cu) [[unlikely]] return; }
L_002B403C:
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4048u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 208u, depth + 1u); else { c.pc = 0x002B5950u; return; } if (c.pc != 0x002B4048u) [[unlikely]] return; }
L_002B4048:
    set32(c.r[5], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4054u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 207u, depth + 1u); else { c.pc = 0x002B5940u; return; } if (c.pc != 0x002B4054u) [[unlikely]] return; }
L_002B4054:
    set32(c.r[5], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4060u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 206u, depth + 1u); else { c.pc = 0x002B5930u; return; } if (c.pc != 0x002B4060u) [[unlikely]] return; }
L_002B4060:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 172u), c.r[16].w[0]);  if (t) { goto L_002B4084; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4070u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B4070u) [[unlikely]] return; }
L_002B4070:
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4084u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B4084u) [[unlikely]] return; }
L_002B4084:
    c.r[5].d[0] = ld16((c.r[21].w[0] + 42u));
    set32(c.r[4], c.r[21].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4094u); set32(c.r[6], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_006C(c, 451u, depth + 1u); else { c.pc = 0x002B3790u; return; } if (c.pc != 0x002B4094u) [[unlikely]] return; }
L_002B4094:
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002B40E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B40A8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B40A8u) [[unlikely]] return; }
L_002B40A8:
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B40BCu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B40BCu) [[unlikely]] return; }
L_002B40BC:
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B40DC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B40DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B40DCu) [[unlikely]] return; }
L_002B40DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002B40E0:
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
L_002B4110:
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_002B4130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld16((c.r[4].w[0] + 42u));  c.pc = t; return; }
L_002B4140:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[4], 0u + 44u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4198u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002B4198u) [[unlikely]] return; }
L_002B4198:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[22].d[0] == 0ull) { c.r[5].d[0] = c.r[20].d[0] + 0ull;  goto L_002B41B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B41ACu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 249u, depth + 1u); else { c.pc = 0x002B5E10u; return; } if (c.pc != 0x002B41ACu) [[unlikely]] return; }
L_002B41AC:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_002B41B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B41BCu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 234u, depth + 1u); else { c.pc = 0x002B5CB0u; return; } if (c.pc != 0x002B41BCu) [[unlikely]] return; }
L_002B41BC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B41C8u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 216u, depth + 1u); else { c.pc = 0x002B5A40u; return; } if (c.pc != 0x002B41C8u) [[unlikely]] return; }
L_002B41C8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B41D4u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 222u, depth + 1u); else { c.pc = 0x002B5B10u; return; } if (c.pc != 0x002B41D4u) [[unlikely]] return; }
L_002B41D4:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B41E0u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 228u, depth + 1u); else { c.pc = 0x002B5BE0u; return; } if (c.pc != 0x002B41E0u) [[unlikely]] return; }
L_002B41E0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B41ECu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 209u, depth + 1u); else { c.pc = 0x002B5960u; return; } if (c.pc != 0x002B41ECu) [[unlikely]] return; }
L_002B41EC:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B41F8u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 208u, depth + 1u); else { c.pc = 0x002B5950u; return; } if (c.pc != 0x002B41F8u) [[unlikely]] return; }
L_002B41F8:
    set32(c.r[5], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4204u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 207u, depth + 1u); else { c.pc = 0x002B5940u; return; } if (c.pc != 0x002B4204u) [[unlikely]] return; }
L_002B4204:
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4210u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 206u, depth + 1u); else { c.pc = 0x002B5930u; return; } if (c.pc != 0x002B4210u) [[unlikely]] return; }
L_002B4210:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[29].w[0] + 172u), c.r[22].w[0]);  if (t) { goto L_002B4234; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4220u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B4220u) [[unlikely]] return; }
L_002B4220:
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4234u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B4234u) [[unlikely]] return; }
L_002B4234:
    c.r[5].d[0] = ld16((c.r[21].w[0] + 26u));
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4244u); set32(c.r[6], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_006C(c, 451u, depth + 1u); else { c.pc = 0x002B3790u; return; } if (c.pc != 0x002B4244u) [[unlikely]] return; }
L_002B4244:
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[22].d[0] + 0ull;  goto L_002B4290; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4258u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B4258u) [[unlikely]] return; }
L_002B4258:
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B426Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B426Cu) [[unlikely]] return; }
L_002B426C:
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B428C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B428Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B428Cu) [[unlikely]] return; }
L_002B428C:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_002B4290:
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
L_002B42C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[29].w[0] + 44u), c.r[5].w[0]);  if (t) { goto L_002B42F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B42E0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B42E0u) [[unlikely]] return; }
L_002B42E0:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B42F4u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B42F4u) [[unlikely]] return; }
L_002B42F4:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 26u));
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4304u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_006C(c, 451u, depth + 1u); else { c.pc = 0x002B3790u; return; } if (c.pc != 0x002B4304u) [[unlikely]] return; }
L_002B4304:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B4350; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4318u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B4318u) [[unlikely]] return; }
L_002B4318:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B432Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B432Cu) [[unlikely]] return; }
L_002B432C:
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B434C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B434Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B434Cu) [[unlikely]] return; }
L_002B434C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B4350:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B4360:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002B43C0; } }
L_002B4388:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[19].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002B43C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B43A4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 245u, depth + 1u); else { c.pc = 0x002B5DD0u; return; } if (c.pc != 0x002B43A4u) [[unlikely]] return; }
L_002B43A4:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B43BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002B43D4; } }
L_002B43BC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002B43C0:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 26u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B4388u | kUnwind; return; } goto L_002B4388; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B43D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B43F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_002B4410:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld16((c.r[4].w[0] + 26u));  c.pc = t; return; }
L_002B4420:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B44C8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 12u)));  goto L_002B4474; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4460u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B4460u) [[unlikely]] return; }
L_002B4460:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4470u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B4470u) [[unlikely]] return; }
L_002B4470:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 1;
L_002B4474:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0] + 12u), c.r[17].w[0]);  goto L_002B44C8; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4494u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B4494u) [[unlikely]] return; }
L_002B4494:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B44A4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B44A4u) [[unlikely]] return; }
L_002B44A4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B44C4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B44C4u); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002B44C4u) [[unlikely]] return; }
L_002B44C4:
    st32((c.r[19].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 1;
L_002B44C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B44F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 12u);  c.pc = t; return; }
L_002B4500:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B46C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 11376u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002B4570; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 11432u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_002B4570; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    set32(c.r[2], c.r[2].w[0] + 11416u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1520u);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4570u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002B4570u) [[unlikely]] return; }
L_002B4570:
    set32(c.r[3], c.r[17].w[0] + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 12u);  goto L_002B45B8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 11432u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_002B45B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    set32(c.r[2], c.r[2].w[0] + 11416u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1520u);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B45B4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002B45B4u) [[unlikely]] return; }
L_002B45B4:
    set32(c.r[2], c.r[17].w[0] + 12u);
    c.budget -= 1;
L_002B45B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 8u);  goto L_002B4620; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B461C; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B45ECu); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B45ECu) [[unlikely]] return; }
L_002B45EC:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B45FCu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B45FCu) [[unlikely]] return; }
L_002B45FC:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B461C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B461Cu); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002B461Cu) [[unlikely]] return; }
L_002B461C:
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_002B4620:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B4684; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B4684; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4654u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B4654u) [[unlikely]] return; }
L_002B4654:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4664u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B4664u) [[unlikely]] return; }
L_002B4664:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B4684; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4684u); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002B4684u) [[unlikely]] return; }
L_002B4684:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002B46B0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B469Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B469Cu) [[unlikely]] return; }
L_002B469C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B46ACu); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B46ACu) [[unlikely]] return; }
L_002B46AC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002B46B0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002B46CC; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B46C8u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002B46C8u) [[unlikely]] return; }
L_002B46C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B46CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B46F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B471Cu); st32((c.r[4].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B471Cu) [[unlikely]] return; }
L_002B471C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B472Cu); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B472Cu) [[unlikely]] return; }
L_002B472C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20312u)));
    set32(c.r[3], c.r[3].w[0] + 11376u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[18].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 11416u);
    st32((c.r[18].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    st16((c.r[18].w[0] + 24u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[16].d[0] = ld16((c.r[18].w[0] + 24u));
    c.budget -= 18;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[17], c.r[18].w[0] + 16u);  if (t) { goto L_002B47AC; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4784u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002B4784u) [[unlikely]] return; }
L_002B4784:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1680u);
    set32(c.r[6], c.r[6].w[0] + 1520u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B47A4u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002B47A4u) [[unlikely]] return; }
L_002B47A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002B47B0; } }
L_002B47AC:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_002B47B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 11432u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 11416u);
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[18].w[0] + 40u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 46u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 42u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(0u));
    c.r[17].d[0] = ld16((c.r[18].w[0] + 40u));
    c.budget -= 14;
    { const bool t = c.r[17].sd[0] <= 0; set32(c.r[16], c.r[18].w[0] + 32u);  if (t) { goto L_002B4820; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B47F8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002B47F8u) [[unlikely]] return; }
L_002B47F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1680u);
    set32(c.r[6], c.r[6].w[0] + 1520u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4818u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002B4818u) [[unlikely]] return; }
L_002B4818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002B4824; } }
L_002B4820:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_002B4824:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 11432u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B4850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B48C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 11432u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002B48A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    set32(c.r[2], c.r[2].w[0] + 11416u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1520u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B48A4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002B48A4u) [[unlikely]] return; }
L_002B48A4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002B48C4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B48C0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002B48C0u) [[unlikely]] return; }
L_002B48C0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B48C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B48E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B4940; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    set32(c.r[2], c.r[2].w[0] + 11416u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1520u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4924u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002B4924u) [[unlikely]] return; }
L_002B4924:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002B4944; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4940u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002B4940u) [[unlikely]] return; }
L_002B4940:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B4944:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B4960:
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
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002B49E0; } }
L_002B4990:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002B49E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B49ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 55u, depth + 1u); else { c.pc = 0x002B44F0u; return; } if (c.pc != 0x002B49ACu) [[unlikely]] return; }
L_002B49AC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B49DC; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002B49D4; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B49D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B49D4u) [[unlikely]] return; }
L_002B49D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_002B49F8; } }
L_002B49DC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002B49E0:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 18u));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B4990u | kUnwind; return; } goto L_002B4990; }
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 2;
L_002B49F8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B4A20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4A54u); st32((c.r[4].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B4A54u) [[unlikely]] return; }
L_002B4A54:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4A64u); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B4A64u) [[unlikely]] return; }
L_002B4A64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 11456u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 11256u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(0u));
    c.r[19].d[0] = ld16((c.r[16].w[0] + 16u));
    c.budget -= 14;
    { const bool t = c.r[19].sd[0] <= 0; set32(c.r[17], c.r[16].w[0] + 8u);  if (t) { goto L_002B4AD4; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4AACu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002B4AACu) [[unlikely]] return; }
L_002B4AAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3200u);
    set32(c.r[6], c.r[6].w[0] - 10464u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4ACCu); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002B4ACCu) [[unlikely]] return; }
L_002B4ACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002B4AD8; } }
L_002B4AD4:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_002B4AD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 100u);
    set32(c.r[2], c.r[2].w[0] + 11272u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    c.budget -= 8;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002B4C4C; }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 18u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(101ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 12u)));  goto L_002B4BA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_002B4B84; } }
L_002B4B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4B18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 325u, depth + 1u); else { c.pc = 0x002B2500u; return; } if (c.pc != 0x002B4B18u) [[unlikely]] return; }
L_002B4B18:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[19], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4B30u); set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_006C(c, 324u, depth + 1u); else { c.pc = 0x002B24E0u; return; } if (c.pc != 0x002B4B30u) [[unlikely]] return; }
L_002B4B30:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4B40u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006B(c, 236u, depth + 1u); else { c.pc = 0x002AD720u; return; } if (c.pc != 0x002B4B40u) [[unlikely]] return; }
L_002B4B40:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 1u);  goto L_002B4B80; }
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4B54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 325u, depth + 1u); else { c.pc = 0x002B2500u; return; } if (c.pc != 0x002B4B54u) [[unlikely]] return; }
L_002B4B54:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], c.r[29].w[0] + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4B64u); set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_006C(c, 110u, depth + 1u); else { c.pc = 0x002B0980u; return; } if (c.pc != 0x002B4B64u) [[unlikely]] return; }
L_002B4B64:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4B70u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006B(c, 236u, depth + 1u); else { c.pc = 0x002AD720u; return; } if (c.pc != 0x002B4B70u) [[unlikely]] return; }
L_002B4B70:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 20u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 4;
L_002B4B80:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_002B4B84:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 18u));
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 92u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B4B10u | kUnwind; return; } goto L_002B4B10; }
    set32(c.r[2], 0u + 100u);
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[19], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
L_002B4BA4:
    set32(c.r[2], 0u + 100u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4BB4u); c.r[4].d[0] = ld16((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_006C(c, 321u, depth + 1u); else { c.pc = 0x002B2490u; return; } if (c.pc != 0x002B4BB4u) [[unlikely]] return; }
L_002B4BB4:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002B4BDC; } }
L_002B4BC0:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[19].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4BD4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006C(c, 110u, depth + 1u); else { c.pc = 0x002B0980u; return; } if (c.pc != 0x002B4BD4u) [[unlikely]] return; }
L_002B4BD4:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_002B4BDC:
    c.r[18].d[0] = ld16((c.r[16].w[0] + 18u));
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B4BC0u | kUnwind; return; } goto L_002B4BC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));  if (t) { goto L_002B4C30; } }
L_002B4BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4C00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 325u, depth + 1u); else { c.pc = 0x002B2500u; return; } if (c.pc != 0x002B4C00u) [[unlikely]] return; }
L_002B4C00:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 84u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4C18u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006C(c, 110u, depth + 1u); else { c.pc = 0x002B0980u; return; } if (c.pc != 0x002B4C18u) [[unlikely]] return; }
L_002B4C18:
    set32(c.r[4], c.r[29].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4C24u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006B(c, 236u, depth + 1u); else { c.pc = 0x002AD720u; return; } if (c.pc != 0x002B4C24u) [[unlikely]] return; }
L_002B4C24:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    c.budget -= 3;
L_002B4C30:
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 84u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B4BF8u | kUnwind; return; } goto L_002B4BF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4C48u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 320u, depth + 1u); else { c.pc = 0x002B2470u; return; } if (c.pc != 0x002B4C48u) [[unlikely]] return; }
L_002B4C48:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002B4C4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B4C70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B4D1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[17].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 11456u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002B4CD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 11272u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002B4CD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    set32(c.r[2], c.r[2].w[0] + 11256u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 10464u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4CD8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002B4CD8u) [[unlikely]] return; }
L_002B4CD8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002B4D04; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4CF0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B4CF0u) [[unlikely]] return; }
L_002B4CF0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4D00u); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B4D00u) [[unlikely]] return; }
L_002B4D00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002B4D04:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002B4D20; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4D1Cu); set32(c.r[5], 0u + 28u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002B4D1Cu) [[unlikely]] return; }
L_002B4D1C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B4D20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B4D40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 23648u);  c.pc = t; return; }
L_002B4D50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 3u);  c.pc = t; return; }
L_002B4D60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 27660u)));
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002B4DDC; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002B4DB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4D88u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B4D88u) [[unlikely]] return; }
L_002B4D88:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4D98u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B4D98u) [[unlikely]] return; }
L_002B4D98:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B4DB4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4DB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B4DB4u) [[unlikely]] return; }
L_002B4DB4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B4DB8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 27660u), 0u);  if (t) { goto L_002B4DD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4DC8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B4DC8u) [[unlikely]] return; }
L_002B4DC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4DD8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B4DD8u) [[unlikely]] return; }
L_002B4DD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B4DDC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B4DF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 92u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4E0Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002B4E0Cu) [[unlikely]] return; }
L_002B4E0C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 27660u)));  goto L_002B4E28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4E20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 173u, depth + 1u); else { c.pc = 0x002B5490u; return; } if (c.pc != 0x002B4E20u) [[unlikely]] return; }
L_002B4E20:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[28].w[0] - 27660u)));
    c.budget -= 2;
L_002B4E28:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002B4E94; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[28].w[0] - 27660u), c.r[16].w[0]);  goto L_002B4E70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4E40u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B4E40u) [[unlikely]] return; }
L_002B4E40:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4E50u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B4E50u) [[unlikely]] return; }
L_002B4E50:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B4E6C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4E6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B4E6Cu) [[unlikely]] return; }
L_002B4E6C:
    st32((c.r[28].w[0] - 27660u), c.r[16].w[0]);
    c.budget -= 1;
L_002B4E70:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B4E90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4E80u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B4E80u) [[unlikely]] return; }
L_002B4E80:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4E90u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B4E90u) [[unlikely]] return; }
L_002B4E90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002B4E94:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B4EB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4ECCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 92u, depth + 1u); else { c.pc = 0x002C8A80u; return; } if (c.pc != 0x002B4ECCu) [[unlikely]] return; }
L_002B4ECC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4ED8u); set32(c.r[4], ld32((c.r[2].w[0] + 23648u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002B4ED8u) [[unlikely]] return; }
L_002B4ED8:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4EECu); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002B4EECu) [[unlikely]] return; }
L_002B4EEC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4EFCu); set32(c.r[5], c.r[5].w[0] + 23664u);  if (depth < kMaxDepth) unit_0062(c, 170u, depth + 1u); else { c.pc = 0x00289660u; return; } if (c.pc != 0x002B4EFCu) [[unlikely]] return; }
L_002B4EFC:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4F10u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002B4F10u) [[unlikely]] return; }
L_002B4F10:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4F20u); set32(c.r[5], c.r[5].w[0] + 23670u);  if (depth < kMaxDepth) unit_0062(c, 170u, depth + 1u); else { c.pc = 0x00289660u; return; } if (c.pc != 0x002B4F20u) [[unlikely]] return; }
L_002B4F20:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4F34u); set32(c.r[6], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002B4F34u) [[unlikely]] return; }
L_002B4F34:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4F44u); set32(c.r[5], c.r[5].w[0] + 23677u);  if (depth < kMaxDepth) unit_0062(c, 170u, depth + 1u); else { c.pc = 0x00289660u; return; } if (c.pc != 0x002B4F44u) [[unlikely]] return; }
L_002B4F44:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4F58u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002B4F58u) [[unlikely]] return; }
L_002B4F58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4F68u); set32(c.r[5], c.r[5].w[0] + 23684u);  if (depth < kMaxDepth) unit_0062(c, 170u, depth + 1u); else { c.pc = 0x00289660u; return; } if (c.pc != 0x002B4F68u) [[unlikely]] return; }
L_002B4F68:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4F7Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002B4F7Cu) [[unlikely]] return; }
L_002B4F7C:
    c.f[12] = ld32((c.r[17].w[0] + 80u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4F8Cu); set32(c.r[4], c.r[4].w[0] + 23691u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x002B4F8Cu) [[unlikely]] return; }
L_002B4F8C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4FA0u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002B4FA0u) [[unlikely]] return; }
L_002B4FA0:
    c.f[12] = ld32((c.r[17].w[0] + 84u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4FB0u); set32(c.r[4], c.r[4].w[0] + 23700u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x002B4FB0u) [[unlikely]] return; }
L_002B4FB0:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4FC4u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002B4FC4u) [[unlikely]] return; }
L_002B4FC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B4FE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4FFCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 96u, depth + 1u); else { c.pc = 0x002C8AD0u; return; } if (c.pc != 0x002B4FFCu) [[unlikely]] return; }
L_002B4FFC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 32u));  goto L_002B500C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B51C4; } }
L_002B500C:
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B5020; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B5020:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B5040; } }
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B5040; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B5040:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_002B5064; }
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B5060; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B5060:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_002B5064:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002B51C4; }
    c.f[1] = ld32((c.r[17].w[0] + 44u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B5084; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B5084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B50A4; } }
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B50A4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B50A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_002B50C8; }
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B50C4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B50C4:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_002B50C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B51C0; } }
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B50E8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B50E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B5108; } }
    c.f[1] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B5108; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B5108:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_002B512C; }
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B5128; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B5128:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_002B512C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B51C0; } }
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B514C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B514C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B516C; } }
    c.f[1] = ld32((c.r[17].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B516C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B516C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_002B5190; }
    c.f[1] = ld32((c.r[17].w[0] + 76u));
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B518C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B518C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_002B5190:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B51C0; } }
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B51C0; } }
    c.f[1] = ld32((c.r[17].w[0] + 84u));
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 1u);  goto L_002B51C4; }
L_002B51C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B51C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B51E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B51FCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 97u, depth + 1u); else { c.pc = 0x002C8AE0u; return; } if (c.pc != 0x002B51FCu) [[unlikely]] return; }
L_002B51FC:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5208u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 177u, depth + 1u); else { c.pc = 0x00289710u; return; } if (c.pc != 0x002B5208u) [[unlikely]] return; }
L_002B5208:
    set32(c.r[4], c.r[17].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5214u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 177u, depth + 1u); else { c.pc = 0x00289710u; return; } if (c.pc != 0x002B5214u) [[unlikely]] return; }
L_002B5214:
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5220u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 177u, depth + 1u); else { c.pc = 0x00289710u; return; } if (c.pc != 0x002B5220u) [[unlikely]] return; }
L_002B5220:
    set32(c.r[4], c.r[17].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B522Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 177u, depth + 1u); else { c.pc = 0x00289710u; return; } if (c.pc != 0x002B522Cu) [[unlikely]] return; }
L_002B522C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5238u); set32(c.r[5], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002B5238u) [[unlikely]] return; }
L_002B5238:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5244u); set32(c.r[5], c.r[17].w[0] + 84u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002B5244u) [[unlikely]] return; }
L_002B5244:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B5260:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0072(c, 98u, depth); }
L_002B5270:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0072(c, 99u, depth); }
L_002B5280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B529Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 100u, depth + 1u); else { c.pc = 0x002C8B10u; return; } if (c.pc != 0x002B529Cu) [[unlikely]] return; }
L_002B529C:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B52A8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 181u, depth + 1u); else { c.pc = 0x00289760u; return; } if (c.pc != 0x002B52A8u) [[unlikely]] return; }
L_002B52A8:
    set32(c.r[4], c.r[17].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B52B4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 181u, depth + 1u); else { c.pc = 0x00289760u; return; } if (c.pc != 0x002B52B4u) [[unlikely]] return; }
L_002B52B4:
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B52C0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 181u, depth + 1u); else { c.pc = 0x00289760u; return; } if (c.pc != 0x002B52C0u) [[unlikely]] return; }
L_002B52C0:
    set32(c.r[4], c.r[17].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B52CCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 181u, depth + 1u); else { c.pc = 0x00289760u; return; } if (c.pc != 0x002B52CCu) [[unlikely]] return; }
L_002B52CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B52D8u); set32(c.r[5], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002B52D8u) [[unlikely]] return; }
L_002B52D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B52E4u); set32(c.r[5], c.r[17].w[0] + 84u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002B52E4u) [[unlikely]] return; }
L_002B52E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B5300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 92u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5314u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002B5314u) [[unlikely]] return; }
L_002B5314:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002B5328; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5324u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 173u, depth + 1u); else { c.pc = 0x002B5490u; return; } if (c.pc != 0x002B5324u) [[unlikely]] return; }
L_002B5324:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002B5328:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B5330:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 92u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5358u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002B5358u) [[unlikely]] return; }
L_002B5358:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[6].d[0] = c.r[17].d[0] + 0ull;  goto L_002B5374; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B536Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 173u, depth + 1u); else { c.pc = 0x002B5490u; return; } if (c.pc != 0x002B536Cu) [[unlikely]] return; }
L_002B536C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_002B5374:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5380u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 101u, depth + 1u); else { c.pc = 0x002C8B20u; return; } if (c.pc != 0x002B5380u) [[unlikely]] return; }
L_002B5380:
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 64u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 68u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 72u));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 76u));
    st32((c.r[16].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    st32((c.r[16].w[0] + 84u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B5410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B5478; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 11472u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B543Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0072(c, 377u, depth + 1u); else { c.pc = 0x002CB2D0u; return; } if (c.pc != 0x002B543Cu) [[unlikely]] return; }
L_002B543C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002B5460; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13520u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B545Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006F(c, 208u, depth + 1u); else { c.pc = 0x002BDBC0u; return; } if (c.pc != 0x002B545Cu) [[unlikely]] return; }
L_002B545C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002B5460:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002B547C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5478u); set32(c.r[5], 0u + 92u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002B5478u) [[unlikely]] return; }
L_002B5478:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B547C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B5490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B54A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x002B54A4u) [[unlikely]] return; }
L_002B54A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 11472u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[16].w[0] + 36u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 40u), 0u);
    set32(c.r[4], c.r[4].w[0] + 15568u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 40u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B553Cu); st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002B553Cu) [[unlikely]] return; }
L_002B553C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30636u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 15568u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30636u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B555Cu); st32((c.r[28].w[0] - 30636u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002B555Cu) [[unlikely]] return; }
L_002B555C:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B5580:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B55ACu); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002B55ACu) [[unlikely]] return; }
L_002B55AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002B5614; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B55C8u); st32((c.r[16].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B55C8u) [[unlikely]] return; }
L_002B55C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B55D8u); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B55D8u) [[unlikely]] return; }
L_002B55D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    set32(c.r[3], c.r[3].w[0] + 11568u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 15;
L_002B5614:
    set32(c.r[19], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[19].d[0]) { set32(c.r[19], ld32((c.r[17].w[0] + 12u)));  goto L_002B56A8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_002B5650; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B563Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B563Cu) [[unlikely]] return; }
L_002B563C:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B564Cu); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B564Cu) [[unlikely]] return; }
L_002B564C:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_002B5650:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[16].w[0] + 8u), c.r[19].w[0]);  goto L_002B56A4; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5670u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B5670u) [[unlikely]] return; }
L_002B5670:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5680u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B5680u) [[unlikely]] return; }
L_002B5680:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B56A0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B56A0u); set32(c.r[5], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002B56A0u) [[unlikely]] return; }
L_002B56A0:
    st32((c.r[16].w[0] + 8u), c.r[19].w[0]);
    c.budget -= 1;
L_002B56A4:
    set32(c.r[19], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_002B56A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[19].d[0]) { set32(c.r[19], ld32((c.r[17].w[0] + 16u)));  goto L_002B5738; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_002B56E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B56CCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B56CCu) [[unlikely]] return; }
L_002B56CC:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B56DCu); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B56DCu) [[unlikely]] return; }
L_002B56DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_002B56E0:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[16].w[0] + 12u), c.r[19].w[0]);  goto L_002B5734; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5700u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B5700u) [[unlikely]] return; }
L_002B5700:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5710u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B5710u) [[unlikely]] return; }
L_002B5710:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B5730; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5730u); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002B5730u) [[unlikely]] return; }
L_002B5730:
    st32((c.r[16].w[0] + 12u), c.r[19].w[0]);
    c.budget -= 1;
L_002B5734:
    set32(c.r[19], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_002B5738:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[19].d[0]) { set32(c.r[19], ld32((c.r[17].w[0] + 20u)));  goto L_002B57C8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 16u)));  goto L_002B5770; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B575Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B575Cu) [[unlikely]] return; }
L_002B575C:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B576Cu); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B576Cu) [[unlikely]] return; }
L_002B576C:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_002B5770:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[16].w[0] + 16u), c.r[19].w[0]);  goto L_002B57C4; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5790u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B5790u) [[unlikely]] return; }
L_002B5790:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B57A0u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B57A0u) [[unlikely]] return; }
L_002B57A0:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B57C0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B57C0u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002B57C0u) [[unlikely]] return; }
L_002B57C0:
    st32((c.r[16].w[0] + 16u), c.r[19].w[0]);
    c.budget -= 1;
L_002B57C4:
    set32(c.r[19], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_002B57C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[19].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 28u)));  goto L_002B5858; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_002B5800; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B57ECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B57ECu) [[unlikely]] return; }
L_002B57EC:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B57FCu); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B57FCu) [[unlikely]] return; }
L_002B57FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_002B5800:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[16].w[0] + 20u), c.r[19].w[0]);  goto L_002B5854; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5820u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B5820u) [[unlikely]] return; }
L_002B5820:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5830u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B5830u) [[unlikely]] return; }
L_002B5830:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B5850; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5850u); set32(c.r[5], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002B5850u) [[unlikely]] return; }
L_002B5850:
    st32((c.r[16].w[0] + 20u), c.r[19].w[0]);
    c.budget -= 1;
L_002B5854:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_002B5858:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[19].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 32u)));  goto L_002B58F0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  goto L_002B5898; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5884u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B5884u) [[unlikely]] return; }
L_002B5884:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5894u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B5894u) [[unlikely]] return; }
L_002B5894:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_002B5898:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[16].w[0] + 24u), c.r[19].w[0]);  goto L_002B58EC; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B58B8u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B58B8u) [[unlikely]] return; }
L_002B58B8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B58C8u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B58C8u) [[unlikely]] return; }
L_002B58C8:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B58E8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B58E8u); set32(c.r[5], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002B58E8u) [[unlikely]] return; }
L_002B58E8:
    st32((c.r[16].w[0] + 24u), c.r[19].w[0]);
    c.budget -= 1;
L_002B58EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_002B58F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B5930:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), c.r[5].w[0]);  c.pc = t; return; }
L_002B5940:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), c.r[5].w[0]);  c.pc = t; return; }
L_002B5950:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), c.r[5].w[0]);  c.pc = t; return; }
L_002B5960:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[5].w[0]);  c.pc = t; return; }
L_002B5970:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B5A18; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 24u)));  goto L_002B59C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B59B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B59B0u) [[unlikely]] return; }
L_002B59B0:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B59C0u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B59C0u) [[unlikely]] return; }
L_002B59C0:
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 1;
L_002B59C4:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0] + 24u), c.r[17].w[0]);  goto L_002B5A18; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B59E4u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B59E4u) [[unlikely]] return; }
L_002B59E4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B59F4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B59F4u) [[unlikely]] return; }
L_002B59F4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B5A14; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5A14u); set32(c.r[5], c.r[19].w[0] + 24u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002B5A14u) [[unlikely]] return; }
L_002B5A14:
    st32((c.r[19].w[0] + 24u), c.r[17].w[0]);
    c.budget -= 1;
L_002B5A18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B5A40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B5AE8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 20u)));  goto L_002B5A94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5A80u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B5A80u) [[unlikely]] return; }
L_002B5A80:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5A90u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B5A90u) [[unlikely]] return; }
L_002B5A90:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 1;
L_002B5A94:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0] + 20u), c.r[17].w[0]);  goto L_002B5AE8; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5AB4u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B5AB4u) [[unlikely]] return; }
L_002B5AB4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5AC4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B5AC4u) [[unlikely]] return; }
L_002B5AC4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B5AE4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5AE4u); set32(c.r[5], c.r[19].w[0] + 20u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002B5AE4u) [[unlikely]] return; }
L_002B5AE4:
    st32((c.r[19].w[0] + 20u), c.r[17].w[0]);
    c.budget -= 1;
L_002B5AE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B5B10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B5BB8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 16u)));  goto L_002B5B64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5B50u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B5B50u) [[unlikely]] return; }
L_002B5B50:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5B60u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B5B60u) [[unlikely]] return; }
L_002B5B60:
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_002B5B64:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0] + 16u), c.r[17].w[0]);  goto L_002B5BB8; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5B84u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B5B84u) [[unlikely]] return; }
L_002B5B84:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5B94u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B5B94u) [[unlikely]] return; }
L_002B5B94:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B5BB4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5BB4u); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002B5BB4u) [[unlikely]] return; }
L_002B5BB4:
    st32((c.r[19].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 1;
L_002B5BB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B5BE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B5C88; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 12u)));  goto L_002B5C34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5C20u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B5C20u) [[unlikely]] return; }
L_002B5C20:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5C30u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B5C30u) [[unlikely]] return; }
L_002B5C30:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 1;
L_002B5C34:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0] + 12u), c.r[17].w[0]);  goto L_002B5C88; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5C54u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B5C54u) [[unlikely]] return; }
L_002B5C54:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5C64u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B5C64u) [[unlikely]] return; }
L_002B5C64:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B5C84; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5C84u); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002B5C84u) [[unlikely]] return; }
L_002B5C84:
    st32((c.r[19].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 1;
L_002B5C88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B5CB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B5D58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_002B5D04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5CF0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B5CF0u) [[unlikely]] return; }
L_002B5CF0:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5D00u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B5D00u) [[unlikely]] return; }
L_002B5D00:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_002B5D04:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0] + 8u), c.r[17].w[0]);  goto L_002B5D58; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5D24u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B5D24u) [[unlikely]] return; }
L_002B5D24:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5D34u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B5D34u) [[unlikely]] return; }
L_002B5D34:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B5D54; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5D54u); set32(c.r[5], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002B5D54u) [[unlikely]] return; }
L_002B5D54:
    st32((c.r[19].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 1;
L_002B5D58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B5D80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 40u)));  c.pc = t; return; }
L_002B5D90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 36u)));  c.pc = t; return; }
L_002B5DA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 32u)));  c.pc = t; return; }
L_002B5DB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  c.pc = t; return; }
L_002B5DC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 24u);  c.pc = t; return; }
L_002B5DD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 20u);  c.pc = t; return; }
L_002B5DE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 16u);  c.pc = t; return; }
L_002B5DF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 12u);  c.pc = t; return; }
L_002B5E00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_002B5E10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5E34u); st32((c.r[4].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B5E34u) [[unlikely]] return; }
L_002B5E34:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5E44u); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B5E44u) [[unlikely]] return; }
L_002B5E44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20312u)));
    set32(c.r[3], c.r[3].w[0] + 11568u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B5EA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B6118; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 24u);
    set32(c.r[3], c.r[3].w[0] + 11568u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_002B5F34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 20u);  goto L_002B5F38; }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5F04u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B5F04u) [[unlikely]] return; }
L_002B5F04:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5F14u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B5F14u) [[unlikely]] return; }
L_002B5F14:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B5F34; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5F34u); set32(c.r[5], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002B5F34u) [[unlikely]] return; }
L_002B5F34:
    set32(c.r[2], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_002B5F38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 16u);  goto L_002B5FA0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B5F9C; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5F6Cu); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B5F6Cu) [[unlikely]] return; }
L_002B5F6C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5F7Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B5F7Cu) [[unlikely]] return; }
L_002B5F7C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B5F9C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5F9Cu); set32(c.r[5], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002B5F9Cu) [[unlikely]] return; }
L_002B5F9C:
    set32(c.r[2], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_002B5FA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 12u);  goto L_002B6008; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B6004; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5FD4u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B5FD4u) [[unlikely]] return; }
L_002B5FD4:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5FE4u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B5FE4u) [[unlikely]] return; }
L_002B5FE4:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B6004; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6004u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002B6004u) [[unlikely]] return; }
L_002B6004:
    set32(c.r[2], c.r[17].w[0] + 12u);
    c.budget -= 1;
L_002B6008:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 8u);  goto L_002B6070; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B606C; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B603Cu); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B603Cu) [[unlikely]] return; }
L_002B603C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B604Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B604Cu) [[unlikely]] return; }
L_002B604C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B606C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B606Cu); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002B606Cu) [[unlikely]] return; }
L_002B606C:
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_002B6070:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B60D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B60D4; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B60A4u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B60A4u) [[unlikely]] return; }
L_002B60A4:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B60B4u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B60B4u) [[unlikely]] return; }
L_002B60B4:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B60D4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B60D4u); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002B60D4u) [[unlikely]] return; }
L_002B60D4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002B6100; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B60ECu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B60ECu) [[unlikely]] return; }
L_002B60EC:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B60FCu); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B60FCu) [[unlikely]] return; }
L_002B60FC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002B6100:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002B611C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6118u); set32(c.r[5], 0u + 44u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002B6118u) [[unlikely]] return; }
L_002B6118:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B611C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B6140:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B61E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 24u)));  goto L_002B6194; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6180u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B6180u) [[unlikely]] return; }
L_002B6180:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6190u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B6190u) [[unlikely]] return; }
L_002B6190:
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 1;
L_002B6194:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0] + 24u), c.r[17].w[0]);  goto L_002B61E8; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B61B4u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B61B4u) [[unlikely]] return; }
L_002B61B4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B61C4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B61C4u) [[unlikely]] return; }
L_002B61C4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B61E4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B61E4u); set32(c.r[5], c.r[19].w[0] + 24u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002B61E4u) [[unlikely]] return; }
L_002B61E4:
    st32((c.r[19].w[0] + 24u), c.r[17].w[0]);
    c.budget -= 1;
L_002B61E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B6210:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 24u);  c.pc = t; return; }
L_002B6220:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  c.pc = t; return; }
L_002B6230:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  c.pc = t; return; }
L_002B6240:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_002B6250:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6298u); st32((c.r[4].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B6298u) [[unlikely]] return; }
L_002B6298:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B62A8u); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B62A8u) [[unlikely]] return; }
L_002B62A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11584u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[20].w[0] + 8u), 0u);  if (t) { goto L_002B62D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B62C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B62C8u) [[unlikely]] return; }
L_002B62C8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B62D8u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B62D8u) [[unlikely]] return; }
L_002B62D8:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[20].w[0] + 12u), 0u);  if (t) { goto L_002B62FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B62ECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B62ECu) [[unlikely]] return; }
L_002B62EC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B62FCu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B62FCu) [[unlikely]] return; }
L_002B62FC:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[20].w[0] + 16u), 0u);  if (t) { goto L_002B6320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6310u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B6310u) [[unlikely]] return; }
L_002B6310:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6320u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B6320u) [[unlikely]] return; }
L_002B6320:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[20].w[0] + 20u), 0u);  if (t) { goto L_002B6344; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6334u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B6334u) [[unlikely]] return; }
L_002B6334:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6344u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B6344u) [[unlikely]] return; }
L_002B6344:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 6;
    if (c.r[21].d[0] == c.r[19].d[0]) { set32(c.r[19], ld32((c.r[20].w[0] + 12u)));  goto L_002B63C0; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[20].w[0] + 8u), c.r[19].w[0]);  goto L_002B639C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B636Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B636Cu) [[unlikely]] return; }
L_002B636C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B637Cu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B637Cu) [[unlikely]] return; }
L_002B637C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B6398; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6398u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B6398u) [[unlikely]] return; }
L_002B6398:
    st32((c.r[20].w[0] + 8u), c.r[19].w[0]);
    c.budget -= 1;
L_002B639C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002B63BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B63ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B63ACu) [[unlikely]] return; }
L_002B63AC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B63BCu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B63BCu) [[unlikely]] return; }
L_002B63BC:
    set32(c.r[19], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 1;
L_002B63C0:
    c.budget -= 2;
    if (c.r[19].d[0] == c.r[17].d[0]) { set32(c.r[17], ld32((c.r[20].w[0] + 16u)));  goto L_002B642C; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[20].w[0] + 12u), c.r[17].w[0]);  goto L_002B6408; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B63D8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B63D8u) [[unlikely]] return; }
L_002B63D8:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B63E8u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B63E8u) [[unlikely]] return; }
L_002B63E8:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B6404; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6404u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B6404u) [[unlikely]] return; }
L_002B6404:
    st32((c.r[20].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 1;
L_002B6408:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002B6428; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6418u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B6418u) [[unlikely]] return; }
L_002B6418:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6428u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B6428u) [[unlikely]] return; }
L_002B6428:
    set32(c.r[17], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 1;
L_002B642C:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[18].d[0]) { set32(c.r[17], ld32((c.r[20].w[0] + 20u)));  goto L_002B6498; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[20].w[0] + 16u), c.r[18].w[0]);  goto L_002B6474; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6444u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B6444u) [[unlikely]] return; }
L_002B6444:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6454u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B6454u) [[unlikely]] return; }
L_002B6454:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B6470; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6470u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B6470u) [[unlikely]] return; }
L_002B6470:
    st32((c.r[20].w[0] + 16u), c.r[18].w[0]);
    c.budget -= 1;
L_002B6474:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002B6494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6484u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B6484u) [[unlikely]] return; }
L_002B6484:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6494u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B6494u) [[unlikely]] return; }
L_002B6494:
    set32(c.r[17], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 1;
L_002B6498:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_002B6504; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[20].w[0] + 20u), c.r[16].w[0]);  goto L_002B64E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B64B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B64B0u) [[unlikely]] return; }
L_002B64B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B64C0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B64C0u) [[unlikely]] return; }
L_002B64C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B64DC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B64DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B64DCu) [[unlikely]] return; }
L_002B64DC:
    st32((c.r[20].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 1;
L_002B64E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B6500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B64F0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B64F0u) [[unlikely]] return; }
L_002B64F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6500u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B6500u) [[unlikely]] return; }
L_002B6500:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002B6504:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002B6530:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B6738; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 24u);
    set32(c.r[3], c.r[3].w[0] + 11584u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_002B65C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 20u);  goto L_002B65C8; }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6594u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B6594u) [[unlikely]] return; }
L_002B6594:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B65A4u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B65A4u) [[unlikely]] return; }
L_002B65A4:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B65C4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B65C4u); set32(c.r[5], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002B65C4u) [[unlikely]] return; }
L_002B65C4:
    set32(c.r[2], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_002B65C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 16u);  goto L_002B6614; }
    set32(c.r[18], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002B6610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B65E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B65E4u) [[unlikely]] return; }
L_002B65E4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B65F4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B65F4u) [[unlikely]] return; }
L_002B65F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B6610; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6610u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B6610u) [[unlikely]] return; }
L_002B6610:
    set32(c.r[2], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_002B6614:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 12u);  goto L_002B6660; }
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002B665C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6630u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B6630u) [[unlikely]] return; }
L_002B6630:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6640u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B6640u) [[unlikely]] return; }
L_002B6640:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B665C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B665Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B665Cu) [[unlikely]] return; }
L_002B665C:
    set32(c.r[2], c.r[17].w[0] + 12u);
    c.budget -= 1;
L_002B6660:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 8u);  goto L_002B66AC; }
    set32(c.r[18], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002B66A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B667Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B667Cu) [[unlikely]] return; }
L_002B667C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B668Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B668Cu) [[unlikely]] return; }
L_002B668C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B66A8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B66A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B66A8u) [[unlikely]] return; }
L_002B66A8:
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_002B66AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B66F4; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002B66F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B66C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B66C8u) [[unlikely]] return; }
L_002B66C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B66D8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B66D8u) [[unlikely]] return; }
L_002B66D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B66F4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B66F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B66F4u) [[unlikely]] return; }
L_002B66F4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002B6720; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B670Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B670Cu) [[unlikely]] return; }
L_002B670C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B671Cu); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B671Cu) [[unlikely]] return; }
L_002B671C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002B6720:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002B673C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6738u); set32(c.r[5], 0u + 28u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002B6738u) [[unlikely]] return; }
L_002B6738:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B673C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B6760:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6788u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 68u, depth + 1u); else { c.pc = 0x002B46F0u; return; } if (c.pc != 0x002B6788u) [[unlikely]] return; }
L_002B6788:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11600u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B67ACu); st32((c.r[19].w[0] + 48u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_006D(c, 49u, depth + 1u); else { c.pc = 0x002B4420u; return; } if (c.pc != 0x002B67ACu) [[unlikely]] return; }
L_002B67AC:
    set32(c.r[17], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[17].d[0]) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_002B6838; }
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 48u)));  goto L_002B67E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B67CCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B67CCu) [[unlikely]] return; }
L_002B67CC:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B67DCu); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B67DCu) [[unlikely]] return; }
L_002B67DC:
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 1;
L_002B67E0:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0] + 48u), c.r[17].w[0]);  goto L_002B6834; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6800u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B6800u) [[unlikely]] return; }
L_002B6800:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6810u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B6810u) [[unlikely]] return; }
L_002B6810:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B6830; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6830u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002B6830u) [[unlikely]] return; }
L_002B6830:
    st32((c.r[19].w[0] + 48u), c.r[17].w[0]);
    c.budget -= 1;
L_002B6834:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002B6838:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B6860:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002B691C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[19].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] + 11600u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_002B68F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002B68F8; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B68C4u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B68C4u) [[unlikely]] return; }
L_002B68C4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B68D4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B68D4u) [[unlikely]] return; }
L_002B68D4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B68F4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B68F4u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002B68F4u) [[unlikely]] return; }
L_002B68F4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002B68F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6900u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 56u, depth + 1u); else { c.pc = 0x002B4500u; return; } if (c.pc != 0x002B6900u) [[unlikely]] return; }
L_002B6900:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_002B6920; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B691Cu); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002B691Cu) [[unlikely]] return; }
L_002B691C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002B6920:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B6940:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 23728u);  c.pc = t; return; }
L_002B6950:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 48u);  c.pc = t; return; }
L_002B6960:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6988u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 68u, depth + 1u); else { c.pc = 0x002B46F0u; return; } if (c.pc != 0x002B6988u) [[unlikely]] return; }
L_002B6988:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11648u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B69ACu); st32((c.r[19].w[0] + 48u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_006D(c, 49u, depth + 1u); else { c.pc = 0x002B4420u; return; } if (c.pc != 0x002B69ACu) [[unlikely]] return; }
L_002B69AC:
    set32(c.r[17], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[17].d[0]) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_002B6A38; }
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 48u)));  goto L_002B69E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B69CCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B69CCu) [[unlikely]] return; }
L_002B69CC:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B69DCu); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B69DCu) [[unlikely]] return; }
L_002B69DC:
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 1;
L_002B69E0:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0] + 48u), c.r[17].w[0]);  goto L_002B6A34; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6A00u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B6A00u) [[unlikely]] return; }
L_002B6A00:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6A10u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B6A10u) [[unlikely]] return; }
L_002B6A10:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B6A30; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6A30u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002B6A30u) [[unlikely]] return; }
L_002B6A30:
    st32((c.r[19].w[0] + 48u), c.r[17].w[0]);
    c.budget -= 1;
L_002B6A34:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002B6A38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B6A60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002B6B1C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[19].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] + 11648u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_002B6AF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002B6AF8; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6AC4u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B6AC4u) [[unlikely]] return; }
L_002B6AC4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6AD4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B6AD4u) [[unlikely]] return; }
L_002B6AD4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B6AF4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6AF4u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002B6AF4u) [[unlikely]] return; }
L_002B6AF4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002B6AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6B00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 56u, depth + 1u); else { c.pc = 0x002B4500u; return; } if (c.pc != 0x002B6B00u) [[unlikely]] return; }
L_002B6B00:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_002B6B20; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6B1Cu); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002B6B1Cu) [[unlikely]] return; }
L_002B6B1C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002B6B20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B6B40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 23776u);  c.pc = t; return; }
L_002B6B50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6B68u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B6B68u) [[unlikely]] return; }
L_002B6B68:
    set32(c.r[2], ld32((c.r[28].w[0] - 27652u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[28].w[0] - 27652u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6B7Cu); c.r[16].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B6B7Cu) [[unlikely]] return; }
L_002B6B7C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002B6D54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6B8Cu); set32(c.r[4], ld32((c.r[28].w[0] - 27656u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x002B6B8Cu) [[unlikely]] return; }
L_002B6B8C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6D54; } }
L_002B6B98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 92u), 0u);  if (t) { goto L_002B6BBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6BA8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B6BA8u) [[unlikely]] return; }
L_002B6BA8:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6BBCu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B6BBCu) [[unlikely]] return; }
L_002B6BBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 15610u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 84u);  goto L_002B6C24; }
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st16((c.r[2].w[0] + 15610u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6BE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 413u, depth + 1u); else { c.pc = 0x002B70A0u; return; } if (c.pc != 0x002B6BE8u) [[unlikely]] return; }
L_002B6BE8:
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6BF4u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_006D(c, 412u, depth + 1u); else { c.pc = 0x002B7080u; return; } if (c.pc != 0x002B6BF4u) [[unlikely]] return; }
L_002B6BF4:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6C04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 407u, depth + 1u); else { c.pc = 0x002B6FE0u; return; } if (c.pc != 0x002B6C04u) [[unlikely]] return; }
L_002B6C04:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002B6CF0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 15612u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 15612u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002B6CF0; } }
L_002B6C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6C2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 413u, depth + 1u); else { c.pc = 0x002B70A0u; return; } if (c.pc != 0x002B6C2Cu) [[unlikely]] return; }
L_002B6C2C:
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6C38u); set32(c.r[5], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_006D(c, 412u, depth + 1u); else { c.pc = 0x002B7080u; return; } if (c.pc != 0x002B6C38u) [[unlikely]] return; }
L_002B6C38:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6C48u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 407u, depth + 1u); else { c.pc = 0x002B6FE0u; return; } if (c.pc != 0x002B6C48u) [[unlikely]] return; }
L_002B6C48:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 76u);  goto L_002B6CA4; }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6C5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 413u, depth + 1u); else { c.pc = 0x002B70A0u; return; } if (c.pc != 0x002B6C5Cu) [[unlikely]] return; }
L_002B6C5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0] + 15604u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6C74u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006D(c, 406u, depth + 1u); else { c.pc = 0x002B6FC0u; return; } if (c.pc != 0x002B6C74u) [[unlikely]] return; }
L_002B6C74:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6C84u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 407u, depth + 1u); else { c.pc = 0x002B6FE0u; return; } if (c.pc != 0x002B6C84u) [[unlikely]] return; }
L_002B6C84:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002B6CF0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 15612u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 15612u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002B6CF0; } }
L_002B6CA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6CACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 413u, depth + 1u); else { c.pc = 0x002B70A0u; return; } if (c.pc != 0x002B6CACu) [[unlikely]] return; }
L_002B6CAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0] + 15604u)));
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6CC4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006D(c, 412u, depth + 1u); else { c.pc = 0x002B7080u; return; } if (c.pc != 0x002B6CC4u) [[unlikely]] return; }
L_002B6CC4:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6CD4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 407u, depth + 1u); else { c.pc = 0x002B6FE0u; return; } if (c.pc != 0x002B6CD4u) [[unlikely]] return; }
L_002B6CD4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002B6CF0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 15612u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[2].w[0] + 15612u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_002B6CF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0] + 15604u)));
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6D08u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006D(c, 400u, depth + 1u); else { c.pc = 0x002B6F10u; return; } if (c.pc != 0x002B6D08u) [[unlikely]] return; }
L_002B6D08:
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002B6D54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6D1Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B6D1Cu) [[unlikely]] return; }
L_002B6D1C:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6D30u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B6D30u) [[unlikely]] return; }
L_002B6D30:
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B6D50; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6D50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B6D50u) [[unlikely]] return; }
L_002B6D50:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002B6D54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 15610u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6B98u | kUnwind; return; } goto L_002B6B98; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 15608u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B6E50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 15610u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B6E34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002B6E14; } }
L_002B6D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6D98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 413u, depth + 1u); else { c.pc = 0x002B70A0u; return; } if (c.pc != 0x002B6D98u) [[unlikely]] return; }
L_002B6D98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 15604u)));
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6DB4u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_006D(c, 412u, depth + 1u); else { c.pc = 0x002B7080u; return; } if (c.pc != 0x002B6DB4u) [[unlikely]] return; }
L_002B6DB4:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6DC4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 407u, depth + 1u); else { c.pc = 0x002B6FE0u; return; } if (c.pc != 0x002B6DC4u) [[unlikely]] return; }
L_002B6DC4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 1u);  goto L_002B6E10; }
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6DD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 413u, depth + 1u); else { c.pc = 0x002B70A0u; return; } if (c.pc != 0x002B6DD8u) [[unlikely]] return; }
L_002B6DD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], c.r[29].w[0] + 68u);
    set32(c.r[2], ld32((c.r[2].w[0] + 15604u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6DECu); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_006D(c, 400u, depth + 1u); else { c.pc = 0x002B6F10u; return; } if (c.pc != 0x002B6DECu) [[unlikely]] return; }
L_002B6DEC:
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6DF8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 407u, depth + 1u); else { c.pc = 0x002B6FE0u; return; } if (c.pc != 0x002B6DF8u) [[unlikely]] return; }
L_002B6DF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 15612u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[2].w[0] + 15612u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 6;
L_002B6E10:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_002B6E14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[2].w[0] + 15610u));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 72u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6D90u | kUnwind; return; } goto L_002B6D90; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st16((c.r[2].w[0] + 15610u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_002B6E34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 15604u)));
    st16((c.r[2].w[0] + 15608u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6E50u); st32((c.r[2].w[0] + 15604u), 0u);  if (depth < kMaxDepth) unit_006D(c, 396u, depth + 1u); else { c.pc = 0x002B6EA0u; return; } if (c.pc != 0x002B6E50u) [[unlikely]] return; }
L_002B6E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6E58u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B6E58u) [[unlikely]] return; }
L_002B6E58:
    set32(c.r[2], ld32((c.r[28].w[0] - 27652u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[16].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    st32((c.r[28].w[0] - 27652u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6E70u); c.r[16].d[0] = c.r[16].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B6E70u) [[unlikely]] return; }
L_002B6E70:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002B6E84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6E80u); set32(c.r[4], ld32((c.r[28].w[0] - 27656u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x002B6E80u) [[unlikely]] return; }
L_002B6E80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002B6E84:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B6EA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 28640u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { set32(c.r[7], 0u + 1u);  [[clang::musttail]] return unit_00A5(c, 164u, depth); }
L_002B6EC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_002B6EF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6EE8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B6EE8u) [[unlikely]] return; }
L_002B6EE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6EF8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B6EF8u) [[unlikely]] return; }
L_002B6EF8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B6F10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B6F98; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0])));  goto L_002B6F78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6F48u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B6F48u) [[unlikely]] return; }
L_002B6F48:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6F58u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B6F58u) [[unlikely]] return; }
L_002B6F58:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B6F74; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6F74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B6F74u) [[unlikely]] return; }
L_002B6F74:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_002B6F78:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_002B6F98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6F88u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B6F88u) [[unlikely]] return; }
L_002B6F88:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6F98u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B6F98u) [[unlikely]] return; }
L_002B6F98:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B6FC0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_002B6FE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B705C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_002B7044; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7014u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B7014u) [[unlikely]] return; }
L_002B7014:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7024u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B7024u) [[unlikely]] return; }
L_002B7024:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B7040; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7040u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B7040u) [[unlikely]] return; }
L_002B7040:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_002B7044:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002B7060; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B705Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002B705Cu) [[unlikely]] return; }
L_002B705C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002B7060:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B7080:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_002B70A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_002B70D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B70C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B70C8u) [[unlikely]] return; }
L_002B70C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B70D8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B70D8u) [[unlikely]] return; }
L_002B70D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B70F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B7100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B7160; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    set32(c.r[2], c.r[2].w[0] + 11704u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 28640u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7144u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002B7144u) [[unlikely]] return; }
L_002B7144:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002B7164; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7160u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002B7160u) [[unlikely]] return; }
L_002B7160:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B7164:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B7180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B71F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 11688u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002B71D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    set32(c.r[2], c.r[2].w[0] + 11704u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 28640u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B71D4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002B71D4u) [[unlikely]] return; }
L_002B71D4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002B71F4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B71F0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002B71F0u) [[unlikely]] return; }
L_002B71F0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B71F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B7210:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7254u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B7254u) [[unlikely]] return; }
L_002B7254:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (t) { goto L_002B7278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7268u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B7268u) [[unlikely]] return; }
L_002B7268:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7278u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B7278u) [[unlikely]] return; }
L_002B7278:
    set32(c.r[21], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002B7370; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[2], c.r[21].w[0] + 8u);
    set32(c.r[6], c.r[2].w[0] + 24u);
    set32(c.r[5], c.r[18].w[0] + 24u);
    set32(c.r[4], 0u + 6u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 8u));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 9u));
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 10u));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 26;
L_002B72EC:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B72ECu | kUnwind; return; } goto L_002B72EC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0] + 112u)));
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B7364; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7338u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B7338u) [[unlikely]] return; }
L_002B7338:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7348u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B7348u) [[unlikely]] return; }
L_002B7348:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002B73B0; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7364u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B7364u) [[unlikely]] return; }
L_002B7364:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B73B0; } }
L_002B7370:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002B73B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7380u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B7380u) [[unlikely]] return; }
L_002B7380:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7390u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B7390u) [[unlikely]] return; }
L_002B7390:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B73AC; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B73ACu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B73ACu) [[unlikely]] return; }
L_002B73AC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B73B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002B73E0:
    set32(c.r[29], c.r[29].w[0] - 1088u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7400u); set32(c.r[4], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002B7400u) [[unlikely]] return; }
L_002B7400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7408u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0083(c, 257u, depth + 1u); else { c.pc = 0x0030DD30u; return; } if (c.pc != 0x002B7408u) [[unlikely]] return; }
L_002B7408:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7414u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0082(c, 270u, depth + 1u); else { c.pc = 0x0030A660u; return; } if (c.pc != 0x002B7414u) [[unlikely]] return; }
L_002B7414:
    set32(c.r[3], ld32((c.r[29].w[0] + 404u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 396u)));  goto L_002B7440; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B742Cu); set32(c.r[4], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002B742Cu) [[unlikely]] return; }
L_002B742C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7438u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0083(c, 220u, depth + 1u); else { c.pc = 0x0030D840u; return; } if (c.pc != 0x002B7438u) [[unlikely]] return; }
L_002B7438:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B7500; } }
L_002B7440:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_002B7454; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B748C; } }
L_002B7454:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7460u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B7460u) [[unlikely]] return; }
L_002B7460:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 24600u);  if (t) { goto L_002B747C; } }
L_002B746C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_002B747C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002B7488; } }
L_002B747C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B746Cu | kUnwind; return; } goto L_002B746C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B7488:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002B748C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B74B0; } }
L_002B7494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B749Cu); set32(c.r[4], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002B749Cu) [[unlikely]] return; }
L_002B749C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B74A8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0083(c, 220u, depth + 1u); else { c.pc = 0x0030D840u; return; } if (c.pc != 0x002B74A8u) [[unlikely]] return; }
L_002B74A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B7500; } }
L_002B74B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B74B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B74B8u) [[unlikely]] return; }
L_002B74B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B74C8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B74C8u) [[unlikely]] return; }
L_002B74C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B74D0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0083(c, 194u, depth + 1u); else { c.pc = 0x0030D5D0u; return; } if (c.pc != 0x002B74D0u) [[unlikely]] return; }
L_002B74D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B74D8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B74D8u) [[unlikely]] return; }
L_002B74D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B74E8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B74E8u) [[unlikely]] return; }
L_002B74E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B74F0u); set32(c.r[4], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002B74F0u) [[unlikely]] return; }
L_002B74F0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B74FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0083(c, 220u, depth + 1u); else { c.pc = 0x0030D840u; return; } if (c.pc != 0x002B74FCu) [[unlikely]] return; }
L_002B74FC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002B7500:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1088u);  c.pc = t; return; }
L_002B7520:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7538u); set32(c.r[5], c.r[5].w[0] + 23824u);  if (depth < kMaxDepth) unit_0047(c, 323u, depth + 1u); else { c.pc = 0x0021EE60u; return; } if (c.pc != 0x002B7538u) [[unlikely]] return; }
L_002B7538:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B7550:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B75B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 11728u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002B7598; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 7728u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_002B7598; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7598u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x002B7598u) [[unlikely]] return; }
L_002B7598:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002B75B8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B75B4u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002B75B4u) [[unlikely]] return; }
L_002B75B4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B75B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B75D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 7728u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B75F4u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021DEA0u; return; } if (c.pc != 0x002B75F4u) [[unlikely]] return; }
L_002B75F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 11728u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B7620:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 23832u);  c.pc = t; return; }
L_002B7630:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7654u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 348u, depth + 1u); else { c.pc = 0x00282340u; return; } if (c.pc != 0x002B7654u) [[unlikely]] return; }
L_002B7654:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7660u); set32(c.r[4], ld32((c.r[2].w[0] + 23832u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002B7660u) [[unlikely]] return; }
L_002B7660:
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[19].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7674u); set32(c.r[6], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002B7674u) [[unlikely]] return; }
L_002B7674:
    c.f[1] = ld32((c.r[16].w[0] + 44u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], 0u + 1u);  if (t) { goto L_002B7690; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B7690:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B769Cu); set32(c.r[4], c.r[4].w[0] + 23840u);  if (depth < kMaxDepth) unit_0088(c, 253u, depth + 1u); else { c.pc = 0x00321DC0u; return; } if (c.pc != 0x002B769Cu) [[unlikely]] return; }
L_002B769C:
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[19].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B76B0u); set32(c.r[6], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002B76B0u) [[unlikely]] return; }
L_002B76B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 236u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002B7714; }
    set32(c.r[17], ld32((c.r[16].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002B7708; } }
L_002B76C8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 64u);
    set32(c.r[6], c.r[6].w[0] + 23850u);
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B76E4u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x002B76E4u) [[unlikely]] return; }
L_002B76E4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B76F0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0088(c, 223u, depth + 1u); else { c.pc = 0x00321A40u; return; } if (c.pc != 0x002B76F0u) [[unlikely]] return; }
L_002B76F0:
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[19].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7704u); set32(c.r[6], c.r[29].w[0] + 148u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002B7704u) [[unlikely]] return; }
L_002B7704:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002B7708:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B76C8u | kUnwind; return; } goto L_002B76C8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002B7714:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002B7730:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7754u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0060(c, 382u, depth + 1u); else { c.pc = 0x00282600u; return; } if (c.pc != 0x002B7754u) [[unlikely]] return; }
L_002B7754:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld16((c.r[19].w[0] + 218u));  goto L_002B7764; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B78B4; } }
L_002B7764:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 218u));
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_002B7814; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B78B4; } }
L_002B7778:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 212u)));  goto L_002B778C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B7798; } }
L_002B778C:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_002B7798:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 218u));
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 212u)));  goto L_002B77B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002B77BC; } }
L_002B77B0:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_002B77BC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B77CC; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002B78B4; }
L_002B77CC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002B77E8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B77E8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B78B4; } }
L_002B77E8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002B7814; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7800u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B7800u) [[unlikely]] return; }
L_002B7800:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B7810; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B78B4; } }
L_002B7810:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002B7814:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[19].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7778u | kUnwind; return; } goto L_002B7778; }
    set32(c.r[3], ld32((c.r[19].w[0] + 236u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 236u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B7838; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B78B4; } }
L_002B7838:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002B78B4; }
    set32(c.r[16], ld32((c.r[18].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[19].w[0] + 228u)));  if (t) { goto L_002B78A8; } }
L_002B784C:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], ld32((c.r[17].w[0])));  if (t) { goto L_002B7864; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002B78B4; }
L_002B7864:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002B7880; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B7880; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B78B4; } }
L_002B7880:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B78A8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7898u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B7898u) [[unlikely]] return; }
L_002B7898:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B78A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B78B4; } }
L_002B78A8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B784Cu | kUnwind; return; } goto L_002B784C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002B78B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B78D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B78F0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0060(c, 388u, depth + 1u); else { c.pc = 0x00282770u; return; } if (c.pc != 0x002B78F0u) [[unlikely]] return; }
L_002B78F0:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 218u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7904u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x002B7904u) [[unlikely]] return; }
L_002B7904:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002B7940; } }
L_002B790C:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 212u)));  goto L_002B7920; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002B792C; } }
L_002B7920:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_002B792C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B793Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B793Cu) [[unlikely]] return; }
L_002B793C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002B7940:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[18].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B790Cu | kUnwind; return; } goto L_002B790C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 236u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7964u); st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 356u, depth + 1u); else { c.pc = 0x001F6DD0u; return; } if (c.pc != 0x002B7964u) [[unlikely]] return; }
L_002B7964:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002B7998; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 232u)));  if (t) { goto L_002B798C; } }
L_002B7978:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B798Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B798Cu) [[unlikely]] return; }
L_002B798C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7978u | kUnwind; return; } goto L_002B7978; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002B7998:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B79B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B79D0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0060(c, 401u, depth + 1u); else { c.pc = 0x00282890u; return; } if (c.pc != 0x002B79D0u) [[unlikely]] return; }
L_002B79D0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002B7A18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B7A54; } }
L_002B79E0:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 212u)));  goto L_002B79F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B79FC; } }
L_002B79F0:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_002B79FC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002B7A18; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7A14u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B7A14u) [[unlikely]] return; }
L_002B7A14:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002B7A18:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 218u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B79E0u | kUnwind; return; } goto L_002B79E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 228u)));  if (t) { goto L_002B7A48; } }
L_002B7A30:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[16].w[0])));  if (t) { goto L_002B7A48; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7A48u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B7A48u) [[unlikely]] return; }
L_002B7A48:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7A30u | kUnwind; return; } goto L_002B7A30; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002B7A54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B7A70:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7A9Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 406u, depth + 1u); else { c.pc = 0x00282920u; return; } if (c.pc != 0x002B7A9Cu) [[unlikely]] return; }
L_002B7A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7AA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 104u, depth + 1u); else { c.pc = 0x0030CAE0u; return; } if (c.pc != 0x002B7AA4u) [[unlikely]] return; }
L_002B7AA4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002B7CA4; }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 216u));
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_002B7C94; }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 218u));
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[21], ld32((c.r[17].w[0] + 212u)));  goto L_002B7B64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[19].d[0] & 65535ull;  if (t) { goto L_002B7B48; } }
L_002B7AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7ADCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x002B7ADCu) [[unlikely]] return; }
L_002B7ADC:
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    set32(c.r[18], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7AF4u); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_003D(c, 186u, depth + 1u); else { c.pc = 0x001F5890u; return; } if (c.pc != 0x002B7AF4u) [[unlikely]] return; }
L_002B7AF4:
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7B04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x002B7B04u) [[unlikely]] return; }
L_002B7B04:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], c.r[20].w[0] + 1u);  goto L_002B7B44; }
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7B18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x002B7B18u) [[unlikely]] return; }
L_002B7B18:
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    set32(c.r[5], c.r[29].w[0] + 116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7B28u); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x002B7B28u) [[unlikely]] return; }
L_002B7B28:
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7B34u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x002B7B34u) [[unlikely]] return; }
L_002B7B34:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 220u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 220u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[20].w[0] + 1u);
    c.budget -= 4;
L_002B7B44:
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_002B7B48:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 218u));
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 120u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7AD4u | kUnwind; return; } goto L_002B7AD4; }
    st16((c.r[17].w[0] + 218u), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[21], ld32((c.r[17].w[0] + 212u)));
    c.budget -= 2;
L_002B7B64:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st16((c.r[17].w[0] + 216u), static_cast<std::uint16_t>(c.r[19].w[0]));  if (t) { goto L_002B7C08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7B74u); c.r[4].d[0] = ld16((c.r[17].w[0] + 216u));  if (depth < kMaxDepth) unit_003D(c, 177u, depth + 1u); else { c.pc = 0x001F5790u; return; } if (c.pc != 0x002B7B74u) [[unlikely]] return; }
L_002B7B74:
    st32((c.r[17].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002B7B9C; } }
L_002B7B80:
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[21].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7B94u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x002B7B94u) [[unlikely]] return; }
L_002B7B94:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_002B7B9C:
    c.r[20].d[0] = ld16((c.r[17].w[0] + 218u));
    c.r[2].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 212u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7B80u | kUnwind; return; } goto L_002B7B80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[17].w[0] + 216u));  if (t) { goto L_002B7BF0; } }
L_002B7BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7BC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x002B7BC0u) [[unlikely]] return; }
L_002B7BC0:
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7BD8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x002B7BD8u) [[unlikely]] return; }
L_002B7BD8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7BE4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x002B7BE4u) [[unlikely]] return; }
L_002B7BE4:
    set32(c.r[2], c.r[20].w[0] + 1u);
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[17].w[0] + 216u));
    c.budget -= 3;
L_002B7BF0:
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7BB8u | kUnwind; return; } goto L_002B7BB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002B7C10; } }
L_002B7C08:
    st32((c.r[17].w[0] + 212u), 0u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_002B7C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7C18u);  if (depth < kMaxDepth) unit_003D(c, 176u, depth + 1u); else { c.pc = 0x001F5770u; return; } if (c.pc != 0x002B7C18u) [[unlikely]] return; }
L_002B7C18:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B7C94; } }
L_002B7C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7C2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x002B7C2Cu) [[unlikely]] return; }
L_002B7C2C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7C48u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B7C48u) [[unlikely]] return; }
L_002B7C48:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002B7C94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7C5Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002B7C5Cu) [[unlikely]] return; }
L_002B7C5C:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7C70u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002B7C70u) [[unlikely]] return; }
L_002B7C70:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B7C90; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7C90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B7C90u) [[unlikely]] return; }
L_002B7C90:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002B7C94:
    c.r[2].d[0] = c.r[18].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7C24u | kUnwind; return; } goto L_002B7C24; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002B7CA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7CACu);  if (depth < kMaxDepth) unit_0083(c, 104u, depth + 1u); else { c.pc = 0x0030CAE0u; return; } if (c.pc != 0x002B7CACu) [[unlikely]] return; }
L_002B7CAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002B7D14; } }
L_002B7CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7CBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x002B7CBCu) [[unlikely]] return; }
L_002B7CBC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { c.r[3].d[0] = c.r[18].d[0] + 0ull;  goto L_002B7D18; }
    set32(c.r[25], ld32((c.r[17].w[0] + 224u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7CD8u); set32(c.r[4], c.r[17].w[0] + 224u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B7CD8u) [[unlikely]] return; }
L_002B7CD8:
    st32((c.r[2].w[0] + 8u), c.r[19].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 228u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 228u)));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { st32((c.r[17].w[0] + 232u), c.r[2].w[0]);  goto L_002B7CF8; }
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_002B7CF8:
    st32((c.r[17].w[0] + 228u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 236u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7D14u); st32((c.r[17].w[0] + 236u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0066(c, 313u, depth + 1u); else { c.pc = 0x0029B960u; return; } if (c.pc != 0x002B7D14u) [[unlikely]] return; }
L_002B7D14:
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002B7D18:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7CB4u | kUnwind; return; } goto L_002B7CB4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002B7D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7D68u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002B7D68u) [[unlikely]] return; }
L_002B7D68:
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 27476u)));  goto L_002B7E3C; }
    set32(c.r[16], ld32((c.r[28].w[0] - 30596u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7D98u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002B7D98u) [[unlikely]] return; }
L_002B7D98:
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7DB0u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002B7DB0u) [[unlikely]] return; }
L_002B7DB0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30596u)));
    set32(c.r[5], 0u + 1u);
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] - 12u), 0u);
    c.budget -= 8;
L_002B7DD0:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30596u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7DD0u | kUnwind; return; } goto L_002B7DD0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 27480u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));  goto L_002B7E24; }
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 27480u), c.r[2].w[0]);  if (t) { goto L_002B7E2C; } }
L_002B7E24:
    st32((c.r[28].w[0] - 27480u), c.r[2].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 2;
L_002B7E2C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 27476u)));
    c.budget -= 4;
L_002B7E3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7E5Cu); st32((c.r[16].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002B7E5Cu) [[unlikely]] return; }
L_002B7E5C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B7E70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7E8Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 429u, depth + 1u); else { c.pc = 0x00282B50u; return; } if (c.pc != 0x002B7E8Cu) [[unlikely]] return; }
L_002B7E8C:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 196u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7EA0u); st16((c.r[17].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0083(c, 105u, depth + 1u); else { c.pc = 0x0030CB00u; return; } if (c.pc != 0x002B7EA0u) [[unlikely]] return; }
L_002B7EA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7EA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 105u, depth + 1u); else { c.pc = 0x0030CB00u; return; } if (c.pc != 0x002B7EA8u) [[unlikely]] return; }
L_002B7EA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B7EC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], 0u + 256u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7EE0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002B7EE0u) [[unlikely]] return; }
L_002B7EE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002B7FAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7EF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 61u, depth + 1u); else { c.pc = 0x00284670u; return; } if (c.pc != 0x002B7EF0u) [[unlikely]] return; }
L_002B7EF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 11760u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15008u);
    st32((c.r[17].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 216u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 222u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 218u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 220u), static_cast<std::uint16_t>(0u));
    c.r[18].d[0] = ld16((c.r[17].w[0] + 216u));
    c.budget -= 14;
    { const bool t = c.r[18].sd[0] <= 0; set32(c.r[16], c.r[17].w[0] + 208u);  if (t) { goto L_002B7F60; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7F38u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002B7F38u) [[unlikely]] return; }
L_002B7F38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22944u);
    set32(c.r[6], c.r[6].w[0] + 22784u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7F58u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002B7F58u) [[unlikely]] return; }
L_002B7F58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002B7F64; } }
L_002B7F60:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_002B7F64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 15024u);
    set32(c.r[2], c.r[2].w[0] + 12000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 224u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 236u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 228u), 0u);
    set32(c.r[3], c.r[3].w[0] + 11968u);
    st32((c.r[17].w[0] + 232u), 0u);
    set32(c.r[2], c.r[2].w[0] + 11936u);
    st32((c.r[17].w[0] + 224u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 224u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st16((c.r[17].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
L_002B7FAC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B7FD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_006E(c, 5u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 11936u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_006E(c, 4u, depth); } }
    [[clang::musttail]] return unit_006E(c, 1u, depth);
}

}
