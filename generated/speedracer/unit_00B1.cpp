#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B1[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0,
    0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0,
    0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51,
    0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0,
    0, 64, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0,
    0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0,
    0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0,
    0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106,
    0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110,
    0, 0, 0, 111, 0, 0, 112, 0, 113, 0, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 120,
    0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0,
    0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 148, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0,
    0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 170, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0,
    0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0,
    0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0,
    0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 199,
    0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0,
    0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0,
    0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0,
    0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0,
    0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0,
    237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0,
    0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0,
    0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 282, 0, 0, 0, 283,
    0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0, 288, 0, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0,
    292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 298, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 303, 0, 304, 0, 0, 0, 305, 0, 0, 306, 0, 0, 307,
    0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 313, 0, 0, 0, 314, 0,
    0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0,
    0, 329, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 341,
    0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 346, 0, 347, 0, 0, 0, 348, 0, 0, 349,
    0, 0, 350, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 356, 0,
    357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 363, 0, 0, 0, 364, 0, 0,
    365, 0, 0, 366, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0,
    370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0,
    379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0,
    0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0,
    0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 402,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0,
    406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 411, 0, 0, 0, 0,
    412, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0, 419, 0, 0, 420, 0, 0,
    421, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0,
    0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0,
    430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 0, 444, 0, 0, 0,
    0, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0,
    0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0,
    455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0,
    0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462,
    0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 467, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0,
    469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0,
    0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0,
    477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0, 0,
    0, 0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 489, 0,
    0, 0, 0, 490, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0,
    496, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500,
};

void unit_00B1(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003C4000;
    case 2u: goto L_003C4090;
    case 3u: goto L_003C40B0;
    case 4u: goto L_003C411C;
    case 5u: goto L_003C4124;
    case 6u: goto L_003C415C;
    case 7u: goto L_003C4168;
    case 8u: goto L_003C4174;
    case 9u: goto L_003C41B8;
    case 10u: goto L_003C41D0;
    case 11u: goto L_003C41E4;
    case 12u: goto L_003C41F4;
    case 13u: goto L_003C4200;
    case 14u: goto L_003C4280;
    case 15u: goto L_003C42B0;
    case 16u: goto L_003C42CC;
    case 17u: goto L_003C42E0;
    case 18u: goto L_003C42F0;
    case 19u: goto L_003C43F0;
    case 20u: goto L_003C441C;
    case 21u: goto L_003C442C;
    case 22u: goto L_003C443C;
    case 23u: goto L_003C4448;
    case 24u: goto L_003C4460;
    case 25u: goto L_003C4480;
    case 26u: goto L_003C44FC;
    case 27u: goto L_003C4514;
    case 28u: goto L_003C4574;
    case 29u: goto L_003C458C;
    case 30u: goto L_003C45C0;
    case 31u: goto L_003C46D0;
    case 32u: goto L_003C46EC;
    case 33u: goto L_003C4704;
    case 34u: goto L_003C4728;
    case 35u: goto L_003C4760;
    case 36u: goto L_003C47C0;
    case 37u: goto L_003C4848;
    case 38u: goto L_003C485C;
    case 39u: goto L_003C48BC;
    case 40u: goto L_003C48EC;
    case 41u: goto L_003C4920;
    case 42u: goto L_003C4998;
    case 43u: goto L_003C49A0;
    case 44u: goto L_003C49B0;
    case 45u: goto L_003C49C8;
    case 46u: goto L_003C4A00;
    case 47u: goto L_003C4A20;
    case 48u: goto L_003C4A30;
    case 49u: goto L_003C4A40;
    case 50u: goto L_003C4A5C;
    case 51u: goto L_003C4A7C;
    case 52u: goto L_003C4A88;
    case 53u: goto L_003C4AB0;
    case 54u: goto L_003C4BE4;
    case 55u: goto L_003C4C60;
    case 56u: goto L_003C4D60;
    case 57u: goto L_003C4DB8;
    case 58u: goto L_003C4DD0;
    case 59u: goto L_003C4DF0;
    case 60u: goto L_003C4E30;
    case 61u: goto L_003C4E40;
    case 62u: goto L_003C4E64;
    case 63u: goto L_003C4E78;
    case 64u: goto L_003C4E84;
    case 65u: goto L_003C4E90;
    case 66u: goto L_003C4EA4;
    case 67u: goto L_003C4EC0;
    case 68u: goto L_003C4EE0;
    case 69u: goto L_003C4EEC;
    case 70u: goto L_003C4EF8;
    case 71u: goto L_003C4F0C;
    case 72u: goto L_003C4F1C;
    case 73u: goto L_003C4F3C;
    case 74u: goto L_003C4F6C;
    case 75u: goto L_003C4F88;
    case 76u: goto L_003C4F94;
    case 77u: goto L_003C4FA0;
    case 78u: goto L_003C4FB4;
    case 79u: goto L_003C4FC0;
    case 80u: goto L_003C4FE8;
    case 81u: goto L_003C5000;
    case 82u: goto L_003C5040;
    case 83u: goto L_003C5070;
    case 84u: goto L_003C5098;
    case 85u: goto L_003C50D0;
    case 86u: goto L_003C5104;
    case 87u: goto L_003C5120;
    case 88u: goto L_003C5170;
    case 89u: goto L_003C519C;
    case 90u: goto L_003C51CC;
    case 91u: goto L_003C51D8;
    case 92u: goto L_003C51F0;
    case 93u: goto L_003C5210;
    case 94u: goto L_003C5240;
    case 95u: goto L_003C5284;
    case 96u: goto L_003C52B0;
    case 97u: goto L_003C52E0;
    case 98u: goto L_003C52EC;
    case 99u: goto L_003C5304;
    case 100u: goto L_003C5328;
    case 101u: goto L_003C5350;
    case 102u: goto L_003C5380;
    case 103u: goto L_003C5390;
    case 104u: goto L_003C539C;
    case 105u: goto L_003C53E4;
    case 106u: goto L_003C53FC;
    case 107u: goto L_003C5404;
    case 108u: goto L_003C541C;
    case 109u: goto L_003C546C;
    case 110u: goto L_003C547C;
    case 111u: goto L_003C548C;
    case 112u: goto L_003C5498;
    case 113u: goto L_003C54A0;
    case 114u: goto L_003C54AC;
    case 115u: goto L_003C54BC;
    case 116u: goto L_003C54C8;
    case 117u: goto L_003C54D8;
    case 118u: goto L_003C54E4;
    case 119u: goto L_003C54F0;
    case 120u: goto L_003C54FC;
    case 121u: goto L_003C5508;
    case 122u: goto L_003C5514;
    case 123u: goto L_003C5540;
    case 124u: goto L_003C556C;
    case 125u: goto L_003C5584;
    case 126u: goto L_003C55A0;
    case 127u: goto L_003C55D8;
    case 128u: goto L_003C55F0;
    case 129u: goto L_003C5610;
    case 130u: goto L_003C5648;
    case 131u: goto L_003C5660;
    case 132u: goto L_003C5680;
    case 133u: goto L_003C5690;
    case 134u: goto L_003C56C4;
    case 135u: goto L_003C56F0;
    case 136u: goto L_003C5718;
    case 137u: goto L_003C5740;
    case 138u: goto L_003C5744;
    case 139u: goto L_003C5780;
    case 140u: goto L_003C579C;
    case 141u: goto L_003C57C0;
    case 142u: goto L_003C57DC;
    case 143u: goto L_003C5800;
    case 144u: goto L_003C5828;
    case 145u: goto L_003C583C;
    case 146u: goto L_003C5858;
    case 147u: goto L_003C5868;
    case 148u: goto L_003C5874;
    case 149u: goto L_003C5890;
    case 150u: goto L_003C58AC;
    case 151u: goto L_003C58D0;
    case 152u: goto L_003C58F0;
    case 153u: goto L_003C5910;
    case 154u: goto L_003C593C;
    case 155u: goto L_003C5984;
    case 156u: goto L_003C599C;
    case 157u: goto L_003C59A4;
    case 158u: goto L_003C59BC;
    case 159u: goto L_003C5A10;
    case 160u: goto L_003C5A20;
    case 161u: goto L_003C5A30;
    case 162u: goto L_003C5A58;
    case 163u: goto L_003C5A64;
    case 164u: goto L_003C5A88;
    case 165u: goto L_003C5A9C;
    case 166u: goto L_003C5AB0;
    case 167u: goto L_003C5ACC;
    case 168u: goto L_003C5AD8;
    case 169u: goto L_003C5AE4;
    case 170u: goto L_003C5AF8;
    case 171u: goto L_003C5B50;
    case 172u: goto L_003C5B80;
    case 173u: goto L_003C5B98;
    case 174u: goto L_003C5BB8;
    case 175u: goto L_003C5BC8;
    case 176u: goto L_003C5BDC;
    case 177u: goto L_003C5BEC;
    case 178u: goto L_003C5BF8;
    case 179u: goto L_003C5C04;
    case 180u: goto L_003C5C60;
    case 181u: goto L_003C5C90;
    case 182u: goto L_003C5CC4;
    case 183u: goto L_003C5CE4;
    case 184u: goto L_003C5D04;
    case 185u: goto L_003C5D14;
    case 186u: goto L_003C5D24;
    case 187u: goto L_003C5D30;
    case 188u: goto L_003C5D50;
    case 189u: goto L_003C5D5C;
    case 190u: goto L_003C5DC0;
    case 191u: goto L_003C5DE8;
    case 192u: goto L_003C5DF8;
    case 193u: goto L_003C5E08;
    case 194u: goto L_003C5E1C;
    case 195u: goto L_003C5E2C;
    case 196u: goto L_003C5E44;
    case 197u: goto L_003C5E64;
    case 198u: goto L_003C5E70;
    case 199u: goto L_003C5E7C;
    case 200u: goto L_003C5E98;
    case 201u: goto L_003C5EC0;
    case 202u: goto L_003C5ECC;
    case 203u: goto L_003C5EE0;
    case 204u: goto L_003C5F00;
    case 205u: goto L_003C5F10;
    case 206u: goto L_003C5F38;
    case 207u: goto L_003C5F64;
    case 208u: goto L_003C5F70;
    case 209u: goto L_003C5FA0;
    case 210u: goto L_003C5FC8;
    case 211u: goto L_003C5FE0;
    case 212u: goto L_003C6004;
    case 213u: goto L_003C6020;
    case 214u: goto L_003C6058;
    case 215u: goto L_003C6090;
    case 216u: goto L_003C60B4;
    case 217u: goto L_003C60E4;
    case 218u: goto L_003C60F0;
    case 219u: goto L_003C6108;
    case 220u: goto L_003C6120;
    case 221u: goto L_003C6150;
    case 222u: goto L_003C615C;
    case 223u: goto L_003C6178;
    case 224u: goto L_003C6188;
    case 225u: goto L_003C619C;
    case 226u: goto L_003C61AC;
    case 227u: goto L_003C61CC;
    case 228u: goto L_003C61E8;
    case 229u: goto L_003C61F4;
    case 230u: goto L_003C6204;
    case 231u: goto L_003C6218;
    case 232u: goto L_003C6230;
    case 233u: goto L_003C6238;
    case 234u: goto L_003C624C;
    case 235u: goto L_003C6268;
    case 236u: goto L_003C6274;
    case 237u: goto L_003C6280;
    case 238u: goto L_003C628C;
    case 239u: goto L_003C62B0;
    case 240u: goto L_003C62D4;
    case 241u: goto L_003C62EC;
    case 242u: goto L_003C6300;
    case 243u: goto L_003C6314;
    case 244u: goto L_003C6334;
    case 245u: goto L_003C634C;
    case 246u: goto L_003C6360;
    case 247u: goto L_003C6374;
    case 248u: goto L_003C639C;
    case 249u: goto L_003C63B0;
    case 250u: goto L_003C63C4;
    case 251u: goto L_003C63E4;
    case 252u: goto L_003C63EC;
    case 253u: goto L_003C6410;
    case 254u: goto L_003C6434;
    case 255u: goto L_003C6450;
    case 256u: goto L_003C6474;
    case 257u: goto L_003C648C;
    case 258u: goto L_003C64B0;
    case 259u: goto L_003C64C0;
    case 260u: goto L_003C64E4;
    case 261u: goto L_003C64F0;
    case 262u: goto L_003C6500;
    case 263u: goto L_003C6548;
    case 264u: goto L_003C6560;
    case 265u: goto L_003C6580;
    case 266u: goto L_003C6590;
    case 267u: goto L_003C65DC;
    case 268u: goto L_003C65F0;
    case 269u: goto L_003C6610;
    case 270u: goto L_003C6648;
    case 271u: goto L_003C6654;
    case 272u: goto L_003C6690;
    case 273u: goto L_003C66C8;
    case 274u: goto L_003C66D4;
    case 275u: goto L_003C6710;
    case 276u: goto L_003C671C;
    case 277u: goto L_003C6770;
    case 278u: goto L_003C67B8;
    case 279u: goto L_003C67CC;
    case 280u: goto L_003C67D8;
    case 281u: goto L_003C67E4;
    case 282u: goto L_003C67EC;
    case 283u: goto L_003C67FC;
    case 284u: goto L_003C681C;
    case 285u: goto L_003C6830;
    case 286u: goto L_003C683C;
    case 287u: goto L_003C6848;
    case 288u: goto L_003C6850;
    case 289u: goto L_003C6860;
    case 290u: goto L_003C686C;
    case 291u: goto L_003C6878;
    case 292u: goto L_003C6880;
    case 293u: goto L_003C6890;
    case 294u: goto L_003C68BC;
    case 295u: goto L_003C68D0;
    case 296u: goto L_003C68DC;
    case 297u: goto L_003C68E8;
    case 298u: goto L_003C68F0;
    case 299u: goto L_003C6900;
    case 300u: goto L_003C6920;
    case 301u: goto L_003C6934;
    case 302u: goto L_003C6940;
    case 303u: goto L_003C694C;
    case 304u: goto L_003C6954;
    case 305u: goto L_003C6964;
    case 306u: goto L_003C6970;
    case 307u: goto L_003C697C;
    case 308u: goto L_003C6984;
    case 309u: goto L_003C6994;
    case 310u: goto L_003C69BC;
    case 311u: goto L_003C69D4;
    case 312u: goto L_003C69DC;
    case 313u: goto L_003C69E8;
    case 314u: goto L_003C69F8;
    case 315u: goto L_003C6A14;
    case 316u: goto L_003C6A2C;
    case 317u: goto L_003C6A34;
    case 318u: goto L_003C6A40;
    case 319u: goto L_003C6A50;
    case 320u: goto L_003C6A60;
    case 321u: goto L_003C6A80;
    case 322u: goto L_003C6A90;
    case 323u: goto L_003C6AA0;
    case 324u: goto L_003C6AB0;
    case 325u: goto L_003C6B04;
    case 326u: goto L_003C6B38;
    case 327u: goto L_003C6B50;
    case 328u: goto L_003C6B70;
    case 329u: goto L_003C6B84;
    case 330u: goto L_003C6B90;
    case 331u: goto L_003C6BA0;
    case 332u: goto L_003C6BF0;
    case 333u: goto L_003C6C24;
    case 334u: goto L_003C6C40;
    case 335u: goto L_003C6C50;
    case 336u: goto L_003C6C80;
    case 337u: goto L_003C6CC8;
    case 338u: goto L_003C6CDC;
    case 339u: goto L_003C6CE8;
    case 340u: goto L_003C6CF4;
    case 341u: goto L_003C6CFC;
    case 342u: goto L_003C6D0C;
    case 343u: goto L_003C6D2C;
    case 344u: goto L_003C6D40;
    case 345u: goto L_003C6D4C;
    case 346u: goto L_003C6D58;
    case 347u: goto L_003C6D60;
    case 348u: goto L_003C6D70;
    case 349u: goto L_003C6D7C;
    case 350u: goto L_003C6D88;
    case 351u: goto L_003C6D90;
    case 352u: goto L_003C6DA0;
    case 353u: goto L_003C6DCC;
    case 354u: goto L_003C6DE0;
    case 355u: goto L_003C6DEC;
    case 356u: goto L_003C6DF8;
    case 357u: goto L_003C6E00;
    case 358u: goto L_003C6E10;
    case 359u: goto L_003C6E30;
    case 360u: goto L_003C6E44;
    case 361u: goto L_003C6E50;
    case 362u: goto L_003C6E5C;
    case 363u: goto L_003C6E64;
    case 364u: goto L_003C6E74;
    case 365u: goto L_003C6E80;
    case 366u: goto L_003C6E8C;
    case 367u: goto L_003C6E94;
    case 368u: goto L_003C6EA4;
    case 369u: goto L_003C6EF0;
    case 370u: goto L_003C6F00;
    case 371u: goto L_003C6F20;
    case 372u: goto L_003C6F34;
    case 373u: goto L_003C6F40;
    case 374u: goto L_003C6F50;
    case 375u: goto L_003C6F9C;
    case 376u: goto L_003C6FB0;
    case 377u: goto L_003C6FC0;
    case 378u: goto L_003C6FE0;
    case 379u: goto L_003C7000;
    case 380u: goto L_003C7034;
    case 381u: goto L_003C7058;
    case 382u: goto L_003C708C;
    case 383u: goto L_003C70D8;
    case 384u: goto L_003C70E8;
    case 385u: goto L_003C7110;
    case 386u: goto L_003C713C;
    case 387u: goto L_003C7178;
    case 388u: goto L_003C7190;
    case 389u: goto L_003C71C0;
    case 390u: goto L_003C7228;
    case 391u: goto L_003C7230;
    case 392u: goto L_003C723C;
    case 393u: goto L_003C724C;
    case 394u: goto L_003C725C;
    case 395u: goto L_003C7268;
    case 396u: goto L_003C7284;
    case 397u: goto L_003C72E4;
    case 398u: goto L_003C7310;
    case 399u: goto L_003C7320;
    case 400u: goto L_003C7340;
    case 401u: goto L_003C7358;
    case 402u: goto L_003C737C;
    case 403u: goto L_003C73F8;
    case 404u: goto L_003C743C;
    case 405u: goto L_003C7460;
    case 406u: goto L_003C7480;
    case 407u: goto L_003C74B0;
    case 408u: goto L_003C74C0;
    case 409u: goto L_003C74D4;
    case 410u: goto L_003C74E4;
    case 411u: goto L_003C74EC;
    case 412u: goto L_003C7500;
    case 413u: goto L_003C7510;
    case 414u: goto L_003C7520;
    case 415u: goto L_003C753C;
    case 416u: goto L_003C7544;
    case 417u: goto L_003C7550;
    case 418u: goto L_003C755C;
    case 419u: goto L_003C7568;
    case 420u: goto L_003C7574;
    case 421u: goto L_003C7580;
    case 422u: goto L_003C758C;
    case 423u: goto L_003C759C;
    case 424u: goto L_003C75C0;
    case 425u: goto L_003C75E4;
    case 426u: goto L_003C7608;
    case 427u: goto L_003C762C;
    case 428u: goto L_003C7650;
    case 429u: goto L_003C7674;
    case 430u: goto L_003C7680;
    case 431u: goto L_003C76A0;
    case 432u: goto L_003C76EC;
    case 433u: goto L_003C76FC;
    case 434u: goto L_003C7734;
    case 435u: goto L_003C7760;
    case 436u: goto L_003C77BC;
    case 437u: goto L_003C77C4;
    case 438u: goto L_003C77D0;
    case 439u: goto L_003C77F8;
    case 440u: goto L_003C7840;
    case 441u: goto L_003C7880;
    case 442u: goto L_003C78DC;
    case 443u: goto L_003C78E4;
    case 444u: goto L_003C78F0;
    case 445u: goto L_003C790C;
    case 446u: goto L_003C7918;
    case 447u: goto L_003C7958;
    case 448u: goto L_003C7990;
    case 449u: goto L_003C79A0;
    case 450u: goto L_003C79C0;
    case 451u: goto L_003C79F8;
    case 452u: goto L_003C7A0C;
    case 453u: goto L_003C7A24;
    case 454u: goto L_003C7A68;
    case 455u: goto L_003C7A80;
    case 456u: goto L_003C7AC4;
    case 457u: goto L_003C7AD0;
    case 458u: goto L_003C7AF4;
    case 459u: goto L_003C7B08;
    case 460u: goto L_003C7B30;
    case 461u: goto L_003C7B40;
    case 462u: goto L_003C7B7C;
    case 463u: goto L_003C7B98;
    case 464u: goto L_003C7BB4;
    case 465u: goto L_003C7BD0;
    case 466u: goto L_003C7BEC;
    case 467u: goto L_003C7BF8;
    case 468u: goto L_003C7C70;
    case 469u: goto L_003C7C80;
    case 470u: goto L_003C7CBC;
    case 471u: goto L_003C7CD8;
    case 472u: goto L_003C7CF4;
    case 473u: goto L_003C7D10;
    case 474u: goto L_003C7D2C;
    case 475u: goto L_003C7DB0;
    case 476u: goto L_003C7DF0;
    case 477u: goto L_003C7E00;
    case 478u: goto L_003C7E14;
    case 479u: goto L_003C7E2C;
    case 480u: goto L_003C7E38;
    case 481u: goto L_003C7E4C;
    case 482u: goto L_003C7E58;
    case 483u: goto L_003C7E74;
    case 484u: goto L_003C7E94;
    case 485u: goto L_003C7E9C;
    case 486u: goto L_003C7EC4;
    case 487u: goto L_003C7ED8;
    case 488u: goto L_003C7EEC;
    case 489u: goto L_003C7EF8;
    case 490u: goto L_003C7F0C;
    case 491u: goto L_003C7F18;
    case 492u: goto L_003C7F2C;
    case 493u: goto L_003C7F40;
    case 494u: goto L_003C7F4C;
    case 495u: goto L_003C7F70;
    case 496u: goto L_003C7F80;
    case 497u: goto L_003C7F90;
    case 498u: goto L_003C7FBC;
    case 499u: goto L_003C7FE4;
    case 500u: goto L_003C7FFC;
    default: bad_entry(c, 0x003C4000u); return;
    }
L_003C4000:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == c.r[5].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003C4094; }
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003C4038; }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    mmi::divu(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 5;
L_003C4038:
    set32(c.r[8], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 76u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[8].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 52u), c.r[8].w[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4090u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 30u, depth + 1u); else { c.pc = 0x003C45C0u; return; } if (c.pc != 0x003C4090u) [[unlikely]] return; }
L_003C4090:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003C4094:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C40B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C4310; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 27056u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C40F0; } }
    set32(c.r[3], 0u - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[2].w[0] - 25096u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 27056u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_003C40F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0] - 25096u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_003C4128; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C411Cu); set32(c.r[5], c.r[5].w[0] - 24999u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003C411Cu) [[unlikely]] return; }
L_003C411C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4124u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003C4124u) [[unlikely]] return; }
L_003C4124:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_003C4128:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] - 1u);  goto L_003C413C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003C413C; } }
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_003C413C:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[17].w[0])));  goto L_003C42D8; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0])));  goto L_003C416C; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C415Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0009(c, 141u, depth + 1u); else { c.pc = 0x00125760u; return; } if (c.pc != 0x003C415Cu) [[unlikely]] return; }
L_003C415C:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4168u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 133u, depth + 1u); else { c.pc = 0x00125460u; return; } if (c.pc != 0x003C4168u) [[unlikely]] return; }
L_003C4168:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003C416C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4174u); set32(c.r[4], 0u + 480u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003C4174u) [[unlikely]] return; }
L_003C4174:
    set32(c.r[3], 0u + 10u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[6], c.r[29].w[0] + 104u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 104u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] << 1);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 60u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C41B8u); st32((c.r[29].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_00B1(c, 41u, depth + 1u); else { c.pc = 0x003C4920u; return; } if (c.pc != 0x003C41B8u) [[unlikely]] return; }
L_003C41B8:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_003C41DC; }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C41D0u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_00B1(c, 1u, depth + 1u); else { c.pc = 0x003C4000u; return; } if (c.pc != 0x003C41D0u) [[unlikely]] return; }
L_003C41D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_003C41F8; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_003C41DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C41E4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0009(c, 141u, depth + 1u); else { c.pc = 0x00125760u; return; } if (c.pc != 0x003C41E4u) [[unlikely]] return; }
L_003C41E4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C41F4u); st32((c.r[29].w[0] + 96u), 0u);  if (depth < kMaxDepth) unit_0009(c, 136u, depth + 1u); else { c.pc = 0x00125600u; return; } if (c.pc != 0x003C41F4u) [[unlikely]] return; }
L_003C41F4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_003C41F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4200u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_00B1(c, 36u, depth + 1u); else { c.pc = 0x003C47C0u; return; } if (c.pc != 0x003C4200u) [[unlikely]] return; }
L_003C4200:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[3], c.r[2].w[0] + 432u);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_003C4274; }
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[3].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[3].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[3].w[0] + 32u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[3].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[3].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[3].w[0] + 44u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 25;
L_003C4274:
    set32(c.r[5], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4280u); st32((c.r[29].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_00B1(c, 35u, depth + 1u); else { c.pc = 0x003C4760u; return; } if (c.pc != 0x003C4280u) [[unlikely]] return; }
L_003C4280:
    set32(c.r[3], 0u + 9u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 88u)));  goto L_003C42B4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C42B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C42B0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C42B0u) [[unlikely]] return; }
L_003C42B0:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_003C42B4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003C43E0; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C43DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C42CCu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C42CCu) [[unlikely]] return; }
L_003C42CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C43DC; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003C42D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C42E0u); set32(c.r[4], 0u + 480u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003C42E0u) [[unlikely]] return; }
L_003C42E0:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C42F0u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_00B1(c, 36u, depth + 1u); else { c.pc = 0x003C47C0u; return; } if (c.pc != 0x003C42F0u) [[unlikely]] return; }
L_003C42F0:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 10u);  goto L_003C430C; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_003C4310; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 1;
L_003C430C:
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 1;
L_003C4310:
    set32(c.r[8], c.r[3].w[0] - 1u);
    set32(c.r[7], 0u + 10u);
    mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 21;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 24u)));  goto L_003C43C8; }
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[4].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[4].w[0] + 28u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[4].w[0] + 44u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 25;
L_003C43C8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 5;
L_003C43DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003C43E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C43F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C4460; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C441Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 55u, depth + 1u); else { c.pc = 0x003C4C60u; return; } if (c.pc != 0x003C441Cu) [[unlikely]] return; }
L_003C441C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C442Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 55u, depth + 1u); else { c.pc = 0x003C4C60u; return; } if (c.pc != 0x003C442Cu) [[unlikely]] return; }
L_003C442C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C443Cu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 53u, depth + 1u); else { c.pc = 0x003C4AB0u; return; } if (c.pc != 0x003C443Cu) [[unlikely]] return; }
L_003C443C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4448u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 25u, depth + 1u); else { c.pc = 0x003C4480u; return; } if (c.pc != 0x003C4448u) [[unlikely]] return; }
L_003C4448:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C4464; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4460u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003C4460u) [[unlikely]] return; }
L_003C4460:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C4464:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C4480:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003C458C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[19].w[0] + 4u);  if (t) { goto L_003C452C; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003C44D8; }
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    mmi::divu(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 5;
L_003C44D8:
    set32(c.r[17], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[20], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_003C4524; } }
L_003C44FC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 4u);  goto L_003C4518; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C4514; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4514u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C4514u) [[unlikely]] return; }
L_003C4514:
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.budget -= 1;
L_003C4518:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[20].d[0];  if (t) { goto L_003C4524; } }
    c.r[21].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C4524:
    c.budget -= 2;
    if (c.r[21].d[0] != c.r[16].d[0]) { set32(c.r[4], ld32((c.r[21].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C44FCu | kUnwind; return; } goto L_003C44FC; }
L_003C452C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_003C4578; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003C4574; } }
    set32(c.r[2], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C4574; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C4574; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C4574; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C4574; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C4574; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4574u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C4574u) [[unlikely]] return; }
L_003C4574:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_003C4578:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_003C4590; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C458Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003C458Cu) [[unlikely]] return; }
L_003C458C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003C4590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C45C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 96u), c.f[1]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[29].w[0] + 104u), c.f[2]);
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[29].w[0] + 108u), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    st32((c.r[29].w[0] + 84u), c.f[2]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[29].w[0] + 88u), c.f[1]);
    st32((c.r[29].w[0] + 92u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 30;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_003C4640; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_003C4640:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 96u)));  goto L_003C467C; }
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), 0u);  goto L_003C46A4; }
    set32(c.r[4], c.r[6].w[0] - c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_003C4674; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_003C4674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);  if (t) { goto L_003C46A0; } }
L_003C467C:
    c.r[3].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C46A0; } }
    set32(c.r[4], c.r[6].w[0] - c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_003C469C; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_003C469C:
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_003C46A0:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_003C46A4:
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_003C46B8; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C46B8:
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[8], ld32((c.r[17].w[0] + 16u)));  goto L_003C4714; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C46D0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00125A70u; return; } if (c.pc != 0x003C46D0u) [[unlikely]] return; }
L_003C46D0:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003C46F4; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 16u), 0u);  goto L_003C46F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C46ECu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C46ECu) [[unlikely]] return; }
L_003C46EC:
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 1;
L_003C46F0:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_003C46F4:
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4704u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003C4704u) [[unlikely]] return; }
L_003C4704:
    set32(c.r[3], c.r[18].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
L_003C4714:
    set32(c.r[6], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[29].w[0] + 96u)));  if (t) { goto L_003C473C; } }
L_003C4728:
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[5].d[0]; st32((c.r[8].w[0]), c.r[3].w[0]);  if (t) { goto L_003C4738; } }
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_003C4738:
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.budget -= 1;
L_003C473C:
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[4].d[0]) { set32(c.r[3], ld32((c.r[7].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C4728u | kUnwind; return; } goto L_003C4728; }
    st32((c.r[17].w[0] + 8u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C4760:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_003C47B8; } }
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 16u), c.r[6].w[0]);
    c.budget -= 20;
L_003C47B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C47C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C47EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003C47F0; } }
L_003C47EC:
    set32(c.r[4], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_003C47F0:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_003C4840; }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_003C4814; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 1u);  if (t) { goto L_003C4818; } }
L_003C4814:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_003C4818:
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_003C4908; } }
L_003C4840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4848u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00125A70u; return; } if (c.pc != 0x003C4848u) [[unlikely]] return; }
L_003C4848:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C485Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003C485Cu) [[unlikely]] return; }
L_003C485C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003C48EC; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[8], c.r[16].w[0] + 4u);  if (t) { goto L_003C4898; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] << 2);  if (t) { goto L_003C48A0; } }
L_003C4898:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    c.budget -= 2;
L_003C48A0:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[6].w[0] + c.r[3].w[0]);  if (t) { goto L_003C48D0; } }
L_003C48BC:
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[4].d[0]; st32((c.r[8].w[0]), c.r[3].w[0]);  if (t) { goto L_003C48CC; } }
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_003C48CC:
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.budget -= 1;
L_003C48D0:
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[5].d[0]) { set32(c.r[3], ld32((c.r[7].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C48BCu | kUnwind; return; } goto L_003C48BC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 16u), c.r[16].w[0]);  goto L_003C48F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C48ECu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C48ECu) [[unlikely]] return; }
L_003C48EC:
    st32((c.r[18].w[0] + 16u), c.r[16].w[0]);
    c.budget -= 1;
L_003C48F0:
    set32(c.r[3], c.r[17].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 6;
L_003C4908:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C4920:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003C49E4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 29208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C496C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 29208u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[4].w[0] - 1u);
    st32((c.r[2].w[0] - 9408u), c.r[3].w[0]);
    c.budget -= 7;
L_003C496C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 9408u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0])));  goto L_003C49A4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4998u); set32(c.r[5], c.r[5].w[0] - 25063u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003C4998u) [[unlikely]] return; }
L_003C4998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C49A0u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003C49A0u) [[unlikely]] return; }
L_003C49A0:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003C49A4:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C49B0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003C49B0u) [[unlikely]] return; }
L_003C49B0:
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[17].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 16u)));  if (t) { goto L_003C49D8; } }
L_003C49C8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 4;
L_003C49D8:
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C49C8u | kUnwind; return; } goto L_003C49C8; } }
L_003C49E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C4A00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4A20u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 55u, depth + 1u); else { c.pc = 0x003C4C60u; return; } if (c.pc != 0x003C4A20u) [[unlikely]] return; }
L_003C4A20:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4A30u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 55u, depth + 1u); else { c.pc = 0x003C4C60u; return; } if (c.pc != 0x003C4A30u) [[unlikely]] return; }
L_003C4A30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4A40u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00B1(c, 53u, depth + 1u); else { c.pc = 0x003C4AB0u; return; } if (c.pc != 0x003C4A40u) [[unlikely]] return; }
L_003C4A40:
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { st32((c.r[16].w[0] + 24u), 0u);  goto L_003C4AA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_003C4A8C; } }
L_003C4A5C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 4u);  goto L_003C4A80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4A7Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C4A7Cu) [[unlikely]] return; }
L_003C4A7C:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_003C4A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4A88u);  if (depth < kMaxDepth) unit_0009(c, 154u, depth + 1u); else { c.pc = 0x00125A40u; return; } if (c.pc != 0x003C4A88u) [[unlikely]] return; }
L_003C4A88:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_003C4A8C:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C4A5Cu | kUnwind; return; } goto L_003C4A5C; }
    set32(c.r[3], 0u + 5u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 2;
L_003C4AA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C4AB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003C4C54; } }
    set32(c.r[10], ld32((c.r[5].w[0])));
    set32(c.r[9], ld32((c.r[6].w[0])));
    set32(c.r[11], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[8], c.r[9].w[0] - c.r[10].w[0]);
    c.budget -= 6;
    { const bool t = c.r[8].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));  if (t) { goto L_003C4AE4; } }
    set32(c.r[7], c.r[8].w[0] + 3u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 2));
    c.budget -= 2;
L_003C4AE4:
    c.r[8].d[0] = c.r[9].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { c.r[8].d[0] = c.r[10].d[0] < c.r[11].d[0] ? 1ull : 0ull;  goto L_003C4B20; }
    c.r[1].d[0] = c.r[10].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[9], ld32((c.r[6].w[0] + 20u)));  goto L_003C4B4C; }
    set32(c.r[9], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[9], c.r[9].w[0] - c.r[8].w[0]);
    c.budget -= 5;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 2));  if (t) { goto L_003C4B18; } }
    set32(c.r[8], c.r[9].w[0] + 3u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));
    c.budget -= 2;
L_003C4B18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);  if (t) { goto L_003C4B48; } }
L_003C4B20:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_003C4B48; } }
    set32(c.r[9], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[9], c.r[9].w[0] - c.r[8].w[0]);
    c.budget -= 5;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 2));  if (t) { goto L_003C4B44; } }
    set32(c.r[8], c.r[9].w[0] + 3u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));
    c.budget -= 2;
L_003C4B44:
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.budget -= 1;
L_003C4B48:
    set32(c.r[9], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 1;
L_003C4B4C:
    set32(c.r[8], c.r[7].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[11], 0u + 48u);
    set32(c.r[7], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[9].w[0] - c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 20u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[11].w[0]);
    set32(c.r[9], c.r[8].w[0] << 1);
    set32(c.r[8], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[6].w[0] - c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    c.r[10].d[0] = c.lo.d[0];
    mmi::div(c, 1, c.r[3].w[0], c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] - c.r[10].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 20u)));
    st32((c.r[29].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[8].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[11].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 26;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 4u), c.r[5].w[0]);  if (t) { goto L_003C4BBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[29].w[0] + 4u);  if (t) { goto L_003C4BC0; } }
L_003C4BBC:
    set32(c.r[5], c.r[29].w[0] + 8u);
    c.budget -= 1;
L_003C4BC0:
    set32(c.r[9], ld32((c.r[5].w[0])));
    set32(c.r[10], c.r[29].w[0] + 12u);
    set32(c.r[11], 0u + 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[12], ld32((c.r[5].w[0] - 25088u)));
    set32(c.r[5], c.r[9].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    c.budget -= 9;
L_003C4BE4:
    set32(c.r[5], c.r[5].w[0] - c.r[8].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    mmi::div(c, 0, c.r[5].w[0], c.r[11].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_003C4C54; } }
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 3;
    if (c.r[7].d[0] != c.r[3].d[0]) { c.r[5].d[0] = c.r[4].d[0] << 32;  goto L_003C4C1C; }
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] << 32;
    c.budget -= 2;
L_003C4C1C:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[1].d[0] = c.r[12].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[8], ld32((c.r[7].w[0])));  if (t) { goto L_003C4C38; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 25088u);  if (t) { goto L_003C4C3C; } }
L_003C4C38:
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 1;
L_003C4C3C:
    set32(c.r[9], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[9].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C4BE4u | kUnwind; return; } goto L_003C4BE4; } }
L_003C4C54:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C4C60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[10], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[7], 0u + 10u);
    set32(c.r[9], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0] + 8u)));
    mmi::divu(c, 0, c.r[3].w[0], c.r[7].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[10].w[0]);
    set32(c.r[6], c.r[9].w[0] << 2);
    set32(c.r[6], c.r[10].w[0] + c.r[6].w[0]);
    st32((c.r[29].w[0]), c.r[6].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[10].w[0] + c.r[7].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] - c.r[10].w[0]);
    c.budget -= 20;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 2));  if (t) { goto L_003C4CB8; } }
    set32(c.r[6], c.r[6].w[0] + 3u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 2));
    c.budget -= 2;
L_003C4CB8:
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[7], c.r[6].w[0] - c.r[10].w[0]);
    c.budget -= 4;
    { const bool t = c.r[7].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 2));  if (t) { goto L_003C4CD0; } }
    set32(c.r[6], c.r[7].w[0] + 3u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 2));
    c.budget -= 2;
L_003C4CD0:
    set32(c.r[7], c.r[9].w[0] + c.r[6].w[0]);
    c.budget -= 3;
    if (c.r[7].sd[0] >= 0) { c.r[6].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;  goto L_003C4CE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);  if (t) { goto L_003C4CF0; } }
L_003C4CE4:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  goto L_003C4CF4; }
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    c.budget -= 1;
L_003C4CF0:
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_003C4CF4:
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[10], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[29].w[0]), c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[9], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003C4D1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003C4D20; } }
L_003C4D1C:
    set32(c.r[7], ld32((c.r[10].w[0])));
    c.budget -= 1;
L_003C4D20:
    set32(c.r[5], 0u + 10u);
    st32((c.r[4].w[0]), c.r[10].w[0]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[7].w[0] + 480u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C4D60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C4DD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21520u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003C4DB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21584u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003C4DB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003C4DB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4DB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C4DB8u) [[unlikely]] return; }
L_003C4DB8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C4DD4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4DD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003C4DD0u) [[unlikely]] return; }
L_003C4DD0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C4DD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C4DF0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003C4E18; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_003C4E10; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_003C4E10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C4E1C; } }
L_003C4E18:
    set32(c.r[2], c.r[2].w[0] - 24904u);
    c.budget -= 1;
L_003C4E1C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C4E30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 24896u);  c.pc = t; return; }
L_003C4E40:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4E64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x003C4E64u) [[unlikely]] return; }
L_003C4E64:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 24701u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4E78u); set32(c.r[4], c.r[18].w[0] + 28u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x003C4E78u) [[unlikely]] return; }
L_003C4E78:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4E84u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x003C4E84u) [[unlikely]] return; }
L_003C4E84:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4E90u); set32(c.r[5], c.r[17].w[0] + 72u);  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x003C4E90u) [[unlikely]] return; }
L_003C4E90:
    c.r[16].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4EA4u); c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C4EA4u) [[unlikely]] return; }
L_003C4EA4:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003C4FEC; }
    set32(c.r[16], c.r[18].w[0] + 28u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 24701u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4EC0u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x003C4EC0u) [[unlikely]] return; }
L_003C4EC0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003C4F00; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] - 24701u);
    set32(c.r[6], c.r[17].w[0] + 72u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4EE0u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00B1(c, 93u, depth + 1u); else { c.pc = 0x003C5210u; return; } if (c.pc != 0x003C4EE0u) [[unlikely]] return; }
L_003C4EE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4EECu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x003C4EECu) [[unlikely]] return; }
L_003C4EEC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4EF8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C4EF8u) [[unlikely]] return; }
L_003C4EF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_003C4F10; } }
L_003C4F00:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4F0Cu); set32(c.r[6], c.r[17].w[0] + 72u);  if (depth < kMaxDepth) unit_00B1(c, 87u, depth + 1u); else { c.pc = 0x003C5120u; return; } if (c.pc != 0x003C4F0Cu) [[unlikely]] return; }
L_003C4F0C:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_003C4F10:
    set32(c.r[16], c.r[18].w[0] + 272u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_003C4FC0; } }
L_003C4F1C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 28u);  if (t) { goto L_003C4F30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_003C4F34; } }
L_003C4F30:
    set32(c.r[5], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_003C4F34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4F3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x003C4F3Cu) [[unlikely]] return; }
L_003C4F3C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 156u);  goto L_003C4FB8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[3], c.r[2].w[0] + 28u);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[3].w[0] + 1u);  goto L_003C4F60; }
    set32(c.r[18], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003C4F60:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4F6Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x003C4F6Cu) [[unlikely]] return; }
L_003C4F6C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_003C4FA8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[28].w[0] - 30480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4F88u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00B1(c, 83u, depth + 1u); else { c.pc = 0x003C5070u; return; } if (c.pc != 0x003C4F88u) [[unlikely]] return; }
L_003C4F88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4F94u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x003C4F94u) [[unlikely]] return; }
L_003C4F94:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4FA0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C4FA0u) [[unlikely]] return; }
L_003C4FA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C4FB4; } }
L_003C4FA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4FB4u); set32(c.r[6], c.r[28].w[0] - 30480u);  if (depth < kMaxDepth) unit_00B1(c, 81u, depth + 1u); else { c.pc = 0x003C5000u; return; } if (c.pc != 0x003C4FB4u) [[unlikely]] return; }
L_003C4FB4:
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 1;
L_003C4FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4FC0u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x003C4FC0u) [[unlikely]] return; }
L_003C4FC0:
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], c.r[17].w[0] + 20u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[3].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C4F1Cu | kUnwind; return; } goto L_003C4F1C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 24674u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4FE8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 434u, depth + 1u); else { c.pc = 0x0043F8D0u; return; } if (c.pc != 0x003C4FE8u) [[unlikely]] return; }
L_003C4FE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003C4FEC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003C5000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], c.r[5].w[0] << 5);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.r[16].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[17].w[0] + 4u);
    c.budget -= 14;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  goto L_003C504C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5040u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x003C5040u) [[unlikely]] return; }
L_003C5040:
    set32(c.r[3], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
L_003C504C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C5070:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5098u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x003C5098u) [[unlikely]] return; }
L_003C5098:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[18].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st16((c.r[18].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 2u);
    st32((c.r[18].w[0] + 20u), c.r[5].w[0]);
    c.r[16].d[0] = ld8((c.r[16].w[0]));
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 12;
    if (c.r[4].d[0] == c.r[5].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_003C50DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C50D0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x003C50D0u) [[unlikely]] return; }
L_003C50D0:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
L_003C50DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5104u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C5104u) [[unlikely]] return; }
L_003C5104:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C5120:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[5], c.r[5].w[0] << 5);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], 0u + 256u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[17], c.r[3].w[0] + c.r[5].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 15;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[6].w[0] + 1u);  goto L_003C5160; }
    set32(c.r[18], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 1;
L_003C5160:
    set32(c.r[2], 0u + 512u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5170u); st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003C5170u) [[unlikely]] return; }
L_003C5170:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[19], 0u + 16u);  if (t) { goto L_003C51A4; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[19], ld32((c.r[17].w[0] + 4u)));  goto L_003C51A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C519Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x003C519Cu) [[unlikely]] return; }
L_003C519C:
    set32(c.r[2], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_003C51A4:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_003C51E8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));  goto L_003C51D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C51CCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x003C51CCu) [[unlikely]] return; }
L_003C51CC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_003C51D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C51D8u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x003C51D8u) [[unlikely]] return; }
L_003C51D8:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
L_003C51E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C51F0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x003C51F0u) [[unlikely]] return; }
L_003C51F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C5210:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5240u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x003C5240u) [[unlikely]] return; }
L_003C5240:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[20].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    st16((c.r[20].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 256u);
    st32((c.r[20].w[0] + 20u), c.r[4].w[0]);
    st16((c.r[20].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[16].w[0] + 1u);  goto L_003C5274; }
    set32(c.r[17], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_003C5274:
    set32(c.r[2], 0u + 512u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5284u); st16((c.r[20].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003C5284u) [[unlikely]] return; }
L_003C5284:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[18], 0u + 16u);  if (t) { goto L_003C52B8; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], ld32((c.r[20].w[0] + 4u)));  goto L_003C52B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C52B0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x003C52B0u) [[unlikely]] return; }
L_003C52B0:
    set32(c.r[2], c.r[20].w[0] + 4u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_003C52B8:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 20u)));  goto L_003C52FC; }
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));  goto L_003C52E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C52E0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x003C52E0u) [[unlikely]] return; }
L_003C52E0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));
    c.budget -= 1;
L_003C52E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C52ECu); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x003C52ECu) [[unlikely]] return; }
L_003C52EC:
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 4;
L_003C52FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5304u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x003C5304u) [[unlikely]] return; }
L_003C5304:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5328u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C5328u) [[unlikely]] return; }
L_003C5328:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C5350:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24666u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5380u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003C5380u) [[unlikely]] return; }
L_003C5380:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_003C5398; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5390u); set32(c.r[4], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 377u, depth + 1u); else { c.pc = 0x003C6FC0u; return; } if (c.pc != 0x003C5390u) [[unlikely]] return; }
L_003C5390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C5518; } }
L_003C5398:
    set32(c.r[4], 0u + 5381u);
    c.budget -= 1;
L_003C539C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_003C53C8; } }
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[4].d[0] << 5;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] + c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C539Cu | kUnwind; return; } goto L_003C539C; } }
L_003C53C8:
    c.r[2].d[0] = c.r[4].d[0] << 32;
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[29].w[0] + 240u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C53E4u); set32(c.r[6], c.r[29].w[0] + 244u);  if (depth < kMaxDepth) unit_00B1(c, 275u, depth + 1u); else { c.pc = 0x003C6710u; return; } if (c.pc != 0x003C53E4u) [[unlikely]] return; }
L_003C53E4:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[17], c.r[19].w[0] + 60u);
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[16], ld32((c.r[2].w[0] + 12u)));  goto L_003C541C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[29].w[0] + 240u);  if (t) { goto L_003C544C; } }
L_003C53FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5404u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x003C5404u) [[unlikely]] return; }
L_003C5404:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 240u);  goto L_003C5414; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[29].w[0] + 240u);  if (t) { goto L_003C544C; } }
L_003C5414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C541Cu);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x003C541Cu) [[unlikely]] return; }
L_003C541C:
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] << 32;  goto L_003C5440; }
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[3].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C53FCu | kUnwind; return; } goto L_003C53FC; }
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.budget -= 1;
L_003C5440:
    set32(c.r[3], c.r[29].w[0] + 240u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    c.budget -= 3;
L_003C544C:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[19].w[0] + 60u);
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_003C5474; }
    st32((c.r[29].w[0] + 236u), c.r[3].w[0]);
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C546Cu); set32(c.r[5], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_00B1(c, 379u, depth + 1u); else { c.pc = 0x003C7000u; return; } if (c.pc != 0x003C546Cu) [[unlikely]] return; }
L_003C546C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C5518; } }
L_003C5474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C547Cu); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C547Cu) [[unlikely]] return; }
L_003C547C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C548Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 141u, depth + 1u); else { c.pc = 0x003C57C0u; return; } if (c.pc != 0x003C548Cu) [[unlikely]] return; }
L_003C548C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5498u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00B1(c, 139u, depth + 1u); else { c.pc = 0x003C5780u; return; } if (c.pc != 0x003C5498u) [[unlikely]] return; }
L_003C5498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C54A0u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0004(c, 302u, depth + 1u); else { c.pc = 0x00113640u; return; } if (c.pc != 0x003C54A0u) [[unlikely]] return; }
L_003C54A0:
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C54ACu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 137u, depth + 1u); else { c.pc = 0x003C5740u; return; } if (c.pc != 0x003C54ACu) [[unlikely]] return; }
L_003C54AC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C54BCu); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00B1(c, 135u, depth + 1u); else { c.pc = 0x003C56F0u; return; } if (c.pc != 0x003C54BCu) [[unlikely]] return; }
L_003C54BC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C54C8u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00B1(c, 133u, depth + 1u); else { c.pc = 0x003C5690u; return; } if (c.pc != 0x003C54C8u) [[unlikely]] return; }
L_003C54C8:
    set32(c.r[5], c.r[19].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 248u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C54D8u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00B1(c, 132u, depth + 1u); else { c.pc = 0x003C5680u; return; } if (c.pc != 0x003C54D8u) [[unlikely]] return; }
L_003C54D8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C54E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00B1(c, 129u, depth + 1u); else { c.pc = 0x003C5610u; return; } if (c.pc != 0x003C54E4u) [[unlikely]] return; }
L_003C54E4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C54F0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00B1(c, 126u, depth + 1u); else { c.pc = 0x003C55A0u; return; } if (c.pc != 0x003C54F0u) [[unlikely]] return; }
L_003C54F0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C54FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00B1(c, 123u, depth + 1u); else { c.pc = 0x003C5540u; return; } if (c.pc != 0x003C54FCu) [[unlikely]] return; }
L_003C54FC:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5508u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C5508u) [[unlikely]] return; }
L_003C5508:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5514u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C5514u) [[unlikely]] return; }
L_003C5514:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003C5518:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_003C5540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C5584; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003C5570; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C556Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C556Cu) [[unlikely]] return; }
L_003C556C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003C5570:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C5588; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5584u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003C5584u) [[unlikely]] return; }
L_003C5584:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C5588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C55A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C55F0; } }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003C55DC; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C55D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C55D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C55D8u) [[unlikely]] return; }
L_003C55D8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003C55DC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C55F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C55F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003C55F0u) [[unlikely]] return; }
L_003C55F0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C55F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C5610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C5660; } }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003C564C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C5648; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5648u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C5648u) [[unlikely]] return; }
L_003C5648:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003C564C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C5664; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5660u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003C5660u) [[unlikely]] return; }
L_003C5660:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C5664:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C5680:
    c.budget -= 2;
    {  goto L_003C7110; }
L_003C5690:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[16], c.r[18].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 4u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C56C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003C56C4u) [[unlikely]] return; }
L_003C56C4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 20u));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C56F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[16], c.r[4].w[0] + 4u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5718u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003C5718u) [[unlikely]] return; }
L_003C5718:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 16u));
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C5740:
    set32(c.r[4], 0u + 5381u);
    c.budget -= 1;
L_003C5744:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C5774; } }
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[4].d[0] << 5;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] + c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5744u | kUnwind; return; } goto L_003C5744; } }
L_003C5774:
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  c.pc = t; return; }
L_003C5780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C579Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003C579Cu) [[unlikely]] return; }
L_003C579C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 16u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C57C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C57DCu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003C57DCu) [[unlikely]] return; }
L_003C57DC:
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C5800:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5828u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x003C5828u) [[unlikely]] return; }
L_003C5828:
    set32(c.r[16], c.r[2].w[0] + 272u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 24651u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C583Cu); st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x003C583Cu) [[unlikely]] return; }
L_003C583C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 68u);  goto L_003C5850; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C5874; } }
L_003C5850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5858u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x003C5858u) [[unlikely]] return; }
L_003C5858:
    set32(c.r[5], c.r[18].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5868u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x003C5868u) [[unlikely]] return; }
L_003C5868:
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5874u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x003C5874u) [[unlikely]] return; }
L_003C5874:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003C5888; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C58D4; } }
L_003C5888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5890u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x003C5890u) [[unlikely]] return; }
L_003C5890:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003C58A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C58D4; } }
L_003C58A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C58ACu); set32(c.r[5], c.r[29].w[0] + 79u);  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x003C58ACu) [[unlikely]] return; }
L_003C58AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 79u));  goto L_003C58D4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C58D0; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 79u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C58D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x003C58D0u) [[unlikely]] return; }
L_003C58D0:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 79u));
    c.budget -= 1;
L_003C58D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C58F0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_003C5910:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 5381u);
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 11;
L_003C593C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_003C5968; } }
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[4].d[0] << 5;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] + c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C593Cu | kUnwind; return; } goto L_003C593C; } }
L_003C5968:
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[29].w[0] + 88u);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5984u); set32(c.r[6], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_00B1(c, 275u, depth + 1u); else { c.pc = 0x003C6710u; return; } if (c.pc != 0x003C5984u) [[unlikely]] return; }
L_003C5984:
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[19], ld32((c.r[3].w[0] + 12u)));  goto L_003C59BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 88u);  if (t) { goto L_003C59EC; } }
L_003C599C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C59A4u); set32(c.r[4], c.r[4].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x003C59A4u) [[unlikely]] return; }
L_003C59A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 88u);  goto L_003C59B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 88u);  if (t) { goto L_003C59EC; } }
L_003C59B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C59BCu);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x003C59BCu) [[unlikely]] return; }
L_003C59BC:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].d[0] = c.r[16].d[0] << 32;  goto L_003C59E0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C599Cu | kUnwind; return; } goto L_003C599C; }
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_003C59E0:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
L_003C59EC:
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C5A10:
    set32(c.r[3], c.r[5].w[0] + 12u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003C5A20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 26056u)));  c.pc = t; return; }
L_003C5A30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5A58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x003C5A58u) [[unlikely]] return; }
L_003C5A58:
    set32(c.r[16], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] + 272u);  if (t) { goto L_003C5B04; } }
L_003C5A64:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[3].w[0] + 1u);  goto L_003C5A7C; }
    set32(c.r[17], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003C5A7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5A88u); set32(c.r[4], ld32((c.r[2].w[0] + 31036u)));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003C5A88u) [[unlikely]] return; }
L_003C5A88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 31036u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5A9Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 270u, depth + 1u); else { c.pc = 0x003BA6C0u; return; } if (c.pc != 0x003C5A9Cu) [[unlikely]] return; }
L_003C5A9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = c.r[16].d[0] << 32;  goto L_003C5AFC; }
    set32(c.r[4], c.r[18].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5AB0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x003C5AB0u) [[unlikely]] return; }
L_003C5AB0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003C5AEC; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[28].w[0] - 30484u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5ACCu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00B1(c, 83u, depth + 1u); else { c.pc = 0x003C5070u; return; } if (c.pc != 0x003C5ACCu) [[unlikely]] return; }
L_003C5ACC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5AD8u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x003C5AD8u) [[unlikely]] return; }
L_003C5AD8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5AE4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C5AE4u) [[unlikely]] return; }
L_003C5AE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C5AF8; } }
L_003C5AEC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5AF8u); set32(c.r[6], c.r[28].w[0] - 30484u);  if (depth < kMaxDepth) unit_00B1(c, 81u, depth + 1u); else { c.pc = 0x003C5000u; return; } if (c.pc != 0x003C5AF8u) [[unlikely]] return; }
L_003C5AF8:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_003C5AFC:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], c.r[3].w[0] + 16u);
    c.budget -= 2;
L_003C5B04:
    set32(c.r[5], ld32((c.r[19].w[0] + 40u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    set32(c.r[4], ld32((c.r[19].w[0] + 44u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5A64u | kUnwind; return; } goto L_003C5A64; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003C5B50:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003C5C44; } }
L_003C5B80:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 31024u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[18].w[0] + 44u)));  if (t) { goto L_003C5C14; } }
L_003C5B98:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[21], c.r[3].w[0] + 1u);  goto L_003C5BB0; }
    set32(c.r[21], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003C5BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5BB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003C5BB8u) [[unlikely]] return; }
L_003C5BB8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5BC8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 270u, depth + 1u); else { c.pc = 0x003BA6C0u; return; } if (c.pc != 0x003C5BC8u) [[unlikely]] return; }
L_003C5BC8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[20].d[0] << 32;  goto L_003C5C0C; }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5BDCu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C5BDCu) [[unlikely]] return; }
L_003C5BDC:
    c.r[5].d[0] = c.r[20].d[0] << 32;
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5BECu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_00B1(c, 389u, depth + 1u); else { c.pc = 0x003C71C0u; return; } if (c.pc != 0x003C5BECu) [[unlikely]] return; }
L_003C5BEC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5BF8u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003C5BF8u) [[unlikely]] return; }
L_003C5BF8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5C04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C5C04u) [[unlikely]] return; }
L_003C5C04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C5C60; } }
L_003C5C0C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[20], c.r[2].w[0] + 16u);
    c.budget -= 2;
L_003C5C14:
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    c.r[2].d[0] = c.r[20].d[0] << 32;
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[20].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5B98u | kUnwind; return; } goto L_003C5B98; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003C5C44:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5B80u | kUnwind; return; } goto L_003C5B80; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5C60u); set32(c.r[5], c.r[5].w[0] - 24634u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C5C60u) [[unlikely]] return; }
L_003C5C60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003C5C90:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5CC4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 328u, depth + 1u); else { c.pc = 0x0011F4E0u; return; } if (c.pc != 0x003C5CC4u) [[unlikely]] return; }
L_003C5CC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 31024u);
    set32(c.r[20], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C5D6C; } }
L_003C5CE4:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[21], c.r[3].w[0] + 1u);  goto L_003C5CFC; }
    set32(c.r[21], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003C5CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5D04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003C5D04u) [[unlikely]] return; }
L_003C5D04:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5D14u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 270u, depth + 1u); else { c.pc = 0x003BA6C0u; return; } if (c.pc != 0x003C5D14u) [[unlikely]] return; }
L_003C5D14:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[20].d[0] << 32;  goto L_003C5D64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5D24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003C5D24u) [[unlikely]] return; }
L_003C5D24:
    set32(c.r[5], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5D30u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C5D30u) [[unlikely]] return; }
L_003C5D30:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5D50u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 215u, depth + 1u); else { c.pc = 0x0011E0A0u; return; } if (c.pc != 0x003C5D50u) [[unlikely]] return; }
L_003C5D50:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5D5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C5D5Cu) [[unlikely]] return; }
L_003C5D5C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.budget -= 2;
L_003C5D64:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[20], c.r[2].w[0] + 16u);
    c.budget -= 2;
L_003C5D6C:
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.r[2].d[0] = c.r[20].d[0] << 32;
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[20].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5CE4u | kUnwind; return; } goto L_003C5CE4; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003C5DC0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5DE8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C5DE8u) [[unlikely]] return; }
L_003C5DE8:
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[5], c.r[17].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5DF8u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00B1(c, 272u, depth + 1u); else { c.pc = 0x003C6690u; return; } if (c.pc != 0x003C5DF8u) [[unlikely]] return; }
L_003C5DF8:
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[5], c.r[17].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5E08u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00B1(c, 269u, depth + 1u); else { c.pc = 0x003C6610u; return; } if (c.pc != 0x003C5E08u) [[unlikely]] return; }
L_003C5E08:
    set32(c.r[18], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[16], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5E1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C5E1Cu) [[unlikely]] return; }
L_003C5E1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5E2Cu); set32(c.r[5], c.r[5].w[0] - 24633u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003C5E2Cu) [[unlikely]] return; }
L_003C5E2C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 124u), c.r[18].w[0]);  goto L_003C5ECC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5E44u); set32(c.r[5], c.r[5].w[0] - 24750u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C5E44u) [[unlikely]] return; }
L_003C5E44:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5E64u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 215u, depth + 1u); else { c.pc = 0x0011E0A0u; return; } if (c.pc != 0x003C5E64u) [[unlikely]] return; }
L_003C5E64:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5E70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C5E70u) [[unlikely]] return; }
L_003C5E70:
    st32((c.r[29].w[0] + 124u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C5ECC; } }
L_003C5E7C:
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] + 1u);  goto L_003C5E90; }
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_003C5E90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5E98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 143u, depth + 1u); else { c.pc = 0x003C5800u; return; } if (c.pc != 0x003C5E98u) [[unlikely]] return; }
L_003C5E98:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 124u);  goto L_003C5EC4; }
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5EC0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 215u, depth + 1u); else { c.pc = 0x0011E0A0u; return; } if (c.pc != 0x003C5EC0u) [[unlikely]] return; }
L_003C5EC0:
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 1;
L_003C5EC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5ECCu);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x003C5ECCu) [[unlikely]] return; }
L_003C5ECC:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[18], c.r[2].w[0] + 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5E7Cu | kUnwind; return; } goto L_003C5E7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5EE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 161u, depth + 1u); else { c.pc = 0x003C5A30u; return; } if (c.pc != 0x003C5EE0u) [[unlikely]] return; }
L_003C5EE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003C5F00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 27036u)));  c.pc = t; return; }
L_003C5F10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 24864u);
    set32(c.r[5], c.r[5].w[0] - 24614u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5F38u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0007(c, 125u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x003C5F38u) [[unlikely]] return; }
L_003C5F38:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 24579u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 24566u);
    set32(c.r[7], 0u + 72u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5F64u); set32(c.r[9], c.r[9].w[0] - 24634u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x003C5F64u) [[unlikely]] return; }
L_003C5F64:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5F70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003C5F70u) [[unlikely]] return; }
L_003C5F70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C5F90; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27504u);
    set32(c.r[3], c.r[3].w[0] + 21552u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_003C5F90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5FA0u); set32(c.r[4], c.r[4].w[0] - 24559u);  if (depth < kMaxDepth) unit_0007(c, 64u, depth + 1u); else { c.pc = 0x0011C670u; return; } if (c.pc != 0x003C5FA0u) [[unlikely]] return; }
L_003C5FA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24541u);
    set32(c.r[6], c.r[6].w[0] - 24559u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5FC8u); set32(c.r[9], c.r[9].w[0] - 24634u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x003C5FC8u) [[unlikely]] return; }
L_003C5FC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C5FE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 27036u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 27036u), 0u);  goto L_003C6008; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6004u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C6004u) [[unlikely]] return; }
L_003C6004:
    st32((c.r[28].w[0] - 27036u), 0u);
    c.budget -= 1;
L_003C6008:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C6020:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C6108; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 72u);
    set32(c.r[2], c.r[2].w[0] + 21616u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003C6058; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6058u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C6058u) [[unlikely]] return; }
L_003C6058:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 32u);  goto L_003C6094; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C6090; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C6090; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C6090; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003C6090; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6090u);  if (depth < kMaxDepth) unit_00B1(c, 336u, depth + 1u); else { c.pc = 0x003C6C80u; return; } if (c.pc != 0x003C6090u) [[unlikely]] return; }
L_003C6090:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_003C6094:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 8u);  goto L_003C60B8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C60B4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C60B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C60B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 292u, depth + 1u); else { c.pc = 0x0011EEB0u; return; } if (c.pc != 0x003C60B4u) [[unlikely]] return; }
L_003C60B4:
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_003C60B8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003C60E8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C60E4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C60E4; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003C60E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C60E4u);  if (depth < kMaxDepth) unit_00B1(c, 277u, depth + 1u); else { c.pc = 0x003C6770u; return; } if (c.pc != 0x003C60E4u) [[unlikely]] return; }
L_003C60E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C60E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C60F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 139u, depth + 1u); else { c.pc = 0x001354E0u; return; } if (c.pc != 0x003C60F0u) [[unlikely]] return; }
L_003C60F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C610C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6108u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003C6108u) [[unlikely]] return; }
L_003C6108:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C610C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C6120:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27036u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C6148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C6290; } }
L_003C6148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6150u); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_000F(c, 46u, depth + 1u); else { c.pc = 0x0013C580u; return; } if (c.pc != 0x003C6150u) [[unlikely]] return; }
L_003C6150:
    set32(c.r[4], 0u + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C615Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003C615Cu) [[unlikely]] return; }
L_003C615C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 30488u)));  goto L_003C6180; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6178u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0008(c, 433u, depth + 1u); else { c.pc = 0x00123580u; return; } if (c.pc != 0x003C6178u) [[unlikely]] return; }
L_003C6178:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[28].w[0] - 30488u)));
    c.budget -= 2;
L_003C6180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6188u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000A(c, 391u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x003C6188u) [[unlikely]] return; }
L_003C6188:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C619Cu); set32(c.r[6], c.r[6].w[0] - 24524u);  if (depth < kMaxDepth) unit_000F(c, 23u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x003C619Cu) [[unlikely]] return; }
L_003C619C:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C61ACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x003C61ACu) [[unlikely]] return; }
L_003C61AC:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], 0u + 92u);  goto L_003C61FC; }
    set32(c.r[7], ld32((c.r[28].w[0] - 30488u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C61CCu); set32(c.r[6], c.r[6].w[0] - 24522u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003C61CCu) [[unlikely]] return; }
L_003C61CC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 104u);  goto L_003C61EC; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C61E8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C61E8u) [[unlikely]] return; }
L_003C61E8:
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 1;
L_003C61EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C61F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 39u, depth + 1u); else { c.pc = 0x0013C460u; return; } if (c.pc != 0x003C61F4u) [[unlikely]] return; }
L_003C61F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C6290; } }
L_003C61FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6204u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003C6204u) [[unlikely]] return; }
L_003C6204:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[7].d[0] = c.r[18].d[0] + 0ull;  goto L_003C621C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6218u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 239u, depth + 1u); else { c.pc = 0x003C62B0u; return; } if (c.pc != 0x003C6218u) [[unlikely]] return; }
L_003C6218:
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003C621C:
    st32((c.r[28].w[0] - 27036u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6230u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0008(c, 13u, depth + 1u); else { c.pc = 0x001200F0u; return; } if (c.pc != 0x003C6230u) [[unlikely]] return; }
L_003C6230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6238u); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_000F(c, 37u, depth + 1u); else { c.pc = 0x0013C420u; return; } if (c.pc != 0x003C6238u) [[unlikely]] return; }
L_003C6238:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 24457u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C624Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003C624Cu) [[unlikely]] return; }
L_003C624C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 27036u)));  goto L_003C626C; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6268u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C6268u) [[unlikely]] return; }
L_003C6268:
    set32(c.r[4], ld32((c.r[28].w[0] - 27036u)));
    c.budget -= 1;
L_003C626C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6274u);  if (depth < kMaxDepth) unit_00B1(c, 61u, depth + 1u); else { c.pc = 0x003C4E40u; return; } if (c.pc != 0x003C6274u) [[unlikely]] return; }
L_003C6274:
    set32(c.r[2], ld32((c.r[28].w[0] - 27036u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6280u); set32(c.r[4], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 377u, depth + 1u); else { c.pc = 0x003C6FC0u; return; } if (c.pc != 0x003C6280u) [[unlikely]] return; }
L_003C6280:
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C628Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 39u, depth + 1u); else { c.pc = 0x0013C460u; return; } if (c.pc != 0x003C628Cu) [[unlikely]] return; }
L_003C628C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003C6290:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C62B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C62D4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000D(c, 142u, depth + 1u); else { c.pc = 0x00135570u; return; } if (c.pc != 0x003C62D4u) [[unlikely]] return; }
L_003C62D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[19].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 21616u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C62ECu); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003C62ECu) [[unlikely]] return; }
L_003C62EC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003C6304; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6300u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003C6300u) [[unlikely]] return; }
L_003C6300:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003C6304:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 104u), c.r[2].w[0]);  goto L_003C6318; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6314u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003C6314u) [[unlikely]] return; }
L_003C6314:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_003C6318:
    set32(c.r[5], c.r[29].w[0] + 100u);
    set32(c.r[2], c.r[29].w[0] + 108u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 104u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6334u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 335u, depth + 1u); else { c.pc = 0x003C6C50u; return; } if (c.pc != 0x003C6334u) [[unlikely]] return; }
L_003C6334:
    set32(c.r[3], 0u - 1u);
    set32(c.r[16], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003C6374; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C634Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003C634Cu) [[unlikely]] return; }
L_003C634C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003C6364; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6360u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003C6360u) [[unlikely]] return; }
L_003C6360:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003C6364:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_003C6378; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6374u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003C6374u) [[unlikely]] return; }
L_003C6374:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003C6378:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[17], c.r[19].w[0] + 48u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_003C63C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C639Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003C639Cu) [[unlikely]] return; }
L_003C639C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003C63B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C63B0u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003C63B0u) [[unlikely]] return; }
L_003C63B0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003C63B4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  goto L_003C63C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C63C4u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003C63C4u) [[unlikely]] return; }
L_003C63C4:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 1;
L_003C63C8:
    set32(c.r[5], c.r[29].w[0] + 88u);
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 92u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C63E4u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 388u, depth + 1u); else { c.pc = 0x003C7190u; return; } if (c.pc != 0x003C63E4u) [[unlikely]] return; }
L_003C63E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C63ECu); set32(c.r[4], c.r[19].w[0] + 72u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003C63ECu) [[unlikely]] return; }
L_003C63EC:
    st32((c.r[19].w[0] + 88u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C6410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30492u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003C642C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003C643C; } }
L_003C642C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6434u);  if (depth < kMaxDepth) unit_000D(c, 144u, depth + 1u); else { c.pc = 0x001355D0u; return; } if (c.pc != 0x003C6434u) [[unlikely]] return; }
L_003C6434:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003C643C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C6450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6474u); set32(c.r[4], c.r[4].w[0] - 24864u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003C6474u) [[unlikely]] return; }
L_003C6474:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003C6484; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003C6494; } }
L_003C6484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C648Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 145u, depth + 1u); else { c.pc = 0x001355F0u; return; } if (c.pc != 0x003C648Cu) [[unlikely]] return; }
L_003C648C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003C6494:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C64B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 31220u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003C64C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30492u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003C64DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C64E4; } }
L_003C64DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C64E4u);  if (depth < kMaxDepth) unit_000D(c, 148u, depth + 1u); else { c.pc = 0x00135640u; return; } if (c.pc != 0x003C64E4u) [[unlikely]] return; }
L_003C64E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C64F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30492u)));  c.pc = t; return; }
L_003C6500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C6560; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21584u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003C6548; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003C6548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6548u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C6548u) [[unlikely]] return; }
L_003C6548:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C6564; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6560u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003C6560u) [[unlikely]] return; }
L_003C6560:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C6564:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C6580:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 24832u);  c.pc = t; return; }
L_003C6590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003C65E0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21552u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003C65C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27504u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003C65C4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003C65DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C65DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003C65DCu) [[unlikely]] return; }
L_003C65DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003C65E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C65F0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 24634u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x003C4000u < 16384u) { entry = entries_00B1[(t - 0x003C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003C6610:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[17], c.r[5].w[0] + 12u);  if (t) { goto L_003C666C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[5].w[0] + 16u);  if (t) { goto L_003C6664; } }
L_003C6648:
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6654u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 87u, depth + 1u); else { c.pc = 0x00164BB0u; return; } if (c.pc != 0x003C6654u) [[unlikely]] return; }
L_003C6654:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], ld32((c.r[18].w[0] + 4u)));  goto L_003C6664; }
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[18].w[0])));
    c.budget -= 2;
L_003C6664:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C6648u | kUnwind; return; } goto L_003C6648; }
L_003C666C:
    st32((c.r[20].w[0]), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C6690:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[17], c.r[5].w[0] + 12u);  if (t) { goto L_003C66EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[5].w[0] + 16u);  if (t) { goto L_003C66E4; } }
L_003C66C8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C66D4u); set32(c.r[6], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_0019(c, 87u, depth + 1u); else { c.pc = 0x00164BB0u; return; } if (c.pc != 0x003C66D4u) [[unlikely]] return; }
L_003C66D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[18].w[0] + 4u)));  goto L_003C66E4; }
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[18].w[0])));
    c.budget -= 2;
L_003C66E4:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C66C8u | kUnwind; return; } goto L_003C66C8; }
L_003C66EC:
    st32((c.r[20].w[0]), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C6710:
    set32(c.r[9], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[5].w[0] + 12u);  if (t) { goto L_003C6734; } }
L_003C671C:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[9], ld32((c.r[9].w[0] + 4u)));  goto L_003C6734; }
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.budget -= 2;
L_003C6734:
    c.budget -= 2;
    if (c.r[9].d[0] != 0ull) { set32(c.r[7], ld32((c.r[9].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C671Cu | kUnwind; return; } goto L_003C671C; }
    set32(c.r[3], c.r[5].w[0] + 12u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[5].w[0] + 12u);  goto L_003C6760; }
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[8].w[0] + 12u)));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { st32((c.r[4].w[0]), c.r[8].w[0]);  goto L_003C6764; }
    set32(c.r[3], c.r[5].w[0] + 12u);
    c.budget -= 1;
L_003C6760:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_003C6764:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C6770:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C6890; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_003C6800; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003C67BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C67B8u);  if (depth < kMaxDepth) unit_00B1(c, 277u, depth + 1u); else { c.pc = 0x003C6770u; return; } if (c.pc != 0x003C67B8u) [[unlikely]] return; }
L_003C67B8:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003C67BC:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003C67D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C67CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 277u, depth + 1u); else { c.pc = 0x003C6770u; return; } if (c.pc != 0x003C67CCu) [[unlikely]] return; }
L_003C67CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C67D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C67D8u);  if (depth < kMaxDepth) unit_00B1(c, 334u, depth + 1u); else { c.pc = 0x003C6C40u; return; } if (c.pc != 0x003C67D8u) [[unlikely]] return; }
L_003C67D8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C67E4u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00B1(c, 331u, depth + 1u); else { c.pc = 0x003C6BA0u; return; } if (c.pc != 0x003C67E4u) [[unlikely]] return; }
L_003C67E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C67ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 330u, depth + 1u); else { c.pc = 0x003C6B90u; return; } if (c.pc != 0x003C67ECu) [[unlikely]] return; }
L_003C67EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C67FCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 328u, depth + 1u); else { c.pc = 0x003C6B70u; return; } if (c.pc != 0x003C67FCu) [[unlikely]] return; }
L_003C67FC:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_003C6800:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003C6864; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003C6820; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C681Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 277u, depth + 1u); else { c.pc = 0x003C6770u; return; } if (c.pc != 0x003C681Cu) [[unlikely]] return; }
L_003C681C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003C6820:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003C6834; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6830u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 277u, depth + 1u); else { c.pc = 0x003C6770u; return; } if (c.pc != 0x003C6830u) [[unlikely]] return; }
L_003C6830:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C6834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C683Cu);  if (depth < kMaxDepth) unit_00B1(c, 334u, depth + 1u); else { c.pc = 0x003C6C40u; return; } if (c.pc != 0x003C683Cu) [[unlikely]] return; }
L_003C683C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6848u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00B1(c, 331u, depth + 1u); else { c.pc = 0x003C6BA0u; return; } if (c.pc != 0x003C6848u) [[unlikely]] return; }
L_003C6848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6850u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 330u, depth + 1u); else { c.pc = 0x003C6B90u; return; } if (c.pc != 0x003C6850u) [[unlikely]] return; }
L_003C6850:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6860u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 328u, depth + 1u); else { c.pc = 0x003C6B70u; return; } if (c.pc != 0x003C6860u) [[unlikely]] return; }
L_003C6860:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C6864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C686Cu);  if (depth < kMaxDepth) unit_00B1(c, 334u, depth + 1u); else { c.pc = 0x003C6C40u; return; } if (c.pc != 0x003C686Cu) [[unlikely]] return; }
L_003C686C:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6878u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00B1(c, 324u, depth + 1u); else { c.pc = 0x003C6AB0u; return; } if (c.pc != 0x003C6878u) [[unlikely]] return; }
L_003C6878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6880u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 330u, depth + 1u); else { c.pc = 0x003C6B90u; return; } if (c.pc != 0x003C6880u) [[unlikely]] return; }
L_003C6880:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_003C6894; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6890u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C6890u) [[unlikely]] return; }
L_003C6890:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003C6894:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 12u);  goto L_003C6998; }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_003C6904; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003C68C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C68BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 277u, depth + 1u); else { c.pc = 0x003C6770u; return; } if (c.pc != 0x003C68BCu) [[unlikely]] return; }
L_003C68BC:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003C68C0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003C68D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C68D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 277u, depth + 1u); else { c.pc = 0x003C6770u; return; } if (c.pc != 0x003C68D0u) [[unlikely]] return; }
L_003C68D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C68D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C68DCu);  if (depth < kMaxDepth) unit_00B1(c, 334u, depth + 1u); else { c.pc = 0x003C6C40u; return; } if (c.pc != 0x003C68DCu) [[unlikely]] return; }
L_003C68DC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C68E8u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00B1(c, 331u, depth + 1u); else { c.pc = 0x003C6BA0u; return; } if (c.pc != 0x003C68E8u) [[unlikely]] return; }
L_003C68E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C68F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 330u, depth + 1u); else { c.pc = 0x003C6B90u; return; } if (c.pc != 0x003C68F0u) [[unlikely]] return; }
L_003C68F0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6900u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 328u, depth + 1u); else { c.pc = 0x003C6B70u; return; } if (c.pc != 0x003C6900u) [[unlikely]] return; }
L_003C6900:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_003C6904:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003C6968; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003C6924; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6920u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 277u, depth + 1u); else { c.pc = 0x003C6770u; return; } if (c.pc != 0x003C6920u) [[unlikely]] return; }
L_003C6920:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003C6924:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003C6938; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6934u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 277u, depth + 1u); else { c.pc = 0x003C6770u; return; } if (c.pc != 0x003C6934u) [[unlikely]] return; }
L_003C6934:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C6938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6940u);  if (depth < kMaxDepth) unit_00B1(c, 334u, depth + 1u); else { c.pc = 0x003C6C40u; return; } if (c.pc != 0x003C6940u) [[unlikely]] return; }
L_003C6940:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C694Cu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00B1(c, 331u, depth + 1u); else { c.pc = 0x003C6BA0u; return; } if (c.pc != 0x003C694Cu) [[unlikely]] return; }
L_003C694C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6954u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 330u, depth + 1u); else { c.pc = 0x003C6B90u; return; } if (c.pc != 0x003C6954u) [[unlikely]] return; }
L_003C6954:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6964u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 328u, depth + 1u); else { c.pc = 0x003C6B70u; return; } if (c.pc != 0x003C6964u) [[unlikely]] return; }
L_003C6964:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C6968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6970u);  if (depth < kMaxDepth) unit_00B1(c, 334u, depth + 1u); else { c.pc = 0x003C6C40u; return; } if (c.pc != 0x003C6970u) [[unlikely]] return; }
L_003C6970:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C697Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00B1(c, 324u, depth + 1u); else { c.pc = 0x003C6AB0u; return; } if (c.pc != 0x003C697Cu) [[unlikely]] return; }
L_003C697C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6984u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 330u, depth + 1u); else { c.pc = 0x003C6B90u; return; } if (c.pc != 0x003C6984u) [[unlikely]] return; }
L_003C6984:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003C6994; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6994u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C6994u) [[unlikely]] return; }
L_003C6994:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_003C6998:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C6A50; } }
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 12u);  goto L_003C69FC; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C69F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C69BCu);  if (depth < kMaxDepth) unit_0010(c, 535u, depth + 1u); else { c.pc = 0x00143E60u; return; } if (c.pc != 0x003C69BCu) [[unlikely]] return; }
L_003C69BC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C69F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C69D4u); set32(c.r[4], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_00B1(c, 323u, depth + 1u); else { c.pc = 0x003C6AA0u; return; } if (c.pc != 0x003C69D4u) [[unlikely]] return; }
L_003C69D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C69DCu); set32(c.r[4], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_00B1(c, 322u, depth + 1u); else { c.pc = 0x003C6A90u; return; } if (c.pc != 0x003C69DCu) [[unlikely]] return; }
L_003C69DC:
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C69E8u); set32(c.r[4], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_00B1(c, 321u, depth + 1u); else { c.pc = 0x003C6A80u; return; } if (c.pc != 0x003C69E8u) [[unlikely]] return; }
L_003C69E8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003C69F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C69F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C69F8u) [[unlikely]] return; }
L_003C69F8:
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_003C69FC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C6A50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C6A50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6A14u);  if (depth < kMaxDepth) unit_0010(c, 535u, depth + 1u); else { c.pc = 0x00143E60u; return; } if (c.pc != 0x003C6A14u) [[unlikely]] return; }
L_003C6A14:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C6A50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6A2Cu); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_00B1(c, 323u, depth + 1u); else { c.pc = 0x003C6AA0u; return; } if (c.pc != 0x003C6A2Cu) [[unlikely]] return; }
L_003C6A2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6A34u); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_00B1(c, 322u, depth + 1u); else { c.pc = 0x003C6A90u; return; } if (c.pc != 0x003C6A34u) [[unlikely]] return; }
L_003C6A34:
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6A40u); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_00B1(c, 321u, depth + 1u); else { c.pc = 0x003C6A80u; return; } if (c.pc != 0x003C6A40u) [[unlikely]] return; }
L_003C6A40:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003C6A50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6A50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C6A50u) [[unlikely]] return; }
L_003C6A50:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003C6A64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6A60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C6A60u) [[unlikely]] return; }
L_003C6A60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003C6A64:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C6A80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 12u);  c.pc = t; return; }
L_003C6A90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_003C6AA0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] >> 33;  c.pc = t; return; }
L_003C6AB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C6B50; } }
    set32(c.r[2], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C6B04; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C6B04; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C6B04; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C6B04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6B04u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C6B04u) [[unlikely]] return; }
L_003C6B04:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_003C6B3C; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003C6B38; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C6B38; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C6B38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6B38u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C6B38u) [[unlikely]] return; }
L_003C6B38:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_003C6B3C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003C6B54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6B50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003C6B50u) [[unlikely]] return; }
L_003C6B50:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003C6B54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C6B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003C6B84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6B84u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C6B84u) [[unlikely]] return; }
L_003C6B84:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C6B90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_003C6BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003C6C28; }
    set32(c.r[3], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C6BF0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C6BF0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C6BF0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C6BF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6BF0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C6BF0u) [[unlikely]] return; }
L_003C6BF0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003C6C24; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003C6C24; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C6C24; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C6C24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6C24u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C6C24u) [[unlikely]] return; }
L_003C6C24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003C6C28:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C6C40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003C6C50:
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
L_003C6C80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C6DA0; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_003C6D10; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003C6CCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6CC8u);  if (depth < kMaxDepth) unit_00B1(c, 336u, depth + 1u); else { c.pc = 0x003C6C80u; return; } if (c.pc != 0x003C6CC8u) [[unlikely]] return; }
L_003C6CC8:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003C6CCC:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003C6CE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6CDCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 336u, depth + 1u); else { c.pc = 0x003C6C80u; return; } if (c.pc != 0x003C6CDCu) [[unlikely]] return; }
L_003C6CDC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C6CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6CE8u);  if (depth < kMaxDepth) unit_00B1(c, 376u, depth + 1u); else { c.pc = 0x003C6FB0u; return; } if (c.pc != 0x003C6CE8u) [[unlikely]] return; }
L_003C6CE8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6CF4u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00B1(c, 374u, depth + 1u); else { c.pc = 0x003C6F50u; return; } if (c.pc != 0x003C6CF4u) [[unlikely]] return; }
L_003C6CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6CFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 373u, depth + 1u); else { c.pc = 0x003C6F40u; return; } if (c.pc != 0x003C6CFCu) [[unlikely]] return; }
L_003C6CFC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6D0Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 371u, depth + 1u); else { c.pc = 0x003C6F20u; return; } if (c.pc != 0x003C6D0Cu) [[unlikely]] return; }
L_003C6D0C:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_003C6D10:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003C6D74; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003C6D30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6D2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 336u, depth + 1u); else { c.pc = 0x003C6C80u; return; } if (c.pc != 0x003C6D2Cu) [[unlikely]] return; }
L_003C6D2C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003C6D30:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003C6D44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6D40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 336u, depth + 1u); else { c.pc = 0x003C6C80u; return; } if (c.pc != 0x003C6D40u) [[unlikely]] return; }
L_003C6D40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C6D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6D4Cu);  if (depth < kMaxDepth) unit_00B1(c, 376u, depth + 1u); else { c.pc = 0x003C6FB0u; return; } if (c.pc != 0x003C6D4Cu) [[unlikely]] return; }
L_003C6D4C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6D58u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00B1(c, 374u, depth + 1u); else { c.pc = 0x003C6F50u; return; } if (c.pc != 0x003C6D58u) [[unlikely]] return; }
L_003C6D58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6D60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 373u, depth + 1u); else { c.pc = 0x003C6F40u; return; } if (c.pc != 0x003C6D60u) [[unlikely]] return; }
L_003C6D60:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6D70u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 371u, depth + 1u); else { c.pc = 0x003C6F20u; return; } if (c.pc != 0x003C6D70u) [[unlikely]] return; }
L_003C6D70:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C6D74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6D7Cu);  if (depth < kMaxDepth) unit_00B1(c, 376u, depth + 1u); else { c.pc = 0x003C6FB0u; return; } if (c.pc != 0x003C6D7Cu) [[unlikely]] return; }
L_003C6D7C:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6D88u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00B1(c, 129u, depth + 1u); else { c.pc = 0x003C5610u; return; } if (c.pc != 0x003C6D88u) [[unlikely]] return; }
L_003C6D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6D90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 373u, depth + 1u); else { c.pc = 0x003C6F40u; return; } if (c.pc != 0x003C6D90u) [[unlikely]] return; }
L_003C6D90:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_003C6DA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6DA0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C6DA0u) [[unlikely]] return; }
L_003C6DA0:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003C6DA4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 12u);  goto L_003C6EA8; }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_003C6E14; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003C6DD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6DCCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 336u, depth + 1u); else { c.pc = 0x003C6C80u; return; } if (c.pc != 0x003C6DCCu) [[unlikely]] return; }
L_003C6DCC:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003C6DD0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003C6DE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6DE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 336u, depth + 1u); else { c.pc = 0x003C6C80u; return; } if (c.pc != 0x003C6DE0u) [[unlikely]] return; }
L_003C6DE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C6DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6DECu);  if (depth < kMaxDepth) unit_00B1(c, 376u, depth + 1u); else { c.pc = 0x003C6FB0u; return; } if (c.pc != 0x003C6DECu) [[unlikely]] return; }
L_003C6DEC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6DF8u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00B1(c, 374u, depth + 1u); else { c.pc = 0x003C6F50u; return; } if (c.pc != 0x003C6DF8u) [[unlikely]] return; }
L_003C6DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6E00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 373u, depth + 1u); else { c.pc = 0x003C6F40u; return; } if (c.pc != 0x003C6E00u) [[unlikely]] return; }
L_003C6E00:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6E10u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 371u, depth + 1u); else { c.pc = 0x003C6F20u; return; } if (c.pc != 0x003C6E10u) [[unlikely]] return; }
L_003C6E10:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_003C6E14:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003C6E78; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003C6E34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6E30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 336u, depth + 1u); else { c.pc = 0x003C6C80u; return; } if (c.pc != 0x003C6E30u) [[unlikely]] return; }
L_003C6E30:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003C6E34:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003C6E48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6E44u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 336u, depth + 1u); else { c.pc = 0x003C6C80u; return; } if (c.pc != 0x003C6E44u) [[unlikely]] return; }
L_003C6E44:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C6E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6E50u);  if (depth < kMaxDepth) unit_00B1(c, 376u, depth + 1u); else { c.pc = 0x003C6FB0u; return; } if (c.pc != 0x003C6E50u) [[unlikely]] return; }
L_003C6E50:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6E5Cu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00B1(c, 374u, depth + 1u); else { c.pc = 0x003C6F50u; return; } if (c.pc != 0x003C6E5Cu) [[unlikely]] return; }
L_003C6E5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6E64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 373u, depth + 1u); else { c.pc = 0x003C6F40u; return; } if (c.pc != 0x003C6E64u) [[unlikely]] return; }
L_003C6E64:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6E74u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 371u, depth + 1u); else { c.pc = 0x003C6F20u; return; } if (c.pc != 0x003C6E74u) [[unlikely]] return; }
L_003C6E74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C6E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6E80u);  if (depth < kMaxDepth) unit_00B1(c, 376u, depth + 1u); else { c.pc = 0x003C6FB0u; return; } if (c.pc != 0x003C6E80u) [[unlikely]] return; }
L_003C6E80:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6E8Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00B1(c, 129u, depth + 1u); else { c.pc = 0x003C5610u; return; } if (c.pc != 0x003C6E8Cu) [[unlikely]] return; }
L_003C6E8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6E94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 373u, depth + 1u); else { c.pc = 0x003C6F40u; return; } if (c.pc != 0x003C6E94u) [[unlikely]] return; }
L_003C6E94:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003C6EA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6EA4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C6EA4u) [[unlikely]] return; }
L_003C6EA4:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_003C6EA8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C6EF0; } }
    set32(c.r[3], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C6EF0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C6EF0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C6EF0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C6EF0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C6EF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6EF0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C6EF0u) [[unlikely]] return; }
L_003C6EF0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003C6F04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6F00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C6F00u) [[unlikely]] return; }
L_003C6F00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003C6F04:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C6F20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003C6F34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6F34u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C6F34u) [[unlikely]] return; }
L_003C6F34:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C6F40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_003C6F50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003C6F9C; } }
    set32(c.r[3], c.r[5].w[0] + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003C6FA0; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C6F9C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C6F9C; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C6F9C; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C6F9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6F9Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C6F9Cu) [[unlikely]] return; }
L_003C6F9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003C6FA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C6FB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003C6FC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C6FF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6FE0u);  if (depth < kMaxDepth) unit_00B1(c, 336u, depth + 1u); else { c.pc = 0x003C6C80u; return; } if (c.pc != 0x003C6FE0u) [[unlikely]] return; }
L_003C6FE0:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], c.r[16].w[0] + 12u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_003C6FF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C7000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C7080; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[17].w[0] + 20u);  if (t) { goto L_003C7058; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0])));  if (t) { goto L_003C703C; } }
L_003C7034:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_003C703C:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C7034u | kUnwind; return; } goto L_003C7034; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_003C7078; } }
L_003C7058:
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[2], 0u - 2u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    if (c.r[4].d[0] != c.r[2].d[0]) { st32((c.r[5].w[0]), c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C7058u | kUnwind; return; } goto L_003C7058; }
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_003C7078:
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003C7080:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C708Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 45u, depth + 1u); else { c.pc = 0x001188B0u; return; } if (c.pc != 0x003C708Cu) [[unlikely]] return; }
L_003C708C:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C70D8; } }
    set32(c.r[3], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C70D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C70D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C70D8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C70D8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C70D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C70D8u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C70D8u) [[unlikely]] return; }
L_003C70D8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_003C70EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C70E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C70E8u) [[unlikely]] return; }
L_003C70E8:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003C70EC:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C7110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[10], c.r[5].w[0] + 12u);
    set32(c.r[9], ld32((c.r[5].w[0] + 12u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003C7164; } }
L_003C713C:
    set32(c.r[3], ld32((c.r[9].w[0] + 12u)));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003C7158; } }
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003C7164; } }
L_003C7158:
    set32(c.r[9], ld32((c.r[9].w[0] + 4u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003C7164:
    c.budget -= 2;
    if (c.r[9].d[0] != 0ull) { set32(c.r[4], ld32((c.r[8].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C713Cu | kUnwind; return; } goto L_003C713C; }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7178u); c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 435u, depth + 1u); else { c.pc = 0x003C7760u; return; } if (c.pc != 0x003C7178u) [[unlikely]] return; }
L_003C7178:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C7190:
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
L_003C71C0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[16].w[0] - c.r[20].w[0]);
    c.budget -= 18;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));  if (t) { goto L_003C7210; } }
    set32(c.r[2], c.r[3].w[0] + 15u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_003C7210:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 8u)));  goto L_003C729C; }
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[20].w[0] + 16u);  if (t) { goto L_003C728C; } }
L_003C7228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7230u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 251u, depth + 1u); else { c.pc = 0x0011E530u; return; } if (c.pc != 0x003C7230u) [[unlikely]] return; }
L_003C7230:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C723Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 250u, depth + 1u); else { c.pc = 0x0011E520u; return; } if (c.pc != 0x003C723Cu) [[unlikely]] return; }
L_003C723C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003C7254; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C724Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 248u, depth + 1u); else { c.pc = 0x0011E500u; return; } if (c.pc != 0x003C724Cu) [[unlikely]] return; }
L_003C724C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], ld32((c.r[2].w[0])));  if (t) { goto L_003C7260; } }
L_003C7254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C725Cu);  if (depth < kMaxDepth) unit_0007(c, 249u, depth + 1u); else { c.pc = 0x0011E510u; return; } if (c.pc != 0x003C725Cu) [[unlikely]] return; }
L_003C725C:
    c.r[22].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003C7260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7268u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003C7268u) [[unlikely]] return; }
L_003C7268:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 140u)));
    set32(c.r[8], c.r[17].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7284u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x003C7284u) [[unlikely]] return; }
L_003C7284:
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.budget -= 2;
L_003C728C:
    c.r[2].d[0] = c.r[19].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C7228u | kUnwind; return; } goto L_003C7228; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_003C729C:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_003C72E8; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C72E4; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C72E4; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C72E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C72E4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C72E4u) [[unlikely]] return; }
L_003C72E4:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003C72E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003C7310:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[6].w[0] + 4u)));  c.pc = t; return; }
L_003C7320:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], c.r[6].w[0] + 12u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u - 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003C7398; } }
L_003C7340:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[6].d[0] == 0ull) { c.r[6].d[0] = c.r[4].d[0] << 32;  goto L_003C7380; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[6].w[0])));  if (t) { goto L_003C7360; } }
L_003C7358:
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 2;
L_003C7360:
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C7358u | kUnwind; return; } goto L_003C7358; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003C7398; } }
L_003C737C:
    c.r[6].d[0] = c.r[4].d[0] << 32;
    c.budget -= 1;
L_003C7380:
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    c.r[4].d[0] = c.r[3].d[0] & c.r[5].d[0];
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C737Cu | kUnwind; return; } goto L_003C737C; } }
L_003C7398:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_003C73B0; } }
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].d[0] = c.r[4].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C7340u | kUnwind; return; } goto L_003C7340; }
L_003C73B0:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { c.r[2].d[0] = c.r[4].d[0] << 32;  goto L_003C73C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C7464; } }
L_003C73C0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], c.r[2].w[0] + 12u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_003C73DC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003C73DC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[8].w[0]), c.r[2].w[0]);  if (t) { goto L_003C7460; } }
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C73F8u); set32(c.r[5], c.r[2].w[0] + 28u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003C73F8u) [[unlikely]] return; }
L_003C73F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 36u)));  goto L_003C7420; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[6].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_003C7420:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 40u)));  goto L_003C742C; }
    set32(c.r[5], c.r[29].w[0] + 33u);
    c.budget -= 1;
L_003C742C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C743Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C743Cu) [[unlikely]] return; }
L_003C743C:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_003C7464; }
    set32(c.r[4], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C7460; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7460u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C7460u) [[unlikely]] return; }
L_003C7460:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003C7464:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C7480:
    set32(c.r[29], c.r[29].w[0] - 2256u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C74B0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 133u, depth + 1u); else { c.pc = 0x0013DA70u; return; } if (c.pc != 0x003C74B0u) [[unlikely]] return; }
L_003C74B0:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C74C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C74C0u) [[unlikely]] return; }
L_003C74C0:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C74D4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C74D4u) [[unlikely]] return; }
L_003C74D4:
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C74E4u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_000F(c, 87u, depth + 1u); else { c.pc = 0x0013CF20u; return; } if (c.pc != 0x003C74E4u) [[unlikely]] return; }
L_003C74E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[18].w[0])));  if (t) { goto L_003C7514; } }
L_003C74EC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7500u); set32(c.r[6], 0u + 2048u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C7500u) [[unlikely]] return; }
L_003C7500:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7510u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 113u, depth + 1u); else { c.pc = 0x0013D500u; return; } if (c.pc != 0x003C7510u) [[unlikely]] return; }
L_003C7510:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003C7514:
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7520u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C7520u) [[unlikely]] return; }
L_003C7520:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C74ECu | kUnwind; return; } goto L_003C74EC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] - 24912u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C753Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 80u, depth + 1u); else { c.pc = 0x0013CD70u; return; } if (c.pc != 0x003C753Cu) [[unlikely]] return; }
L_003C753C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7544u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 65u, depth + 1u); else { c.pc = 0x0013CA00u; return; } if (c.pc != 0x003C7544u) [[unlikely]] return; }
L_003C7544:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7550u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C7550u) [[unlikely]] return; }
L_003C7550:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C755Cu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C755Cu) [[unlikely]] return; }
L_003C755C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7568u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003C7568u) [[unlikely]] return; }
L_003C7568:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7574u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003C7574u) [[unlikely]] return; }
L_003C7574:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7580u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003C7580u) [[unlikely]] return; }
L_003C7580:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C758Cu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003C758Cu) [[unlikely]] return; }
L_003C758C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 2252u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C759Cu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00B1(c, 431u, depth + 1u); else { c.pc = 0x003C76A0u; return; } if (c.pc != 0x003C759Cu) [[unlikely]] return; }
L_003C759C:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 80u)));  goto L_003C75C4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C75C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C75C0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C75C0u) [[unlikely]] return; }
L_003C75C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 1;
L_003C75C4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 128u)));  goto L_003C75E8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C75E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C75E4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C75E4u) [[unlikely]] return; }
L_003C75E4:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 1;
L_003C75E8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 112u)));  goto L_003C760C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C7608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7608u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C7608u) [[unlikely]] return; }
L_003C7608:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 1;
L_003C760C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 144u)));  goto L_003C7630; }
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C762C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C762Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C762Cu) [[unlikely]] return; }
L_003C762C:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 1;
L_003C7630:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 160u)));  goto L_003C7654; }
    set32(c.r[4], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C7650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7650u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C7650u) [[unlikely]] return; }
L_003C7650:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 1;
L_003C7654:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_003C7678; }
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C7674; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7674u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C7674u) [[unlikely]] return; }
L_003C7674:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_003C7678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7680u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 121u, depth + 1u); else { c.pc = 0x0013D730u; return; } if (c.pc != 0x003C7680u) [[unlikely]] return; }
L_003C7680:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2256u);  c.pc = t; return; }
L_003C76A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[20].w[0] + 12u);
    set32(c.r[17], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 17;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003C7720; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[20].w[0] + 16u);  if (t) { goto L_003C7718; } }
L_003C76EC:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C76FCu); c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 87u, depth + 1u); else { c.pc = 0x00164BB0u; return; } if (c.pc != 0x003C76FCu) [[unlikely]] return; }
L_003C76FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 4u)));  goto L_003C7710; }
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003C7718; } }
L_003C7710:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C7718:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C76ECu | kUnwind; return; } goto L_003C76EC; }
L_003C7720:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7734u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 441u, depth + 1u); else { c.pc = 0x003C7880u; return; } if (c.pc != 0x003C7734u) [[unlikely]] return; }
L_003C7734:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003C7760:
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
    { const bool t = c.r[1].d[0] != 0ull; c.r[18].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003C77C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C77BCu); set32(c.r[5], c.r[5].w[0] - 24288u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003C77BCu) [[unlikely]] return; }
L_003C77BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C77C4u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003C77C4u) [[unlikely]] return; }
L_003C77C4:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C77D0u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003C77D0u) [[unlikely]] return; }
L_003C77D0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[17].w[0] + 12u);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_003C7804; }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[16], c.r[3].w[0] + 4u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C77F8u); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003C77F8u) [[unlikely]] return; }
L_003C77F8:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 20u));
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 3;
L_003C7804:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003C7824; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[17].w[0]);  if (t) { goto L_003C7828; } }
L_003C7824:
    st32((c.r[20].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_003C7828:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7840u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x003C7840u) [[unlikely]] return; }
L_003C7840:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C7850; }
    st32((c.r[21].w[0] + 20u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003C7850:
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
L_003C7880:
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
    { const bool t = c.r[1].d[0] != 0ull; c.r[18].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003C78E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C78DCu); set32(c.r[5], c.r[5].w[0] - 24288u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003C78DCu) [[unlikely]] return; }
L_003C78DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C78E4u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003C78E4u) [[unlikely]] return; }
L_003C78E4:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C78F0u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003C78F0u) [[unlikely]] return; }
L_003C78F0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] + 12u);
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_003C791C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C790Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003C790Cu) [[unlikely]] return; }
L_003C790C:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7918u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003C7918u) [[unlikely]] return; }
L_003C7918:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_003C791C:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003C793C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[17].w[0]);  if (t) { goto L_003C7940; } }
L_003C793C:
    st32((c.r[20].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_003C7940:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7958u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x003C7958u) [[unlikely]] return; }
L_003C7958:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C7968; }
    st32((c.r[21].w[0] + 20u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003C7968:
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
L_003C7990:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 24240u);  c.pc = t; return; }
L_003C79A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C79C0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00CB(c, 287u, depth + 1u); else { c.pc = 0x0042E4C0u; return; } if (c.pc != 0x003C79C0u) [[unlikely]] return; }
L_003C79C0:
    st32((c.r[18].w[0] + 84u), 0u);
    set32(c.r[3], 0u + 13u);
    st32((c.r[18].w[0] + 88u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 424u)));
    c.budget -= 7;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003C7B0C; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[17], c.r[3].w[0] + 140u);
    set32(c.r[3], ld32((c.r[3].w[0] + 144u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C7B08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C79F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 223u, depth + 1u); else { c.pc = 0x0042DE00u; return; } if (c.pc != 0x003C79F8u) [[unlikely]] return; }
L_003C79F8:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_003C7A30; } }
L_003C7A0C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7A24u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C7A24u) [[unlikely]] return; }
L_003C7A24:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.budget -= 3;
L_003C7A30:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C7A0Cu | kUnwind; return; } goto L_003C7A0C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_003C7A8C; } }
L_003C7A68:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7A80u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C7A80u) [[unlikely]] return; }
L_003C7A80:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.budget -= 3;
L_003C7A8C:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C7A68u | kUnwind; return; } goto L_003C7A68; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7AC4u); set32(c.r[6], c.r[6].w[0] - 24224u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C7AC4u) [[unlikely]] return; }
L_003C7AC4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7AD0u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C7AD0u) [[unlikely]] return; }
L_003C7AD0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 124u));  goto L_003C7AF8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 106u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C7AF4; } }
    c.f[12] = ld32((c.r[29].w[0] + 124u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7AF4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C7AF4u) [[unlikely]] return; }
L_003C7AF4:
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    c.budget -= 1;
L_003C7AF8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7B08u); st32((c.r[18].w[0] + 80u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C7B08u) [[unlikely]] return; }
L_003C7B08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003C7B0C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003C7B30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C7B40:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    set32(c.r[19], ld32((c.r[4].w[0] + 44u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003C7C18; } }
L_003C7B7C:
    set32(c.r[20], ld32((c.r[28].w[0] - 30364u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7B98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C7B98u) [[unlikely]] return; }
L_003C7B98:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[20].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003C7BF0; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[20], ld32((c.r[28].w[0] - 30336u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7BB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C7BB4u) [[unlikely]] return; }
L_003C7BB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_003C7BEC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[20], ld32((c.r[28].w[0] - 30412u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7BD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C7BD0u) [[unlikely]] return; }
L_003C7BD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_003C7BEC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7BECu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C7BECu) [[unlikely]] return; }
L_003C7BEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003C7BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7BF8u);  if (depth < kMaxDepth) unit_00B2(c, 79u, depth + 1u); else { c.pc = 0x003C8B20u; return; } if (c.pc != 0x003C7BF8u) [[unlikely]] return; }
L_003C7BF8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[3].d[0] = c.r[19].d[0] << 32;  goto L_003C7C10; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C7C0C; } }
    st8((c.r[2].w[0] + 56u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003C7C0C:
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.budget -= 1;
L_003C7C10:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[19], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_003C7C18:
    set32(c.r[5], ld32((c.r[18].w[0] + 40u)));
    c.r[3].d[0] = c.r[19].d[0] << 32;
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[19].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C7B7Cu | kUnwind; return; } goto L_003C7B7C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003C7C70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_003C7C80:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    set32(c.r[20], ld32((c.r[4].w[0] + 44u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003C7D38; } }
L_003C7CBC:
    set32(c.r[21], ld32((c.r[28].w[0] - 30364u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7CD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C7CD8u) [[unlikely]] return; }
L_003C7CD8:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[21].d[0]) { c.r[3].d[0] = c.r[20].d[0] << 32;  goto L_003C7D30; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[21], ld32((c.r[28].w[0] - 30336u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7CF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C7CF4u) [[unlikely]] return; }
L_003C7CF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_003C7D2C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[21], ld32((c.r[28].w[0] - 30412u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7D10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C7D10u) [[unlikely]] return; }
L_003C7D10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_003C7D2C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7D2Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C7D2Cu) [[unlikely]] return; }
L_003C7D2C:
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.budget -= 1;
L_003C7D30:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[20], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_003C7D38:
    set32(c.r[5], ld32((c.r[19].w[0] + 40u)));
    c.r[3].d[0] = c.r[20].d[0] << 32;
    set32(c.r[4], ld32((c.r[19].w[0] + 44u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[20].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C7CBCu | kUnwind; return; } goto L_003C7CBC; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003C7D80; }
    c.f[1] = ld32((c.r[19].w[0] + 80u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_003C7D84; } }
L_003C7D80:
    c.f[0] = c.r[3].w[0];
    c.budget -= 1;
L_003C7D84:
    st32((c.r[19].w[0] + 24u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003C7DB0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[8], 0u - 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7DF0u); set32(c.r[6], c.r[6].w[0] - 24206u);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x003C7DF0u) [[unlikely]] return; }
L_003C7DF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7E00u); set32(c.r[5], c.r[5].w[0] - 24204u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x003C7E00u) [[unlikely]] return; }
L_003C7E00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_003C7F44; }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7E14u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x003C7E14u) [[unlikely]] return; }
L_003C7E14:
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003C7EFC; } }
L_003C7E2C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7E38u); set32(c.r[5], c.r[5].w[0] - 24192u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C7E38u) [[unlikely]] return; }
L_003C7E38:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7E4Cu); set32(c.r[7], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0010(c, 37u, depth + 1u); else { c.pc = 0x001403C0u; return; } if (c.pc != 0x003C7E4Cu) [[unlikely]] return; }
L_003C7E4C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7E58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C7E58u) [[unlikely]] return; }
L_003C7E58:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], c.r[29].w[0] + 129u);  goto L_003C7E6C; }
    set32(c.r[20], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_003C7E6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7E74u);  if (depth < kMaxDepth) unit_00B5(c, 164u, depth + 1u); else { c.pc = 0x003D5AE0u; return; } if (c.pc != 0x003C7E74u) [[unlikely]] return; }
L_003C7E74:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7E94u); set32(c.r[7], c.r[7].w[0] - 24190u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C7E94u) [[unlikely]] return; }
L_003C7E94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7E9Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 81u, depth + 1u); else { c.pc = 0x003C8B50u; return; } if (c.pc != 0x003C7E9Cu) [[unlikely]] return; }
L_003C7E9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 220u), c.r[2].w[0]);  if (t) { goto L_003C7EEC; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[4], c.r[19].w[0] + 48u);
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 220u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7EC4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x003C7EC4u) [[unlikely]] return; }
L_003C7EC4:
    set32(c.r[4], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7ED8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C7ED8u) [[unlikely]] return; }
L_003C7ED8:
    set32(c.r[4], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7EECu); set32(c.r[5], ld32((c.r[19].w[0] + 8u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C7EECu) [[unlikely]] return; }
L_003C7EEC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7EF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C7EF8u) [[unlikely]] return; }
L_003C7EF8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003C7EFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7F0Cu); set32(c.r[5], c.r[5].w[0] - 24192u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C7F0Cu) [[unlikely]] return; }
L_003C7F0C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7F18u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0010(c, 51u, depth + 1u); else { c.pc = 0x001405E0u; return; } if (c.pc != 0x003C7F18u) [[unlikely]] return; }
L_003C7F18:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[20].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  if (t) { goto L_003C7F2C; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7F2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C7F2Cu) [[unlikely]] return; }
L_003C7F2C:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C7E2Cu | kUnwind; return; } goto L_003C7E2C; }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7F40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C7F40u) [[unlikely]] return; }
L_003C7F40:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_003C7F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7F4Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x003C7F4Cu) [[unlikely]] return; }
L_003C7F4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003C7F70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[5].w[0]);  c.pc = t; return; }
L_003C7F80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[5].w[0]);  c.pc = t; return; }
L_003C7F90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7FBCu); set32(c.r[4], c.r[18].w[0] + 812u);  if (depth < kMaxDepth) unit_00B2(c, 6u, depth + 1u); else { c.pc = 0x003C8060u; return; } if (c.pc != 0x003C7FBCu) [[unlikely]] return; }
L_003C7FBC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], c.r[2].w[0] << 2);  goto L_003C7FCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_00B2(c, 5u, depth); } }
L_003C7FCC:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7FE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003C7FE4u) [[unlikely]] return; }
L_003C7FE4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  [[clang::musttail]] return unit_00B2(c, 4u, depth); }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7FFCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C7FFCu) [[unlikely]] return; }
L_003C7FFC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
    [[clang::musttail]] return unit_00B2(c, 1u, depth);
}

}
