#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0068[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 4, 0, 0, 0, 0, 5, 0, 0, 0, 6, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0,
    0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0,
    0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0,
    0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55,
    0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61,
    0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0,
    0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 102,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0,
    0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118,
    0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0,
    133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0,
    0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141,
    0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0,
    0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0,
    0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179,
    0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0,
    0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0,
    0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0,
    0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0,
    0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0,
    0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243,
    0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258,
    0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0,
    270, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0,
    0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294,
    0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0,
    0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0,
    0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314,
    0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0,
    319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0,
    0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0,
    0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0,
    335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0,
    338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340,
    0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347,
    0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0,
    0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0,
    358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0,
    0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0,
    0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0,
    0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0,
    0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0,
    0, 393, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0,
    398, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0,
    0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410,
    0, 0, 0, 411, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 0, 415, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0,
    421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0,
    434, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0,
    0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 447, 0,
};

void unit_0068(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002A0000;
    case 2u: goto L_002A0010;
    case 3u: goto L_002A002C;
    case 4u: goto L_002A0030;
    case 5u: goto L_002A0044;
    case 6u: goto L_002A0054;
    case 7u: goto L_002A0058;
    case 8u: goto L_002A0088;
    case 9u: goto L_002A0090;
    case 10u: goto L_002A00B4;
    case 11u: goto L_002A00C4;
    case 12u: goto L_002A00E0;
    case 13u: goto L_002A00F8;
    case 14u: goto L_002A0108;
    case 15u: goto L_002A013C;
    case 16u: goto L_002A0144;
    case 17u: goto L_002A0168;
    case 18u: goto L_002A0178;
    case 19u: goto L_002A0194;
    case 20u: goto L_002A01AC;
    case 21u: goto L_002A01BC;
    case 22u: goto L_002A01F0;
    case 23u: goto L_002A0204;
    case 24u: goto L_002A0214;
    case 25u: goto L_002A0230;
    case 26u: goto L_002A0244;
    case 27u: goto L_002A0254;
    case 28u: goto L_002A0270;
    case 29u: goto L_002A0284;
    case 30u: goto L_002A0294;
    case 31u: goto L_002A02B0;
    case 32u: goto L_002A02BC;
    case 33u: goto L_002A02C0;
    case 34u: goto L_002A02D4;
    case 35u: goto L_002A02E8;
    case 36u: goto L_002A030C;
    case 37u: goto L_002A031C;
    case 38u: goto L_002A0338;
    case 39u: goto L_002A0350;
    case 40u: goto L_002A0360;
    case 41u: goto L_002A0394;
    case 42u: goto L_002A039C;
    case 43u: goto L_002A03C0;
    case 44u: goto L_002A03D0;
    case 45u: goto L_002A03EC;
    case 46u: goto L_002A0404;
    case 47u: goto L_002A0414;
    case 48u: goto L_002A0448;
    case 49u: goto L_002A0450;
    case 50u: goto L_002A0474;
    case 51u: goto L_002A0484;
    case 52u: goto L_002A04A0;
    case 53u: goto L_002A04B8;
    case 54u: goto L_002A04C8;
    case 55u: goto L_002A04FC;
    case 56u: goto L_002A0510;
    case 57u: goto L_002A0520;
    case 58u: goto L_002A053C;
    case 59u: goto L_002A0550;
    case 60u: goto L_002A0560;
    case 61u: goto L_002A057C;
    case 62u: goto L_002A0590;
    case 63u: goto L_002A05A0;
    case 64u: goto L_002A05BC;
    case 65u: goto L_002A05C0;
    case 66u: goto L_002A05F0;
    case 67u: goto L_002A0624;
    case 68u: goto L_002A0634;
    case 69u: goto L_002A0650;
    case 70u: goto L_002A066C;
    case 71u: goto L_002A0690;
    case 72u: goto L_002A06A0;
    case 73u: goto L_002A06B8;
    case 74u: goto L_002A06D0;
    case 75u: goto L_002A0710;
    case 76u: goto L_002A0720;
    case 77u: goto L_002A073C;
    case 78u: goto L_002A075C;
    case 79u: goto L_002A0768;
    case 80u: goto L_002A07A0;
    case 81u: goto L_002A07E8;
    case 82u: goto L_002A0800;
    case 83u: goto L_002A0818;
    case 84u: goto L_002A0870;
    case 85u: goto L_002A0890;
    case 86u: goto L_002A08C4;
    case 87u: goto L_002A08D4;
    case 88u: goto L_002A0914;
    case 89u: goto L_002A0970;
    case 90u: goto L_002A098C;
    case 91u: goto L_002A09E4;
    case 92u: goto L_002A0A04;
    case 93u: goto L_002A0A10;
    case 94u: goto L_002A0A28;
    case 95u: goto L_002A0A58;
    case 96u: goto L_002A0A88;
    case 97u: goto L_002A0AA4;
    case 98u: goto L_002A0AE0;
    case 99u: goto L_002A0B38;
    case 100u: goto L_002A0B58;
    case 101u: goto L_002A0B64;
    case 102u: goto L_002A0B7C;
    case 103u: goto L_002A0BAC;
    case 104u: goto L_002A0BDC;
    case 105u: goto L_002A0BF8;
    case 106u: goto L_002A0C10;
    case 107u: goto L_002A0C30;
    case 108u: goto L_002A0C88;
    case 109u: goto L_002A0CA8;
    case 110u: goto L_002A0CB4;
    case 111u: goto L_002A0CCC;
    case 112u: goto L_002A0CFC;
    case 113u: goto L_002A0D2C;
    case 114u: goto L_002A0D48;
    case 115u: goto L_002A0D6C;
    case 116u: goto L_002A0D90;
    case 117u: goto L_002A0DA4;
    case 118u: goto L_002A0DFC;
    case 119u: goto L_002A0E1C;
    case 120u: goto L_002A0E28;
    case 121u: goto L_002A0E40;
    case 122u: goto L_002A0E70;
    case 123u: goto L_002A0EA0;
    case 124u: goto L_002A0EBC;
    case 125u: goto L_002A0ED4;
    case 126u: goto L_002A0EE0;
    case 127u: goto L_002A0EF0;
    case 128u: goto L_002A0F44;
    case 129u: goto L_002A0F68;
    case 130u: goto L_002A0F7C;
    case 131u: goto L_002A0FD4;
    case 132u: goto L_002A0FF4;
    case 133u: goto L_002A1000;
    case 134u: goto L_002A1018;
    case 135u: goto L_002A1048;
    case 136u: goto L_002A1078;
    case 137u: goto L_002A1094;
    case 138u: goto L_002A10C4;
    case 139u: goto L_002A10F0;
    case 140u: goto L_002A1118;
    case 141u: goto L_002A117C;
    case 142u: goto L_002A1198;
    case 143u: goto L_002A11F0;
    case 144u: goto L_002A1210;
    case 145u: goto L_002A121C;
    case 146u: goto L_002A1234;
    case 147u: goto L_002A1264;
    case 148u: goto L_002A1294;
    case 149u: goto L_002A12A8;
    case 150u: goto L_002A12C0;
    case 151u: goto L_002A12CC;
    case 152u: goto L_002A1300;
    case 153u: goto L_002A1358;
    case 154u: goto L_002A1368;
    case 155u: goto L_002A1388;
    case 156u: goto L_002A13A4;
    case 157u: goto L_002A13D0;
    case 158u: goto L_002A1420;
    case 159u: goto L_002A1460;
    case 160u: goto L_002A1470;
    case 161u: goto L_002A1490;
    case 162u: goto L_002A14D0;
    case 163u: goto L_002A14E0;
    case 164u: goto L_002A1500;
    case 165u: goto L_002A153C;
    case 166u: goto L_002A154C;
    case 167u: goto L_002A156C;
    case 168u: goto L_002A1588;
    case 169u: goto L_002A15B0;
    case 170u: goto L_002A15D8;
    case 171u: goto L_002A15FC;
    case 172u: goto L_002A1610;
    case 173u: goto L_002A1644;
    case 174u: goto L_002A1654;
    case 175u: goto L_002A1670;
    case 176u: goto L_002A168C;
    case 177u: goto L_002A16B0;
    case 178u: goto L_002A16DC;
    case 179u: goto L_002A16FC;
    case 180u: goto L_002A1708;
    case 181u: goto L_002A1748;
    case 182u: goto L_002A1764;
    case 183u: goto L_002A1778;
    case 184u: goto L_002A17A8;
    case 185u: goto L_002A17C8;
    case 186u: goto L_002A17DC;
    case 187u: goto L_002A17F0;
    case 188u: goto L_002A1810;
    case 189u: goto L_002A1830;
    case 190u: goto L_002A1868;
    case 191u: goto L_002A1878;
    case 192u: goto L_002A1894;
    case 193u: goto L_002A18A8;
    case 194u: goto L_002A18B8;
    case 195u: goto L_002A18E0;
    case 196u: goto L_002A192C;
    case 197u: goto L_002A194C;
    case 198u: goto L_002A1958;
    case 199u: goto L_002A1984;
    case 200u: goto L_002A1994;
    case 201u: goto L_002A19B0;
    case 202u: goto L_002A19C8;
    case 203u: goto L_002A19D8;
    case 204u: goto L_002A1A08;
    case 205u: goto L_002A1A40;
    case 206u: goto L_002A1A68;
    case 207u: goto L_002A1A78;
    case 208u: goto L_002A1A90;
    case 209u: goto L_002A1A98;
    case 210u: goto L_002A1AD0;
    case 211u: goto L_002A1AD8;
    case 212u: goto L_002A1B10;
    case 213u: goto L_002A1B38;
    case 214u: goto L_002A1B4C;
    case 215u: goto L_002A1B70;
    case 216u: goto L_002A1B80;
    case 217u: goto L_002A1B9C;
    case 218u: goto L_002A1BB4;
    case 219u: goto L_002A1BC4;
    case 220u: goto L_002A1BF0;
    case 221u: goto L_002A1C10;
    case 222u: goto L_002A1C50;
    case 223u: goto L_002A1C88;
    case 224u: goto L_002A1CAC;
    case 225u: goto L_002A1CE4;
    case 226u: goto L_002A1CF4;
    case 227u: goto L_002A1D14;
    case 228u: goto L_002A1D30;
    case 229u: goto L_002A1D60;
    case 230u: goto L_002A1D70;
    case 231u: goto L_002A1D90;
    case 232u: goto L_002A1DC0;
    case 233u: goto L_002A1DF8;
    case 234u: goto L_002A1E1C;
    case 235u: goto L_002A1E54;
    case 236u: goto L_002A1E64;
    case 237u: goto L_002A1E84;
    case 238u: goto L_002A1EA0;
    case 239u: goto L_002A1ED0;
    case 240u: goto L_002A1EE0;
    case 241u: goto L_002A1F00;
    case 242u: goto L_002A1F30;
    case 243u: goto L_002A1F7C;
    case 244u: goto L_002A1FA0;
    case 245u: goto L_002A1FB0;
    case 246u: goto L_002A1FD0;
    case 247u: goto L_002A1FDC;
    case 248u: goto L_002A201C;
    case 249u: goto L_002A2050;
    case 250u: goto L_002A2060;
    case 251u: goto L_002A2080;
    case 252u: goto L_002A20B8;
    case 253u: goto L_002A20C8;
    case 254u: goto L_002A20E8;
    case 255u: goto L_002A2110;
    case 256u: goto L_002A2148;
    case 257u: goto L_002A2158;
    case 258u: goto L_002A217C;
    case 259u: goto L_002A2194;
    case 260u: goto L_002A21B8;
    case 261u: goto L_002A21C8;
    case 262u: goto L_002A21E8;
    case 263u: goto L_002A2220;
    case 264u: goto L_002A223C;
    case 265u: goto L_002A224C;
    case 266u: goto L_002A2268;
    case 267u: goto L_002A2290;
    case 268u: goto L_002A22A0;
    case 269u: goto L_002A22EC;
    case 270u: goto L_002A2300;
    case 271u: goto L_002A2324;
    case 272u: goto L_002A2334;
    case 273u: goto L_002A2350;
    case 274u: goto L_002A2364;
    case 275u: goto L_002A2374;
    case 276u: goto L_002A23B4;
    case 277u: goto L_002A23C4;
    case 278u: goto L_002A23E0;
    case 279u: goto L_002A23F4;
    case 280u: goto L_002A2404;
    case 281u: goto L_002A2430;
    case 282u: goto L_002A2470;
    case 283u: goto L_002A24B0;
    case 284u: goto L_002A24EC;
    case 285u: goto L_002A2528;
    case 286u: goto L_002A2564;
    case 287u: goto L_002A25A0;
    case 288u: goto L_002A25DC;
    case 289u: goto L_002A2618;
    case 290u: goto L_002A2654;
    case 291u: goto L_002A2690;
    case 292u: goto L_002A26C0;
    case 293u: goto L_002A26E0;
    case 294u: goto L_002A26FC;
    case 295u: goto L_002A2718;
    case 296u: goto L_002A2734;
    case 297u: goto L_002A2750;
    case 298u: goto L_002A276C;
    case 299u: goto L_002A2788;
    case 300u: goto L_002A27A4;
    case 301u: goto L_002A27C0;
    case 302u: goto L_002A27DC;
    case 303u: goto L_002A2800;
    case 304u: goto L_002A2844;
    case 305u: goto L_002A2864;
    case 306u: goto L_002A2888;
    case 307u: goto L_002A2898;
    case 308u: goto L_002A28B4;
    case 309u: goto L_002A28CC;
    case 310u: goto L_002A28DC;
    case 311u: goto L_002A2914;
    case 312u: goto L_002A2920;
    case 313u: goto L_002A2964;
    case 314u: goto L_002A297C;
    case 315u: goto L_002A2994;
    case 316u: goto L_002A29B0;
    case 317u: goto L_002A29D4;
    case 318u: goto L_002A29E4;
    case 319u: goto L_002A2A00;
    case 320u: goto L_002A2A18;
    case 321u: goto L_002A2A28;
    case 322u: goto L_002A2A64;
    case 323u: goto L_002A2A70;
    case 324u: goto L_002A2A8C;
    case 325u: goto L_002A2AC0;
    case 326u: goto L_002A2AF4;
    case 327u: goto L_002A2B04;
    case 328u: goto L_002A2B20;
    case 329u: goto L_002A2B3C;
    case 330u: goto L_002A2B60;
    case 331u: goto L_002A2B94;
    case 332u: goto L_002A2BA4;
    case 333u: goto L_002A2BC0;
    case 334u: goto L_002A2BDC;
    case 335u: goto L_002A2C00;
    case 336u: goto L_002A2C40;
    case 337u: goto L_002A2C5C;
    case 338u: goto L_002A2C80;
    case 339u: goto L_002A2CC4;
    case 340u: goto L_002A2CFC;
    case 341u: goto L_002A2D1C;
    case 342u: goto L_002A2D54;
    case 343u: goto L_002A2D90;
    case 344u: goto L_002A2DA4;
    case 345u: goto L_002A2DC8;
    case 346u: goto L_002A2DE8;
    case 347u: goto L_002A2DFC;
    case 348u: goto L_002A2E10;
    case 349u: goto L_002A2E30;
    case 350u: goto L_002A2E38;
    case 351u: goto L_002A2E40;
    case 352u: goto L_002A2E68;
    case 353u: goto L_002A2E88;
    case 354u: goto L_002A2ED0;
    case 355u: goto L_002A2F00;
    case 356u: goto L_002A2F44;
    case 357u: goto L_002A2F60;
    case 358u: goto L_002A2F80;
    case 359u: goto L_002A2FB4;
    case 360u: goto L_002A2FD0;
    case 361u: goto L_002A2FF0;
    case 362u: goto L_002A3028;
    case 363u: goto L_002A3038;
    case 364u: goto L_002A3054;
    case 365u: goto L_002A3068;
    case 366u: goto L_002A3078;
    case 367u: goto L_002A30A0;
    case 368u: goto L_002A30EC;
    case 369u: goto L_002A310C;
    case 370u: goto L_002A3118;
    case 371u: goto L_002A3144;
    case 372u: goto L_002A3154;
    case 373u: goto L_002A3170;
    case 374u: goto L_002A3188;
    case 375u: goto L_002A3198;
    case 376u: goto L_002A31C8;
    case 377u: goto L_002A3200;
    case 378u: goto L_002A3210;
    case 379u: goto L_002A3220;
    case 380u: goto L_002A3248;
    case 381u: goto L_002A3258;
    case 382u: goto L_002A3270;
    case 383u: goto L_002A3290;
    case 384u: goto L_002A32BC;
    case 385u: goto L_002A32C8;
    case 386u: goto L_002A32D4;
    case 387u: goto L_002A3320;
    case 388u: goto L_002A3370;
    case 389u: goto L_002A338C;
    case 390u: goto L_002A3398;
    case 391u: goto L_002A33F0;
    case 392u: goto L_002A3470;
    case 393u: goto L_002A3484;
    case 394u: goto L_002A348C;
    case 395u: goto L_002A3494;
    case 396u: goto L_002A34E0;
    case 397u: goto L_002A34F0;
    case 398u: goto L_002A3500;
    case 399u: goto L_002A3510;
    case 400u: goto L_002A3520;
    case 401u: goto L_002A3548;
    case 402u: goto L_002A3558;
    case 403u: goto L_002A3570;
    case 404u: goto L_002A3598;
    case 405u: goto L_002A35A8;
    case 406u: goto L_002A35C0;
    case 407u: goto L_002A35F4;
    case 408u: goto L_002A3614;
    case 409u: goto L_002A3640;
    case 410u: goto L_002A367C;
    case 411u: goto L_002A368C;
    case 412u: goto L_002A3698;
    case 413u: goto L_002A36A4;
    case 414u: goto L_002A36B0;
    case 415u: goto L_002A36BC;
    case 416u: goto L_002A36C8;
    case 417u: goto L_002A36D4;
    case 418u: goto L_002A370C;
    case 419u: goto L_002A3740;
    case 420u: goto L_002A3770;
    case 421u: goto L_002A3780;
    case 422u: goto L_002A3834;
    case 423u: goto L_002A38C4;
    case 424u: goto L_002A3944;
    case 425u: goto L_002A39D4;
    case 426u: goto L_002A3A64;
    case 427u: goto L_002A3AD8;
    case 428u: goto L_002A3BB0;
    case 429u: goto L_002A3C84;
    case 430u: goto L_002A3D58;
    case 431u: goto L_002A3E2C;
    case 432u: goto L_002A3E60;
    case 433u: goto L_002A3E70;
    case 434u: goto L_002A3E80;
    case 435u: goto L_002A3E94;
    case 436u: goto L_002A3EA0;
    case 437u: goto L_002A3EB4;
    case 438u: goto L_002A3ED0;
    case 439u: goto L_002A3EEC;
    case 440u: goto L_002A3F38;
    case 441u: goto L_002A3F70;
    case 442u: goto L_002A3F90;
    case 443u: goto L_002A3FB4;
    case 444u: goto L_002A3FC8;
    case 445u: goto L_002A3FDC;
    case 446u: goto L_002A3FF0;
    case 447u: goto L_002A3FF8;
    default: bad_entry(c, 0x002A0000u); return;
    }
L_002A0000:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0010u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A0010u) [[unlikely]] return; }
L_002A0010:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A002C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A002Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A002Cu) [[unlikely]] return; }
L_002A002C:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_002A0030:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A0054; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0044u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A0044u) [[unlikely]] return; }
L_002A0044:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0054u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A0054u) [[unlikely]] return; }
L_002A0054:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002A0058:
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 216u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029FFDCu | kUnwind; return; } [[clang::musttail]] return unit_0067(c, 516u, depth); }
    set32(c.r[4], ld32((c.r[29].w[0] + 216u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 1520u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0088u); st32((c.r[29].w[0] + 224u), 0u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A0088u) [[unlikely]] return; }
L_002A0088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A010C; } }
L_002A0090:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.budget -= 5;
    if (c.r[18].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002A010C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0]), 0u);  goto L_002A00E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A00B4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A00B4u) [[unlikely]] return; }
L_002A00B4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A00C4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A00C4u) [[unlikely]] return; }
L_002A00C4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A00E0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A00E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A00E0u) [[unlikely]] return; }
L_002A00E0:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_002A00E4:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A0108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A00F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A00F8u) [[unlikely]] return; }
L_002A00F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0108u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A0108u) [[unlikely]] return; }
L_002A0108:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002A010C:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 204u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0090u | kUnwind; return; } goto L_002A0090; }
    set32(c.r[4], ld32((c.r[29].w[0] + 204u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 1520u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A013Cu); st32((c.r[29].w[0] + 212u), 0u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A013Cu) [[unlikely]] return; }
L_002A013C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A01C0; } }
L_002A0144:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.budget -= 5;
    if (c.r[18].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002A01C0; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0]), 0u);  goto L_002A0198; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0168u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A0168u) [[unlikely]] return; }
L_002A0168:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0178u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A0178u) [[unlikely]] return; }
L_002A0178:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A0194; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0194u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A0194u) [[unlikely]] return; }
L_002A0194:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_002A0198:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A01BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A01ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A01ACu) [[unlikely]] return; }
L_002A01AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A01BCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A01BCu) [[unlikely]] return; }
L_002A01BC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002A01C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 192u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0144u | kUnwind; return; } goto L_002A0144; }
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 1520u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A01F0u); st32((c.r[29].w[0] + 200u), 0u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A01F0u) [[unlikely]] return; }
L_002A01F0:
    set32(c.r[16], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 244u)));  goto L_002A0234; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0204u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A0204u) [[unlikely]] return; }
L_002A0204:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0214u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A0214u) [[unlikely]] return; }
L_002A0214:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A0230; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0230u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A0230u) [[unlikely]] return; }
L_002A0230:
    set32(c.r[16], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 1;
L_002A0234:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 240u)));  goto L_002A0274; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0244u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A0244u) [[unlikely]] return; }
L_002A0244:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0254u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A0254u) [[unlikely]] return; }
L_002A0254:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A0270; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0270u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A0270u) [[unlikely]] return; }
L_002A0270:
    set32(c.r[16], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 1;
L_002A0274:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 32u);  goto L_002A05C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0284u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A0284u) [[unlikely]] return; }
L_002A0284:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0294u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A0294u) [[unlikely]] return; }
L_002A0294:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A02B0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A02B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A02B0u) [[unlikely]] return; }
L_002A02B0:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A05C0; } }
L_002A02BC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002A02C0:
    set32(c.r[2], ld32((c.r[23].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[23].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029FF84u | kUnwind; return; } [[clang::musttail]] return unit_0067(c, 514u, depth); }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002A02D4:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0029F93Cu | kUnwind; return; } [[clang::musttail]] return unit_0067(c, 451u, depth); }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A0364; } }
L_002A02E8:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.budget -= 5;
    if (c.r[18].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002A0364; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0]), 0u);  goto L_002A033C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A030Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A030Cu) [[unlikely]] return; }
L_002A030C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A031Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A031Cu) [[unlikely]] return; }
L_002A031C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A0338; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0338u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A0338u) [[unlikely]] return; }
L_002A0338:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_002A033C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A0360; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0350u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A0350u) [[unlikely]] return; }
L_002A0350:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0360u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A0360u) [[unlikely]] return; }
L_002A0360:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002A0364:
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 216u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A02E8u | kUnwind; return; } goto L_002A02E8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 216u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 1520u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0394u); st32((c.r[29].w[0] + 224u), 0u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A0394u) [[unlikely]] return; }
L_002A0394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A0418; } }
L_002A039C:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.budget -= 5;
    if (c.r[18].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002A0418; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0]), 0u);  goto L_002A03F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A03C0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A03C0u) [[unlikely]] return; }
L_002A03C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A03D0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A03D0u) [[unlikely]] return; }
L_002A03D0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A03EC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A03ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A03ECu) [[unlikely]] return; }
L_002A03EC:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_002A03F0:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A0414; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0404u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A0404u) [[unlikely]] return; }
L_002A0404:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0414u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A0414u) [[unlikely]] return; }
L_002A0414:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002A0418:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 204u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A039Cu | kUnwind; return; } goto L_002A039C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 204u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 1520u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0448u); st32((c.r[29].w[0] + 212u), 0u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A0448u) [[unlikely]] return; }
L_002A0448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A04CC; } }
L_002A0450:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.budget -= 5;
    if (c.r[18].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002A04CC; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0]), 0u);  goto L_002A04A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0474u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A0474u) [[unlikely]] return; }
L_002A0474:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0484u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A0484u) [[unlikely]] return; }
L_002A0484:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A04A0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A04A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A04A0u) [[unlikely]] return; }
L_002A04A0:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_002A04A4:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A04C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A04B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A04B8u) [[unlikely]] return; }
L_002A04B8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A04C8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A04C8u) [[unlikely]] return; }
L_002A04C8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002A04CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 192u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0450u | kUnwind; return; } goto L_002A0450; }
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 1520u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A04FCu); st32((c.r[29].w[0] + 200u), 0u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A04FCu) [[unlikely]] return; }
L_002A04FC:
    set32(c.r[16], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 244u)));  goto L_002A0540; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0510u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A0510u) [[unlikely]] return; }
L_002A0510:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0520u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A0520u) [[unlikely]] return; }
L_002A0520:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A053C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A053Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A053Cu) [[unlikely]] return; }
L_002A053C:
    set32(c.r[16], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 1;
L_002A0540:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 240u)));  goto L_002A0580; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0550u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A0550u) [[unlikely]] return; }
L_002A0550:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0560u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A0560u) [[unlikely]] return; }
L_002A0560:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A057C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A057Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A057Cu) [[unlikely]] return; }
L_002A057C:
    set32(c.r[16], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 1;
L_002A0580:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A05C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0590u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A0590u) [[unlikely]] return; }
L_002A0590:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A05A0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A05A0u) [[unlikely]] return; }
L_002A05A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A05BC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A05BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A05BCu) [[unlikely]] return; }
L_002A05BC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A05C0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_002A05F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A066C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_002A0654; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0624u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A0624u) [[unlikely]] return; }
L_002A0624:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0634u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A0634u) [[unlikely]] return; }
L_002A0634:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A0650; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0650u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A0650u) [[unlikely]] return; }
L_002A0650:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_002A0654:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002A0670; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A066Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002A066Cu) [[unlikely]] return; }
L_002A066C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002A0670:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A0690:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  goto L_002A3570; }
L_002A06A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A06B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A06B8u) [[unlikely]] return; }
L_002A06B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A06D0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0710u); c.r[20].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A0710u) [[unlikely]] return; }
L_002A0710:
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[21].w[0] + c.r[2].w[0]);  if (t) { goto L_002A07B0; } }
L_002A0720:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A073Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A073Cu) [[unlikely]] return; }
L_002A073C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_002A0750; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A0794; } }
L_002A0750:
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A075Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A075Cu) [[unlikely]] return; }
L_002A075C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 19840u);  if (t) { goto L_002A0778; } }
L_002A0768:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_002A0778; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002A0784; } }
L_002A0778:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0768u | kUnwind; return; } goto L_002A0768; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A0784:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002A0794; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0794; } }
L_002A0794:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A07A0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 370u, depth + 1u); else { c.pc = 0x002B2B40u; return; } if (c.pc != 0x002A07A0u) [[unlikely]] return; }
L_002A07A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002A07B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A07C8; } }
L_002A07B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0720u | kUnwind; return; } goto L_002A0720; }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A07C8:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[25], ld32((c.r[21].w[0])));  goto L_002A07D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002A12D0; } }
L_002A07D8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A07E8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A07E8u) [[unlikely]] return; }
L_002A07E8:
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[21].w[0] + c.r[2].w[0]);  if (t) { goto L_002A0828; } }
L_002A0800:
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0818u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006C(c, 370u, depth + 1u); else { c.pc = 0x002B2B40u; return; } if (c.pc != 0x002A0818u) [[unlikely]] return; }
L_002A0818:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002A0828; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002A083C; } }
L_002A0828:
    set32(c.r[2], ld32((c.r[16].w[0] + 192u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0800u | kUnwind; return; } goto L_002A0800; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A083C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 236u), 0u);  goto L_002A084C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A12D0; } }
L_002A084C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[21].w[0] + 644u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0870u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002A0870u) [[unlikely]] return; }
L_002A0870:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 13424u);
    set32(c.r[6], c.r[6].w[0] + 5072u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0890u); set32(c.r[7], 0u + 88u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002A0890u) [[unlikely]] return; }
L_002A0890:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld16((c.r[21].w[0] + 638u));
    c.r[30].d[0] = 0ull + 0ull;
    c.r[22].d[0] = 0ull + 0ull;
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(0u));
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[29].w[0] + 232u), 0u);
    st8((c.r[29].w[0] + 208u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 208u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 192u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002A1154; } }
L_002A08C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 176u));  goto L_002A0AB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_002A08E4; } }
L_002A08D4:
    set32(c.r[3], c.r[30].w[0] << 2);
    set32(c.r[30], c.r[30].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[22], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_002A08E4:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[1].d[0] = c.r[30].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { st32((c.r[29].w[0] + 232u), 0u);  goto L_002A0900; }
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 632u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A08D4u | kUnwind; return; } goto L_002A08D4; }
    st32((c.r[29].w[0] + 232u), 0u);
    c.budget -= 1;
L_002A0900:
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[29].w[0] + 192u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 6u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_002A0944; } }
L_002A0914:
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 60u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 61u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 62u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 63u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 80u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 12;
L_002A0944:
    set32(c.r[7], ld32((c.r[21].w[0] + 644u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0914u | kUnwind; return; } goto L_002A0914; }
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0970u); set32(c.r[8], c.r[29].w[0] + 236u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A0970u) [[unlikely]] return; }
L_002A0970:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A0AAC; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A098Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A098Cu) [[unlikely]] return; }
L_002A098C:
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 188u)));
    set32(c.r[18], c.r[2].w[0] + 184u);
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    c.budget -= 9;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  goto L_002A0A64; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_002A09BC; }
    set32(c.r[16], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002A09BC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002A0A60; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_002A0A3C; }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A09E4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002A09E4u) [[unlikely]] return; }
L_002A09E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 11152u);
    set32(c.r[6], c.r[6].w[0] + 4864u);
    set32(c.r[7], 0u + 20u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0A04u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002A0A04u) [[unlikely]] return; }
L_002A0A04:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002A0A2C; } }
L_002A0A10:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0A28u); set32(c.r[4], c.r[21].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006C(c, 363u, depth + 1u); else { c.pc = 0x002B2A40u; return; } if (c.pc != 0x002A0A28u) [[unlikely]] return; }
L_002A0A28:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002A0A2C:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0A10u | kUnwind; return; } goto L_002A0A10; }
L_002A0A3C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 4864u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0A58u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A0A58u) [[unlikely]] return; }
L_002A0A58:
    st32((c.r[18].w[0]), c.r[21].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 2;
L_002A0A60:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_002A0A64:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0A88u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006C(c, 363u, depth + 1u); else { c.pc = 0x002B2A40u; return; } if (c.pc != 0x002A0A88u) [[unlikely]] return; }
L_002A0A88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 5072u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0AA4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A0AA4u) [[unlikely]] return; }
L_002A0AA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A12D0; } }
L_002A0AAC:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 176u));
    c.budget -= 1;
L_002A0AB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 236u)));  goto L_002A0AC4; }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002A1160; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 1;
L_002A0AC4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[21].w[0])));  goto L_002A0C00; }
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0AE0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A0AE0u) [[unlikely]] return; }
L_002A0AE0:
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 188u)));
    set32(c.r[18], c.r[2].w[0] + 184u);
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    c.budget -= 9;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  goto L_002A0BB8; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_002A0B10; }
    set32(c.r[16], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002A0B10:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002A0BB4; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_002A0B90; }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0B38u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002A0B38u) [[unlikely]] return; }
L_002A0B38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 11152u);
    set32(c.r[6], c.r[6].w[0] + 4864u);
    set32(c.r[7], 0u + 20u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0B58u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002A0B58u) [[unlikely]] return; }
L_002A0B58:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002A0B80; } }
L_002A0B64:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0B7Cu); set32(c.r[4], c.r[21].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006C(c, 363u, depth + 1u); else { c.pc = 0x002B2A40u; return; } if (c.pc != 0x002A0B7Cu) [[unlikely]] return; }
L_002A0B7C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002A0B80:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0B64u | kUnwind; return; } goto L_002A0B64; }
L_002A0B90:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 4864u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0BACu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A0BACu) [[unlikely]] return; }
L_002A0BAC:
    st32((c.r[18].w[0]), c.r[21].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 2;
L_002A0BB4:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_002A0BB8:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0BDCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006C(c, 363u, depth + 1u); else { c.pc = 0x002B2A40u; return; } if (c.pc != 0x002A0BDCu) [[unlikely]] return; }
L_002A0BDC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 5072u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0BF8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A0BF8u) [[unlikely]] return; }
L_002A0BF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A12D0; } }
L_002A0C00:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0C10u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A0C10u) [[unlikely]] return; }
L_002A0C10:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[21].w[0])));  goto L_002A0D50; }
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0C30u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A0C30u) [[unlikely]] return; }
L_002A0C30:
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 188u)));
    set32(c.r[18], c.r[2].w[0] + 184u);
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    c.budget -= 9;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  goto L_002A0D08; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_002A0C60; }
    set32(c.r[16], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002A0C60:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002A0D04; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_002A0CE0; }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0C88u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002A0C88u) [[unlikely]] return; }
L_002A0C88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 11152u);
    set32(c.r[6], c.r[6].w[0] + 4864u);
    set32(c.r[7], 0u + 20u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0CA8u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002A0CA8u) [[unlikely]] return; }
L_002A0CA8:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002A0CD0; } }
L_002A0CB4:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0CCCu); set32(c.r[4], c.r[21].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006C(c, 363u, depth + 1u); else { c.pc = 0x002B2A40u; return; } if (c.pc != 0x002A0CCCu) [[unlikely]] return; }
L_002A0CCC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002A0CD0:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0CB4u | kUnwind; return; } goto L_002A0CB4; }
L_002A0CE0:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 4864u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0CFCu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A0CFCu) [[unlikely]] return; }
L_002A0CFC:
    st32((c.r[18].w[0]), c.r[21].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 2;
L_002A0D04:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_002A0D08:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0D2Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006C(c, 363u, depth + 1u); else { c.pc = 0x002B2A40u; return; } if (c.pc != 0x002A0D2Cu) [[unlikely]] return; }
L_002A0D2C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 5072u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0D48u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A0D48u) [[unlikely]] return; }
L_002A0D48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A12D0; } }
L_002A0D50:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 236u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 120u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0D6Cu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A0D6Cu) [[unlikely]] return; }
L_002A0D6C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_002A0EC4; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[25], ld32((c.r[21].w[0])));  goto L_002A0D94; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0D90u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A0D90u) [[unlikely]] return; }
L_002A0D90:
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_002A0D94:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0DA4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A0DA4u) [[unlikely]] return; }
L_002A0DA4:
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 188u)));
    set32(c.r[18], c.r[2].w[0] + 184u);
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    c.budget -= 9;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  goto L_002A0E7C; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_002A0DD4; }
    set32(c.r[16], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002A0DD4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002A0E78; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_002A0E54; }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0DFCu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002A0DFCu) [[unlikely]] return; }
L_002A0DFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 11152u);
    set32(c.r[6], c.r[6].w[0] + 4864u);
    set32(c.r[7], 0u + 20u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0E1Cu); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002A0E1Cu) [[unlikely]] return; }
L_002A0E1C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002A0E44; } }
L_002A0E28:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0E40u); set32(c.r[4], c.r[21].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006C(c, 363u, depth + 1u); else { c.pc = 0x002B2A40u; return; } if (c.pc != 0x002A0E40u) [[unlikely]] return; }
L_002A0E40:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002A0E44:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0E28u | kUnwind; return; } goto L_002A0E28; }
L_002A0E54:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 4864u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0E70u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A0E70u) [[unlikely]] return; }
L_002A0E70:
    st32((c.r[18].w[0]), c.r[21].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 2;
L_002A0E78:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_002A0E7C:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0EA0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006C(c, 363u, depth + 1u); else { c.pc = 0x002B2A40u; return; } if (c.pc != 0x002A0EA0u) [[unlikely]] return; }
L_002A0EA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 5072u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0EBCu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A0EBCu) [[unlikely]] return; }
L_002A0EBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A12D0; } }
L_002A0EC4:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 60u));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0ED4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A0ED4u) [[unlikely]] return; }
L_002A0ED4:
    st32((c.r[29].w[0] + 228u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_002A1134; } }
L_002A0EE0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0EF0u); set32(c.r[5], c.r[29].w[0] + 228u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A0EF0u) [[unlikely]] return; }
L_002A0EF0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[23], c.r[23].w[0] + 1u);  goto L_002A1134; }
    set32(c.r[2], c.r[23].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 61u));
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[21].w[0])));  goto L_002A10A0; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 228u)));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 62u));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 76u));
    set32(c.r[8], ld32((c.r[16].w[0] + 80u)));
    c.r[9].d[0] = ld8((c.r[16].w[0] + 77u));
    set32(c.r[10], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0F44u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A0F44u) [[unlikely]] return; }
L_002A0F44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A109C; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[25], ld32((c.r[21].w[0])));  goto L_002A0F6C; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0F68u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A0F68u) [[unlikely]] return; }
L_002A0F68:
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_002A0F6C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0F7Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A0F7Cu) [[unlikely]] return; }
L_002A0F7C:
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 188u)));
    set32(c.r[18], c.r[2].w[0] + 184u);
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    c.budget -= 9;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  goto L_002A1054; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_002A0FAC; }
    set32(c.r[16], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002A0FAC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002A1050; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_002A102C; }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0FD4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002A0FD4u) [[unlikely]] return; }
L_002A0FD4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 11152u);
    set32(c.r[6], c.r[6].w[0] + 4864u);
    set32(c.r[7], 0u + 20u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0FF4u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002A0FF4u) [[unlikely]] return; }
L_002A0FF4:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002A101C; } }
L_002A1000:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1018u); set32(c.r[4], c.r[21].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006C(c, 363u, depth + 1u); else { c.pc = 0x002B2A40u; return; } if (c.pc != 0x002A1018u) [[unlikely]] return; }
L_002A1018:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002A101C:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1000u | kUnwind; return; } goto L_002A1000; }
L_002A102C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 4864u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1048u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A1048u) [[unlikely]] return; }
L_002A1048:
    st32((c.r[18].w[0]), c.r[21].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 2;
L_002A1050:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_002A1054:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1078u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006C(c, 363u, depth + 1u); else { c.pc = 0x002B2A40u; return; } if (c.pc != 0x002A1078u) [[unlikely]] return; }
L_002A1078:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 5072u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1094u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A1094u) [[unlikely]] return; }
L_002A1094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A12D0; } }
L_002A109C:
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_002A10A0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[29].w[0] + 228u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 20u);
    set32(c.r[7], c.r[16].w[0] + 40u);
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    set32(c.r[8], c.r[16].w[0] + 64u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A10C4u); c.r[9].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A10C4u) [[unlikely]] return; }
L_002A10C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A1130; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002A10F0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A10F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A10F0u) [[unlikely]] return; }
L_002A10F0:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002A1144; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 228u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[21].w[0] + 644u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], c.r[29].w[0] + 236u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[22].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1118u); set32(c.r[10], c.r[29].w[0] + 232u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A1118u) [[unlikely]] return; }
L_002A1118:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A1144; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 192u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002A1144; } }
L_002A1130:
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 1;
L_002A1134:
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    c.r[2].d[0] = c.r[23].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0EE0u | kUnwind; return; } goto L_002A0EE0; }
L_002A1144:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 208u));  goto L_002A1158; }
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[29].w[0] + 208u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002A1154:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 208u));
    c.budget -= 1;
L_002A1158:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 192u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A08C4u | kUnwind; return; } goto L_002A08C4; }
L_002A1160:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 5072u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A117Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A117Cu) [[unlikely]] return; }
L_002A117C:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_002A129C; }
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1198u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A1198u) [[unlikely]] return; }
L_002A1198:
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 188u)));
    set32(c.r[17], c.r[2].w[0] + 184u);
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    c.budget -= 9;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_002A1270; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_002A11C8; }
    set32(c.r[16], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002A11C8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002A126C; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_002A1248; }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A11F0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002A11F0u) [[unlikely]] return; }
L_002A11F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 11152u);
    set32(c.r[6], c.r[6].w[0] + 4864u);
    set32(c.r[7], 0u + 20u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1210u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002A1210u) [[unlikely]] return; }
L_002A1210:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002A1238; } }
L_002A121C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1234u); set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006C(c, 363u, depth + 1u); else { c.pc = 0x002B2A40u; return; } if (c.pc != 0x002A1234u) [[unlikely]] return; }
L_002A1234:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002A1238:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A121Cu | kUnwind; return; } goto L_002A121C; }
L_002A1248:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 4864u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1264u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A1264u) [[unlikely]] return; }
L_002A1264:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 2;
L_002A126C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_002A1270:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1294u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006C(c, 363u, depth + 1u); else { c.pc = 0x002B2A40u; return; } if (c.pc != 0x002A1294u) [[unlikely]] return; }
L_002A1294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A12D0; } }
L_002A129C:
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A12A8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A12A8u) [[unlikely]] return; }
L_002A12A8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_002A12C4; }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A12C0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A12C0u) [[unlikely]] return; }
L_002A12C0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_002A12C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A12CCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 177u, depth + 1u); else { c.pc = 0x002A16B0u; return; } if (c.pc != 0x002A12CCu) [[unlikely]] return; }
L_002A12CC:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002A12D0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_002A1300:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002A13A4; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_002A138C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A1388; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1358u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A1358u) [[unlikely]] return; }
L_002A1358:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1368u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A1368u) [[unlikely]] return; }
L_002A1368:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A1388; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1388u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002A1388u) [[unlikely]] return; }
L_002A1388:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_002A138C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_002A13A8; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A13A4u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002A13A4u) [[unlikely]] return; }
L_002A13A4:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002A13A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A13D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A1588; } }
    set32(c.r[2], c.r[17].w[0] + 64u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 40u);  goto L_002A1424; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1420; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1420u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A1420u) [[unlikely]] return; }
L_002A1420:
    set32(c.r[2], c.r[17].w[0] + 40u);
    c.budget -= 1;
L_002A1424:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 20u);  goto L_002A1494; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1490; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A1490; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1460u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A1460u) [[unlikely]] return; }
L_002A1460:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1470u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A1470u) [[unlikely]] return; }
L_002A1470:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A1490; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1490u); set32(c.r[5], c.r[17].w[0] + 40u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002A1490u) [[unlikely]] return; }
L_002A1490:
    set32(c.r[2], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_002A1494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1500; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1500; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A1500; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A14D0u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A14D0u) [[unlikely]] return; }
L_002A14D0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A14E0u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A14E0u) [[unlikely]] return; }
L_002A14E0:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A1500; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1500u); set32(c.r[5], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002A1500u) [[unlikely]] return; }
L_002A1500:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002A1570; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A156C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A156C; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A153Cu); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A153Cu) [[unlikely]] return; }
L_002A153C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A154Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A154Cu) [[unlikely]] return; }
L_002A154C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A156C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A156Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002A156Cu) [[unlikely]] return; }
L_002A156C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002A1570:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002A158C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1588u); set32(c.r[5], 0u + 88u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002A1588u) [[unlikely]] return; }
L_002A1588:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A158C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A15B0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A15D8u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_006A(c, 87u, depth + 1u); else { c.pc = 0x002A8D00u; return; } if (c.pc != 0x002A15D8u) [[unlikely]] return; }
L_002A15D8:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002A1600; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A15FCu); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A15FCu) [[unlikely]] return; }
L_002A15FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002A1600:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_002A1610:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A168C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_002A1674; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1644u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A1644u) [[unlikely]] return; }
L_002A1644:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1654u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A1654u) [[unlikely]] return; }
L_002A1654:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A1670; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1670u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A1670u) [[unlikely]] return; }
L_002A1670:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_002A1674:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002A1690; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A168Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002A168Cu) [[unlikely]] return; }
L_002A168C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002A1690:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A16B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A16DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A16DCu) [[unlikely]] return; }
L_002A16DC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_002A16F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A1734; } }
L_002A16F0:
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A16FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A16FCu) [[unlikely]] return; }
L_002A16FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 19840u);  if (t) { goto L_002A1718; } }
L_002A1708:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_002A1718; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002A1724; } }
L_002A1718:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1708u | kUnwind; return; } goto L_002A1708; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A1724:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002A1734; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1734; } }
L_002A1734:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[5], c.r[16].w[0] + 4u);
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1748u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A1748u) [[unlikely]] return; }
L_002A1748:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 76u), c.r[17].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; st8((c.r[28].w[0] - 28660u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002A1778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1764u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A1764u) [[unlikely]] return; }
L_002A1764:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1778u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A1778u) [[unlikely]] return; }
L_002A1778:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 8u)));  goto L_002A17AC; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_002A17A0; }
    set32(c.r[5], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002A17A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A17A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 195u, depth + 1u); else { c.pc = 0x002A18E0u; return; } if (c.pc != 0x002A17A8u) [[unlikely]] return; }
L_002A17A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_002A17AC:
    set32(c.r[5], c.r[29].w[0] + 76u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A17C8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0068(c, 189u, depth + 1u); else { c.pc = 0x002A1830u; return; } if (c.pc != 0x002A17C8u) [[unlikely]] return; }
L_002A17C8:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st8((c.r[28].w[0] - 28660u), static_cast<std::uint8_t>(0u));  goto L_002A1814; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A17DCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A17DCu) [[unlikely]] return; }
L_002A17DC:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A17F0u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A17F0u) [[unlikely]] return; }
L_002A17F0:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A1810; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1810u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A1810u) [[unlikely]] return; }
L_002A1810:
    st8((c.r[28].w[0] - 28660u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002A1814:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A1830:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A18B8; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0])));  goto L_002A1898; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1868u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A1868u) [[unlikely]] return; }
L_002A1868:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1878u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A1878u) [[unlikely]] return; }
L_002A1878:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A1894; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1894u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A1894u) [[unlikely]] return; }
L_002A1894:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_002A1898:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_002A18B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A18A8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A18A8u) [[unlikely]] return; }
L_002A18A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A18B8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A18B8u) [[unlikely]] return; }
L_002A18B8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A18E0:
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
    { const bool t = c.r[20].d[0] == c.r[3].d[0]; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A1A10; } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_002A19EC; }
    set32(c.r[2], c.r[20].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A192Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002A192Cu) [[unlikely]] return; }
L_002A192C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 6720u);
    set32(c.r[6], c.r[6].w[0] + 5648u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A194Cu); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002A194Cu) [[unlikely]] return; }
L_002A194C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002A19DC; } }
L_002A1958:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[22], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.budget -= 7;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002A19DC; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);  goto L_002A19B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1984u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A1984u) [[unlikely]] return; }
L_002A1984:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1994u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A1994u) [[unlikely]] return; }
L_002A1994:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A19B0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A19B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A19B0u) [[unlikely]] return; }
L_002A19B0:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_002A19B4:
    set32(c.r[16], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[2].w[0]), c.r[16].w[0]);  if (t) { goto L_002A19D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A19C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A19C8u) [[unlikely]] return; }
L_002A19C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A19D8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A19D8u) [[unlikely]] return; }
L_002A19D8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002A19DC:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1958u | kUnwind; return; } goto L_002A1958; }
L_002A19EC:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 5648u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1A08u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A1A08u) [[unlikely]] return; }
L_002A1A08:
    st32((c.r[21].w[0]), c.r[19].w[0]);
    st32((c.r[21].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 2;
L_002A1A10:
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
L_002A1A40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_002A1A78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1A68u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A1A68u) [[unlikely]] return; }
L_002A1A68:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1A78u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A1A78u) [[unlikely]] return; }
L_002A1A78:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A1A90:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002A1A98:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1A98u | kUnwind; return; } goto L_002A1A98; } }
    set32(c.r[2], 0u + 37u);
    mmi::divu(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A1AD0:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002A1AD8:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1AD8u | kUnwind; return; } goto L_002A1AD8; } }
    set32(c.r[2], 0u + 37u);
    mmi::divu(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A1B10:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
L_002A1B38:
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002A1BC8; } }
L_002A1B4C:
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.budget -= 5;
    if (c.r[18].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_002A1BC8; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_002A1BA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1B70u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A1B70u) [[unlikely]] return; }
L_002A1B70:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1B80u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A1B80u) [[unlikely]] return; }
L_002A1B80:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A1B9C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1B9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A1B9Cu) [[unlikely]] return; }
L_002A1B9C:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_002A1BA0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A1BC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1BB4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A1BB4u) [[unlikely]] return; }
L_002A1BB4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1BC4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A1BC4u) [[unlikely]] return; }
L_002A1BC4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002A1BC8:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1B4Cu | kUnwind; return; } goto L_002A1B4C; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1B38u | kUnwind; return; } goto L_002A1B38; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 2;
L_002A1BF0:
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002A1C14; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1C10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A1C10u) [[unlikely]] return; }
L_002A1C10:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002A1C14:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1BF0u | kUnwind; return; } goto L_002A1BF0; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A1C50:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1C88u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_006C(c, 372u, depth + 1u); else { c.pc = 0x002B2B90u; return; } if (c.pc != 0x002A1C88u) [[unlikely]] return; }
L_002A1C88:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1CACu); set32(c.r[9], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A1CACu) [[unlikely]] return; }
L_002A1CAC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_002A1D20; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A1D94; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1CE4u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A1CE4u) [[unlikely]] return; }
L_002A1CE4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1CF4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A1CF4u) [[unlikely]] return; }
L_002A1CF4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A1D14; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1D14u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002A1D14u) [[unlikely]] return; }
L_002A1D14:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1D94; } }
L_002A1D20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1D30u); set32(c.r[5], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A1D30u) [[unlikely]] return; }
L_002A1D30:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_002A1D94; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1D60u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A1D60u) [[unlikely]] return; }
L_002A1D60:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1D70u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A1D70u) [[unlikely]] return; }
L_002A1D70:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A1D90; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1D90u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002A1D90u) [[unlikely]] return; }
L_002A1D90:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002A1D94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002A1DC0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1DF8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_006C(c, 372u, depth + 1u); else { c.pc = 0x002B2B90u; return; } if (c.pc != 0x002A1DF8u) [[unlikely]] return; }
L_002A1DF8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1E1Cu); set32(c.r[9], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A1E1Cu) [[unlikely]] return; }
L_002A1E1C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_002A1E90; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A1F04; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1E54u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A1E54u) [[unlikely]] return; }
L_002A1E54:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1E64u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A1E64u) [[unlikely]] return; }
L_002A1E64:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A1E84; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1E84u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002A1E84u) [[unlikely]] return; }
L_002A1E84:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1F04; } }
L_002A1E90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1EA0u); set32(c.r[5], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A1EA0u) [[unlikely]] return; }
L_002A1EA0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_002A1F04; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1ED0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A1ED0u) [[unlikely]] return; }
L_002A1ED0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1EE0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A1EE0u) [[unlikely]] return; }
L_002A1EE0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A1F00; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1F00u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002A1F00u) [[unlikely]] return; }
L_002A1F00:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002A1F04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002A1F30:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 15;
    { const bool t = c.r[19].d[0] != 0ull; c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_002A1F74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A20EC; } }
L_002A1F74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1F7Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_006C(c, 372u, depth + 1u); else { c.pc = 0x002B2B90u; return; } if (c.pc != 0x002A1F7Cu) [[unlikely]] return; }
L_002A1F7C:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1FA0u); set32(c.r[9], c.r[29].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A1FA0u) [[unlikely]] return; }
L_002A1FA0:
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1FB0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A1FB0u) [[unlikely]] return; }
L_002A1FB0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_002A1FC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A2008; } }
L_002A1FC4:
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1FD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A1FD0u) [[unlikely]] return; }
L_002A1FD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 19840u);  if (t) { goto L_002A1FEC; } }
L_002A1FDC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_002A1FEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002A1FF8; } }
L_002A1FEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1FDCu | kUnwind; return; } goto L_002A1FDC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A1FF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002A2008; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A2008; } }
L_002A2008:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A208C; } }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A201Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_006C(c, 370u, depth + 1u); else { c.pc = 0x002B2B40u; return; } if (c.pc != 0x002A201Cu) [[unlikely]] return; }
L_002A201C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A208C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002A20EC; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2050u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A2050u) [[unlikely]] return; }
L_002A2050:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2060u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A2060u) [[unlikely]] return; }
L_002A2060:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A2080; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2080u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002A2080u) [[unlikely]] return; }
L_002A2080:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A20EC; } }
L_002A208C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A20EC; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A20B8u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A20B8u) [[unlikely]] return; }
L_002A20B8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A20C8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A20C8u) [[unlikely]] return; }
L_002A20C8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A20E8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A20E8u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002A20E8u) [[unlikely]] return; }
L_002A20E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A20EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002A2110:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[2].w[0] + 20312u)));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 14;
L_002A2148:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2158u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2158u) [[unlikely]] return; }
L_002A2158:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002A21EC; }
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002A2174; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002A217C; } }
L_002A2174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A217Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002A217Cu) [[unlikely]] return; }
L_002A217C:
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2194u); set32(c.r[5], c.r[29].w[0] + 124u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2194u) [[unlikely]] return; }
L_002A2194:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_002A21E8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A21B8u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A21B8u) [[unlikely]] return; }
L_002A21B8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A21C8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A21C8u) [[unlikely]] return; }
L_002A21C8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A21E8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A21E8u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002A21E8u) [[unlikely]] return; }
L_002A21E8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002A21EC:
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[25], ld32((c.r[20].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2148u | kUnwind; return; } goto L_002A2148; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002A2220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 7;
L_002A223C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A224Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A224Cu) [[unlikely]] return; }
L_002A224C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002A226C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2268u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2268u) [[unlikely]] return; }
L_002A2268:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002A226C:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A223Cu | kUnwind; return; } goto L_002A223C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A2290:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 24u)));  c.pc = t; return; }
L_002A22A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[3], c.r[6].w[0] << 2);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[22], c.r[3].w[0] + 24u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 18;
    if (c.r[3].d[0] == c.r[20].d[0]) { set32(c.r[16], ld32((c.r[22].w[0])));  goto L_002A239C; }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A22EC:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002A2378; } }
L_002A2300:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[23], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[23].w[0])));
    c.budget -= 5;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002A2378; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002A2354; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2324u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A2324u) [[unlikely]] return; }
L_002A2324:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2334u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A2334u) [[unlikely]] return; }
L_002A2334:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A2350; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2350u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2350u) [[unlikely]] return; }
L_002A2350:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A2354:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[23].w[0]), 0u);  if (t) { goto L_002A2374; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2364u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A2364u) [[unlikely]] return; }
L_002A2364:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2374u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A2374u) [[unlikely]] return; }
L_002A2374:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002A2378:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2300u | kUnwind; return; } goto L_002A2300; }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A22ECu | kUnwind; return; } goto L_002A22EC; } }
    set32(c.r[16], ld32((c.r[22].w[0])));
    c.budget -= 1;
L_002A239C:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[20].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_002A2408; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[22].w[0]), c.r[20].w[0]);  goto L_002A23E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A23B4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A23B4u) [[unlikely]] return; }
L_002A23B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A23C4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A23C4u) [[unlikely]] return; }
L_002A23C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A23E0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A23E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A23E0u) [[unlikely]] return; }
L_002A23E0:
    st32((c.r[22].w[0]), c.r[20].w[0]);
    c.budget -= 1;
L_002A23E4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002A2404; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A23F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A23F4u) [[unlikely]] return; }
L_002A23F4:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2404u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A2404u) [[unlikely]] return; }
L_002A2404:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_002A2408:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002A2430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A247C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 19748u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A2468; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002A2474; } }
L_002A2468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2470u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002A2470u) [[unlikely]] return; }
L_002A2470:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002A2474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002A26A8; } }
L_002A247C:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 6u);  goto L_002A24BC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 19754u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A24A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002A24B4; } }
L_002A24A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A24B0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002A24B0u) [[unlikely]] return; }
L_002A24B0:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002A24B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A26A4; } }
L_002A24BC:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 10u);  goto L_002A24F8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 19761u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A24E4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002A24F0; } }
L_002A24E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A24ECu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002A24ECu) [[unlikely]] return; }
L_002A24EC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002A24F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A26A4; } }
L_002A24F8:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 7u);  goto L_002A2534; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 19768u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A2520; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002A252C; } }
L_002A2520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2528u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002A2528u) [[unlikely]] return; }
L_002A2528:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002A252C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A26A4; } }
L_002A2534:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 8u);  goto L_002A2570; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 19768u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A255C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002A2568; } }
L_002A255C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2564u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002A2564u) [[unlikely]] return; }
L_002A2564:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002A2568:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A26A4; } }
L_002A2570:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 9u);  goto L_002A25AC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 19775u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A2598; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002A25A4; } }
L_002A2598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A25A0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002A25A0u) [[unlikely]] return; }
L_002A25A0:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002A25A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A26A4; } }
L_002A25AC:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 11u);  goto L_002A25E8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 19784u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A25D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002A25E0; } }
L_002A25D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A25DCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002A25DCu) [[unlikely]] return; }
L_002A25DC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002A25E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A26A4; } }
L_002A25E8:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 3u);  goto L_002A2624; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 19740u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A2610; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002A261C; } }
L_002A2610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2618u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002A2618u) [[unlikely]] return; }
L_002A2618:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002A261C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A26A4; } }
L_002A2624:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_002A2660; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 19793u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A264C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002A2658; } }
L_002A264C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2654u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002A2654u) [[unlikely]] return; }
L_002A2654:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002A2658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A26A4; } }
L_002A2660:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002A269C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 19797u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A2688; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002A2694; } }
L_002A2688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2690u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002A2690u) [[unlikely]] return; }
L_002A2690:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002A2694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A26A4; } }
L_002A269C:
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_002A26A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002A26A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A26C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A26E0u); set32(c.r[5], c.r[5].w[0] + 19748u);  if (depth < kMaxDepth) unit_0047(c, 323u, depth + 1u); else { c.pc = 0x0021EE60u; return; } if (c.pc != 0x002A26E0u) [[unlikely]] return; }
L_002A26E0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002A26F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_002A27EC; } }
L_002A26F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A26FCu); set32(c.r[5], c.r[5].w[0] + 19754u);  if (depth < kMaxDepth) unit_0047(c, 323u, depth + 1u); else { c.pc = 0x0021EE60u; return; } if (c.pc != 0x002A26FCu) [[unlikely]] return; }
L_002A26FC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002A270C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_002A27EC; } }
L_002A270C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2718u); set32(c.r[5], c.r[5].w[0] + 19761u);  if (depth < kMaxDepth) unit_0047(c, 323u, depth + 1u); else { c.pc = 0x0021EE60u; return; } if (c.pc != 0x002A2718u) [[unlikely]] return; }
L_002A2718:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002A2728; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_002A27EC; } }
L_002A2728:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2734u); set32(c.r[5], c.r[5].w[0] + 19768u);  if (depth < kMaxDepth) unit_0047(c, 323u, depth + 1u); else { c.pc = 0x0021EE60u; return; } if (c.pc != 0x002A2734u) [[unlikely]] return; }
L_002A2734:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002A2744; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_002A27EC; } }
L_002A2744:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2750u); set32(c.r[5], c.r[5].w[0] + 19802u);  if (depth < kMaxDepth) unit_0047(c, 323u, depth + 1u); else { c.pc = 0x0021EE60u; return; } if (c.pc != 0x002A2750u) [[unlikely]] return; }
L_002A2750:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002A2760; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_002A27EC; } }
L_002A2760:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A276Cu); set32(c.r[5], c.r[5].w[0] + 19784u);  if (depth < kMaxDepth) unit_0047(c, 323u, depth + 1u); else { c.pc = 0x0021EE60u; return; } if (c.pc != 0x002A276Cu) [[unlikely]] return; }
L_002A276C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002A277C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_002A27EC; } }
L_002A277C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2788u); set32(c.r[5], c.r[5].w[0] + 19740u);  if (depth < kMaxDepth) unit_0047(c, 323u, depth + 1u); else { c.pc = 0x0021EE60u; return; } if (c.pc != 0x002A2788u) [[unlikely]] return; }
L_002A2788:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002A2798; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 11u);  if (t) { goto L_002A27EC; } }
L_002A2798:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A27A4u); set32(c.r[5], c.r[5].w[0] + 19793u);  if (depth < kMaxDepth) unit_0047(c, 323u, depth + 1u); else { c.pc = 0x0021EE60u; return; } if (c.pc != 0x002A27A4u) [[unlikely]] return; }
L_002A27A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002A27B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002A27EC; } }
L_002A27B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A27C0u); set32(c.r[5], c.r[5].w[0] + 19811u);  if (depth < kMaxDepth) unit_0047(c, 323u, depth + 1u); else { c.pc = 0x0021EE60u; return; } if (c.pc != 0x002A27C0u) [[unlikely]] return; }
L_002A27C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002A27D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002A27EC; } }
L_002A27D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A27DCu); set32(c.r[5], c.r[5].w[0] + 19797u);  if (depth < kMaxDepth) unit_0047(c, 323u, depth + 1u); else { c.pc = 0x0021EE60u; return; } if (c.pc != 0x002A27DCu) [[unlikely]] return; }
L_002A27DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A27EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A27EC; } }
L_002A27EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A2800:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { const bool t = c.r[21].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002A2A8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 9616u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[20].w[0] << 2);
    c.budget -= 5;
L_002A2844:
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[19].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_002A2924; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002A2918; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002A28E0; } }
L_002A2864:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 5;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002A28E0; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_002A28B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2888u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A2888u) [[unlikely]] return; }
L_002A2888:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2898u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A2898u) [[unlikely]] return; }
L_002A2898:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A28B4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A28B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A28B4u) [[unlikely]] return; }
L_002A28B4:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_002A28B8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A28DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A28CCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A28CCu) [[unlikely]] return; }
L_002A28CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A28DCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A28DCu) [[unlikely]] return; }
L_002A28DC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002A28E0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2864u | kUnwind; return; } goto L_002A2864; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[19].w[0] + 8u), 0u);  if (t) { goto L_002A2914; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 5648u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2914u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A2914u) [[unlikely]] return; }
L_002A2914:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002A2918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2920u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002A2920u) [[unlikely]] return; }
L_002A2920:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002A2924:
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2844u | kUnwind; return; } goto L_002A2844; }
    set32(c.r[3], c.r[21].w[0] + 628u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A2964; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 9784u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[21].w[0] + 628u), c.r[2].w[0]);  if (t) { goto L_002A2964; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 9768u);
    st32((c.r[21].w[0] + 628u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 632u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2964u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002A2964u) [[unlikely]] return; }
L_002A2964:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    set32(c.r[4], c.r[21].w[0] + 184u);
    set32(c.r[5], c.r[5].w[0] + 11264u);
    set32(c.r[6], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A297Cu); set32(c.r[7], 0u + 37u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x002A297Cu) [[unlikely]] return; }
L_002A297C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    set32(c.r[4], c.r[21].w[0] + 24u);
    set32(c.r[5], c.r[5].w[0] + 11104u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2994u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x002A2994u) [[unlikely]] return; }
L_002A2994:
    set32(c.r[2], c.r[21].w[0] + 12u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_002A2A68; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A2A64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002A2A2C; } }
L_002A29B0:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 5;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002A2A2C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_002A2A04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A29D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A29D4u) [[unlikely]] return; }
L_002A29D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A29E4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A29E4u) [[unlikely]] return; }
L_002A29E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A2A00; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2A00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2A00u) [[unlikely]] return; }
L_002A2A00:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_002A2A04:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A2A28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2A18u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A2A18u) [[unlikely]] return; }
L_002A2A18:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2A28u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A2A28u) [[unlikely]] return; }
L_002A2A28:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002A2A2C:
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A29B0u | kUnwind; return; } goto L_002A29B0; }
    set32(c.r[2], c.r[21].w[0] + 12u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[21].w[0] + 20u), 0u);  if (t) { goto L_002A2A64; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 10944u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2A64u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A2A64u) [[unlikely]] return; }
L_002A2A64:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_002A2A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2A70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 184u, depth + 1u); else { c.pc = 0x002ACFE0u; return; } if (c.pc != 0x002A2A70u) [[unlikely]] return; }
L_002A2A70:
    c.r[2].d[0] = c.r[22].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[21].d[0] + 0ull;  goto L_002A2A90; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2A8Cu); set32(c.r[5], 0u + 656u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002A2A8Cu) [[unlikely]] return; }
L_002A2A8C:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_002A2A90:
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
L_002A2AC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A2B3C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_002A2B24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2AF4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A2AF4u) [[unlikely]] return; }
L_002A2AF4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2B04u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A2B04u) [[unlikely]] return; }
L_002A2B04:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A2B20; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2B20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2B20u) [[unlikely]] return; }
L_002A2B20:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_002A2B24:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002A2B40; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2B3Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002A2B3Cu) [[unlikely]] return; }
L_002A2B3C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002A2B40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A2B60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A2BDC; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_002A2BC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2B94u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A2B94u) [[unlikely]] return; }
L_002A2B94:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2BA4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A2BA4u) [[unlikely]] return; }
L_002A2BA4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A2BC0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2BC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2BC0u) [[unlikely]] return; }
L_002A2BC0:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_002A2BC4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002A2BE0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2BDCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002A2BDCu) [[unlikely]] return; }
L_002A2BDC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002A2BE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A2C00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A2C5C; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002A2C44; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 4864u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2C40u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A2C40u) [[unlikely]] return; }
L_002A2C40:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002A2C44:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002A2C60; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2C5Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002A2C5Cu) [[unlikely]] return; }
L_002A2C5C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A2C60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A2C80:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2CC4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006B(c, 194u, depth + 1u); else { c.pc = 0x002AD1C0u; return; } if (c.pc != 0x002A2CC4u) [[unlikely]] return; }
L_002A2CC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    set32(c.r[2], c.r[2].w[0] + 9616u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 24u);
    st32((c.r[20].w[0] + 12u), 0u);
    set32(c.r[5], c.r[5].w[0] + 12816u);
    st32((c.r[20].w[0] + 16u), 0u);
    set32(c.r[6], c.r[6].w[0] + 11104u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[8], 0u + 3u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2CFCu); st32((c.r[20].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x002A2CFCu) [[unlikely]] return; }
L_002A2CFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    set32(c.r[4], c.r[20].w[0] + 184u);
    set32(c.r[5], c.r[5].w[0] + 12800u);
    set32(c.r[6], c.r[6].w[0] + 11264u);
    set32(c.r[7], 0u + 12u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2D1Cu); set32(c.r[8], 0u + 37u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x002A2D1Cu) [[unlikely]] return; }
L_002A2D1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 9768u);
    st32((c.r[20].w[0] + 628u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[20].w[0] + 636u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 642u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[20].w[0] + 638u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 640u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 636u));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[16], c.r[20].w[0] + 628u);  if (t) { goto L_002A2D5C; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2D54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002A2D54u) [[unlikely]] return; }
L_002A2D54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002A2D60; } }
L_002A2D5C:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_002A2D60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 10u);
    set32(c.r[3], c.r[3].w[0] + 9784u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[20].w[0] + 644u), c.r[2].w[0]);
    st16((c.r[20].w[0] + 648u), static_cast<std::uint16_t>(c.r[18].w[0]));
    st16((c.r[20].w[0] + 650u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st16((c.r[20].w[0] + 652u), static_cast<std::uint16_t>(c.r[21].w[0]));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 140u), c.r[19].w[0]);  if (t) { goto L_002A2DA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2D90u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A2D90u) [[unlikely]] return; }
L_002A2D90:
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2DA4u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A2DA4u) [[unlikely]] return; }
L_002A2DA4:
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 20u)));  goto L_002A2DCC; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_002A2DC0; }
    set32(c.r[5], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002A2DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2DC8u); set32(c.r[4], c.r[20].w[0] + 12u);  if (depth < kMaxDepth) unit_0068(c, 367u, depth + 1u); else { c.pc = 0x002A30A0u; return; } if (c.pc != 0x002A2DC8u) [[unlikely]] return; }
L_002A2DC8:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 1;
L_002A2DCC:
    set32(c.r[5], c.r[29].w[0] + 140u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2DE8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0068(c, 361u, depth + 1u); else { c.pc = 0x002A2FF0u; return; } if (c.pc != 0x002A2DE8u) [[unlikely]] return; }
L_002A2DE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_002A2E34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2DFCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A2DFCu) [[unlikely]] return; }
L_002A2DFC:
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2E10u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A2E10u) [[unlikely]] return; }
L_002A2E10:
    set32(c.r[4], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A2E30; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2E30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2E30u) [[unlikely]] return; }
L_002A2E30:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A2E34:
    set32(c.r[4], 0u + 12u);
    c.budget -= 1;
L_002A2E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2E40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002A2E40u) [[unlikely]] return; }
L_002A2E40:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  goto L_002A2E98; }
    set32(c.r[17], ld32((c.r[28].w[0] - 30652u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_002A2E8C; }
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2E68u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002A2E68u) [[unlikely]] return; }
L_002A2E68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 6720u);
    set32(c.r[6], c.r[6].w[0] + 5648u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2E88u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002A2E88u) [[unlikely]] return; }
L_002A2E88:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002A2E8C:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 3;
L_002A2E98:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[2].w[0] + 36u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2E38u | kUnwind; return; } goto L_002A2E38; }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 27612u)));  if (t) { goto L_002A2ED0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_002A2ED4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 308u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2ED0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2ED0u) [[unlikely]] return; }
L_002A2ED0:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002A2ED4:
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
L_002A2F00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A2F60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 9784u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002A2F44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 9768u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2F44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002A2F44u) [[unlikely]] return; }
L_002A2F44:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002A2F64; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2F60u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002A2F60u) [[unlikely]] return; }
L_002A2F60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A2F64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A2F80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A2FD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 9768u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2FB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002A2FB4u) [[unlikely]] return; }
L_002A2FB4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002A2FD4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2FD0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002A2FD0u) [[unlikely]] return; }
L_002A2FD0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A2FD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A2FF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A3078; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0])));  goto L_002A3058; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3028u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A3028u) [[unlikely]] return; }
L_002A3028:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3038u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A3038u) [[unlikely]] return; }
L_002A3038:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A3054; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3054u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A3054u) [[unlikely]] return; }
L_002A3054:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_002A3058:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_002A3078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3068u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A3068u) [[unlikely]] return; }
L_002A3068:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3078u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A3078u) [[unlikely]] return; }
L_002A3078:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A30A0:
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
    { const bool t = c.r[20].d[0] == c.r[3].d[0]; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A31D0; } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_002A31AC; }
    set32(c.r[2], c.r[20].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A30ECu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002A30ECu) [[unlikely]] return; }
L_002A30EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12832u);
    set32(c.r[6], c.r[6].w[0] + 10944u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A310Cu); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002A310Cu) [[unlikely]] return; }
L_002A310C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002A319C; } }
L_002A3118:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[22], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.budget -= 7;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002A319C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);  goto L_002A3174; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3144u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A3144u) [[unlikely]] return; }
L_002A3144:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3154u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A3154u) [[unlikely]] return; }
L_002A3154:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A3170; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3170u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A3170u) [[unlikely]] return; }
L_002A3170:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_002A3174:
    set32(c.r[16], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[2].w[0]), c.r[16].w[0]);  if (t) { goto L_002A3198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3188u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A3188u) [[unlikely]] return; }
L_002A3188:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3198u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A3198u) [[unlikely]] return; }
L_002A3198:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002A319C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3118u | kUnwind; return; } goto L_002A3118; }
L_002A31AC:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 10944u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A31C8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A31C8u) [[unlikely]] return; }
L_002A31C8:
    st32((c.r[21].w[0]), c.r[19].w[0]);
    st32((c.r[21].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 2;
L_002A31D0:
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
L_002A3200:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  goto L_002A35C0; }
L_002A3210:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  goto L_002A3520; }
L_002A3220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_002A3258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3248u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A3248u) [[unlikely]] return; }
L_002A3248:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3258u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A3258u) [[unlikely]] return; }
L_002A3258:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A3270:
    set32(c.r[2], 0u + 3u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_002A3290:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A32BCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 80u, depth + 1u); else { c.pc = 0x002A8C00u; return; } if (c.pc != 0x002A32BCu) [[unlikely]] return; }
L_002A32BC:
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A32C8u); set32(c.r[5], c.r[20].w[0] + 20u);  if (depth < kMaxDepth) unit_006A(c, 80u, depth + 1u); else { c.pc = 0x002A8C00u; return; } if (c.pc != 0x002A32C8u) [[unlikely]] return; }
L_002A32C8:
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A32D4u); set32(c.r[5], c.r[20].w[0] + 40u);  if (depth < kMaxDepth) unit_006A(c, 80u, depth + 1u); else { c.pc = 0x002A8C00u; return; } if (c.pc != 0x002A32D4u) [[unlikely]] return; }
L_002A32D4:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 60u));
    c.r[19].d[0] = 0ull + 0ull;
    st8((c.r[21].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 61u));
    st8((c.r[21].w[0] + 61u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 62u));
    st8((c.r[21].w[0] + 62u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 63u));
    st8((c.r[21].w[0] + 63u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    st32((c.r[21].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    st32((c.r[21].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 76u));
    st8((c.r[21].w[0] + 76u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 77u));
    st8((c.r[21].w[0] + 77u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 72u), 0u);  if (t) { goto L_002A3434; } }
L_002A3320:
    set32(c.r[4], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 68u)));
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[21].w[0] + 72u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_002A33F8; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_002A3348; }
    set32(c.r[16], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002A3348:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 72u)));  goto L_002A33FC; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_002A33D8; }
    set32(c.r[2], c.r[16].w[0] << 1);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3370u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002A3370u) [[unlikely]] return; }
L_002A3370:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12912u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A338Cu); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002A338Cu) [[unlikely]] return; }
L_002A338C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A33C8; } }
L_002A3398:
    set32(c.r[2], ld32((c.r[21].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 12;
L_002A33C8:
    set32(c.r[2], ld32((c.r[21].w[0] + 72u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3398u | kUnwind; return; } goto L_002A3398; }
L_002A33D8:
    set32(c.r[4], ld32((c.r[21].w[0] + 64u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A33F0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A33F0u) [[unlikely]] return; }
L_002A33F0:
    st32((c.r[21].w[0] + 64u), c.r[18].w[0]);
    st32((c.r[21].w[0] + 68u), c.r[16].w[0]);
    c.budget -= 2;
L_002A33F8:
    set32(c.r[4], ld32((c.r[21].w[0] + 72u)));
    c.budget -= 1;
L_002A33FC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[21].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[21].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 14;
L_002A3434:
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3320u | kUnwind; return; } goto L_002A3320; }
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A3470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3484u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 89u, depth + 1u); else { c.pc = 0x002A8D40u; return; } if (c.pc != 0x002A3484u) [[unlikely]] return; }
L_002A3484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A348Cu); set32(c.r[4], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_006A(c, 89u, depth + 1u); else { c.pc = 0x002A8D40u; return; } if (c.pc != 0x002A348Cu) [[unlikely]] return; }
L_002A348C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3494u); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_006A(c, 89u, depth + 1u); else { c.pc = 0x002A8D40u; return; } if (c.pc != 0x002A3494u) [[unlikely]] return; }
L_002A3494:
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 6u);
    st8((c.r[16].w[0] + 61u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 7u);
    st8((c.r[16].w[0] + 62u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 63u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st8((c.r[16].w[0] + 76u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 77u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 80u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A34E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[28].w[0] - 27700u));  c.pc = t; return; }
L_002A34F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[28].w[0] - 30656u));  c.pc = t; return; }
L_002A3500:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[28].w[0] - 30660u));  c.pc = t; return; }
L_002A3510:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[28].w[0] - 30664u));  c.pc = t; return; }
L_002A3520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_002A3558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3548u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A3548u) [[unlikely]] return; }
L_002A3548:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3558u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A3558u) [[unlikely]] return; }
L_002A3558:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A3570:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_002A35A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3598u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A3598u) [[unlikely]] return; }
L_002A3598:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A35A8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A35A8u) [[unlikely]] return; }
L_002A35A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A35C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A361C; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A35F4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002A35F4u) [[unlikely]] return; }
L_002A35F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 11152u);
    set32(c.r[6], c.r[6].w[0] + 4864u);
    set32(c.r[7], 0u + 20u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3614u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002A3614u) [[unlikely]] return; }
L_002A3614:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002A3620; } }
L_002A361C:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_002A3620:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A3640:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A367Cu); st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x002A367Cu) [[unlikely]] return; }
L_002A367C:
    set32(c.r[19], c.r[2].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A368Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002A368Cu) [[unlikely]] return; }
L_002A368C:
    c.f[12] = ld32((c.r[21].w[0] + 16u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3698u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x002A3698u) [[unlikely]] return; }
L_002A3698:
    c.f[12] = ld32((c.r[21].w[0] + 20u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A36A4u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x002A36A4u) [[unlikely]] return; }
L_002A36A4:
    c.f[12] = ld32((c.r[21].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A36B0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x002A36B0u) [[unlikely]] return; }
L_002A36B0:
    c.f[12] = ld32((c.r[21].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A36BCu); c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x002A36BCu) [[unlikely]] return; }
L_002A36BC:
    c.f[12] = ld32((c.r[21].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A36C8u); c.r[23].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x002A36C8u) [[unlikely]] return; }
L_002A36C8:
    c.f[12] = ld32((c.r[21].w[0] + 12u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A36D4u); c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x002A36D4u) [[unlikely]] return; }
L_002A36D4:
    st64((c.r[29].w[0]), c.r[30].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[21].w[0] + 24u));
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[10].d[0] = c.r[22].d[0] + 0ull;
    c.r[11].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A370Cu); set32(c.r[6], c.r[6].w[0] + 19904u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x002A370Cu) [[unlikely]] return; }
L_002A370C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002A3740:
    st32((c.r[4].w[0]), c.f[12]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.f[13]);
    st32((c.r[4].w[0] + 8u), c.f[14]);
    st32((c.r[4].w[0] + 12u), c.f[15]);
    st32((c.r[4].w[0] + 16u), c.f[16]);
    st32((c.r[4].w[0] + 20u), c.f[17]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_002A3770:
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_002A3780:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[1] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[6].w[0] + 48u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 336u), c.f[0]);
    c.f[7] = ld32((c.r[6].w[0] + 52u));
    c.facc = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 340u), c.f[7]);
    c.f[6] = ld32((c.r[6].w[0] + 56u));
    st32((c.r[29].w[0] + 344u), c.f[6]);
    c.f[5] = ld32((c.r[6].w[0]));
    st32((c.r[29].w[0] + 320u), c.f[5]);
    c.f[4] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[29].w[0] + 324u), c.f[4]);
    c.f[3] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[29].w[0] + 328u), c.f[3]);
    c.f[0] = ld32((c.r[6].w[0] + 16u));
    st32((c.r[29].w[0] + 304u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 20u));
    st32((c.r[29].w[0] + 308u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    st32((c.r[29].w[0] + 312u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 32u));
    st32((c.r[29].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 36u));
    st32((c.r[29].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 40u));
    st32((c.r[29].w[0] + 296u), c.f[0]);
    set32(c.r[6], c.r[29].w[0] + 272u);
    c.f[2] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[5]));
    set32(c.r[5], c.r[29].w[0] + 320u);
    st32((c.r[29].w[0] + 272u), c.f[0]);
    c.facc = fp::add(c.f[1], c.f[7]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[4]));
    c.facc = fp::add(c.f[1], c.f[6]);
    st32((c.r[29].w[0] + 276u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[3]));
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3834u); st32((c.r[29].w[0] + 280u), c.f[0]);  if (depth < kMaxDepth) unit_0072(c, 24u, depth + 1u); else { c.pc = 0x002C82D0u; return; } if (c.pc != 0x002A3834u) [[unlikely]] return; }
L_002A3834:
    c.f[3] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    set32(c.r[6], c.r[29].w[0] + 272u);
    c.f[2] = 0u;
    st32((c.r[17].w[0]), c.f[3]);
    st32((c.r[17].w[0] + 4u), c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.f[5] = ld32((c.r[29].w[0] + 328u));
    c.f[6] = ld32((c.r[16].w[0] + 20u));
    c.f[4] = ld32((c.r[29].w[0] + 324u));
    c.f[0] = c.f[5] ^ fp::kSign;
    st32((c.r[29].w[0] + 248u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 336u));
    c.f[0] = c.f[4] ^ fp::kSign;
    c.f[3] = ld32((c.r[29].w[0] + 320u));
    st32((c.r[29].w[0] + 244u), c.f[0]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[0] = c.f[3] ^ fp::kSign;
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[3]));
    c.f[1] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[29].w[0] + 272u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[6], c.f[4]));
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    st32((c.r[29].w[0] + 276u), c.f[1]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A38C4u); st32((c.r[29].w[0] + 280u), c.f[0]);  if (depth < kMaxDepth) unit_0072(c, 24u, depth + 1u); else { c.pc = 0x002C82D0u; return; } if (c.pc != 0x002A38C4u) [[unlikely]] return; }
L_002A38C4:
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    st32((c.r[17].w[0] + 16u), c.f[2]);
    st32((c.r[17].w[0] + 20u), c.f[1]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 24u));
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { c.f[11] = ld32((c.r[16].w[0]));  goto L_002A3AFC; }
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[6] = ld32((c.r[16].w[0]));
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.f[4] = 0u;
    set32(c.r[6], c.r[29].w[0] + 272u);
    c.facc = fp::add(c.f[4], c.f[0]);
    c.f[5] = ld32((c.r[29].w[0] + 288u));
    c.f[2] = ld32((c.r[29].w[0] + 340u));
    c.f[3] = ld32((c.r[29].w[0] + 292u));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    c.facc = fp::add(c.f[4], c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[6], c.f[3]));
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    c.f[1] = ld32((c.r[29].w[0] + 296u));
    st32((c.r[29].w[0] + 272u), c.f[5]);
    c.facc = fp::add(c.f[4], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[1]));
    st32((c.r[29].w[0] + 276u), c.f[2]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3944u); st32((c.r[29].w[0] + 280u), c.f[0]);  if (depth < kMaxDepth) unit_0072(c, 24u, depth + 1u); else { c.pc = 0x002C82D0u; return; } if (c.pc != 0x002A3944u) [[unlikely]] return; }
L_002A3944:
    c.f[3] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    set32(c.r[6], c.r[29].w[0] + 272u);
    c.f[2] = 0u;
    st32((c.r[17].w[0] + 32u), c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[1]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[17].w[0] + 44u), c.f[0]);
    c.f[5] = ld32((c.r[29].w[0] + 296u));
    c.f[6] = ld32((c.r[16].w[0] + 4u));
    c.f[4] = ld32((c.r[29].w[0] + 292u));
    c.f[0] = c.f[5] ^ fp::kSign;
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 336u));
    c.f[0] = c.f[4] ^ fp::kSign;
    c.f[3] = ld32((c.r[29].w[0] + 288u));
    st32((c.r[29].w[0] + 228u), c.f[0]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[0] = c.f[3] ^ fp::kSign;
    st32((c.r[29].w[0] + 224u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[3]));
    c.f[1] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[29].w[0] + 272u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[6], c.f[4]));
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    st32((c.r[29].w[0] + 276u), c.f[1]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A39D4u); st32((c.r[29].w[0] + 280u), c.f[0]);  if (depth < kMaxDepth) unit_0072(c, 24u, depth + 1u); else { c.pc = 0x002C82D0u; return; } if (c.pc != 0x002A39D4u) [[unlikely]] return; }
L_002A39D4:
    c.f[3] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    set32(c.r[6], c.r[29].w[0] + 272u);
    c.f[2] = 0u;
    st32((c.r[17].w[0] + 48u), c.f[3]);
    st32((c.r[17].w[0] + 52u), c.f[1]);
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.f[5] = ld32((c.r[29].w[0] + 312u));
    c.f[6] = ld32((c.r[16].w[0] + 8u));
    c.f[4] = ld32((c.r[29].w[0] + 308u));
    c.f[0] = c.f[5] ^ fp::kSign;
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 336u));
    c.f[0] = c.f[4] ^ fp::kSign;
    c.f[3] = ld32((c.r[29].w[0] + 304u));
    st32((c.r[29].w[0] + 212u), c.f[0]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[0] = c.f[3] ^ fp::kSign;
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[3]));
    c.f[1] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[29].w[0] + 272u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[6], c.f[4]));
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    st32((c.r[29].w[0] + 276u), c.f[1]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3A64u); st32((c.r[29].w[0] + 280u), c.f[0]);  if (depth < kMaxDepth) unit_0072(c, 24u, depth + 1u); else { c.pc = 0x002C82D0u; return; } if (c.pc != 0x002A3A64u) [[unlikely]] return; }
L_002A3A64:
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[5], c.r[29].w[0] + 304u);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[6], c.r[29].w[0] + 272u);
    c.f[4] = 0u;
    st32((c.r[17].w[0] + 64u), c.f[2]);
    st32((c.r[17].w[0] + 68u), c.f[1]);
    st32((c.r[17].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[17].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    c.f[6] = ld32((c.r[16].w[0] + 12u));
    c.f[5] = ld32((c.r[29].w[0] + 304u));
    c.facc = fp::add(c.f[4], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 340u));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    c.f[3] = ld32((c.r[29].w[0] + 308u));
    c.facc = fp::add(c.f[4], c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[6], c.f[3]));
    c.f[1] = ld32((c.r[29].w[0] + 312u));
    c.facc = fp::add(c.f[4], c.f[0]);
    st32((c.r[29].w[0] + 272u), c.f[5]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[1]));
    st32((c.r[29].w[0] + 276u), c.f[2]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3AD8u); st32((c.r[29].w[0] + 280u), c.f[0]);  if (depth < kMaxDepth) unit_0072(c, 24u, depth + 1u); else { c.pc = 0x002C82D0u; return; } if (c.pc != 0x002A3AD8u) [[unlikely]] return; }
L_002A3AD8:
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[17].w[0] + 80u), c.f[2]);
    st32((c.r[17].w[0] + 84u), c.f[1]);
    st32((c.r[17].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.f[0]);  if (t) { goto L_002A3E4C; } }
L_002A3AFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[7] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.f[9] = fp::mul(c.f[11], c.f[11]);
    set32(c.r[6], c.r[29].w[0] + 336u);
    c.f[6] = c.r[2].w[0];
    c.f[7] = fp::add(c.f[7], c.f[9]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x5F370000u);
    c.r[3].d[0] = c.r[2].d[0] | 23007ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[8] = c.r[2].w[0];
    st32((c.r[29].w[0] + 380u), c.f[7]);
    c.f[10] = fp::mul(c.f[6], c.f[7]);
    set32(c.r[2], ld32((c.r[29].w[0] + 380u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 376u), c.r[2].w[0]);
    c.f[7] = 0u;
    c.f[9] = ld32((c.r[29].w[0] + 376u));
    c.facc = fp::add(c.f[7], c.f[8]);
    c.f[6] = c.f[11] ^ fp::kSign;
    c.f[7] = fp::mul(c.f[10], c.f[9]);
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[9], c.f[7]));
    c.f[7] = fp::mul(c.f[9], c.f[7]);
    c.f[6] = fp::mul(c.f[6], c.f[7]);
    c.f[5] = ld32((c.r[29].w[0] + 320u));
    c.f[4] = ld32((c.r[29].w[0] + 288u));
    c.f[2] = ld32((c.r[29].w[0] + 292u));
    c.facc = fp::mul(c.f[6], c.f[5]);
    c.f[4] = fp::add(c.facc, fp::mul(c.f[7], c.f[4]));
    c.f[3] = ld32((c.r[29].w[0] + 324u));
    c.facc = fp::mul(c.f[7], c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[6], c.f[3]));
    c.f[1] = ld32((c.r[29].w[0] + 328u));
    c.facc = fp::mul(c.f[7], c.f[0]);
    st32((c.r[29].w[0] + 380u), c.f[7]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[1]));
    st32((c.r[29].w[0] + 256u), c.f[4]);
    st32((c.r[29].w[0] + 260u), c.f[2]);
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3BB0u); st32((c.r[29].w[0] + 264u), c.f[0]);  if (depth < kMaxDepth) unit_0072(c, 24u, depth + 1u); else { c.pc = 0x002C82D0u; return; } if (c.pc != 0x002A3BB0u) [[unlikely]] return; }
L_002A3BB0:
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.f[7] = c.r[2].w[0];
    set32(c.r[6], c.r[29].w[0] + 336u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[17].w[0] + 32u), c.f[2]);
    st32((c.r[17].w[0] + 36u), c.f[1]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 108u));
    c.f[6] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x5F370000u);
    st32((c.r[17].w[0] + 44u), c.f[2]);
    c.r[3].d[0] = c.r[2].d[0] | 23007ull;
    c.f[9] = ld32((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[8] = fp::mul(c.f[9], c.f[9]);
    c.f[7] = fp::add(c.f[7], c.f[8]);
    st32((c.r[29].w[0] + 372u), c.f[7]);
    set32(c.r[2], ld32((c.r[29].w[0] + 372u)));
    c.f[6] = fp::mul(c.f[6], c.f[7]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 368u), c.r[2].w[0]);
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[7] = ld32((c.r[29].w[0] + 368u));
    c.f[5] = ld32((c.r[29].w[0] + 320u));
    c.f[4] = ld32((c.r[29].w[0] + 288u));
    c.f[6] = fp::mul(c.f[6], c.f[7]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[7], c.f[6]));
    c.f[7] = fp::mul(c.f[7], c.f[6]);
    c.f[6] = fp::mul(c.f[9], c.f[7]);
    c.facc = fp::mul(c.f[6], c.f[5]);
    c.f[5] = c.f[7] ^ fp::kSign;
    c.f[4] = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    c.f[2] = ld32((c.r[29].w[0] + 292u));
    c.f[3] = ld32((c.r[29].w[0] + 324u));
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[6], c.f[3]));
    c.f[1] = ld32((c.r[29].w[0] + 328u));
    c.facc = fp::mul(c.f[5], c.f[0]);
    st32((c.r[29].w[0] + 372u), c.f[7]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[1]));
    st32((c.r[29].w[0] + 256u), c.f[4]);
    st32((c.r[29].w[0] + 260u), c.f[2]);
    c.budget -= 53;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3C84u); st32((c.r[29].w[0] + 264u), c.f[0]);  if (depth < kMaxDepth) unit_0072(c, 24u, depth + 1u); else { c.pc = 0x002C82D0u; return; } if (c.pc != 0x002A3C84u) [[unlikely]] return; }
L_002A3C84:
    c.f[4] = ld32((c.r[29].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[6], c.r[29].w[0] + 336u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[17].w[0] + 48u), c.f[4]);
    st32((c.r[17].w[0] + 52u), c.f[3]);
    st32((c.r[17].w[0] + 56u), c.f[2]);
    c.f[2] = ld32((c.r[29].w[0] + 92u));
    c.f[1] = c.r[2].w[0];
    c.f[6] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x5F370000u);
    st32((c.r[17].w[0] + 60u), c.f[2]);
    c.r[3].d[0] = c.r[2].d[0] | 23007ull;
    c.f[8] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[7] = fp::add(c.facc, fp::mul(c.f[8], c.f[8]));
    c.facc = fp::add(c.f[6], c.f[0]);
    st32((c.r[29].w[0] + 364u), c.f[7]);
    set32(c.r[2], ld32((c.r[29].w[0] + 364u)));
    c.f[6] = fp::mul(c.f[1], c.f[7]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 360u), c.r[2].w[0]);
    c.f[5] = ld32((c.r[29].w[0] + 320u));
    c.f[7] = ld32((c.r[29].w[0] + 360u));
    c.f[4] = ld32((c.r[29].w[0] + 304u));
    c.f[2] = ld32((c.r[29].w[0] + 308u));
    c.f[6] = fp::mul(c.f[6], c.f[7]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[7], c.f[6]));
    c.f[7] = fp::mul(c.f[7], c.f[6]);
    c.f[6] = fp::mul(c.f[8], c.f[7]);
    c.facc = fp::mul(c.f[6], c.f[5]);
    c.f[5] = c.f[7] ^ fp::kSign;
    c.f[4] = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    c.f[3] = ld32((c.r[29].w[0] + 324u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[6], c.f[3]));
    c.f[1] = ld32((c.r[29].w[0] + 328u));
    c.facc = fp::mul(c.f[5], c.f[0]);
    st32((c.r[29].w[0] + 364u), c.f[7]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[1]));
    st32((c.r[29].w[0] + 256u), c.f[4]);
    st32((c.r[29].w[0] + 260u), c.f[2]);
    c.budget -= 53;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3D58u); st32((c.r[29].w[0] + 264u), c.f[0]);  if (depth < kMaxDepth) unit_0072(c, 24u, depth + 1u); else { c.pc = 0x002C82D0u; return; } if (c.pc != 0x002A3D58u) [[unlikely]] return; }
L_002A3D58:
    c.f[4] = ld32((c.r[29].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[6], c.r[29].w[0] + 336u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[17].w[0] + 64u), c.f[4]);
    st32((c.r[17].w[0] + 68u), c.f[3]);
    st32((c.r[17].w[0] + 72u), c.f[2]);
    c.f[2] = ld32((c.r[29].w[0] + 76u));
    c.f[1] = c.r[2].w[0];
    c.f[6] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x5F370000u);
    st32((c.r[17].w[0] + 76u), c.f[2]);
    c.r[3].d[0] = c.r[2].d[0] | 23007ull;
    c.f[8] = ld32((c.r[16].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[7] = fp::add(c.facc, fp::mul(c.f[8], c.f[8]));
    st32((c.r[29].w[0] + 356u), c.f[7]);
    set32(c.r[2], ld32((c.r[29].w[0] + 356u)));
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[7] = fp::mul(c.f[1], c.f[7]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 352u), c.r[2].w[0]);
    c.f[6] = c.f[8] ^ fp::kSign;
    c.f[8] = ld32((c.r[29].w[0] + 352u));
    c.f[5] = ld32((c.r[29].w[0] + 320u));
    c.f[4] = ld32((c.r[29].w[0] + 304u));
    c.f[7] = fp::mul(c.f[7], c.f[8]);
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[8], c.f[7]));
    c.f[7] = fp::mul(c.f[8], c.f[7]);
    c.f[6] = fp::mul(c.f[6], c.f[7]);
    c.facc = fp::mul(c.f[6], c.f[5]);
    c.f[4] = fp::add(c.facc, fp::mul(c.f[7], c.f[4]));
    c.f[2] = ld32((c.r[29].w[0] + 308u));
    c.f[3] = ld32((c.r[29].w[0] + 324u));
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    c.facc = fp::mul(c.f[7], c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[6], c.f[3]));
    c.f[1] = ld32((c.r[29].w[0] + 328u));
    c.facc = fp::mul(c.f[7], c.f[0]);
    st32((c.r[29].w[0] + 356u), c.f[7]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[1]));
    st32((c.r[29].w[0] + 256u), c.f[4]);
    st32((c.r[29].w[0] + 260u), c.f[2]);
    c.budget -= 53;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3E2Cu); st32((c.r[29].w[0] + 264u), c.f[0]);  if (depth < kMaxDepth) unit_0072(c, 24u, depth + 1u); else { c.pc = 0x002C82D0u; return; } if (c.pc != 0x002A3E2Cu) [[unlikely]] return; }
L_002A3E2C:
    c.f[2] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[17].w[0] + 80u), c.f[2]);
    st32((c.r[17].w[0] + 84u), c.f[1]);
    st32((c.r[17].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[17].w[0] + 92u), c.f[0]);
    c.budget -= 8;
L_002A3E4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_002A3E60:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 272u);
    c.budget -= 4;
    { set32(c.r[6], c.r[2].w[0] + 112u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3780u | kUnwind; return; } goto L_002A3780; }
L_002A3E70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 19952u);  c.pc = t; return; }
L_002A3E80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3E94u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 348u, depth + 1u); else { c.pc = 0x00282340u; return; } if (c.pc != 0x002A3E94u) [[unlikely]] return; }
L_002A3E94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3EA0u); set32(c.r[4], ld32((c.r[2].w[0] + 19952u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002A3EA0u) [[unlikely]] return; }
L_002A3EA0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3EB4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002A3EB4u) [[unlikely]] return; }
L_002A3EB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A3ED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3EECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 382u, depth + 1u); else { c.pc = 0x00282600u; return; } if (c.pc != 0x002A3EECu) [[unlikely]] return; }
L_002A3EEC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 224u)));  goto L_002A3EFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A3F70; } }
L_002A3EFC:
    set32(c.r[4], ld32((c.r[17].w[0] + 224u)));
    c.r[2].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[4].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A3F20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A3F70; } }
L_002A3F20:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0] + 248u));  goto L_002A3F4C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3F38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A3F38u) [[unlikely]] return; }
L_002A3F38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A3F48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A3F70; } }
L_002A3F48:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 248u));
    c.budget -= 1;
L_002A3F4C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 248u));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 220u)));  goto L_002A3F60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A3F70; } }
L_002A3F60:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3F70u); set32(c.r[5], ld32((c.r[16].w[0] + 220u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A3F70u) [[unlikely]] return; }
L_002A3F70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A3F90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3FB4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0060(c, 388u, depth + 1u); else { c.pc = 0x00282770u; return; } if (c.pc != 0x002A3FB4u) [[unlikely]] return; }
L_002A3FB4:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[5], ld32((c.r[19].w[0] + 220u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3FC8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A3FC8u) [[unlikely]] return; }
L_002A3FC8:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[5], ld32((c.r[19].w[0] + 224u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3FDCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A3FDCu) [[unlikely]] return; }
L_002A3FDC:
    set32(c.r[2], ld32((c.r[19].w[0] + 236u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 88u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3FF0u); st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x002A3FF0u) [[unlikely]] return; }
L_002A3FF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0069(c, 5u, depth); } }
L_002A3FF8:
    set32(c.r[16], c.r[17].w[0] << 4);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
    [[clang::musttail]] return unit_0069(c, 1u, depth);
}

}
