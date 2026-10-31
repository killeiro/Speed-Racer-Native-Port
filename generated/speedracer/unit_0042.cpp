#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0042[4096] = {
    1, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12,
    0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0,
    0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33,
    0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 48, 0, 0, 49,
    0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 74, 0, 75, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0,
    0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0,
    0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0,
    0, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0,
    0, 188, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0,
    195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0,
    0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0,
    0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0,
    240, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0,
    247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0,
    270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0,
    0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287,
    0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0,
    0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304,
    0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 315,
    0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0,
    0, 323, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327,
    0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0,
    0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0,
    0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0,
    0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 356, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0,
    0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0,
    0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 373,
    0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0,
    377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0,
    382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0,
    0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0,
    0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0,
    398, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0,
    0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0,
    0, 0, 416, 0, 0, 0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0,
    0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0,
    0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0,
    0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0,
    449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 455,
    0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0,
    461, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0,
    0, 467, 0, 0, 468, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0,
    0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 479, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482,
    0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 491, 0, 0,
    0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0,
    497, 0, 0, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 501,
    0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 0, 508,
    0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0,
};

void unit_0042(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00208000;
    case 2u: goto L_00208008;
    case 3u: goto L_00208010;
    case 4u: goto L_00208020;
    case 5u: goto L_00208038;
    case 6u: goto L_00208044;
    case 7u: goto L_00208060;
    case 8u: goto L_00208090;
    case 9u: goto L_002080AC;
    case 10u: goto L_002080D0;
    case 11u: goto L_002080E0;
    case 12u: goto L_002080FC;
    case 13u: goto L_00208108;
    case 14u: goto L_0020811C;
    case 15u: goto L_00208140;
    case 16u: goto L_00208154;
    case 17u: goto L_00208164;
    case 18u: goto L_00208178;
    case 19u: goto L_00208188;
    case 20u: goto L_0020819C;
    case 21u: goto L_002081AC;
    case 22u: goto L_002081C0;
    case 23u: goto L_002081D0;
    case 24u: goto L_002081E4;
    case 25u: goto L_002081F4;
    case 26u: goto L_00208208;
    case 27u: goto L_00208244;
    case 28u: goto L_00208258;
    case 29u: goto L_00208270;
    case 30u: goto L_0020828C;
    case 31u: goto L_002082E8;
    case 32u: goto L_002083E0;
    case 33u: goto L_002083FC;
    case 34u: goto L_00208410;
    case 35u: goto L_0020841C;
    case 36u: goto L_00208428;
    case 37u: goto L_00208434;
    case 38u: goto L_00208440;
    case 39u: goto L_0020844C;
    case 40u: goto L_00208458;
    case 41u: goto L_00208470;
    case 42u: goto L_00208480;
    case 43u: goto L_0020849C;
    case 44u: goto L_002084A4;
    case 45u: goto L_002084C0;
    case 46u: goto L_002084DC;
    case 47u: goto L_002084E4;
    case 48u: goto L_002084F0;
    case 49u: goto L_002084FC;
    case 50u: goto L_00208508;
    case 51u: goto L_00208514;
    case 52u: goto L_00208520;
    case 53u: goto L_0020852C;
    case 54u: goto L_00208540;
    case 55u: goto L_00208558;
    case 56u: goto L_00208568;
    case 57u: goto L_002085D0;
    case 58u: goto L_002085EC;
    case 59u: goto L_0020861C;
    case 60u: goto L_00208660;
    case 61u: goto L_002086A0;
    case 62u: goto L_002086C8;
    case 63u: goto L_002086D8;
    case 64u: goto L_00208734;
    case 65u: goto L_00208790;
    case 66u: goto L_00208928;
    case 67u: goto L_0020895C;
    case 68u: goto L_00208964;
    case 69u: goto L_002089E4;
    case 70u: goto L_00208A00;
    case 71u: goto L_00208AA0;
    case 72u: goto L_00208B54;
    case 73u: goto L_00208B5C;
    case 74u: goto L_00208B64;
    case 75u: goto L_00208B6C;
    case 76u: goto L_00208C1C;
    case 77u: goto L_00208C50;
    case 78u: goto L_00208C5C;
    case 79u: goto L_00208C74;
    case 80u: goto L_00208D40;
    case 81u: goto L_00208D48;
    case 82u: goto L_00208D50;
    case 83u: goto L_00208D58;
    case 84u: goto L_00208DA0;
    case 85u: goto L_00208DB8;
    case 86u: goto L_00208E88;
    case 87u: goto L_00208F7C;
    case 88u: goto L_00208FB4;
    case 89u: goto L_00208FC0;
    case 90u: goto L_00208FCC;
    case 91u: goto L_002090A4;
    case 92u: goto L_002090F4;
    case 93u: goto L_002091C0;
    case 94u: goto L_002091C8;
    case 95u: goto L_002091D0;
    case 96u: goto L_002091D8;
    case 97u: goto L_00209224;
    case 98u: goto L_002092F0;
    case 99u: goto L_00209368;
    case 100u: goto L_0020937C;
    case 101u: goto L_002093A8;
    case 102u: goto L_002093B8;
    case 103u: goto L_002093D8;
    case 104u: goto L_00209450;
    case 105u: goto L_00209460;
    case 106u: goto L_002094B0;
    case 107u: goto L_002094D0;
    case 108u: goto L_00209504;
    case 109u: goto L_00209530;
    case 110u: goto L_00209570;
    case 111u: goto L_0020958C;
    case 112u: goto L_002095B0;
    case 113u: goto L_002095C0;
    case 114u: goto L_002095D4;
    case 115u: goto L_002095E0;
    case 116u: goto L_002095F4;
    case 117u: goto L_00209610;
    case 118u: goto L_00209620;
    case 119u: goto L_00209630;
    case 120u: goto L_00209640;
    case 121u: goto L_00209650;
    case 122u: goto L_00209660;
    case 123u: goto L_00209678;
    case 124u: goto L_00209688;
    case 125u: goto L_002096B0;
    case 126u: goto L_002096D8;
    case 127u: goto L_002096E8;
    case 128u: goto L_00209704;
    case 129u: goto L_00209720;
    case 130u: goto L_00209730;
    case 131u: goto L_00209740;
    case 132u: goto L_0020975C;
    case 133u: goto L_0020976C;
    case 134u: goto L_002097B4;
    case 135u: goto L_002097C0;
    case 136u: goto L_00209800;
    case 137u: goto L_00209830;
    case 138u: goto L_0020984C;
    case 139u: goto L_00209870;
    case 140u: goto L_00209880;
    case 141u: goto L_0020989C;
    case 142u: goto L_002098A8;
    case 143u: goto L_002098BC;
    case 144u: goto L_002098CC;
    case 145u: goto L_002098E0;
    case 146u: goto L_002098F0;
    case 147u: goto L_00209904;
    case 148u: goto L_00209914;
    case 149u: goto L_00209928;
    case 150u: goto L_00209938;
    case 151u: goto L_0020994C;
    case 152u: goto L_00209960;
    case 153u: goto L_0020997C;
    case 154u: goto L_002099F0;
    case 155u: goto L_00209A0C;
    case 156u: goto L_00209A18;
    case 157u: goto L_00209A24;
    case 158u: goto L_00209A30;
    case 159u: goto L_00209A3C;
    case 160u: goto L_00209A50;
    case 161u: goto L_00209A60;
    case 162u: goto L_00209A70;
    case 163u: goto L_00209A8C;
    case 164u: goto L_00209A98;
    case 165u: goto L_00209AA4;
    case 166u: goto L_00209AB0;
    case 167u: goto L_00209ABC;
    case 168u: goto L_00209AD0;
    case 169u: goto L_00209AE8;
    case 170u: goto L_00209AF8;
    case 171u: goto L_00209B30;
    case 172u: goto L_00209B58;
    case 173u: goto L_00209B68;
    case 174u: goto L_00209B94;
    case 175u: goto L_00209BD0;
    case 176u: goto L_00209BEC;
    case 177u: goto L_00209CD0;
    case 178u: goto L_00209D20;
    case 179u: goto L_00209D34;
    case 180u: goto L_00209D60;
    case 181u: goto L_00209D70;
    case 182u: goto L_00209D90;
    case 183u: goto L_00209DE0;
    case 184u: goto L_00209E20;
    case 185u: goto L_00209E3C;
    case 186u: goto L_00209E60;
    case 187u: goto L_00209E70;
    case 188u: goto L_00209E84;
    case 189u: goto L_00209E90;
    case 190u: goto L_00209EA4;
    case 191u: goto L_00209EC0;
    case 192u: goto L_00209ED0;
    case 193u: goto L_00209EE0;
    case 194u: goto L_00209EF0;
    case 195u: goto L_00209F00;
    case 196u: goto L_00209F10;
    case 197u: goto L_00209F28;
    case 198u: goto L_00209F38;
    case 199u: goto L_00209F60;
    case 200u: goto L_00209F88;
    case 201u: goto L_00209F98;
    case 202u: goto L_00209FB4;
    case 203u: goto L_00209FD0;
    case 204u: goto L_00209FE0;
    case 205u: goto L_00209FF0;
    case 206u: goto L_0020A00C;
    case 207u: goto L_0020A01C;
    case 208u: goto L_0020A064;
    case 209u: goto L_0020A070;
    case 210u: goto L_0020A0B0;
    case 211u: goto L_0020A0F0;
    case 212u: goto L_0020A10C;
    case 213u: goto L_0020A130;
    case 214u: goto L_0020A140;
    case 215u: goto L_0020A154;
    case 216u: goto L_0020A160;
    case 217u: goto L_0020A174;
    case 218u: goto L_0020A190;
    case 219u: goto L_0020A1A0;
    case 220u: goto L_0020A1B0;
    case 221u: goto L_0020A1C0;
    case 222u: goto L_0020A1D0;
    case 223u: goto L_0020A1E0;
    case 224u: goto L_0020A1F8;
    case 225u: goto L_0020A208;
    case 226u: goto L_0020A230;
    case 227u: goto L_0020A258;
    case 228u: goto L_0020A268;
    case 229u: goto L_0020A284;
    case 230u: goto L_0020A2A0;
    case 231u: goto L_0020A2B0;
    case 232u: goto L_0020A2C0;
    case 233u: goto L_0020A2DC;
    case 234u: goto L_0020A2EC;
    case 235u: goto L_0020A334;
    case 236u: goto L_0020A340;
    case 237u: goto L_0020A380;
    case 238u: goto L_0020A3C0;
    case 239u: goto L_0020A3DC;
    case 240u: goto L_0020A400;
    case 241u: goto L_0020A410;
    case 242u: goto L_0020A424;
    case 243u: goto L_0020A430;
    case 244u: goto L_0020A444;
    case 245u: goto L_0020A460;
    case 246u: goto L_0020A470;
    case 247u: goto L_0020A480;
    case 248u: goto L_0020A490;
    case 249u: goto L_0020A4A0;
    case 250u: goto L_0020A4B0;
    case 251u: goto L_0020A4C8;
    case 252u: goto L_0020A4D8;
    case 253u: goto L_0020A500;
    case 254u: goto L_0020A528;
    case 255u: goto L_0020A538;
    case 256u: goto L_0020A554;
    case 257u: goto L_0020A570;
    case 258u: goto L_0020A580;
    case 259u: goto L_0020A590;
    case 260u: goto L_0020A5AC;
    case 261u: goto L_0020A5BC;
    case 262u: goto L_0020A604;
    case 263u: goto L_0020A610;
    case 264u: goto L_0020A650;
    case 265u: goto L_0020A690;
    case 266u: goto L_0020A6AC;
    case 267u: goto L_0020A6D0;
    case 268u: goto L_0020A6E0;
    case 269u: goto L_0020A6F4;
    case 270u: goto L_0020A700;
    case 271u: goto L_0020A714;
    case 272u: goto L_0020A730;
    case 273u: goto L_0020A740;
    case 274u: goto L_0020A750;
    case 275u: goto L_0020A760;
    case 276u: goto L_0020A770;
    case 277u: goto L_0020A780;
    case 278u: goto L_0020A798;
    case 279u: goto L_0020A7A8;
    case 280u: goto L_0020A7D0;
    case 281u: goto L_0020A7F8;
    case 282u: goto L_0020A808;
    case 283u: goto L_0020A824;
    case 284u: goto L_0020A840;
    case 285u: goto L_0020A850;
    case 286u: goto L_0020A860;
    case 287u: goto L_0020A87C;
    case 288u: goto L_0020A88C;
    case 289u: goto L_0020A8D4;
    case 290u: goto L_0020A8E0;
    case 291u: goto L_0020A920;
    case 292u: goto L_0020A988;
    case 293u: goto L_0020A9CC;
    case 294u: goto L_0020A9EC;
    case 295u: goto L_0020AA08;
    case 296u: goto L_0020AA20;
    case 297u: goto L_0020AA54;
    case 298u: goto L_0020AA64;
    case 299u: goto L_0020AA80;
    case 300u: goto L_0020AA9C;
    case 301u: goto L_0020AAC0;
    case 302u: goto L_0020AAD0;
    case 303u: goto L_0020AAF0;
    case 304u: goto L_0020AAFC;
    case 305u: goto L_0020AB10;
    case 306u: goto L_0020AB18;
    case 307u: goto L_0020AB48;
    case 308u: goto L_0020AB5C;
    case 309u: goto L_0020AB9C;
    case 310u: goto L_0020ABB0;
    case 311u: goto L_0020ABC4;
    case 312u: goto L_0020ABCC;
    case 313u: goto L_0020ABE0;
    case 314u: goto L_0020ABF4;
    case 315u: goto L_0020ABFC;
    case 316u: goto L_0020AC10;
    case 317u: goto L_0020AC24;
    case 318u: goto L_0020AC2C;
    case 319u: goto L_0020AC40;
    case 320u: goto L_0020AC54;
    case 321u: goto L_0020AC5C;
    case 322u: goto L_0020AC70;
    case 323u: goto L_0020AC84;
    case 324u: goto L_0020AC8C;
    case 325u: goto L_0020ACA0;
    case 326u: goto L_0020ACB4;
    case 327u: goto L_0020ACFC;
    case 328u: goto L_0020AD10;
    case 329u: goto L_0020AD28;
    case 330u: goto L_0020AD3C;
    case 331u: goto L_0020AD54;
    case 332u: goto L_0020AD68;
    case 333u: goto L_0020AD84;
    case 334u: goto L_0020AD98;
    case 335u: goto L_0020ADA8;
    case 336u: goto L_0020ADBC;
    case 337u: goto L_0020ADCC;
    case 338u: goto L_0020ADE0;
    case 339u: goto L_0020ADF0;
    case 340u: goto L_0020AE04;
    case 341u: goto L_0020AE20;
    case 342u: goto L_0020AE44;
    case 343u: goto L_0020AE68;
    case 344u: goto L_0020AEC0;
    case 345u: goto L_0020AF80;
    case 346u: goto L_0020AFA0;
    case 347u: goto L_0020AFB4;
    case 348u: goto L_0020AFBC;
    case 349u: goto L_0020AFD8;
    case 350u: goto L_0020AFF8;
    case 351u: goto L_0020B004;
    case 352u: goto L_0020B010;
    case 353u: goto L_0020B030;
    case 354u: goto L_0020B040;
    case 355u: goto L_0020B06C;
    case 356u: goto L_0020B074;
    case 357u: goto L_0020B0A4;
    case 358u: goto L_0020B0AC;
    case 359u: goto L_0020B0C4;
    case 360u: goto L_0020B0D4;
    case 361u: goto L_0020B0E8;
    case 362u: goto L_0020B0F8;
    case 363u: goto L_0020B104;
    case 364u: goto L_0020B144;
    case 365u: goto L_0020B150;
    case 366u: goto L_0020B164;
    case 367u: goto L_0020B188;
    case 368u: goto L_0020B190;
    case 369u: goto L_0020B1A8;
    case 370u: goto L_0020B1B4;
    case 371u: goto L_0020B1E8;
    case 372u: goto L_0020B1F4;
    case 373u: goto L_0020B1FC;
    case 374u: goto L_0020B208;
    case 375u: goto L_0020B240;
    case 376u: goto L_0020B260;
    case 377u: goto L_0020B280;
    case 378u: goto L_0020B2A0;
    case 379u: goto L_0020B2B0;
    case 380u: goto L_0020B2D8;
    case 381u: goto L_0020B2E8;
    case 382u: goto L_0020B300;
    case 383u: goto L_0020B338;
    case 384u: goto L_0020B348;
    case 385u: goto L_0020B364;
    case 386u: goto L_0020B378;
    case 387u: goto L_0020B388;
    case 388u: goto L_0020B3B0;
    case 389u: goto L_0020B3D0;
    case 390u: goto L_0020B3F8;
    case 391u: goto L_0020B408;
    case 392u: goto L_0020B420;
    case 393u: goto L_0020B43C;
    case 394u: goto L_0020B444;
    case 395u: goto L_0020B450;
    case 396u: goto L_0020B45C;
    case 397u: goto L_0020B468;
    case 398u: goto L_0020B480;
    case 399u: goto L_0020B494;
    case 400u: goto L_0020B4A4;
    case 401u: goto L_0020B4B0;
    case 402u: goto L_0020B4D8;
    case 403u: goto L_0020B508;
    case 404u: goto L_0020B52C;
    case 405u: goto L_0020B578;
    case 406u: goto L_0020B590;
    case 407u: goto L_0020B5AC;
    case 408u: goto L_0020B5BC;
    case 409u: goto L_0020B5D0;
    case 410u: goto L_0020B5F0;
    case 411u: goto L_0020B61C;
    case 412u: goto L_0020B644;
    case 413u: goto L_0020B64C;
    case 414u: goto L_0020B664;
    case 415u: goto L_0020B674;
    case 416u: goto L_0020B688;
    case 417u: goto L_0020B698;
    case 418u: goto L_0020B6A4;
    case 419u: goto L_0020B6E4;
    case 420u: goto L_0020B6F0;
    case 421u: goto L_0020B704;
    case 422u: goto L_0020B728;
    case 423u: goto L_0020B730;
    case 424u: goto L_0020B748;
    case 425u: goto L_0020B754;
    case 426u: goto L_0020B788;
    case 427u: goto L_0020B7E0;
    case 428u: goto L_0020B808;
    case 429u: goto L_0020B81C;
    case 430u: goto L_0020B830;
    case 431u: goto L_0020B850;
    case 432u: goto L_0020B888;
    case 433u: goto L_0020B89C;
    case 434u: goto L_0020B8A8;
    case 435u: goto L_0020B8B4;
    case 436u: goto L_0020B8C4;
    case 437u: goto L_0020B8D4;
    case 438u: goto L_0020B8E0;
    case 439u: goto L_0020B8F4;
    case 440u: goto L_0020B904;
    case 441u: goto L_0020B91C;
    case 442u: goto L_0020B948;
    case 443u: goto L_0020B95C;
    case 444u: goto L_0020B970;
    case 445u: goto L_0020B990;
    case 446u: goto L_0020B9B4;
    case 447u: goto L_0020B9D0;
    case 448u: goto L_0020B9E0;
    case 449u: goto L_0020BA00;
    case 450u: goto L_0020BA10;
    case 451u: goto L_0020BA2C;
    case 452u: goto L_0020BA3C;
    case 453u: goto L_0020BA58;
    case 454u: goto L_0020BA6C;
    case 455u: goto L_0020BA7C;
    case 456u: goto L_0020BA90;
    case 457u: goto L_0020BAAC;
    case 458u: goto L_0020BABC;
    case 459u: goto L_0020BADC;
    case 460u: goto L_0020BAEC;
    case 461u: goto L_0020BB00;
    case 462u: goto L_0020BB1C;
    case 463u: goto L_0020BB2C;
    case 464u: goto L_0020BB4C;
    case 465u: goto L_0020BB5C;
    case 466u: goto L_0020BB70;
    case 467u: goto L_0020BB84;
    case 468u: goto L_0020BB90;
    case 469u: goto L_0020BB9C;
    case 470u: goto L_0020BBAC;
    case 471u: goto L_0020BBBC;
    case 472u: goto L_0020BBC8;
    case 473u: goto L_0020BBDC;
    case 474u: goto L_0020BBEC;
    case 475u: goto L_0020BC04;
    case 476u: goto L_0020BC30;
    case 477u: goto L_0020BC44;
    case 478u: goto L_0020BC58;
    case 479u: goto L_0020BC78;
    case 480u: goto L_0020BCC0;
    case 481u: goto L_0020BCEC;
    case 482u: goto L_0020BCFC;
    case 483u: goto L_0020BD18;
    case 484u: goto L_0020BD30;
    case 485u: goto L_0020BD94;
    case 486u: goto L_0020BD9C;
    case 487u: goto L_0020BDB4;
    case 488u: goto L_0020BDC4;
    case 489u: goto L_0020BDD8;
    case 490u: goto L_0020BDE8;
    case 491u: goto L_0020BDF4;
    case 492u: goto L_0020BE0C;
    case 493u: goto L_0020BE34;
    case 494u: goto L_0020BE40;
    case 495u: goto L_0020BE54;
    case 496u: goto L_0020BE78;
    case 497u: goto L_0020BE80;
    case 498u: goto L_0020BE98;
    case 499u: goto L_0020BEA4;
    case 500u: goto L_0020BED8;
    case 501u: goto L_0020BEFC;
    case 502u: goto L_0020BF08;
    case 503u: goto L_0020BF18;
    case 504u: goto L_0020BF38;
    case 505u: goto L_0020BF44;
    case 506u: goto L_0020BF54;
    case 507u: goto L_0020BF68;
    case 508u: goto L_0020BF7C;
    case 509u: goto L_0020BF8C;
    case 510u: goto L_0020BFAC;
    case 511u: goto L_0020BFC0;
    case 512u: goto L_0020BFD0;
    case 513u: goto L_0020BFF8;
    default: bad_entry(c, 0x00208000u); return;
    }
L_00208000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208008u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x00208008u) [[unlikely]] return; }
L_00208008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208010u); set32(c.r[4], c.r[16].w[0] + 60u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x00208010u) [[unlikely]] return; }
L_00208010:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[16].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208020u); set32(c.r[5], c.r[5].w[0] + 31024u);  if (depth < kMaxDepth) unit_003E(c, 271u, depth + 1u); else { c.pc = 0x001FA0A0u; return; } if (c.pc != 0x00208020u) [[unlikely]] return; }
L_00208020:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00208048; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208038u); set32(c.r[5], c.r[5].w[0] + 31056u);  if (depth < kMaxDepth) unit_0041(c, 450u, depth + 1u); else { c.pc = 0x00207650u; return; } if (c.pc != 0x00208038u) [[unlikely]] return; }
L_00208038:
    set32(c.r[4], c.r[16].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208044u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_003E(c, 271u, depth + 1u); else { c.pc = 0x001FA0A0u; return; } if (c.pc != 0x00208044u) [[unlikely]] return; }
L_00208044:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00208048:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00208060:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002080AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 10384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208090u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 185u, depth + 1u); else { c.pc = 0x002113B0u; return; } if (c.pc != 0x00208090u) [[unlikely]] return; }
L_00208090:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002080B0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002080ACu); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002080ACu) [[unlikely]] return; }
L_002080AC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002080B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002080D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 11208u);  c.pc = t; return; }
L_002080E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002080FCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 140u, depth + 1u); else { c.pc = 0x00210F00u; return; } if (c.pc != 0x002080FCu) [[unlikely]] return; }
L_002080FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208108u); set32(c.r[4], ld32((c.r[2].w[0] - 11208u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00208108u) [[unlikely]] return; }
L_00208108:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020811Cu); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0020811Cu) [[unlikely]] return; }
L_0020811C:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00208130; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_00208134; } }
L_00208130:
    set32(c.r[5], c.r[5].w[0] - 11185u);
    c.budget -= 1;
L_00208134:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208140u); set32(c.r[4], c.r[4].w[0] - 11200u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x00208140u) [[unlikely]] return; }
L_00208140:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208154u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00208154u) [[unlikely]] return; }
L_00208154:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208164u); set32(c.r[5], c.r[5].w[0] - 11180u);  if (depth < kMaxDepth) unit_0072(c, 36u, depth + 1u); else { c.pc = 0x002C84C0u; return; } if (c.pc != 0x00208164u) [[unlikely]] return; }
L_00208164:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208178u); set32(c.r[6], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00208178u) [[unlikely]] return; }
L_00208178:
    c.f[12] = ld32((c.r[17].w[0] + 40u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208188u); set32(c.r[4], c.r[4].w[0] - 11167u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x00208188u) [[unlikely]] return; }
L_00208188:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020819Cu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0020819Cu) [[unlikely]] return; }
L_0020819C:
    c.f[12] = ld32((c.r[17].w[0] + 44u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002081ACu); set32(c.r[4], c.r[4].w[0] - 11161u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x002081ACu) [[unlikely]] return; }
L_002081AC:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002081C0u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002081C0u) [[unlikely]] return; }
L_002081C0:
    c.f[12] = ld32((c.r[17].w[0] + 52u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002081D0u); set32(c.r[4], c.r[4].w[0] - 11152u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x002081D0u) [[unlikely]] return; }
L_002081D0:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002081E4u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002081E4u) [[unlikely]] return; }
L_002081E4:
    c.f[12] = ld32((c.r[17].w[0] + 56u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002081F4u); set32(c.r[4], c.r[4].w[0] - 11141u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x002081F4u) [[unlikely]] return; }
L_002081F4:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208208u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00208208u) [[unlikely]] return; }
L_00208208:
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00208220; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 11125u);  if (t) { goto L_00208238; } }
L_00208220:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00208234; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 11112u);  if (t) { goto L_00208238; } }
L_00208234:
    set32(c.r[5], c.r[5].w[0] - 11096u);
    c.budget -= 1;
L_00208238:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208244u); set32(c.r[4], c.r[4].w[0] - 11088u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x00208244u) [[unlikely]] return; }
L_00208244:
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208258u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00208258u) [[unlikely]] return; }
L_00208258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00208270:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020828Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 150u, depth + 1u); else { c.pc = 0x00210FC0u; return; } if (c.pc != 0x0020828Cu) [[unlikely]] return; }
L_0020828C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_0020829C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002083C4; } }
L_0020829C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002082B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002083C4; }
L_002082B0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002082C4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002082F0; } }
L_002082C4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 28u));  goto L_00208300; }
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002082FC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002082E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002082E8u) [[unlikely]] return; }
L_002082E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002082FC; } }
L_002082F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002083C4; } }
L_002082FC:
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    c.budget -= 1;
L_00208300:
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00208314; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00208314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00208334; } }
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00208334; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00208334:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_00208358; }
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00208354; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00208354:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_00208358:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002083C4; }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002083C0; } }
    c.f[1] = ld32((c.r[16].w[0] + 44u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002083C0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002083C0; } }
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002083C0; } }
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 1u);  goto L_002083C4; }
L_002083C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002083C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002083E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002083FCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 152u, depth + 1u); else { c.pc = 0x00211040u; return; } if (c.pc != 0x002083FCu) [[unlikely]] return; }
L_002083FC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00208410u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00208410u) [[unlikely]] return; }
L_00208410:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020841Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 43u, depth + 1u); else { c.pc = 0x002C8570u; return; } if (c.pc != 0x0020841Cu) [[unlikely]] return; }
L_0020841C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208428u); set32(c.r[5], c.r[17].w[0] + 40u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00208428u) [[unlikely]] return; }
L_00208428:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208434u); set32(c.r[5], c.r[17].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00208434u) [[unlikely]] return; }
L_00208434:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208440u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0042(c, 104u, depth + 1u); else { c.pc = 0x00209450u; return; } if (c.pc != 0x00208440u) [[unlikely]] return; }
L_00208440:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020844Cu); set32(c.r[5], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x0020844Cu) [[unlikely]] return; }
L_0020844C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208458u); set32(c.r[5], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00208458u) [[unlikely]] return; }
L_00208458:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00208470:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 158u, depth); }
L_00208480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020849Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 161u, depth + 1u); else { c.pc = 0x00211110u; return; } if (c.pc != 0x0020849Cu) [[unlikely]] return; }
L_0020849C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002084A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x002084A4u) [[unlikely]] return; }
L_002084A4:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002084C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002084DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 164u, depth + 1u); else { c.pc = 0x00211140u; return; } if (c.pc != 0x002084DCu) [[unlikely]] return; }
L_002084DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002084E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x002084E4u) [[unlikely]] return; }
L_002084E4:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002084F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C85C0u; return; } if (c.pc != 0x002084F0u) [[unlikely]] return; }
L_002084F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002084FCu); set32(c.r[5], c.r[17].w[0] + 40u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002084FCu) [[unlikely]] return; }
L_002084FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208508u); set32(c.r[5], c.r[17].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00208508u) [[unlikely]] return; }
L_00208508:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208514u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0042(c, 105u, depth + 1u); else { c.pc = 0x00209460u; return; } if (c.pc != 0x00208514u) [[unlikely]] return; }
L_00208514:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208520u); set32(c.r[5], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00208520u) [[unlikely]] return; }
L_00208520:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020852Cu); set32(c.r[5], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x0020852Cu) [[unlikely]] return; }
L_0020852C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00208540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 60u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208558u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00208558u) [[unlikely]] return; }
L_00208558:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002085B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208568u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 191u, depth + 1u); else { c.pc = 0x00211490u; return; } if (c.pc != 0x00208568u) [[unlikely]] return; }
L_00208568:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 10384u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[4].w[0] + 31040u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[3].w[0] + 31044u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 31048u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    c.budget -= 19;
L_002085B4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002085D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002085ECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 171u, depth + 1u); else { c.pc = 0x002111D0u; return; } if (c.pc != 0x002085ECu) [[unlikely]] return; }
L_002085EC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[16].w[0], c.r[6].w[0]);  if (t) { goto L_00208608; } }
    breakpoint(c, 0x00208604u);
    c.budget -= 1;
L_00208608:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_0020862C; } }
L_0020861C:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_0020862C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_00208634; } }
L_0020862C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020861Cu | kUnwind; return; } goto L_0020861C; }
L_00208634:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0020868C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[4].w[0], c.r[6].w[0]);  if (t) { goto L_0020864C; } }
    breakpoint(c, 0x00208648u);
    c.budget -= 1;
L_0020864C:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_00208674; } }
L_00208660:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[5].w[0])));  goto L_00208674; }
    set32(c.r[8], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00208680; } }
L_00208674:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00208660u | kUnwind; return; } goto L_00208660; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00208680:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[7].w[0] + 24u), c.r[4].w[0]);  goto L_0020868C; }
    st32((c.r[7].w[0] + 24u), c.r[8].w[0]);
    c.budget -= 1;
L_0020868C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002086A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 60u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002086C8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002086C8u) [[unlikely]] return; }
L_002086C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00208724; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002086D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 191u, depth + 1u); else { c.pc = 0x00211490u; return; } if (c.pc != 0x002086D8u) [[unlikely]] return; }
L_002086D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 10384u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[4].w[0] + 31040u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[3].w[0] + 31044u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 31048u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    c.budget -= 19;
L_00208724:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208734u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 175u, depth + 1u); else { c.pc = 0x00211290u; return; } if (c.pc != 0x00208734u) [[unlikely]] return; }
L_00208734:
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00208790:
    set32(c.r[29], c.r[29].w[0] - 560u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.f[31]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), c.f[30]);
    st32((c.r[29].w[0] + 36u), c.f[29]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 48u));
    c.budget -= 24;
    { const bool t = c.r[3].d[0] == 0ull; c.f[29] = c.f[12];  if (t) { goto L_0020929C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[17].w[0] + 28u));  goto L_00208808; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_002092A0; } }
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    c.budget -= 1;
L_00208808:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[29].w[0] + 544u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 112u));
    st32((c.r[29].w[0] + 500u), c.f[2]);
    st32((c.r[29].w[0] + 520u), c.f[1]);
    st32((c.r[29].w[0] + 432u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 116u));
    c.f[1] = ld32((c.r[3].w[0] + 120u));
    c.f[0] = ld32((c.r[3].w[0] + 124u));
    st32((c.r[29].w[0] + 436u), c.f[2]);
    st32((c.r[29].w[0] + 440u), c.f[1]);
    st32((c.r[29].w[0] + 444u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 128u));
    c.f[1] = ld32((c.r[3].w[0] + 132u));
    c.f[0] = ld32((c.r[3].w[0] + 136u));
    st32((c.r[29].w[0] + 448u), c.f[2]);
    st32((c.r[29].w[0] + 452u), c.f[1]);
    st32((c.r[29].w[0] + 456u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 140u));
    c.f[1] = ld32((c.r[3].w[0] + 144u));
    c.f[0] = ld32((c.r[3].w[0] + 148u));
    st32((c.r[29].w[0] + 460u), c.f[2]);
    st32((c.r[29].w[0] + 464u), c.f[1]);
    st32((c.r[29].w[0] + 468u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 152u));
    c.f[1] = ld32((c.r[3].w[0] + 156u));
    c.f[0] = ld32((c.r[3].w[0] + 160u));
    st32((c.r[29].w[0] + 472u), c.f[2]);
    st32((c.r[29].w[0] + 476u), c.f[1]);
    st32((c.r[29].w[0] + 480u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 164u));
    c.f[1] = ld32((c.r[3].w[0] + 168u));
    c.f[0] = ld32((c.r[3].w[0] + 172u));
    st32((c.r[29].w[0] + 484u), c.f[2]);
    st32((c.r[29].w[0] + 488u), c.f[1]);
    st32((c.r[29].w[0] + 492u), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 352u);
    c.f[3] = ld32((c.r[2].w[0] + 112u));
    c.f[2] = ld32((c.r[2].w[0] + 116u));
    c.f[1] = ld32((c.r[2].w[0] + 120u));
    c.f[0] = ld32((c.r[2].w[0] + 124u));
    st32((c.r[29].w[0] + 368u), c.f[3]);
    st32((c.r[29].w[0] + 372u), c.f[2]);
    st32((c.r[29].w[0] + 376u), c.f[1]);
    st32((c.r[29].w[0] + 380u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 128u));
    c.f[2] = ld32((c.r[2].w[0] + 132u));
    c.f[1] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = ld32((c.r[2].w[0] + 140u));
    st32((c.r[29].w[0] + 384u), c.f[3]);
    st32((c.r[29].w[0] + 388u), c.f[2]);
    st32((c.r[29].w[0] + 392u), c.f[1]);
    st32((c.r[29].w[0] + 396u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 144u));
    c.f[2] = ld32((c.r[2].w[0] + 148u));
    c.f[1] = ld32((c.r[2].w[0] + 152u));
    c.f[0] = ld32((c.r[2].w[0] + 156u));
    st32((c.r[29].w[0] + 400u), c.f[3]);
    st32((c.r[29].w[0] + 404u), c.f[2]);
    st32((c.r[29].w[0] + 408u), c.f[1]);
    st32((c.r[29].w[0] + 412u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 160u));
    st32((c.r[29].w[0] + 416u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 164u));
    st32((c.r[29].w[0] + 420u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 168u));
    st32((c.r[29].w[0] + 424u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 172u));
    st32((c.r[29].w[0] + 428u), c.f[0]);
    c.budget -= 72;
L_00208928:
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00208928u | kUnwind; return; } goto L_00208928; } }
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[5], c.r[29].w[0] + 304u);
    st32((c.r[29].w[0] + 316u), 0u);
    st32((c.r[29].w[0] + 332u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020895Cu); st32((c.r[29].w[0] + 348u), 0u);  if (depth < kMaxDepth) unit_0087(c, 263u, depth + 1u); else { c.pc = 0x0031E870u; return; } if (c.pc != 0x0020895Cu) [[unlikely]] return; }
L_0020895C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208964u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_003E(c, 300u, depth + 1u); else { c.pc = 0x001FA730u; return; } if (c.pc != 0x00208964u) [[unlikely]] return; }
L_00208964:
    set32(c.r[3], c.r[29].w[0] + 304u);
    set32(c.r[2], c.r[29].w[0] + 432u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[3]);
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
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002089E4u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_003E(c, 299u, depth + 1u); else { c.pc = 0x001FA6A0u; return; } if (c.pc != 0x002089E4u) [[unlikely]] return; }
L_002089E4:
    c.f[20] = ld32((c.r[29].w[0] + 288u));
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.f[21] = ld32((c.r[29].w[0] + 292u));
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.f[22] = ld32((c.r[29].w[0] + 296u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208A00u); set32(c.r[6], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x00208A00u) [[unlikely]] return; }
L_00208A00:
    c.f[1] = ld32((c.r[29].w[0] + 528u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[29].w[0] + 532u));
    c.f[2] = ld32((c.r[29].w[0] + 536u));
    c.f[4] = ld32((c.r[29].w[0] + 528u));
    c.f[0] = c.r[3].w[0];
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_rsqrt(c, 1u, c.f[0], c.f[1]);
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.r[5].d[0] = ld16((c.r[16].w[0] + 48u));
    set32(c.r[3], 0u + 1u);
    c.f[25] = fp::mul(c.f[2], c.f[1]);
    c.f[23] = fp::mul(c.f[4], c.f[1]);
    c.f[26] = fp::mul(c.f[3], c.f[1]);
    c.f[2] = ld32((c.r[28].w[0] - 32592u));
    c.f[1] = ld32((c.r[17].w[0] + 44u));
    c.budget -= 21;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.f[28] = fp::mul(c.f[2], c.f[1]);  if (t) { goto L_00208E40; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.f[3] = ld32((c.r[17].w[0] + 40u));  goto L_00208A68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020929C; } }
    c.f[3] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 1;
L_00208A68:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00208AFC; } }
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00208AFC; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 112u)));
    c.r[4].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00208AE4; } }
    c.f[1] = ld32((c.r[6].w[0] + 20u));
    c.budget -= 1;
L_00208AA0:
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.f[1] = fp::sub(c.f[29], c.f[1]);
    c.f[3] = fp::mul(c.f[28], c.f[1]);
    c.f[1] = fp::mul(c.f[3], c.f[23]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[2] = fp::mul(c.f[3], c.f[26]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = fp::mul(c.f[3], c.f[25]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    set32(c.r[6], c.r[6].w[0] + 28u);
    c.budget -= 17;
L_00208AE4:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.f[1] = ld32((c.r[6].w[0] + 20u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00208AA0u | kUnwind; return; } goto L_00208AA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020929C; } }
L_00208AFC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00208BD8; } }
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00208BD8; } }
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[16], ld32((c.r[16].w[0] + 112u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[17].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 9;
    { const bool t = c.r[17].sd[0] <= 0; c.f[24] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_0020929C; } }
    c.f[22] = fp::mul(c.f[28], c.f[23]);
    c.f[21] = fp::mul(c.f[28], c.f[26]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[20] = fp::mul(c.f[28], c.f[25]);  if (t) { goto L_00208BC0; } }
L_00208B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208B5Cu);  if (depth < kMaxDepth) unit_005F(c, 31u, depth + 1u); else { c.pc = 0x0027C8D0u; return; } if (c.pc != 0x00208B5Cu) [[unlikely]] return; }
L_00208B5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208B64u); c.f[23] = fp::mul(c.f[24], c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 31u, depth + 1u); else { c.pc = 0x0027C8D0u; return; } if (c.pc != 0x00208B64u) [[unlikely]] return; }
L_00208B64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208B6Cu); c.f[25] = fp::mul(c.f[24], c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 31u, depth + 1u); else { c.pc = 0x0027C8D0u; return; } if (c.pc != 0x00208B6Cu) [[unlikely]] return; }
L_00208B6C:
    c.f[4] = ld32((c.r[16].w[0] + 20u));
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.f[0] = fp::mul(c.f[24], c.f[0]);
    c.r[18].d[0] = c.r[3].d[0] & 65535ull;
    c.f[3] = fp::add(c.f[23], c.f[22]);
    c.f[4] = fp::sub(c.f[29], c.f[4]);
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[1] = fp::add(c.f[25], c.f[21]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[16].w[0]), c.f[2]);
    c.f[2] = fp::mul(c.f[4], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.f[1] = fp::mul(c.f[4], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    set32(c.r[16], c.r[16].w[0] + 28u);
    c.budget -= 21;
L_00208BC0:
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00208B54u | kUnwind; return; } goto L_00208B54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020929C; } }
L_00208BD8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00208CDC; } }
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00208CDC; } }
    set32(c.r[20], ld32((c.r[16].w[0] + 112u)));
    c.r[18].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[19], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[18].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0020929C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_00208CC8; } }
    c.f[2] = ld32((c.r[19].w[0]));
    c.budget -= 1;
L_00208C1C:
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[2] = fp::sub(c.f[20], c.f[2]);
    c.f[1] = fp::sub(c.f[21], c.f[1]);
    c.f[0] = fp::sub(c.f[22], c.f[0]);
    c.facc = fp::mul(c.f[23], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[26], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[25], c.f[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[17].w[0] + 40u));  goto L_00208C68; }
L_00208C50:
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208C5Cu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00208C5Cu) [[unlikely]] return; }
L_00208C5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[20].w[0] + 20u));  if (t) { goto L_00208C78; } }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 1;
L_00208C68:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208C74u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00208C74u) [[unlikely]] return; }
L_00208C74:
    c.f[2] = ld32((c.r[20].w[0] + 20u));
    c.budget -= 1;
L_00208C78:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.f[1] = fp::mul(c.f[28], c.f[0]);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[19], c.r[19].w[0] + 12u);
    c.f[2] = fp::sub(c.f[29], c.f[2]);
    c.f[3] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::mul(c.f[3], c.f[23]);
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[2] = fp::mul(c.f[3], c.f[26]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[1] = fp::mul(c.f[3], c.f[25]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 8u), c.f[0]);
    set32(c.r[20], c.r[20].w[0] + 28u);
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 20;
L_00208CC8:
    c.r[3].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[2] = ld32((c.r[19].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00208C1Cu | kUnwind; return; } goto L_00208C1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020929C; } }
L_00208CDC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020929C; } }
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020929C; } }
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[20], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[19], ld32((c.r[16].w[0] + 32u)));
    c.r[18].d[0] = c.r[5].d[0] & 65535ull;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { const bool t = c.r[18].sd[0] <= 0; c.f[24] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_0020929C; } }
    c.f[0] = fp::mul(c.f[28], c.f[23]);
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = fp::mul(c.f[28], c.f[26]);
    c.f[27] = fp::mul(c.f[28], c.f[25]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.f[0]);  if (t) { goto L_00208E28; } }
L_00208D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208D48u);  if (depth < kMaxDepth) unit_005F(c, 31u, depth + 1u); else { c.pc = 0x0027C8D0u; return; } if (c.pc != 0x00208D48u) [[unlikely]] return; }
L_00208D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208D50u); c.f[28] = fp::mul(c.f[24], c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 31u, depth + 1u); else { c.pc = 0x0027C8D0u; return; } if (c.pc != 0x00208D50u) [[unlikely]] return; }
L_00208D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208D58u); c.f[30] = fp::mul(c.f[24], c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 31u, depth + 1u); else { c.pc = 0x0027C8D0u; return; } if (c.pc != 0x00208D58u) [[unlikely]] return; }
L_00208D58:
    c.f[31] = fp::mul(c.f[24], c.f[0]);
    c.f[2] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[2] = fp::sub(c.f[20], c.f[2]);
    c.f[1] = fp::sub(c.f[21], c.f[1]);
    c.f[0] = fp::sub(c.f[22], c.f[0]);
    c.facc = fp::mul(c.f[23], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[26], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[25], c.f[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 15;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[17].w[0] + 40u));  goto L_00208DAC; }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208DA0u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00208DA0u) [[unlikely]] return; }
L_00208DA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 168u));  if (t) { goto L_00208DBC; } }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 1;
L_00208DAC:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208DB8u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00208DB8u) [[unlikely]] return; }
L_00208DB8:
    c.f[1] = ld32((c.r[29].w[0] + 168u));
    c.budget -= 1;
L_00208DBC:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.f[2] = ld32((c.r[20].w[0] + 20u));
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[19], c.r[19].w[0] + 12u);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[4] = fp::sub(c.f[29], c.f[2]);
    c.f[1] = fp::add(c.f[28], c.f[1]);
    c.f[3] = fp::mul(c.f[4], c.f[1]);
    c.f[1] = ld32((c.r[20].w[0]));
    c.f[2] = 0u;
    c.facc = fp::add(c.f[2], c.f[30]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    st32((c.r[20].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 156u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[1]));
    c.facc = fp::add(c.f[2], c.f[31]);
    c.f[2] = fp::mul(c.f[4], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[27]));
    c.f[1] = fp::mul(c.f[4], c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 8u), c.f[0]);
    set32(c.r[20], c.r[20].w[0] + 28u);
    c.budget -= 27;
L_00208E28:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00208D40u | kUnwind; return; } goto L_00208D40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020929C; } }
L_00208E40:
    c.f[3] = ld32((c.r[17].w[0] + 40u));
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[3]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00208F1C; } }
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00208F1C; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 112u)));
    c.r[4].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0020929C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_00208F08; } }
    c.f[1] = ld32((c.r[6].w[0]));
    c.budget -= 1;
L_00208E88:
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[3] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = fp::sub(c.f[20], c.f[1]);
    c.f[2] = fp::sub(c.f[21], c.f[2]);
    c.f[4] = fp::sub(c.f[22], c.f[3]);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    fpu_rsqrt(c, 5u, c.f[0], c.f[5]);
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[6], c.r[6].w[0] + 12u);
    c.f[3] = fp::mul(c.f[2], c.f[5]);
    c.f[6] = fp::mul(c.f[1], c.f[5]);
    c.f[2] = ld32((c.r[7].w[0] + 20u));
    c.f[5] = fp::mul(c.f[4], c.f[5]);
    c.f[2] = fp::sub(c.f[29], c.f[2]);
    c.f[4] = fp::mul(c.f[28], c.f[2]);
    c.f[2] = fp::mul(c.f[4], c.f[6]);
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[7].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[2] = fp::mul(c.f[4], c.f[5]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    st32((c.r[7].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[7].w[0] + 8u), c.f[1]);
    set32(c.r[7], c.r[7].w[0] + 28u);
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 32;
L_00208F08:
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[1] = ld32((c.r[6].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00208E88u | kUnwind; return; } goto L_00208E88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020929C; } }
L_00208F1C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00209058; } }
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00209058; } }
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[19], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[18], ld32((c.r[16].w[0] + 32u)));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[17].d[0] = c.r[5].d[0] & 65535ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { const bool t = c.r[17].sd[0] <= 0; c.f[31] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_0020929C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[30] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_00209044; } }
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 1;
L_00208F7C:
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = fp::sub(c.f[22], c.f[0]);
    st32((c.r[29].w[0] + 172u), c.f[0]);
    c.f[24] = fp::sub(c.f[21], c.f[2]);
    c.f[27] = fp::sub(c.f[20], c.f[1]);
    c.facc = fp::mul(c.f[23], c.f[23]);
    c.facc = fp::add(c.facc, fp::mul(c.f[26], c.f[26]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[25], c.f[25]));
    fpu_rsqrt(c, 0u, c.f[30], c.f[0]);
    c.f[23] = fp::mul(c.f[23], c.f[0]);
    c.f[26] = fp::mul(c.f[26], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208FB4u); c.f[25] = fp::mul(c.f[25], c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 31u, depth + 1u); else { c.pc = 0x0027C8D0u; return; } if (c.pc != 0x00208FB4u) [[unlikely]] return; }
L_00208FB4:
    c.f[0] = fp::mul(c.f[31], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208FC0u); st32((c.r[29].w[0] + 160u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 31u, depth + 1u); else { c.pc = 0x0027C8D0u; return; } if (c.pc != 0x00208FC0u) [[unlikely]] return; }
L_00208FC0:
    c.f[0] = fp::mul(c.f[31], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208FCCu); st32((c.r[29].w[0] + 164u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 31u, depth + 1u); else { c.pc = 0x0027C8D0u; return; } if (c.pc != 0x00208FCCu) [[unlikely]] return; }
L_00208FCC:
    c.f[5] = fp::mul(c.f[31], c.f[0]);
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[18], c.r[18].w[0] + 12u);
    c.f[1] = fp::mul(c.f[28], c.f[27]);
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.f[4] = ld32((c.r[19].w[0] + 20u));
    c.f[2] = ld32((c.r[19].w[0]));
    c.f[3] = fp::add(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    c.f[1] = 0u;
    c.f[4] = fp::sub(c.f[29], c.f[4]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[4], c.f[3]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[28], c.f[24]));
    c.f[2] = fp::mul(c.f[4], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    c.facc = fp::add(c.f[1], c.f[5]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[28], c.f[0]));
    c.f[1] = fp::mul(c.f[4], c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    set32(c.r[19], c.r[19].w[0] + 28u);
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 30;
L_00209044:
    c.r[3].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[18].w[0] + 8u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00208F7Cu | kUnwind; return; } goto L_00208F7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020929C; } }
L_00209058:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020915C; } }
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020915C; } }
    set32(c.r[20], ld32((c.r[16].w[0] + 112u)));
    c.r[18].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[19], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[18].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0020929C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[26] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_00209148; } }
    c.f[0] = ld32((c.r[19].w[0]));
    c.budget -= 1;
L_002090A4:
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[2] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    c.f[1] = fp::sub(c.f[21], c.f[1]);
    c.f[2] = fp::sub(c.f[22], c.f[2]);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_rsqrt(c, 3u, c.f[26], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[23] = fp::mul(c.f[0], c.f[3]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.f[24] = fp::mul(c.f[1], c.f[3]);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[25] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002090F4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x002090F4u) [[unlikely]] return; }
L_002090F4:
    c.f[2] = ld32((c.r[20].w[0] + 20u));
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.f[1] = fp::mul(c.f[28], c.f[0]);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[19], c.r[19].w[0] + 12u);
    c.f[2] = fp::sub(c.f[29], c.f[2]);
    c.f[3] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::mul(c.f[3], c.f[23]);
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[2] = fp::mul(c.f[3], c.f[24]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[1] = fp::mul(c.f[3], c.f[25]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 8u), c.f[0]);
    set32(c.r[20], c.r[20].w[0] + 28u);
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 21;
L_00209148:
    c.r[3].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[19].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002090A4u | kUnwind; return; } goto L_002090A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020929C; } }
L_0020915C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020929C; } }
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020929C; } }
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[20], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[19], ld32((c.r[16].w[0] + 32u)));
    c.r[18].d[0] = c.r[5].d[0] & 65535ull;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { const bool t = c.r[18].sd[0] <= 0; c.f[27] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_0020929C; } }
    c.f[23] = fp::mul(c.f[28], c.f[23]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[26] = fp::mul(c.f[28], c.f[26]);
    c.f[24] = c.r[3].w[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[25] = fp::mul(c.f[28], c.f[25]);  if (t) { goto L_0020928C; } }
L_002091C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002091C8u);  if (depth < kMaxDepth) unit_005F(c, 31u, depth + 1u); else { c.pc = 0x0027C8D0u; return; } if (c.pc != 0x002091C8u) [[unlikely]] return; }
L_002091C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002091D0u); c.f[28] = fp::mul(c.f[27], c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 31u, depth + 1u); else { c.pc = 0x0027C8D0u; return; } if (c.pc != 0x002091D0u) [[unlikely]] return; }
L_002091D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002091D8u); c.f[30] = fp::mul(c.f[27], c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 31u, depth + 1u); else { c.pc = 0x0027C8D0u; return; } if (c.pc != 0x002091D8u) [[unlikely]] return; }
L_002091D8:
    c.f[31] = fp::mul(c.f[27], c.f[0]);
    c.f[2] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[2] = fp::sub(c.f[20], c.f[2]);
    c.f[1] = fp::sub(c.f[21], c.f[1]);
    c.f[0] = fp::sub(c.f[22], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    fpu_rsqrt(c, 1u, c.f[24], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209224u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00209224u) [[unlikely]] return; }
L_00209224:
    c.f[1] = fp::mul(c.f[0], c.f[23]);
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[19], c.r[19].w[0] + 12u);
    c.f[2] = ld32((c.r[20].w[0] + 20u));
    c.f[1] = fp::add(c.f[28], c.f[1]);
    c.f[4] = fp::sub(c.f[29], c.f[2]);
    c.f[3] = fp::mul(c.f[4], c.f[1]);
    c.f[2] = ld32((c.r[20].w[0]));
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[30]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[20].w[0]), c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[0], c.f[26]));
    c.facc = fp::add(c.f[1], c.f[31]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[25]));
    c.f[1] = fp::mul(c.f[4], c.f[0]);
    c.f[2] = fp::mul(c.f[4], c.f[2]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 8u), c.f[0]);
    set32(c.r[20], c.r[20].w[0] + 28u);
    c.budget -= 26;
L_0020928C:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002091C0u | kUnwind; return; } goto L_002091C0; } }
L_0020929C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_002092A0:
    c.f[31] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[30] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 560u);  c.pc = t; return; }
L_002092F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[29].w[0] + 112u), c.f[2]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    c.f[23] = c.f[12];
    c.f[22] = c.f[13];
    c.f[21] = c.f[14];
    c.f[20] = c.f[15];
    c.budget -= 25;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[29].w[0] + 120u), c.f[0]);  if (t) { goto L_00209360; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_00209368; } }
L_00209360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209368u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x00209368u) [[unlikely]] return; }
L_00209368:
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020937Cu); set32(c.r[6], 0u + 4000u);  if (depth < kMaxDepth) unit_0044(c, 193u, depth + 1u); else { c.pc = 0x002114E0u; return; } if (c.pc != 0x0020937Cu) [[unlikely]] return; }
L_0020937C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002093D8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002093A8u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002093A8u) [[unlikely]] return; }
L_002093A8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002093B8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002093B8u) [[unlikely]] return; }
L_002093B8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002093D8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002093D8u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002093D8u) [[unlikely]] return; }
L_002093D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 10384u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[20].w[0] + 24u), c.r[19].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[20].w[0] + 32u), c.f[1]);
    st32((c.r[20].w[0] + 36u), c.f[0]);
    st32((c.r[20].w[0] + 40u), c.f[23]);
    st32((c.r[20].w[0] + 44u), c.f[22]);
    st32((c.r[20].w[0] + 48u), c.r[18].w[0]);
    st32((c.r[20].w[0] + 52u), c.f[21]);
    st32((c.r[20].w[0] + 56u), c.f[20]);
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
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00209450:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 396u)));  goto L_00209470; }
L_00209460:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 392u)));  goto L_002094D0; }
L_00209470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 40u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.r[6].w[0]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002094B0u); set32(c.r[5], c.r[29].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002094B0u) [[unlikely]] return; }
L_002094B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002094D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 56u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[8], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00209504u); set32(c.r[5], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00209504u) [[unlikely]] return; }
L_00209504:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00209530:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020958C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 10272u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00209570; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209570u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 313u, depth + 1u); else { c.pc = 0x00212380u; return; } if (c.pc != 0x00209570u) [[unlikely]] return; }
L_00209570:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00209590; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020958Cu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0020958Cu) [[unlikely]] return; }
L_0020958C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00209590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002095B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 11048u);  c.pc = t; return; }
L_002095C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002095D4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 338u, depth + 1u); else { c.pc = 0x002126F0u; return; } if (c.pc != 0x002095D4u) [[unlikely]] return; }
L_002095D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002095E0u); set32(c.r[4], ld32((c.r[2].w[0] - 11048u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002095E0u) [[unlikely]] return; }
L_002095E0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002095F4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002095F4u) [[unlikely]] return; }
L_002095F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00209610:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 342u, depth); }
L_00209620:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 343u, depth); }
L_00209630:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 344u, depth); }
L_00209640:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 345u, depth); }
L_00209650:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 355u, depth); }
L_00209660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209678u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00209678u) [[unlikely]] return; }
L_00209678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00209694; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209688u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x00209688u) [[unlikely]] return; }
L_00209688:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 10272u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00209694:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002096B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002096D8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002096D8u) [[unlikely]] return; }
L_002096D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002096F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002096E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x002096E8u) [[unlikely]] return; }
L_002096E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 10272u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002096F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209704u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 358u, depth + 1u); else { c.pc = 0x002128B0u; return; } if (c.pc != 0x00209704u) [[unlikely]] return; }
L_00209704:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00209720:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 44u), c.f[12]);  c.pc = t; return; }
L_00209730:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.f[0]);  c.pc = t; return; }
L_00209740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020975Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 304u, depth + 1u); else { c.pc = 0x00212200u; return; } if (c.pc != 0x0020975Cu) [[unlikely]] return; }
L_0020975C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 264u)));  goto L_0020978C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002097E0; } }
L_0020976C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[5].w[0])));  if (t) { goto L_0020978C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0020978C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00209798; } }
L_0020978C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020976Cu | kUnwind; return; } goto L_0020976C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00209798:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_002097A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002097E0; } }
L_002097A8:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002097B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002097B4u) [[unlikely]] return; }
L_002097B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 11208u);  if (t) { goto L_002097D0; } }
L_002097C0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_002097D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002097DC; } }
L_002097D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002097C0u | kUnwind; return; } goto L_002097C0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002097DC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002097E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00209800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020984C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 10080u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209830u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 185u, depth + 1u); else { c.pc = 0x002113B0u; return; } if (c.pc != 0x00209830u) [[unlikely]] return; }
L_00209830:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00209850; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020984Cu); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0020984Cu) [[unlikely]] return; }
L_0020984C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00209850:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00209870:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 11008u);  c.pc = t; return; }
L_00209880:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020989Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 140u, depth + 1u); else { c.pc = 0x00210F00u; return; } if (c.pc != 0x0020989Cu) [[unlikely]] return; }
L_0020989C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002098A8u); set32(c.r[4], ld32((c.r[2].w[0] - 11008u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002098A8u) [[unlikely]] return; }
L_002098A8:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002098BCu); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002098BCu) [[unlikely]] return; }
L_002098BC:
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002098CCu); set32(c.r[4], c.r[4].w[0] - 10992u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x002098CCu) [[unlikely]] return; }
L_002098CC:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002098E0u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002098E0u) [[unlikely]] return; }
L_002098E0:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002098F0u); set32(c.r[4], c.r[4].w[0] - 10982u);  if (depth < kMaxDepth) unit_0088(c, 241u, depth + 1u); else { c.pc = 0x00321C40u; return; } if (c.pc != 0x002098F0u) [[unlikely]] return; }
L_002098F0:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209904u); set32(c.r[6], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00209904u) [[unlikely]] return; }
L_00209904:
    c.f[12] = ld32((c.r[17].w[0] + 32u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209914u); set32(c.r[4], c.r[4].w[0] - 10966u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x00209914u) [[unlikely]] return; }
L_00209914:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209928u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00209928u) [[unlikely]] return; }
L_00209928:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 36u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209938u); set32(c.r[4], c.r[4].w[0] - 10956u);  if (depth < kMaxDepth) unit_0088(c, 241u, depth + 1u); else { c.pc = 0x00321C40u; return; } if (c.pc != 0x00209938u) [[unlikely]] return; }
L_00209938:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020994Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0020994Cu) [[unlikely]] return; }
L_0020994C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00209960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020997Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 150u, depth + 1u); else { c.pc = 0x00210FC0u; return; } if (c.pc != 0x0020997Cu) [[unlikely]] return; }
L_0020997C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 24u));  goto L_0020998C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002099D4; } }
L_0020998C:
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_002099D4; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 28u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002099D0; } }
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002099D0; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 36u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 36u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002099D4; }
L_002099D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002099D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002099F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209A0Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 152u, depth + 1u); else { c.pc = 0x00211040u; return; } if (c.pc != 0x00209A0Cu) [[unlikely]] return; }
L_00209A0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209A18u); set32(c.r[5], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00209A18u) [[unlikely]] return; }
L_00209A18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209A24u); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x00209A24u) [[unlikely]] return; }
L_00209A24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209A30u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00209A30u) [[unlikely]] return; }
L_00209A30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209A3Cu); set32(c.r[5], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x00209A3Cu) [[unlikely]] return; }
L_00209A3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00209A50:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 158u, depth); }
L_00209A60:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 161u, depth); }
L_00209A70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209A8Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 164u, depth + 1u); else { c.pc = 0x00211140u; return; } if (c.pc != 0x00209A8Cu) [[unlikely]] return; }
L_00209A8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209A98u); set32(c.r[5], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00209A98u) [[unlikely]] return; }
L_00209A98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209AA4u); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x00209AA4u) [[unlikely]] return; }
L_00209AA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209AB0u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00209AB0u) [[unlikely]] return; }
L_00209AB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209ABCu); set32(c.r[5], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x00209ABCu) [[unlikely]] return; }
L_00209ABC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00209AD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 40u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209AE8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00209AE8u) [[unlikely]] return; }
L_00209AE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00209B14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209AF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 191u, depth + 1u); else { c.pc = 0x00211490u; return; } if (c.pc != 0x00209AF8u) [[unlikely]] return; }
L_00209AF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 10080u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 32u), 0u);
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
L_00209B14:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00209B30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 40u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209B58u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00209B58u) [[unlikely]] return; }
L_00209B58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00209B84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209B68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 191u, depth + 1u); else { c.pc = 0x00211490u; return; } if (c.pc != 0x00209B68u) [[unlikely]] return; }
L_00209B68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 10080u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 32u), 0u);
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
L_00209B84:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209B94u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 175u, depth + 1u); else { c.pc = 0x00211290u; return; } if (c.pc != 0x00209B94u) [[unlikely]] return; }
L_00209B94:
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 36u));
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00209BD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = ld32((c.r[3].w[0] - 10280u));
    c.f[3] = c.r[6].w[0];
    c.f[2] = 0u;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_00209CB0; } }
L_00209BEC:
    set32(c.r[6], ld32((c.r[5].w[0] + 112u)));
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 28u));
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld16((c.r[7].w[0] + 24u));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.f[6] = c.f[3];  if (t) { goto L_00209C3C; } }
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[7].w[0] + 16u));  goto L_00209C40; }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00209C3C; } }
    fpu_div(c, 6u, c.f[0], c.f[1]);
    c.budget -= 3;
L_00209C3C:
    c.f[1] = ld32((c.r[7].w[0] + 16u));
    c.budget -= 1;
L_00209C40:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 36u));
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    c.f[5] = c.f[3];
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.f[1] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_00209C7C; } }
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00209C7C; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00209C7C; } }
    fpu_div(c, 5u, c.f[1], c.f[0]);
    c.budget -= 3;
L_00209C7C:
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[6]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[6] = c.f[5];  goto L_00209C88; }
L_00209C88:
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[4]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[6], ld32((c.r[5].w[0] + 84u)));  goto L_00209C9C; }
    c.f[6] = c.f[4];
    set32(c.r[6], ld32((c.r[5].w[0] + 84u)));
    c.budget -= 2;
L_00209C9C:
    set32(c.r[3], c.r[9].w[0] + 1u);
    set32(c.r[7], c.r[8].w[0] << 2);
    c.r[9].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0]), c.f[6]);
    c.budget -= 5;
L_00209CB0:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 48u));
    c.r[6].d[0] = c.r[9].d[0] & 65535ull;
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[8].d[0] = c.r[9].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00209BECu | kUnwind; return; } goto L_00209BEC; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00209CD0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 15;
    { const bool t = c.r[5].d[0] != 0ull; c.f[20] = c.f[13];  if (t) { goto L_00209D18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_00209D20; } }
L_00209D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209D20u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x00209D20u) [[unlikely]] return; }
L_00209D20:
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209D34u); set32(c.r[6], 0u + 3000u);  if (depth < kMaxDepth) unit_0044(c, 193u, depth + 1u); else { c.pc = 0x002114E0u; return; } if (c.pc != 0x00209D34u) [[unlikely]] return; }
L_00209D34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00209D90; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209D60u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00209D60u) [[unlikely]] return; }
L_00209D60:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209D70u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00209D70u) [[unlikely]] return; }
L_00209D70:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00209D90; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209D90u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00209D90u) [[unlikely]] return; }
L_00209D90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 10080u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    st32((c.r[20].w[0] + 24u), c.f[21]);
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st32((c.r[20].w[0] + 32u), c.f[20]);
    st16((c.r[20].w[0] + 36u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00209DE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00209E3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9968u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00209E20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209E20u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 313u, depth + 1u); else { c.pc = 0x00212380u; return; } if (c.pc != 0x00209E20u) [[unlikely]] return; }
L_00209E20:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00209E40; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209E3Cu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00209E3Cu) [[unlikely]] return; }
L_00209E3C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00209E40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00209E60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 10912u);  c.pc = t; return; }
L_00209E70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209E84u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 338u, depth + 1u); else { c.pc = 0x002126F0u; return; } if (c.pc != 0x00209E84u) [[unlikely]] return; }
L_00209E84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209E90u); set32(c.r[4], ld32((c.r[2].w[0] - 10912u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00209E90u) [[unlikely]] return; }
L_00209E90:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209EA4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00209EA4u) [[unlikely]] return; }
L_00209EA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00209EC0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 342u, depth); }
L_00209ED0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 343u, depth); }
L_00209EE0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 344u, depth); }
L_00209EF0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 345u, depth); }
L_00209F00:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 355u, depth); }
L_00209F10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209F28u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00209F28u) [[unlikely]] return; }
L_00209F28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00209F44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209F38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x00209F38u) [[unlikely]] return; }
L_00209F38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9968u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00209F44:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00209F60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209F88u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00209F88u) [[unlikely]] return; }
L_00209F88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00209FA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209F98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x00209F98u) [[unlikely]] return; }
L_00209F98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9968u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00209FA4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209FB4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 358u, depth + 1u); else { c.pc = 0x002128B0u; return; } if (c.pc != 0x00209FB4u) [[unlikely]] return; }
L_00209FB4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00209FD0:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 32u), c.f[12]);  c.pc = t; return; }
L_00209FE0:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.f[0]);  c.pc = t; return; }
L_00209FF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A00Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 304u, depth + 1u); else { c.pc = 0x00212200u; return; } if (c.pc != 0x0020A00Cu) [[unlikely]] return; }
L_0020A00C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 264u)));  goto L_0020A03C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020A090; } }
L_0020A01C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[5].w[0])));  if (t) { goto L_0020A03C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0020A03C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020A048; } }
L_0020A03C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020A01Cu | kUnwind; return; } goto L_0020A01C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020A048:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_0020A058; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020A090; } }
L_0020A058:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A064u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020A064u) [[unlikely]] return; }
L_0020A064:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 9864u);  if (t) { goto L_0020A080; } }
L_0020A070:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_0020A080; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0020A08C; } }
L_0020A080:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020A070u | kUnwind; return; } goto L_0020A070; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020A08C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0020A090:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020A0B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020A10C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9776u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0020A0F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A0F0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 313u, depth + 1u); else { c.pc = 0x00212380u; return; } if (c.pc != 0x0020A0F0u) [[unlikely]] return; }
L_0020A0F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0020A110; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A10Cu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0020A10Cu) [[unlikely]] return; }
L_0020A10C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0020A110:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020A130:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 10864u);  c.pc = t; return; }
L_0020A140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A154u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 338u, depth + 1u); else { c.pc = 0x002126F0u; return; } if (c.pc != 0x0020A154u) [[unlikely]] return; }
L_0020A154:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A160u); set32(c.r[4], ld32((c.r[2].w[0] - 10864u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0020A160u) [[unlikely]] return; }
L_0020A160:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A174u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0020A174u) [[unlikely]] return; }
L_0020A174:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020A190:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 342u, depth); }
L_0020A1A0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 343u, depth); }
L_0020A1B0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 344u, depth); }
L_0020A1C0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 345u, depth); }
L_0020A1D0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 355u, depth); }
L_0020A1E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A1F8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0020A1F8u) [[unlikely]] return; }
L_0020A1F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0020A214; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A208u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x0020A208u) [[unlikely]] return; }
L_0020A208:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9776u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0020A214:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020A230:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A258u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0020A258u) [[unlikely]] return; }
L_0020A258:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0020A274; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A268u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x0020A268u) [[unlikely]] return; }
L_0020A268:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9776u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0020A274:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A284u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 358u, depth + 1u); else { c.pc = 0x002128B0u; return; } if (c.pc != 0x0020A284u) [[unlikely]] return; }
L_0020A284:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020A2A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 36u), c.f[12]);  c.pc = t; return; }
L_0020A2B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.f[0]);  c.pc = t; return; }
L_0020A2C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A2DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 304u, depth + 1u); else { c.pc = 0x00212200u; return; } if (c.pc != 0x0020A2DCu) [[unlikely]] return; }
L_0020A2DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 264u)));  goto L_0020A30C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020A360; } }
L_0020A2EC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[5].w[0])));  if (t) { goto L_0020A30C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0020A30C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020A318; } }
L_0020A30C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020A2ECu | kUnwind; return; } goto L_0020A2EC; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020A318:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_0020A328; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020A360; } }
L_0020A328:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A334u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020A334u) [[unlikely]] return; }
L_0020A334:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 9864u);  if (t) { goto L_0020A350; } }
L_0020A340:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_0020A350; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0020A35C; } }
L_0020A350:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020A340u | kUnwind; return; } goto L_0020A340; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020A35C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0020A360:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020A380:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020A3DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9584u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0020A3C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A3C0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 313u, depth + 1u); else { c.pc = 0x00212380u; return; } if (c.pc != 0x0020A3C0u) [[unlikely]] return; }
L_0020A3C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0020A3E0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A3DCu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0020A3DCu) [[unlikely]] return; }
L_0020A3DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0020A3E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020A400:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 10816u);  c.pc = t; return; }
L_0020A410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A424u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 338u, depth + 1u); else { c.pc = 0x002126F0u; return; } if (c.pc != 0x0020A424u) [[unlikely]] return; }
L_0020A424:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A430u); set32(c.r[4], ld32((c.r[2].w[0] - 10816u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0020A430u) [[unlikely]] return; }
L_0020A430:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A444u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0020A444u) [[unlikely]] return; }
L_0020A444:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020A460:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 342u, depth); }
L_0020A470:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 343u, depth); }
L_0020A480:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 344u, depth); }
L_0020A490:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 345u, depth); }
L_0020A4A0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 355u, depth); }
L_0020A4B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A4C8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0020A4C8u) [[unlikely]] return; }
L_0020A4C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0020A4E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A4D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x0020A4D8u) [[unlikely]] return; }
L_0020A4D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9584u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0020A4E4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020A500:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A528u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0020A528u) [[unlikely]] return; }
L_0020A528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0020A544; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A538u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x0020A538u) [[unlikely]] return; }
L_0020A538:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9584u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0020A544:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A554u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 358u, depth + 1u); else { c.pc = 0x002128B0u; return; } if (c.pc != 0x0020A554u) [[unlikely]] return; }
L_0020A554:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020A570:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 24u), c.f[12]);  c.pc = t; return; }
L_0020A580:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.f[0]);  c.pc = t; return; }
L_0020A590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A5ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 304u, depth + 1u); else { c.pc = 0x00212200u; return; } if (c.pc != 0x0020A5ACu) [[unlikely]] return; }
L_0020A5AC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 264u)));  goto L_0020A5DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020A630; } }
L_0020A5BC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[5].w[0])));  if (t) { goto L_0020A5DC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0020A5DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020A5E8; } }
L_0020A5DC:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020A5BCu | kUnwind; return; } goto L_0020A5BC; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020A5E8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_0020A5F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020A630; } }
L_0020A5F8:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A604u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020A604u) [[unlikely]] return; }
L_0020A604:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 9864u);  if (t) { goto L_0020A620; } }
L_0020A610:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_0020A620; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0020A62C; } }
L_0020A620:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020A610u | kUnwind; return; } goto L_0020A610; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020A62C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0020A630:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020A650:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020A6AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9392u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0020A690; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A690u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 313u, depth + 1u); else { c.pc = 0x00212380u; return; } if (c.pc != 0x0020A690u) [[unlikely]] return; }
L_0020A690:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0020A6B0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A6ACu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0020A6ACu) [[unlikely]] return; }
L_0020A6AC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0020A6B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020A6D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 10768u);  c.pc = t; return; }
L_0020A6E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A6F4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 338u, depth + 1u); else { c.pc = 0x002126F0u; return; } if (c.pc != 0x0020A6F4u) [[unlikely]] return; }
L_0020A6F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A700u); set32(c.r[4], ld32((c.r[2].w[0] - 10768u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0020A700u) [[unlikely]] return; }
L_0020A700:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A714u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0020A714u) [[unlikely]] return; }
L_0020A714:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020A730:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 342u, depth); }
L_0020A740:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 343u, depth); }
L_0020A750:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 344u, depth); }
L_0020A760:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 345u, depth); }
L_0020A770:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 355u, depth); }
L_0020A780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A798u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0020A798u) [[unlikely]] return; }
L_0020A798:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0020A7B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A7A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x0020A7A8u) [[unlikely]] return; }
L_0020A7A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9392u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0020A7B4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020A7D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A7F8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0020A7F8u) [[unlikely]] return; }
L_0020A7F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0020A814; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A808u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x0020A808u) [[unlikely]] return; }
L_0020A808:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9392u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0020A814:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A824u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 358u, depth + 1u); else { c.pc = 0x002128B0u; return; } if (c.pc != 0x0020A824u) [[unlikely]] return; }
L_0020A824:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020A840:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 28u), c.f[12]);  c.pc = t; return; }
L_0020A850:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.f[0]);  c.pc = t; return; }
L_0020A860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A87Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 304u, depth + 1u); else { c.pc = 0x00212200u; return; } if (c.pc != 0x0020A87Cu) [[unlikely]] return; }
L_0020A87C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 264u)));  goto L_0020A8AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020A900; } }
L_0020A88C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[5].w[0])));  if (t) { goto L_0020A8AC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0020A8AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020A8B8; } }
L_0020A8AC:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020A88Cu | kUnwind; return; } goto L_0020A88C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020A8B8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_0020A8C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020A900; } }
L_0020A8C8:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A8D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020A8D4u) [[unlikely]] return; }
L_0020A8D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 9864u);  if (t) { goto L_0020A8F0; } }
L_0020A8E0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_0020A8F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0020A8FC; } }
L_0020A8F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020A8E0u | kUnwind; return; } goto L_0020A8E0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020A8FC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0020A900:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020A920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020AA08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[17].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] - 9200u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0020A988; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9008u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_0020A988; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[2], c.r[2].w[0] - 9024u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 21984u);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A988u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x0020A988u) [[unlikely]] return; }
L_0020A988:
    set32(c.r[3], c.r[17].w[0] + 80u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020A9CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9040u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_0020A9CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[2], c.r[2].w[0] - 9056u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 6704u);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A9CCu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x0020A9CCu) [[unlikely]] return; }
L_0020A9CC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0020A9F0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 12912u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A9ECu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 185u, depth + 1u); else { c.pc = 0x002113B0u; return; } if (c.pc != 0x0020A9ECu) [[unlikely]] return; }
L_0020A9EC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0020A9F0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0020AA0C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AA08u); set32(c.r[5], 0u + 144u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0020AA08u) [[unlikely]] return; }
L_0020AA08:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0020AA0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020AA20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020AA9C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_0020AA84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AA54u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020AA54u) [[unlikely]] return; }
L_0020AA54:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AA64u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020AA64u) [[unlikely]] return; }
L_0020AA64:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020AA80; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AA80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020AA80u) [[unlikely]] return; }
L_0020AA80:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_0020AA84:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0020AAA0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AA9Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0020AA9Cu) [[unlikely]] return; }
L_0020AA9C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0020AAA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020AAC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 10720u);  c.pc = t; return; }
L_0020AAD0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AAF0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0040(c, 152u, depth + 1u); else { c.pc = 0x00201D90u; return; } if (c.pc != 0x0020AAF0u) [[unlikely]] return; }
L_0020AAF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AAFCu); set32(c.r[4], ld32((c.r[2].w[0] - 10720u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0020AAFCu) [[unlikely]] return; }
L_0020AAFC:
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AB10u); set32(c.r[6], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0020AB10u) [[unlikely]] return; }
L_0020AB10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0020AB60; } }
L_0020AB18:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0020AB30; }
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_0020AB30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0020AB60; }
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AB48u); set32(c.r[4], c.r[4].w[0] - 10672u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x0020AB48u) [[unlikely]] return; }
L_0020AB48:
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AB5Cu); set32(c.r[6], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0020AB5Cu) [[unlikely]] return; }
L_0020AB5C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0020AB60:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 92u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020AB18u | kUnwind; return; } goto L_0020AB18; }
    set32(c.r[2], ld32((c.r[18].w[0] + 116u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0020AC8C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 10704u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00208000u < 16384u) { entry = entries_0042[(t - 0x00208000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0020AB9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 10657u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ABB0u); set32(c.r[5], c.r[5].w[0] - 10641u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x0020ABB0u) [[unlikely]] return; }
L_0020ABB0:
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ABC4u); set32(c.r[6], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0020ABC4u) [[unlikely]] return; }
L_0020ABC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 112u)));  if (t) { goto L_0020ACB8; } }
L_0020ABCC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 10657u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ABE0u); set32(c.r[5], c.r[5].w[0] - 10619u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x0020ABE0u) [[unlikely]] return; }
L_0020ABE0:
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ABF4u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0020ABF4u) [[unlikely]] return; }
L_0020ABF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020ACB4; } }
L_0020ABFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 10657u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AC10u); set32(c.r[5], c.r[5].w[0] - 10594u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x0020AC10u) [[unlikely]] return; }
L_0020AC10:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AC24u); set32(c.r[6], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0020AC24u) [[unlikely]] return; }
L_0020AC24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020ACB4; } }
L_0020AC2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 10657u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AC40u); set32(c.r[5], c.r[5].w[0] - 10569u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x0020AC40u) [[unlikely]] return; }
L_0020AC40:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AC54u); set32(c.r[6], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0020AC54u) [[unlikely]] return; }
L_0020AC54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020ACB4; } }
L_0020AC5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 10657u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AC70u); set32(c.r[5], c.r[5].w[0] - 10543u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x0020AC70u) [[unlikely]] return; }
L_0020AC70:
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AC84u); set32(c.r[6], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0020AC84u) [[unlikely]] return; }
L_0020AC84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020ACB4; } }
L_0020AC8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 10657u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ACA0u); set32(c.r[5], c.r[5].w[0] - 10517u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x0020ACA0u) [[unlikely]] return; }
L_0020ACA0:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ACB4u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0020ACB4u) [[unlikely]] return; }
L_0020ACB4:
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    c.budget -= 1;
L_0020ACB8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0020AD70; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0020AD44; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0020AD18; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0020ACEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020AD70; } }
L_0020ACEC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 10506u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ACFCu); set32(c.r[5], c.r[5].w[0] - 10486u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x0020ACFCu) [[unlikely]] return; }
L_0020ACFC:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AD10u); set32(c.r[6], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0020AD10u) [[unlikely]] return; }
L_0020AD10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[18].w[0] + 120u));  if (t) { goto L_0020AD9C; } }
L_0020AD18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 10506u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AD28u); set32(c.r[5], c.r[5].w[0] - 10462u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x0020AD28u) [[unlikely]] return; }
L_0020AD28:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AD3Cu); set32(c.r[6], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0020AD3Cu) [[unlikely]] return; }
L_0020AD3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020AD98; } }
L_0020AD44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 10506u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AD54u); set32(c.r[5], c.r[5].w[0] - 10439u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x0020AD54u) [[unlikely]] return; }
L_0020AD54:
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AD68u); set32(c.r[6], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0020AD68u) [[unlikely]] return; }
L_0020AD68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020AD98; } }
L_0020AD70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 10506u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AD84u); set32(c.r[5], c.r[5].w[0] - 10517u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x0020AD84u) [[unlikely]] return; }
L_0020AD84:
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AD98u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0020AD98u) [[unlikely]] return; }
L_0020AD98:
    c.f[12] = ld32((c.r[18].w[0] + 120u));
    c.budget -= 1;
L_0020AD9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ADA8u); set32(c.r[4], c.r[4].w[0] - 10413u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x0020ADA8u) [[unlikely]] return; }
L_0020ADA8:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ADBCu); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0020ADBCu) [[unlikely]] return; }
L_0020ADBC:
    c.f[12] = ld32((c.r[18].w[0] + 124u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ADCCu); set32(c.r[4], c.r[4].w[0] - 10395u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x0020ADCCu) [[unlikely]] return; }
L_0020ADCC:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ADE0u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0020ADE0u) [[unlikely]] return; }
L_0020ADE0:
    c.f[12] = ld32((c.r[18].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ADF0u); set32(c.r[4], c.r[4].w[0] - 10377u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x0020ADF0u) [[unlikely]] return; }
L_0020ADF0:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AE04u); set32(c.r[6], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0020AE04u) [[unlikely]] return; }
L_0020AE04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0020AE20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AE44u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0040(c, 178u, depth + 1u); else { c.pc = 0x00201F70u; return; } if (c.pc != 0x0020AE44u) [[unlikely]] return; }
L_0020AE44:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld16((c.r[19].w[0] + 90u));  goto L_0020AE54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020AF60; } }
L_0020AE54:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 90u));
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_0020AED4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020AF60; } }
L_0020AE68:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[2].w[0])));  if (t) { goto L_0020AE8C; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0020AF60; }
L_0020AE8C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0020AEA8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0020AEA8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020AF60; } }
L_0020AEA8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0020AED4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AEC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020AEC0u) [[unlikely]] return; }
L_0020AEC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020AED0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020AF60; } }
L_0020AED0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0020AED4:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020AE68u | kUnwind; return; } goto L_0020AE68; }
    set32(c.r[3], ld32((c.r[19].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 116u)));  goto L_0020AEF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020AF60; } }
L_0020AEF8:
    set32(c.r[2], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[1] = ld32((c.r[19].w[0] + 120u));  goto L_0020AF0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020AF60; } }
L_0020AF0C:
    c.f[0] = ld32((c.r[18].w[0] + 120u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0020AF20; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020AF20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020AF40; } }
    c.f[1] = ld32((c.r[19].w[0] + 124u));
    c.f[0] = ld32((c.r[18].w[0] + 124u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0020AF40; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020AF40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020AF60; } }
    c.f[1] = ld32((c.r[19].w[0] + 128u));
    c.f[0] = ld32((c.r[18].w[0] + 128u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0020AF60; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020AF60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020AF80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AFA0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202100u; return; } if (c.pc != 0x0020AFA0u) [[unlikely]] return; }
L_0020AFA0:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 90u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AFB4u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x0020AFB4u) [[unlikely]] return; }
L_0020AFB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0020AFDC; } }
L_0020AFBC:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AFD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020AFD8u) [[unlikely]] return; }
L_0020AFD8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0020AFDC:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020AFBCu | kUnwind; return; } goto L_0020AFBC; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AFF8u); set32(c.r[5], c.r[18].w[0] + 112u);  if (depth < kMaxDepth) unit_0043(c, 197u, depth + 1u); else { c.pc = 0x0020F040u; return; } if (c.pc != 0x0020AFF8u) [[unlikely]] return; }
L_0020AFF8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B004u); set32(c.r[5], c.r[18].w[0] + 116u);  if (depth < kMaxDepth) unit_0043(c, 196u, depth + 1u); else { c.pc = 0x0020F030u; return; } if (c.pc != 0x0020B004u) [[unlikely]] return; }
L_0020B004:
    set32(c.r[4], c.r[18].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B010u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 43u, depth + 1u); else { c.pc = 0x002C8570u; return; } if (c.pc != 0x0020B010u) [[unlikely]] return; }
L_0020B010:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020B030:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002021C0u | kUnwind; return; } [[clang::musttail]] return unit_0040(c, 195u, depth); }
L_0020B040:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B06Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 196u, depth + 1u); else { c.pc = 0x002021D0u; return; } if (c.pc != 0x0020B06Cu) [[unlikely]] return; }
L_0020B06C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B074u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 104u, depth + 1u); else { c.pc = 0x0030CAE0u; return; } if (c.pc != 0x0020B074u) [[unlikely]] return; }
L_0020B074:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_0020B21C; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 88u));
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[3].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_0020B20C; }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 90u));
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[21], ld32((c.r[17].w[0] + 84u)));  goto L_0020B134; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[19].d[0] & 65535ull;  if (t) { goto L_0020B118; } }
L_0020B0A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B0ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 389u, depth + 1u); else { c.pc = 0x0020B3D0u; return; } if (c.pc != 0x0020B0ACu) [[unlikely]] return; }
L_0020B0AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    set32(c.r[18], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B0C4u); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_0042(c, 388u, depth + 1u); else { c.pc = 0x0020B3B0u; return; } if (c.pc != 0x0020B0C4u) [[unlikely]] return; }
L_0020B0C4:
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B0D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 191u, depth + 1u); else { c.pc = 0x001BE5D0u; return; } if (c.pc != 0x0020B0D4u) [[unlikely]] return; }
L_0020B0D4:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], c.r[20].w[0] + 1u);  goto L_0020B114; }
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B0E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 389u, depth + 1u); else { c.pc = 0x0020B3D0u; return; } if (c.pc != 0x0020B0E8u) [[unlikely]] return; }
L_0020B0E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[5], c.r[29].w[0] + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B0F8u); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_0042(c, 382u, depth + 1u); else { c.pc = 0x0020B300u; return; } if (c.pc != 0x0020B0F8u) [[unlikely]] return; }
L_0020B0F8:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B104u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 191u, depth + 1u); else { c.pc = 0x001BE5D0u; return; } if (c.pc != 0x0020B104u) [[unlikely]] return; }
L_0020B104:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 92u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 92u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[20].w[0] + 1u);
    c.budget -= 4;
L_0020B114:
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0020B118:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 90u));
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 124u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B0A4u | kUnwind; return; } goto L_0020B0A4; }
    st16((c.r[17].w[0] + 90u), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[21], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 2;
L_0020B134:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st16((c.r[17].w[0] + 88u), static_cast<std::uint16_t>(c.r[19].w[0]));  if (t) { goto L_0020B1D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B144u); c.r[4].d[0] = ld16((c.r[17].w[0] + 88u));  if (depth < kMaxDepth) unit_0042(c, 376u, depth + 1u); else { c.pc = 0x0020B260u; return; } if (c.pc != 0x0020B144u) [[unlikely]] return; }
L_0020B144:
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0020B16C; } }
L_0020B150:
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[21].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B164u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0042(c, 382u, depth + 1u); else { c.pc = 0x0020B300u; return; } if (c.pc != 0x0020B164u) [[unlikely]] return; }
L_0020B164:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_0020B16C:
    c.r[20].d[0] = ld16((c.r[17].w[0] + 90u));
    c.r[2].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B150u | kUnwind; return; } goto L_0020B150; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[17].w[0] + 88u));  if (t) { goto L_0020B1C0; } }
L_0020B188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B190u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 389u, depth + 1u); else { c.pc = 0x0020B3D0u; return; } if (c.pc != 0x0020B190u) [[unlikely]] return; }
L_0020B190:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 116u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B1A8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0042(c, 382u, depth + 1u); else { c.pc = 0x0020B300u; return; } if (c.pc != 0x0020B1A8u) [[unlikely]] return; }
L_0020B1A8:
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B1B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 191u, depth + 1u); else { c.pc = 0x001BE5D0u; return; } if (c.pc != 0x0020B1B4u) [[unlikely]] return; }
L_0020B1B4:
    set32(c.r[2], c.r[20].w[0] + 1u);
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[17].w[0] + 88u));
    c.budget -= 3;
L_0020B1C0:
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 116u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B188u | kUnwind; return; } goto L_0020B188; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0020B1E0; } }
L_0020B1D8:
    st32((c.r[17].w[0] + 84u), 0u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_0020B1E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B1E8u);  if (depth < kMaxDepth) unit_0042(c, 375u, depth + 1u); else { c.pc = 0x0020B240u; return; } if (c.pc != 0x0020B1E8u) [[unlikely]] return; }
L_0020B1E8:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020B20C; } }
L_0020B1F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B1FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x0020B1FCu) [[unlikely]] return; }
L_0020B1FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B208u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 431u, depth + 1u); else { c.pc = 0x0020B850u; return; } if (c.pc != 0x0020B208u) [[unlikely]] return; }
L_0020B208:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0020B20C:
    c.r[3].d[0] = c.r[18].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B1F4u | kUnwind; return; } goto L_0020B1F4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0020B21C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0020B240:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] - 6704u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { set32(c.r[7], 0u + 1u);  [[clang::musttail]] return unit_00A5(c, 164u, depth); }
L_0020B260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B280u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0020B280u) [[unlikely]] return; }
L_0020B280:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 19792u);
    set32(c.r[6], c.r[6].w[0] - 6704u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B2A0u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0020B2A0u) [[unlikely]] return; }
L_0020B2A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020B2B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_0020B2E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B2D8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020B2D8u) [[unlikely]] return; }
L_0020B2D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B2E8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020B2E8u) [[unlikely]] return; }
L_0020B2E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020B300:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020B388; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0])));  goto L_0020B368; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B338u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020B338u) [[unlikely]] return; }
L_0020B338:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B348u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020B348u) [[unlikely]] return; }
L_0020B348:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020B364; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B364u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020B364u) [[unlikely]] return; }
L_0020B364:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0020B368:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_0020B388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B378u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020B378u) [[unlikely]] return; }
L_0020B378:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B388u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020B388u) [[unlikely]] return; }
L_0020B388:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020B3B0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0020B3D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_0020B408; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B3F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020B3F8u) [[unlikely]] return; }
L_0020B3F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B408u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020B408u) [[unlikely]] return; }
L_0020B408:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020B420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B43Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 197u, depth + 1u); else { c.pc = 0x002021E0u; return; } if (c.pc != 0x0020B43Cu) [[unlikely]] return; }
L_0020B43C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B444u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 105u, depth + 1u); else { c.pc = 0x0030CB00u; return; } if (c.pc != 0x0020B444u) [[unlikely]] return; }
L_0020B444:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B450u); set32(c.r[5], c.r[17].w[0] + 112u);  if (depth < kMaxDepth) unit_0043(c, 199u, depth + 1u); else { c.pc = 0x0020F060u; return; } if (c.pc != 0x0020B450u) [[unlikely]] return; }
L_0020B450:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B45Cu); set32(c.r[5], c.r[17].w[0] + 116u);  if (depth < kMaxDepth) unit_0043(c, 198u, depth + 1u); else { c.pc = 0x0020F050u; return; } if (c.pc != 0x0020B45Cu) [[unlikely]] return; }
L_0020B45C:
    set32(c.r[4], c.r[17].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B468u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C85C0u; return; } if (c.pc != 0x0020B468u) [[unlikely]] return; }
L_0020B468:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020B480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 144u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B494u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0020B494u) [[unlikely]] return; }
L_0020B494:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0020B4A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B4A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 159u, depth + 1u); else { c.pc = 0x0020E9A0u; return; } if (c.pc != 0x0020B4A4u) [[unlikely]] return; }
L_0020B4A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0020B4A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0020B4B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B4D8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0044(c, 171u, depth + 1u); else { c.pc = 0x002111D0u; return; } if (c.pc != 0x0020B4D8u) [[unlikely]] return; }
L_0020B4D8:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; mmi::divu(c, 0, c.r[20].w[0], c.r[3].w[0]);  if (t) { goto L_0020B4F0; } }
    breakpoint(c, 0x0020B4ECu);
    c.budget -= 1;
L_0020B4F0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_0020B518; } }
L_0020B508:
    c.budget -= 2;
    if (c.r[20].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_0020B518; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_0020B520; } }
L_0020B518:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B508u | kUnwind; return; } goto L_0020B508; }
L_0020B520:
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0020B5C0; } }
L_0020B52C:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0020B544; }
    set32(c.r[3], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 4;
L_0020B544:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0020B5C0; }
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::divu(c, 0, c.r[5].w[0], c.r[2].w[0]);  if (t) { goto L_0020B560; } }
    breakpoint(c, 0x0020B55Cu);
    c.budget -= 1;
L_0020B560:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0])));  if (t) { goto L_0020B58C; } }
L_0020B578:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[3].w[0])));  goto L_0020B58C; }
    set32(c.r[18], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0020B598; } }
L_0020B58C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B578u | kUnwind; return; } goto L_0020B578; }
    goto L_0020B594;
L_0020B590:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_0020B594:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020B598:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0020B5B4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B5ACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 431u, depth + 1u); else { c.pc = 0x0020B850u; return; } if (c.pc != 0x0020B5ACu) [[unlikely]] return; }
L_0020B5AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020B5BC; } }
L_0020B5B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B5BCu);  if (depth < kMaxDepth) unit_0042(c, 431u, depth + 1u); else { c.pc = 0x0020B850u; return; } if (c.pc != 0x0020B5BCu) [[unlikely]] return; }
L_0020B5BC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0020B5C0:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 92u));
    c.r[3].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B52Cu | kUnwind; return; } goto L_0020B52C; }
L_0020B5D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0020B5F0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B61Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 210u, depth + 1u); else { c.pc = 0x002022B0u; return; } if (c.pc != 0x0020B61Cu) [[unlikely]] return; }
L_0020B61C:
    c.r[19].d[0] = ld16((c.r[17].w[0] + 90u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 88u));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 112u)));  goto L_0020B78C; }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 90u));
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[20], ld32((c.r[16].w[0] + 84u)));  goto L_0020B6D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[19].d[0] & 65535ull;  if (t) { goto L_0020B6B8; } }
L_0020B644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B64Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 389u, depth + 1u); else { c.pc = 0x0020B3D0u; return; } if (c.pc != 0x0020B64Cu) [[unlikely]] return; }
L_0020B64C:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    set32(c.r[18], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B664u); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_0042(c, 388u, depth + 1u); else { c.pc = 0x0020B3B0u; return; } if (c.pc != 0x0020B664u) [[unlikely]] return; }
L_0020B664:
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B674u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 191u, depth + 1u); else { c.pc = 0x001BE5D0u; return; } if (c.pc != 0x0020B674u) [[unlikely]] return; }
L_0020B674:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], c.r[20].w[0] + 1u);  goto L_0020B6B4; }
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B688u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 389u, depth + 1u); else { c.pc = 0x0020B3D0u; return; } if (c.pc != 0x0020B688u) [[unlikely]] return; }
L_0020B688:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], c.r[29].w[0] + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B698u); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_0042(c, 382u, depth + 1u); else { c.pc = 0x0020B300u; return; } if (c.pc != 0x0020B698u) [[unlikely]] return; }
L_0020B698:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B6A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 191u, depth + 1u); else { c.pc = 0x001BE5D0u; return; } if (c.pc != 0x0020B6A4u) [[unlikely]] return; }
L_0020B6A4:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 92u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 92u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[20].w[0] + 1u);
    c.budget -= 4;
L_0020B6B4:
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0020B6B8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 90u));
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 124u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B644u | kUnwind; return; } goto L_0020B644; }
    st16((c.r[16].w[0] + 90u), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[20], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 2;
L_0020B6D4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st16((c.r[16].w[0] + 88u), static_cast<std::uint16_t>(c.r[19].w[0]));  if (t) { goto L_0020B778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B6E4u); c.r[4].d[0] = ld16((c.r[16].w[0] + 88u));  if (depth < kMaxDepth) unit_0042(c, 376u, depth + 1u); else { c.pc = 0x0020B260u; return; } if (c.pc != 0x0020B6E4u) [[unlikely]] return; }
L_0020B6E4:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0020B70C; } }
L_0020B6F0:
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B704u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0042(c, 382u, depth + 1u); else { c.pc = 0x0020B300u; return; } if (c.pc != 0x0020B704u) [[unlikely]] return; }
L_0020B704:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_0020B70C:
    c.r[19].d[0] = ld16((c.r[16].w[0] + 90u));
    c.r[2].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B6F0u | kUnwind; return; } goto L_0020B6F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[16].w[0] + 88u));  if (t) { goto L_0020B760; } }
L_0020B728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B730u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 389u, depth + 1u); else { c.pc = 0x0020B3D0u; return; } if (c.pc != 0x0020B730u) [[unlikely]] return; }
L_0020B730:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[3].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 116u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B748u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0042(c, 382u, depth + 1u); else { c.pc = 0x0020B300u; return; } if (c.pc != 0x0020B748u) [[unlikely]] return; }
L_0020B748:
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B754u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 191u, depth + 1u); else { c.pc = 0x001BE5D0u; return; } if (c.pc != 0x0020B754u) [[unlikely]] return; }
L_0020B754:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[16].w[0] + 88u));
    c.budget -= 3;
L_0020B760:
    c.r[3].d[0] = c.r[19].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 116u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B728u | kUnwind; return; } goto L_0020B728; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0020B780; } }
L_0020B778:
    st32((c.r[16].w[0] + 84u), 0u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_0020B780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B788u);  if (depth < kMaxDepth) unit_0042(c, 375u, depth + 1u); else { c.pc = 0x0020B240u; return; } if (c.pc != 0x0020B788u) [[unlikely]] return; }
L_0020B788:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 1;
L_0020B78C:
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 120u));
    st32((c.r[16].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 124u));
    st32((c.r[16].w[0] + 124u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    st32((c.r[16].w[0] + 128u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0020B7E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 144u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B808u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0020B808u) [[unlikely]] return; }
L_0020B808:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0020B824; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B81Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 159u, depth + 1u); else { c.pc = 0x0020E9A0u; return; } if (c.pc != 0x0020B81Cu) [[unlikely]] return; }
L_0020B81C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0020B824:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B830u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 410u, depth + 1u); else { c.pc = 0x0020B5F0u; return; } if (c.pc != 0x0020B830u) [[unlikely]] return; }
L_0020B830:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020B850:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020BC98; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 124u), c.r[16].w[0]);  if (t) { goto L_0020B89C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B888u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020B888u) [[unlikely]] return; }
L_0020B888:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B89Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020B89Cu) [[unlikely]] return; }
L_0020B89C:
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B8A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 389u, depth + 1u); else { c.pc = 0x0020B3D0u; return; } if (c.pc != 0x0020B8A8u) [[unlikely]] return; }
L_0020B8A8:
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B8B4u); set32(c.r[5], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_0043(c, 49u, depth + 1u); else { c.pc = 0x0020C530u; return; } if (c.pc != 0x0020B8B4u) [[unlikely]] return; }
L_0020B8B4:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B8C4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 191u, depth + 1u); else { c.pc = 0x001BE5D0u; return; } if (c.pc != 0x0020B8C4u) [[unlikely]] return; }
L_0020B8C4:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 124u)));  goto L_0020B94C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld16((c.r[17].w[0] + 90u));  if (t) { goto L_0020B92C; } }
L_0020B8D4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B8E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 389u, depth + 1u); else { c.pc = 0x0020B3D0u; return; } if (c.pc != 0x0020B8E0u) [[unlikely]] return; }
L_0020B8E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[18], c.r[19].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B8F4u); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_0043(c, 49u, depth + 1u); else { c.pc = 0x0020C530u; return; } if (c.pc != 0x0020B8F4u) [[unlikely]] return; }
L_0020B8F4:
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B904u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 191u, depth + 1u); else { c.pc = 0x001BE5D0u; return; } if (c.pc != 0x0020B904u) [[unlikely]] return; }
L_0020B904:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_0020B930; }
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B91Cu); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_0042(c, 382u, depth + 1u); else { c.pc = 0x0020B300u; return; } if (c.pc != 0x0020B91Cu) [[unlikely]] return; }
L_0020B91C:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 92u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 92u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0020B948; } }
L_0020B92C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0020B930:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B8D4u | kUnwind; return; } goto L_0020B8D4; } }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 90u));
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B948u); set32(c.r[6], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0043(c, 20u, depth + 1u); else { c.pc = 0x0020C230u; return; } if (c.pc != 0x0020B948u) [[unlikely]] return; }
L_0020B948:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 1;
L_0020B94C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 224u)));  goto L_0020B994; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B95Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020B95Cu) [[unlikely]] return; }
L_0020B95C:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B970u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020B970u) [[unlikely]] return; }
L_0020B970:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020B990; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B990u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020B990u) [[unlikely]] return; }
L_0020B990:
    set32(c.r[2], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 1;
L_0020B994:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 12u);  goto L_0020BAF8; }
    set32(c.r[18], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], 0u + 12u);  goto L_0020BA88; }
    set32(c.r[4], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B9B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0020B9B4u) [[unlikely]] return; }
L_0020B9B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0020BA10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B9D0u); st32((c.r[20].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020B9D0u) [[unlikely]] return; }
L_0020B9D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B9E0u); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020B9E0u) [[unlikely]] return; }
L_0020B9E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 9088u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[20].w[0] + 8u), 0u);  if (t) { goto L_0020BA10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BA00u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020BA00u) [[unlikely]] return; }
L_0020BA00:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BA10u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020BA10u) [[unlikely]] return; }
L_0020BA10:
    set32(c.r[19], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[18].d[0]) { st32((c.r[29].w[0] + 120u), c.r[20].w[0]);  goto L_0020BB60; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[20].w[0] + 8u), c.r[18].w[0]);  goto L_0020BA5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BA2Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020BA2Cu) [[unlikely]] return; }
L_0020BA2C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BA3Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020BA3Cu) [[unlikely]] return; }
L_0020BA3C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020BA58; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BA58u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020BA58u) [[unlikely]] return; }
L_0020BA58:
    st32((c.r[20].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 1;
L_0020BA5C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0020BB5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BA6Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020BA6Cu) [[unlikely]] return; }
L_0020BA6C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BA7Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020BA7Cu) [[unlikely]] return; }
L_0020BA7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020BB5C; } }
    set32(c.r[4], 0u + 12u);
    c.budget -= 1;
L_0020BA88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BA90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0020BA90u) [[unlikely]] return; }
L_0020BA90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0020BB5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BAACu); st32((c.r[20].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020BAACu) [[unlikely]] return; }
L_0020BAAC:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BABCu); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020BABCu) [[unlikely]] return; }
L_0020BABC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 9088u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[20].w[0] + 8u), 0u);  if (t) { goto L_0020BAEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BADCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020BADCu) [[unlikely]] return; }
L_0020BADC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BAECu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020BAECu) [[unlikely]] return; }
L_0020BAEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020BB5C; } }
    set32(c.r[4], 0u + 12u);
    c.budget -= 1;
L_0020BAF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BB00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0020BB00u) [[unlikely]] return; }
L_0020BB00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0020BB5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BB1Cu); st32((c.r[20].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020BB1Cu) [[unlikely]] return; }
L_0020BB1C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BB2Cu); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020BB2Cu) [[unlikely]] return; }
L_0020BB2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 9088u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[20].w[0] + 8u), 0u);  if (t) { goto L_0020BB5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BB4Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020BB4Cu) [[unlikely]] return; }
L_0020BB4C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BB5Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020BB5Cu) [[unlikely]] return; }
L_0020BB5C:
    st32((c.r[29].w[0] + 120u), c.r[20].w[0]);
    c.budget -= 1;
L_0020BB60:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 108u);  goto L_0020BB88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BB70u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020BB70u) [[unlikely]] return; }
L_0020BB70:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BB84u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020BB84u) [[unlikely]] return; }
L_0020BB84:
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 1;
L_0020BB88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BB90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 17u, depth + 1u); else { c.pc = 0x0020C1E0u; return; } if (c.pc != 0x0020BB90u) [[unlikely]] return; }
L_0020BB90:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BB9Cu); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0043(c, 16u, depth + 1u); else { c.pc = 0x0020C1C0u; return; } if (c.pc != 0x0020BB9Cu) [[unlikely]] return; }
L_0020BB9C:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BBACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0042(c, 296u, depth + 1u); else { c.pc = 0x0020AA20u; return; } if (c.pc != 0x0020BBACu) [[unlikely]] return; }
L_0020BBAC:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 120u)));  goto L_0020BC34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld16((c.r[17].w[0] + 106u));  if (t) { goto L_0020BC14; } }
L_0020BBBC:
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BBC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 17u, depth + 1u); else { c.pc = 0x0020C1E0u; return; } if (c.pc != 0x0020BBC8u) [[unlikely]] return; }
L_0020BBC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[18], c.r[19].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 104u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BBDCu); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_0043(c, 16u, depth + 1u); else { c.pc = 0x0020C1C0u; return; } if (c.pc != 0x0020BBDCu) [[unlikely]] return; }
L_0020BBDC:
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BBECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0042(c, 296u, depth + 1u); else { c.pc = 0x0020AA20u; return; } if (c.pc != 0x0020BBECu) [[unlikely]] return; }
L_0020BBEC:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_0020BC18; }
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[5], c.r[29].w[0] + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BC04u); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_0043(c, 10u, depth + 1u); else { c.pc = 0x0020C110u; return; } if (c.pc != 0x0020BC04u) [[unlikely]] return; }
L_0020BC04:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 108u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 108u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0020BC30; } }
L_0020BC14:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0020BC18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020BBBCu | kUnwind; return; } goto L_0020BBBC; } }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 106u));
    set32(c.r[4], c.r[17].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BC30u); set32(c.r[6], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0042(c, 484u, depth + 1u); else { c.pc = 0x0020BD30u; return; } if (c.pc != 0x0020BC30u) [[unlikely]] return; }
L_0020BC30:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_0020BC34:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020BC78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BC44u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020BC44u) [[unlikely]] return; }
L_0020BC44:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BC58u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020BC58u) [[unlikely]] return; }
L_0020BC58:
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020BC78; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BC78u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020BC78u) [[unlikely]] return; }
L_0020BC78:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0020BC9C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0020BC98; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 54u));
    c.r[3].d[0] = c.r[3].d[0] | 51ull;
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0020BC98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0020BC9C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0020BCC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020BD18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BCECu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020BCECu) [[unlikely]] return; }
L_0020BCEC:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BCFCu); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020BCFCu) [[unlikely]] return; }
L_0020BCFC:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0020BD1C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BD18u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0020BD18u) [[unlikely]] return; }
L_0020BD18:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0020BD1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020BD30:
    set32(c.r[29], c.r[29].w[0] - 160u);
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
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0020BED8; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 14u));
    set32(c.r[17], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[3].d[0]) { c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));  goto L_0020BEDC; }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 4u)));  goto L_0020BE24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_0020BE08; } }
L_0020BD94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BD9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 17u, depth + 1u); else { c.pc = 0x0020C1E0u; return; } if (c.pc != 0x0020BD9Cu) [[unlikely]] return; }
L_0020BD9C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 156u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BDB4u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0043(c, 9u, depth + 1u); else { c.pc = 0x0020C0F0u; return; } if (c.pc != 0x0020BDB4u) [[unlikely]] return; }
L_0020BDB4:
    c.r[22].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BDC4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0042(c, 296u, depth + 1u); else { c.pc = 0x0020AA20u; return; } if (c.pc != 0x0020BDC4u) [[unlikely]] return; }
L_0020BDC4:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 1u);  goto L_0020BE04; }
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BDD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 17u, depth + 1u); else { c.pc = 0x0020C1E0u; return; } if (c.pc != 0x0020BDD8u) [[unlikely]] return; }
L_0020BDD8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BDE8u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0043(c, 10u, depth + 1u); else { c.pc = 0x0020C110u; return; } if (c.pc != 0x0020BDE8u) [[unlikely]] return; }
L_0020BDE8:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BDF4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0042(c, 296u, depth + 1u); else { c.pc = 0x0020AA20u; return; } if (c.pc != 0x0020BDF4u) [[unlikely]] return; }
L_0020BDF4:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.budget -= 4;
L_0020BE04:
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0020BE08:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.budget -= 1;
L_0020BE0C:
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 156u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020BD94u | kUnwind; return; } goto L_0020BD94; }
    st16((c.r[21].w[0] + 10u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_0020BE24:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st16((c.r[21].w[0] + 8u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_0020BEC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BE34u); c.r[4].d[0] = ld16((c.r[21].w[0] + 8u));  if (depth < kMaxDepth) unit_0043(c, 3u, depth + 1u); else { c.pc = 0x0020C050u; return; } if (c.pc != 0x0020BE34u) [[unlikely]] return; }
L_0020BE34:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0020BE5C; } }
L_0020BE40:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BE54u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 10u, depth + 1u); else { c.pc = 0x0020C110u; return; } if (c.pc != 0x0020BE54u) [[unlikely]] return; }
L_0020BE54:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_0020BE5C:
    c.r[18].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020BE40u | kUnwind; return; } goto L_0020BE40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[21].w[0] + 8u));  if (t) { goto L_0020BEB0; } }
L_0020BE78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BE80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 17u, depth + 1u); else { c.pc = 0x0020C1E0u; return; } if (c.pc != 0x0020BE80u) [[unlikely]] return; }
L_0020BE80:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 148u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BE98u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 10u, depth + 1u); else { c.pc = 0x0020C110u; return; } if (c.pc != 0x0020BE98u) [[unlikely]] return; }
L_0020BE98:
    set32(c.r[4], c.r[29].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BEA4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0042(c, 296u, depth + 1u); else { c.pc = 0x0020AA20u; return; } if (c.pc != 0x0020BEA4u) [[unlikely]] return; }
L_0020BEA4:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[21].w[0] + 8u));
    c.budget -= 3;
L_0020BEB0:
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 148u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020BE78u | kUnwind; return; } goto L_0020BE78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0020BED0; } }
L_0020BEC8:
    st32((c.r[21].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0020BED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BED8u);  if (depth < kMaxDepth) unit_0043(c, 2u, depth + 1u); else { c.pc = 0x0020C030u; return; } if (c.pc != 0x0020BED8u) [[unlikely]] return; }
L_0020BED8:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.budget -= 1;
L_0020BEDC:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 140u);  goto L_0020BF30; }
    set32(c.r[2], c.r[20].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st16((c.r[21].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BEFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 17u, depth + 1u); else { c.pc = 0x0020C1E0u; return; } if (c.pc != 0x0020BEFCu) [[unlikely]] return; }
L_0020BEFC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BF08u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0043(c, 9u, depth + 1u); else { c.pc = 0x0020C0F0u; return; } if (c.pc != 0x0020BF08u) [[unlikely]] return; }
L_0020BF08:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BF18u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0042(c, 296u, depth + 1u); else { c.pc = 0x0020AA20u; return; } if (c.pc != 0x0020BF18u) [[unlikely]] return; }
L_0020BF18:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  goto L_0020BFE8; }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0020BFE4; } }
L_0020BF30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BF38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 17u, depth + 1u); else { c.pc = 0x0020C1E0u; return; } if (c.pc != 0x0020BF38u) [[unlikely]] return; }
L_0020BF38:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BF44u); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0043(c, 9u, depth + 1u); else { c.pc = 0x0020C0F0u; return; } if (c.pc != 0x0020BF44u) [[unlikely]] return; }
L_0020BF44:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BF54u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0042(c, 296u, depth + 1u); else { c.pc = 0x0020AA20u; return; } if (c.pc != 0x0020BF54u) [[unlikely]] return; }
L_0020BF54:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 132u);  goto L_0020BFA4; }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BF68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 17u, depth + 1u); else { c.pc = 0x0020C1E0u; return; } if (c.pc != 0x0020BF68u) [[unlikely]] return; }
L_0020BF68:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BF7Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 16u, depth + 1u); else { c.pc = 0x0020C1C0u; return; } if (c.pc != 0x0020BF7Cu) [[unlikely]] return; }
L_0020BF7C:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BF8Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0042(c, 296u, depth + 1u); else { c.pc = 0x0020AA20u; return; } if (c.pc != 0x0020BF8Cu) [[unlikely]] return; }
L_0020BF8C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0020BFE4; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0020BFE4; } }
L_0020BFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BFACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 17u, depth + 1u); else { c.pc = 0x0020C1E0u; return; } if (c.pc != 0x0020BFACu) [[unlikely]] return; }
L_0020BFAC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 132u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BFC0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 9u, depth + 1u); else { c.pc = 0x0020C0F0u; return; } if (c.pc != 0x0020BFC0u) [[unlikely]] return; }
L_0020BFC0:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BFD0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0042(c, 296u, depth + 1u); else { c.pc = 0x0020AA20u; return; } if (c.pc != 0x0020BFD0u) [[unlikely]] return; }
L_0020BFD0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0020BFE4; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0020BFE4:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_0020BFE8:
    set32(c.r[3], c.r[20].w[0] << 2);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BFF8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 10u, depth + 1u); else { c.pc = 0x0020C110u; return; } if (c.pc != 0x0020BFF8u) [[unlikely]] return; }
L_0020BFF8:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 2;
    [[clang::musttail]] return unit_0043(c, 1u, depth);
}

}
