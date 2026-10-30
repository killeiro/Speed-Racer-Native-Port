#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0,
    0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 22, 0, 0, 23, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0,
    0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56,
    0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0,
    0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0,
    0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0,
    0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83,
    0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96,
    0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109,
    0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0,
    124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0,
    0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0,
    159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0,
    164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0,
    0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0,
    0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0,
    0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 194,
    0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0,
    0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0,
    0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0,
    0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0,
    222, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0,
    237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0,
    0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255,
    0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0,
    0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0,
    272, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0,
    280, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0,
    0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0,
    299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0,
    312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316,
    0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0,
    0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 339,
    0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351,
    0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0,
    361, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0,
    369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0,
    0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 378,
    0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0,
    389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0,
    393, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0,
    0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0,
    0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0,
    0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0,
    0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0,
    0, 434, 0, 435, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0,
    0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0,
    0, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 446, 0, 0,
    0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0,
    0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0,
    0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 0, 461, 0, 0, 462, 0, 0, 463, 0, 0, 464, 0,
    0, 465, 0, 0, 466, 0, 0, 467, 0, 0, 468, 0, 0, 469, 0, 0, 470, 0, 0, 471, 0, 0, 472, 0, 0, 473, 0, 0, 474, 0, 0, 475,
    0, 0, 476, 0, 0, 477, 0, 0, 478, 0, 0, 479, 0, 0, 480, 0, 0, 481, 0, 0, 482, 0, 0, 483, 0, 0, 484, 0, 0, 485, 0, 0,
    486, 0, 0, 487, 0, 0, 488, 0, 0, 489, 0, 0, 490, 0, 0, 491, 0, 0, 492, 0, 0, 493, 0, 0, 494, 0, 0, 495, 0, 0, 496, 0,
    0, 497, 0, 0, 498, 0, 0, 499, 0, 0, 500, 0, 0, 501, 0, 0, 502, 0, 0, 503, 0, 0, 504, 0, 0, 505, 0, 0, 506, 0, 0, 507,
    0, 0, 508, 0, 0, 509, 0, 0, 510, 0, 0, 511, 0, 0, 512, 0, 0, 513, 0, 0, 514, 0, 0, 515, 0, 0, 516, 0, 0, 517, 0, 0,
    518, 0, 0, 519, 0, 0, 520, 0, 0, 521, 0, 0, 522, 0, 0, 523, 0, 0, 524, 0, 0, 525, 0, 0, 526, 0, 0, 527, 0, 528, 0, 529,
    0, 530, 0, 531, 0, 532, 0, 533, 0, 534, 0, 535, 0, 536, 0, 537, 0, 538, 0, 539, 0, 540, 0, 541, 0, 542, 0, 543, 0, 544, 0, 545,
    0, 546, 0, 547, 0, 548, 0, 549, 0, 550, 0, 551, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554,
    0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0,
    0, 559, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 563,
};

void unit_006A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002A8000;
    case 2u: goto L_002A8034;
    case 3u: goto L_002A8044;
    case 4u: goto L_002A8060;
    case 5u: goto L_002A8080;
    case 6u: goto L_002A80B0;
    case 7u: goto L_002A8100;
    case 8u: goto L_002A814C;
    case 9u: goto L_002A815C;
    case 10u: goto L_002A81B4;
    case 11u: goto L_002A81CC;
    case 12u: goto L_002A81EC;
    case 13u: goto L_002A8240;
    case 14u: goto L_002A8278;
    case 15u: goto L_002A8298;
    case 16u: goto L_002A82C0;
    case 17u: goto L_002A82E0;
    case 18u: goto L_002A8304;
    case 19u: goto L_002A8320;
    case 20u: goto L_002A8340;
    case 21u: goto L_002A835C;
    case 22u: goto L_002A8360;
    case 23u: goto L_002A836C;
    case 24u: goto L_002A83B4;
    case 25u: goto L_002A8400;
    case 26u: goto L_002A8438;
    case 27u: goto L_002A8454;
    case 28u: goto L_002A84A0;
    case 29u: goto L_002A84B0;
    case 30u: goto L_002A84CC;
    case 31u: goto L_002A853C;
    case 32u: goto L_002A8560;
    case 33u: goto L_002A8588;
    case 34u: goto L_002A85D0;
    case 35u: goto L_002A8610;
    case 36u: goto L_002A8628;
    case 37u: goto L_002A8640;
    case 38u: goto L_002A8680;
    case 39u: goto L_002A868C;
    case 40u: goto L_002A86AC;
    case 41u: goto L_002A86EC;
    case 42u: goto L_002A8700;
    case 43u: goto L_002A8720;
    case 44u: goto L_002A8750;
    case 45u: goto L_002A8764;
    case 46u: goto L_002A87BC;
    case 47u: goto L_002A87F0;
    case 48u: goto L_002A8824;
    case 49u: goto L_002A8834;
    case 50u: goto L_002A8844;
    case 51u: goto L_002A8868;
    case 52u: goto L_002A8878;
    case 53u: goto L_002A8884;
    case 54u: goto L_002A88B4;
    case 55u: goto L_002A88CC;
    case 56u: goto L_002A88FC;
    case 57u: goto L_002A890C;
    case 58u: goto L_002A8918;
    case 59u: goto L_002A8940;
    case 60u: goto L_002A8974;
    case 61u: goto L_002A8994;
    case 62u: goto L_002A89B8;
    case 63u: goto L_002A89D4;
    case 64u: goto L_002A89F0;
    case 65u: goto L_002A8A28;
    case 66u: goto L_002A8A38;
    case 67u: goto L_002A8A54;
    case 68u: goto L_002A8A68;
    case 69u: goto L_002A8A78;
    case 70u: goto L_002A8AA0;
    case 71u: goto L_002A8AEC;
    case 72u: goto L_002A8B0C;
    case 73u: goto L_002A8B18;
    case 74u: goto L_002A8B44;
    case 75u: goto L_002A8B54;
    case 76u: goto L_002A8B70;
    case 77u: goto L_002A8B88;
    case 78u: goto L_002A8B98;
    case 79u: goto L_002A8BC8;
    case 80u: goto L_002A8C00;
    case 81u: goto L_002A8C48;
    case 82u: goto L_002A8C58;
    case 83u: goto L_002A8C7C;
    case 84u: goto L_002A8C8C;
    case 85u: goto L_002A8CAC;
    case 86u: goto L_002A8CB4;
    case 87u: goto L_002A8D00;
    case 88u: goto L_002A8D30;
    case 89u: goto L_002A8D40;
    case 90u: goto L_002A8D50;
    case 91u: goto L_002A8D80;
    case 92u: goto L_002A8D90;
    case 93u: goto L_002A8DC0;
    case 94u: goto L_002A8DCC;
    case 95u: goto L_002A8DE8;
    case 96u: goto L_002A8DFC;
    case 97u: goto L_002A8E14;
    case 98u: goto L_002A8E44;
    case 99u: goto L_002A8E54;
    case 100u: goto L_002A8E74;
    case 101u: goto L_002A8EA4;
    case 102u: goto L_002A8EB4;
    case 103u: goto L_002A8ED8;
    case 104u: goto L_002A8EE8;
    case 105u: goto L_002A8F08;
    case 106u: goto L_002A8F30;
    case 107u: goto L_002A8F54;
    case 108u: goto L_002A8F70;
    case 109u: goto L_002A8F7C;
    case 110u: goto L_002A8F98;
    case 111u: goto L_002A8FAC;
    case 112u: goto L_002A8FBC;
    case 113u: goto L_002A8FF0;
    case 114u: goto L_002A9020;
    case 115u: goto L_002A90C0;
    case 116u: goto L_002A91CC;
    case 117u: goto L_002A928C;
    case 118u: goto L_002A92D4;
    case 119u: goto L_002A9308;
    case 120u: goto L_002A9320;
    case 121u: goto L_002A9340;
    case 122u: goto L_002A9350;
    case 123u: goto L_002A936C;
    case 124u: goto L_002A9380;
    case 125u: goto L_002A9390;
    case 126u: goto L_002A93A0;
    case 127u: goto L_002A93B8;
    case 128u: goto L_002A93CC;
    case 129u: goto L_002A93F0;
    case 130u: goto L_002A9470;
    case 131u: goto L_002A94F0;
    case 132u: goto L_002A9518;
    case 133u: goto L_002A952C;
    case 134u: goto L_002A9544;
    case 135u: goto L_002A9560;
    case 136u: goto L_002A9584;
    case 137u: goto L_002A95A4;
    case 138u: goto L_002A95CC;
    case 139u: goto L_002A95F4;
    case 140u: goto L_002A9610;
    case 141u: goto L_002A9658;
    case 142u: goto L_002A966C;
    case 143u: goto L_002A9684;
    case 144u: goto L_002A96A0;
    case 145u: goto L_002A96C4;
    case 146u: goto L_002A96F4;
    case 147u: goto L_002A9718;
    case 148u: goto L_002A9740;
    case 149u: goto L_002A9770;
    case 150u: goto L_002A97AC;
    case 151u: goto L_002A97BC;
    case 152u: goto L_002A97D4;
    case 153u: goto L_002A97E4;
    case 154u: goto L_002A9800;
    case 155u: goto L_002A9820;
    case 156u: goto L_002A9844;
    case 157u: goto L_002A9854;
    case 158u: goto L_002A9868;
    case 159u: goto L_002A9880;
    case 160u: goto L_002A98B0;
    case 161u: goto L_002A98C0;
    case 162u: goto L_002A98DC;
    case 163u: goto L_002A98F0;
    case 164u: goto L_002A9900;
    case 165u: goto L_002A9920;
    case 166u: goto L_002A9930;
    case 167u: goto L_002A9958;
    case 168u: goto L_002A9968;
    case 169u: goto L_002A9984;
    case 170u: goto L_002A9998;
    case 171u: goto L_002A99A8;
    case 172u: goto L_002A99C0;
    case 173u: goto L_002A99DC;
    case 174u: goto L_002A99F8;
    case 175u: goto L_002A9A08;
    case 176u: goto L_002A9A1C;
    case 177u: goto L_002A9A38;
    case 178u: goto L_002A9A48;
    case 179u: goto L_002A9A64;
    case 180u: goto L_002A9A78;
    case 181u: goto L_002A9A88;
    case 182u: goto L_002A9AA0;
    case 183u: goto L_002A9AD4;
    case 184u: goto L_002A9AE4;
    case 185u: goto L_002A9B00;
    case 186u: goto L_002A9B1C;
    case 187u: goto L_002A9B40;
    case 188u: goto L_002A9B50;
    case 189u: goto L_002A9B80;
    case 190u: goto L_002A9B9C;
    case 191u: goto L_002A9BC0;
    case 192u: goto L_002A9BDC;
    case 193u: goto L_002A9BE8;
    case 194u: goto L_002A9BFC;
    case 195u: goto L_002A9C0C;
    case 196u: goto L_002A9C20;
    case 197u: goto L_002A9C40;
    case 198u: goto L_002A9C80;
    case 199u: goto L_002A9CC0;
    case 200u: goto L_002A9CDC;
    case 201u: goto L_002A9CE8;
    case 202u: goto L_002A9D00;
    case 203u: goto L_002A9D10;
    case 204u: goto L_002A9D20;
    case 205u: goto L_002A9D3C;
    case 206u: goto L_002A9D48;
    case 207u: goto L_002A9D60;
    case 208u: goto L_002A9D78;
    case 209u: goto L_002A9D88;
    case 210u: goto L_002A9DB0;
    case 211u: goto L_002A9DD8;
    case 212u: goto L_002A9DE8;
    case 213u: goto L_002A9E08;
    case 214u: goto L_002A9E30;
    case 215u: goto L_002A9E40;
    case 216u: goto L_002A9E74;
    case 217u: goto L_002A9E84;
    case 218u: goto L_002A9EA0;
    case 219u: goto L_002A9EC0;
    case 220u: goto L_002A9EE0;
    case 221u: goto L_002A9EEC;
    case 222u: goto L_002A9F00;
    case 223u: goto L_002A9F10;
    case 224u: goto L_002A9F24;
    case 225u: goto L_002A9F2C;
    case 226u: goto L_002A9F44;
    case 227u: goto L_002A9F58;
    case 228u: goto L_002A9F90;
    case 229u: goto L_002A9FD0;
    case 230u: goto L_002AA048;
    case 231u: goto L_002AA090;
    case 232u: goto L_002AA0AC;
    case 233u: goto L_002AA0B8;
    case 234u: goto L_002AA0C8;
    case 235u: goto L_002AA0E0;
    case 236u: goto L_002AA0F0;
    case 237u: goto L_002AA100;
    case 238u: goto L_002AA11C;
    case 239u: goto L_002AA128;
    case 240u: goto L_002AA140;
    case 241u: goto L_002AA154;
    case 242u: goto L_002AA170;
    case 243u: goto L_002AA188;
    case 244u: goto L_002AA198;
    case 245u: goto L_002AA1C0;
    case 246u: goto L_002AA1E8;
    case 247u: goto L_002AA1F8;
    case 248u: goto L_002AA21C;
    case 249u: goto L_002AA248;
    case 250u: goto L_002AA254;
    case 251u: goto L_002AA2B0;
    case 252u: goto L_002AA2C0;
    case 253u: goto L_002AA2D0;
    case 254u: goto L_002AA2E0;
    case 255u: goto L_002AA2FC;
    case 256u: goto L_002AA308;
    case 257u: goto L_002AA31C;
    case 258u: goto L_002AA32C;
    case 259u: goto L_002AA340;
    case 260u: goto L_002AA350;
    case 261u: goto L_002AA364;
    case 262u: goto L_002AA374;
    case 263u: goto L_002AA388;
    case 264u: goto L_002AA398;
    case 265u: goto L_002AA3AC;
    case 266u: goto L_002AA3C0;
    case 267u: goto L_002AA3DC;
    case 268u: goto L_002AA540;
    case 269u: goto L_002AA55C;
    case 270u: goto L_002AA568;
    case 271u: goto L_002AA574;
    case 272u: goto L_002AA580;
    case 273u: goto L_002AA58C;
    case 274u: goto L_002AA5A0;
    case 275u: goto L_002AA5B0;
    case 276u: goto L_002AA5C0;
    case 277u: goto L_002AA5DC;
    case 278u: goto L_002AA5E8;
    case 279u: goto L_002AA5F4;
    case 280u: goto L_002AA600;
    case 281u: goto L_002AA60C;
    case 282u: goto L_002AA620;
    case 283u: goto L_002AA63C;
    case 284u: goto L_002AA6A0;
    case 285u: goto L_002AA6CC;
    case 286u: goto L_002AA6D8;
    case 287u: goto L_002AA6F4;
    case 288u: goto L_002AA710;
    case 289u: goto L_002AA724;
    case 290u: goto L_002AA7A0;
    case 291u: goto L_002AA7D0;
    case 292u: goto L_002AA7EC;
    case 293u: goto L_002AA810;
    case 294u: goto L_002AA820;
    case 295u: goto L_002AA834;
    case 296u: goto L_002AA840;
    case 297u: goto L_002AA854;
    case 298u: goto L_002AA870;
    case 299u: goto L_002AA880;
    case 300u: goto L_002AA890;
    case 301u: goto L_002AA8A0;
    case 302u: goto L_002AA8B0;
    case 303u: goto L_002AA8C0;
    case 304u: goto L_002AA8D8;
    case 305u: goto L_002AA8E8;
    case 306u: goto L_002AA910;
    case 307u: goto L_002AA938;
    case 308u: goto L_002AA948;
    case 309u: goto L_002AA964;
    case 310u: goto L_002AA980;
    case 311u: goto L_002AA9E0;
    case 312u: goto L_002AAA00;
    case 313u: goto L_002AAA10;
    case 314u: goto L_002AAA50;
    case 315u: goto L_002AAA60;
    case 316u: goto L_002AAA7C;
    case 317u: goto L_002AAA90;
    case 318u: goto L_002AAAA0;
    case 319u: goto L_002AAAAC;
    case 320u: goto L_002AAAC8;
    case 321u: goto L_002AAAF0;
    case 322u: goto L_002AAB00;
    case 323u: goto L_002AAB1C;
    case 324u: goto L_002AAB30;
    case 325u: goto L_002AAB40;
    case 326u: goto L_002AAB64;
    case 327u: goto L_002AAB74;
    case 328u: goto L_002AAB90;
    case 329u: goto L_002AABA4;
    case 330u: goto L_002AABB4;
    case 331u: goto L_002AABD0;
    case 332u: goto L_002AABEC;
    case 333u: goto L_002AAC00;
    case 334u: goto L_002AAC20;
    case 335u: goto L_002AAC30;
    case 336u: goto L_002AAC40;
    case 337u: goto L_002AAC5C;
    case 338u: goto L_002AAC68;
    case 339u: goto L_002AAC7C;
    case 340u: goto L_002AAC8C;
    case 341u: goto L_002AACA0;
    case 342u: goto L_002AACC0;
    case 343u: goto L_002AACDC;
    case 344u: goto L_002AAD34;
    case 345u: goto L_002AAD80;
    case 346u: goto L_002AAD9C;
    case 347u: goto L_002AADAC;
    case 348u: goto L_002AADC0;
    case 349u: goto L_002AADD0;
    case 350u: goto L_002AADE0;
    case 351u: goto L_002AADFC;
    case 352u: goto L_002AAE08;
    case 353u: goto L_002AAE1C;
    case 354u: goto L_002AAE30;
    case 355u: goto L_002AAE48;
    case 356u: goto L_002AAE58;
    case 357u: goto L_002AAE80;
    case 358u: goto L_002AAEB4;
    case 359u: goto L_002AAEC0;
    case 360u: goto L_002AAEDC;
    case 361u: goto L_002AAF00;
    case 362u: goto L_002AAF10;
    case 363u: goto L_002AAF20;
    case 364u: goto L_002AAF30;
    case 365u: goto L_002AAF40;
    case 366u: goto L_002AAF50;
    case 367u: goto L_002AAF60;
    case 368u: goto L_002AAF70;
    case 369u: goto L_002AAF80;
    case 370u: goto L_002AAFB0;
    case 371u: goto L_002AAFCC;
    case 372u: goto L_002AAFF0;
    case 373u: goto L_002AB004;
    case 374u: goto L_002AB030;
    case 375u: goto L_002AB040;
    case 376u: goto L_002AB05C;
    case 377u: goto L_002AB068;
    case 378u: goto L_002AB07C;
    case 379u: goto L_002AB098;
    case 380u: goto L_002AB0B8;
    case 381u: goto L_002AB0D0;
    case 382u: goto L_002AB0F0;
    case 383u: goto L_002AB14C;
    case 384u: goto L_002AB160;
    case 385u: goto L_002AB17C;
    case 386u: goto L_002AB1B0;
    case 387u: goto L_002AB1CC;
    case 388u: goto L_002AB1E0;
    case 389u: goto L_002AB200;
    case 390u: goto L_002AB21C;
    case 391u: goto L_002AB244;
    case 392u: goto L_002AB260;
    case 393u: goto L_002AB280;
    case 394u: goto L_002AB288;
    case 395u: goto L_002AB2A8;
    case 396u: goto L_002AB2B8;
    case 397u: goto L_002AB2D4;
    case 398u: goto L_002AB2E8;
    case 399u: goto L_002AB2F8;
    case 400u: goto L_002AB310;
    case 401u: goto L_002AB324;
    case 402u: goto L_002AB32C;
    case 403u: goto L_002AB340;
    case 404u: goto L_002AB35C;
    case 405u: goto L_002AB36C;
    case 406u: goto L_002AB38C;
    case 407u: goto L_002AB39C;
    case 408u: goto L_002AB3C0;
    case 409u: goto L_002AB418;
    case 410u: goto L_002AB424;
    case 411u: goto L_002AB440;
    case 412u: goto L_002AB460;
    case 413u: goto L_002AB48C;
    case 414u: goto L_002AB49C;
    case 415u: goto L_002AB4BC;
    case 416u: goto L_002AB4CC;
    case 417u: goto L_002AB4E8;
    case 418u: goto L_002AB504;
    case 419u: goto L_002AB524;
    case 420u: goto L_002AB534;
    case 421u: goto L_002AB550;
    case 422u: goto L_002AB564;
    case 423u: goto L_002AB574;
    case 424u: goto L_002AB594;
    case 425u: goto L_002AB5A4;
    case 426u: goto L_002AB5C0;
    case 427u: goto L_002AB5D4;
    case 428u: goto L_002AB5E4;
    case 429u: goto L_002AB610;
    case 430u: goto L_002AB62C;
    case 431u: goto L_002AB6F0;
    case 432u: goto L_002AB720;
    case 433u: goto L_002AB760;
    case 434u: goto L_002AB784;
    case 435u: goto L_002AB78C;
    case 436u: goto L_002AB790;
    case 437u: goto L_002AB7D8;
    case 438u: goto L_002AB7F0;
    case 439u: goto L_002AB804;
    case 440u: goto L_002AB820;
    case 441u: goto L_002AB830;
    case 442u: goto L_002AB878;
    case 443u: goto L_002AB888;
    case 444u: goto L_002AB8A4;
    case 445u: goto L_002AB8E8;
    case 446u: goto L_002AB8F4;
    case 447u: goto L_002AB910;
    case 448u: goto L_002AB930;
    case 449u: goto L_002AB948;
    case 450u: goto L_002AB968;
    case 451u: goto L_002AB978;
    case 452u: goto L_002AB9A0;
    case 453u: goto L_002AB9D4;
    case 454u: goto L_002AB9F0;
    case 455u: goto L_002ABA10;
    case 456u: goto L_002ABA54;
    case 457u: goto L_002ABA70;
    case 458u: goto L_002ABA90;
    case 459u: goto L_002ABABC;
    case 460u: goto L_002ABAC8;
    case 461u: goto L_002ABAD4;
    case 462u: goto L_002ABAE0;
    case 463u: goto L_002ABAEC;
    case 464u: goto L_002ABAF8;
    case 465u: goto L_002ABB04;
    case 466u: goto L_002ABB10;
    case 467u: goto L_002ABB1C;
    case 468u: goto L_002ABB28;
    case 469u: goto L_002ABB34;
    case 470u: goto L_002ABB40;
    case 471u: goto L_002ABB4C;
    case 472u: goto L_002ABB58;
    case 473u: goto L_002ABB64;
    case 474u: goto L_002ABB70;
    case 475u: goto L_002ABB7C;
    case 476u: goto L_002ABB88;
    case 477u: goto L_002ABB94;
    case 478u: goto L_002ABBA0;
    case 479u: goto L_002ABBAC;
    case 480u: goto L_002ABBB8;
    case 481u: goto L_002ABBC4;
    case 482u: goto L_002ABBD0;
    case 483u: goto L_002ABBDC;
    case 484u: goto L_002ABBE8;
    case 485u: goto L_002ABBF4;
    case 486u: goto L_002ABC00;
    case 487u: goto L_002ABC0C;
    case 488u: goto L_002ABC18;
    case 489u: goto L_002ABC24;
    case 490u: goto L_002ABC30;
    case 491u: goto L_002ABC3C;
    case 492u: goto L_002ABC48;
    case 493u: goto L_002ABC54;
    case 494u: goto L_002ABC60;
    case 495u: goto L_002ABC6C;
    case 496u: goto L_002ABC78;
    case 497u: goto L_002ABC84;
    case 498u: goto L_002ABC90;
    case 499u: goto L_002ABC9C;
    case 500u: goto L_002ABCA8;
    case 501u: goto L_002ABCB4;
    case 502u: goto L_002ABCC0;
    case 503u: goto L_002ABCCC;
    case 504u: goto L_002ABCD8;
    case 505u: goto L_002ABCE4;
    case 506u: goto L_002ABCF0;
    case 507u: goto L_002ABCFC;
    case 508u: goto L_002ABD08;
    case 509u: goto L_002ABD14;
    case 510u: goto L_002ABD20;
    case 511u: goto L_002ABD2C;
    case 512u: goto L_002ABD38;
    case 513u: goto L_002ABD44;
    case 514u: goto L_002ABD50;
    case 515u: goto L_002ABD5C;
    case 516u: goto L_002ABD68;
    case 517u: goto L_002ABD74;
    case 518u: goto L_002ABD80;
    case 519u: goto L_002ABD8C;
    case 520u: goto L_002ABD98;
    case 521u: goto L_002ABDA4;
    case 522u: goto L_002ABDB0;
    case 523u: goto L_002ABDBC;
    case 524u: goto L_002ABDC8;
    case 525u: goto L_002ABDD4;
    case 526u: goto L_002ABDE0;
    case 527u: goto L_002ABDEC;
    case 528u: goto L_002ABDF4;
    case 529u: goto L_002ABDFC;
    case 530u: goto L_002ABE04;
    case 531u: goto L_002ABE0C;
    case 532u: goto L_002ABE14;
    case 533u: goto L_002ABE1C;
    case 534u: goto L_002ABE24;
    case 535u: goto L_002ABE2C;
    case 536u: goto L_002ABE34;
    case 537u: goto L_002ABE3C;
    case 538u: goto L_002ABE44;
    case 539u: goto L_002ABE4C;
    case 540u: goto L_002ABE54;
    case 541u: goto L_002ABE5C;
    case 542u: goto L_002ABE64;
    case 543u: goto L_002ABE6C;
    case 544u: goto L_002ABE74;
    case 545u: goto L_002ABE7C;
    case 546u: goto L_002ABE84;
    case 547u: goto L_002ABE8C;
    case 548u: goto L_002ABE94;
    case 549u: goto L_002ABE9C;
    case 550u: goto L_002ABEA4;
    case 551u: goto L_002ABEAC;
    case 552u: goto L_002ABEB4;
    case 553u: goto L_002ABECC;
    case 554u: goto L_002ABEFC;
    case 555u: goto L_002ABF0C;
    case 556u: goto L_002ABF2C;
    case 557u: goto L_002ABF44;
    case 558u: goto L_002ABF74;
    case 559u: goto L_002ABF84;
    case 560u: goto L_002ABFA4;
    case 561u: goto L_002ABFBC;
    case 562u: goto L_002ABFEC;
    case 563u: goto L_002ABFFC;
    default: bad_entry(c, 0x002A8000u); return;
    }
L_002A8000:
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st16((c.r[16].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 54u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 55u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 56u), 0u);  if (t) { goto L_002A8044; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8034u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A8034u) [[unlikely]] return; }
L_002A8034:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8044u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A8044u) [[unlikely]] return; }
L_002A8044:
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[4], c.r[4].w[0] + 15200u);
    st32((c.r[16].w[0] + 68u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8060u); st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002A8060u) [[unlikely]] return; }
L_002A8060:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 30644u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 15200u);
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[28].w[0] - 30644u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8080u); st16((c.r[28].w[0] - 30644u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002A8080u) [[unlikely]] return; }
L_002A8080:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 4095ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A80B0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8100u); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x002A8100u) [[unlikely]] return; }
L_002A8100:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 9968u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0] + 8u), 0u);
    st16((c.r[20].w[0] + 12u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st32((c.r[20].w[0] + 32u), c.r[18].w[0]);
    st32((c.r[20].w[0] + 36u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 40u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 44u), c.r[22].w[0]);
    st16((c.r[20].w[0] + 48u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st16((c.r[20].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[20].w[0] + 54u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 55u), static_cast<std::uint8_t>(0u));
    c.budget -= 17;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[20].w[0] + 56u), 0u);  if (t) { goto L_002A815C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A814Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A814Cu) [[unlikely]] return; }
L_002A814C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A815Cu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A815Cu) [[unlikely]] return; }
L_002A815C:
    st32((c.r[20].w[0] + 60u), 0u);
    c.r[2].d[0] = c.r[23].d[0] & 65535ull;
    c.r[5].d[0] = ld16((c.r[20].w[0] + 50u));
    set32(c.r[4], 0u - 64u);
    c.r[3].d[0] = c.r[2].d[0] & 63ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4095ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st16((c.r[20].w[0] + 50u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 50u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[30].d[0];
    st16((c.r[20].w[0] + 50u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld16((c.r[20].w[0] + 48u));
    c.budget -= 17;
    if (c.r[5].sd[0] <= 0) { st32((c.r[20].w[0] + 72u), 0u);  goto L_002A81B8; }
    set32(c.r[6], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002A81B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A81B4u); set32(c.r[4], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_005F(c, 25u, depth + 1u); else { c.pc = 0x0027C650u; return; } if (c.pc != 0x002A81B4u) [[unlikely]] return; }
L_002A81B4:
    st32((c.r[20].w[0] + 72u), 0u);
    c.budget -= 1;
L_002A81B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[20].w[0] + 68u), 0u);
    set32(c.r[4], c.r[4].w[0] + 15200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A81CCu); st8((c.r[20].w[0] + 64u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002A81CCu) [[unlikely]] return; }
L_002A81CC:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 30644u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 15200u);
    st16((c.r[20].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[28].w[0] - 30644u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A81ECu); st16((c.r[28].w[0] - 30644u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002A81ECu) [[unlikely]] return; }
L_002A81EC:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 4095ull;
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[20].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
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
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002A8240:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002A8280; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8278u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002A8278u) [[unlikely]] return; }
L_002A8278:
    st32((c.r[18].w[0] + 20u), 0u);
    st32((c.r[18].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 2;
L_002A8280:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A829C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8298u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002A8298u) [[unlikely]] return; }
L_002A8298:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_002A829C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002A82C4; }
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  if (t) { goto L_002A82C0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A82C0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002A82C0u) [[unlikely]] return; }
L_002A82C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002A82C4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A82E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 27696u), 0u);  goto L_002A8308; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8304u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8304u) [[unlikely]] return; }
L_002A8304:
    st32((c.r[28].w[0] - 27696u), 0u);
    c.budget -= 1;
L_002A8308:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A8320:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], 0u + 2072u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8340u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002A8340u) [[unlikely]] return; }
L_002A8340:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002A83E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[18].w[0] + 2056u);
    set32(c.r[2], c.r[2].w[0] + 10064u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A835Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021DEA0u; return; } if (c.pc != 0x002A835Cu) [[unlikely]] return; }
L_002A835C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8360:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A836Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002A836Cu) [[unlikely]] return; }
L_002A836C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  goto L_002A83C8; }
    set32(c.r[5], ld32((c.r[28].w[0] - 27684u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 480u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.budget -= 12;
    if (c.r[3].sd[0] <= 0) { st32((c.r[16].w[0] + 4u), 0u);  goto L_002A83B8; }
    set32(c.r[4], c.r[3].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A83B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002A83B4u) [[unlikely]] return; }
L_002A83B4:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_002A83B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 464u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 4;
L_002A83C8:
    set32(c.r[4], 0u + 10u);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0] + 4u), c.r[16].w[0]);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(513ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8360u | kUnwind; return; } goto L_002A8360; } }
L_002A83E4:
    st32((c.r[28].w[0] - 27696u), c.r[18].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A8400:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8438u); set32(c.r[4], c.r[18].w[0] + 2056u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002A8438u) [[unlikely]] return; }
L_002A8438:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 10u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[4].w[0] + 4u);  if (t) { goto L_002A8524; } }
L_002A8454:
    set32(c.r[20], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[19].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002A8524; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[3].w[0] - 8u);  if (t) { goto L_002A8488; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002A848C; } }
L_002A8488:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002A848C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[18].w[0] + 2056u);  goto L_002A8534; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A84A0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A84A0u) [[unlikely]] return; }
L_002A84A0:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A84B0u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A84B0u) [[unlikely]] return; }
L_002A84B0:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A8530; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A84CCu); set32(c.r[4], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002A84CCu) [[unlikely]] return; }
L_002A84CC:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 10u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002A84EC; }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002A8508; } }
L_002A84EC:
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_002A850C; }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002A8508:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_002A850C:
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 27692u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 27692u), c.r[2].w[0]);  if (t) { goto L_002A8530; } }
L_002A8524:
    c.r[2].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8454u | kUnwind; return; } goto L_002A8454; }
L_002A8530:
    set32(c.r[4], c.r[18].w[0] + 2056u);
    c.budget -= 1;
L_002A8534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A853Cu);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002A853Cu) [[unlikely]] return; }
L_002A853C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A8560:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8588u); set32(c.r[4], c.r[17].w[0] + 2056u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002A8588u) [[unlikely]] return; }
L_002A8588:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 12u));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002A85B4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 27688u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[28].w[0] - 27688u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_002A85B4:
    st8((c.r[28].w[0] - 28660u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_002A8610; } }
    c.r[5].d[0] = ld16((c.r[4].w[0] + 10u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A85FC; } }
L_002A85D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[7].d[0] + 0ull;  goto L_002A8600; }
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002A8610; } }
L_002A85FC:
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_002A8600:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A85D0u | kUnwind; return; } goto L_002A85D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8610u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002A8610u) [[unlikely]] return; }
L_002A8610:
    set32(c.r[2], ld32((c.r[28].w[0] - 27692u)));
    set32(c.r[4], c.r[17].w[0] + 2056u);
    st8((c.r[28].w[0] - 28660u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8628u); st32((c.r[28].w[0] - 27692u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002A8628u) [[unlikely]] return; }
L_002A8628:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A8640:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
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
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8680u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 44u, depth + 1u); else { c.pc = 0x002A8750u; return; } if (c.pc != 0x002A8680u) [[unlikely]] return; }
L_002A8680:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A868Cu); set32(c.r[4], c.r[21].w[0] + 2056u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002A868Cu) [[unlikely]] return; }
L_002A868C:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[21].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[23], ld32((c.r[2].w[0] + 20312u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[22].d[0] = ld16((c.r[2].w[0] + 10u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002A870C; } }
L_002A86AC:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[17].d[0] == c.r[20].d[0]) { set32(c.r[4], c.r[21].w[0] + 2056u);  goto L_002A86F8; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002A870C; }
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[23].d[0]) { c.r[2].d[0] = ld16((c.r[17].w[0] - 4u));  goto L_002A86D8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A86D8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_002A8708; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A86ECu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002A86ECu) [[unlikely]] return; }
L_002A86EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A8708; } }
    set32(c.r[4], c.r[21].w[0] + 2056u);
    c.budget -= 1;
L_002A86F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8700u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002A8700u) [[unlikely]] return; }
L_002A8700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002A8724; } }
L_002A8708:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002A870C:
    c.r[2].d[0] = c.r[18].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A86ACu | kUnwind; return; } goto L_002A86AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8720u); set32(c.r[4], c.r[21].w[0] + 2056u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002A8720u) [[unlikely]] return; }
L_002A8720:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8724:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002A8750:
    set32(c.r[2], 0u - 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[5].d[0] & c.r[2].d[0];  if (t) { goto L_002A87A8; } }
L_002A8764:
    set32(c.r[2], c.r[7].w[0] << 5);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[7].w[0] << 5);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 17;
L_002A87A8:
    c.r[2].d[0] = c.r[9].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8764u | kUnwind; return; } goto L_002A8764; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_002A87D4; } }
L_002A87BC:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[7].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 6;
L_002A87D4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[2].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A87BCu | kUnwind; return; } goto L_002A87BC; }
    set32(c.r[2], 0u + 513u);
    mmi::divu(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A87F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { const bool t = c.r[19].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002A881C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A891C; } }
L_002A881C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8824u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x002A8824u) [[unlikely]] return; }
L_002A8824:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8834u); set32(c.r[4], c.r[2].w[0] + 2056u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002A8834u) [[unlikely]] return; }
L_002A8834:
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8844u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 37u, depth + 1u); else { c.pc = 0x002A8640u; return; } if (c.pc != 0x002A8844u) [[unlikely]] return; }
L_002A8844:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_002A888C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 27696u)));  goto L_002A887C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8868u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A8868u) [[unlikely]] return; }
L_002A8868:
    set32(c.r[2], ld32((c.r[16].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8878u); st32((c.r[16].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A8878u) [[unlikely]] return; }
L_002A8878:
    set32(c.r[2], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 1;
L_002A887C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8884u); set32(c.r[4], c.r[2].w[0] + 2056u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002A8884u) [[unlikely]] return; }
L_002A8884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 108u)));  if (t) { goto L_002A891C; } }
L_002A888C:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], 0u + 128u);  goto L_002A88AC; }
    set32(c.r[2], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 128u);
    c.budget -= 4;
L_002A88AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A88B4u);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002A88B4u) [[unlikely]] return; }
L_002A88B4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[20], c.r[17].w[0] + 8u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A88CCu); st32((c.r[29].w[0] + 108u), c.r[20].w[0]);  if (depth < kMaxDepth) unit_006A(c, 44u, depth + 1u); else { c.pc = 0x002A8750u; return; } if (c.pc != 0x002A88CCu) [[unlikely]] return; }
L_002A88CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[16].w[0] << 16);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[6], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A88FCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002A88FCu) [[unlikely]] return; }
L_002A88FC:
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A890Cu); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_006A(c, 32u, depth + 1u); else { c.pc = 0x002A8560u; return; } if (c.pc != 0x002A890Cu) [[unlikely]] return; }
L_002A890C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8918u); set32(c.r[4], c.r[2].w[0] + 2056u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002A8918u) [[unlikely]] return; }
L_002A8918:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_002A891C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A8940:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A89D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10064u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 5;
L_002A8974:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002A8998; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8994u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8994u) [[unlikely]] return; }
L_002A8994:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002A8998:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(513ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8974u | kUnwind; return; } goto L_002A8974; }
    set32(c.r[2], c.r[18].w[0] + 2056u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_002A89BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A89B8u); set32(c.r[4], ld32((c.r[18].w[0] + 2056u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x002A89B8u) [[unlikely]] return; }
L_002A89B8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_002A89BC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_002A89D8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A89D4u); set32(c.r[5], 0u + 2072u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002A89D4u) [[unlikely]] return; }
L_002A89D4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002A89D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A89F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A8A78; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0])));  goto L_002A8A58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8A28u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A8A28u) [[unlikely]] return; }
L_002A8A28:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8A38u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A8A38u) [[unlikely]] return; }
L_002A8A38:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A8A54; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8A54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8A54u) [[unlikely]] return; }
L_002A8A54:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_002A8A58:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_002A8A78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8A68u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A8A68u) [[unlikely]] return; }
L_002A8A68:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8A78u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A8A78u) [[unlikely]] return; }
L_002A8A78:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A8AA0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 13;
    { const bool t = c.r[20].d[0] == c.r[3].d[0]; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A8BD0; } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_002A8BAC; }
    set32(c.r[2], c.r[20].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8AECu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002A8AECu) [[unlikely]] return; }
L_002A8AEC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1680u);
    set32(c.r[6], c.r[6].w[0] + 1520u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8B0Cu); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002A8B0Cu) [[unlikely]] return; }
L_002A8B0C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002A8B9C; } }
L_002A8B18:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[22], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.budget -= 7;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002A8B9C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);  goto L_002A8B74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8B44u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A8B44u) [[unlikely]] return; }
L_002A8B44:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8B54u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A8B54u) [[unlikely]] return; }
L_002A8B54:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A8B70; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8B70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8B70u) [[unlikely]] return; }
L_002A8B70:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_002A8B74:
    set32(c.r[16], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[2].w[0]), c.r[16].w[0]);  if (t) { goto L_002A8B98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8B88u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A8B88u) [[unlikely]] return; }
L_002A8B88:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8B98u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A8B98u) [[unlikely]] return; }
L_002A8B98:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002A8B9C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8B18u | kUnwind; return; } goto L_002A8B18; }
L_002A8BAC:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 1520u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8BC8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A8BC8u) [[unlikely]] return; }
L_002A8BC8:
    st32((c.r[21].w[0]), c.r[19].w[0]);
    st32((c.r[21].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 2;
L_002A8BD0:
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
L_002A8C00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == c.r[19].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A8CB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_002A8C5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8C48u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A8C48u) [[unlikely]] return; }
L_002A8C48:
    set32(c.r[2], ld32((c.r[19].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8C58u); st32((c.r[19].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A8C58u) [[unlikely]] return; }
L_002A8C58:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_002A8C5C:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_002A8CB0; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8C7Cu); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A8C7Cu) [[unlikely]] return; }
L_002A8C7C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8C8Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A8C8Cu) [[unlikely]] return; }
L_002A8C8C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A8CAC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8CACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002A8CACu) [[unlikely]] return; }
L_002A8CAC:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_002A8CB0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8CB4:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 4u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8CB4u | kUnwind; return; } goto L_002A8CB4; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002A8D00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[9], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[10], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8D30u); set32(c.r[6], c.r[6].w[0] + 20624u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x002A8D30u) [[unlikely]] return; }
L_002A8D30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A8D40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_002A8D50:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8D50u | kUnwind; return; } goto L_002A8D50; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_002A8D80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 20648u);  c.pc = t; return; }
L_002A8D90:
    set32(c.r[29], c.r[29].w[0] - 1392u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 27676u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A8E7C; } }
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8DC0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0047(c, 316u, depth + 1u); else { c.pc = 0x0021ED90u; return; } if (c.pc != 0x002A8DC0u) [[unlikely]] return; }
L_002A8DC0:
    set32(c.r[16], ld32((c.r[28].w[0] - 27676u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8DCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x002A8DCCu) [[unlikely]] return; }
L_002A8DCC:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_002A8DDC; }
    set32(c.r[6], 0u + 256u);
    c.budget -= 1;
L_002A8DDC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8DE8u); set32(c.r[4], c.r[29].w[0] + 851u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x002A8DE8u) [[unlikely]] return; }
L_002A8DE8:
    st8((c.r[2].w[0] + 255u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 1120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8DFCu); set32(c.r[6], 0u + 260u);  if (depth < kMaxDepth) unit_0047(c, 315u, depth + 1u); else { c.pc = 0x0021ED80u; return; } if (c.pc != 0x002A8DFCu) [[unlikely]] return; }
L_002A8DFC:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[4], c.r[29].w[0] + 1120u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002A8F10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8E14u); st32((c.r[29].w[0] + 1388u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002A8E14u) [[unlikely]] return; }
L_002A8E14:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 1388u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002A8F0C; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8E44u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A8E44u) [[unlikely]] return; }
L_002A8E44:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8E54u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A8E54u) [[unlikely]] return; }
L_002A8E54:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A8F0C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8E74u); set32(c.r[5], c.r[29].w[0] + 1388u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002A8E74u) [[unlikely]] return; }
L_002A8E74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A8F0C; } }
L_002A8E7C:
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_002A8F0C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[19].w[0])));  goto L_002A8EB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8EA4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A8EA4u) [[unlikely]] return; }
L_002A8EA4:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8EB4u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A8EB4u) [[unlikely]] return; }
L_002A8EB4:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002A8EB8:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0]), c.r[17].w[0]);  goto L_002A8F0C; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8ED8u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A8ED8u) [[unlikely]] return; }
L_002A8ED8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8EE8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A8EE8u) [[unlikely]] return; }
L_002A8EE8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A8F08; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8F08u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002A8F08u) [[unlikely]] return; }
L_002A8F08:
    st32((c.r[19].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_002A8F0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002A8F10:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1392u);  c.pc = t; return; }
L_002A8F30:
    set32(c.r[29], c.r[29].w[0] - 1104u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8F54u); set32(c.r[4], 0u + 260u);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002A8F54u) [[unlikely]] return; }
L_002A8F54:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 27676u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002A8FB4; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8F70u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0047(c, 316u, depth + 1u); else { c.pc = 0x0021ED90u; return; } if (c.pc != 0x002A8F70u) [[unlikely]] return; }
L_002A8F70:
    set32(c.r[17], ld32((c.r[28].w[0] - 27676u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8F7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x002A8F7Cu) [[unlikely]] return; }
L_002A8F7C:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_002A8F8C; }
    set32(c.r[6], 0u + 256u);
    c.budget -= 1;
L_002A8F8C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8F98u); set32(c.r[4], c.r[29].w[0] + 835u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x002A8F98u) [[unlikely]] return; }
L_002A8F98:
    st8((c.r[2].w[0] + 255u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8FACu); set32(c.r[6], 0u + 260u);  if (depth < kMaxDepth) unit_0047(c, 315u, depth + 1u); else { c.pc = 0x0021ED80u; return; } if (c.pc != 0x002A8FACu) [[unlikely]] return; }
L_002A8FAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002A8FFC; } }
L_002A8FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8FBCu);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x002A8FBCu) [[unlikely]] return; }
L_002A8FBC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(260ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_002A8FE4; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[18], 0u + 259u);  goto L_002A8FE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_002A8FF8; } }
L_002A8FE0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A8FE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8FF0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x002A8FF0u) [[unlikely]] return; }
L_002A8FF0:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002A8FF8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002A8FFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1104u);  c.pc = t; return; }
L_002A9020:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[2], c.r[17].w[0] + 8u);  if (t) { goto L_002A9080; } }
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[4].d[0]) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_002A912C; }
    set32(c.r[5], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_002A9080; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[7], ld32((c.r[2].w[0] + 12u)));  goto L_002A908C; }
L_002A9080:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A912C; } }
L_002A908C:
    set32(c.r[5], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[7].d[0]) { c.r[9].d[0] = 0ull + 0ull;  goto L_002A911C; }
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_002A90B4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002A90B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002A912C; } }
L_002A90B4:
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A911C; } }
L_002A90C0:
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[8], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[8].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[5].d[0] != c.r[4].d[0]) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_002A912C; }
    set32(c.r[5], ld32((c.r[7].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[8].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_002A9110; } }
    c.r[5].d[0] = ld8((c.r[7].w[0] + 32u));
    c.r[4].d[0] = ld8((c.r[8].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_002A9110; } }
    c.r[5].d[0] = ld8((c.r[7].w[0] + 33u));
    c.r[4].d[0] = ld8((c.r[8].w[0] + 33u));
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_002A911C; }
L_002A9110:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A912C; } }
L_002A911C:
    c.r[4].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], c.r[9].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A90C0u | kUnwind; return; } goto L_002A90C0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A912C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A913C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A93CC; } }
L_002A913C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], 0u + 116u);  goto L_002A93B0; }
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[17].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  goto L_002A9154; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002A93CC; } }
L_002A9154:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[2], c.r[16].w[0] + 8u);  if (t) { goto L_002A918C; } }
    c.r[4].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A9238; }
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A918C; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[2].w[0] + 12u)));  goto L_002A9198; }
L_002A918C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A9238; } }
L_002A9198:
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[5].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_002A9228; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A91C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002A91C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A9238; } }
L_002A91C0:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A9228; } }
L_002A91CC:
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A9238; }
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A921C; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 32u));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A921C; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 33u));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 33u));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_002A9228; }
L_002A921C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A9238; } }
L_002A9228:
    c.r[3].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[8].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A91CCu | kUnwind; return; } goto L_002A91CC; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A9238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A93AC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A93AC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A93AC; } }
    set32(c.r[18], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002A93AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002A92D8; } }
L_002A928C:
    set32(c.r[6], c.r[19].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0])));
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] - c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] + c.r[7].w[0]);  if (t) { goto L_002A92D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A92D4u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002A92D4u) [[unlikely]] return; }
L_002A92D4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002A92D8:
    c.r[2].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A928Cu | kUnwind; return; } goto L_002A928C; }
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002A93CC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A9398; } }
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9308u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002A9308u) [[unlikely]] return; }
L_002A9308:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 80u)));  goto L_002A9328; }
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9320u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 355u, depth + 1u); else { c.pc = 0x002C2FF0u; return; } if (c.pc != 0x002A9320u) [[unlikely]] return; }
L_002A9320:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 2;
L_002A9328:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[18].d[0];  if (t) { goto L_002A93A0; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), c.r[18].w[0]);  goto L_002A9370; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9340u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A9340u) [[unlikely]] return; }
L_002A9340:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9350u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A9350u) [[unlikely]] return; }
L_002A9350:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A936C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A936Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A936Cu) [[unlikely]] return; }
L_002A936C:
    st32((c.r[16].w[0] + 80u), c.r[18].w[0]);
    c.budget -= 1;
L_002A9370:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002A93A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9380u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A9380u) [[unlikely]] return; }
L_002A9380:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9390u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A9390u) [[unlikely]] return; }
L_002A9390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A93A0; } }
L_002A9398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A93A0u);  if (depth < kMaxDepth) unit_0070(c, 326u, depth + 1u); else { c.pc = 0x002C2BC0u; return; } if (c.pc != 0x002A93A0u) [[unlikely]] return; }
L_002A93A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A93CC; } }
L_002A93AC:
    set32(c.r[4], 0u + 116u);
    c.budget -= 1;
L_002A93B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A93B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002A93B8u) [[unlikely]] return; }
L_002A93B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A93CC; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A93CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 257u, depth + 1u); else { c.pc = 0x002C6530u; return; } if (c.pc != 0x002A93CCu) [[unlikely]] return; }
L_002A93CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A93F0:
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A94DC; }
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A9430; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A9430; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[5].w[0] + 12u)));  goto L_002A943C; }
L_002A9430:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A94DC; } }
L_002A943C:
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_002A94CC; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002A9464; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A9464; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A94DC; } }
L_002A9464:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A94CC; } }
L_002A9470:
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A94DC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A94C0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 32u));
    c.r[2].d[0] = ld8((c.r[7].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A94C0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 33u));
    c.r[2].d[0] = ld8((c.r[7].w[0] + 33u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_002A94CC; }
L_002A94C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A94DC; } }
L_002A94CC:
    c.r[2].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[8].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9470u | kUnwind; return; } goto L_002A9470; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A94DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A94F0:
    set32(c.r[29], c.r[29].w[0] - 1104u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9518u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0047(c, 316u, depth + 1u); else { c.pc = 0x0021ED90u; return; } if (c.pc != 0x002A9518u) [[unlikely]] return; }
L_002A9518:
    set32(c.r[25], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], c.r[18].w[0] + 8u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A952Cu); set32(c.r[5], c.r[29].w[0] + 323u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A952Cu) [[unlikely]] return; }
L_002A952C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A95F8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9544u); c.r[6].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0046(c, 339u, depth + 1u); else { c.pc = 0x0021B970u; return; } if (c.pc != 0x002A9544u) [[unlikely]] return; }
L_002A9544:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A9568; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9560u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A9560u) [[unlikely]] return; }
L_002A9560:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0] + 8u)));  goto L_002A9590; }
L_002A9568:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A95F8; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9584u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A9584u) [[unlikely]] return; }
L_002A9584:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A95F8; } }
L_002A9590:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 8u);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A95A4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A95A4u) [[unlikely]] return; }
L_002A95A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A95D8; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002A95F8; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A95CCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A95CCu) [[unlikely]] return; }
L_002A95CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A95F8; } }
L_002A95D8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A95F4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A95F4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A95F4u) [[unlikely]] return; }
L_002A95F4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A95F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1104u);  c.pc = t; return; }
L_002A9610:
    set32(c.r[29], c.r[29].w[0] - 1168u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9658u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0047(c, 316u, depth + 1u); else { c.pc = 0x0021ED90u; return; } if (c.pc != 0x002A9658u) [[unlikely]] return; }
L_002A9658:
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A966Cu); set32(c.r[5], c.r[29].w[0] + 387u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A966Cu) [[unlikely]] return; }
L_002A966C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A9744; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9684u); c.r[6].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0046(c, 339u, depth + 1u); else { c.pc = 0x0021B970u; return; } if (c.pc != 0x002A9684u) [[unlikely]] return; }
L_002A9684:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A96A8; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A96A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A96A0u) [[unlikely]] return; }
L_002A96A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 8u)));  goto L_002A96D0; }
L_002A96A8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A9744; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A96C4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A96C4u) [[unlikely]] return; }
L_002A96C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A9744; } }
L_002A96D0:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    c.r[10].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A96F4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A96F4u) [[unlikely]] return; }
L_002A96F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A9724; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002A9744; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9718u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A9718u) [[unlikely]] return; }
L_002A9718:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A9744; } }
L_002A9724:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A9740; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9740u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A9740u) [[unlikely]] return; }
L_002A9740:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9744:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1168u);  c.pc = t; return; }
L_002A9770:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A9800; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 10080u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 27676u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 8u);  goto L_002A97B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A97ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002A97ACu) [[unlikely]] return; }
L_002A97AC:
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_002A97B0:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A97BCu); st32((c.r[28].w[0] - 27676u), 0u);  if (depth < kMaxDepth) unit_006D(c, 454u, depth + 1u); else { c.pc = 0x002B7550u; return; } if (c.pc != 0x002A97BCu) [[unlikely]] return; }
L_002A97BC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002A97E8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A97D4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A97D4u) [[unlikely]] return; }
L_002A97D4:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A97E4u); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A97E4u) [[unlikely]] return; }
L_002A97E4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002A97E8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002A9804; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9800u); set32(c.r[5], 0u + 28u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002A9800u) [[unlikely]] return; }
L_002A9800:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A9804:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A9820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9844u); st32((c.r[4].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A9844u) [[unlikely]] return; }
L_002A9844:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9854u); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A9854u) [[unlikely]] return; }
L_002A9854:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 10080u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9868u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006D(c, 457u, depth + 1u); else { c.pc = 0x002B75D0u; return; } if (c.pc != 0x002A9868u) [[unlikely]] return; }
L_002A9868:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A9880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[28].w[0] - 27680u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002A9904; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[28].w[0] - 27680u), c.r[16].w[0]);  goto L_002A98E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A98B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A98B0u) [[unlikely]] return; }
L_002A98B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A98C0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A98C0u) [[unlikely]] return; }
L_002A98C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A98DC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A98DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A98DCu) [[unlikely]] return; }
L_002A98DC:
    st32((c.r[28].w[0] - 27680u), c.r[16].w[0]);
    c.budget -= 1;
L_002A98E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A9900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A98F0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A98F0u) [[unlikely]] return; }
L_002A98F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9900u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A9900u) [[unlikely]] return; }
L_002A9900:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002A9904:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A9920:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 27680u)));  c.pc = t; return; }
L_002A9930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 27680u)));
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002A99AC; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002A9988; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9958u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A9958u) [[unlikely]] return; }
L_002A9958:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9968u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A9968u) [[unlikely]] return; }
L_002A9968:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A9984; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9984u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A9984u) [[unlikely]] return; }
L_002A9984:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9988:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 27680u), 0u);  if (t) { goto L_002A99A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9998u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A9998u) [[unlikely]] return; }
L_002A9998:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A99A8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A99A8u) [[unlikely]] return; }
L_002A99A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002A99AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A99C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 28u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A99DCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002A99DCu) [[unlikely]] return; }
L_002A99DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002A9A1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A99F8u); st32((c.r[16].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A99F8u) [[unlikely]] return; }
L_002A99F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9A08u); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A9A08u) [[unlikely]] return; }
L_002A9A08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 10080u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9A1Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006D(c, 457u, depth + 1u); else { c.pc = 0x002B75D0u; return; } if (c.pc != 0x002A9A1Cu) [[unlikely]] return; }
L_002A9A1C:
    set32(c.r[17], ld32((c.r[28].w[0] - 27680u)));
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002A9A8C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[28].w[0] - 27680u), c.r[16].w[0]);  goto L_002A9A68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9A38u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A9A38u) [[unlikely]] return; }
L_002A9A38:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9A48u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A9A48u) [[unlikely]] return; }
L_002A9A48:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A9A64; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9A64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A9A64u) [[unlikely]] return; }
L_002A9A64:
    st32((c.r[28].w[0] - 27680u), c.r[16].w[0]);
    c.budget -= 1;
L_002A9A68:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A9A88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9A78u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A9A78u) [[unlikely]] return; }
L_002A9A78:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9A88u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A9A88u) [[unlikely]] return; }
L_002A9A88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002A9A8C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A9AA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A9B1C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_002A9B04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9AD4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A9AD4u) [[unlikely]] return; }
L_002A9AD4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9AE4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A9AE4u) [[unlikely]] return; }
L_002A9AE4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A9B00; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9B00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A9B00u) [[unlikely]] return; }
L_002A9B00:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_002A9B04:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002A9B20; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9B1Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002A9B1Cu) [[unlikely]] return; }
L_002A9B1C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002A9B20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A9B40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 20680u);  c.pc = t; return; }
L_002A9B50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A9B9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9B80u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0067(c, 85u, depth + 1u); else { c.pc = 0x0029CB20u; return; } if (c.pc != 0x002A9B80u) [[unlikely]] return; }
L_002A9B80:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002A9BA0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9B9Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002A9B9Cu) [[unlikely]] return; }
L_002A9B9C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A9BA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A9BC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9BDCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 48u, depth + 1u); else { c.pc = 0x0029C720u; return; } if (c.pc != 0x002A9BDCu) [[unlikely]] return; }
L_002A9BDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9BE8u); set32(c.r[4], ld32((c.r[2].w[0] + 20680u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002A9BE8u) [[unlikely]] return; }
L_002A9BE8:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9BFCu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002A9BFCu) [[unlikely]] return; }
L_002A9BFC:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9C0Cu); set32(c.r[4], c.r[4].w[0] + 20688u);  if (depth < kMaxDepth) unit_0088(c, 237u, depth + 1u); else { c.pc = 0x00321BC0u; return; } if (c.pc != 0x002A9C0Cu) [[unlikely]] return; }
L_002A9C0C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9C20u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002A9C20u) [[unlikely]] return; }
L_002A9C20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A9C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A9C64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A9CAC; } }
L_002A9C64:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_002A9C74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A9C90; } }
L_002A9C74:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9C80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A9C80u) [[unlikely]] return; }
L_002A9C80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] + 20680u);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_002A9C90:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 12u)));  goto L_002A9CA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A9CAC; } }
L_002A9CA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_002A9CAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A9CC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9CDCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 55u, depth + 1u); else { c.pc = 0x0029C7E0u; return; } if (c.pc != 0x002A9CDCu) [[unlikely]] return; }
L_002A9CDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9CE8u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 356u, depth + 1u); else { c.pc = 0x001F6DD0u; return; } if (c.pc != 0x002A9CE8u) [[unlikely]] return; }
L_002A9CE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A9D00:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029C820u | kUnwind; return; } [[clang::musttail]] return unit_0067(c, 58u, depth); }
L_002A9D10:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029C870u | kUnwind; return; } [[clang::musttail]] return unit_0067(c, 61u, depth); }
L_002A9D20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9D3Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 62u, depth + 1u); else { c.pc = 0x0029C880u; return; } if (c.pc != 0x002A9D3Cu) [[unlikely]] return; }
L_002A9D3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9D48u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_0050(c, 288u, depth + 1u); else { c.pc = 0x00243100u; return; } if (c.pc != 0x002A9D48u) [[unlikely]] return; }
L_002A9D48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A9D60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 16u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9D78u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002A9D78u) [[unlikely]] return; }
L_002A9D78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002A9D98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9D88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 91u, depth + 1u); else { c.pc = 0x0029CC00u; return; } if (c.pc != 0x002A9D88u) [[unlikely]] return; }
L_002A9D88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 10128u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 4;
L_002A9D98:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A9DB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 16u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9DD8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002A9DD8u) [[unlikely]] return; }
L_002A9DD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002A9DF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9DE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 91u, depth + 1u); else { c.pc = 0x0029CC00u; return; } if (c.pc != 0x002A9DE8u) [[unlikely]] return; }
L_002A9DE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 10128u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 4;
L_002A9DF8:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9E08u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 69u, depth + 1u); else { c.pc = 0x0029C950u; return; } if (c.pc != 0x002A9E08u) [[unlikely]] return; }
L_002A9E08:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A9E30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 20720u);  c.pc = t; return; }
L_002A9E40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A9EA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 10224u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9E74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002A9E74u) [[unlikely]] return; }
L_002A9E74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9E84u); st32((c.r[17].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0067(c, 85u, depth + 1u); else { c.pc = 0x0029CB20u; return; } if (c.pc != 0x002A9E84u) [[unlikely]] return; }
L_002A9E84:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002A9EA4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9EA0u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002A9EA0u) [[unlikely]] return; }
L_002A9EA0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A9EA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A9EC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9EE0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0067(c, 48u, depth + 1u); else { c.pc = 0x0029C720u; return; } if (c.pc != 0x002A9EE0u) [[unlikely]] return; }
L_002A9EE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9EECu); set32(c.r[4], ld32((c.r[2].w[0] + 20720u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002A9EECu) [[unlikely]] return; }
L_002A9EEC:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9F00u); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002A9F00u) [[unlikely]] return; }
L_002A9F00:
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9F10u); set32(c.r[4], c.r[4].w[0] + 20736u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x002A9F10u) [[unlikely]] return; }
L_002A9F10:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9F24u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002A9F24u) [[unlikely]] return; }
L_002A9F24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A9F5C; } }
L_002A9F2C:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9F44u); set32(c.r[4], c.r[4].w[0] + 20745u);  if (depth < kMaxDepth) unit_0088(c, 237u, depth + 1u); else { c.pc = 0x00321BC0u; return; } if (c.pc != 0x002A9F44u) [[unlikely]] return; }
L_002A9F44:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9F58u); set32(c.r[6], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002A9F58u) [[unlikely]] return; }
L_002A9F58:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002A9F5C:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9F2Cu | kUnwind; return; } goto L_002A9F2C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A9F90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A9FB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AA07C; } }
L_002A9FB4:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_002A9FC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A9FE0; } }
L_002A9FC4:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9FD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A9FD0u) [[unlikely]] return; }
L_002A9FD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] + 20720u);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_002A9FE0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 12u)));  goto L_002A9FF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AA07C; } }
L_002A9FF0:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 16u)));  goto L_002AA004; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AA07C; } }
L_002AA004:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002AA018; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002AA07C; }
L_002AA018:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002AA038; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AA038; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AA07C; } }
L_002AA038:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002AA07C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002AA06C; } }
L_002AA048:
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002AA06C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AA07C; } }
L_002AA06C:
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA048u | kUnwind; return; } goto L_002AA048; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002AA07C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AA090:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA0ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 55u, depth + 1u); else { c.pc = 0x0029C7E0u; return; } if (c.pc != 0x002AA0ACu) [[unlikely]] return; }
L_002AA0AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA0B8u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x002AA0B8u) [[unlikely]] return; }
L_002AA0B8:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA0C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 251u, depth + 1u); else { c.pc = 0x002AA2B0u; return; } if (c.pc != 0x002AA0C8u) [[unlikely]] return; }
L_002AA0C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AA0E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029C820u | kUnwind; return; } [[clang::musttail]] return unit_0067(c, 58u, depth); }
L_002AA0F0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029C870u | kUnwind; return; } [[clang::musttail]] return unit_0067(c, 61u, depth); }
L_002AA100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA11Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 62u, depth + 1u); else { c.pc = 0x0029C880u; return; } if (c.pc != 0x002AA11Cu) [[unlikely]] return; }
L_002AA11C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA128u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x002AA128u) [[unlikely]] return; }
L_002AA128:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[17].w[0] + 16u), 0u);  goto L_002AA154; }
    set32(c.r[4], c.r[3].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA140u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002AA140u) [[unlikely]] return; }
L_002AA140:
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA154u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 252u, depth + 1u); else { c.pc = 0x002AA2C0u; return; } if (c.pc != 0x002AA154u) [[unlikely]] return; }
L_002AA154:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AA170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 20u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA188u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002AA188u) [[unlikely]] return; }
L_002AA188:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002AA1AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA198u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 91u, depth + 1u); else { c.pc = 0x0029CC00u; return; } if (c.pc != 0x002AA198u) [[unlikely]] return; }
L_002AA198:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 10224u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002AA1AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AA1C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 20u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA1E8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002AA1E8u) [[unlikely]] return; }
L_002AA1E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002AA20C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA1F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 91u, depth + 1u); else { c.pc = 0x0029CC00u; return; } if (c.pc != 0x002AA1F8u) [[unlikely]] return; }
L_002AA1F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 10224u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002AA20C:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA21Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 69u, depth + 1u); else { c.pc = 0x0029C950u; return; } if (c.pc != 0x002AA21Cu) [[unlikely]] return; }
L_002AA21C:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 16u), 0u);  goto L_002AA28C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AA288; } }
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA248u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002AA248u) [[unlikely]] return; }
L_002AA248:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002AA270; } }
L_002AA254:
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 7;
L_002AA270:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA254u | kUnwind; return; } goto L_002AA254; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002AA294; } }
L_002AA288:
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 1;
L_002AA28C:
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002AA294:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AA2B0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 396u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6EB0u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 365u, depth); }
L_002AA2C0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 392u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00243150u | kUnwind; return; } [[clang::musttail]] return unit_0050(c, 291u, depth); }
L_002AA2D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 20784u);  c.pc = t; return; }
L_002AA2E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA2FCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 233u, depth + 1u); else { c.pc = 0x0029ACD0u; return; } if (c.pc != 0x002AA2FCu) [[unlikely]] return; }
L_002AA2FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA308u); set32(c.r[4], ld32((c.r[2].w[0] + 20784u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002AA308u) [[unlikely]] return; }
L_002AA308:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA31Cu); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002AA31Cu) [[unlikely]] return; }
L_002AA31C:
    c.f[12] = ld32((c.r[17].w[0] + 336u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA32Cu); set32(c.r[4], c.r[4].w[0] + 20800u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x002AA32Cu) [[unlikely]] return; }
L_002AA32C:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA340u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002AA340u) [[unlikely]] return; }
L_002AA340:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 340u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA350u); set32(c.r[5], c.r[5].w[0] + 20810u);  if (depth < kMaxDepth) unit_0062(c, 170u, depth + 1u); else { c.pc = 0x00289660u; return; } if (c.pc != 0x002AA350u) [[unlikely]] return; }
L_002AA350:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA364u); set32(c.r[6], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002AA364u) [[unlikely]] return; }
L_002AA364:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA374u); set32(c.r[5], c.r[5].w[0] + 20817u);  if (depth < kMaxDepth) unit_0062(c, 170u, depth + 1u); else { c.pc = 0x00289660u; return; } if (c.pc != 0x002AA374u) [[unlikely]] return; }
L_002AA374:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA388u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002AA388u) [[unlikely]] return; }
L_002AA388:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 364u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA398u); set32(c.r[5], c.r[5].w[0] + 20825u);  if (depth < kMaxDepth) unit_0062(c, 170u, depth + 1u); else { c.pc = 0x00289660u; return; } if (c.pc != 0x002AA398u) [[unlikely]] return; }
L_002AA398:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA3ACu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002AA3ACu) [[unlikely]] return; }
L_002AA3AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002AA3C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA3DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 245u, depth + 1u); else { c.pc = 0x0029ADF0u; return; } if (c.pc != 0x002AA3DCu) [[unlikely]] return; }
L_002AA3DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 336u));  goto L_002AA3EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AA52C; } }
L_002AA3EC:
    c.f[0] = ld32((c.r[16].w[0] + 336u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_002AA52C; }
    c.f[1] = ld32((c.r[17].w[0] + 340u));
    c.f[0] = ld32((c.r[16].w[0] + 340u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AA414; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AA414:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AA434; } }
    c.f[1] = ld32((c.r[17].w[0] + 344u));
    c.f[0] = ld32((c.r[16].w[0] + 344u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AA434; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AA434:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_002AA458; }
    c.f[1] = ld32((c.r[17].w[0] + 348u));
    c.f[0] = ld32((c.r[16].w[0] + 348u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AA454; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AA454:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_002AA458:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AA528; } }
    c.f[1] = ld32((c.r[17].w[0] + 352u));
    c.f[0] = ld32((c.r[16].w[0] + 352u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AA478; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AA478:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AA498; } }
    c.f[1] = ld32((c.r[17].w[0] + 356u));
    c.f[0] = ld32((c.r[16].w[0] + 356u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AA498; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AA498:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_002AA4BC; }
    c.f[1] = ld32((c.r[17].w[0] + 360u));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AA4B8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AA4B8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_002AA4BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AA528; } }
    c.f[1] = ld32((c.r[17].w[0] + 364u));
    c.f[0] = ld32((c.r[16].w[0] + 364u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AA4DC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AA4DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AA4FC; } }
    c.f[1] = ld32((c.r[17].w[0] + 368u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AA4FC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AA4FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_002AA520; }
    c.f[1] = ld32((c.r[17].w[0] + 372u));
    c.f[0] = ld32((c.r[16].w[0] + 372u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AA51C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AA51C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_002AA520:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002AA52C; }
L_002AA528:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AA52C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AA540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA55Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 249u, depth + 1u); else { c.pc = 0x0029AF00u; return; } if (c.pc != 0x002AA55Cu) [[unlikely]] return; }
L_002AA55C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA568u); set32(c.r[5], c.r[17].w[0] + 336u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002AA568u) [[unlikely]] return; }
L_002AA568:
    set32(c.r[4], c.r[17].w[0] + 340u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA574u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 177u, depth + 1u); else { c.pc = 0x00289710u; return; } if (c.pc != 0x002AA574u) [[unlikely]] return; }
L_002AA574:
    set32(c.r[4], c.r[17].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA580u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 177u, depth + 1u); else { c.pc = 0x00289710u; return; } if (c.pc != 0x002AA580u) [[unlikely]] return; }
L_002AA580:
    set32(c.r[4], c.r[17].w[0] + 364u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA58Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 177u, depth + 1u); else { c.pc = 0x00289710u; return; } if (c.pc != 0x002AA58Cu) [[unlikely]] return; }
L_002AA58C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AA5A0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029AF90u | kUnwind; return; } [[clang::musttail]] return unit_0066(c, 255u, depth); }
L_002AA5B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029AFF0u | kUnwind; return; } [[clang::musttail]] return unit_0066(c, 258u, depth); }
L_002AA5C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA5DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 270u, depth + 1u); else { c.pc = 0x0029B1C0u; return; } if (c.pc != 0x002AA5DCu) [[unlikely]] return; }
L_002AA5DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA5E8u); set32(c.r[5], c.r[17].w[0] + 336u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002AA5E8u) [[unlikely]] return; }
L_002AA5E8:
    set32(c.r[4], c.r[17].w[0] + 340u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA5F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 181u, depth + 1u); else { c.pc = 0x00289760u; return; } if (c.pc != 0x002AA5F4u) [[unlikely]] return; }
L_002AA5F4:
    set32(c.r[4], c.r[17].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA600u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 181u, depth + 1u); else { c.pc = 0x00289760u; return; } if (c.pc != 0x002AA600u) [[unlikely]] return; }
L_002AA600:
    set32(c.r[4], c.r[17].w[0] + 364u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA60Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 181u, depth + 1u); else { c.pc = 0x00289760u; return; } if (c.pc != 0x002AA60Cu) [[unlikely]] return; }
L_002AA60C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AA620:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA63Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 286u, depth + 1u); else { c.pc = 0x0029B4F0u; return; } if (c.pc != 0x002AA63Cu) [[unlikely]] return; }
L_002AA63C:
    c.f[0] = ld32((c.r[17].w[0] + 336u));
    st32((c.r[16].w[0] + 336u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 340u));
    st32((c.r[16].w[0] + 340u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 344u));
    st32((c.r[16].w[0] + 344u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 348u));
    st32((c.r[16].w[0] + 348u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 352u));
    st32((c.r[16].w[0] + 352u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 356u));
    st32((c.r[16].w[0] + 356u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    st32((c.r[16].w[0] + 360u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 364u));
    st32((c.r[16].w[0] + 364u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 368u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 372u));
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AA6A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AA6F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 10320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA6CCu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0072(c, 381u, depth + 1u); else { c.pc = 0x002CB350u; return; } if (c.pc != 0x002AA6CCu) [[unlikely]] return; }
L_002AA6CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA6D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0066(c, 319u, depth + 1u); else { c.pc = 0x0029BA50u; return; } if (c.pc != 0x002AA6D8u) [[unlikely]] return; }
L_002AA6D8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002AA6F8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA6F4u); set32(c.r[5], 0u + 384u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002AA6F4u) [[unlikely]] return; }
L_002AA6F4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002AA6F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AA710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA724u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 333u, depth + 1u); else { c.pc = 0x0029BC80u; return; } if (c.pc != 0x002AA724u) [[unlikely]] return; }
L_002AA724:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] + 10320u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 340u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 344u), 0u);
    st32((c.r[16].w[0] + 348u), 0u);
    st32((c.r[16].w[0] + 352u), 0u);
    st32((c.r[16].w[0] + 356u), 0u);
    st32((c.r[16].w[0] + 360u), 0u);
    st32((c.r[16].w[0] + 364u), 0u);
    st32((c.r[16].w[0] + 368u), 0u);
    st32((c.r[16].w[0] + 372u), 0u);
    st32((c.r[16].w[0] + 336u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 340u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 344u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 348u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 356u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 360u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 368u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 372u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AA7A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AA7EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10464u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA7D0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0069(c, 225u, depth + 1u); else { c.pc = 0x002A5BA0u; return; } if (c.pc != 0x002AA7D0u) [[unlikely]] return; }
L_002AA7D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002AA7F0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA7ECu); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002AA7ECu) [[unlikely]] return; }
L_002AA7EC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002AA7F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AA810:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 20848u);  c.pc = t; return; }
L_002AA820:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA834u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 434u, depth + 1u); else { c.pc = 0x002A3E80u; return; } if (c.pc != 0x002AA834u) [[unlikely]] return; }
L_002AA834:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA840u); set32(c.r[4], ld32((c.r[2].w[0] + 20848u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002AA840u) [[unlikely]] return; }
L_002AA840:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA854u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002AA854u) [[unlikely]] return; }
L_002AA854:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AA870:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3ED0u | kUnwind; return; } [[clang::musttail]] return unit_0068(c, 438u, depth); }
L_002AA880:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3F90u | kUnwind; return; } [[clang::musttail]] return unit_0068(c, 442u, depth); }
L_002AA890:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4080u | kUnwind; return; } [[clang::musttail]] return unit_0069(c, 8u, depth); }
L_002AA8A0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4150u | kUnwind; return; } [[clang::musttail]] return unit_0069(c, 14u, depth); }
L_002AA8B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4290u | kUnwind; return; } [[clang::musttail]] return unit_0069(c, 28u, depth); }
L_002AA8C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 256u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA8D8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002AA8D8u) [[unlikely]] return; }
L_002AA8D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002AA8F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA8E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 260u, depth + 1u); else { c.pc = 0x002A5F50u; return; } if (c.pc != 0x002AA8E8u) [[unlikely]] return; }
L_002AA8E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 10464u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002AA8F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AA910:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 256u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA938u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002AA938u) [[unlikely]] return; }
L_002AA938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002AA954; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA948u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 260u, depth + 1u); else { c.pc = 0x002A5F50u; return; } if (c.pc != 0x002AA948u) [[unlikely]] return; }
L_002AA948:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 10464u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002AA954:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA964u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 76u, depth + 1u); else { c.pc = 0x002A4860u; return; } if (c.pc != 0x002AA964u) [[unlikely]] return; }
L_002AA964:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AA980:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002AAB48; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], 0u + 32u);  goto L_002AA9D8; }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AA9D4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AA9D4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 216u)));  goto L_002AAAD8; }
L_002AA9D4:
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_002AA9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA9E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002AA9E0u) [[unlikely]] return; }
L_002AA9E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], ld32((c.r[19].w[0] + 216u)));  goto L_002AAA38; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAA00u); st32((c.r[16].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AAA00u) [[unlikely]] return; }
L_002AAA00:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAA10u); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AAA10u) [[unlikely]] return; }
L_002AAA10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 9216u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[17], ld32((c.r[19].w[0] + 216u)));
    c.budget -= 10;
L_002AAA38:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[16], ld32((c.r[18].w[0] + 12u)));  goto L_002AAAC8; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[19].w[0] + 216u), c.r[16].w[0]);  goto L_002AAA80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAA50u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AAA50u) [[unlikely]] return; }
L_002AAA50:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAA60u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AAA60u) [[unlikely]] return; }
L_002AAA60:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AAA7C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAA7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AAA7Cu) [[unlikely]] return; }
L_002AAA7C:
    st32((c.r[19].w[0] + 216u), c.r[16].w[0]);
    c.budget -= 1;
L_002AAA80:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002AAAA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAA90u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AAA90u) [[unlikely]] return; }
L_002AAA90:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAAA0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AAAA0u) [[unlikely]] return; }
L_002AAAA0:
    set32(c.r[16], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AAAC8; } }
L_002AAAAC:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  goto L_002AAABC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002AAAC0; } }
L_002AAABC:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002AAAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAAC8u); set32(c.r[4], ld32((c.r[19].w[0] + 216u)));  if (depth < kMaxDepth) unit_0067(c, 14u, depth + 1u); else { c.pc = 0x0029C2D0u; return; } if (c.pc != 0x002AAAC8u) [[unlikely]] return; }
L_002AAAC8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AAAACu | kUnwind; return; } goto L_002AAAAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002AABB8; } }
L_002AAAD8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[18].d[0];  if (t) { goto L_002AABB4; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[19].w[0] + 216u), c.r[18].w[0]);  goto L_002AAB20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAAF0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AAAF0u) [[unlikely]] return; }
L_002AAAF0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAB00u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AAB00u) [[unlikely]] return; }
L_002AAB00:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AAB1C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAB1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AAB1Cu) [[unlikely]] return; }
L_002AAB1C:
    st32((c.r[19].w[0] + 216u), c.r[18].w[0]);
    c.budget -= 1;
L_002AAB20:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002AABB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAB30u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AAB30u) [[unlikely]] return; }
L_002AAB30:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAB40u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AAB40u) [[unlikely]] return; }
L_002AAB40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AABB4; } }
L_002AAB48:
    set32(c.r[16], ld32((c.r[19].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002AABB4; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002AAB94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAB64u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AAB64u) [[unlikely]] return; }
L_002AAB64:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAB74u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AAB74u) [[unlikely]] return; }
L_002AAB74:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AAB90; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAB90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AAB90u) [[unlikely]] return; }
L_002AAB90:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AAB94:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 216u), 0u);  if (t) { goto L_002AABB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AABA4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AABA4u) [[unlikely]] return; }
L_002AABA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AABB4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AABB4u) [[unlikely]] return; }
L_002AABB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002AABB8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002AABD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AABECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 219u, depth + 1u); else { c.pc = 0x002A5AC0u; return; } if (c.pc != 0x002AABECu) [[unlikely]] return; }
L_002AABEC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 400u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAC00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AAC00u) [[unlikely]] return; }
L_002AAC00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AAC20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 20864u);  c.pc = t; return; }
L_002AAC30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AAC40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAC5Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 290u, depth + 1u); else { c.pc = 0x002A6280u; return; } if (c.pc != 0x002AAC5Cu) [[unlikely]] return; }
L_002AAC5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAC68u); set32(c.r[4], ld32((c.r[2].w[0] + 20864u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002AAC68u) [[unlikely]] return; }
L_002AAC68:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAC7Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002AAC7Cu) [[unlikely]] return; }
L_002AAC7C:
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAC8Cu); set32(c.r[4], c.r[4].w[0] + 20880u);  if (depth < kMaxDepth) unit_0088(c, 223u, depth + 1u); else { c.pc = 0x00321A40u; return; } if (c.pc != 0x002AAC8Cu) [[unlikely]] return; }
L_002AAC8C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AACA0u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002AACA0u) [[unlikely]] return; }
L_002AACA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AACC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AACDCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 321u, depth + 1u); else { c.pc = 0x002A64D0u; return; } if (c.pc != 0x002AACDCu) [[unlikely]] return; }
L_002AACDC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 80u)));  goto L_002AACEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AAD6C; } }
L_002AACEC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002AAD00; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002AAD6C; }
L_002AAD00:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002AAD20; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AAD20; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AAD6C; } }
L_002AAD20:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002AAD6C; }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 12u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002AAD58; } }
L_002AAD34:
    set32(c.r[4], c.r[6].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[7].w[0] + 1u);  goto L_002AAD54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AAD6C; } }
L_002AAD54:
    c.r[7].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_002AAD58:
    c.r[3].d[0] = c.r[7].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 80u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AAD34u | kUnwind; return; } goto L_002AAD34; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002AAD6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AAD80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAD9Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 329u, depth + 1u); else { c.pc = 0x002A69A0u; return; } if (c.pc != 0x002AAD9Cu) [[unlikely]] return; }
L_002AAD9C:
    c.r[6].d[0] = ld16((c.r[17].w[0] + 12u));
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AADACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 361u, depth + 1u); else { c.pc = 0x002AAF00u; return; } if (c.pc != 0x002AADACu) [[unlikely]] return; }
L_002AADAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AADC0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6B70u | kUnwind; return; } [[clang::musttail]] return unit_0069(c, 347u, depth); }
L_002AADD0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6BE0u | kUnwind; return; } [[clang::musttail]] return unit_0069(c, 350u, depth); }
L_002AADE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AADFCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 358u, depth + 1u); else { c.pc = 0x002A6CB0u; return; } if (c.pc != 0x002AADFCu) [[unlikely]] return; }
L_002AADFC:
    c.r[4].d[0] = ld16((c.r[17].w[0] + 12u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAE08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002AAE08u) [[unlikely]] return; }
L_002AAE08:
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[17].w[0] + 12u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAE1Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 362u, depth + 1u); else { c.pc = 0x002AAF10u; return; } if (c.pc != 0x002AAE1Cu) [[unlikely]] return; }
L_002AAE1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AAE30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAE48u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002AAE48u) [[unlikely]] return; }
L_002AAE48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002AAE68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAE58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 486u, depth + 1u); else { c.pc = 0x002A7FD0u; return; } if (c.pc != 0x002AAE58u) [[unlikely]] return; }
L_002AAE58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 10624u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 4;
L_002AAE68:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AAE80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AAEDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 10624u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAEB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002AAEB4u) [[unlikely]] return; }
L_002AAEB4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAEC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0069(c, 461u, depth + 1u); else { c.pc = 0x002A7D40u; return; } if (c.pc != 0x002AAEC0u) [[unlikely]] return; }
L_002AAEC0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002AAEE0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAEDCu); set32(c.r[5], 0u + 96u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002AAEDCu) [[unlikely]] return; }
L_002AAEDC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002AAEE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AAF00:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 396u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6E70u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 363u, depth); }
L_002AAF10:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 392u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6F50u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 369u, depth); }
L_002AAF20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 20904u);  c.pc = t; return; }
L_002AAF30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002AAF40:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 424u, depth); }
L_002AAF50:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 425u, depth); }
L_002AAF60:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 427u, depth); }
L_002AAF70:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 428u, depth); }
L_002AAF80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AAFCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10720u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAFB0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x002AAFB0u) [[unlikely]] return; }
L_002AAFB0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002AAFD0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAFCCu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002AAFCCu) [[unlikely]] return; }
L_002AAFCC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002AAFD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AAFF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB004u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x002AB004u) [[unlikely]] return; }
L_002AB004:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 10720u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AB030:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 20928u);  c.pc = t; return; }
L_002AB040:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB05Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 229u, depth + 1u); else { c.pc = 0x00311D40u; return; } if (c.pc != 0x002AB05Cu) [[unlikely]] return; }
L_002AB05C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB068u); set32(c.r[4], ld32((c.r[2].w[0] + 20928u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002AB068u) [[unlikely]] return; }
L_002AB068:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB07Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002AB07Cu) [[unlikely]] return; }
L_002AB07C:
    set32(c.r[4], ld32((c.r[17].w[0] + 288u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002AB0A0; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB098u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB098u) [[unlikely]] return; }
L_002AB098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002AB0BC; } }
L_002AB0A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 20944u);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB0B8u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002AB0B8u) [[unlikely]] return; }
L_002AB0B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002AB0BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AB0D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB0F0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 237u, depth + 1u); else { c.pc = 0x00311DE0u; return; } if (c.pc != 0x002AB0F0u) [[unlikely]] return; }
L_002AB0F0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 288u)));  goto L_002AB100; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AB190; } }
L_002AB100:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 288u)));  if (t) { goto L_002AB110; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002AB190; }
L_002AB110:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002AB12C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002AB12C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AB190; } }
L_002AB12C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002AB190; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002AB18C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB14Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB14Cu) [[unlikely]] return; }
L_002AB14C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB160u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB160u) [[unlikely]] return; }
L_002AB160:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002AB18C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 288u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB17Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB17Cu) [[unlikely]] return; }
L_002AB17C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AB18C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AB190; } }
L_002AB18C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002AB190:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AB1B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB1CCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 239u, depth + 1u); else { c.pc = 0x00311E50u; return; } if (c.pc != 0x002AB1CCu) [[unlikely]] return; }
L_002AB1CC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 288u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB1E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB1E0u) [[unlikely]] return; }
L_002AB1E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AB200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB21Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 243u, depth + 1u); else { c.pc = 0x00311EA0u; return; } if (c.pc != 0x002AB21Cu) [[unlikely]] return; }
L_002AB21C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 288u)));  goto L_002AB22C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AB248; } }
L_002AB22C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002AB248; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB244u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB244u) [[unlikely]] return; }
L_002AB244:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002AB248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AB260:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB280u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 244u, depth + 1u); else { c.pc = 0x00311EB0u; return; } if (c.pc != 0x002AB280u) [[unlikely]] return; }
L_002AB280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB288u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x002AB288u) [[unlikely]] return; }
L_002AB288:
    set32(c.r[17], ld32((c.r[18].w[0] + 288u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002AB2FC; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[18].w[0] + 288u), c.r[16].w[0]);  goto L_002AB2D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB2A8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AB2A8u) [[unlikely]] return; }
L_002AB2A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB2B8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AB2B8u) [[unlikely]] return; }
L_002AB2B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AB2D4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB2D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB2D4u) [[unlikely]] return; }
L_002AB2D4:
    st32((c.r[18].w[0] + 288u), c.r[16].w[0]);
    c.budget -= 1;
L_002AB2D8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002AB2F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB2E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AB2E8u) [[unlikely]] return; }
L_002AB2E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB2F8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AB2F8u) [[unlikely]] return; }
L_002AB2F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002AB2FC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AB310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB324u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 245u, depth + 1u); else { c.pc = 0x00311EC0u; return; } if (c.pc != 0x002AB324u) [[unlikely]] return; }
L_002AB324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB32Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x002AB32Cu) [[unlikely]] return; }
L_002AB32C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AB340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 304u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB35Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002AB35Cu) [[unlikely]] return; }
L_002AB35C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002AB3A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB36Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 342u, depth + 1u); else { c.pc = 0x00313240u; return; } if (c.pc != 0x002AB36Cu) [[unlikely]] return; }
L_002AB36C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10816u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 288u), 0u);  if (t) { goto L_002AB39C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB38Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AB38Cu) [[unlikely]] return; }
L_002AB38C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB39Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AB39Cu) [[unlikely]] return; }
L_002AB39C:
    st32((c.r[17].w[0] + 260u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 292u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002AB3A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AB3C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AB440; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[16].w[0] + 272u);
    set32(c.r[2], c.r[2].w[0] + 17600u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002AB418; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 11000u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 272u), c.r[2].w[0]);  if (t) { goto L_002AB418; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 10984u);
    st32((c.r[16].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 276u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB418u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002AB418u) [[unlikely]] return; }
L_002AB418:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB424u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 393u, depth + 1u); else { c.pc = 0x002BAEB0u; return; } if (c.pc != 0x002AB424u) [[unlikely]] return; }
L_002AB424:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002AB444; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB440u); set32(c.r[5], 0u + 288u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002AB440u) [[unlikely]] return; }
L_002AB440:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002AB444:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AB460:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 304u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB48Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002AB48Cu) [[unlikely]] return; }
L_002AB48C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002AB4D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB49Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 342u, depth + 1u); else { c.pc = 0x00313240u; return; } if (c.pc != 0x002AB49Cu) [[unlikely]] return; }
L_002AB49C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10816u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[16].w[0] + 288u), 0u);  if (t) { goto L_002AB4CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB4BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AB4BCu) [[unlikely]] return; }
L_002AB4BC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB4CCu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AB4CCu) [[unlikely]] return; }
L_002AB4CC:
    st32((c.r[16].w[0] + 260u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 292u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002AB4D8:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB4E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 253u, depth + 1u); else { c.pc = 0x00311FF0u; return; } if (c.pc != 0x002AB4E8u) [[unlikely]] return; }
L_002AB4E8:
    set32(c.r[4], ld32((c.r[18].w[0] + 288u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 288u)));  goto L_002AB57C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB504u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB504u) [[unlikely]] return; }
L_002AB504:
    set32(c.r[18], ld32((c.r[16].w[0] + 288u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[17].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002AB5E8; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 288u), c.r[17].w[0]);  goto L_002AB554; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB524u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AB524u) [[unlikely]] return; }
L_002AB524:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB534u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AB534u) [[unlikely]] return; }
L_002AB534:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AB550; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB550u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB550u) [[unlikely]] return; }
L_002AB550:
    st32((c.r[16].w[0] + 288u), c.r[17].w[0]);
    c.budget -= 1;
L_002AB554:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002AB5E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB564u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AB564u) [[unlikely]] return; }
L_002AB564:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB574u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AB574u) [[unlikely]] return; }
L_002AB574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AB5E4; } }
L_002AB57C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002AB5E4; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002AB5C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB594u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AB594u) [[unlikely]] return; }
L_002AB594:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB5A4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AB5A4u) [[unlikely]] return; }
L_002AB5A4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AB5C0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB5C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB5C0u) [[unlikely]] return; }
L_002AB5C0:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB5C4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 288u), 0u);  if (t) { goto L_002AB5E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB5D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AB5D4u) [[unlikely]] return; }
L_002AB5D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB5E4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AB5E4u) [[unlikely]] return; }
L_002AB5E4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002AB5E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002AB610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002AB6F4; } }
L_002AB62C:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002AB6F4; }
    set32(c.r[5], ld32((c.r[17].w[0] + 276u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 268u)));
    set32(c.r[7], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_002AB6F0; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 282u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 268u)));  goto L_002AB68C; }
    set32(c.r[2], c.r[16].w[0] + 1u);
    st16((c.r[17].w[0] + 282u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 268u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 276u)));  goto L_002AB6C8; }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 284u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 284u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002AB6C4; } }
L_002AB68C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[7].w[0])));  goto L_002AB6B0; }
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AB6C4; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 284u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 284u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002AB6C4; } }
L_002AB6B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AB6C4; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 284u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 284u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002AB6C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 276u)));
    c.budget -= 1;
L_002AB6C8:
    set32(c.r[5], ld32((c.r[17].w[0] + 268u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = ld32((c.r[17].w[0] + 264u));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 256u));
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB6F0u); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB6F0u) [[unlikely]] return; }
L_002AB6F0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002AB6F4:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 218u));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 212u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB62Cu | kUnwind; return; } goto L_002AB62C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AB720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 292u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AB7CC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 288u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002AB7D0; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB760u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB760u) [[unlikely]] return; }
L_002AB760:
    st32((c.r[17].w[0] + 260u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30640u)));
    c.budget -= 4;
    if (c.r[5].sd[0] < 0) { set32(c.r[3], ld32((c.r[17].w[0] + 260u)));  goto L_002AB79C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 288u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB784u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB784u) [[unlikely]] return; }
L_002AB784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 260u), c.r[2].w[0]);  if (t) { goto L_002AB798; } }
L_002AB78C:
    set32(c.r[2], ld32((c.r[17].w[0] + 260u)));
    c.budget -= 1;
L_002AB790:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 2;
L_002AB798:
    set32(c.r[3], ld32((c.r[17].w[0] + 260u)));
    c.budget -= 1;
L_002AB79C:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002AB7CC; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 218u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 260u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB790u | kUnwind; return; } goto L_002AB790; }
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB78Cu | kUnwind; return; } goto L_002AB78C; } }
L_002AB7CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002AB7D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB7D8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 275u, depth + 1u); else { c.pc = 0x003123F0u; return; } if (c.pc != 0x002AB7D8u) [[unlikely]] return; }
L_002AB7D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AB7F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB804u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 20u, depth + 1u); else { c.pc = 0x0027C310u; return; } if (c.pc != 0x002AB804u) [[unlikely]] return; }
L_002AB804:
    set32(c.r[4], ld32((c.r[16].w[0] + 288u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002AB824; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB820u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB820u) [[unlikely]] return; }
L_002AB820:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002AB824:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AB830:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AB910; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 288u);
    set32(c.r[3], c.r[3].w[0] + 10816u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_002AB8A4; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 288u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002AB8A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB878u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AB878u) [[unlikely]] return; }
L_002AB878:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB888u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AB888u) [[unlikely]] return; }
L_002AB888:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AB8A4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB8A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AB8A4u) [[unlikely]] return; }
L_002AB8A4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002AB8F8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[17].w[0] + 272u);
    set32(c.r[2], c.r[2].w[0] + 17600u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002AB8E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 11000u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 272u), c.r[2].w[0]);  if (t) { goto L_002AB8E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 10984u);
    st32((c.r[17].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 276u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB8E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002AB8E8u) [[unlikely]] return; }
L_002AB8E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB8F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 393u, depth + 1u); else { c.pc = 0x002BAEB0u; return; } if (c.pc != 0x002AB8F4u) [[unlikely]] return; }
L_002AB8F4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002AB8F8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002AB914; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB910u); set32(c.r[5], 0u + 304u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002AB910u) [[unlikely]] return; }
L_002AB910:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002AB914:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AB930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB948u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0084(c, 342u, depth + 1u); else { c.pc = 0x00313240u; return; } if (c.pc != 0x002AB948u) [[unlikely]] return; }
L_002AB948:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10816u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 288u), 0u);  if (t) { goto L_002AB978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB968u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002AB968u) [[unlikely]] return; }
L_002AB968:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB978u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002AB978u) [[unlikely]] return; }
L_002AB978:
    st32((c.r[17].w[0] + 260u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 292u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AB9A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AB9F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 10984u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB9D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002AB9D4u) [[unlikely]] return; }
L_002AB9D4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002AB9F4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB9F0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002AB9F0u) [[unlikely]] return; }
L_002AB9F0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002AB9F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002ABA10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002ABA70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 11000u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002ABA54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 10984u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABA54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002ABA54u) [[unlikely]] return; }
L_002ABA54:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002ABA74; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABA70u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002ABA70u) [[unlikely]] return; }
L_002ABA70:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002ABA74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002ABA90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 27672u));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  [[clang::musttail]] return unit_006B(c, 23u, depth); }
    st8((c.r[28].w[0] - 27672u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABABCu); set32(c.r[4], c.r[4].w[0] + 21104u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABABCu) [[unlikely]] return; }
L_002ABABC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABAC8u); set32(c.r[4], c.r[4].w[0] + 21129u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABAC8u) [[unlikely]] return; }
L_002ABAC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABAD4u); set32(c.r[4], c.r[4].w[0] + 21148u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABAD4u) [[unlikely]] return; }
L_002ABAD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABAE0u); set32(c.r[4], c.r[4].w[0] + 21164u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABAE0u) [[unlikely]] return; }
L_002ABAE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABAECu); set32(c.r[4], c.r[4].w[0] + 21179u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABAECu) [[unlikely]] return; }
L_002ABAEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABAF8u); set32(c.r[4], c.r[4].w[0] + 21201u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABAF8u) [[unlikely]] return; }
L_002ABAF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABB04u); set32(c.r[4], c.r[4].w[0] + 21227u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABB04u) [[unlikely]] return; }
L_002ABB04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABB10u); set32(c.r[4], c.r[4].w[0] + 21243u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABB10u) [[unlikely]] return; }
L_002ABB10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABB1Cu); set32(c.r[4], c.r[4].w[0] + 21261u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABB1Cu) [[unlikely]] return; }
L_002ABB1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABB28u); set32(c.r[4], c.r[4].w[0] + 21280u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABB28u) [[unlikely]] return; }
L_002ABB28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABB34u); set32(c.r[4], c.r[4].w[0] + 21290u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABB34u) [[unlikely]] return; }
L_002ABB34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABB40u); set32(c.r[4], c.r[4].w[0] + 21299u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABB40u) [[unlikely]] return; }
L_002ABB40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABB4Cu); set32(c.r[4], c.r[4].w[0] + 21320u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABB4Cu) [[unlikely]] return; }
L_002ABB4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABB58u); set32(c.r[4], c.r[4].w[0] + 21338u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABB58u) [[unlikely]] return; }
L_002ABB58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABB64u); set32(c.r[4], c.r[4].w[0] + 21355u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABB64u) [[unlikely]] return; }
L_002ABB64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABB70u); set32(c.r[4], c.r[4].w[0] + 21380u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABB70u) [[unlikely]] return; }
L_002ABB70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABB7Cu); set32(c.r[4], c.r[4].w[0] + 21399u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABB7Cu) [[unlikely]] return; }
L_002ABB7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABB88u); set32(c.r[4], c.r[4].w[0] + 21416u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABB88u) [[unlikely]] return; }
L_002ABB88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABB94u); set32(c.r[4], c.r[4].w[0] + 21428u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABB94u) [[unlikely]] return; }
L_002ABB94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABBA0u); set32(c.r[4], c.r[4].w[0] + 21445u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABBA0u) [[unlikely]] return; }
L_002ABBA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABBACu); set32(c.r[4], c.r[4].w[0] + 21463u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABBACu) [[unlikely]] return; }
L_002ABBAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABBB8u); set32(c.r[4], c.r[4].w[0] + 21477u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABBB8u) [[unlikely]] return; }
L_002ABBB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABBC4u); set32(c.r[4], c.r[4].w[0] + 21496u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABBC4u) [[unlikely]] return; }
L_002ABBC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABBD0u); set32(c.r[4], c.r[4].w[0] + 21516u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABBD0u) [[unlikely]] return; }
L_002ABBD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABBDCu); set32(c.r[4], c.r[4].w[0] + 21526u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABBDCu) [[unlikely]] return; }
L_002ABBDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABBE8u); set32(c.r[4], c.r[4].w[0] + 21534u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABBE8u) [[unlikely]] return; }
L_002ABBE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABBF4u); set32(c.r[4], c.r[4].w[0] + 21546u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABBF4u) [[unlikely]] return; }
L_002ABBF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABC00u); set32(c.r[4], c.r[4].w[0] + 21565u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABC00u) [[unlikely]] return; }
L_002ABC00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABC0Cu); set32(c.r[4], c.r[4].w[0] + 21572u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABC0Cu) [[unlikely]] return; }
L_002ABC0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABC18u); set32(c.r[4], c.r[4].w[0] + 21582u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABC18u) [[unlikely]] return; }
L_002ABC18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABC24u); set32(c.r[4], c.r[4].w[0] + 21594u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABC24u) [[unlikely]] return; }
L_002ABC24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABC30u); set32(c.r[4], c.r[4].w[0] + 21610u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABC30u) [[unlikely]] return; }
L_002ABC30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABC3Cu); set32(c.r[4], c.r[4].w[0] + 21645u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABC3Cu) [[unlikely]] return; }
L_002ABC3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABC48u); set32(c.r[4], c.r[4].w[0] + 21657u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABC48u) [[unlikely]] return; }
L_002ABC48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABC54u); set32(c.r[4], c.r[4].w[0] + 21670u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABC54u) [[unlikely]] return; }
L_002ABC54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABC60u); set32(c.r[4], c.r[4].w[0] + 21685u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABC60u) [[unlikely]] return; }
L_002ABC60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABC6Cu); set32(c.r[4], c.r[4].w[0] + 21712u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABC6Cu) [[unlikely]] return; }
L_002ABC6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABC78u); set32(c.r[4], c.r[4].w[0] + 21728u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABC78u) [[unlikely]] return; }
L_002ABC78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABC84u); set32(c.r[4], c.r[4].w[0] + 21744u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABC84u) [[unlikely]] return; }
L_002ABC84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABC90u); set32(c.r[4], c.r[4].w[0] + 21760u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABC90u) [[unlikely]] return; }
L_002ABC90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABC9Cu); set32(c.r[4], c.r[4].w[0] + 21771u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABC9Cu) [[unlikely]] return; }
L_002ABC9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABCA8u); set32(c.r[4], c.r[4].w[0] + 21786u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABCA8u) [[unlikely]] return; }
L_002ABCA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABCB4u); set32(c.r[4], c.r[4].w[0] + 21802u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABCB4u) [[unlikely]] return; }
L_002ABCB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABCC0u); set32(c.r[4], c.r[4].w[0] + 21819u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABCC0u) [[unlikely]] return; }
L_002ABCC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABCCCu); set32(c.r[4], c.r[4].w[0] + 21836u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABCCCu) [[unlikely]] return; }
L_002ABCCC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABCD8u); set32(c.r[4], c.r[4].w[0] + 21857u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABCD8u) [[unlikely]] return; }
L_002ABCD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABCE4u); set32(c.r[4], c.r[4].w[0] + 21873u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABCE4u) [[unlikely]] return; }
L_002ABCE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABCF0u); set32(c.r[4], c.r[4].w[0] + 21892u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABCF0u) [[unlikely]] return; }
L_002ABCF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABCFCu); set32(c.r[4], c.r[4].w[0] + 21904u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABCFCu) [[unlikely]] return; }
L_002ABCFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABD08u); set32(c.r[4], c.r[4].w[0] + 21922u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABD08u) [[unlikely]] return; }
L_002ABD08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABD14u); set32(c.r[4], c.r[4].w[0] + 21940u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABD14u) [[unlikely]] return; }
L_002ABD14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABD20u); set32(c.r[4], c.r[4].w[0] + 21959u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABD20u) [[unlikely]] return; }
L_002ABD20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABD2Cu); set32(c.r[4], c.r[4].w[0] + 21972u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABD2Cu) [[unlikely]] return; }
L_002ABD2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABD38u); set32(c.r[4], c.r[4].w[0] + 21996u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABD38u) [[unlikely]] return; }
L_002ABD38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABD44u); set32(c.r[4], c.r[4].w[0] + 22012u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABD44u) [[unlikely]] return; }
L_002ABD44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABD50u); set32(c.r[4], c.r[4].w[0] + 22032u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABD50u) [[unlikely]] return; }
L_002ABD50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABD5Cu); set32(c.r[4], c.r[4].w[0] + 22043u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABD5Cu) [[unlikely]] return; }
L_002ABD5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABD68u); set32(c.r[4], c.r[4].w[0] + 22058u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABD68u) [[unlikely]] return; }
L_002ABD68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABD74u); set32(c.r[4], c.r[4].w[0] + 22080u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABD74u) [[unlikely]] return; }
L_002ABD74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABD80u); set32(c.r[4], c.r[4].w[0] + 22092u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABD80u) [[unlikely]] return; }
L_002ABD80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABD8Cu); set32(c.r[4], c.r[4].w[0] + 22108u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABD8Cu) [[unlikely]] return; }
L_002ABD8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABD98u); set32(c.r[4], c.r[4].w[0] + 22126u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABD98u) [[unlikely]] return; }
L_002ABD98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABDA4u); set32(c.r[4], c.r[4].w[0] + 22148u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABDA4u) [[unlikely]] return; }
L_002ABDA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABDB0u); set32(c.r[4], c.r[4].w[0] + 22171u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABDB0u) [[unlikely]] return; }
L_002ABDB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABDBCu); set32(c.r[4], c.r[4].w[0] + 22191u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABDBCu) [[unlikely]] return; }
L_002ABDBC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABDC8u); set32(c.r[4], c.r[4].w[0] + 22209u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABDC8u) [[unlikely]] return; }
L_002ABDC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABDD4u); set32(c.r[4], c.r[4].w[0] + 22226u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABDD4u) [[unlikely]] return; }
L_002ABDD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABDE0u); set32(c.r[4], c.r[4].w[0] + 22247u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABDE0u) [[unlikely]] return; }
L_002ABDE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABDECu); set32(c.r[4], c.r[4].w[0] + 22263u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x002ABDECu) [[unlikely]] return; }
L_002ABDEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABDF4u);  if (depth < kMaxDepth) unit_0074(c, 142u, depth + 1u); else { c.pc = 0x002D0E20u; return; } if (c.pc != 0x002ABDF4u) [[unlikely]] return; }
L_002ABDF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABDFCu);  if (depth < kMaxDepth) unit_0085(c, 227u, depth + 1u); else { c.pc = 0x003169A0u; return; } if (c.pc != 0x002ABDFCu) [[unlikely]] return; }
L_002ABDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE04u);  if (depth < kMaxDepth) unit_0060(c, 211u, depth + 1u); else { c.pc = 0x00281710u; return; } if (c.pc != 0x002ABE04u) [[unlikely]] return; }
L_002ABE04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE0Cu);  if (depth < kMaxDepth) unit_0066(c, 159u, depth + 1u); else { c.pc = 0x0029A480u; return; } if (c.pc != 0x002ABE0Cu) [[unlikely]] return; }
L_002ABE0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE14u);  if (depth < kMaxDepth) unit_0067(c, 165u, depth + 1u); else { c.pc = 0x0029D4D0u; return; } if (c.pc != 0x002ABE14u) [[unlikely]] return; }
L_002ABE14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE1Cu);  if (depth < kMaxDepth) unit_006D(c, 112u, depth + 1u); else { c.pc = 0x002B4D60u; return; } if (c.pc != 0x002ABE1Cu) [[unlikely]] return; }
L_002ABE1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE24u);  if (depth < kMaxDepth) unit_006D(c, 362u, depth + 1u); else { c.pc = 0x002B6B50u; return; } if (c.pc != 0x002ABE24u) [[unlikely]] return; }
L_002ABE24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE2Cu);  if (depth < kMaxDepth) unit_0072(c, 430u, depth + 1u); else { c.pc = 0x002CB7E0u; return; } if (c.pc != 0x002ABE2Cu) [[unlikely]] return; }
L_002ABE2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE34u);  if (depth < kMaxDepth) unit_0074(c, 11u, depth + 1u); else { c.pc = 0x002D01C0u; return; } if (c.pc != 0x002ABE34u) [[unlikely]] return; }
L_002ABE34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE3Cu);  if (depth < kMaxDepth) unit_0075(c, 260u, depth + 1u); else { c.pc = 0x002D5790u; return; } if (c.pc != 0x002ABE3Cu) [[unlikely]] return; }
L_002ABE3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE44u);  if (depth < kMaxDepth) unit_0078(c, 253u, depth + 1u); else { c.pc = 0x002E1C30u; return; } if (c.pc != 0x002ABE44u) [[unlikely]] return; }
L_002ABE44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE4Cu);  if (depth < kMaxDepth) unit_0081(c, 521u, depth + 1u); else { c.pc = 0x003070C0u; return; } if (c.pc != 0x002ABE4Cu) [[unlikely]] return; }
L_002ABE4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE54u);  if (depth < kMaxDepth) unit_0086(c, 22u, depth + 1u); else { c.pc = 0x003183B0u; return; } if (c.pc != 0x002ABE54u) [[unlikely]] return; }
L_002ABE54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE5Cu);  if (depth < kMaxDepth) unit_0088(c, 135u, depth + 1u); else { c.pc = 0x00321000u; return; } if (c.pc != 0x002ABE5Cu) [[unlikely]] return; }
L_002ABE5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE64u);  if (depth < kMaxDepth) unit_0088(c, 271u, depth + 1u); else { c.pc = 0x00322010u; return; } if (c.pc != 0x002ABE64u) [[unlikely]] return; }
L_002ABE64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE6Cu);  if (depth < kMaxDepth) unit_0088(c, 318u, depth + 1u); else { c.pc = 0x00322550u; return; } if (c.pc != 0x002ABE6Cu) [[unlikely]] return; }
L_002ABE6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE74u);  if (depth < kMaxDepth) unit_006A(c, 166u, depth + 1u); else { c.pc = 0x002A9930u; return; } if (c.pc != 0x002ABE74u) [[unlikely]] return; }
L_002ABE74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE7Cu);  if (depth < kMaxDepth) unit_0083(c, 362u, depth + 1u); else { c.pc = 0x0030ECE0u; return; } if (c.pc != 0x002ABE7Cu) [[unlikely]] return; }
L_002ABE7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE84u);  if (depth < kMaxDepth) unit_0072(c, 352u, depth + 1u); else { c.pc = 0x002CB040u; return; } if (c.pc != 0x002ABE84u) [[unlikely]] return; }
L_002ABE84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE8Cu);  if (depth < kMaxDepth) unit_0070(c, 219u, depth + 1u); else { c.pc = 0x002C1DF0u; return; } if (c.pc != 0x002ABE8Cu) [[unlikely]] return; }
L_002ABE8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE94u);  if (depth < kMaxDepth) unit_0085(c, 63u, depth + 1u); else { c.pc = 0x00314D00u; return; } if (c.pc != 0x002ABE94u) [[unlikely]] return; }
L_002ABE94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABE9Cu);  if (depth < kMaxDepth) unit_005F(c, 101u, depth + 1u); else { c.pc = 0x0027DDC0u; return; } if (c.pc != 0x002ABE9Cu) [[unlikely]] return; }
L_002ABE9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABEA4u);  if (depth < kMaxDepth) unit_006B(c, 161u, depth + 1u); else { c.pc = 0x002ACCE0u; return; } if (c.pc != 0x002ABEA4u) [[unlikely]] return; }
L_002ABEA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABEACu);  if (depth < kMaxDepth) unit_0076(c, 201u, depth + 1u); else { c.pc = 0x002D9740u; return; } if (c.pc != 0x002ABEACu) [[unlikely]] return; }
L_002ABEAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABEB4u);  if (depth < kMaxDepth) unit_006C(c, 407u, depth + 1u); else { c.pc = 0x002B3150u; return; } if (c.pc != 0x002ABEB4u) [[unlikely]] return; }
L_002ABEB4:
    set32(c.r[2], ld32((c.r[28].w[0] - 27616u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 27604u)));  goto L_002ABF30; }
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABECCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002ABECCu) [[unlikely]] return; }
L_002ABECC:
    st32((c.r[28].w[0] - 27616u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ABF2C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABEFCu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ABEFCu) [[unlikely]] return; }
L_002ABEFC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABF0Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ABF0Cu) [[unlikely]] return; }
L_002ABF0C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ABF2C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABF2Cu); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ABF2Cu) [[unlikely]] return; }
L_002ABF2C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27604u)));
    c.budget -= 1;
L_002ABF30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 27600u)));  goto L_002ABFA8; }
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABF44u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002ABF44u) [[unlikely]] return; }
L_002ABF44:
    st32((c.r[28].w[0] - 27604u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ABFA4; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABF74u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ABF74u) [[unlikely]] return; }
L_002ABF74:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABF84u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ABF84u) [[unlikely]] return; }
L_002ABF84:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ABFA4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABFA4u); set32(c.r[5], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ABFA4u) [[unlikely]] return; }
L_002ABFA4:
    set32(c.r[2], ld32((c.r[28].w[0] - 27600u)));
    c.budget -= 1;
L_002ABFA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 27596u)));  [[clang::musttail]] return unit_006B(c, 3u, depth); }
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABFBCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002ABFBCu) [[unlikely]] return; }
L_002ABFBC:
    st32((c.r[28].w[0] - 27600u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_006B(c, 2u, depth); } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABFECu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ABFECu) [[unlikely]] return; }
L_002ABFEC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABFFCu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ABFFCu) [[unlikely]] return; }
L_002ABFFC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
    [[clang::musttail]] return unit_006B(c, 1u, depth);
}

}
