#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00CB[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11,
    0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 15, 16, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0,
    0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 35,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0,
    0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0,
    0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0,
    0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0,
    0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0,
    0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0,
    126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0,
    0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0,
    0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0,
    0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0,
    168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171,
    0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0,
    213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217,
    0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228,
    0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0,
    0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0,
    0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0,
    0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 263, 0,
    0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0,
    0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284,
    0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0,
    0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0,
    0, 300, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0,
    0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0,
    0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322,
    0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0,
    325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0,
    0, 339, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 346,
    0, 0, 0, 0, 347, 0, 0, 348, 0, 349, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361,
    0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0,
};

void unit_00CB(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0042C000;
    case 2u: goto L_0042C014;
    case 3u: goto L_0042C04C;
    case 4u: goto L_0042C060;
    case 5u: goto L_0042C080;
    case 6u: goto L_0042C090;
    case 7u: goto L_0042C0A0;
    case 8u: goto L_0042C0C8;
    case 9u: goto L_0042C0D4;
    case 10u: goto L_0042C0E8;
    case 11u: goto L_0042C0FC;
    case 12u: goto L_0042C10C;
    case 13u: goto L_0042C144;
    case 14u: goto L_0042C15C;
    case 15u: goto L_0042C168;
    case 16u: goto L_0042C16C;
    case 17u: goto L_0042C188;
    case 18u: goto L_0042C19C;
    case 19u: goto L_0042C1B0;
    case 20u: goto L_0042C1C4;
    case 21u: goto L_0042C1DC;
    case 22u: goto L_0042C1EC;
    case 23u: goto L_0042C200;
    case 24u: goto L_0042C214;
    case 25u: goto L_0042C228;
    case 26u: goto L_0042C240;
    case 27u: goto L_0042C250;
    case 28u: goto L_0042C264;
    case 29u: goto L_0042C278;
    case 30u: goto L_0042C28C;
    case 31u: goto L_0042C2A4;
    case 32u: goto L_0042C2CC;
    case 33u: goto L_0042C2EC;
    case 34u: goto L_0042C2F8;
    case 35u: goto L_0042C2FC;
    case 36u: goto L_0042C330;
    case 37u: goto L_0042C380;
    case 38u: goto L_0042C3D0;
    case 39u: goto L_0042C404;
    case 40u: goto L_0042C420;
    case 41u: goto L_0042C430;
    case 42u: goto L_0042C444;
    case 43u: goto L_0042C460;
    case 44u: goto L_0042C470;
    case 45u: goto L_0042C484;
    case 46u: goto L_0042C4A0;
    case 47u: goto L_0042C4B0;
    case 48u: goto L_0042C4C4;
    case 49u: goto L_0042C4E0;
    case 50u: goto L_0042C4F0;
    case 51u: goto L_0042C504;
    case 52u: goto L_0042C51C;
    case 53u: goto L_0042C538;
    case 54u: goto L_0042C548;
    case 55u: goto L_0042C55C;
    case 56u: goto L_0042C578;
    case 57u: goto L_0042C588;
    case 58u: goto L_0042C59C;
    case 59u: goto L_0042C5B8;
    case 60u: goto L_0042C5C8;
    case 61u: goto L_0042C5DC;
    case 62u: goto L_0042C5F8;
    case 63u: goto L_0042C608;
    case 64u: goto L_0042C61C;
    case 65u: goto L_0042C638;
    case 66u: goto L_0042C648;
    case 67u: goto L_0042C65C;
    case 68u: goto L_0042C678;
    case 69u: goto L_0042C688;
    case 70u: goto L_0042C69C;
    case 71u: goto L_0042C6B8;
    case 72u: goto L_0042C6C8;
    case 73u: goto L_0042C6DC;
    case 74u: goto L_0042C6F4;
    case 75u: goto L_0042C710;
    case 76u: goto L_0042C720;
    case 77u: goto L_0042C734;
    case 78u: goto L_0042C74C;
    case 79u: goto L_0042C768;
    case 80u: goto L_0042C778;
    case 81u: goto L_0042C78C;
    case 82u: goto L_0042C798;
    case 83u: goto L_0042C7A8;
    case 84u: goto L_0042C7B8;
    case 85u: goto L_0042C7DC;
    case 86u: goto L_0042C80C;
    case 87u: goto L_0042C828;
    case 88u: goto L_0042C840;
    case 89u: goto L_0042C870;
    case 90u: goto L_0042C898;
    case 91u: goto L_0042C8AC;
    case 92u: goto L_0042C8C0;
    case 93u: goto L_0042C8E0;
    case 94u: goto L_0042C900;
    case 95u: goto L_0042C910;
    case 96u: goto L_0042C930;
    case 97u: goto L_0042C950;
    case 98u: goto L_0042C960;
    case 99u: goto L_0042C994;
    case 100u: goto L_0042C9A0;
    case 101u: goto L_0042C9F4;
    case 102u: goto L_0042CA08;
    case 103u: goto L_0042CA40;
    case 104u: goto L_0042CA4C;
    case 105u: goto L_0042CA64;
    case 106u: goto L_0042CA80;
    case 107u: goto L_0042CA9C;
    case 108u: goto L_0042CAB0;
    case 109u: goto L_0042CACC;
    case 110u: goto L_0042CB04;
    case 111u: goto L_0042CB1C;
    case 112u: goto L_0042CB2C;
    case 113u: goto L_0042CB50;
    case 114u: goto L_0042CB74;
    case 115u: goto L_0042CB90;
    case 116u: goto L_0042CBB4;
    case 117u: goto L_0042CBCC;
    case 118u: goto L_0042CBF0;
    case 119u: goto L_0042CC00;
    case 120u: goto L_0042CC24;
    case 121u: goto L_0042CC30;
    case 122u: goto L_0042CC40;
    case 123u: goto L_0042CC50;
    case 124u: goto L_0042CC60;
    case 125u: goto L_0042CC70;
    case 126u: goto L_0042CC80;
    case 127u: goto L_0042CC90;
    case 128u: goto L_0042CCA0;
    case 129u: goto L_0042CCB0;
    case 130u: goto L_0042CCC0;
    case 131u: goto L_0042CCDC;
    case 132u: goto L_0042CCF8;
    case 133u: goto L_0042CD08;
    case 134u: goto L_0042CD14;
    case 135u: goto L_0042CD30;
    case 136u: goto L_0042CD74;
    case 137u: goto L_0042CD84;
    case 138u: goto L_0042CD9C;
    case 139u: goto L_0042CDC0;
    case 140u: goto L_0042CDE4;
    case 141u: goto L_0042CE00;
    case 142u: goto L_0042CE18;
    case 143u: goto L_0042CE40;
    case 144u: goto L_0042CE64;
    case 145u: goto L_0042CE80;
    case 146u: goto L_0042CEA4;
    case 147u: goto L_0042CEBC;
    case 148u: goto L_0042CEE0;
    case 149u: goto L_0042CEF0;
    case 150u: goto L_0042CF14;
    case 151u: goto L_0042CF20;
    case 152u: goto L_0042CF30;
    case 153u: goto L_0042CF40;
    case 154u: goto L_0042CFAC;
    case 155u: goto L_0042CFB4;
    case 156u: goto L_0042CFC4;
    case 157u: goto L_0042D044;
    case 158u: goto L_0042D058;
    case 159u: goto L_0042D064;
    case 160u: goto L_0042D09C;
    case 161u: goto L_0042D0B0;
    case 162u: goto L_0042D0BC;
    case 163u: goto L_0042D0F8;
    case 164u: goto L_0042D10C;
    case 165u: goto L_0042D118;
    case 166u: goto L_0042D160;
    case 167u: goto L_0042D174;
    case 168u: goto L_0042D180;
    case 169u: goto L_0042D1C8;
    case 170u: goto L_0042D1DC;
    case 171u: goto L_0042D27C;
    case 172u: goto L_0042D290;
    case 173u: goto L_0042D29C;
    case 174u: goto L_0042D2B8;
    case 175u: goto L_0042D2CC;
    case 176u: goto L_0042D32C;
    case 177u: goto L_0042D340;
    case 178u: goto L_0042D3A4;
    case 179u: goto L_0042D3E4;
    case 180u: goto L_0042D424;
    case 181u: goto L_0042D47C;
    case 182u: goto L_0042D4DC;
    case 183u: goto L_0042D50C;
    case 184u: goto L_0042D548;
    case 185u: goto L_0042D55C;
    case 186u: goto L_0042D5C0;
    case 187u: goto L_0042D5D4;
    case 188u: goto L_0042D668;
    case 189u: goto L_0042D67C;
    case 190u: goto L_0042D71C;
    case 191u: goto L_0042D730;
    case 192u: goto L_0042D788;
    case 193u: goto L_0042D79C;
    case 194u: goto L_0042D83C;
    case 195u: goto L_0042D850;
    case 196u: goto L_0042D98C;
    case 197u: goto L_0042DAF0;
    case 198u: goto L_0042DB40;
    case 199u: goto L_0042DB58;
    case 200u: goto L_0042DB70;
    case 201u: goto L_0042DB8C;
    case 202u: goto L_0042DBF0;
    case 203u: goto L_0042DC14;
    case 204u: goto L_0042DC30;
    case 205u: goto L_0042DC54;
    case 206u: goto L_0042DC6C;
    case 207u: goto L_0042DC90;
    case 208u: goto L_0042DCA0;
    case 209u: goto L_0042DCC4;
    case 210u: goto L_0042DCD0;
    case 211u: goto L_0042DCE0;
    case 212u: goto L_0042DCF0;
    case 213u: goto L_0042DD00;
    case 214u: goto L_0042DD24;
    case 215u: goto L_0042DD40;
    case 216u: goto L_0042DD64;
    case 217u: goto L_0042DD7C;
    case 218u: goto L_0042DDA0;
    case 219u: goto L_0042DDB0;
    case 220u: goto L_0042DDD4;
    case 221u: goto L_0042DDE0;
    case 222u: goto L_0042DDF0;
    case 223u: goto L_0042DE00;
    case 224u: goto L_0042DE24;
    case 225u: goto L_0042DE30;
    case 226u: goto L_0042DE54;
    case 227u: goto L_0042DE68;
    case 228u: goto L_0042DE7C;
    case 229u: goto L_0042DE88;
    case 230u: goto L_0042DEAC;
    case 231u: goto L_0042DEC0;
    case 232u: goto L_0042DED4;
    case 233u: goto L_0042DEE0;
    case 234u: goto L_0042DF04;
    case 235u: goto L_0042DF20;
    case 236u: goto L_0042DF30;
    case 237u: goto L_0042DF44;
    case 238u: goto L_0042DF50;
    case 239u: goto L_0042DF74;
    case 240u: goto L_0042DF88;
    case 241u: goto L_0042DF9C;
    case 242u: goto L_0042DFA8;
    case 243u: goto L_0042DFCC;
    case 244u: goto L_0042DFE8;
    case 245u: goto L_0042DFF8;
    case 246u: goto L_0042E00C;
    case 247u: goto L_0042E018;
    case 248u: goto L_0042E03C;
    case 249u: goto L_0042E050;
    case 250u: goto L_0042E064;
    case 251u: goto L_0042E070;
    case 252u: goto L_0042E094;
    case 253u: goto L_0042E0A8;
    case 254u: goto L_0042E0BC;
    case 255u: goto L_0042E0C8;
    case 256u: goto L_0042E0EC;
    case 257u: goto L_0042E100;
    case 258u: goto L_0042E114;
    case 259u: goto L_0042E120;
    case 260u: goto L_0042E144;
    case 261u: goto L_0042E158;
    case 262u: goto L_0042E16C;
    case 263u: goto L_0042E178;
    case 264u: goto L_0042E19C;
    case 265u: goto L_0042E1B0;
    case 266u: goto L_0042E1C0;
    case 267u: goto L_0042E1E0;
    case 268u: goto L_0042E210;
    case 269u: goto L_0042E224;
    case 270u: goto L_0042E238;
    case 271u: goto L_0042E268;
    case 272u: goto L_0042E290;
    case 273u: goto L_0042E2B4;
    case 274u: goto L_0042E2D0;
    case 275u: goto L_0042E2F4;
    case 276u: goto L_0042E30C;
    case 277u: goto L_0042E330;
    case 278u: goto L_0042E340;
    case 279u: goto L_0042E364;
    case 280u: goto L_0042E370;
    case 281u: goto L_0042E380;
    case 282u: goto L_0042E3C0;
    case 283u: goto L_0042E3DC;
    case 284u: goto L_0042E47C;
    case 285u: goto L_0042E498;
    case 286u: goto L_0042E4B0;
    case 287u: goto L_0042E4C0;
    case 288u: goto L_0042E508;
    case 289u: goto L_0042E514;
    case 290u: goto L_0042E538;
    case 291u: goto L_0042E54C;
    case 292u: goto L_0042E560;
    case 293u: goto L_0042E5B0;
    case 294u: goto L_0042E5D4;
    case 295u: goto L_0042E5F0;
    case 296u: goto L_0042E614;
    case 297u: goto L_0042E62C;
    case 298u: goto L_0042E650;
    case 299u: goto L_0042E660;
    case 300u: goto L_0042E684;
    case 301u: goto L_0042E690;
    case 302u: goto L_0042E6A0;
    case 303u: goto L_0042E6B0;
    case 304u: goto L_0042E6E8;
    case 305u: goto L_0042E708;
    case 306u: goto L_0042E75C;
    case 307u: goto L_0042E798;
    case 308u: goto L_0042E7D0;
    case 309u: goto L_0042E7E0;
    case 310u: goto L_0042E870;
    case 311u: goto L_0042E8D4;
    case 312u: goto L_0042E920;
    case 313u: goto L_0042E95C;
    case 314u: goto L_0042E9A0;
    case 315u: goto L_0042EA50;
    case 316u: goto L_0042EA74;
    case 317u: goto L_0042EA84;
    case 318u: goto L_0042EA98;
    case 319u: goto L_0042EABC;
    case 320u: goto L_0042EAC8;
    case 321u: goto L_0042EAE4;
    case 322u: goto L_0042EAFC;
    case 323u: goto L_0042EB08;
    case 324u: goto L_0042EBF4;
    case 325u: goto L_0042EC00;
    case 326u: goto L_0042EC18;
    case 327u: goto L_0042EC30;
    case 328u: goto L_0042EC3C;
    case 329u: goto L_0042ED64;
    case 330u: goto L_0042EDEC;
    case 331u: goto L_0042EE24;
    case 332u: goto L_0042F0A4;
    case 333u: goto L_0042F0E0;
    case 334u: goto L_0042F44C;
    case 335u: goto L_0042F45C;
    case 336u: goto L_0042F494;
    case 337u: goto L_0042F4F0;
    case 338u: goto L_0042F4F8;
    case 339u: goto L_0042F504;
    case 340u: goto L_0042F518;
    case 341u: goto L_0042F524;
    case 342u: goto L_0042F544;
    case 343u: goto L_0042F550;
    case 344u: goto L_0042F560;
    case 345u: goto L_0042F568;
    case 346u: goto L_0042F57C;
    case 347u: goto L_0042F590;
    case 348u: goto L_0042F59C;
    case 349u: goto L_0042F5A4;
    case 350u: goto L_0042F5AC;
    case 351u: goto L_0042F5C4;
    case 352u: goto L_0042F604;
    case 353u: goto L_0042F6A4;
    case 354u: goto L_0042F6B4;
    case 355u: goto L_0042F6F0;
    case 356u: goto L_0042F718;
    case 357u: goto L_0042F724;
    case 358u: goto L_0042F7F8;
    case 359u: goto L_0042F8B0;
    case 360u: goto L_0042F904;
    case 361u: goto L_0042F9FC;
    case 362u: goto L_0042FA08;
    case 363u: goto L_0042FA14;
    case 364u: goto L_0042FA60;
    case 365u: goto L_0042FC80;
    case 366u: goto L_0042FC90;
    case 367u: goto L_0042FDA0;
    case 368u: goto L_0042FDC0;
    case 369u: goto L_0042FDE4;
    case 370u: goto L_0042FEB0;
    case 371u: goto L_0042FEC0;
    case 372u: goto L_0042FF10;
    case 373u: goto L_0042FF90;
    case 374u: goto L_0042FFA0;
    case 375u: goto L_0042FFD0;
    case 376u: goto L_0042FFE8;
    default: bad_entry(c, 0x0042C000u); return;
    }
L_0042C000:
    set32(c.r[3], ld32((c.r[2].w[0] + 420u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 97u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[3].w[0] + 96u));  goto L_0042C0AC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    c.budget -= 1;
L_0042C014:
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], 0u + 1u);  goto L_0042C044; }
    c.f[2] = ld32((c.r[3].w[0] + 48u));
    c.f[1] = ld32((c.r[3].w[0] + 60u));
    c.f[0] = ld32((c.r[28].w[0] - 32564u));
    fpu_div(c, 1u, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0042C0A8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0042C044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C04Cu);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0042C04Cu) [[unlikely]] return; }
L_0042C04C:
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C060u); set32(c.r[6], c.r[6].w[0] + 16116u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x0042C060u) [[unlikely]] return; }
L_0042C060:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[14] = c.r[3].w[0];
    c.f[15] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C080u); c.f[12] = ld32((c.r[28].w[0] - 29052u));  if (depth < kMaxDepth) unit_00E2(c, 172u, depth + 1u); else { c.pc = 0x00489910u; return; } if (c.pc != 0x0042C080u) [[unlikely]] return; }
L_0042C080:
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C090u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042C090u) [[unlikely]] return; }
L_0042C090:
    set32(c.r[5], ld32((c.r[28].w[0] - 30184u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C0A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 275u, depth + 1u); else { c.pc = 0x00429C30u; return; } if (c.pc != 0x0042C0A0u) [[unlikely]] return; }
L_0042C0A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042C168; } }
L_0042C0A8:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 96u));
    c.budget -= 1;
L_0042C0AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 30184u)));  goto L_0042C104; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30184u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C0C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 275u, depth + 1u); else { c.pc = 0x00429C30u; return; } if (c.pc != 0x0042C0C8u) [[unlikely]] return; }
L_0042C0C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C0D4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0042C0D4u) [[unlikely]] return; }
L_0042C0D4:
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C0E8u); set32(c.r[6], c.r[6].w[0] + 16140u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x0042C0E8u) [[unlikely]] return; }
L_0042C0E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C0FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042C0FCu) [[unlikely]] return; }
L_0042C0FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042C168; } }
L_0042C104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C10Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 267u, depth + 1u); else { c.pc = 0x00429B40u; return; } if (c.pc != 0x0042C10Cu) [[unlikely]] return; }
L_0042C10C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[5], ld32((c.r[28].w[0] - 30184u)));  goto L_0042C150; }
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0042C14C; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30184u)));
    c.f[12] = c.f[22];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C144u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 271u, depth + 1u); else { c.pc = 0x00429BB0u; return; } if (c.pc != 0x0042C144u) [[unlikely]] return; }
L_0042C144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042C168; } }
L_0042C14C:
    set32(c.r[5], ld32((c.r[28].w[0] - 30184u)));
    c.budget -= 1;
L_0042C150:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C15Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 275u, depth + 1u); else { c.pc = 0x00429C30u; return; } if (c.pc != 0x0042C15Cu) [[unlikely]] return; }
L_0042C15C:
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C168u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0042C168u) [[unlikely]] return; }
L_0042C168:
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 1;
L_0042C16C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 184u)));  goto L_0042C2A8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 132u)));
    c.f[20] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C188u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0042C188u) [[unlikely]] return; }
L_0042C188:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 180u)));  goto L_0042C1E0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C19Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0042C19Cu) [[unlikely]] return; }
L_0042C19C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 29588u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C1B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042C1B0u) [[unlikely]] return; }
L_0042C1B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0042C1DC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C1C4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0042C1C4u) [[unlikely]] return; }
L_0042C1C4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C1DCu); set32(c.r[6], c.r[6].w[0] + 16040u);  if (depth < kMaxDepth) unit_00EC(c, 170u, depth + 1u); else { c.pc = 0x004B1B40u; return; } if (c.pc != 0x0042C1DCu) [[unlikely]] return; }
L_0042C1DC:
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 1;
L_0042C1E0:
    c.f[20] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C1ECu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0042C1ECu) [[unlikely]] return; }
L_0042C1EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 180u)));  goto L_0042C244; }
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C200u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0042C200u) [[unlikely]] return; }
L_0042C200:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 29588u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C214u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042C214u) [[unlikely]] return; }
L_0042C214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0042C240; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C228u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0042C228u) [[unlikely]] return; }
L_0042C228:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C240u); set32(c.r[6], c.r[6].w[0] + 16040u);  if (depth < kMaxDepth) unit_00EC(c, 170u, depth + 1u); else { c.pc = 0x004B1B40u; return; } if (c.pc != 0x0042C240u) [[unlikely]] return; }
L_0042C240:
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 1;
L_0042C244:
    c.f[20] = ld32((c.r[16].w[0] + 28u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C250u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0042C250u) [[unlikely]] return; }
L_0042C250:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0042C2A4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C264u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0042C264u) [[unlikely]] return; }
L_0042C264:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 29588u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C278u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042C278u) [[unlikely]] return; }
L_0042C278:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0042C2A4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C28Cu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0042C28Cu) [[unlikely]] return; }
L_0042C28C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C2A4u); set32(c.r[6], c.r[6].w[0] + 16040u);  if (depth < kMaxDepth) unit_00EC(c, 170u, depth + 1u); else { c.pc = 0x004B1B40u; return; } if (c.pc != 0x0042C2A4u) [[unlikely]] return; }
L_0042C2A4:
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 1;
L_0042C2A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_0042C2F0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C2CCu); set32(c.r[5], c.r[5].w[0] + 16051u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0042C2CCu) [[unlikely]] return; }
L_0042C2CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 161u);  goto L_0042C2E0; }
    set32(c.r[6], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_0042C2E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C2ECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x0042C2ECu) [[unlikely]] return; }
L_0042C2EC:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_0042C2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C2F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0042C2F8u) [[unlikely]] return; }
L_0042C2F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0042C2FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0042C330:
    c.f[2] = ld32((c.r[4].w[0] + 120u));
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    c.f[0] = ld32((c.r[28].w[0] - 30176u));
    c.f[3] = ld32((c.r[28].w[0] - 30172u));
    c.f[4] = ld32((c.r[28].w[0] - 25520u));
    fpu_div(c, 5u, c.f[2], c.f[0]);
    c.f[2] = 0u;
    c.facc = fp::add(c.f[2], c.f[3]);
    c.f[1] = ld32((c.r[2].w[0] + 352u));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[4], c.f[5]));
    c.f[0] = ld32((c.r[28].w[0] - 32104u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 15;
    { const bool t = c.r[5].d[0] == 0ull; c.f[0] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_0042C374; } }
    c.f[1] = ld32((c.r[28].w[0] - 32100u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 2;
L_0042C374:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0042C380:
    set32(c.r[3], ld32((c.r[28].w[0] - 26064u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 4u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0042C3C0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0042C3B4; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0042C3B4; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0042C3B4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0042C3C0; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0042C3C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0042C3D0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + 16163u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 26056u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] ^ 7ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C404u); c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x0042C404u) [[unlikely]] return; }
L_0042C404:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 241u);  goto L_0042C418; }
    set32(c.r[5], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 1;
L_0042C418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C420u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0042C420u) [[unlikely]] return; }
L_0042C420:
    st32((c.r[17].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C430u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0042C430u) [[unlikely]] return; }
L_0042C430:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C444u); set32(c.r[6], c.r[6].w[0] + 16168u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x0042C444u) [[unlikely]] return; }
L_0042C444:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 225u);  goto L_0042C458; }
    set32(c.r[5], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 1;
L_0042C458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C460u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0042C460u) [[unlikely]] return; }
L_0042C460:
    st32((c.r[17].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C470u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0042C470u) [[unlikely]] return; }
L_0042C470:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C484u); set32(c.r[6], c.r[6].w[0] + 16173u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x0042C484u) [[unlikely]] return; }
L_0042C484:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 209u);  goto L_0042C498; }
    set32(c.r[5], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 1;
L_0042C498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C4A0u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0042C4A0u) [[unlikely]] return; }
L_0042C4A0:
    st32((c.r[17].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C4B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0042C4B0u) [[unlikely]] return; }
L_0042C4B0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C4C4u); set32(c.r[6], c.r[6].w[0] + 16179u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x0042C4C4u) [[unlikely]] return; }
L_0042C4C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 193u);  goto L_0042C4D8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_0042C4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C4E0u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0042C4E0u) [[unlikely]] return; }
L_0042C4E0:
    st32((c.r[17].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C4F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0042C4F0u) [[unlikely]] return; }
L_0042C4F0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0042C508; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C504u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0042C504u) [[unlikely]] return; }
L_0042C504:
    st32((c.r[17].w[0] + 148u), 0u);
    c.budget -= 1;
L_0042C508:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C51Cu); set32(c.r[6], c.r[6].w[0] + 16185u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x0042C51Cu) [[unlikely]] return; }
L_0042C51C:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 177u);  goto L_0042C530; }
    set32(c.r[5], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_0042C530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C538u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0042C538u) [[unlikely]] return; }
L_0042C538:
    st32((c.r[17].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C548u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0042C548u) [[unlikely]] return; }
L_0042C548:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C55Cu); set32(c.r[6], c.r[6].w[0] + 16195u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x0042C55Cu) [[unlikely]] return; }
L_0042C55C:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 161u);  goto L_0042C570; }
    set32(c.r[5], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_0042C570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C578u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0042C578u) [[unlikely]] return; }
L_0042C578:
    st32((c.r[17].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C588u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0042C588u) [[unlikely]] return; }
L_0042C588:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C59Cu); set32(c.r[6], c.r[6].w[0] + 16204u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x0042C59Cu) [[unlikely]] return; }
L_0042C59C:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 145u);  goto L_0042C5B0; }
    set32(c.r[5], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_0042C5B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C5B8u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0042C5B8u) [[unlikely]] return; }
L_0042C5B8:
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C5C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0042C5C8u) [[unlikely]] return; }
L_0042C5C8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C5DCu); set32(c.r[6], c.r[6].w[0] + 16216u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x0042C5DCu) [[unlikely]] return; }
L_0042C5DC:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 129u);  goto L_0042C5F0; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_0042C5F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C5F8u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0042C5F8u) [[unlikely]] return; }
L_0042C5F8:
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C608u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0042C608u) [[unlikely]] return; }
L_0042C608:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C61Cu); set32(c.r[6], c.r[6].w[0] + 16226u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x0042C61Cu) [[unlikely]] return; }
L_0042C61C:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 113u);  goto L_0042C630; }
    set32(c.r[5], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_0042C630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C638u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0042C638u) [[unlikely]] return; }
L_0042C638:
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C648u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0042C648u) [[unlikely]] return; }
L_0042C648:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C65Cu); set32(c.r[6], c.r[6].w[0] + 16238u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x0042C65Cu) [[unlikely]] return; }
L_0042C65C:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 97u);  goto L_0042C670; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_0042C670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C678u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0042C678u) [[unlikely]] return; }
L_0042C678:
    st32((c.r[17].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C688u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0042C688u) [[unlikely]] return; }
L_0042C688:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C69Cu); set32(c.r[6], c.r[6].w[0] + 16248u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x0042C69Cu) [[unlikely]] return; }
L_0042C69C:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_0042C6B0; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0042C6B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C6B8u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0042C6B8u) [[unlikely]] return; }
L_0042C6B8:
    st32((c.r[17].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C6C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0042C6C8u) [[unlikely]] return; }
L_0042C6C8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0042C6E0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C6DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0042C6DCu) [[unlikely]] return; }
L_0042C6DC:
    st32((c.r[17].w[0] + 184u), 0u);
    c.budget -= 1;
L_0042C6E0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C6F4u); set32(c.r[6], c.r[6].w[0] + 16261u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x0042C6F4u) [[unlikely]] return; }
L_0042C6F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_0042C708; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_0042C708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C710u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0042C710u) [[unlikely]] return; }
L_0042C710:
    st32((c.r[17].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C720u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0042C720u) [[unlikely]] return; }
L_0042C720:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0042C738; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C734u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0042C734u) [[unlikely]] return; }
L_0042C734:
    st32((c.r[17].w[0] + 180u), 0u);
    c.budget -= 1;
L_0042C738:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C74Cu); set32(c.r[6], c.r[6].w[0] + 16272u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x0042C74Cu) [[unlikely]] return; }
L_0042C74C:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_0042C760; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_0042C760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C768u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0042C768u) [[unlikely]] return; }
L_0042C768:
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C778u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0042C778u) [[unlikely]] return; }
L_0042C778:
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));  goto L_0042C790; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C78Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0042C78Cu) [[unlikely]] return; }
L_0042C78C:
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 1;
L_0042C790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C798u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x0042C798u) [[unlikely]] return; }
L_0042C798:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C7A8u); set32(c.r[5], c.r[5].w[0] + 16282u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0042C7A8u) [[unlikely]] return; }
L_0042C7A8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 271u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C7B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x0042C7B8u) [[unlikely]] return; }
L_0042C7B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 271u));  goto L_0042C7E0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0042C7DC; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 271u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C7DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x0042C7DCu) [[unlikely]] return; }
L_0042C7DC:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 271u));
    c.budget -= 1;
L_0042C7E0:
    st8((c.r[17].w[0] + 132u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 132u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 156u)));  goto L_0042C818; }
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0042C814; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C80Cu); set32(c.r[6], c.r[6].w[0] + 16298u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x0042C80Cu) [[unlikely]] return; }
L_0042C80C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0042C82C; } }
L_0042C814:
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 1;
L_0042C818:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C828u); set32(c.r[6], c.r[6].w[0] + 16311u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x0042C828u) [[unlikely]] return; }
L_0042C828:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0042C82C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_0042C840:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 108u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C870u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x0042C870u) [[unlikely]] return; }
L_0042C870:
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_0042C890; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0042C890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C898u); set32(c.r[4], c.r[17].w[0] + 116u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0042C898u) [[unlikely]] return; }
L_0042C898:
    set32(c.r[4], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0042C8B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C8ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 74u, depth + 1u); else { c.pc = 0x004A8990u; return; } if (c.pc != 0x0042C8ACu) [[unlikely]] return; }
L_0042C8AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0042C8B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0042C8C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C8E0u); set32(c.r[5], c.r[5].w[0] + 16102u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0042C8E0u) [[unlikely]] return; }
L_0042C8E0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0042C904; }
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0042C900; } }
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C900u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042C900u) [[unlikely]] return; }
L_0042C900:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0042C904:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0042C910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C930u); set32(c.r[5], c.r[5].w[0] + 16102u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0042C930u) [[unlikely]] return; }
L_0042C930:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0042C954; }
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0042C950; } }
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C950u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042C950u) [[unlikely]] return; }
L_0042C950:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0042C954:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0042C960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 6;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 172u)));  goto L_0042C980; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0042C998; } }
L_0042C980:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0042C994; } }
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C994u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0042C994u) [[unlikely]] return; }
L_0042C994:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0042C998:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042C9A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0042CA64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 26688u);
    set32(c.r[3], c.r[3].w[0] + 26736u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 26760u);
    c.budget -= 11;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_0042C9EC; } }
    set32(c.r[5], c.r[5].w[0] + 56u);
    c.budget -= 1;
L_0042C9EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C9F4u); set32(c.r[4], ld32((c.r[28].w[0] - 25112u)));  if (depth < kMaxDepth) unit_00C3(c, 187u, depth + 1u); else { c.pc = 0x0040D4D0u; return; } if (c.pc != 0x0042C9F4u) [[unlikely]] return; }
L_0042C9F4:
    set32(c.r[4], c.r[17].w[0] + 116u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 104u);  goto L_0042CA0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CA08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0042CA08u) [[unlikely]] return; }
L_0042CA08:
    set32(c.r[2], c.r[17].w[0] + 104u);
    c.budget -= 1;
L_0042CA0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 56u);  goto L_0042CA24; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22912u);
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 4;
L_0042CA24:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0042CA44; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27824u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CA40u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C3(c, 34u, depth + 1u); else { c.pc = 0x0040C3D0u; return; } if (c.pc != 0x0042CA40u) [[unlikely]] return; }
L_0042CA40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042CA44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CA4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 290u, depth + 1u); else { c.pc = 0x00429DA0u; return; } if (c.pc != 0x0042CA4Cu) [[unlikely]] return; }
L_0042CA4C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0042CA68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CA64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0042CA64u) [[unlikely]] return; }
L_0042CA64:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042CA68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0042CA80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CA9Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 295u, depth + 1u); else { c.pc = 0x00429E60u; return; } if (c.pc != 0x0042CA9Cu) [[unlikely]] return; }
L_0042CA9C:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[16].w[0] + 56u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CAB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 84u, depth + 1u); else { c.pc = 0x0040C9F0u; return; } if (c.pc != 0x0042CAB0u) [[unlikely]] return; }
L_0042CAB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27824u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CACCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C3(c, 99u, depth + 1u); else { c.pc = 0x0040CBA0u; return; } if (c.pc != 0x0042CACCu) [[unlikely]] return; }
L_0042CACC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 22912u);
    set32(c.r[2], c.r[2].w[0] + 26688u);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 116u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 26736u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 26760u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CB04u); st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0042CB04u) [[unlikely]] return; }
L_0042CB04:
    st32((c.r[16].w[0] + 188u), 0u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0042CB14; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042CB14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CB1Cu); set32(c.r[4], ld32((c.r[28].w[0] - 25112u)));  if (depth < kMaxDepth) unit_00C3(c, 195u, depth + 1u); else { c.pc = 0x0040D5B0u; return; } if (c.pc != 0x0042CB1Cu) [[unlikely]] return; }
L_0042CB1C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CB2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042CB2Cu) [[unlikely]] return; }
L_0042CB2C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0042CB50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30180u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0042CB6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0042CB7C; } }
L_0042CB6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CB74u);  if (depth < kMaxDepth) unit_00CA(c, 308u, depth + 1u); else { c.pc = 0x00429FB0u; return; } if (c.pc != 0x0042CB74u) [[unlikely]] return; }
L_0042CB74:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0042CB7C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042CB90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CBB4u); set32(c.r[4], c.r[4].w[0] + 15760u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0042CBB4u) [[unlikely]] return; }
L_0042CBB4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0042CBC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0042CBD4; } }
L_0042CBC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CBCCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 309u, depth + 1u); else { c.pc = 0x00429FD0u; return; } if (c.pc != 0x0042CBCCu) [[unlikely]] return; }
L_0042CBCC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0042CBD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0042CBF0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30216u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0042CC00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30180u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0042CC1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0042CC24; } }
L_0042CC1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CC24u);  if (depth < kMaxDepth) unit_00CA(c, 312u, depth + 1u); else { c.pc = 0x0042A020u; return; } if (c.pc != 0x0042CC24u) [[unlikely]] return; }
L_0042CC24:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042CC30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30180u)));  c.pc = t; return; }
L_0042CC40:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042C960u | kUnwind; return; } goto L_0042C960; }
L_0042CC50:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042C9A0u | kUnwind; return; } goto L_0042C9A0; }
L_0042CC60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 104u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042C8C0u | kUnwind; return; } goto L_0042C8C0; }
L_0042CC70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 104u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042C910u | kUnwind; return; } goto L_0042C910; }
L_0042CC80:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 104u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042B530u | kUnwind; return; } [[clang::musttail]] return unit_00CA(c, 504u, depth); }
L_0042CC90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 104u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042C9A0u | kUnwind; return; } goto L_0042C9A0; }
L_0042CCA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 16528u);  c.pc = t; return; }
L_0042CCB0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 56u)));  [[clang::musttail]] return unit_00E5(c, 185u, depth); }
L_0042CCC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CCDCu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_00CA(c, 286u, depth + 1u); else { c.pc = 0x00429D50u; return; } if (c.pc != 0x0042CCDCu) [[unlikely]] return; }
L_0042CCDC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26056u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[5].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0042CD00; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CCF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 288u, depth + 1u); else { c.pc = 0x00429D80u; return; } if (c.pc != 0x0042CCF8u) [[unlikely]] return; }
L_0042CCF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0042CD18; } }
L_0042CD00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CD08u);  if (depth < kMaxDepth) unit_00CA(c, 288u, depth + 1u); else { c.pc = 0x00429D80u; return; } if (c.pc != 0x0042CD08u) [[unlikely]] return; }
L_0042CD08:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CD14u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00E5(c, 165u, depth + 1u); else { c.pc = 0x00495300u; return; } if (c.pc != 0x0042CD14u) [[unlikely]] return; }
L_0042CD14:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0042CD18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0042CD30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0042CD9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 26816u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0042CD78; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CD74u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042CD74u) [[unlikely]] return; }
L_0042CD74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042CD78:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CD84u); st32((c.r[17].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_00CA(c, 290u, depth + 1u); else { c.pc = 0x00429DA0u; return; } if (c.pc != 0x0042CD84u) [[unlikely]] return; }
L_0042CD84:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0042CDA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CD9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0042CD9Cu) [[unlikely]] return; }
L_0042CD9C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042CDA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0042CDC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CDE4u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 295u, depth + 1u); else { c.pc = 0x00429E60u; return; } if (c.pc != 0x0042CDE4u) [[unlikely]] return; }
L_0042CDE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 232u);
    set32(c.r[2], c.r[2].w[0] + 26816u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CE00u); st32((c.r[18].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0042CE00u) [[unlikely]] return; }
L_0042CE00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 56u), c.r[2].w[0]);  goto L_0042CE1C; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CE18u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E5(c, 250u, depth + 1u); else { c.pc = 0x00495CB0u; return; } if (c.pc != 0x0042CE18u) [[unlikely]] return; }
L_0042CE18:
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 1;
L_0042CE1C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0042CE40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30168u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0042CE5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0042CE6C; } }
L_0042CE5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CE64u);  if (depth < kMaxDepth) unit_00CA(c, 308u, depth + 1u); else { c.pc = 0x00429FB0u; return; } if (c.pc != 0x0042CE64u) [[unlikely]] return; }
L_0042CE64:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0042CE6C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042CE80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CEA4u); set32(c.r[4], c.r[4].w[0] + 16496u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0042CEA4u) [[unlikely]] return; }
L_0042CEA4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0042CEB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0042CEC4; } }
L_0042CEB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CEBCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 309u, depth + 1u); else { c.pc = 0x00429FD0u; return; } if (c.pc != 0x0042CEBCu) [[unlikely]] return; }
L_0042CEBC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0042CEC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0042CEE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30216u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0042CEF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30168u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0042CF0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0042CF14; } }
L_0042CF0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CF14u);  if (depth < kMaxDepth) unit_00CA(c, 312u, depth + 1u); else { c.pc = 0x0042A020u; return; } if (c.pc != 0x0042CF14u) [[unlikely]] return; }
L_0042CF14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042CF20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30168u)));  c.pc = t; return; }
L_0042CF30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 16552u);  c.pc = t; return; }
L_0042CF40:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 22;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0042DA98; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 20u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));  goto L_0042DA9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CFACu);  if (depth < kMaxDepth) unit_00CB(c, 292u, depth + 1u); else { c.pc = 0x0042E560u; return; } if (c.pc != 0x0042CFACu) [[unlikely]] return; }
L_0042CFAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CFB4u); set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  if (depth < kMaxDepth) unit_00EE(c, 88u, depth + 1u); else { c.pc = 0x004B8BB0u; return; } if (c.pc != 0x0042CFB4u) [[unlikely]] return; }
L_0042CFB4:
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CFC4u); set32(c.r[6], 0u + 25u);  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042CFC4u) [[unlikely]] return; }
L_0042CFC4:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0042CFD4; } }
    set32(c.r[4], 0u - c.r[4].w[0]);
    c.budget -= 1;
L_0042CFD4:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.f[27] = 0u;
    c.f[26] = c.f[27];
    c.r[18].d[0] = 0ull + 0ull;
    c.f[25] = c.f[27];
    c.r[21].d[0] = 0ull + 0ull;
    c.r[23].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 26896u)));
    c.f[24] = c.f[27];
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.f[23] = c.f[27];
    c.f[20] = c.f[27];
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    c.f[22] = c.f[27];
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1200u));
    c.r[16].d[0] = ld8((c.r[4].w[0] + 328u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 23;
    { const bool t = c.r[3].d[0] == 0ull; c.f[21] = c.f[27];  if (t) { goto L_0042D954; } }
    set32(c.r[20], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D044u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D044u) [[unlikely]] return; }
L_0042D044:
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 296u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D058u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D058u) [[unlikely]] return; }
L_0042D058:
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D064u); set32(c.r[4], c.r[29].w[0] + 296u);  if (depth < kMaxDepth) unit_00CC(c, 58u, depth + 1u); else { c.pc = 0x00430690u; return; } if (c.pc != 0x0042D064u) [[unlikely]] return; }
L_0042D064:
    c.f[1] = c.f[27];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0042D078; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0042D078:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], ld32((c.r[19].w[0] + 24u)));  goto L_0042D08C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_0042D268; } }
L_0042D08C:
    set32(c.r[6], 0u + 4u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D09Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D09Cu) [[unlikely]] return; }
L_0042D09C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D0B0u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D0B0u) [[unlikely]] return; }
L_0042D0B0:
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D0BCu); set32(c.r[4], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_00CC(c, 58u, depth + 1u); else { c.pc = 0x00430690u; return; } if (c.pc != 0x0042D0BCu) [[unlikely]] return; }
L_0042D0BC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0042D0D4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0042D0D4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], ld32((c.r[19].w[0] + 24u)));  goto L_0042D0E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0042D268; } }
L_0042D0E8:
    set32(c.r[6], 0u + 8u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D0F8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D0F8u) [[unlikely]] return; }
L_0042D0F8:
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 280u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D10Cu); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D10Cu) [[unlikely]] return; }
L_0042D10C:
    st32((c.r[29].w[0] + 284u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D118u); set32(c.r[4], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_00CC(c, 58u, depth + 1u); else { c.pc = 0x00430690u; return; } if (c.pc != 0x0042D118u) [[unlikely]] return; }
L_0042D118:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0042D130; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0042D130:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], ld32((c.r[19].w[0] + 24u)));  goto L_0042D150; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], 0u + 3u);  goto L_0042D148; }
    set32(c.r[17], 0u + 4u);
    c.budget -= 1;
L_0042D148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[19].w[0] + 24u)));  if (t) { goto L_0042D26C; } }
L_0042D150:
    set32(c.r[6], 0u + 6u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D160u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D160u) [[unlikely]] return; }
L_0042D160:
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D174u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D174u) [[unlikely]] return; }
L_0042D174:
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D180u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_00CC(c, 58u, depth + 1u); else { c.pc = 0x00430690u; return; } if (c.pc != 0x0042D180u) [[unlikely]] return; }
L_0042D180:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0042D198; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0042D198:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], ld32((c.r[19].w[0] + 24u)));  goto L_0042D1B8; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], 0u + 4u);  goto L_0042D1B0; }
    set32(c.r[17], 0u + 3u);
    c.budget -= 1;
L_0042D1B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042D268; } }
L_0042D1B8:
    set32(c.r[6], 0u + 26u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D1C8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D1C8u) [[unlikely]] return; }
L_0042D1C8:
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D1DCu); set32(c.r[6], 0u + 27u);  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D1DCu) [[unlikely]] return; }
L_0042D1DC:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0042D1EC; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_0042D1EC:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.r[5].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[3].d[0] = c.r[5].d[0] & 255ull;  goto L_0042D218; }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0042D20C; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_0042D20C:
    c.r[5].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
L_0042D218:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0042D25C; } }
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0042D230; } }
    set32(c.r[4], 0u - c.r[4].w[0]);
    c.budget -= 1;
L_0042D230:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 255ull;  goto L_0042D25C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0042D250; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_0042D250:
    c.r[4].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 3;
L_0042D25C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0042D268; } }
    set32(c.r[17], 0u + 5u);
    c.budget -= 1;
L_0042D268:
    set32(c.r[20], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 1;
L_0042D26C:
    set32(c.r[6], 0u + 12u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D27Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D27Cu) [[unlikely]] return; }
L_0042D27C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D290u); set32(c.r[6], 0u + 13u);  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D290u) [[unlikely]] return; }
L_0042D290:
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D29Cu); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_00CC(c, 58u, depth + 1u); else { c.pc = 0x00430690u; return; } if (c.pc != 0x0042D29Cu) [[unlikely]] return; }
L_0042D29C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.f[20] = c.f[0];  if (t) { goto L_0042D414; } }
    set32(c.r[20], ld32((c.r[19].w[0] + 24u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D2B8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D2B8u) [[unlikely]] return; }
L_0042D2B8:
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D2CCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D2CCu) [[unlikely]] return; }
L_0042D2CC:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0042D2DC; } }
    set32(c.r[4], 0u - c.r[4].w[0]);
    c.budget -= 1;
L_0042D2DC:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0042D304; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0042D2FC; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_0042D2FC:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0042D304:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[20], ld32((c.r[19].w[0] + 24u)));  goto L_0042D31C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[27] = fp::add(c.f[27], c.f[0]);  if (t) { goto L_0042D390; } }
L_0042D31C:
    set32(c.r[6], 0u + 10u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D32Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D32Cu) [[unlikely]] return; }
L_0042D32C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D340u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D340u) [[unlikely]] return; }
L_0042D340:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0042D350; } }
    set32(c.r[4], 0u - c.r[4].w[0]);
    c.budget -= 1;
L_0042D350:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0042D378; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0042D370; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_0042D370:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0042D378:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[26] = fp::sub(c.f[26], c.f[20]);  goto L_0042D394; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[27] = fp::sub(c.f[27], c.f[0]);
    c.budget -= 4;
L_0042D390:
    c.f[26] = fp::sub(c.f[26], c.f[20]);
    c.budget -= 1;
L_0042D394:
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D3A4u); set32(c.r[6], 0u + 14u);  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D3A4u) [[unlikely]] return; }
L_0042D3A4:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0042D3B4; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_0042D3B4:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));  goto L_0042D3D8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[22] = fp::add(c.f[22], c.f[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.budget -= 5;
L_0042D3D8:
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D3E4u); set32(c.r[6], 0u + 15u);  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D3E4u) [[unlikely]] return; }
L_0042D3E4:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0042D3F4; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_0042D3F4:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));  goto L_0042D418; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[22] = fp::sub(c.f[22], c.f[0]);
    c.budget -= 4;
L_0042D414:
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.budget -= 1;
L_0042D418:
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D424u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D424u) [[unlikely]] return; }
L_0042D424:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0042D434; } }
    set32(c.r[4], 0u - c.r[4].w[0]);
    c.budget -= 1;
L_0042D434:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0042D45C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0042D454; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_0042D454:
    c.r[4].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 2;
L_0042D45C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));  goto L_0042D470; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.budget -= 3;
L_0042D470:
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D47Cu); set32(c.r[6], 0u + 17u);  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D47Cu) [[unlikely]] return; }
L_0042D47C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0042D48C; } }
    set32(c.r[4], 0u - c.r[4].w[0]);
    c.budget -= 1;
L_0042D48C:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0042D4B4; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0042D4AC; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_0042D4AC:
    c.r[4].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 2;
L_0042D4B4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 28956u)));  goto L_0042D4C8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[21] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 28956u)));
    c.budget -= 3;
L_0042D4C8:
    set32(c.r[6], 0u + 19u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D4DCu); set32(c.r[20], c.r[2].w[0] + 28u);  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D4DCu) [[unlikely]] return; }
L_0042D4DC:
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[6], 0u + 20u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 25u, c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D50Cu);  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D50Cu) [[unlikely]] return; }
L_0042D50C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0042D51C; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_0042D51C:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[20], ld32((c.r[19].w[0] + 24u)));  goto L_0042D538; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[25] = c.r[2].w[0];
    set32(c.r[20], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
L_0042D538:
    set32(c.r[6], 0u + 8u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D548u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D548u) [[unlikely]] return; }
L_0042D548:
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D55Cu); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D55Cu) [[unlikely]] return; }
L_0042D55C:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0042D56C; } }
    set32(c.r[4], 0u - c.r[4].w[0]);
    c.budget -= 1;
L_0042D56C:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0042D594; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0042D58C; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_0042D58C:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0042D594:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[20], ld32((c.r[19].w[0] + 24u)));  goto L_0042D5B0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[22] = fp::sub(c.f[22], c.f[0]);
    set32(c.r[20], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 5;
L_0042D5B0:
    set32(c.r[6], 0u + 6u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D5C0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D5C0u) [[unlikely]] return; }
L_0042D5C0:
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D5D4u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D5D4u) [[unlikely]] return; }
L_0042D5D4:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0042D5E4; } }
    set32(c.r[4], 0u - c.r[4].w[0]);
    c.budget -= 1;
L_0042D5E4:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0042D60C; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0042D604; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_0042D604:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0042D60C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0042D624; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[22] = fp::add(c.f[22], c.f[0]);
    c.budget -= 4;
L_0042D624:
    c.f[24] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[24]));
    c.f[23] = c.f[24];
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[24];  if (t) { goto L_0042D64C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[28] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[19].w[0] + 24u)));  if (t) { goto L_0042D658; } }
L_0042D64C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[28] = c.r[2].w[0];
    set32(c.r[20], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
L_0042D658:
    set32(c.r[6], 0u + 18u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D668u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D668u) [[unlikely]] return; }
L_0042D668:
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D67Cu); set32(c.r[6], 0u + 18u);  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D67Cu) [[unlikely]] return; }
L_0042D67C:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0042D68C; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_0042D68C:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.r[5].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[3].d[0] = c.r[5].d[0] & 255ull;  goto L_0042D6B8; }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0042D6AC; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_0042D6AC:
    c.r[5].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
L_0042D6B8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0042D6FC; } }
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0042D6D0; } }
    set32(c.r[4], 0u - c.r[4].w[0]);
    c.budget -= 1;
L_0042D6D0:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 255ull;  goto L_0042D6FC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0042D6F0; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_0042D6F0:
    c.r[4].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 3;
L_0042D6FC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[20], ld32((c.r[19].w[0] + 24u)));  goto L_0042D70C; }
    c.f[23] = c.f[28];
    set32(c.r[20], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 2;
L_0042D70C:
    set32(c.r[6], 0u + 18u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D71Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D71Cu) [[unlikely]] return; }
L_0042D71C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D730u); set32(c.r[6], 0u + 18u);  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D730u) [[unlikely]] return; }
L_0042D730:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0042D740; } }
    set32(c.r[4], 0u - c.r[4].w[0]);
    c.budget -= 1;
L_0042D740:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0042D768; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0042D760; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_0042D760:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0042D768:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[20], ld32((c.r[19].w[0] + 24u)));  goto L_0042D778; }
    c.f[24] = c.f[28];
    set32(c.r[20], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 2;
L_0042D778:
    set32(c.r[6], 0u + 21u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D788u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D788u) [[unlikely]] return; }
L_0042D788:
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D79Cu); set32(c.r[6], 0u + 22u);  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D79Cu) [[unlikely]] return; }
L_0042D79C:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0042D7AC; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_0042D7AC:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.r[5].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[3].d[0] = c.r[5].d[0] & 255ull;  goto L_0042D7D8; }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0042D7CC; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_0042D7CC:
    c.r[5].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
L_0042D7D8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0042D81C; } }
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0042D7F0; } }
    set32(c.r[4], 0u - c.r[4].w[0]);
    c.budget -= 1;
L_0042D7F0:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 255ull;  goto L_0042D81C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0042D810; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_0042D810:
    c.r[4].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 3;
L_0042D81C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[20], ld32((c.r[19].w[0] + 24u)));  goto L_0042D82C; }
    c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[20], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 2;
L_0042D82C:
    set32(c.r[6], 0u + 21u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D83Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D83Cu) [[unlikely]] return; }
L_0042D83C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D850u); set32(c.r[6], 0u + 22u);  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D850u) [[unlikely]] return; }
L_0042D850:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0042D860; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_0042D860:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.r[5].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[3].d[0] = c.r[5].d[0] & 255ull;  goto L_0042D88C; }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0042D880; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_0042D880:
    c.r[5].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
L_0042D88C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0042D8D0; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0042D8A4; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_0042D8A4:
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] & 255ull;  goto L_0042D8D0; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0042D8C4; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_0042D8C4:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
L_0042D8D0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_0042D8F4; }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 424u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0042D8F0; } }
    c.r[18].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0042D8F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_0042D8F4:
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::max(c.f[26], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[26] = fp::min(c.f[2], c.f[0]);
    c.f[2] = fp::max(c.f[27], c.f[1]);
    c.f[27] = fp::min(c.f[2], c.f[0]);
    c.f[2] = fp::max(c.f[22], c.f[1]);
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull; c.f[22] = fp::min(c.f[2], c.f[0]);  if (t) { goto L_0042D93C; } }
    c.f[26] = fp::mul(c.f[26], c.f[1]);
    c.f[22] = fp::mul(c.f[22], c.f[1]);
    c.f[21] = fp::mul(c.f[21], c.f[1]);
    c.f[24] = fp::mul(c.f[24], c.f[1]);
    c.f[23] = fp::mul(c.f[23], c.f[1]);
    c.f[20] = fp::mul(c.f[20], c.f[1]);
    c.budget -= 6;
L_0042D93C:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 28u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 8u)));  goto L_0042D958; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[27] = c.r[3].w[0];
    c.f[25] = 0u;
    c.budget -= 3;
L_0042D954:
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_0042D958:
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], ld32((c.r[5].w[0] + 424u)));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));  goto L_0042D980; }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[11], ld32((c.r[19].w[0] + 8u)));  goto L_0042D9D4; }
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.budget -= 1;
L_0042D980:
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D98Cu); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x0042D98Cu) [[unlikely]] return; }
L_0042D98C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0042D99C; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_0042D99C:
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0042D9C4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0042D9BC; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_0042D9BC:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 2;
L_0042D9C4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0042D9D0; } }
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0042D9D0:
    set32(c.r[11], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_0042D9D4:
    c.r[4].d[0] = c.r[18].d[0] & 1ull;
    set32(c.r[10], c.r[4].w[0] << 3);
    c.r[3].d[0] = c.r[22].d[0] & 1ull;
    set32(c.r[8], c.r[3].w[0] << 6);
    c.r[4].d[0] = c.r[21].d[0] & 1ull;
    st32((c.r[11].w[0] + 1088u), c.f[27]);
    set32(c.r[9], 0u - 9u);
    set32(c.r[11], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[7], 0u - 65u);
    set32(c.r[5], 0u - 17u);
    set32(c.r[6], c.r[4].w[0] << 4);
    c.r[3].d[0] = c.r[23].d[0] & 1ull;
    st32((c.r[11].w[0] + 1092u), c.f[26]);
    set32(c.r[4], c.r[3].w[0] << 5);
    set32(c.r[11], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], 0u - 33u);
    st32((c.r[11].w[0] + 1100u), c.f[25]);
    set32(c.r[11], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[11].w[0] + 1180u), c.f[21]);
    set32(c.r[12], ld32((c.r[19].w[0] + 8u)));
    c.r[11].d[0] = ld8((c.r[12].w[0] + 1201u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[12].w[0] + 1201u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[9], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[9].w[0] + 1104u), c.r[17].w[0]);
    set32(c.r[9], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[9].w[0] + 1096u), c.f[22]);
    set32(c.r[9], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[9].w[0] + 1188u), c.f[23]);
    set32(c.r[9], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[9].w[0] + 1192u), c.f[24]);
    set32(c.r[9], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[9].w[0] + 1196u), c.f[20]);
    set32(c.r[10], ld32((c.r[19].w[0] + 8u)));
    c.r[9].d[0] = ld8((c.r[10].w[0] + 1201u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[10].w[0] + 1201u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[8], ld32((c.r[19].w[0] + 8u)));
    c.r[7].d[0] = ld8((c.r[8].w[0] + 1201u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 1201u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[19].w[0] + 8u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1201u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 1201u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 49;
L_0042DA98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 1;
L_0042DA9C:
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_0042DAF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0042DB58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 26864u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0042DB40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 27120u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0042DB40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25984u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DB40u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 139u, depth + 1u); else { c.pc = 0x001354E0u; return; } if (c.pc != 0x0042DB40u) [[unlikely]] return; }
L_0042DB40:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0042DB5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DB58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0042DB58u) [[unlikely]] return; }
L_0042DB58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042DB5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0042DB70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DB8Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 142u, depth + 1u); else { c.pc = 0x00135570u; return; } if (c.pc != 0x0042DB8Cu) [[unlikely]] return; }
L_0042DB8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 25984u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 27120u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 26864u);
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 16u), 0u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0]), c.r[4].w[0]);
    st32((c.r[17].w[0] + 24u), 0u);
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 8u), c.r[16].w[0]);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0042DBF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30164u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0042DC0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0042DC1C; } }
L_0042DC0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DC14u);  if (depth < kMaxDepth) unit_00CB(c, 293u, depth + 1u); else { c.pc = 0x0042E5B0u; return; } if (c.pc != 0x0042DC14u) [[unlikely]] return; }
L_0042DC14:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0042DC1C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042DC30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DC54u); set32(c.r[4], c.r[4].w[0] - 6568u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0042DC54u) [[unlikely]] return; }
L_0042DC54:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0042DC64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0042DC74; } }
L_0042DC64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DC6Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 295u, depth + 1u); else { c.pc = 0x0042E5F0u; return; } if (c.pc != 0x0042DC6Cu) [[unlikely]] return; }
L_0042DC6C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0042DC74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0042DC90:
    set32(c.r[2], ld32((c.r[28].w[0] - 30120u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0042DCA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30164u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0042DCBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0042DCC4; } }
L_0042DCBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DCC4u);  if (depth < kMaxDepth) unit_00CB(c, 299u, depth + 1u); else { c.pc = 0x0042E660u; return; } if (c.pc != 0x0042DCC4u) [[unlikely]] return; }
L_0042DCC4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042DCD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30164u)));  c.pc = t; return; }
L_0042DCE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 16608u);  c.pc = t; return; }
L_0042DCF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0042DD00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30160u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0042DD1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0042DD2C; } }
L_0042DD1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DD24u);  if (depth < kMaxDepth) unit_000B(c, 265u, depth + 1u); else { c.pc = 0x0012E4C0u; return; } if (c.pc != 0x0042DD24u) [[unlikely]] return; }
L_0042DD24:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0042DD2C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042DD40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DD64u); set32(c.r[4], c.r[4].w[0] + 16576u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0042DD64u) [[unlikely]] return; }
L_0042DD64:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0042DD74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0042DD84; } }
L_0042DD74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DD7Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 267u, depth + 1u); else { c.pc = 0x0012E500u; return; } if (c.pc != 0x0042DD7Cu) [[unlikely]] return; }
L_0042DD7C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0042DD84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0042DDA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 31252u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0042DDB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30160u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0042DDCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0042DDD4; } }
L_0042DDCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DDD4u);  if (depth < kMaxDepth) unit_000B(c, 271u, depth + 1u); else { c.pc = 0x0012E570u; return; } if (c.pc != 0x0042DDD4u) [[unlikely]] return; }
L_0042DDD4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042DDE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30160u)));  c.pc = t; return; }
L_0042DDF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 16672u);  c.pc = t; return; }
L_0042DE00:
    set32(c.r[29], c.r[29].w[0] - 400u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + 16704u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DE24u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x0042DE24u) [[unlikely]] return; }
L_0042DE24:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DE30u); set32(c.r[5], c.r[29].w[0] + 396u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0042DE30u) [[unlikely]] return; }
L_0042DE30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 396u));  goto L_0042DE58; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 346u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0042DE54; } }
    c.f[12] = ld32((c.r[29].w[0] + 396u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DE54u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0042DE54u) [[unlikely]] return; }
L_0042DE54:
    c.f[0] = ld32((c.r[29].w[0] + 396u));
    c.budget -= 1;
L_0042DE58:
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DE68u); st32((c.r[28].w[0] - 30152u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0042DE68u) [[unlikely]] return; }
L_0042DE68:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DE7Cu); set32(c.r[6], c.r[6].w[0] + 16729u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x0042DE7Cu) [[unlikely]] return; }
L_0042DE7C:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DE88u); set32(c.r[5], c.r[29].w[0] + 392u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0042DE88u) [[unlikely]] return; }
L_0042DE88:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 392u));  goto L_0042DEB0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 314u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0042DEAC; } }
    c.f[12] = ld32((c.r[29].w[0] + 392u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DEACu); set32(c.r[4], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0042DEACu) [[unlikely]] return; }
L_0042DEAC:
    c.f[0] = ld32((c.r[29].w[0] + 392u));
    c.budget -= 1;
L_0042DEB0:
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DEC0u); st32((c.r[28].w[0] - 30148u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0042DEC0u) [[unlikely]] return; }
L_0042DEC0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DED4u); set32(c.r[6], c.r[6].w[0] + 16745u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x0042DED4u) [[unlikely]] return; }
L_0042DED4:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DEE0u); set32(c.r[5], c.r[29].w[0] + 388u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0042DEE0u) [[unlikely]] return; }
L_0042DEE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[29].w[0] + 388u));  goto L_0042DF08; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 282u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0042DF04; } }
    c.f[12] = ld32((c.r[29].w[0] + 388u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DF04u); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0042DF04u) [[unlikely]] return; }
L_0042DF04:
    c.f[1] = ld32((c.r[29].w[0] + 388u));
    c.budget -= 1;
L_0042DF08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[28].w[0] - 32556u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DF20u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x0042DF20u) [[unlikely]] return; }
L_0042DF20:
    st32((c.r[28].w[0] - 25452u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DF30u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0042DF30u) [[unlikely]] return; }
L_0042DF30:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DF44u); set32(c.r[6], c.r[6].w[0] + 16761u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x0042DF44u) [[unlikely]] return; }
L_0042DF44:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DF50u); set32(c.r[5], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0042DF50u) [[unlikely]] return; }
L_0042DF50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 384u));  goto L_0042DF78; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 250u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0042DF74; } }
    c.f[12] = ld32((c.r[29].w[0] + 384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DF74u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0042DF74u) [[unlikely]] return; }
L_0042DF74:
    c.f[0] = ld32((c.r[29].w[0] + 384u));
    c.budget -= 1;
L_0042DF78:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DF88u); st32((c.r[28].w[0] - 30144u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0042DF88u) [[unlikely]] return; }
L_0042DF88:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DF9Cu); set32(c.r[6], c.r[6].w[0] + 16787u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x0042DF9Cu) [[unlikely]] return; }
L_0042DF9C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DFA8u); set32(c.r[5], c.r[29].w[0] + 380u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0042DFA8u) [[unlikely]] return; }
L_0042DFA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[29].w[0] + 380u));  goto L_0042DFD0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0042DFCC; } }
    c.f[12] = ld32((c.r[29].w[0] + 380u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DFCCu); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0042DFCCu) [[unlikely]] return; }
L_0042DFCC:
    c.f[1] = ld32((c.r[29].w[0] + 380u));
    c.budget -= 1;
L_0042DFD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[28].w[0] - 32556u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DFE8u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x0042DFE8u) [[unlikely]] return; }
L_0042DFE8:
    st32((c.r[28].w[0] - 25448u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DFF8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0042DFF8u) [[unlikely]] return; }
L_0042DFF8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E00Cu); set32(c.r[6], c.r[6].w[0] + 16801u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x0042E00Cu) [[unlikely]] return; }
L_0042E00C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E018u); set32(c.r[5], c.r[29].w[0] + 376u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0042E018u) [[unlikely]] return; }
L_0042E018:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 376u));  goto L_0042E040; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 186u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0042E03C; } }
    c.f[12] = ld32((c.r[29].w[0] + 376u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E03Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0042E03Cu) [[unlikely]] return; }
L_0042E03C:
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    c.budget -= 1;
L_0042E040:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E050u); st32((c.r[28].w[0] - 30140u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0042E050u) [[unlikely]] return; }
L_0042E050:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E064u); set32(c.r[6], c.r[6].w[0] + 16819u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x0042E064u) [[unlikely]] return; }
L_0042E064:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E070u); set32(c.r[5], c.r[29].w[0] + 372u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0042E070u) [[unlikely]] return; }
L_0042E070:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 372u));  goto L_0042E098; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 154u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0042E094; } }
    c.f[12] = ld32((c.r[29].w[0] + 372u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E094u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0042E094u) [[unlikely]] return; }
L_0042E094:
    c.f[0] = ld32((c.r[29].w[0] + 372u));
    c.budget -= 1;
L_0042E098:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E0A8u); st32((c.r[28].w[0] - 30136u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0042E0A8u) [[unlikely]] return; }
L_0042E0A8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E0BCu); set32(c.r[6], c.r[6].w[0] + 16837u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x0042E0BCu) [[unlikely]] return; }
L_0042E0BC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E0C8u); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0042E0C8u) [[unlikely]] return; }
L_0042E0C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 368u));  goto L_0042E0F0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 122u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0042E0EC; } }
    c.f[12] = ld32((c.r[29].w[0] + 368u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E0ECu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0042E0ECu) [[unlikely]] return; }
L_0042E0EC:
    c.f[0] = ld32((c.r[29].w[0] + 368u));
    c.budget -= 1;
L_0042E0F0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E100u); st32((c.r[28].w[0] - 30132u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0042E100u) [[unlikely]] return; }
L_0042E100:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E114u); set32(c.r[6], c.r[6].w[0] + 16865u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x0042E114u) [[unlikely]] return; }
L_0042E114:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E120u); set32(c.r[5], c.r[29].w[0] + 364u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0042E120u) [[unlikely]] return; }
L_0042E120:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 364u));  goto L_0042E148; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 90u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0042E144; } }
    c.f[12] = ld32((c.r[29].w[0] + 364u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E144u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0042E144u) [[unlikely]] return; }
L_0042E144:
    c.f[0] = ld32((c.r[29].w[0] + 364u));
    c.budget -= 1;
L_0042E148:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E158u); st32((c.r[28].w[0] - 30128u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0042E158u) [[unlikely]] return; }
L_0042E158:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E16Cu); set32(c.r[6], c.r[6].w[0] + 16884u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x0042E16Cu) [[unlikely]] return; }
L_0042E16C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E178u); set32(c.r[5], c.r[29].w[0] + 360u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0042E178u) [[unlikely]] return; }
L_0042E178:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 360u));  goto L_0042E1A0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 58u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0042E19C; } }
    c.f[12] = ld32((c.r[29].w[0] + 360u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E19Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0042E19Cu) [[unlikely]] return; }
L_0042E19C:
    c.f[0] = ld32((c.r[29].w[0] + 360u));
    c.budget -= 1;
L_0042E1A0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E1B0u); st32((c.r[28].w[0] - 30124u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0042E1B0u) [[unlikely]] return; }
L_0042E1B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_0042E1C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E1E0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000D(c, 142u, depth + 1u); else { c.pc = 0x00135570u; return; } if (c.pc != 0x0042E1E0u) [[unlikely]] return; }
L_0042E1E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 25984u);
    set32(c.r[2], c.r[2].w[0] + 27040u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[16], c.r[18].w[0] + 8u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0042E238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E210u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0042E210u) [[unlikely]] return; }
L_0042E210:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0042E228; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E224u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0042E224u) [[unlikely]] return; }
L_0042E224:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0042E228:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_0042E23C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E238u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0042E238u) [[unlikely]] return; }
L_0042E238:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0042E23C:
    set32(c.r[4], c.r[18].w[0] + 8u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[5], 0u + 16u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[18].w[0] + 24u), 0u);
    st32((c.r[18].w[0] + 28u), 0u);
    st32((c.r[18].w[0] + 32u), c.r[17].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E268u); st8((c.r[18].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00CB(c, 281u, depth + 1u); else { c.pc = 0x0042E380u; return; } if (c.pc != 0x0042E268u) [[unlikely]] return; }
L_0042E268:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0042E290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30156u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0042E2AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0042E2BC; } }
L_0042E2AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E2B4u);  if (depth < kMaxDepth) unit_000B(c, 265u, depth + 1u); else { c.pc = 0x0012E4C0u; return; } if (c.pc != 0x0042E2B4u) [[unlikely]] return; }
L_0042E2B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0042E2BC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042E2D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E2F4u); set32(c.r[4], c.r[4].w[0] + 16640u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0042E2F4u) [[unlikely]] return; }
L_0042E2F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0042E304; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0042E314; } }
L_0042E304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E30Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 267u, depth + 1u); else { c.pc = 0x0012E500u; return; } if (c.pc != 0x0042E30Cu) [[unlikely]] return; }
L_0042E30C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0042E314:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0042E330:
    set32(c.r[2], ld32((c.r[28].w[0] - 31252u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0042E340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30156u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0042E35C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0042E364; } }
L_0042E35C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E364u);  if (depth < kMaxDepth) unit_000B(c, 271u, depth + 1u); else { c.pc = 0x0012E570u; return; } if (c.pc != 0x0042E364u) [[unlikely]] return; }
L_0042E364:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042E370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30156u)));  c.pc = t; return; }
L_0042E380:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0042E498; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[17].w[0] << 4);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E3C0u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0042E3C0u) [[unlikely]] return; }
L_0042E3C0:
    st32((c.r[29].w[0] + 52u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_0042E418; } }
L_0042E3DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 56u)));  goto L_0042E408; }
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 9;
L_0042E408:
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 4;
L_0042E418:
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0042E3DCu | kUnwind; return; } goto L_0042E3DC; } }
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_0042E474; }
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 17;
L_0042E474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E47Cu);  if (depth < kMaxDepth) unit_00B2(c, 89u, depth + 1u); else { c.pc = 0x003C8C20u; return; } if (c.pc != 0x0042E47Cu) [[unlikely]] return; }
L_0042E47C:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0042E49C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0042E498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E498u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0042E498u) [[unlikely]] return; }
L_0042E498:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0042E49C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0042E4B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 16920u);  c.pc = t; return; }
L_0042E4C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 13u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 424u)));
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0042E550; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[5], c.r[3].w[0] + 140u);
    set32(c.r[3], ld32((c.r[3].w[0] + 144u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0042E54C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E508u); set32(c.r[6], c.r[6].w[0] + 16944u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x0042E508u) [[unlikely]] return; }
L_0042E508:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E514u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0042E514u) [[unlikely]] return; }
L_0042E514:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 76u));  goto L_0042E53C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 58u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0042E538; } }
    c.f[12] = ld32((c.r[29].w[0] + 76u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E538u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0042E538u) [[unlikely]] return; }
L_0042E538:
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    c.budget -= 1;
L_0042E53C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E54Cu); st32((c.r[16].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0042E54Cu) [[unlikely]] return; }
L_0042E54C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0042E550:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0042E560:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 124u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1157u));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[4].w[0] + 16u));  goto L_0042E580; }
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.budget -= 3;
L_0042E580:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0042E5A8; } }
    c.f[0] = fp::sub(c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 16u), c.f[0]);  if (t) { goto L_0042E5A8; } }
    st32((c.r[4].w[0] + 16u), c.f[1]);
    c.budget -= 1;
L_0042E5A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0042E5B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30120u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0042E5CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0042E5DC; } }
L_0042E5CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E5D4u);  if (depth < kMaxDepth) unit_000B(c, 265u, depth + 1u); else { c.pc = 0x0012E4C0u; return; } if (c.pc != 0x0042E5D4u) [[unlikely]] return; }
L_0042E5D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0042E5DC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042E5F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E614u); set32(c.r[4], c.r[4].w[0] + 16904u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0042E614u) [[unlikely]] return; }
L_0042E614:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0042E624; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0042E634; } }
L_0042E624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E62Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 267u, depth + 1u); else { c.pc = 0x0012E500u; return; } if (c.pc != 0x0042E62Cu) [[unlikely]] return; }
L_0042E62C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0042E634:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0042E650:
    set32(c.r[2], ld32((c.r[28].w[0] - 31252u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0042E660:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30120u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0042E67C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0042E684; } }
L_0042E67C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E684u);  if (depth < kMaxDepth) unit_000B(c, 271u, depth + 1u); else { c.pc = 0x0012E570u; return; } if (c.pc != 0x0042E684u) [[unlikely]] return; }
L_0042E684:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042E690:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30120u)));  c.pc = t; return; }
L_0042E6A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 17024u);  c.pc = t; return; }
L_0042E6B0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 16u)));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E6E8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 367u, depth + 1u); else { c.pc = 0x0042FDA0u; return; } if (c.pc != 0x0042E6E8u) [[unlikely]] return; }
L_0042E6E8:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    c.f[13] = ld32((c.r[29].w[0] + 132u));
    c.f[14] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1876u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E708u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_008E(c, 177u, depth + 1u); else { c.pc = 0x0033AD10u; return; } if (c.pc != 0x0042E708u) [[unlikely]] return; }
L_0042E708:
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[3].w[0] - 1728u);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    set32(c.r[6], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1876u)));
    c.f[12] = ld32((c.r[3].w[0]));
    c.f[13] = ld32((c.r[3].w[0] + 4u));
    c.f[14] = ld32((c.r[3].w[0] + 8u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E75Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_008E(c, 177u, depth + 1u); else { c.pc = 0x0033AD10u; return; } if (c.pc != 0x0042E75Cu) [[unlikely]] return; }
L_0042E75C:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = 0u;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[13] = c.r[2].w[0];
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1876u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E798u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 174u, depth + 1u); else { c.pc = 0x0033AB80u; return; } if (c.pc != 0x0042E798u) [[unlikely]] return; }
L_0042E798:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0042E7D0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 128u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0042E7E0:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), c.f[31]);
    st32((c.r[29].w[0] + 40u), c.f[30]);
    st32((c.r[29].w[0] + 36u), c.f[29]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.f[27] = c.f[12];
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    fpu_compare(c, fp::key(c.f[27]) <= fp::key(c.f[0]));
    c.budget -= 22;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_0042FA14; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_0042FA18; }
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 124u)));  goto L_0042EC80; }
    c.f[0] = ld32((c.r[28].w[0] - 32044u));
    fpu_div(c, 12u, c.f[27], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E870u);  if (depth < kMaxDepth) unit_00AB(c, 392u, depth + 1u); else { c.pc = 0x003AF2A8u; return; } if (c.pc != 0x0042E870u) [[unlikely]] return; }
L_0042E870:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 6u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[5], c.f[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    mmi::pmaxw(c.r[4], c.r[5], c.r[4]);
    mmi::pminw(c.r[16], c.r[4], c.r[3]);
    c.f[0] = c.r[16].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 27u, c.f[27], c.f[0]);
    c.budget -= 17;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_0042FA14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[0] = c.r[3].w[0];
    c.f[25] = ld32((c.r[28].w[0] - 32040u));
    c.f[24] = ld32((c.r[28].w[0] - 32036u));
    c.f[26] = c.r[4].w[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[21] = fp::mul(c.f[0], c.f[27]);  if (t) { goto L_0042EC68; } }
L_0042E8D4:
    c.f[3] = fp::sqrt(c.f[26]);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[5], c.r[5].w[0] + 16976u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 31552u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[29].w[0] + 576u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[5].w[0]));
    set32(c.r[2], 0u + 12u);
    c.f[28] = fp::mul(c.f[0], c.f[3]);
    c.f[1] = ld32((c.r[4].w[0]));
    st32((c.r[18].w[0] + 92u), c.f[2]);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[18].w[0] + 100u), c.f[1]);  if (t) { goto L_0042E93C; } }
L_0042E920:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0042E920u | kUnwind; return; } goto L_0042E920; } }
L_0042E93C:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.f[12] = ld32((c.r[29].w[0] + 576u));
    c.f[13] = ld32((c.r[29].w[0] + 580u));
    c.f[14] = ld32((c.r[29].w[0] + 584u));
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1876u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E95Cu); set32(c.r[5], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_008E(c, 177u, depth + 1u); else { c.pc = 0x0033AD10u; return; } if (c.pc != 0x0042E95Cu) [[unlikely]] return; }
L_0042E95C:
    c.f[2] = ld32((c.r[29].w[0] + 584u));
    c.f[1] = ld32((c.r[29].w[0] + 580u));
    c.f[0] = ld32((c.r[29].w[0] + 576u));
    st32((c.r[18].w[0] + 32u), c.f[0]);
    st32((c.r[18].w[0] + 36u), c.f[1]);
    st32((c.r[18].w[0] + 40u), c.f[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 132u)));
    c.budget -= 9;
    if (c.r[2].sd[0] < 0) { c.f[3] = ld32((c.r[18].w[0] + 100u));  goto L_0042EA24; }
    st32((c.r[29].w[0] + 588u), 0u);
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 588u);
    set32(c.r[6], ld32((c.r[18].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E9A0u); set32(c.r[5], c.r[2].w[0] + 400u);  if (depth < kMaxDepth) unit_00CB(c, 366u, depth + 1u); else { c.pc = 0x0042FC90u; return; } if (c.pc != 0x0042E9A0u) [[unlikely]] return; }
L_0042E9A0:
    c.f[2] = ld32((c.r[29].w[0] + 588u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  goto L_0042E9C0; }
    st32((c.r[29].w[0] + 588u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 2;
L_0042E9C0:
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[29].w[0] + 588u));
    c.f[4] = c.r[2].w[0];
    c.f[3] = fp::sub(c.f[4], c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    st32((c.r[29].w[0] + 588u), c.f[1]);
    st32((c.r[18].w[0] + 136u), c.f[3]);
    c.f[2] = ld32((c.r[29].w[0] + 588u));
    c.f[1] = ld32((c.r[28].w[0] - 32304u));
    c.f[0] = 0u;
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[18].w[0] + 136u), c.f[2]);
    st32((c.r[18].w[0] + 136u), c.f[1]);
    c.f[0] = fp::max(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 136u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[4]);
    st32((c.r[18].w[0] + 136u), c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 100u));
    c.budget -= 25;
L_0042EA24:
    c.f[1] = ld32((c.r[28].w[0] - 32032u));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::sub(c.f[1], c.f[3]);
    c.f[2] = ld32((c.r[18].w[0] + 136u));
    c.f[12] = ld32((c.r[28].w[0] - 32564u));
    c.f[13] = c.f[21];
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EA50u); st32((c.r[18].w[0] + 100u), c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x0042EA50u) [[unlikely]] return; }
L_0042EA50:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.f[23] = c.f[0];
    c.f[20] = ld32((c.r[18].w[0] + 96u));
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    c.f[1] = ld32((c.r[2].w[0] + 408u));
    c.f[0] = ld32((c.r[2].w[0] + 400u));
    c.f[12] = c.f[1] ^ fp::kSign;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EA74u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_00AB(c, 429u, depth + 1u); else { c.pc = 0x003AF728u; return; } if (c.pc != 0x0042EA74u) [[unlikely]] return; }
L_0042EA74:
    c.f[22] = c.f[0];
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EA84u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_000C(c, 28u, depth + 1u); else { c.pc = 0x00130470u; return; } if (c.pc != 0x0042EA84u) [[unlikely]] return; }
L_0042EA84:
    c.f[0] = fp::max(c.f[0], c.f[25]);
    c.f[0] = fp::min(c.f[0], c.f[24]);
    c.f[13] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EA98u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_000C(c, 28u, depth + 1u); else { c.pc = 0x00130470u; return; } if (c.pc != 0x0042EA98u) [[unlikely]] return; }
L_0042EA98:
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[22]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[23], c.f[0]));
    st32((c.r[18].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 100u));
    c.f[0] = ld32((c.r[28].w[0] - 32028u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EABCu); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x0042EABCu) [[unlikely]] return; }
L_0042EABC:
    c.f[12] = ld32((c.r[18].w[0] + 96u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EAC8u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x0042EAC8u) [[unlikely]] return; }
L_0042EAC8:
    c.f[3] = ld32((c.r[18].w[0] + 92u));
    c.f[2] = ld32((c.r[18].w[0] + 100u));
    c.f[1] = ld32((c.r[28].w[0] - 32028u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[23] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EAE4u); c.f[12] = fp::sub(c.f[1], c.f[2]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x0042EAE4u) [[unlikely]] return; }
L_0042EAE4:
    c.f[3] = ld32((c.r[18].w[0] + 92u));
    c.f[2] = ld32((c.r[18].w[0] + 100u));
    c.f[1] = ld32((c.r[28].w[0] - 32028u));
    c.f[22] = fp::mul(c.f[3], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EAFCu); c.f[12] = fp::sub(c.f[1], c.f[2]);  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x0042EAFCu) [[unlikely]] return; }
L_0042EAFC:
    c.f[12] = ld32((c.r[18].w[0] + 96u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EB08u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x0042EB08u) [[unlikely]] return; }
L_0042EB08:
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3480000u);
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[3] = ld32((c.r[18].w[0] + 84u));
    c.f[2] = fp::add(c.f[2], c.f[22]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[2] = ld32((c.r[18].w[0] + 92u));
    c.f[6] = c.r[2].w[0];
    c.facc = fp::mul(c.f[6], c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[28], c.f[3]));
    c.f[5] = fp::mul(c.f[3], c.f[27]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[2] = ld32((c.r[18].w[0] + 28u));
    c.f[3] = fp::add(c.f[1], c.f[0]);
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.facc = fp::mul(c.f[6], c.f[2]);
    c.f[2] = ld32((c.r[18].w[0] + 20u));
    c.f[3] = fp::add(c.f[0], c.f[23]);
    c.f[1] = ld32((c.r[18].w[0] + 88u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[28], c.f[1]));
    c.f[4] = fp::mul(c.f[0], c.f[27]);
    c.f[1] = ld32((c.r[18].w[0] + 80u));
    c.facc = fp::mul(c.f[6], c.f[2]);
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[28], c.f[1]));
    c.f[1] = fp::mul(c.f[1], c.f[27]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    c.f[1] = ld32((c.r[28].w[0] - 32028u));
    c.f[0] = fp::add(c.f[0], c.f[5]);
    st32((c.r[18].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[18].w[0] + 88u), c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 84u));
    c.f[2] = ld32((c.r[18].w[0] + 88u));
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    c.f[4] = fp::mul(c.f[3], c.f[27]);
    c.f[3] = fp::mul(c.f[2], c.f[27]);
    c.f[2] = fp::mul(c.f[0], c.f[27]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 100u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 59;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EBF4u); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x0042EBF4u) [[unlikely]] return; }
L_0042EBF4:
    c.f[12] = ld32((c.r[18].w[0] + 96u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EC00u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x0042EC00u) [[unlikely]] return; }
L_0042EC00:
    c.f[22] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = ld32((c.r[18].w[0] + 100u));
    c.f[1] = ld32((c.r[28].w[0] - 32028u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EC18u); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x0042EC18u) [[unlikely]] return; }
L_0042EC18:
    c.f[20] = c.f[0];
    c.f[0] = ld32((c.r[18].w[0] + 100u));
    c.f[1] = ld32((c.r[28].w[0] - 32028u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EC30u); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x0042EC30u) [[unlikely]] return; }
L_0042EC30:
    c.f[12] = ld32((c.r[18].w[0] + 96u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EC3Cu); c.f[23] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x0042EC3Cu) [[unlikely]] return; }
L_0042EC3C:
    c.f[2] = fp::mul(c.f[0], c.f[23]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.f[1] = fp::mul(c.f[22], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[18].w[0] + 44u), c.f[1]);
    st32((c.r[18].w[0] + 48u), c.f[20]);
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.budget -= 11;
L_0042EC68:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0042E8D4u | kUnwind; return; } goto L_0042E8D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042FA14; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 124u)));
    c.budget -= 1;
L_0042EC80:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1194u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0042EC98; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1163u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0042EC98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0042ECD8; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1956u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0042ECB8; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1957u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0042ECB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0042ECC8; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1958u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0042ECC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0042ECD8; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1959u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0042ECD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 108u), 0u);  goto L_0042ED14; }
    st32((c.r[18].w[0] + 104u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[18].w[0] + 108u));
    c.f[1] = 0u;
    c.f[20] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[27]);
    st32((c.r[18].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 120u));
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[27], c.f[20]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 120u), c.f[0]);  if (t) { goto L_0042ED3C; } }
    st32((c.r[18].w[0] + 108u), 0u);
    c.budget -= 1;
L_0042ED14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.f[1] = 0u;
    c.f[20] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[27]);
    st32((c.r[18].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 120u));
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[27], c.f[20]));
    st32((c.r[18].w[0] + 120u), c.f[0]);
    c.budget -= 10;
L_0042ED3C:
    c.f[0] = ld32((c.r[18].w[0] + 120u));
    c.f[1] = 0u;
    c.f[0] = fp::max(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 120u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[20]);
    st32((c.r[18].w[0] + 120u), c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042ED64u); set32(c.r[4], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_00EE(c, 312u, depth + 1u); else { c.pc = 0x004BABD0u; return; } if (c.pc != 0x0042ED64u) [[unlikely]] return; }
L_0042ED64:
    c.f[2] = ld32((c.r[29].w[0] + 480u));
    c.f[1] = ld32((c.r[29].w[0] + 484u));
    c.f[0] = ld32((c.r[29].w[0] + 488u));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = fp::sqrt(c.f[0]);
    c.f[2] = fp::sub(c.f[0], c.f[20]);
    c.f[1] = ld32((c.r[28].w[0] - 32076u));
    c.f[0] = ld32((c.r[18].w[0] + 112u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[18].w[0] + 112u));  goto L_0042EDA4; }
    st32((c.r[18].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 112u));
    c.budget -= 2;
L_0042EDA4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[18].w[0] + 112u));  goto L_0042EDC4; }
    c.f[0] = fp::sub(c.f[1], c.f[27]);
    st32((c.r[18].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 112u));
    c.budget -= 3;
L_0042EDC4:
    c.f[1] = 0u;
    c.f[0] = fp::max(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 112u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 560u);
    st32((c.r[18].w[0] + 112u), c.f[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EDECu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 367u, depth + 1u); else { c.pc = 0x0042FDA0u; return; } if (c.pc != 0x0042EDECu) [[unlikely]] return; }
L_0042EDEC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 544u);
    set32(c.r[6], c.r[29].w[0] + 512u);
    set32(c.r[7], c.r[29].w[0] + 528u);
    st32((c.r[29].w[0] + 544u), 0u);
    st32((c.r[29].w[0] + 548u), 0u);
    st32((c.r[29].w[0] + 552u), 0u);
    st32((c.r[29].w[0] + 528u), 0u);
    st32((c.r[29].w[0] + 532u), 0u);
    st32((c.r[29].w[0] + 536u), 0u);
    st32((c.r[29].w[0] + 512u), 0u);
    st32((c.r[29].w[0] + 516u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EE24u); st32((c.r[29].w[0] + 520u), 0u);  if (depth < kMaxDepth) unit_00CB(c, 303u, depth + 1u); else { c.pc = 0x0042E6B0u; return; } if (c.pc != 0x0042EE24u) [[unlikely]] return; }
L_0042EE24:
    c.f[1] = ld32((c.r[18].w[0] + 120u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[29].w[0] + 544u));  goto L_0042EED8; }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.f[3] = ld32((c.r[2].w[0] + 100u));
    c.f[4] = ld32((c.r[2].w[0] + 96u));
    c.f[2] = ld32((c.r[2].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[5] = c.f[3];  if (t) { goto L_0042EE5C; } }
    c.f[5] = c.f[0];
    c.budget -= 1;
L_0042EE5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1C80000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = fp::mul(c.f[1], c.f[5]);  goto L_0042EE7C; }
    c.f[5] = c.f[0];
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    c.budget -= 2;
L_0042EE7C:
    c.f[0] = ld32((c.r[28].w[0] - 32024u));
    c.f[5] = fp::mul(c.f[0], c.f[1]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[0] = ld32((c.r[28].w[0] - 32564u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = fp::mul(c.f[3], c.f[3]);  goto L_0042EEB0; }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::mul(c.f[5], c.f[0]);  if (t) { goto L_0042EEBC; } }
    c.f[0] = fp::mul(c.f[3], c.f[3]);
    c.budget -= 1;
L_0042EEB0:
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[2] = fp::mul(c.f[5], c.f[0]);
    c.budget -= 3;
L_0042EEBC:
    c.f[1] = ld32((c.r[29].w[0] + 548u));
    c.f[0] = ld32((c.r[29].w[0] + 564u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 548u), c.f[1]);
    st32((c.r[29].w[0] + 564u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 544u));
    c.budget -= 7;
L_0042EED8:
    c.f[0] = ld32((c.r[29].w[0] + 512u));
    c.f[1] = ld32((c.r[29].w[0] + 548u));
    c.f[3] = ld32((c.r[29].w[0] + 516u));
    c.f[4] = fp::sub(c.f[2], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 552u));
    c.f[0] = ld32((c.r[29].w[0] + 520u));
    c.f[3] = fp::sub(c.f[1], c.f[3]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[4] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[6] = ld32((c.r[18].w[0] + 20u));
    c.f[5] = ld32((c.r[18].w[0] + 32u));
    c.f[7] = fp::sub(c.f[4], c.f[0]);
    c.f[8] = fp::sub(c.f[6], c.f[5]);
    c.f[4] = ld32((c.r[18].w[0] + 28u));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[3] = fp::sqrt(c.f[3]);
    c.f[6] = fp::sub(c.f[4], c.f[0]);
    c.facc = fp::mul(c.f[8], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[7]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[6], c.f[6]));
    c.f[4] = fp::sqrt(c.f[4]);
    c.f[0] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 30;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[29].w[0] + 464u), 0u);  goto L_0042EF80; }
    fpu_div(c, 5u, c.f[20], c.f[4]);
    set32(c.r[2], c.r[29].w[0] + 464u);
    c.f[0] = fp::mul(c.f[8], c.f[5]);
    st32((c.r[29].w[0] + 464u), c.f[0]);
    c.f[4] = fp::mul(c.f[7], c.f[5]);
    c.f[0] = fp::mul(c.f[6], c.f[5]);
    st32((c.r[29].w[0] + 468u), c.f[4]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 472u), c.f[0]);  if (t) { goto L_0042EF8C; } }
    st32((c.r[29].w[0] + 464u), 0u);
    c.budget -= 1;
L_0042EF80:
    set32(c.r[2], c.r[29].w[0] + 464u);
    st32((c.r[29].w[0] + 468u), 0u);
    st32((c.r[29].w[0] + 472u), 0u);
    c.budget -= 3;
L_0042EF8C:
    c.f[10] = ld32((c.r[2].w[0] + 4u));
    c.f[9] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = ld32((c.r[18].w[0] + 112u));
    c.f[10] = fp::mul(c.f[10], c.f[3]);
    c.f[9] = fp::add(c.f[9], c.f[10]);
    c.f[9] = fp::sub(c.f[9], c.f[1]);
    c.f[9] = fp::mul(c.f[9], c.f[0]);
    c.f[11] = fp::add(c.f[1], c.f[9]);
    c.f[7] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[9] = ld32((c.r[18].w[0] + 40u));
    c.f[10] = fp::mul(c.f[7], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[7] = ld32((c.r[18].w[0] + 32u));
    c.f[3] = fp::add(c.f[9], c.f[10]);
    c.f[3] = fp::sub(c.f[3], c.f[2]);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[1] = fp::add(c.f[7], c.f[1]);
    c.f[8] = ld32((c.r[29].w[0] + 544u));
    st32((c.r[29].w[0] + 548u), c.f[11]);
    st32((c.r[29].w[0] + 552u), c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[8]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = fp::add(c.f[8], c.f[1]);
    st32((c.r[29].w[0] + 544u), c.f[1]);
    c.f[6] = ld32((c.r[29].w[0] + 536u));
    c.f[2] = ld32((c.r[18].w[0] + 52u));
    c.f[5] = ld32((c.r[29].w[0] + 532u));
    c.f[3] = ld32((c.r[18].w[0] + 48u));
    c.f[2] = fp::sub(c.f[2], c.f[6]);
    c.f[3] = fp::sub(c.f[3], c.f[5]);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[4] = ld32((c.r[29].w[0] + 528u));
    c.f[1] = ld32((c.r[18].w[0] + 44u));
    c.f[3] = fp::add(c.f[5], c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = fp::add(c.f[6], c.f[2]);
    c.f[1] = fp::add(c.f[4], c.f[0]);
    st32((c.r[29].w[0] + 532u), c.f[3]);
    st32((c.r[29].w[0] + 536u), c.f[2]);
    st32((c.r[29].w[0] + 528u), c.f[1]);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[4] = fp::sqrt(c.f[4]);
    c.f[0] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 53;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0042F07C; } }
    fpu_div(c, 0u, c.f[20], c.f[4]);
    c.f[4] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = fp::mul(c.f[3], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[2], c.f[0]);  if (t) { goto L_0042F08C; } }
L_0042F07C:
    c.f[4] = 0u;
    c.f[1] = c.f[4];
    c.f[0] = c.f[4];
    c.budget -= 4;
L_0042F08C:
    set32(c.r[3], c.r[29].w[0] + 496u);
    set32(c.r[2], 0u + 12u);
    st32((c.r[29].w[0] + 528u), c.f[4]);
    st32((c.r[29].w[0] + 532u), c.f[1]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 536u), c.f[0]);  if (t) { goto L_0042F0C0; } }
L_0042F0A4:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0042F0A4u | kUnwind; return; } goto L_0042F0A4; } }
L_0042F0C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.f[12] = ld32((c.r[29].w[0] + 496u));
    c.f[13] = ld32((c.r[29].w[0] + 500u));
    c.f[14] = ld32((c.r[29].w[0] + 504u));
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1876u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F0E0u); set32(c.r[5], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_008E(c, 177u, depth + 1u); else { c.pc = 0x0033AD10u; return; } if (c.pc != 0x0042F0E0u) [[unlikely]] return; }
L_0042F0E0:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.f[0] = ld32((c.r[18].w[0] + 104u));  goto L_0042F170; }
    c.f[0] = ld32((c.r[29].w[0] + 512u));
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 516u));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 520u));
    st32((c.r[18].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    st32((c.r[18].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    st32((c.r[18].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    st32((c.r[18].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 544u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 548u));
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 552u));
    st32((c.r[18].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[18].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    st32((c.r[18].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 528u));
    st32((c.r[18].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 532u));
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 536u));
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 52u), c.f[0]);  if (t) { goto L_0042FA14; } }
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.budget -= 1;
L_0042F170:
    c.f[5] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[5]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[18].w[0] + 104u));  goto L_0042F274; }
    c.f[0] = fp::max(c.f[0], c.f[5]);
    c.f[9] = fp::min(c.f[0], c.f[20]);
    c.f[2] = ld32((c.r[29].w[0] + 544u));
    c.f[0] = ld32((c.r[29].w[0] + 512u));
    c.f[7] = ld32((c.r[29].w[0] + 516u));
    c.f[1] = ld32((c.r[29].w[0] + 548u));
    c.f[4] = fp::sub(c.f[2], c.f[0]);
    c.f[6] = ld32((c.r[29].w[0] + 520u));
    c.f[0] = ld32((c.r[29].w[0] + 552u));
    c.f[1] = fp::sub(c.f[1], c.f[7]);
    c.f[3] = fp::sub(c.f[0], c.f[6]);
    c.f[8] = ld32((c.r[29].w[0] + 512u));
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[10] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.facc = fp::add(c.f[5], c.f[20]);
    c.f[9] = fp::add(c.facc, fp::mul(c.f[0], c.f[9]));
    c.f[10] = fp::sqrt(c.f[10]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[2] = fp::sqrt(c.f[2]);
    c.f[0] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 29;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[29].w[0] + 448u), c.f[5]);  goto L_0042F228; }
    fpu_div(c, 2u, c.f[20], c.f[2]);
    set32(c.r[2], c.r[29].w[0] + 448u);
    c.f[0] = fp::mul(c.f[4], c.f[2]);
    st32((c.r[29].w[0] + 448u), c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 452u), c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 456u), c.f[0]);  if (t) { goto L_0042F234; } }
    st32((c.r[29].w[0] + 448u), c.f[5]);
    c.budget -= 1;
L_0042F228:
    set32(c.r[2], c.r[29].w[0] + 448u);
    st32((c.r[29].w[0] + 452u), c.f[5]);
    st32((c.r[29].w[0] + 456u), c.f[5]);
    c.budget -= 3;
L_0042F234:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[10]);
    c.f[0] = fp::mul(c.f[0], c.f[9]);
    c.f[0] = fp::add(c.f[7], c.f[0]);
    st32((c.r[29].w[0] + 548u), c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[10]);
    c.f[2] = fp::mul(c.f[2], c.f[10]);
    c.f[0] = fp::mul(c.f[0], c.f[9]);
    c.f[1] = fp::add(c.f[8], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[9]);
    c.f[0] = fp::add(c.f[6], c.f[2]);
    st32((c.r[29].w[0] + 544u), c.f[1]);
    st32((c.r[29].w[0] + 552u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 104u));
    c.budget -= 16;
L_0042F274:
    c.f[0] = ld32((c.r[28].w[0] - 32020u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[18].w[0] + 12u)));  goto L_0042F358; }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[6] = 0u;
    c.f[0] = fp::max(c.f[0], c.f[6]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[2].w[0];
    c.f[7] = fp::min(c.f[0], c.f[5]);
    c.f[1] = ld32((c.r[29].w[0] + 500u));
    c.f[0] = ld32((c.r[29].w[0] + 564u));
    c.f[3] = ld32((c.r[29].w[0] + 548u));
    c.f[2] = ld32((c.r[29].w[0] + 532u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.facc = fp::add(c.f[6], c.f[3]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[7], c.f[0]));
    st32((c.r[29].w[0] + 548u), c.f[0]);
    c.f[0] = fp::sub(c.f[5], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[7]);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 528u));
    c.f[4] = ld32((c.r[29].w[0] + 536u));
    st32((c.r[29].w[0] + 532u), c.f[2]);
    c.f[0] = fp::sub(c.f[6], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[7]);
    c.f[3] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[6], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[7]);
    c.f[1] = fp::add(c.f[4], c.f[0]);
    st32((c.r[29].w[0] + 528u), c.f[3]);
    st32((c.r[29].w[0] + 536u), c.f[1]);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[4] = fp::sqrt(c.f[4]);
    c.f[0] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 40;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = c.f[6];  goto L_0042F344; }
    fpu_div(c, 0u, c.f[20], c.f[4]);
    c.f[6] = fp::mul(c.f[3], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_0042F348; } }
    c.f[2] = c.f[6];
    c.budget -= 1;
L_0042F344:
    c.f[0] = c.f[6];
    c.budget -= 1;
L_0042F348:
    st32((c.r[29].w[0] + 528u), c.f[6]);
    st32((c.r[29].w[0] + 532u), c.f[2]);
    st32((c.r[29].w[0] + 536u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 4;
L_0042F358:
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.f[5] = ld32((c.r[3].w[0] + 96u));
    c.f[4] = ld32((c.r[3].w[0] + 100u));
    c.f[3] = ld32((c.r[3].w[0] + 104u));
    c.f[2] = ld32((c.r[2].w[0] + 400u));
    c.f[1] = ld32((c.r[2].w[0] + 404u));
    c.f[0] = ld32((c.r[2].w[0] + 408u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = ld32((c.r[18].w[0] + 124u));
    c.f[9] = c.r[2].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[8] = fp::mul(c.f[9], c.f[0]);
    fpu_compare(c, fp::key(c.f[8]) < fp::key(c.f[2]));
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0] + 124u), c.f[8]);  if (t) { goto L_0042F430; } }
    c.f[0] = ld32((c.r[18].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::max(c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[7] = c.r[2].w[0];
    c.f[0] = fp::min(c.f[0], c.f[7]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.f[6] = ld32((c.r[18].w[0] + 120u));
    c.f[5] = fp::sub(c.f[7], c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    c.f[6] = fp::sub(c.f[7], c.f[6]);
    c.f[5] = fp::mul(c.f[5], c.f[6]);
    c.f[7] = fp::mul(c.f[9], c.f[5]);
    c.f[4] = ld32((c.r[2].w[0] + 404u));
    c.f[2] = ld32((c.r[2].w[0] + 408u));
    c.f[1] = ld32((c.r[29].w[0] + 548u));
    c.f[6] = fp::mul(c.f[7], c.f[4]);
    c.f[5] = fp::mul(c.f[7], c.f[2]);
    c.f[2] = fp::mul(c.f[6], c.f[8]);
    c.f[4] = ld32((c.r[2].w[0] + 400u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[4] = fp::mul(c.f[7], c.f[4]);
    st32((c.r[29].w[0] + 548u), c.f[1]);
    c.f[1] = fp::mul(c.f[4], c.f[8]);
    c.f[3] = ld32((c.r[29].w[0] + 544u));
    c.f[0] = ld32((c.r[29].w[0] + 552u));
    c.f[2] = fp::add(c.f[3], c.f[1]);
    c.f[1] = fp::mul(c.f[5], c.f[8]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 544u), c.f[2]);
    st32((c.r[29].w[0] + 552u), c.f[0]);
    c.budget -= 35;
L_0042F430:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[28] = fp::mul(c.f[0], c.f[27]);
    c.f[12] = ld32((c.r[28].w[0] - 32016u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F44Cu); c.f[13] = c.f[28];  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x0042F44Cu) [[unlikely]] return; }
L_0042F44C:
    c.f[12] = ld32((c.r[28].w[0] - 32564u));
    c.f[21] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F45Cu); c.f[13] = c.f[28];  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x0042F45Cu) [[unlikely]] return; }
L_0042F45C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 124u), c.f[0]);  if (t) { goto L_0042F478; } }
    c.f[1] = c.f[20];
    c.budget -= 1;
L_0042F478:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[27]);
    c.f[12] = ld32((c.r[28].w[0] - 32016u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F494u); c.f[13] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x0042F494u) [[unlikely]] return; }
L_0042F494:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 128u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 120u), c.f[0]);  if (t) { goto L_0042F7C0; } }
    c.f[7] = ld32((c.r[29].w[0] + 512u));
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[2] = ld32((c.r[29].w[0] + 544u));
    c.f[13] = 0u;
    c.f[24] = fp::sub(c.f[0], c.f[7]);
    c.f[6] = ld32((c.r[29].w[0] + 516u));
    c.f[5] = ld32((c.r[18].w[0] + 24u));
    c.f[1] = ld32((c.r[29].w[0] + 548u));
    c.f[4] = ld32((c.r[29].w[0] + 520u));
    c.f[3] = ld32((c.r[18].w[0] + 28u));
    c.f[0] = ld32((c.r[29].w[0] + 552u));
    c.f[31] = fp::sub(c.f[2], c.f[7]);
    c.f[23] = fp::sub(c.f[5], c.f[6]);
    c.f[30] = fp::sub(c.f[1], c.f[6]);
    c.f[22] = fp::sub(c.f[3], c.f[4]);
    c.f[29] = fp::sub(c.f[0], c.f[4]);
    c.f[12] = c.f[20];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F4F0u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_00C8(c, 45u, depth + 1u); else { c.pc = 0x00420B60u; return; } if (c.pc != 0x0042F4F0u) [[unlikely]] return; }
L_0042F4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F4F8u); c.f[12] = ld32((c.r[18].w[0] + 44u));  if (depth < kMaxDepth) unit_00CB(c, 365u, depth + 1u); else { c.pc = 0x0042FC80u; return; } if (c.pc != 0x0042F4F8u) [[unlikely]] return; }
L_0042F4F8:
    c.f[12] = ld32((c.r[18].w[0] + 52u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F504u); c.f[25] = c.f[0];  if (depth < kMaxDepth) unit_00CB(c, 365u, depth + 1u); else { c.pc = 0x0042FC80u; return; } if (c.pc != 0x0042F504u) [[unlikely]] return; }
L_0042F504:
    fpu_compare(c, fp::key(c.f[25]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 416u);  goto L_0042F554; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F518u); c.f[12] = ld32((c.r[18].w[0] + 44u));  if (depth < kMaxDepth) unit_00CB(c, 365u, depth + 1u); else { c.pc = 0x0042FC80u; return; } if (c.pc != 0x0042F518u) [[unlikely]] return; }
L_0042F518:
    c.f[12] = ld32((c.r[18].w[0] + 48u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F524u); c.f[25] = c.f[0];  if (depth < kMaxDepth) unit_00CB(c, 365u, depth + 1u); else { c.pc = 0x0042FC80u; return; } if (c.pc != 0x0042F524u) [[unlikely]] return; }
L_0042F524:
    fpu_compare(c, fp::key(c.f[25]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0042F550; } }
    c.f[12] = 0u;
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.f[13] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F544u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_00C8(c, 45u, depth + 1u); else { c.pc = 0x00420B60u; return; } if (c.pc != 0x0042F544u) [[unlikely]] return; }
L_0042F544:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F550u); set32(c.r[4], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x0042F550u) [[unlikely]] return; }
L_0042F550:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 1;
L_0042F554:
    set32(c.r[5], c.r[18].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F560u); set32(c.r[6], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_0009(c, 361u, depth + 1u); else { c.pc = 0x00127F90u; return; } if (c.pc != 0x0042F560u) [[unlikely]] return; }
L_0042F560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F568u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 318u, depth + 1u); else { c.pc = 0x001275E0u; return; } if (c.pc != 0x0042F568u) [[unlikely]] return; }
L_0042F568:
    c.f[12] = 0u;
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.f[13] = c.f[12];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F57Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_00C8(c, 45u, depth + 1u); else { c.pc = 0x00420B60u; return; } if (c.pc != 0x0042F57Cu) [[unlikely]] return; }
L_0042F57C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[29].w[0] + 416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F590u); set32(c.r[7], c.r[18].w[0] + 44u);  if (depth < kMaxDepth) unit_00CB(c, 364u, depth + 1u); else { c.pc = 0x0042FA60u; return; } if (c.pc != 0x0042F590u) [[unlikely]] return; }
L_0042F590:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F59Cu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 313u, depth + 1u); else { c.pc = 0x001274E0u; return; } if (c.pc != 0x0042F59Cu) [[unlikely]] return; }
L_0042F59C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F5A4u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 318u, depth + 1u); else { c.pc = 0x001275E0u; return; } if (c.pc != 0x0042F5A4u) [[unlikely]] return; }
L_0042F5A4:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[8].w[0] << 2);
    c.budget -= 2;
L_0042F5AC:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[8].w[0] << 4);
    set32(c.r[6], c.r[3].w[0] + 320u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[2].w[0] + 128u);
    c.budget -= 6;
L_0042F5C4:
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0042F5C4u | kUnwind; return; } goto L_0042F5C4; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[8].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042F5ACu | kUnwind; return; } goto L_0042F5AC; }
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F604u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 313u, depth + 1u); else { c.pc = 0x001274E0u; return; } if (c.pc != 0x0042F604u) [[unlikely]] return; }
L_0042F604:
    c.f[8] = ld32((c.r[29].w[0] + 304u));
    c.f[11] = ld32((c.r[29].w[0] + 256u));
    c.f[12] = 0u;
    c.f[10] = ld32((c.r[29].w[0] + 272u));
    c.f[9] = ld32((c.r[29].w[0] + 288u));
    c.f[7] = ld32((c.r[29].w[0] + 260u));
    c.f[6] = ld32((c.r[29].w[0] + 276u));
    c.f[5] = ld32((c.r[29].w[0] + 292u));
    c.f[4] = ld32((c.r[29].w[0] + 308u));
    c.f[3] = ld32((c.r[29].w[0] + 264u));
    c.f[2] = ld32((c.r[29].w[0] + 280u));
    c.f[1] = ld32((c.r[29].w[0] + 296u));
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    c.facc = fp::add(c.f[12], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[24], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[10]));
    c.f[26] = fp::add(c.facc, fp::mul(c.f[22], c.f[9]));
    c.facc = fp::add(c.f[12], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[24], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[6]));
    c.f[25] = fp::add(c.facc, fp::mul(c.f[22], c.f[5]));
    c.facc = fp::add(c.f[12], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[24], c.f[3]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[2]));
    c.f[24] = fp::add(c.facc, fp::mul(c.f[22], c.f[1]));
    c.facc = fp::add(c.f[12], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[31], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[10]));
    c.f[23] = fp::add(c.facc, fp::mul(c.f[29], c.f[9]));
    c.facc = fp::add(c.f[12], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[31], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[6]));
    c.f[22] = fp::add(c.facc, fp::mul(c.f[29], c.f[5]));
    c.facc = fp::add(c.f[12], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[31], c.f[3]));
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[2]));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[1]));
    c.f[12] = c.f[24];
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F6A4u); c.f[13] = c.f[26];  if (depth < kMaxDepth) unit_00AB(c, 429u, depth + 1u); else { c.pc = 0x003AF728u; return; } if (c.pc != 0x0042F6A4u) [[unlikely]] return; }
L_0042F6A4:
    c.f[30] = c.f[0];
    c.f[12] = c.f[29];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F6B4u); c.f[13] = c.f[23];  if (depth < kMaxDepth) unit_00AB(c, 429u, depth + 1u); else { c.pc = 0x003AF728u; return; } if (c.pc != 0x0042F6B4u) [[unlikely]] return; }
L_0042F6B4:
    c.facc = fp::mul(c.f[26], c.f[26]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[24], c.f[24]));
    c.f[24] = c.f[0];
    c.facc = fp::mul(c.f[23], c.f[23]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[29], c.f[29]));
    c.f[13] = c.f[30];
    c.f[12] = c.f[24];
    c.f[23] = fp::sqrt(c.f[1]);
    c.f[26] = fp::sqrt(c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F6F0u);  if (depth < kMaxDepth) unit_000C(c, 28u, depth + 1u); else { c.pc = 0x00130470u; return; } if (c.pc != 0x0042F6F0u) [[unlikely]] return; }
L_0042F6F0:
    c.f[2] = fp::sub(c.f[23], c.f[26]);
    c.f[3] = 0u;
    c.f[1] = ld32((c.r[29].w[0] + 124u));
    c.facc = fp::add(c.f[3], c.f[24]);
    c.f[23] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.facc = fp::add(c.f[3], c.f[26]);
    c.f[12] = c.f[23];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F718u); c.f[24] = fp::add(c.facc, fp::mul(c.f[0], c.f[2]));  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x0042F718u) [[unlikely]] return; }
L_0042F718:
    c.f[12] = c.f[23];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F724u); c.f[23] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x0042F724u) [[unlikely]] return; }
L_0042F724:
    c.f[14] = fp::mul(c.f[24], c.f[0]);
    c.f[15] = 0u;
    c.f[13] = fp::sub(c.f[25], c.f[22]);
    c.facc = fp::add(c.f[15], c.f[22]);
    c.f[8] = ld32((c.r[29].w[0] + 368u));
    c.f[11] = ld32((c.r[29].w[0] + 320u));
    c.f[12] = fp::mul(c.f[24], c.f[23]);
    c.f[10] = ld32((c.r[29].w[0] + 336u));
    c.f[13] = fp::add(c.facc, fp::mul(c.f[21], c.f[13]));
    c.f[9] = ld32((c.r[29].w[0] + 352u));
    c.f[7] = ld32((c.r[29].w[0] + 324u));
    c.f[6] = ld32((c.r[29].w[0] + 340u));
    c.f[5] = ld32((c.r[29].w[0] + 356u));
    c.f[4] = ld32((c.r[29].w[0] + 372u));
    c.f[3] = ld32((c.r[29].w[0] + 328u));
    c.f[2] = ld32((c.r[29].w[0] + 344u));
    c.f[1] = ld32((c.r[29].w[0] + 360u));
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    c.facc = fp::add(c.f[15], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[14], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[13], c.f[10]));
    c.f[8] = fp::add(c.facc, fp::mul(c.f[12], c.f[9]));
    c.facc = fp::add(c.f[15], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[14], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[13], c.f[6]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[12], c.f[5]));
    c.facc = fp::add(c.f[15], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[14], c.f[3]));
    c.facc = fp::add(c.facc, fp::mul(c.f[13], c.f[2]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[12], c.f[1]));
    c.f[0] = ld32((c.r[29].w[0] + 512u));
    c.f[2] = ld32((c.r[29].w[0] + 516u));
    c.f[1] = ld32((c.r[29].w[0] + 520u));
    c.f[0] = fp::add(c.f[0], c.f[8]);
    c.f[2] = fp::add(c.f[2], c.f[4]);
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    st32((c.r[18].w[0] + 24u), c.f[2]);
    st32((c.r[18].w[0] + 28u), c.f[1]);
    c.budget -= 39;
L_0042F7C0:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.f[5] = ld32((c.r[3].w[0] + 96u));
    c.f[4] = ld32((c.r[3].w[0] + 100u));
    c.f[3] = ld32((c.r[3].w[0] + 104u));
    c.f[2] = ld32((c.r[2].w[0] + 400u));
    c.f[1] = ld32((c.r[2].w[0] + 404u));
    c.f[0] = ld32((c.r[2].w[0] + 408u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[12] = ld32((c.r[28].w[0] - 32020u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F7F8u); c.f[13] = c.f[28];  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x0042F7F8u) [[unlikely]] return; }
L_0042F7F8:
    c.f[6] = ld32((c.r[18].w[0] + 48u));
    c.f[7] = fp::sub(c.f[20], c.f[0]);
    c.f[5] = ld32((c.r[29].w[0] + 532u));
    c.facc = fp::mul(c.f[6], c.f[0]);
    c.f[4] = ld32((c.r[18].w[0] + 52u));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[5], c.f[7]));
    c.f[3] = ld32((c.r[29].w[0] + 536u));
    c.facc = fp::mul(c.f[4], c.f[0]);
    c.f[2] = ld32((c.r[18].w[0] + 44u));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[3], c.f[7]));
    c.f[1] = ld32((c.r[29].w[0] + 528u));
    c.facc = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[7]));
    st32((c.r[18].w[0] + 44u), c.f[0]);
    st32((c.r[18].w[0] + 48u), c.f[5]);
    st32((c.r[18].w[0] + 52u), c.f[3]);
    c.f[3] = ld32((c.r[18].w[0] + 44u));
    c.f[2] = ld32((c.r[18].w[0] + 48u));
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[4] = fp::sqrt(c.f[4]);
    c.f[0] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 28;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0042F884; } }
    fpu_div(c, 0u, c.f[20], c.f[4]);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_0042F894; } }
L_0042F884:
    c.f[3] = 0u;
    c.f[2] = c.f[3];
    c.f[0] = c.f[3];
    c.budget -= 4;
L_0042F894:
    st32((c.r[18].w[0] + 44u), c.f[3]);
    st32((c.r[18].w[0] + 48u), c.f[2]);
    st32((c.r[18].w[0] + 52u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F8B0u); set32(c.r[4], ld32((c.r[2].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 171u, depth + 1u); else { c.pc = 0x0033AB20u; return; } if (c.pc != 0x0042F8B0u) [[unlikely]] return; }
L_0042F8B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[28].w[0] - 32012u));  goto L_0042F8FC; }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 96u));
    c.f[3] = ld32((c.r[2].w[0] + 100u));
    c.f[2] = ld32((c.r[2].w[0] + 104u));
    c.f[1] = fp::mul(c.f[1], c.f[27]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[3] = fp::mul(c.f[3], c.f[27]);
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[2] = fp::mul(c.f[2], c.f[27]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[0]);
    c.f[12] = ld32((c.r[28].w[0] - 32012u));
    c.budget -= 17;
L_0042F8FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F904u); c.f[13] = c.f[28];  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x0042F904u) [[unlikely]] return; }
L_0042F904:
    c.f[3] = ld32((c.r[18].w[0] + 20u));
    c.f[2] = ld32((c.r[18].w[0] + 24u));
    c.f[1] = ld32((c.r[18].w[0] + 28u));
    c.f[3] = c.f[3] ^ fp::kSign;
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    fpu_rsqrt(c, 6u, c.f[20], c.f[6]);
    c.f[5] = fp::mul(c.f[3], c.f[6]);
    c.f[4] = fp::mul(c.f[2], c.f[6]);
    c.f[11] = fp::mul(c.f[1], c.f[6]);
    c.f[10] = ld32((c.r[29].w[0] + 512u));
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[8] = ld32((c.r[29].w[0] + 516u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[7] = ld32((c.r[29].w[0] + 520u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[9] = fp::sub(c.f[3], c.f[10]);
    c.f[2] = fp::sub(c.f[2], c.f[8]);
    c.f[6] = fp::sub(c.f[1], c.f[7]);
    c.facc = fp::mul(c.f[9], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[4]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[6], c.f[11]));
    c.f[5] = fp::mul(c.f[5], c.f[1]);
    c.f[4] = fp::mul(c.f[4], c.f[1]);
    c.f[3] = fp::mul(c.f[11], c.f[1]);
    c.f[1] = fp::sub(c.f[9], c.f[5]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.facc = fp::add(c.f[10], c.f[1]);
    c.f[1] = fp::sub(c.f[2], c.f[4]);
    c.f[2] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[6], c.f[3]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[6] = 0u;
    c.f[1] = fp::add(c.facc, fp::mul(c.f[5], c.f[6]));
    c.facc = fp::add(c.f[8], c.f[2]);
    st32((c.r[18].w[0] + 32u), c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[4], c.f[6]));
    c.facc = fp::add(c.f[7], c.f[0]);
    st32((c.r[18].w[0] + 36u), c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[6]));
    st32((c.r[18].w[0] + 40u), c.f[0]);
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[29].w[0] + 516u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 50;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0042F9D0; } }
    c.f[6] = ld32((c.r[18].w[0] + 120u));
    c.budget -= 1;
L_0042F9D0:
    c.f[0] = 0u;
    c.f[3] = fp::max(c.f[6], c.f[0]);
    c.f[3] = fp::min(c.f[3], c.f[20]);
    c.facc = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F9FCu); set32(c.r[5], c.r[18].w[0] + 20u);  if (depth < kMaxDepth) unit_002F(c, 95u, depth + 1u); else { c.pc = 0x001BD800u; return; } if (c.pc != 0x0042F9FCu) [[unlikely]] return; }
L_0042F9FC:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FA08u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_002F(c, 98u, depth + 1u); else { c.pc = 0x001BD840u; return; } if (c.pc != 0x0042FA08u) [[unlikely]] return; }
L_0042FA08:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FA14u); set32(c.r[5], c.r[18].w[0] + 44u);  if (depth < kMaxDepth) unit_002F(c, 101u, depth + 1u); else { c.pc = 0x001BD880u; return; } if (c.pc != 0x0042FA14u) [[unlikely]] return; }
L_0042FA14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0042FA18:
    c.f[31] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[30] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_0042FA60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    st32((c.r[4].w[0] + 4u), 0u);
    c.f[0] = 0u;
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    c.f[4] = ld32((c.r[6].w[0]));
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[5] = ld32((c.r[6].w[0] + 4u));
    c.f[3] = ld32((c.r[6].w[0] + 8u));
    c.f[6] = fp::sub(c.f[4], c.f[2]);
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[3] = fp::sub(c.f[3], c.f[2]);
    c.facc = fp::mul(c.f[6], c.f[6]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.f[7] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[7] = fp::sqrt(c.f[7]);
    c.f[2] = fp::sub(c.f[7], c.f[0]);
    c.f[5] = c.f[2] & fp::kAbs;
    c.f[2] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[2]));
    c.budget -= 39;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0042FB04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[9] = c.f[0];  if (t) { goto L_0042FB1C; } }
L_0042FB04:
    fpu_div(c, 1u, c.f[1], c.f[7]);
    c.f[0] = fp::mul(c.f[6], c.f[1]);
    c.f[9] = fp::mul(c.f[4], c.f[1]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.budget -= 6;
L_0042FB1C:
    c.f[3] = ld32((c.r[7].w[0] + 4u));
    c.f[2] = ld32((c.r[7].w[0] + 8u));
    c.f[4] = ld32((c.r[7].w[0]));
    c.facc = fp::mul(c.f[3], c.f[1]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[2], c.f[9]));
    c.facc = fp::mul(c.f[2], c.f[0]);
    c.f[5] = fp::sub(c.facc, fp::mul(c.f[4], c.f[1]));
    c.facc = fp::mul(c.f[4], c.f[9]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[3], c.f[0]));
    st32((c.r[29].w[0] + 16u), c.f[6]);
    st32((c.r[29].w[0] + 20u), c.f[5]);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    c.facc = fp::mul(c.f[6], c.f[6]);
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[5]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[5] = fp::sqrt(c.f[5]);
    c.f[2] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[2]));
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0042FB9C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    fpu_div(c, 5u, c.f[2], c.f[5]);
    c.f[4] = ld32((c.r[29].w[0] + 16u));
    c.f[3] = ld32((c.r[29].w[0] + 20u));
    c.f[2] = ld32((c.r[29].w[0] + 24u));
    c.f[6] = fp::mul(c.f[4], c.f[5]);
    c.f[7] = fp::mul(c.f[3], c.f[5]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[8] = fp::mul(c.f[2], c.f[5]);  if (t) { goto L_0042FBAC; } }
L_0042FB9C:
    c.f[6] = 0u;
    c.f[7] = c.f[6];
    c.f[8] = c.f[6];
    c.budget -= 4;
L_0042FBAC:
    c.facc = fp::mul(c.f[9], c.f[8]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[1], c.f[7]));
    c.facc = fp::mul(c.f[1], c.f[6]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[0], c.f[8]));
    c.facc = fp::mul(c.f[0], c.f[7]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[9], c.f[6]));
    st32((c.r[29].w[0]), c.f[4]);
    st32((c.r[29].w[0] + 4u), c.f[3]);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[5] = fp::sqrt(c.f[5]);
    c.f[2] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[2]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0042FC20; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    fpu_div(c, 5u, c.f[2], c.f[5]);
    c.f[4] = ld32((c.r[29].w[0]));
    c.f[3] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = ld32((c.r[29].w[0] + 8u));
    c.f[4] = fp::mul(c.f[4], c.f[5]);
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[2] = fp::mul(c.f[2], c.f[5]);  if (t) { goto L_0042FC30; } }
L_0042FC20:
    c.f[4] = 0u;
    c.f[3] = c.f[4];
    c.f[2] = c.f[4];
    c.budget -= 4;
L_0042FC30:
    st32((c.r[4].w[0]), c.f[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 4u), c.f[7]);
    st32((c.r[4].w[0] + 8u), c.f[8]);
    st32((c.r[4].w[0] + 16u), c.f[4]);
    st32((c.r[4].w[0] + 20u), c.f[3]);
    st32((c.r[4].w[0] + 24u), c.f[2]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[9]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0042FC80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = c.f[12] & fp::kAbs;  c.pc = t; return; }
L_0042FC90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 31568u));
    c.f[3] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[2] = ld32((c.r[2].w[0] + 31572u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[2].w[0] + 31576u));
    st32((c.r[29].w[0] + 20u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 31584u));
    st32((c.r[29].w[0] + 24u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[2].w[0] + 31588u));
    st32((c.r[29].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[2] = ld32((c.r[2].w[0] + 31592u));
    st32((c.r[29].w[0] + 4u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[5] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16960ull;
    st32((c.r[29].w[0] + 8u), c.f[2]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[4] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[5], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 39;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = fp::add(c.f[2], c.f[5]);  goto L_0042FD38; }
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[0] = c.f[1];
    c.f[1] = fp::add(c.f[2], c.f[5]);
    c.budget -= 3;
L_0042FD38:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = ld32((c.r[4].w[0] + 8u));  goto L_0042FD54; }
    c.f[0] = c.f[1];
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[3] = c.f[1] ^ fp::kSign;
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.budget -= 4;
L_0042FD54:
    c.f[1] = fp::sub(c.f[4], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = fp::add(c.f[2], c.f[4]);  goto L_0042FD70; }
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = c.f[1];
    c.f[1] = fp::add(c.f[2], c.f[4]);
    c.budget -= 3;
L_0042FD70:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[7].w[0]), c.f[3]);  goto L_0042FD8C; }
    c.f[0] = c.f[1];
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[3] = c.f[1] ^ fp::kSign;
    st32((c.r[7].w[0]), c.f[3]);
    c.budget -= 4;
L_0042FD8C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0042FDA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FDC0u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 118u, depth + 1u); else { c.pc = 0x001BDBC0u; return; } if (c.pc != 0x0042FDC0u) [[unlikely]] return; }
L_0042FDC0:
    c.f[2] = ld32((c.r[2].w[0] + 280u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[2].w[0] + 284u));
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[13] = c.r[3].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FDE4u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 429u, depth + 1u); else { c.pc = 0x003AF728u; return; } if (c.pc != 0x0042FDE4u) [[unlikely]] return; }
L_0042FDE4:
    c.f[6] = ld32((c.r[28].w[0] - 32116u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[5] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = fp::mul(c.f[6], c.f[0]);
    c.f[0] = fp::mul(c.f[5], c.f[0]);
    c.f[3] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[1] = 0u;
    c.f[3] = fp::sub(c.f[0], c.f[4]);
    c.f[7] = ld32((c.r[28].w[0] - 32076u));
    c.f[2] = c.r[3].w[0];
    c.facc = fp::add(c.f[1], c.f[4]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[3]));
    c.f[5] = fp::max(c.f[7], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[4]);
    c.f[1] = ld32((c.r[28].w[0] - 32304u));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[3]));
    c.f[3] = fp::max(c.f[1], c.f[0]);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 1792u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1788u);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[2] = ld32((c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1784u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    st32((c.r[17].w[0]), c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    st32((c.r[17].w[0] + 4u), c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 50;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0042FEB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[5].w[0]);  c.pc = t; return; }
L_0042FEC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16960ull;
    st32((c.r[4].w[0] + 120u), 0u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[4].w[0] + 124u), 0u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 136u), 0u);
    set32(c.r[5], c.r[4].w[0] + 20u);
    set32(c.r[6], c.r[4].w[0] + 32u);
    set32(c.r[7], c.r[4].w[0] + 44u);
    st32((c.r[4].w[0] + 140u), c.f[0]);
    st32((c.r[4].w[0] + 144u), 0u);
    st32((c.r[4].w[0] + 148u), c.f[0]);
    st32((c.r[4].w[0] + 152u), 0u);
    c.budget -= 17;
    { st8((c.r[4].w[0] + 128u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042E6B0u | kUnwind; return; } goto L_0042E6B0; }
L_0042FF10:
    st32((c.r[4].w[0] + 20u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 16960ull;
    st32((c.r[4].w[0] + 28u), 0u);
    c.f[0] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), c.r[5].w[0]);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 52u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st8((c.r[4].w[0] + 128u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    st32((c.r[4].w[0] + 112u), 0u);
    c.f[0] = ld32((c.r[28].w[0] - 31588u));
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 136u), 0u);
    st32((c.r[4].w[0] + 124u), 0u);
    st32((c.r[4].w[0] + 140u), c.f[1]);
    st32((c.r[4].w[0] + 144u), 0u);
    st32((c.r[4].w[0] + 148u), c.f[1]);
    st32((c.r[4].w[0] + 152u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 96u), 0u);
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 100u), c.f[0]);  c.pc = t; return; }
L_0042FF90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0042FFA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0042FFE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FFD0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0013(c, 61u, depth + 1u); else { c.pc = 0x0014C720u; return; } if (c.pc != 0x0042FFD0u) [[unlikely]] return; }
L_0042FFD0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0042FFEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FFE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0042FFE8u) [[unlikely]] return; }
L_0042FFE8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042FFEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
}

}
