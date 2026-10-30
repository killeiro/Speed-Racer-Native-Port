#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007B[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 19, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37,
    0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0,
    0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0,
    0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78,
    0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0,
    0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0,
    0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0,
    0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0,
    0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0,
    0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0,
    0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0,
    0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0,
    0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0,
    0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0,
    0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205,
    0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0,
    0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0,
    0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0,
    0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0,
    0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0,
    0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0,
    0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0,
    0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0,
    0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0,
    0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0,
    0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0,
    0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0,
    337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0,
    0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0,
    0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0,
    0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0,
    0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0,
    0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0,
    0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0,
    388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0,
    408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 413,
    0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0,
    0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 423,
    0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0,
    0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0,
    0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0,
    0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0,
    0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0,
    456, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0,
    0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0,
    0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0,
    0, 471, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0, 477,
};

void unit_007B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002EC000;
    case 2u: goto L_002EC010;
    case 3u: goto L_002EC03C;
    case 4u: goto L_002EC04C;
    case 5u: goto L_002EC06C;
    case 6u: goto L_002EC078;
    case 7u: goto L_002EC0A0;
    case 8u: goto L_002EC0C4;
    case 9u: goto L_002EC0D8;
    case 10u: goto L_002EC0E8;
    case 11u: goto L_002EC114;
    case 12u: goto L_002EC124;
    case 13u: goto L_002EC144;
    case 14u: goto L_002EC168;
    case 15u: goto L_002EC178;
    case 16u: goto L_002EC1A8;
    case 17u: goto L_002EC1B8;
    case 18u: goto L_002EC1D8;
    case 19u: goto L_002EC1DC;
    case 20u: goto L_002EC210;
    case 21u: goto L_002EC288;
    case 22u: goto L_002EC2C8;
    case 23u: goto L_002EC314;
    case 24u: goto L_002EC368;
    case 25u: goto L_002EC3B4;
    case 26u: goto L_002EC430;
    case 27u: goto L_002EC4A0;
    case 28u: goto L_002EC4A8;
    case 29u: goto L_002EC4B8;
    case 30u: goto L_002EC51C;
    case 31u: goto L_002EC52C;
    case 32u: goto L_002EC540;
    case 33u: goto L_002EC560;
    case 34u: goto L_002EC580;
    case 35u: goto L_002EC5A0;
    case 36u: goto L_002EC5CC;
    case 37u: goto L_002EC5FC;
    case 38u: goto L_002EC60C;
    case 39u: goto L_002EC62C;
    case 40u: goto L_002EC654;
    case 41u: goto L_002EC664;
    case 42u: goto L_002EC684;
    case 43u: goto L_002EC6AC;
    case 44u: goto L_002EC6BC;
    case 45u: goto L_002EC6DC;
    case 46u: goto L_002EC704;
    case 47u: goto L_002EC714;
    case 48u: goto L_002EC734;
    case 49u: goto L_002EC754;
    case 50u: goto L_002EC764;
    case 51u: goto L_002EC794;
    case 52u: goto L_002EC7D0;
    case 53u: goto L_002EC7F8;
    case 54u: goto L_002EC808;
    case 55u: goto L_002EC828;
    case 56u: goto L_002EC880;
    case 57u: goto L_002EC8E8;
    case 58u: goto L_002EC900;
    case 59u: goto L_002EC930;
    case 60u: goto L_002EC940;
    case 61u: goto L_002EC960;
    case 62u: goto L_002EC96C;
    case 63u: goto L_002EC990;
    case 64u: goto L_002EC9B4;
    case 65u: goto L_002EC9D8;
    case 66u: goto L_002EC9FC;
    case 67u: goto L_002ECA28;
    case 68u: goto L_002ECA58;
    case 69u: goto L_002ECA68;
    case 70u: goto L_002ECA88;
    case 71u: goto L_002ECAB4;
    case 72u: goto L_002ECAC4;
    case 73u: goto L_002ECAE4;
    case 74u: goto L_002ECB10;
    case 75u: goto L_002ECB20;
    case 76u: goto L_002ECB40;
    case 77u: goto L_002ECB6C;
    case 78u: goto L_002ECB7C;
    case 79u: goto L_002ECB9C;
    case 80u: goto L_002ECBC0;
    case 81u: goto L_002ECBD4;
    case 82u: goto L_002ECBE4;
    case 83u: goto L_002ECC10;
    case 84u: goto L_002ECC20;
    case 85u: goto L_002ECC40;
    case 86u: goto L_002ECC80;
    case 87u: goto L_002ECCA4;
    case 88u: goto L_002ECCC4;
    case 89u: goto L_002ECCE8;
    case 90u: goto L_002ECD00;
    case 91u: goto L_002ECD10;
    case 92u: goto L_002ECD20;
    case 93u: goto L_002ECD4C;
    case 94u: goto L_002ECD5C;
    case 95u: goto L_002ECD7C;
    case 96u: goto L_002ECDA8;
    case 97u: goto L_002ECDB8;
    case 98u: goto L_002ECDD8;
    case 99u: goto L_002ECE04;
    case 100u: goto L_002ECE14;
    case 101u: goto L_002ECE34;
    case 102u: goto L_002ECE58;
    case 103u: goto L_002ECEA8;
    case 104u: goto L_002ECECC;
    case 105u: goto L_002ECEE4;
    case 106u: goto L_002ECEF4;
    case 107u: goto L_002ECF04;
    case 108u: goto L_002ECF30;
    case 109u: goto L_002ECF40;
    case 110u: goto L_002ECF60;
    case 111u: goto L_002ECF8C;
    case 112u: goto L_002ECF9C;
    case 113u: goto L_002ECFBC;
    case 114u: goto L_002ECFE8;
    case 115u: goto L_002ECFF8;
    case 116u: goto L_002ED018;
    case 117u: goto L_002ED03C;
    case 118u: goto L_002ED060;
    case 119u: goto L_002ED074;
    case 120u: goto L_002ED084;
    case 121u: goto L_002ED0B0;
    case 122u: goto L_002ED0C0;
    case 123u: goto L_002ED0E0;
    case 124u: goto L_002ED104;
    case 125u: goto L_002ED128;
    case 126u: goto L_002ED13C;
    case 127u: goto L_002ED14C;
    case 128u: goto L_002ED178;
    case 129u: goto L_002ED188;
    case 130u: goto L_002ED1A8;
    case 131u: goto L_002ED1CC;
    case 132u: goto L_002ED1E0;
    case 133u: goto L_002ED1F0;
    case 134u: goto L_002ED21C;
    case 135u: goto L_002ED22C;
    case 136u: goto L_002ED24C;
    case 137u: goto L_002ED280;
    case 138u: goto L_002ED2F4;
    case 139u: goto L_002ED30C;
    case 140u: goto L_002ED33C;
    case 141u: goto L_002ED34C;
    case 142u: goto L_002ED36C;
    case 143u: goto L_002ED378;
    case 144u: goto L_002ED39C;
    case 145u: goto L_002ED3B0;
    case 146u: goto L_002ED3C0;
    case 147u: goto L_002ED3EC;
    case 148u: goto L_002ED3FC;
    case 149u: goto L_002ED41C;
    case 150u: goto L_002ED440;
    case 151u: goto L_002ED474;
    case 152u: goto L_002ED484;
    case 153u: goto L_002ED494;
    case 154u: goto L_002ED4C0;
    case 155u: goto L_002ED4D0;
    case 156u: goto L_002ED4F0;
    case 157u: goto L_002ED514;
    case 158u: goto L_002ED538;
    case 159u: goto L_002ED55C;
    case 160u: goto L_002ED574;
    case 161u: goto L_002ED584;
    case 162u: goto L_002ED594;
    case 163u: goto L_002ED5C0;
    case 164u: goto L_002ED5D0;
    case 165u: goto L_002ED5F0;
    case 166u: goto L_002ED61C;
    case 167u: goto L_002ED62C;
    case 168u: goto L_002ED64C;
    case 169u: goto L_002ED678;
    case 170u: goto L_002ED688;
    case 171u: goto L_002ED6A8;
    case 172u: goto L_002ED6CC;
    case 173u: goto L_002ED6DC;
    case 174u: goto L_002ED70C;
    case 175u: goto L_002ED71C;
    case 176u: goto L_002ED73C;
    case 177u: goto L_002ED748;
    case 178u: goto L_002ED76C;
    case 179u: goto L_002ED798;
    case 180u: goto L_002ED7B0;
    case 181u: goto L_002ED7E0;
    case 182u: goto L_002ED7F0;
    case 183u: goto L_002ED810;
    case 184u: goto L_002ED83C;
    case 185u: goto L_002ED854;
    case 186u: goto L_002ED884;
    case 187u: goto L_002ED894;
    case 188u: goto L_002ED8B4;
    case 189u: goto L_002ED8C0;
    case 190u: goto L_002ED8E4;
    case 191u: goto L_002ED8F8;
    case 192u: goto L_002ED908;
    case 193u: goto L_002ED934;
    case 194u: goto L_002ED944;
    case 195u: goto L_002ED964;
    case 196u: goto L_002ED988;
    case 197u: goto L_002ED99C;
    case 198u: goto L_002ED9AC;
    case 199u: goto L_002ED9D8;
    case 200u: goto L_002ED9E8;
    case 201u: goto L_002EDA08;
    case 202u: goto L_002EDA2C;
    case 203u: goto L_002EDA3C;
    case 204u: goto L_002EDA6C;
    case 205u: goto L_002EDA7C;
    case 206u: goto L_002EDA9C;
    case 207u: goto L_002EDAC0;
    case 208u: goto L_002EDAF0;
    case 209u: goto L_002EDB64;
    case 210u: goto L_002EDB7C;
    case 211u: goto L_002EDBAC;
    case 212u: goto L_002EDBBC;
    case 213u: goto L_002EDBDC;
    case 214u: goto L_002EDBE8;
    case 215u: goto L_002EDC0C;
    case 216u: goto L_002EDC20;
    case 217u: goto L_002EDC30;
    case 218u: goto L_002EDC5C;
    case 219u: goto L_002EDC6C;
    case 220u: goto L_002EDC8C;
    case 221u: goto L_002EDCB0;
    case 222u: goto L_002EDCE4;
    case 223u: goto L_002EDCF4;
    case 224u: goto L_002EDD04;
    case 225u: goto L_002EDD30;
    case 226u: goto L_002EDD40;
    case 227u: goto L_002EDD60;
    case 228u: goto L_002EDD84;
    case 229u: goto L_002EDD94;
    case 230u: goto L_002EDDC4;
    case 231u: goto L_002EDDD4;
    case 232u: goto L_002EDDF4;
    case 233u: goto L_002EDE10;
    case 234u: goto L_002EDE4C;
    case 235u: goto L_002EDE90;
    case 236u: goto L_002EDED0;
    case 237u: goto L_002EDEE0;
    case 238u: goto L_002EDF30;
    case 239u: goto L_002EDF4C;
    case 240u: goto L_002EDF8C;
    case 241u: goto L_002EDFC0;
    case 242u: goto L_002EDFD8;
    case 243u: goto L_002EE00C;
    case 244u: goto L_002EE01C;
    case 245u: goto L_002EE03C;
    case 246u: goto L_002EE04C;
    case 247u: goto L_002EE08C;
    case 248u: goto L_002EE0C0;
    case 249u: goto L_002EE0D8;
    case 250u: goto L_002EE10C;
    case 251u: goto L_002EE11C;
    case 252u: goto L_002EE13C;
    case 253u: goto L_002EE14C;
    case 254u: goto L_002EE18C;
    case 255u: goto L_002EE1C0;
    case 256u: goto L_002EE1D8;
    case 257u: goto L_002EE20C;
    case 258u: goto L_002EE21C;
    case 259u: goto L_002EE23C;
    case 260u: goto L_002EE254;
    case 261u: goto L_002EE278;
    case 262u: goto L_002EE290;
    case 263u: goto L_002EE2BC;
    case 264u: goto L_002EE2CC;
    case 265u: goto L_002EE2EC;
    case 266u: goto L_002EE310;
    case 267u: goto L_002EE328;
    case 268u: goto L_002EE354;
    case 269u: goto L_002EE364;
    case 270u: goto L_002EE384;
    case 271u: goto L_002EE3A8;
    case 272u: goto L_002EE3B8;
    case 273u: goto L_002EE3E8;
    case 274u: goto L_002EE3F8;
    case 275u: goto L_002EE418;
    case 276u: goto L_002EE468;
    case 277u: goto L_002EE4C0;
    case 278u: goto L_002EE514;
    case 279u: goto L_002EE568;
    case 280u: goto L_002EE5BC;
    case 281u: goto L_002EE5F4;
    case 282u: goto L_002EE640;
    case 283u: goto L_002EE650;
    case 284u: goto L_002EE694;
    case 285u: goto L_002EE6A0;
    case 286u: goto L_002EE70C;
    case 287u: goto L_002EE73C;
    case 288u: goto L_002EE754;
    case 289u: goto L_002EE784;
    case 290u: goto L_002EE794;
    case 291u: goto L_002EE7B4;
    case 292u: goto L_002EE7C0;
    case 293u: goto L_002EE7E4;
    case 294u: goto L_002EE7F8;
    case 295u: goto L_002EE808;
    case 296u: goto L_002EE834;
    case 297u: goto L_002EE844;
    case 298u: goto L_002EE864;
    case 299u: goto L_002EE888;
    case 300u: goto L_002EE8B4;
    case 301u: goto L_002EE8C4;
    case 302u: goto L_002EE8D4;
    case 303u: goto L_002EE900;
    case 304u: goto L_002EE910;
    case 305u: goto L_002EE930;
    case 306u: goto L_002EE954;
    case 307u: goto L_002EE964;
    case 308u: goto L_002EE994;
    case 309u: goto L_002EE9A4;
    case 310u: goto L_002EE9C4;
    case 311u: goto L_002EE9F0;
    case 312u: goto L_002EEA34;
    case 313u: goto L_002EEA40;
    case 314u: goto L_002EEA8C;
    case 315u: goto L_002EEAB0;
    case 316u: goto L_002EEAC4;
    case 317u: goto L_002EEB00;
    case 318u: goto L_002EEB30;
    case 319u: goto L_002EEB40;
    case 320u: goto L_002EEB60;
    case 321u: goto L_002EEB8C;
    case 322u: goto L_002EEB9C;
    case 323u: goto L_002EEBBC;
    case 324u: goto L_002EEBE0;
    case 325u: goto L_002EEC3C;
    case 326u: goto L_002EEC68;
    case 327u: goto L_002EEC78;
    case 328u: goto L_002EEC98;
    case 329u: goto L_002EECE4;
    case 330u: goto L_002EED0C;
    case 331u: goto L_002EED1C;
    case 332u: goto L_002EED3C;
    case 333u: goto L_002EED70;
    case 334u: goto L_002EEE28;
    case 335u: goto L_002EEE40;
    case 336u: goto L_002EEE70;
    case 337u: goto L_002EEE80;
    case 338u: goto L_002EEEA0;
    case 339u: goto L_002EEECC;
    case 340u: goto L_002EEEE4;
    case 341u: goto L_002EEF14;
    case 342u: goto L_002EEF24;
    case 343u: goto L_002EEF44;
    case 344u: goto L_002EEF70;
    case 345u: goto L_002EEF88;
    case 346u: goto L_002EEFBC;
    case 347u: goto L_002EEFCC;
    case 348u: goto L_002EEFEC;
    case 349u: goto L_002EF014;
    case 350u: goto L_002EF02C;
    case 351u: goto L_002EF060;
    case 352u: goto L_002EF070;
    case 353u: goto L_002EF090;
    case 354u: goto L_002EF0BC;
    case 355u: goto L_002EF0D4;
    case 356u: goto L_002EF108;
    case 357u: goto L_002EF118;
    case 358u: goto L_002EF138;
    case 359u: goto L_002EF170;
    case 360u: goto L_002EF18C;
    case 361u: goto L_002EF1B0;
    case 362u: goto L_002EF1C8;
    case 363u: goto L_002EF1D8;
    case 364u: goto L_002EF21C;
    case 365u: goto L_002EF22C;
    case 366u: goto L_002EF24C;
    case 367u: goto L_002EF270;
    case 368u: goto L_002EF284;
    case 369u: goto L_002EF294;
    case 370u: goto L_002EF2D8;
    case 371u: goto L_002EF2E8;
    case 372u: goto L_002EF308;
    case 373u: goto L_002EF32C;
    case 374u: goto L_002EF350;
    case 375u: goto L_002EF374;
    case 376u: goto L_002EF38C;
    case 377u: goto L_002EF3A0;
    case 378u: goto L_002EF3D0;
    case 379u: goto L_002EF3E0;
    case 380u: goto L_002EF400;
    case 381u: goto L_002EF430;
    case 382u: goto L_002EF440;
    case 383u: goto L_002EF460;
    case 384u: goto L_002EF490;
    case 385u: goto L_002EF4A0;
    case 386u: goto L_002EF4C0;
    case 387u: goto L_002EF4F0;
    case 388u: goto L_002EF500;
    case 389u: goto L_002EF530;
    case 390u: goto L_002EF540;
    case 391u: goto L_002EF560;
    case 392u: goto L_002EF570;
    case 393u: goto L_002EF5B0;
    case 394u: goto L_002EF5E0;
    case 395u: goto L_002EF634;
    case 396u: goto L_002EF698;
    case 397u: goto L_002EF6C4;
    case 398u: goto L_002EF6F8;
    case 399u: goto L_002EF730;
    case 400u: goto L_002EF7A0;
    case 401u: goto L_002EF7E4;
    case 402u: goto L_002EF7F0;
    case 403u: goto L_002EF858;
    case 404u: goto L_002EF884;
    case 405u: goto L_002EF894;
    case 406u: goto L_002EF8B4;
    case 407u: goto L_002EF8E0;
    case 408u: goto L_002EF900;
    case 409u: goto L_002EF918;
    case 410u: goto L_002EF940;
    case 411u: goto L_002EF950;
    case 412u: goto L_002EF970;
    case 413u: goto L_002EF97C;
    case 414u: goto L_002EF99C;
    case 415u: goto L_002EF9B0;
    case 416u: goto L_002EF9C0;
    case 417u: goto L_002EF9E4;
    case 418u: goto L_002EF9F4;
    case 419u: goto L_002EFA14;
    case 420u: goto L_002EFA34;
    case 421u: goto L_002EFA48;
    case 422u: goto L_002EFA58;
    case 423u: goto L_002EFA7C;
    case 424u: goto L_002EFA8C;
    case 425u: goto L_002EFAAC;
    case 426u: goto L_002EFACC;
    case 427u: goto L_002EFAEC;
    case 428u: goto L_002EFB0C;
    case 429u: goto L_002EFB24;
    case 430u: goto L_002EFB38;
    case 431u: goto L_002EFB5C;
    case 432u: goto L_002EFB6C;
    case 433u: goto L_002EFB8C;
    case 434u: goto L_002EFBB0;
    case 435u: goto L_002EFBC0;
    case 436u: goto L_002EFBE0;
    case 437u: goto L_002EFC04;
    case 438u: goto L_002EFC14;
    case 439u: goto L_002EFC34;
    case 440u: goto L_002EFC54;
    case 441u: goto L_002EFC64;
    case 442u: goto L_002EFC8C;
    case 443u: goto L_002EFC9C;
    case 444u: goto L_002EFCBC;
    case 445u: goto L_002EFCE8;
    case 446u: goto L_002EFCF8;
    case 447u: goto L_002EFD18;
    case 448u: goto L_002EFD40;
    case 449u: goto L_002EFD58;
    case 450u: goto L_002EFD80;
    case 451u: goto L_002EFD90;
    case 452u: goto L_002EFDB0;
    case 453u: goto L_002EFDBC;
    case 454u: goto L_002EFDDC;
    case 455u: goto L_002EFDF0;
    case 456u: goto L_002EFE00;
    case 457u: goto L_002EFE24;
    case 458u: goto L_002EFE34;
    case 459u: goto L_002EFE54;
    case 460u: goto L_002EFE74;
    case 461u: goto L_002EFE88;
    case 462u: goto L_002EFE98;
    case 463u: goto L_002EFEBC;
    case 464u: goto L_002EFECC;
    case 465u: goto L_002EFEEC;
    case 466u: goto L_002EFF0C;
    case 467u: goto L_002EFF20;
    case 468u: goto L_002EFF30;
    case 469u: goto L_002EFF54;
    case 470u: goto L_002EFF64;
    case 471u: goto L_002EFF84;
    case 472u: goto L_002EFFA4;
    case 473u: goto L_002EFFB8;
    case 474u: goto L_002EFFC8;
    case 475u: goto L_002EFFD4;
    case 476u: goto L_002EFFEC;
    case 477u: goto L_002EFFFC;
    default: bad_entry(c, 0x002EC000u); return;
    }
L_002EC000:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC010u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002EC010u) [[unlikely]] return; }
L_002EC010:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[17], ld32((c.r[19].w[0] + 8u)));  goto L_002EC070; }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC03Cu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EC03Cu) [[unlikely]] return; }
L_002EC03C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC04Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EC04Cu) [[unlikely]] return; }
L_002EC04C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EC06C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC06Cu); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EC06Cu) [[unlikely]] return; }
L_002EC06C:
    set32(c.r[17], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_002EC070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC078u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 65u, depth + 1u); else { c.pc = 0x002D0700u; return; } if (c.pc != 0x002EC078u) [[unlikely]] return; }
L_002EC078:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 23u);
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC0A0u); set32(c.r[10], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EC0A0u) [[unlikely]] return; }
L_002EC0A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27024u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EC0BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EC0C4; } }
L_002EC0BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC0C4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EC0C4u) [[unlikely]] return; }
L_002EC0C4:
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC0D8u); set32(c.r[5], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002EC0D8u) [[unlikely]] return; }
L_002EC0D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC0E8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002EC0E8u) [[unlikely]] return; }
L_002EC0E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EC144; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC114u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EC114u) [[unlikely]] return; }
L_002EC114:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC124u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EC124u) [[unlikely]] return; }
L_002EC124:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EC144; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC144u); set32(c.r[5], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EC144u) [[unlikely]] return; }
L_002EC144:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27011u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EC160; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EC168; } }
L_002EC160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC168u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EC168u) [[unlikely]] return; }
L_002EC168:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC178u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002EC178u) [[unlikely]] return; }
L_002EC178:
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EC1D8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC1A8u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EC1A8u) [[unlikely]] return; }
L_002EC1A8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC1B8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EC1B8u) [[unlikely]] return; }
L_002EC1B8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EC1D8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC1D8u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EC1D8u) [[unlikely]] return; }
L_002EC1D8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002EC1DC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002EC210:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 188u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[10].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 188u), 0u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[9], 0u + 8u);
    set32(c.r[16], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 196u)));
    c.budget -= 30;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC288u); c.r[11].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EC288u) [[unlikely]] return; }
L_002EC288:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 188u)));  goto L_002EC298; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EC400; } }
L_002EC298:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[21], 0u + 1u);  goto L_002EC2C0; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[21], 0u + 1u);
    c.budget -= 8;
L_002EC2C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002EC34C; } }
L_002EC2C8:
    c.r[3].d[0] = c.r[2].d[0] & c.r[21].d[0];
    set32(c.r[2], c.r[29].w[0] + 188u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[21], c.r[21].w[0] << 1);  if (t) { goto L_002EC2E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], 0u + 2u);  if (t) { goto L_002EC2EC; } }
L_002EC2E8:
    set32(c.r[10], 0u + 1u);
    c.budget -= 1;
L_002EC2EC:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 196u)));
    set32(c.r[9], 0u + 10u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC314u); c.r[11].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EC314u) [[unlikely]] return; }
L_002EC314:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 188u)));  goto L_002EC324; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EC400; } }
L_002EC324:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_002EC34C; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 8;
L_002EC34C:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 200u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC2C8u | kUnwind; return; } goto L_002EC2C8; }
    set32(c.r[20], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002EC3EC; } }
L_002EC368:
    c.r[3].d[0] = c.r[2].d[0] & c.r[20].d[0];
    set32(c.r[2], c.r[29].w[0] + 188u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], c.r[20].w[0] << 1);  if (t) { goto L_002EC388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], 0u + 2u);  if (t) { goto L_002EC38C; } }
L_002EC388:
    set32(c.r[10], 0u + 1u);
    c.budget -= 1;
L_002EC38C:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 196u)));
    set32(c.r[9], 0u + 9u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC3B4u); c.r[11].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EC3B4u) [[unlikely]] return; }
L_002EC3B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 188u)));  goto L_002EC3C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EC400; } }
L_002EC3C4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_002EC3EC; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 8;
L_002EC3EC:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 216u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC368u | kUnwind; return; } goto L_002EC368; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002EC400:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002EC430:
    set32(c.r[29], c.r[29].w[0] - 368u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0F000000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[18], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[22].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 268u), c.r[7].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[6], 0u + 12u);
    set32(c.r[2], c.r[2].w[0] >> 24);
    st32((c.r[29].w[0] + 364u), c.r[18].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC4A0u); st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x002EC4A0u) [[unlikely]] return; }
L_002EC4A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002EC4FC; } }
L_002EC4A8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 364u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC4B8u); set32(c.r[7], c.r[29].w[0] + 360u);  if (depth < kMaxDepth) unit_0081(c, 490u, depth + 1u); else { c.pc = 0x00306B90u; return; } if (c.pc != 0x002EC4B8u) [[unlikely]] return; }
L_002EC4B8:
    set32(c.r[3], ld32((c.r[29].w[0] + 364u)));
    c.r[1].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 360u)));  goto L_002EC4D0; }
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 360u)));
    c.budget -= 2;
L_002EC4D0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002EC4FC; }
    set32(c.r[2], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[2].w[0] + 320u);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EC4F8; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[22], c.r[22].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002EC4F8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002EC4FC:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC4A8u | kUnwind; return; } goto L_002EC4A8; }
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC51Cu); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x002EC51Cu) [[unlikely]] return; }
L_002EC51C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002EC738; } }
L_002EC52C:
    set32(c.r[4], c.r[29].w[0] + 356u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC540u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EC540u) [[unlikely]] return; }
L_002EC540:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28207u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EC558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EC560; } }
L_002EC558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC560u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EC560u) [[unlikely]] return; }
L_002EC560:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 348u), c.r[2].w[0]);  if (t) { goto L_002EC578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EC580; } }
L_002EC578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC580u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EC580u) [[unlikely]] return; }
L_002EC580:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 344u), c.r[2].w[0]);  if (t) { goto L_002EC598; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EC5A0; } }
L_002EC598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC5A0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EC5A0u) [[unlikely]] return; }
L_002EC5A0:
    st32((c.r[29].w[0] + 340u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 348u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], c.r[29].w[0] + 344u);
    set32(c.r[4], ld32((c.r[23].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 340u);
    set32(c.r[8], c.r[29].w[0] + 356u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC5CCu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002EC5CCu) [[unlikely]] return; }
L_002EC5CC:
    set32(c.r[3], ld32((c.r[29].w[0] + 340u)));
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[16].d[0]; st32((c.r[4].w[0] + 272u), c.r[2].w[0]);  if (t) { goto L_002EC62C; } }
    set32(c.r[20], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC5FCu); st32((c.r[29].w[0] + 240u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EC5FCu) [[unlikely]] return; }
L_002EC5FC:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC60Cu); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EC60Cu) [[unlikely]] return; }
L_002EC60C:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 344u)));  goto L_002EC630; }
    set32(c.r[6], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC62Cu); set32(c.r[5], c.r[29].w[0] + 340u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EC62Cu) [[unlikely]] return; }
L_002EC62C:
    set32(c.r[2], ld32((c.r[29].w[0] + 344u)));
    c.budget -= 1;
L_002EC630:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 348u)));  goto L_002EC688; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[20], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC654u); st32((c.r[29].w[0] + 224u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EC654u) [[unlikely]] return; }
L_002EC654:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC664u); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EC664u) [[unlikely]] return; }
L_002EC664:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EC684; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC684u); set32(c.r[5], c.r[29].w[0] + 344u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EC684u) [[unlikely]] return; }
L_002EC684:
    set32(c.r[2], ld32((c.r[29].w[0] + 348u)));
    c.budget -= 1;
L_002EC688:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 356u)));  goto L_002EC6E0; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[20], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC6ACu); st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EC6ACu) [[unlikely]] return; }
L_002EC6AC:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC6BCu); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EC6BCu) [[unlikely]] return; }
L_002EC6BC:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EC6DC; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC6DCu); set32(c.r[5], c.r[29].w[0] + 348u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EC6DCu) [[unlikely]] return; }
L_002EC6DC:
    set32(c.r[2], ld32((c.r[29].w[0] + 356u)));
    c.budget -= 1;
L_002EC6E0:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002EC738; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[20], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC704u); st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EC704u) [[unlikely]] return; }
L_002EC704:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC714u); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EC714u) [[unlikely]] return; }
L_002EC714:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EC734; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC734u); set32(c.r[5], c.r[29].w[0] + 356u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EC734u) [[unlikely]] return; }
L_002EC734:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002EC738:
    c.r[1].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC52Cu | kUnwind; return; } goto L_002EC52C; }
    set32(c.r[2], c.r[22].w[0] + 1u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.r[2].w[0]);  if (t) { goto L_002EC838; } }
L_002EC754:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 364u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC764u); set32(c.r[7], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0081(c, 490u, depth + 1u); else { c.pc = 0x00306B90u; return; } if (c.pc != 0x002EC764u) [[unlikely]] return; }
L_002EC764:
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EC77C; } }
    set32(c.r[18], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[18].w[0] + 1u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EC77C:
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC794u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EC794u) [[unlikely]] return; }
L_002EC794:
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[6], ld32((c.r[29].w[0] + 364u)));
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[10], ld32((c.r[29].w[0] + 352u)));
    set32(c.r[2], c.r[6].w[0] << 2);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 212u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 272u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC7D0u); set32(c.r[8], c.r[29].w[0] + 336u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EC7D0u) [[unlikely]] return; }
L_002EC7D0:
    c.r[22].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_002EC828; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC7F8u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EC7F8u) [[unlikely]] return; }
L_002EC7F8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC808u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EC808u) [[unlikely]] return; }
L_002EC808:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EC828; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC828u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EC828u) [[unlikely]] return; }
L_002EC828:
    c.budget -= 2;
    if (c.r[22].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002EC838; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EC84C; } }
L_002EC838:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC754u | kUnwind; return; } goto L_002EC754; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002EC84C:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_002EC880:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 15;
    { const bool t = c.r[18].d[0] != 0ull; st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);  if (t) { goto L_002EC8C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002ED250; } }
L_002EC8C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26929u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EC8E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EC8E8; } }
L_002EC8E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC8E8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EC8E8u) [[unlikely]] return; }
L_002EC8E8:
    st32((c.r[29].w[0] + 252u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC900u); set32(c.r[5], c.r[29].w[0] + 252u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EC900u) [[unlikely]] return; }
L_002EC900:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_002EC964; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC930u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EC930u) [[unlikely]] return; }
L_002EC930:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC940u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EC940u) [[unlikely]] return; }
L_002EC940:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EC960; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC960u); set32(c.r[5], c.r[29].w[0] + 252u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EC960u) [[unlikely]] return; }
L_002EC960:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002EC964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC96Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002EC96Cu) [[unlikely]] return; }
L_002EC96C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28448u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EC988; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EC990; } }
L_002EC988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC990u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EC990u) [[unlikely]] return; }
L_002EC990:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27761u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 248u), c.r[2].w[0]);  if (t) { goto L_002EC9AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EC9B4; } }
L_002EC9AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC9B4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EC9B4u) [[unlikely]] return; }
L_002EC9B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 244u), c.r[2].w[0]);  if (t) { goto L_002EC9D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EC9D8; } }
L_002EC9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC9D8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EC9D8u) [[unlikely]] return; }
L_002EC9D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26916u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 240u), c.r[2].w[0]);  if (t) { goto L_002EC9F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EC9FC; } }
L_002EC9F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC9FCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EC9FCu) [[unlikely]] return; }
L_002EC9FC:
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 248u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], c.r[29].w[0] + 244u);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[7], c.r[29].w[0] + 240u);
    set32(c.r[8], c.r[29].w[0] + 236u);
    set32(c.r[9], 0u + 1u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECA28u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 20u, depth + 1u); else { c.pc = 0x002B4140u; return; } if (c.pc != 0x002ECA28u) [[unlikely]] return; }
L_002ECA28:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 236u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ECA88; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECA58u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ECA58u) [[unlikely]] return; }
L_002ECA58:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECA68u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ECA68u) [[unlikely]] return; }
L_002ECA68:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ECA88; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECA88u); set32(c.r[5], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ECA88u) [[unlikely]] return; }
L_002ECA88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ECAE4; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECAB4u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ECAB4u) [[unlikely]] return; }
L_002ECAB4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECAC4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ECAC4u) [[unlikely]] return; }
L_002ECAC4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ECAE4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECAE4u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ECAE4u) [[unlikely]] return; }
L_002ECAE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ECB40; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECB10u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ECB10u) [[unlikely]] return; }
L_002ECB10:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECB20u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ECB20u) [[unlikely]] return; }
L_002ECB20:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ECB40; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECB40u); set32(c.r[5], c.r[29].w[0] + 244u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ECB40u) [[unlikely]] return; }
L_002ECB40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ECB9C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECB6Cu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ECB6Cu) [[unlikely]] return; }
L_002ECB6C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECB7Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ECB7Cu) [[unlikely]] return; }
L_002ECB7C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ECB9C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECB9Cu); set32(c.r[5], c.r[29].w[0] + 248u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ECB9Cu) [[unlikely]] return; }
L_002ECB9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26916u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002ECBB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002ECBC0; } }
L_002ECBB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECBC0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002ECBC0u) [[unlikely]] return; }
L_002ECBC0:
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECBD4u); set32(c.r[5], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002ECBD4u) [[unlikely]] return; }
L_002ECBD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECBE4u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002ECBE4u) [[unlikely]] return; }
L_002ECBE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], 0u + 1u);  goto L_002ECC44; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECC10u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ECC10u) [[unlikely]] return; }
L_002ECC10:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECC20u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ECC20u) [[unlikely]] return; }
L_002ECC20:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ECC40; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECC40u); set32(c.r[5], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ECC40u) [[unlikely]] return; }
L_002ECC40:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002ECC44:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002ECC58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 3u);  if (t) { goto L_002ECC6C; } }
L_002ECC58:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_002ECC6C; } }
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[7], 0u + 3u);
    c.budget -= 2;
L_002ECC6C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECC80u); set32(c.r[6], c.r[6].w[0] - 27411u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x002ECC80u) [[unlikely]] return; }
L_002ECC80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27406u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002ECC9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002ECCA4; } }
L_002ECC9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECCA4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002ECCA4u) [[unlikely]] return; }
L_002ECCA4:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 228u), c.r[2].w[0]);  if (t) { goto L_002ECCBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002ECCC4; } }
L_002ECCBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECCC4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002ECCC4u) [[unlikely]] return; }
L_002ECCC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26909u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 224u), c.r[2].w[0]);  if (t) { goto L_002ECCE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002ECCE8; } }
L_002ECCE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECCE8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002ECCE8u) [[unlikely]] return; }
L_002ECCE8:
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 228u);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECD00u); set32(c.r[6], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_006C(c, 510u, depth + 1u); else { c.pc = 0x002B3E20u; return; } if (c.pc != 0x002ECD00u) [[unlikely]] return; }
L_002ECD00:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECD10u); set32(c.r[5], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002ECD10u) [[unlikely]] return; }
L_002ECD10:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECD20u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002ECD20u) [[unlikely]] return; }
L_002ECD20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ECD7C; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECD4Cu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ECD4Cu) [[unlikely]] return; }
L_002ECD4C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECD5Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ECD5Cu) [[unlikely]] return; }
L_002ECD5C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ECD7C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECD7Cu); set32(c.r[5], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ECD7Cu) [[unlikely]] return; }
L_002ECD7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ECDD8; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECDA8u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ECDA8u) [[unlikely]] return; }
L_002ECDA8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECDB8u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ECDB8u) [[unlikely]] return; }
L_002ECDB8:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ECDD8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECDD8u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ECDD8u) [[unlikely]] return; }
L_002ECDD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ECE34; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECE04u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ECE04u) [[unlikely]] return; }
L_002ECE04:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECE14u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ECE14u) [[unlikely]] return; }
L_002ECE14:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ECE34; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECE34u); set32(c.r[5], c.r[29].w[0] + 228u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ECE34u) [[unlikely]] return; }
L_002ECE34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27543u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002ECE50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002ECE58; } }
L_002ECE50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECE58u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002ECE58u) [[unlikely]] return; }
L_002ECE58:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 216u), c.r[2].w[0]);  if (t) { goto L_002ECE6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 27538u);  if (t) { goto L_002ECE74; } }
L_002ECE6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 27531u);
    c.budget -= 2;
L_002ECE74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ECE88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002ECEA8; } }
L_002ECE88:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_002ECE9C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 27538u);  if (t) { goto L_002ECEA0; } }
L_002ECE9C:
    set32(c.r[4], c.r[4].w[0] - 27531u);
    c.budget -= 1;
L_002ECEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECEA8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002ECEA8u) [[unlikely]] return; }
L_002ECEA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26901u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 212u), c.r[2].w[0]);  if (t) { goto L_002ECEC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002ECECC; } }
L_002ECEC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECECCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002ECECCu) [[unlikely]] return; }
L_002ECECC:
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 216u);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECEE4u); set32(c.r[6], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_006C(c, 510u, depth + 1u); else { c.pc = 0x002B3E20u; return; } if (c.pc != 0x002ECEE4u) [[unlikely]] return; }
L_002ECEE4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECEF4u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002ECEF4u) [[unlikely]] return; }
L_002ECEF4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECF04u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002ECF04u) [[unlikely]] return; }
L_002ECF04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ECF60; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECF30u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ECF30u) [[unlikely]] return; }
L_002ECF30:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECF40u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ECF40u) [[unlikely]] return; }
L_002ECF40:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ECF60; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECF60u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ECF60u) [[unlikely]] return; }
L_002ECF60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ECFBC; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECF8Cu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ECF8Cu) [[unlikely]] return; }
L_002ECF8C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECF9Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ECF9Cu) [[unlikely]] return; }
L_002ECF9C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ECFBC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECFBCu); set32(c.r[5], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ECFBCu) [[unlikely]] return; }
L_002ECFBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002ED01C; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECFE8u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ECFE8u) [[unlikely]] return; }
L_002ECFE8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECFF8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ECFF8u) [[unlikely]] return; }
L_002ECFF8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ED018; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED018u); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ED018u) [[unlikely]] return; }
L_002ED018:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_002ED01C:
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 100u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED03Cu); c.r[9].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED03Cu) [[unlikely]] return; }
L_002ED03C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26892u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002ED058; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002ED060; } }
L_002ED058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED060u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002ED060u) [[unlikely]] return; }
L_002ED060:
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED074u); set32(c.r[5], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002ED074u) [[unlikely]] return; }
L_002ED074:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED084u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002ED084u) [[unlikely]] return; }
L_002ED084:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002ED0E4; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED0B0u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ED0B0u) [[unlikely]] return; }
L_002ED0B0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED0C0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ED0C0u) [[unlikely]] return; }
L_002ED0C0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ED0E0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED0E0u); set32(c.r[5], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ED0E0u) [[unlikely]] return; }
L_002ED0E0:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_002ED0E4:
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 101u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED104u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED104u) [[unlikely]] return; }
L_002ED104:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26881u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002ED120; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002ED128; } }
L_002ED120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED128u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002ED128u) [[unlikely]] return; }
L_002ED128:
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED13Cu); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002ED13Cu) [[unlikely]] return; }
L_002ED13C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED14Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002ED14Cu) [[unlikely]] return; }
L_002ED14C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ED1A8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED178u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ED178u) [[unlikely]] return; }
L_002ED178:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED188u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ED188u) [[unlikely]] return; }
L_002ED188:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ED1A8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED1A8u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ED1A8u) [[unlikely]] return; }
L_002ED1A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26869u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002ED1C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002ED1CC; } }
L_002ED1C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED1CCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002ED1CCu) [[unlikely]] return; }
L_002ED1CC:
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED1E0u); set32(c.r[5], c.r[29].w[0] + 196u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002ED1E0u) [[unlikely]] return; }
L_002ED1E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED1F0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002ED1F0u) [[unlikely]] return; }
L_002ED1F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002ED250; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED21Cu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ED21Cu) [[unlikely]] return; }
L_002ED21C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED22Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ED22Cu) [[unlikely]] return; }
L_002ED22C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ED24C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED24Cu); set32(c.r[5], c.r[29].w[0] + 196u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ED24Cu) [[unlikely]] return; }
L_002ED24C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002ED250:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_002ED280:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 20;
    { const bool t = c.r[9].d[0] == 0ull; st32((c.r[29].w[0] + 172u), c.r[6].w[0]);  if (t) { goto L_002ED73C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26856u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002ED2EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002ED2F4; } }
L_002ED2EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED2F4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002ED2F4u) [[unlikely]] return; }
L_002ED2F4:
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED30Cu); set32(c.r[5], c.r[29].w[0] + 220u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED30Cu) [[unlikely]] return; }
L_002ED30C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_002ED370; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED33Cu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ED33Cu) [[unlikely]] return; }
L_002ED33C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED34Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ED34Cu) [[unlikely]] return; }
L_002ED34C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ED36C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED36Cu); set32(c.r[5], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ED36Cu) [[unlikely]] return; }
L_002ED36C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002ED370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED378u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002ED378u) [[unlikely]] return; }
L_002ED378:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27491u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002ED394; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002ED39C; } }
L_002ED394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED39Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002ED39Cu) [[unlikely]] return; }
L_002ED39C:
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED3B0u); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002ED3B0u) [[unlikely]] return; }
L_002ED3B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED3C0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002ED3C0u) [[unlikely]] return; }
L_002ED3C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ED41C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED3ECu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ED3ECu) [[unlikely]] return; }
L_002ED3EC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED3FCu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ED3FCu) [[unlikely]] return; }
L_002ED3FC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ED41C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED41Cu); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ED41Cu) [[unlikely]] return; }
L_002ED41C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26838u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002ED438; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002ED440; } }
L_002ED438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED440u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002ED440u) [[unlikely]] return; }
L_002ED440:
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 20u);
    set32(c.r[17], ld32((c.r[19].w[0])));
    set32(c.r[7], 0u + 9u);
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] - 26823u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED474u); set32(c.r[10], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED474u) [[unlikely]] return; }
L_002ED474:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED484u); set32(c.r[5], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002ED484u) [[unlikely]] return; }
L_002ED484:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED494u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002ED494u) [[unlikely]] return; }
L_002ED494:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ED4F0; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED4C0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ED4C0u) [[unlikely]] return; }
L_002ED4C0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED4D0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ED4D0u) [[unlikely]] return; }
L_002ED4D0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ED4F0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED4F0u); set32(c.r[5], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ED4F0u) [[unlikely]] return; }
L_002ED4F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27543u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002ED50C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002ED514; } }
L_002ED50C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED514u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002ED514u) [[unlikely]] return; }
L_002ED514:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27538u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (t) { goto L_002ED530; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002ED538; } }
L_002ED530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED538u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002ED538u) [[unlikely]] return; }
L_002ED538:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26809u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 204u), c.r[2].w[0]);  if (t) { goto L_002ED554; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002ED55C; } }
L_002ED554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED55Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002ED55Cu) [[unlikely]] return; }
L_002ED55C:
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[19].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED574u); set32(c.r[6], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_006C(c, 510u, depth + 1u); else { c.pc = 0x002B3E20u; return; } if (c.pc != 0x002ED574u) [[unlikely]] return; }
L_002ED574:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED584u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002ED584u) [[unlikely]] return; }
L_002ED584:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED594u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002ED594u) [[unlikely]] return; }
L_002ED594:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ED5F0; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED5C0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ED5C0u) [[unlikely]] return; }
L_002ED5C0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED5D0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ED5D0u) [[unlikely]] return; }
L_002ED5D0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ED5F0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED5F0u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ED5F0u) [[unlikely]] return; }
L_002ED5F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ED64C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED61Cu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ED61Cu) [[unlikely]] return; }
L_002ED61C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED62Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ED62Cu) [[unlikely]] return; }
L_002ED62C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ED64C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED64Cu); set32(c.r[5], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ED64Cu) [[unlikely]] return; }
L_002ED64C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ED6A8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED678u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ED678u) [[unlikely]] return; }
L_002ED678:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED688u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ED688u) [[unlikely]] return; }
L_002ED688:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ED6A8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED6A8u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ED6A8u) [[unlikely]] return; }
L_002ED6A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28244u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002ED6C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002ED6CC; } }
L_002ED6C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED6CCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002ED6CCu) [[unlikely]] return; }
L_002ED6CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED6DCu); set32(c.r[5], c.r[29].w[0] + 196u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002ED6DCu) [[unlikely]] return; }
L_002ED6DC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 1u);  goto L_002ED740; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED70Cu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ED70Cu) [[unlikely]] return; }
L_002ED70C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED71Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ED71Cu) [[unlikely]] return; }
L_002ED71C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ED73C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED73Cu); set32(c.r[5], c.r[29].w[0] + 196u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ED73Cu) [[unlikely]] return; }
L_002ED73C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002ED740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED748u);  if (depth < kMaxDepth) unit_0085(c, 226u, depth + 1u); else { c.pc = 0x00316980u; return; } if (c.pc != 0x002ED748u) [[unlikely]] return; }
L_002ED748:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED76Cu); c.r[9].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED76Cu) [[unlikely]] return; }
L_002ED76C:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002ED818; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26798u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002ED790; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002ED798; } }
L_002ED790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED798u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002ED798u) [[unlikely]] return; }
L_002ED798:
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED7B0u); set32(c.r[5], c.r[29].w[0] + 192u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED7B0u) [[unlikely]] return; }
L_002ED7B0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_002ED8B8; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED7E0u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ED7E0u) [[unlikely]] return; }
L_002ED7E0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED7F0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ED7F0u) [[unlikely]] return; }
L_002ED7F0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ED8B4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED810u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ED810u) [[unlikely]] return; }
L_002ED810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED8B4; } }
L_002ED818:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26774u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002ED834; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002ED83C; } }
L_002ED834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED83Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002ED83Cu) [[unlikely]] return; }
L_002ED83C:
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED854u); set32(c.r[5], c.r[29].w[0] + 188u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED854u) [[unlikely]] return; }
L_002ED854:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ED8B4; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED884u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ED884u) [[unlikely]] return; }
L_002ED884:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED894u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ED894u) [[unlikely]] return; }
L_002ED894:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ED8B4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED8B4u); set32(c.r[5], c.r[29].w[0] + 188u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ED8B4u) [[unlikely]] return; }
L_002ED8B4:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002ED8B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED8C0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002ED8C0u) [[unlikely]] return; }
L_002ED8C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002ED8DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002ED8E4; } }
L_002ED8DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED8E4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002ED8E4u) [[unlikely]] return; }
L_002ED8E4:
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED8F8u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002ED8F8u) [[unlikely]] return; }
L_002ED8F8:
    set32(c.r[5], ld32((c.r[29].w[0] + 172u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED908u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002ED908u) [[unlikely]] return; }
L_002ED908:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ED964; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED934u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ED934u) [[unlikely]] return; }
L_002ED934:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED944u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ED944u) [[unlikely]] return; }
L_002ED944:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ED964; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED964u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002ED964u) [[unlikely]] return; }
L_002ED964:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26757u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002ED980; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002ED988; } }
L_002ED980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED988u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002ED988u) [[unlikely]] return; }
L_002ED988:
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED99Cu); set32(c.r[5], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002ED99Cu) [[unlikely]] return; }
L_002ED99C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED9ACu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002ED9ACu) [[unlikely]] return; }
L_002ED9AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EDA08; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED9D8u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002ED9D8u) [[unlikely]] return; }
L_002ED9D8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED9E8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002ED9E8u) [[unlikely]] return; }
L_002ED9E8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EDA08; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDA08u); set32(c.r[5], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EDA08u) [[unlikely]] return; }
L_002EDA08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26749u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EDA24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EDA2C; } }
L_002EDA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDA2Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EDA2Cu) [[unlikely]] return; }
L_002EDA2C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDA3Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002EDA3Cu) [[unlikely]] return; }
L_002EDA3C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002EDAA0; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDA6Cu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EDA6Cu) [[unlikely]] return; }
L_002EDA6C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDA7Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EDA7Cu) [[unlikely]] return; }
L_002EDA7C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EDA9C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDA9Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EDA9Cu) [[unlikely]] return; }
L_002EDA9C:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_002EDAA0:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[23].w[0])));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 316u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDAC0u); c.r[9].d[0] = c.r[23].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EDAC0u) [[unlikely]] return; }
L_002EDAC0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002EDAF0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 20;
    { const bool t = c.r[9].d[0] == 0ull; st8((c.r[29].w[0] + 203u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_002EDDF4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26856u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EDB5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EDB64; } }
L_002EDB5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDB64u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EDB64u) [[unlikely]] return; }
L_002EDB64:
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDB7Cu); set32(c.r[5], c.r[29].w[0] + 216u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EDB7Cu) [[unlikely]] return; }
L_002EDB7C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_002EDBE0; }
    set32(c.r[20], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDBACu); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EDBACu) [[unlikely]] return; }
L_002EDBAC:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDBBCu); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EDBBCu) [[unlikely]] return; }
L_002EDBBC:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EDBDC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDBDCu); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EDBDCu) [[unlikely]] return; }
L_002EDBDC:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_002EDBE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDBE8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002EDBE8u) [[unlikely]] return; }
L_002EDBE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27491u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EDC04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EDC0C; } }
L_002EDC04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDC0Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EDC0Cu) [[unlikely]] return; }
L_002EDC0C:
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDC20u); set32(c.r[5], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002EDC20u) [[unlikely]] return; }
L_002EDC20:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDC30u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002EDC30u) [[unlikely]] return; }
L_002EDC30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EDC8C; } }
    set32(c.r[20], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDC5Cu); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EDC5Cu) [[unlikely]] return; }
L_002EDC5C:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDC6Cu); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EDC6Cu) [[unlikely]] return; }
L_002EDC6C:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EDC8C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDC8Cu); set32(c.r[5], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EDC8Cu) [[unlikely]] return; }
L_002EDC8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26838u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EDCA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EDCB0; } }
L_002EDCA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDCB0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EDCB0u) [[unlikely]] return; }
L_002EDCB0:
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[6], 0u + 20u);
    set32(c.r[20], ld32((c.r[18].w[0])));
    set32(c.r[7], 0u + 10u);
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] - 26740u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDCE4u); set32(c.r[10], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EDCE4u) [[unlikely]] return; }
L_002EDCE4:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDCF4u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002EDCF4u) [[unlikely]] return; }
L_002EDCF4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDD04u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002EDD04u) [[unlikely]] return; }
L_002EDD04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EDD60; } }
    set32(c.r[20], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDD30u); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EDD30u) [[unlikely]] return; }
L_002EDD30:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDD40u); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EDD40u) [[unlikely]] return; }
L_002EDD40:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EDD60; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDD60u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EDD60u) [[unlikely]] return; }
L_002EDD60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28244u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EDD7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EDD84; } }
L_002EDD7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDD84u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EDD84u) [[unlikely]] return; }
L_002EDD84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDD94u); set32(c.r[5], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002EDD94u) [[unlikely]] return; }
L_002EDD94:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = ld8((c.r[29].w[0] + 203u));  goto L_002EDDF8; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDDC4u); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EDDC4u) [[unlikely]] return; }
L_002EDDC4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDDD4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EDDD4u) [[unlikely]] return; }
L_002EDDD4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EDDF4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDDF4u); set32(c.r[5], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EDDF4u) [[unlikely]] return; }
L_002EDDF4:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 203u));
    c.budget -= 1;
L_002EDDF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_002EDE04; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_002EDE04:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDE10u); st32((c.r[29].w[0] + 220u), 0u);  if (depth < kMaxDepth) unit_0085(c, 226u, depth + 1u); else { c.pc = 0x00316980u; return; } if (c.pc != 0x002EDE10u) [[unlikely]] return; }
L_002EDE10:
    st64((c.r[29].w[0]), c.r[20].d[0]);
    set32(c.r[3], c.r[29].w[0] + 220u);
    st64((c.r[29].w[0] + 8u), c.r[21].d[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[3].d[0]);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[11], ld32((c.r[21].w[0])));
    c.r[10].d[0] = c.r[30].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 324u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDE4Cu); set32(c.r[8], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EDE4Cu) [[unlikely]] return; }
L_002EDE4C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002EDE58; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EDE58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002EDE90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[7].w[0] + 13u);
    st32((c.r[29].w[0] + 60u), 0u);
    set32(c.r[2], c.r[29].w[0] + 60u);
    st64((c.r[29].w[0]), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[8].d[0]);
    c.r[9].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[11], ld32((c.r[8].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 320u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDED0u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EDED0u) [[unlikely]] return; }
L_002EDED0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EDEE0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 252u), c.r[10].w[0]);
    set32(c.r[4], 0u + 2u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDF30u); st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0085(c, 226u, depth + 1u); else { c.pc = 0x00316980u; return; } if (c.pc != 0x002EDF30u) [[unlikely]] return; }
L_002EDF30:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[9], 0u + 3u);  goto L_002EE41C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDF4Cu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002EDF4Cu) [[unlikely]] return; }
L_002EDF4C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 28207u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002EDF68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002EDF94; } }
L_002EDF68:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002EDF94; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EDF84; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EDF94; } }
L_002EDF84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDF8Cu);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002EDF8Cu) [[unlikely]] return; }
L_002EDF8C:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002EDF94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002EE044; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26727u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EDFB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EDFC0; } }
L_002EDFB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDFC0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EDFC0u) [[unlikely]] return; }
L_002EDFC0:
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDFD8u); set32(c.r[5], c.r[29].w[0] + 276u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EDFD8u) [[unlikely]] return; }
L_002EDFD8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 276u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EE23C; } }
    set32(c.r[23], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE00Cu); st32((c.r[29].w[0] + 224u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EE00Cu) [[unlikely]] return; }
L_002EE00C:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE01Cu); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EE01Cu) [[unlikely]] return; }
L_002EE01C:
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EE23C; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE03Cu); set32(c.r[5], c.r[29].w[0] + 276u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EE03Cu) [[unlikely]] return; }
L_002EE03C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE23C; } }
L_002EE044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE04Cu);  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002EE04Cu) [[unlikely]] return; }
L_002EE04C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 28442u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002EE068; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002EE094; } }
L_002EE068:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002EE094; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EE084; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE094; } }
L_002EE084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE08Cu);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002EE08Cu) [[unlikely]] return; }
L_002EE08C:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002EE094:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002EE144; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26712u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EE0B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EE0C0; } }
L_002EE0B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE0C0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EE0C0u) [[unlikely]] return; }
L_002EE0C0:
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE0D8u); set32(c.r[5], c.r[29].w[0] + 272u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE0D8u) [[unlikely]] return; }
L_002EE0D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EE23C; } }
    set32(c.r[23], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE10Cu); st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EE10Cu) [[unlikely]] return; }
L_002EE10C:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE11Cu); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EE11Cu) [[unlikely]] return; }
L_002EE11C:
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EE23C; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE13Cu); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EE13Cu) [[unlikely]] return; }
L_002EE13C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE23C; } }
L_002EE144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE14Cu);  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002EE14Cu) [[unlikely]] return; }
L_002EE14C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 28421u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002EE168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002EE194; } }
L_002EE168:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002EE194; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EE184; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE194; } }
L_002EE184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE18Cu);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002EE18Cu) [[unlikely]] return; }
L_002EE18C:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002EE194:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EE23C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26697u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EE1B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EE1C0; } }
L_002EE1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE1C0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EE1C0u) [[unlikely]] return; }
L_002EE1C0:
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE1D8u); set32(c.r[5], c.r[29].w[0] + 268u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE1D8u) [[unlikely]] return; }
L_002EE1D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 268u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EE23C; } }
    set32(c.r[23], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE20Cu); st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EE20Cu) [[unlikely]] return; }
L_002EE20C:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE21Cu); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EE21Cu) [[unlikely]] return; }
L_002EE21C:
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EE23C; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE23Cu); set32(c.r[5], c.r[29].w[0] + 268u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EE23Cu) [[unlikely]] return; }
L_002EE23C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_002EE24C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EE60C; } }
L_002EE24C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE254u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002EE254u) [[unlikely]] return; }
L_002EE254:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26682u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EE270; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EE278; } }
L_002EE270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE278u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EE278u) [[unlikely]] return; }
L_002EE278:
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[6], c.r[29].w[0] + 264u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE290u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B1320u; return; } if (c.pc != 0x002EE290u) [[unlikely]] return; }
L_002EE290:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EE2EC; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE2BCu); set32(c.r[23], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EE2BCu) [[unlikely]] return; }
L_002EE2BC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE2CCu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EE2CCu) [[unlikely]] return; }
L_002EE2CC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EE2EC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE2ECu); set32(c.r[5], c.r[29].w[0] + 264u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EE2ECu) [[unlikely]] return; }
L_002EE2EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26671u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EE308; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EE310; } }
L_002EE308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE310u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EE310u) [[unlikely]] return; }
L_002EE310:
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 260u);
    set32(c.r[5], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE328u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B1320u; return; } if (c.pc != 0x002EE328u) [[unlikely]] return; }
L_002EE328:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EE384; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE354u); set32(c.r[23], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EE354u) [[unlikely]] return; }
L_002EE354:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE364u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EE364u) [[unlikely]] return; }
L_002EE364:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EE384; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE384u); set32(c.r[5], c.r[29].w[0] + 260u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EE384u) [[unlikely]] return; }
L_002EE384:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27011u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EE3A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EE3A8; } }
L_002EE3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE3A8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EE3A8u) [[unlikely]] return; }
L_002EE3A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE3B8u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002EE3B8u) [[unlikely]] return; }
L_002EE3B8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EE418; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE3E8u); set32(c.r[23], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EE3E8u) [[unlikely]] return; }
L_002EE3E8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE3F8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EE3F8u) [[unlikely]] return; }
L_002EE3F8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EE418; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE418u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EE418u) [[unlikely]] return; }
L_002EE418:
    set32(c.r[9], 0u + 3u);
    c.budget -= 1;
L_002EE41C:
    st32((c.r[29].w[0] + 284u), 0u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[9].d[0]; st32((c.r[29].w[0] + 280u), 0u);  if (t) { goto L_002EE478; } }
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[3], c.r[29].w[0] + 284u);
    set32(c.r[2], c.r[29].w[0] + 280u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    c.r[11].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 324u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE468u); set32(c.r[9], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE468u) [[unlikely]] return; }
L_002EE468:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[30].w[0])));  goto L_002EE5D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EE60C; } }
L_002EE478:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 5u);  goto L_002EE4D0; }
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[3], c.r[29].w[0] + 284u);
    set32(c.r[2], c.r[29].w[0] + 280u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    c.r[11].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 324u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE4C0u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE4C0u) [[unlikely]] return; }
L_002EE4C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EE5CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EE60C; } }
L_002EE4D0:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[9], 0u + 2u);  goto L_002EE524; }
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[3], c.r[29].w[0] + 284u);
    set32(c.r[2], c.r[29].w[0] + 280u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    c.r[11].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 324u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE514u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE514u) [[unlikely]] return; }
L_002EE514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EE5CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EE60C; } }
L_002EE524:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[9].d[0]) { set32(c.r[9], 0u + 1u);  goto L_002EE578; }
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[3], c.r[29].w[0] + 284u);
    set32(c.r[2], c.r[29].w[0] + 280u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    c.r[11].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 324u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE568u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE568u) [[unlikely]] return; }
L_002EE568:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EE5CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EE60C; } }
L_002EE578:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[9].d[0];  if (t) { goto L_002EE5CC; } }
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[3], c.r[29].w[0] + 284u);
    set32(c.r[2], c.r[29].w[0] + 280u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    c.r[11].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 324u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE5BCu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE5BCu) [[unlikely]] return; }
L_002EE5BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EE5CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EE60C; } }
L_002EE5CC:
    set32(c.r[7], ld32((c.r[30].w[0])));
    c.budget -= 1;
L_002EE5D0:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 284u)));  goto L_002EE604; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 284u)));
    c.r[8].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 292u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE5F4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE5F4u) [[unlikely]] return; }
L_002EE5F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002EE60C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EE60C; } }
L_002EE604:
    st32((c.r[30].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_002EE60C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_002EE640:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002EE650:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 60u), 0u);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[2], c.r[29].w[0] + 60u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[6], 0u + 7u);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[11], ld32((c.r[3].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 320u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE694u); c.r[9].d[0] = c.r[8].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE694u) [[unlikely]] return; }
L_002EE694:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EE6A0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 172u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    set32(c.r[2], c.r[29].w[0] + 168u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    set32(c.r[6], 0u + 5u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 172u), 0u);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 168u), 0u);
    set32(c.r[9], 0u + 1u);
    st64((c.r[29].w[0]), 0ull);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 320u)));
    c.budget -= 27;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE70Cu); c.r[11].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE70Cu) [[unlikely]] return; }
L_002EE70C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_002EE71C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EE9C8; } }
L_002EE71C:
    set32(c.r[4], c.r[4].w[0] - 26656u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EE734; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EE73C; } }
L_002EE734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE73Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EE73Cu) [[unlikely]] return; }
L_002EE73C:
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE754u); set32(c.r[5], c.r[29].w[0] + 164u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE754u) [[unlikely]] return; }
L_002EE754:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_002EE7B8; }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE784u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EE784u) [[unlikely]] return; }
L_002EE784:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE794u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EE794u) [[unlikely]] return; }
L_002EE794:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EE7B4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE7B4u); set32(c.r[5], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EE7B4u) [[unlikely]] return; }
L_002EE7B4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_002EE7B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE7C0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002EE7C0u) [[unlikely]] return; }
L_002EE7C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26636u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EE7DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EE7E4; } }
L_002EE7DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE7E4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EE7E4u) [[unlikely]] return; }
L_002EE7E4:
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE7F8u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002EE7F8u) [[unlikely]] return; }
L_002EE7F8:
    set32(c.r[5], ld32((c.r[29].w[0] + 172u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE808u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002EE808u) [[unlikely]] return; }
L_002EE808:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EE864; } }
    set32(c.r[19], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE834u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EE834u) [[unlikely]] return; }
L_002EE834:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE844u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EE844u) [[unlikely]] return; }
L_002EE844:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EE864; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE864u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EE864u) [[unlikely]] return; }
L_002EE864:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26631u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EE880; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EE888; } }
L_002EE880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE888u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EE888u) [[unlikely]] return; }
L_002EE888:
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[7], 0u + 1u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[6], 0u + 103u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE8B4u); c.r[9].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EE8B4u) [[unlikely]] return; }
L_002EE8B4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE8C4u); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002EE8C4u) [[unlikely]] return; }
L_002EE8C4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE8D4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002EE8D4u) [[unlikely]] return; }
L_002EE8D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EE930; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE900u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EE900u) [[unlikely]] return; }
L_002EE900:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE910u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EE910u) [[unlikely]] return; }
L_002EE910:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EE930; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE930u); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EE930u) [[unlikely]] return; }
L_002EE930:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26620u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EE94C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EE954; } }
L_002EE94C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE954u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EE954u) [[unlikely]] return; }
L_002EE954:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE964u); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002EE964u) [[unlikely]] return; }
L_002EE964:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002EE9C8; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE994u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EE994u) [[unlikely]] return; }
L_002EE994:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE9A4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EE9A4u) [[unlikely]] return; }
L_002EE9A4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EE9C4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE9C4u); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EE9C4u) [[unlikely]] return; }
L_002EE9C4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002EE9C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002EE9F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 60u), 0u);
    set32(c.r[2], c.r[29].w[0] + 60u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], 0u + 6u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[11], ld32((c.r[3].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 320u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEA34u); set32(c.r[9], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EEA34u) [[unlikely]] return; }
L_002EEA34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EEA40:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] - 28448u);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 124u), 0u);  if (t) { goto L_002EEA84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EEA8C; } }
L_002EEA84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEA8Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EEA8Cu) [[unlikely]] return; }
L_002EEA8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26609u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 120u), c.r[2].w[0]);  if (t) { goto L_002EEAA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EEAB0; } }
L_002EEAA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEAB0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EEAB0u) [[unlikely]] return; }
L_002EEAB0:
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 120u);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEAC4u); set32(c.r[6], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_006C(c, 510u, depth + 1u); else { c.pc = 0x002B3E20u; return; } if (c.pc != 0x002EEAC4u) [[unlikely]] return; }
L_002EEAC4:
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 124u);
    st64((c.r[29].w[0] + 8u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[11], ld32((c.r[16].w[0])));
    set32(c.r[6], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 320u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEB00u); set32(c.r[9], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EEB00u) [[unlikely]] return; }
L_002EEB00:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EEB60; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEB30u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EEB30u) [[unlikely]] return; }
L_002EEB30:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEB40u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EEB40u) [[unlikely]] return; }
L_002EEB40:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EEB60; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEB60u); set32(c.r[5], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EEB60u) [[unlikely]] return; }
L_002EEB60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_002EEBC0; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEB8Cu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EEB8Cu) [[unlikely]] return; }
L_002EEB8C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEB9Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EEB9Cu) [[unlikely]] return; }
L_002EEB9C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EEBBC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEBBCu); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EEBBCu) [[unlikely]] return; }
L_002EEBBC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002EEBC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002EEBE0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[2].w[0] + 20312u)));
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[29].w[0] + 168u), c.r[7].w[0]);
    set32(c.r[5], c.r[29].w[0] + 172u);
    set32(c.r[6], c.r[29].w[0] + 168u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC3Cu); st32((c.r[29].w[0] + 172u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_007F(c, 198u, depth + 1u); else { c.pc = 0x002FFA90u; return; } if (c.pc != 0x002EEC3Cu) [[unlikely]] return; }
L_002EEC3C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[29].w[0] + 176u)));  goto L_002EECA4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002EED40; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC68u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EEC68u) [[unlikely]] return; }
L_002EEC68:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC78u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EEC78u) [[unlikely]] return; }
L_002EEC78:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EEC98; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC98u); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EEC98u) [[unlikely]] return; }
L_002EEC98:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EED40; } }
L_002EECA4:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[7].d[0]);
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    c.r[11].d[0] = c.r[22].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[7], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 324u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EECE4u); set32(c.r[6], c.r[29].w[0] + 172u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EECE4u) [[unlikely]] return; }
L_002EECE4:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[16].d[0]) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_002EED40; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EED0Cu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EED0Cu) [[unlikely]] return; }
L_002EED0C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EED1Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EED1Cu) [[unlikely]] return; }
L_002EED1C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EED3C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EED3Cu); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EED3Cu) [[unlikely]] return; }
L_002EED3C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002EED40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002EED70:
    set32(c.r[29], c.r[29].w[0] - 400u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[29].w[0] + 348u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 344u), c.r[7].w[0]);
    c.r[23].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 340u), c.r[10].w[0]);
    c.budget -= 26;
    { const bool t = c.r[9].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 320u), 0u);  if (t) { goto L_002EF098; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[9].d[0] == c.r[2].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_002EEFF4; }
    c.budget -= 2;
    if (c.r[9].d[0] == c.r[3].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_002EEF50; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[9].d[0] == c.r[2].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_002EEEAC; }
    c.budget -= 2;
    if (c.r[9].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_002EEE08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002EF140; } }
L_002EEE08:
    set32(c.r[4], c.r[4].w[0] - 26603u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EEE20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EEE28; } }
L_002EEE20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEE28u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EEE28u) [[unlikely]] return; }
L_002EEE28:
    st32((c.r[29].w[0] + 392u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEE40u); set32(c.r[5], c.r[29].w[0] + 392u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EEE40u) [[unlikely]] return; }
L_002EEE40:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 392u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_002EF140; }
    set32(c.r[20], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEE70u); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EEE70u) [[unlikely]] return; }
L_002EEE70:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEE80u); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EEE80u) [[unlikely]] return; }
L_002EEE80:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EEEA0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEEA0u); set32(c.r[5], c.r[29].w[0] + 392u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EEEA0u) [[unlikely]] return; }
L_002EEEA0:
    c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EF140; } }
L_002EEEAC:
    set32(c.r[4], c.r[4].w[0] - 26603u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EEEC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EEECC; } }
L_002EEEC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEECCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EEECCu) [[unlikely]] return; }
L_002EEECC:
    st32((c.r[29].w[0] + 388u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEEE4u); set32(c.r[5], c.r[29].w[0] + 388u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EEEE4u) [[unlikely]] return; }
L_002EEEE4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 388u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_002EEF48; }
    set32(c.r[20], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEF14u); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EEF14u) [[unlikely]] return; }
L_002EEF14:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEF24u); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EEF24u) [[unlikely]] return; }
L_002EEF24:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EEF44; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEF44u); set32(c.r[5], c.r[29].w[0] + 388u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EEF44u) [[unlikely]] return; }
L_002EEF44:
    c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002EEF48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_002EF140; } }
L_002EEF50:
    set32(c.r[4], c.r[4].w[0] - 26774u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EEF68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EEF70; } }
L_002EEF68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEF70u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EEF70u) [[unlikely]] return; }
L_002EEF70:
    st32((c.r[29].w[0] + 384u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEF88u); set32(c.r[5], c.r[29].w[0] + 384u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EEF88u) [[unlikely]] return; }
L_002EEF88:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EF140; } }
    set32(c.r[20], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEFBCu); st32((c.r[29].w[0] + 304u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EEFBCu) [[unlikely]] return; }
L_002EEFBC:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEFCCu); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EEFCCu) [[unlikely]] return; }
L_002EEFCC:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EF140; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEFECu); set32(c.r[5], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EEFECu) [[unlikely]] return; }
L_002EEFEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EF140; } }
L_002EEFF4:
    set32(c.r[4], c.r[4].w[0] - 26798u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EF00C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EF014; } }
L_002EF00C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF014u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EF014u) [[unlikely]] return; }
L_002EF014:
    st32((c.r[29].w[0] + 380u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF02Cu); set32(c.r[5], c.r[29].w[0] + 380u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF02Cu) [[unlikely]] return; }
L_002EF02C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 380u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EF140; } }
    set32(c.r[20], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF060u); st32((c.r[29].w[0] + 288u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EF060u) [[unlikely]] return; }
L_002EF060:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF070u); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EF070u) [[unlikely]] return; }
L_002EF070:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EF140; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF090u); set32(c.r[5], c.r[29].w[0] + 380u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EF090u) [[unlikely]] return; }
L_002EF090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EF140; } }
L_002EF098:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26585u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EF0B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EF0BC; } }
L_002EF0B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF0BCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EF0BCu) [[unlikely]] return; }
L_002EF0BC:
    st32((c.r[29].w[0] + 376u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF0D4u); set32(c.r[5], c.r[29].w[0] + 376u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF0D4u) [[unlikely]] return; }
L_002EF0D4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 376u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002EF13C; }
    set32(c.r[20], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF108u); st32((c.r[29].w[0] + 272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EF108u) [[unlikely]] return; }
L_002EF108:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF118u); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EF118u) [[unlikely]] return; }
L_002EF118:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EF138; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF138u); set32(c.r[5], c.r[29].w[0] + 376u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EF138u) [[unlikely]] return; }
L_002EF138:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002EF13C:
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    c.budget -= 1;
L_002EF140:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_002EF150; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EF768; } }
L_002EF150:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 348u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 344u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF170u); c.r[9].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF170u) [[unlikely]] return; }
L_002EF170:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_002EF184; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EF768; } }
L_002EF184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF18Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002EF18Cu) [[unlikely]] return; }
L_002EF18C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EF1A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EF1B0; } }
L_002EF1A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF1B0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EF1B0u) [[unlikely]] return; }
L_002EF1B0:
    st32((c.r[29].w[0] + 372u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[5], c.r[29].w[0] + 372u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF1C8u); st32((c.r[29].w[0] + 256u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002EF1C8u) [[unlikely]] return; }
L_002EF1C8:
    set32(c.r[4], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 340u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF1D8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002EF1D8u) [[unlikely]] return; }
L_002EF1D8:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 372u)));
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EF24C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF21Cu); st32((c.r[29].w[0] + 240u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EF21Cu) [[unlikely]] return; }
L_002EF21C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF22Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EF22Cu) [[unlikely]] return; }
L_002EF22C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EF24C; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF24Cu); set32(c.r[5], c.r[29].w[0] + 372u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EF24Cu) [[unlikely]] return; }
L_002EF24C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26757u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EF268; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EF270; } }
L_002EF268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF270u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EF270u) [[unlikely]] return; }
L_002EF270:
    st32((c.r[29].w[0] + 368u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF284u); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002EF284u) [[unlikely]] return; }
L_002EF284:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF294u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002EF294u) [[unlikely]] return; }
L_002EF294:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 368u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EF308; } }
    set32(c.r[20], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF2D8u); st32((c.r[29].w[0] + 224u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EF2D8u) [[unlikely]] return; }
L_002EF2D8:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF2E8u); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EF2E8u) [[unlikely]] return; }
L_002EF2E8:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EF308; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF308u); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EF308u) [[unlikely]] return; }
L_002EF308:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27543u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EF324; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EF32C; } }
L_002EF324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF32Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EF32Cu) [[unlikely]] return; }
L_002EF32C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27531u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 364u), c.r[2].w[0]);  if (t) { goto L_002EF348; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EF350; } }
L_002EF348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF350u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EF350u) [[unlikely]] return; }
L_002EF350:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27523u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 360u), c.r[2].w[0]);  if (t) { goto L_002EF36C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EF374; } }
L_002EF36C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF374u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EF374u) [[unlikely]] return; }
L_002EF374:
    st32((c.r[29].w[0] + 356u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 364u);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[20], ld32((c.r[18].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF38Cu); set32(c.r[6], c.r[29].w[0] + 360u);  if (depth < kMaxDepth) unit_006C(c, 510u, depth + 1u); else { c.pc = 0x002B3E20u; return; } if (c.pc != 0x002EF38Cu) [[unlikely]] return; }
L_002EF38C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 356u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF3A0u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B1320u; return; } if (c.pc != 0x002EF3A0u) [[unlikely]] return; }
L_002EF3A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 356u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EF400; } }
    set32(c.r[20], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF3D0u); st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EF3D0u) [[unlikely]] return; }
L_002EF3D0:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF3E0u); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EF3E0u) [[unlikely]] return; }
L_002EF3E0:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EF400; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF400u); set32(c.r[5], c.r[29].w[0] + 356u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EF400u) [[unlikely]] return; }
L_002EF400:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 360u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EF460; } }
    set32(c.r[20], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF430u); st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EF430u) [[unlikely]] return; }
L_002EF430:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF440u); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EF440u) [[unlikely]] return; }
L_002EF440:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EF460; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF460u); set32(c.r[5], c.r[29].w[0] + 360u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EF460u) [[unlikely]] return; }
L_002EF460:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 364u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EF4C0; } }
    set32(c.r[20], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF490u); st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EF490u) [[unlikely]] return; }
L_002EF490:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF4A0u); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EF4A0u) [[unlikely]] return; }
L_002EF4A0:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EF4C0; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF4C0u); set32(c.r[5], c.r[29].w[0] + 364u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EF4C0u) [[unlikely]] return; }
L_002EF4C0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_002EF4D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EF768; } }
L_002EF4D0:
    set32(c.r[4], c.r[4].w[0] - 26749u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EF4E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EF4F0; } }
L_002EF4E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF4F0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EF4F0u) [[unlikely]] return; }
L_002EF4F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF500u); set32(c.r[5], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002EF500u) [[unlikely]] return; }
L_002EF500:
    st32((c.r[29].w[0] + 396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 352u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EF560; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF530u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EF530u) [[unlikely]] return; }
L_002EF530:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF540u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EF540u) [[unlikely]] return; }
L_002EF540:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EF560; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF560u); set32(c.r[5], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EF560u) [[unlikely]] return; }
L_002EF560:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 416u)));  goto L_002EF5F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF570u); set32(c.r[4], ld32((c.r[29].w[0] + 396u)));  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B5E00u; return; } if (c.pc != 0x002EF570u) [[unlikely]] return; }
L_002EF570:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 28421u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002EF58C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002EF5B8; } }
L_002EF58C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002EF5B8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EF5A8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EF5B8; } }
L_002EF5A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF5B0u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002EF5B0u) [[unlikely]] return; }
L_002EF5B0:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002EF5B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EF5F0; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 396u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 416u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 328u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF5E0u); set32(c.r[7], c.r[29].w[0] + 396u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF5E0u) [[unlikely]] return; }
L_002EF5E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EF5F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EF768; } }
L_002EF5F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 416u)));
    c.budget -= 1;
L_002EF5F4:
    st32((c.r[2].w[0]), 0u);
    c.budget -= 1;
L_002EF5F8:
    c.budget -= 2;
    if (c.r[23].d[0] != 0ull) { set32(c.r[7], ld32((c.r[29].w[0] + 400u)));  goto L_002EF608; }
    st32((c.r[29].w[0] + 396u), 0u);
    set32(c.r[7], ld32((c.r[29].w[0] + 400u)));
    c.budget -= 2;
L_002EF608:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002EF644; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 396u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002EF644; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 308u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF634u); set32(c.r[8], c.r[29].w[0] + 396u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF634u) [[unlikely]] return; }
L_002EF634:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EF644; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EF768; } }
L_002EF644:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002EF740; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 396u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002EF740; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[30].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 416u)));  goto L_002EF6D8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[30].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_002EF6AC; }
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_002EF680; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002EF708; } }
L_002EF680:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 296u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF698u); set32(c.r[8], c.r[29].w[0] + 396u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF698u) [[unlikely]] return; }
L_002EF698:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_002EF708; } }
L_002EF6AC:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 292u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF6C4u); set32(c.r[8], c.r[29].w[0] + 396u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF6C4u) [[unlikely]] return; }
L_002EF6C4:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_002EF708; } }
L_002EF6D8:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 304u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF6F8u); set32(c.r[9], c.r[29].w[0] + 396u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF6F8u) [[unlikely]] return; }
L_002EF6F8:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002EF708:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 662u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EF740; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 396u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 312u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF730u); set32(c.r[7], c.r[29].w[0] + 396u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF730u) [[unlikely]] return; }
L_002EF730:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002EF740:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002EF750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EF768; } }
L_002EF750:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002EF768; }
    set32(c.r[3], ld32((c.r[29].w[0] + 396u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 408u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_002EF768:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_002EF7A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 60u), 0u);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[2], c.r[29].w[0] + 60u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[6], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[11], ld32((c.r[3].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 320u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF7E4u); c.r[9].d[0] = c.r[8].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF7E4u) [[unlikely]] return; }
L_002EF7E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EF7F0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[6], c.r[29].w[0] + 264u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 2u);
    set32(c.r[17], ld32((c.r[2].w[0] + 20312u)));
    set32(c.r[5], c.r[29].w[0] + 268u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 180u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 172u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 264u), 0u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF858u); st32((c.r[29].w[0] + 268u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_007F(c, 198u, depth + 1u); else { c.pc = 0x002FFA90u; return; } if (c.pc != 0x002EF858u) [[unlikely]] return; }
L_002EF858:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002EF8C0; }
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[17].d[0]) { c.r[2].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_007C(c, 29u, depth); }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF884u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EF884u) [[unlikely]] return; }
L_002EF884:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF894u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EF894u) [[unlikely]] return; }
L_002EF894:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EF8B4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF8B4u); set32(c.r[5], c.r[29].w[0] + 268u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EF8B4u) [[unlikely]] return; }
L_002EF8B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_007C(c, 29u, depth); } }
L_002EF8C0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 264u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 268u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF8E0u); c.r[9].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF8E0u) [[unlikely]] return; }
L_002EF8E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26603u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EF8F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EF900; } }
L_002EF8F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF900u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EF900u) [[unlikely]] return; }
L_002EF900:
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF918u); set32(c.r[5], c.r[29].w[0] + 260u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EF918u) [[unlikely]] return; }
L_002EF918:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[17].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_002EF974; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF940u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EF940u) [[unlikely]] return; }
L_002EF940:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF950u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EF950u) [[unlikely]] return; }
L_002EF950:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EF970; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF970u); set32(c.r[5], c.r[29].w[0] + 260u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EF970u) [[unlikely]] return; }
L_002EF970:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002EF974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF97Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002EF97Cu) [[unlikely]] return; }
L_002EF97C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EF994; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EF99C; } }
L_002EF994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF99Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EF99Cu) [[unlikely]] return; }
L_002EF99C:
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF9B0u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002EF9B0u) [[unlikely]] return; }
L_002EF9B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF9C0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002EF9C0u) [[unlikely]] return; }
L_002EF9C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_002EFA14; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF9E4u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EF9E4u) [[unlikely]] return; }
L_002EF9E4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF9F4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EF9F4u) [[unlikely]] return; }
L_002EF9F4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EFA14; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFA14u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EFA14u) [[unlikely]] return; }
L_002EFA14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26757u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EFA2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EFA34; } }
L_002EFA2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFA34u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EFA34u) [[unlikely]] return; }
L_002EFA34:
    st32((c.r[29].w[0] + 252u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFA48u); set32(c.r[5], c.r[29].w[0] + 252u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002EFA48u) [[unlikely]] return; }
L_002EFA48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFA58u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002EFA58u) [[unlikely]] return; }
L_002EFA58:
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_002EFAAC; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFA7Cu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EFA7Cu) [[unlikely]] return; }
L_002EFA7C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFA8Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EFA8Cu) [[unlikely]] return; }
L_002EFA8C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EFAAC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFAACu); set32(c.r[5], c.r[29].w[0] + 252u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EFAACu) [[unlikely]] return; }
L_002EFAAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27543u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EFAC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EFACC; } }
L_002EFAC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFACCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EFACCu) [[unlikely]] return; }
L_002EFACC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27531u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 248u), c.r[2].w[0]);  if (t) { goto L_002EFAE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EFAEC; } }
L_002EFAE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFAECu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EFAECu) [[unlikely]] return; }
L_002EFAEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27523u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 244u), c.r[2].w[0]);  if (t) { goto L_002EFB04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EFB0C; } }
L_002EFB04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFB0Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EFB0Cu) [[unlikely]] return; }
L_002EFB0C:
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 248u);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFB24u); set32(c.r[6], c.r[29].w[0] + 244u);  if (depth < kMaxDepth) unit_006C(c, 510u, depth + 1u); else { c.pc = 0x002B3E20u; return; } if (c.pc != 0x002EFB24u) [[unlikely]] return; }
L_002EFB24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFB38u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B1320u; return; } if (c.pc != 0x002EFB38u) [[unlikely]] return; }
L_002EFB38:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[17].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 244u)));  goto L_002EFB90; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFB5Cu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EFB5Cu) [[unlikely]] return; }
L_002EFB5C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFB6Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EFB6Cu) [[unlikely]] return; }
L_002EFB6C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EFB8C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFB8Cu); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EFB8Cu) [[unlikely]] return; }
L_002EFB8C:
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 1;
L_002EFB90:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[17].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 248u)));  goto L_002EFBE4; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFBB0u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EFBB0u) [[unlikely]] return; }
L_002EFBB0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFBC0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EFBC0u) [[unlikely]] return; }
L_002EFBC0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EFBE0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFBE0u); set32(c.r[5], c.r[29].w[0] + 244u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EFBE0u) [[unlikely]] return; }
L_002EFBE0:
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 1;
L_002EFBE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_002EFC34; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFC04u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EFC04u) [[unlikely]] return; }
L_002EFC04:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFC14u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EFC14u) [[unlikely]] return; }
L_002EFC14:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EFC34; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFC34u); set32(c.r[5], c.r[29].w[0] + 248u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EFC34u) [[unlikely]] return; }
L_002EFC34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26749u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EFC4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EFC54; } }
L_002EFC4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFC54u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EFC54u) [[unlikely]] return; }
L_002EFC54:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFC64u); set32(c.r[5], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002EFC64u) [[unlikely]] return; }
L_002EFC64:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_002EFCBC; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFC8Cu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EFC8Cu) [[unlikely]] return; }
L_002EFC8C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFC9Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EFC9Cu) [[unlikely]] return; }
L_002EFC9C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EFCBC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFCBCu); set32(c.r[5], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EFCBCu) [[unlikely]] return; }
L_002EFCBC:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_002EFD24; }
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[17].d[0]) { c.r[2].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_007C(c, 29u, depth); }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFCE8u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EFCE8u) [[unlikely]] return; }
L_002EFCE8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFCF8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EFCF8u) [[unlikely]] return; }
L_002EFCF8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EFD18; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFD18u); set32(c.r[5], c.r[29].w[0] + 268u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EFD18u) [[unlikely]] return; }
L_002EFD18:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_007C(c, 29u, depth); } }
L_002EFD24:
    set32(c.r[4], c.r[4].w[0] - 26999u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EFD38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EFD40; } }
L_002EFD38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFD40u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EFD40u) [[unlikely]] return; }
L_002EFD40:
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFD58u); set32(c.r[5], c.r[29].w[0] + 232u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EFD58u) [[unlikely]] return; }
L_002EFD58:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[17].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_002EFDB4; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFD80u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EFD80u) [[unlikely]] return; }
L_002EFD80:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFD90u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EFD90u) [[unlikely]] return; }
L_002EFD90:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EFDB0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFDB0u); set32(c.r[5], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EFDB0u) [[unlikely]] return; }
L_002EFDB0:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002EFDB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFDBCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002EFDBCu) [[unlikely]] return; }
L_002EFDBC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26564u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EFDD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EFDDC; } }
L_002EFDD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFDDCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EFDDCu) [[unlikely]] return; }
L_002EFDDC:
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFDF0u); set32(c.r[5], c.r[29].w[0] + 228u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002EFDF0u) [[unlikely]] return; }
L_002EFDF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFE00u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002EFE00u) [[unlikely]] return; }
L_002EFE00:
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_002EFE54; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFE24u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EFE24u) [[unlikely]] return; }
L_002EFE24:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFE34u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EFE34u) [[unlikely]] return; }
L_002EFE34:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EFE54; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFE54u); set32(c.r[5], c.r[29].w[0] + 228u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EFE54u) [[unlikely]] return; }
L_002EFE54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26554u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EFE6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EFE74; } }
L_002EFE6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFE74u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EFE74u) [[unlikely]] return; }
L_002EFE74:
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFE88u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002EFE88u) [[unlikely]] return; }
L_002EFE88:
    set32(c.r[5], ld32((c.r[22].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFE98u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002EFE98u) [[unlikely]] return; }
L_002EFE98:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_002EFEEC; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFEBCu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EFEBCu) [[unlikely]] return; }
L_002EFEBC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFECCu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EFECCu) [[unlikely]] return; }
L_002EFECC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EFEEC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFEECu); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EFEECu) [[unlikely]] return; }
L_002EFEEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26540u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EFF04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EFF0C; } }
L_002EFF04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF0Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EFF0Cu) [[unlikely]] return; }
L_002EFF0C:
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF20u); set32(c.r[5], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002EFF20u) [[unlikely]] return; }
L_002EFF20:
    set32(c.r[5], ld32((c.r[29].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF30u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002EFF30u) [[unlikely]] return; }
L_002EFF30:
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_002EFF84; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF54u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EFF54u) [[unlikely]] return; }
L_002EFF54:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF64u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EFF64u) [[unlikely]] return; }
L_002EFF64:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EFF84; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF84u); set32(c.r[5], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EFF84u) [[unlikely]] return; }
L_002EFF84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26524u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EFF9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EFFA4; } }
L_002EFF9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFFA4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EFFA4u) [[unlikely]] return; }
L_002EFFA4:
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFFB8u); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002EFFB8u) [[unlikely]] return; }
L_002EFFB8:
    set32(c.r[5], ld32((c.r[29].w[0] + 172u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFFC8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002EFFC8u) [[unlikely]] return; }
L_002EFFC8:
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[17].d[0]) { set32(c.r[7], ld32((c.r[29].w[0] + 180u)));  [[clang::musttail]] return unit_007C(c, 3u, depth); }
L_002EFFD4:
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFFECu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EFFECu) [[unlikely]] return; }
L_002EFFEC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFFFCu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EFFFCu) [[unlikely]] return; }
L_002EFFFC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
    [[clang::musttail]] return unit_007C(c, 1u, depth);
}

}
