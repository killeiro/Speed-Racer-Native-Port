#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00E3[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 33,
    0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62,
    0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0,
    0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0,
    119, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0,
    0, 0, 127, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0,
    0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135,
    0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0,
    0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 0,
    0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0,
    0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0,
    0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0,
    198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0,
    0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210,
    0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0,
    0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0,
    222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0,
    232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0,
    0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0,
    260, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0,
    0, 0, 268, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0,
    0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276,
    0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 285, 0,
    0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0,
    0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0,
    0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 309, 0, 0, 310, 0, 0,
    0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0,
    0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0,
    0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 333, 0,
    0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 351, 0,
    0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 362, 0,
    0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0,
    0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381,
    0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0,
    0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0,
    0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0,
    0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0, 424,
    0, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 431, 0,
    0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0,
    439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0, 0, 444,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0,
    0, 0, 0, 0, 451, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0,
};

void unit_00E3(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0048C000;
    case 2u: goto L_0048C054;
    case 3u: goto L_0048C0A0;
    case 4u: goto L_0048C0C0;
    case 5u: goto L_0048C0D0;
    case 6u: goto L_0048C134;
    case 7u: goto L_0048C180;
    case 8u: goto L_0048C1A0;
    case 9u: goto L_0048C1B0;
    case 10u: goto L_0048C214;
    case 11u: goto L_0048C260;
    case 12u: goto L_0048C280;
    case 13u: goto L_0048C290;
    case 14u: goto L_0048C2A0;
    case 15u: goto L_0048C2B0;
    case 16u: goto L_0048C2C0;
    case 17u: goto L_0048C2D0;
    case 18u: goto L_0048C2E0;
    case 19u: goto L_0048C2F0;
    case 20u: goto L_0048C31C;
    case 21u: goto L_0048C368;
    case 22u: goto L_0048C3D0;
    case 23u: goto L_0048C420;
    case 24u: goto L_0048C430;
    case 25u: goto L_0048C454;
    case 26u: goto L_0048C460;
    case 27u: goto L_0048C46C;
    case 28u: goto L_0048C490;
    case 29u: goto L_0048C4B0;
    case 30u: goto L_0048C540;
    case 31u: goto L_0048C564;
    case 32u: goto L_0048C570;
    case 33u: goto L_0048C57C;
    case 34u: goto L_0048C5A0;
    case 35u: goto L_0048C5C0;
    case 36u: goto L_0048C5E8;
    case 37u: goto L_0048C6A8;
    case 38u: goto L_0048C6E0;
    case 39u: goto L_0048C704;
    case 40u: goto L_0048C710;
    case 41u: goto L_0048C71C;
    case 42u: goto L_0048C740;
    case 43u: goto L_0048C760;
    case 44u: goto L_0048C788;
    case 45u: goto L_0048C82C;
    case 46u: goto L_0048C860;
    case 47u: goto L_0048C884;
    case 48u: goto L_0048C890;
    case 49u: goto L_0048C89C;
    case 50u: goto L_0048C8C0;
    case 51u: goto L_0048C8E0;
    case 52u: goto L_0048C908;
    case 53u: goto L_0048C958;
    case 54u: goto L_0048C9E0;
    case 55u: goto L_0048CA10;
    case 56u: goto L_0048CA34;
    case 57u: goto L_0048CA40;
    case 58u: goto L_0048CA4C;
    case 59u: goto L_0048CA70;
    case 60u: goto L_0048CA90;
    case 61u: goto L_0048CABC;
    case 62u: goto L_0048CAFC;
    case 63u: goto L_0048CB10;
    case 64u: goto L_0048CB1C;
    case 65u: goto L_0048CB60;
    case 66u: goto L_0048CBB0;
    case 67u: goto L_0048CC30;
    case 68u: goto L_0048CC54;
    case 69u: goto L_0048CC60;
    case 70u: goto L_0048CC6C;
    case 71u: goto L_0048CC90;
    case 72u: goto L_0048CCB0;
    case 73u: goto L_0048CCDC;
    case 74u: goto L_0048CD9C;
    case 75u: goto L_0048CDE0;
    case 76u: goto L_0048CE04;
    case 77u: goto L_0048CE10;
    case 78u: goto L_0048CE1C;
    case 79u: goto L_0048CE40;
    case 80u: goto L_0048CE60;
    case 81u: goto L_0048CE8C;
    case 82u: goto L_0048CECC;
    case 83u: goto L_0048CEF0;
    case 84u: goto L_0048CF24;
    case 85u: goto L_0048CF34;
    case 86u: goto L_0048CF40;
    case 87u: goto L_0048CF84;
    case 88u: goto L_0048CFD0;
    case 89u: goto L_0048D010;
    case 90u: goto L_0048D068;
    case 91u: goto L_0048D080;
    case 92u: goto L_0048D09C;
    case 93u: goto L_0048D0B0;
    case 94u: goto L_0048D0C0;
    case 95u: goto L_0048D0CC;
    case 96u: goto L_0048D0F0;
    case 97u: goto L_0048D110;
    case 98u: goto L_0048D170;
    case 99u: goto L_0048D188;
    case 100u: goto L_0048D1A4;
    case 101u: goto L_0048D1B8;
    case 102u: goto L_0048D1C8;
    case 103u: goto L_0048D1D4;
    case 104u: goto L_0048D1E4;
    case 105u: goto L_0048D224;
    case 106u: goto L_0048D23C;
    case 107u: goto L_0048D258;
    case 108u: goto L_0048D26C;
    case 109u: goto L_0048D2AC;
    case 110u: goto L_0048D2C4;
    case 111u: goto L_0048D2DC;
    case 112u: goto L_0048D2F0;
    case 113u: goto L_0048D308;
    case 114u: goto L_0048D338;
    case 115u: goto L_0048D360;
    case 116u: goto L_0048D3B8;
    case 117u: goto L_0048D3D0;
    case 118u: goto L_0048D3EC;
    case 119u: goto L_0048D400;
    case 120u: goto L_0048D410;
    case 121u: goto L_0048D41C;
    case 122u: goto L_0048D440;
    case 123u: goto L_0048D460;
    case 124u: goto L_0048D4C0;
    case 125u: goto L_0048D4D8;
    case 126u: goto L_0048D4F4;
    case 127u: goto L_0048D508;
    case 128u: goto L_0048D518;
    case 129u: goto L_0048D524;
    case 130u: goto L_0048D534;
    case 131u: goto L_0048D574;
    case 132u: goto L_0048D58C;
    case 133u: goto L_0048D5A8;
    case 134u: goto L_0048D5BC;
    case 135u: goto L_0048D5FC;
    case 136u: goto L_0048D614;
    case 137u: goto L_0048D62C;
    case 138u: goto L_0048D640;
    case 139u: goto L_0048D658;
    case 140u: goto L_0048D688;
    case 141u: goto L_0048D6B0;
    case 142u: goto L_0048D708;
    case 143u: goto L_0048D720;
    case 144u: goto L_0048D73C;
    case 145u: goto L_0048D750;
    case 146u: goto L_0048D760;
    case 147u: goto L_0048D76C;
    case 148u: goto L_0048D790;
    case 149u: goto L_0048D7B0;
    case 150u: goto L_0048D810;
    case 151u: goto L_0048D828;
    case 152u: goto L_0048D844;
    case 153u: goto L_0048D858;
    case 154u: goto L_0048D868;
    case 155u: goto L_0048D874;
    case 156u: goto L_0048D884;
    case 157u: goto L_0048D8C4;
    case 158u: goto L_0048D8DC;
    case 159u: goto L_0048D8F8;
    case 160u: goto L_0048D90C;
    case 161u: goto L_0048D94C;
    case 162u: goto L_0048D964;
    case 163u: goto L_0048D97C;
    case 164u: goto L_0048D990;
    case 165u: goto L_0048D9A8;
    case 166u: goto L_0048D9D8;
    case 167u: goto L_0048DA00;
    case 168u: goto L_0048DA58;
    case 169u: goto L_0048DA70;
    case 170u: goto L_0048DA8C;
    case 171u: goto L_0048DAA0;
    case 172u: goto L_0048DAB0;
    case 173u: goto L_0048DABC;
    case 174u: goto L_0048DAE0;
    case 175u: goto L_0048DB00;
    case 176u: goto L_0048DB60;
    case 177u: goto L_0048DB78;
    case 178u: goto L_0048DB94;
    case 179u: goto L_0048DBA8;
    case 180u: goto L_0048DBB8;
    case 181u: goto L_0048DBC4;
    case 182u: goto L_0048DBD4;
    case 183u: goto L_0048DC14;
    case 184u: goto L_0048DC2C;
    case 185u: goto L_0048DC48;
    case 186u: goto L_0048DC5C;
    case 187u: goto L_0048DC9C;
    case 188u: goto L_0048DCB4;
    case 189u: goto L_0048DCCC;
    case 190u: goto L_0048DCE0;
    case 191u: goto L_0048DCF8;
    case 192u: goto L_0048DD28;
    case 193u: goto L_0048DD50;
    case 194u: goto L_0048DDA8;
    case 195u: goto L_0048DDC0;
    case 196u: goto L_0048DDDC;
    case 197u: goto L_0048DDF0;
    case 198u: goto L_0048DE00;
    case 199u: goto L_0048DE0C;
    case 200u: goto L_0048DE30;
    case 201u: goto L_0048DE50;
    case 202u: goto L_0048DEB0;
    case 203u: goto L_0048DEC8;
    case 204u: goto L_0048DEE4;
    case 205u: goto L_0048DEF8;
    case 206u: goto L_0048DF08;
    case 207u: goto L_0048DF14;
    case 208u: goto L_0048DF24;
    case 209u: goto L_0048DF64;
    case 210u: goto L_0048DF7C;
    case 211u: goto L_0048DF98;
    case 212u: goto L_0048DFAC;
    case 213u: goto L_0048DFEC;
    case 214u: goto L_0048E004;
    case 215u: goto L_0048E01C;
    case 216u: goto L_0048E030;
    case 217u: goto L_0048E048;
    case 218u: goto L_0048E078;
    case 219u: goto L_0048E0A0;
    case 220u: goto L_0048E160;
    case 221u: goto L_0048E170;
    case 222u: goto L_0048E180;
    case 223u: goto L_0048E190;
    case 224u: goto L_0048E1A0;
    case 225u: goto L_0048E1B0;
    case 226u: goto L_0048E1C0;
    case 227u: goto L_0048E1D0;
    case 228u: goto L_0048E1E0;
    case 229u: goto L_0048E1FC;
    case 230u: goto L_0048E210;
    case 231u: goto L_0048E268;
    case 232u: goto L_0048E280;
    case 233u: goto L_0048E29C;
    case 234u: goto L_0048E2B0;
    case 235u: goto L_0048E2C0;
    case 236u: goto L_0048E2CC;
    case 237u: goto L_0048E2F0;
    case 238u: goto L_0048E310;
    case 239u: goto L_0048E370;
    case 240u: goto L_0048E388;
    case 241u: goto L_0048E3A4;
    case 242u: goto L_0048E3B8;
    case 243u: goto L_0048E3C8;
    case 244u: goto L_0048E3D4;
    case 245u: goto L_0048E3E4;
    case 246u: goto L_0048E424;
    case 247u: goto L_0048E43C;
    case 248u: goto L_0048E458;
    case 249u: goto L_0048E46C;
    case 250u: goto L_0048E4AC;
    case 251u: goto L_0048E4C4;
    case 252u: goto L_0048E4DC;
    case 253u: goto L_0048E4F0;
    case 254u: goto L_0048E508;
    case 255u: goto L_0048E538;
    case 256u: goto L_0048E560;
    case 257u: goto L_0048E5B8;
    case 258u: goto L_0048E5D0;
    case 259u: goto L_0048E5EC;
    case 260u: goto L_0048E600;
    case 261u: goto L_0048E610;
    case 262u: goto L_0048E61C;
    case 263u: goto L_0048E640;
    case 264u: goto L_0048E660;
    case 265u: goto L_0048E6C0;
    case 266u: goto L_0048E6D8;
    case 267u: goto L_0048E6F4;
    case 268u: goto L_0048E708;
    case 269u: goto L_0048E718;
    case 270u: goto L_0048E724;
    case 271u: goto L_0048E734;
    case 272u: goto L_0048E774;
    case 273u: goto L_0048E78C;
    case 274u: goto L_0048E7A8;
    case 275u: goto L_0048E7BC;
    case 276u: goto L_0048E7FC;
    case 277u: goto L_0048E814;
    case 278u: goto L_0048E82C;
    case 279u: goto L_0048E840;
    case 280u: goto L_0048E858;
    case 281u: goto L_0048E888;
    case 282u: goto L_0048E8B0;
    case 283u: goto L_0048E8D8;
    case 284u: goto L_0048E8E8;
    case 285u: goto L_0048E8F8;
    case 286u: goto L_0048E91C;
    case 287u: goto L_0048E92C;
    case 288u: goto L_0048E938;
    case 289u: goto L_0048E948;
    case 290u: goto L_0048E954;
    case 291u: goto L_0048E984;
    case 292u: goto L_0048E9A0;
    case 293u: goto L_0048E9C8;
    case 294u: goto L_0048E9D8;
    case 295u: goto L_0048E9E8;
    case 296u: goto L_0048EA0C;
    case 297u: goto L_0048EA28;
    case 298u: goto L_0048EA34;
    case 299u: goto L_0048EA44;
    case 300u: goto L_0048EA50;
    case 301u: goto L_0048EAB0;
    case 302u: goto L_0048EAD0;
    case 303u: goto L_0048EAF8;
    case 304u: goto L_0048EB08;
    case 305u: goto L_0048EB18;
    case 306u: goto L_0048EB3C;
    case 307u: goto L_0048EB4C;
    case 308u: goto L_0048EB58;
    case 309u: goto L_0048EB68;
    case 310u: goto L_0048EB74;
    case 311u: goto L_0048EB84;
    case 312u: goto L_0048EB98;
    case 313u: goto L_0048EBB8;
    case 314u: goto L_0048EBCC;
    case 315u: goto L_0048EC0C;
    case 316u: goto L_0048EC20;
    case 317u: goto L_0048EC48;
    case 318u: goto L_0048EC58;
    case 319u: goto L_0048EC68;
    case 320u: goto L_0048EC8C;
    case 321u: goto L_0048ECA8;
    case 322u: goto L_0048ECB4;
    case 323u: goto L_0048ECC4;
    case 324u: goto L_0048ECD0;
    case 325u: goto L_0048ECE0;
    case 326u: goto L_0048ECF4;
    case 327u: goto L_0048ED14;
    case 328u: goto L_0048ED28;
    case 329u: goto L_0048ED98;
    case 330u: goto L_0048EDB0;
    case 331u: goto L_0048EDD8;
    case 332u: goto L_0048EDE8;
    case 333u: goto L_0048EDF8;
    case 334u: goto L_0048EE1C;
    case 335u: goto L_0048EE2C;
    case 336u: goto L_0048EE38;
    case 337u: goto L_0048EE48;
    case 338u: goto L_0048EE54;
    case 339u: goto L_0048EE88;
    case 340u: goto L_0048EEA0;
    case 341u: goto L_0048EEFC;
    case 342u: goto L_0048EF30;
    case 343u: goto L_0048EF40;
    case 344u: goto L_0048EFA0;
    case 345u: goto L_0048EFF0;
    case 346u: goto L_0048F018;
    case 347u: goto L_0048F028;
    case 348u: goto L_0048F038;
    case 349u: goto L_0048F05C;
    case 350u: goto L_0048F06C;
    case 351u: goto L_0048F078;
    case 352u: goto L_0048F088;
    case 353u: goto L_0048F094;
    case 354u: goto L_0048F0B0;
    case 355u: goto L_0048F0D0;
    case 356u: goto L_0048F170;
    case 357u: goto L_0048F198;
    case 358u: goto L_0048F1A8;
    case 359u: goto L_0048F1B8;
    case 360u: goto L_0048F1DC;
    case 361u: goto L_0048F1EC;
    case 362u: goto L_0048F1F8;
    case 363u: goto L_0048F208;
    case 364u: goto L_0048F214;
    case 365u: goto L_0048F240;
    case 366u: goto L_0048F260;
    case 367u: goto L_0048F330;
    case 368u: goto L_0048F3A8;
    case 369u: goto L_0048F3C0;
    case 370u: goto L_0048F3E0;
    case 371u: goto L_0048F428;
    case 372u: goto L_0048F438;
    case 373u: goto L_0048F448;
    case 374u: goto L_0048F470;
    case 375u: goto L_0048F484;
    case 376u: goto L_0048F498;
    case 377u: goto L_0048F4A8;
    case 378u: goto L_0048F4FC;
    case 379u: goto L_0048F54C;
    case 380u: goto L_0048F564;
    case 381u: goto L_0048F57C;
    case 382u: goto L_0048F590;
    case 383u: goto L_0048F5A8;
    case 384u: goto L_0048F5D8;
    case 385u: goto L_0048F624;
    case 386u: goto L_0048F674;
    case 387u: goto L_0048F68C;
    case 388u: goto L_0048F6A4;
    case 389u: goto L_0048F6B8;
    case 390u: goto L_0048F6D0;
    case 391u: goto L_0048F700;
    case 392u: goto L_0048F750;
    case 393u: goto L_0048F7A0;
    case 394u: goto L_0048F7B8;
    case 395u: goto L_0048F7D0;
    case 396u: goto L_0048F7E4;
    case 397u: goto L_0048F7FC;
    case 398u: goto L_0048F82C;
    case 399u: goto L_0048F874;
    case 400u: goto L_0048F8C4;
    case 401u: goto L_0048F8DC;
    case 402u: goto L_0048F8F4;
    case 403u: goto L_0048F908;
    case 404u: goto L_0048F920;
    case 405u: goto L_0048F950;
    case 406u: goto L_0048F960;
    case 407u: goto L_0048F990;
    case 408u: goto L_0048F99C;
    case 409u: goto L_0048F9C0;
    case 410u: goto L_0048F9CC;
    case 411u: goto L_0048FA18;
    case 412u: goto L_0048FA74;
    case 413u: goto L_0048FA8C;
    case 414u: goto L_0048FAA4;
    case 415u: goto L_0048FAB8;
    case 416u: goto L_0048FAD0;
    case 417u: goto L_0048FB00;
    case 418u: goto L_0048FB40;
    case 419u: goto L_0048FB50;
    case 420u: goto L_0048FBB0;
    case 421u: goto L_0048FBC8;
    case 422u: goto L_0048FC58;
    case 423u: goto L_0048FC64;
    case 424u: goto L_0048FC7C;
    case 425u: goto L_0048FC98;
    case 426u: goto L_0048FCA4;
    case 427u: goto L_0048FCBC;
    case 428u: goto L_0048FCC8;
    case 429u: goto L_0048FCE0;
    case 430u: goto L_0048FCEC;
    case 431u: goto L_0048FCF8;
    case 432u: goto L_0048FD10;
    case 433u: goto L_0048FD38;
    case 434u: goto L_0048FD54;
    case 435u: goto L_0048FD8C;
    case 436u: goto L_0048FDA8;
    case 437u: goto L_0048FDD8;
    case 438u: goto L_0048FDF0;
    case 439u: goto L_0048FE00;
    case 440u: goto L_0048FE20;
    case 441u: goto L_0048FE30;
    case 442u: goto L_0048FE58;
    case 443u: goto L_0048FE64;
    case 444u: goto L_0048FE7C;
    case 445u: goto L_0048FEBC;
    case 446u: goto L_0048FEDC;
    case 447u: goto L_0048FF14;
    case 448u: goto L_0048FF2C;
    case 449u: goto L_0048FF5C;
    case 450u: goto L_0048FF74;
    case 451u: goto L_0048FF90;
    case 452u: goto L_0048FF9C;
    case 453u: goto L_0048FFAC;
    case 454u: goto L_0048FFDC;
    case 455u: goto L_0048FFF4;
    default: bad_entry(c, 0x0048C000u); return;
    }
L_0048C000:
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0048C0A0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[17].w[0] + 44u);
    set32(c.r[3], c.r[3].w[0] - 30720u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0048C054; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 70u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0048C054; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0048C054; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C054u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048C054u) [[unlikely]] return; }
L_0048C054:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0048C08C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 30688u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0048C088; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 30656u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0048C088; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 24576u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0048C088:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0048C08C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0048C0A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C0A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0048C0A0u) [[unlikely]] return; }
L_0048C0A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0048C0A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0048C0C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0048C0D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0048C180; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[17].w[0] + 44u);
    set32(c.r[3], c.r[3].w[0] - 30624u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0048C134; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 70u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0048C134; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0048C134; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C134u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048C134u) [[unlikely]] return; }
L_0048C134:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0048C16C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 30592u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0048C168; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 30560u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0048C168; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 24576u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0048C168:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0048C16C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0048C184; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C180u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0048C180u) [[unlikely]] return; }
L_0048C180:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0048C184:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0048C1A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0048C1B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0048C260; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[17].w[0] + 80u);
    set32(c.r[3], c.r[3].w[0] - 30848u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0048C214; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 106u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0048C214; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], c.r[17].w[0] + 84u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0048C214; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C214u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048C214u) [[unlikely]] return; }
L_0048C214:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0048C24C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 30880u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0048C248; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 30912u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0048C248; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 24576u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0048C248:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0048C24C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0048C264; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C260u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0048C260u) [[unlikely]] return; }
L_0048C260:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0048C264:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0048C280:
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0048C290:
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0048C2A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0048C2B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0048C2C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0048C2D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0048C2E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0048C2F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], c.r[17].w[0] + 52u);
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C31Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0021(c, 30u, depth + 1u); else { c.pc = 0x00184600u; return; } if (c.pc != 0x0048C31Cu) [[unlikely]] return; }
L_0048C31C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 4u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0048C3AC; }
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    c.f[1] = 0u;
    c.f[2] = fp::add(c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 48u), c.f[2]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    fpu_div(c, 0u, c.f[2], c.f[0]);
    c.f[1] = fp::max(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::min(c.f[1], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 8u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C368u); set32(c.r[6], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_00E3(c, 29u, depth + 1u); else { c.pc = 0x0048C4B0u; return; } if (c.pc != 0x0048C368u) [[unlikely]] return; }
L_0048C368:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0048C3A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0048C3AC; } }
L_0048C3A8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0048C3AC:
    set32(c.r[18], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[2], 0u + 64u);
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 7;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_0048C3DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C3D0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048C3D0u) [[unlikely]] return; }
L_0048C3D0:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
L_0048C3DC:
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0048C420:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0048C430:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C454u); set32(c.r[5], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_0021(c, 30u, depth + 1u); else { c.pc = 0x00184600u; return; } if (c.pc != 0x0048C454u) [[unlikely]] return; }
L_0048C454:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C460u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0048C460u) [[unlikely]] return; }
L_0048C460:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C46Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00E3(c, 330u, depth + 1u); else { c.pc = 0x0048EDB0u; return; } if (c.pc != 0x0048C46Cu) [[unlikely]] return; }
L_0048C46C:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0048C494; }
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0048C490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C490u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0048C490u) [[unlikely]] return; }
L_0048C490:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0048C494:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0048C4B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[3].w[0];
    c.f[9] = 0u;
    c.facc = fp::add(c.f[9], c.f[0]);
    c.f[0] = fp::mul(c.f[12], c.f[12]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[1], c.f[12]));
    c.f[8] = fp::mul(c.f[1], c.f[0]);
    c.f[7] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[6] = fp::sub(c.f[1], c.f[7]);
    c.f[4] = fp::sub(c.f[0], c.f[5]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[8]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.facc = fp::add(c.f[9], c.f[3]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[8]));
    c.facc = fp::add(c.f[9], c.f[5]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[4], c.f[8]));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.facc = fp::add(c.f[9], c.f[7]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[8]));
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[0]);  c.pc = t; return; }
L_0048C540:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C564u); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0048C564u) [[unlikely]] return; }
L_0048C564:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C570u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0048C570u) [[unlikely]] return; }
L_0048C570:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C57Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00E3(c, 345u, depth + 1u); else { c.pc = 0x0048EFF0u; return; } if (c.pc != 0x0048C57Cu) [[unlikely]] return; }
L_0048C57C:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0048C5A4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0048C5A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C5A0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0048C5A0u) [[unlikely]] return; }
L_0048C5A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0048C5A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0048C5C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], c.r[17].w[0] + 28u);
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C5E8u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0048C5E8u) [[unlikely]] return; }
L_0048C5E8:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 4u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0048C680; }
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    c.f[3] = 0u;
    c.f[1] = fp::add(c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 24u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::max(c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::min(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[2].w[0];
    c.facc = fp::add(c.f[3], c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.f[0] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[1], c.f[2]));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.facc = fp::add(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 32;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0048C67C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0048C680; } }
L_0048C67C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0048C680:
    c.f[20] = ld32((c.r[17].w[0] + 28u));
    set32(c.r[2], 0u + 8u);
    set32(c.r[17], ld32((c.r[17].w[0] + 32u)));
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  goto L_0048C6B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C6A8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048C6A8u) [[unlikely]] return; }
L_0048C6A8:
    set32(c.r[2], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
L_0048C6B4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0]), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0048C6E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C704u); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0048C704u) [[unlikely]] return; }
L_0048C704:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C710u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0048C710u) [[unlikely]] return; }
L_0048C710:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C71Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00E3(c, 282u, depth + 1u); else { c.pc = 0x0048E8B0u; return; } if (c.pc != 0x0048C71Cu) [[unlikely]] return; }
L_0048C71C:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0048C744; }
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0048C740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C740u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0048C740u) [[unlikely]] return; }
L_0048C740:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0048C744:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0048C760:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.f[20] = c.f[12];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C788u); set32(c.r[5], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0048C788u) [[unlikely]] return; }
L_0048C788:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 4u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0048C804; }
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[3] = ld32((c.r[16].w[0] + 24u));  goto L_0048C7BC; }
    st32((c.r[16].w[0] + 24u), c.f[1]);
    c.f[3] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 2;
L_0048C7BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = ld32((c.r[16].w[0] + 12u));
    fpu_div(c, 3u, c.f[3], c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[3]));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0048C800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0048C804; } }
L_0048C800:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0048C804:
    c.f[20] = ld32((c.r[16].w[0] + 28u));
    set32(c.r[2], 0u + 8u);
    set32(c.r[16], ld32((c.r[16].w[0] + 32u)));
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  goto L_0048C838; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C82Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048C82Cu) [[unlikely]] return; }
L_0048C82C:
    set32(c.r[2], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
L_0048C838:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[3].w[0]), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0048C860:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C884u); set32(c.r[5], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0048C884u) [[unlikely]] return; }
L_0048C884:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C890u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0048C890u) [[unlikely]] return; }
L_0048C890:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C89Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00E3(c, 302u, depth + 1u); else { c.pc = 0x0048EAD0u; return; } if (c.pc != 0x0048C89Cu) [[unlikely]] return; }
L_0048C89C:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0048C8C4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0048C8C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C8C0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0048C8C0u) [[unlikely]] return; }
L_0048C8C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0048C8C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0048C8E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], c.r[17].w[0] + 36u);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C908u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0048C908u) [[unlikely]] return; }
L_0048C908:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 4u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0048C9B8; }
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    c.f[2] = 0u;
    c.f[1] = fp::add(c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 24u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::max(c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[3] = fp::min(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C958u); c.f[12] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x0048C958u) [[unlikely]] return; }
L_0048C958:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[3] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0048C9B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0048C9B8; } }
L_0048C9B4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0048C9B8:
    c.f[20] = ld32((c.r[17].w[0] + 36u));
    set32(c.r[2], 0u + 8u);
    set32(c.r[17], ld32((c.r[17].w[0] + 40u)));
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  goto L_0048C9EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048C9E0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048C9E0u) [[unlikely]] return; }
L_0048C9E0:
    set32(c.r[2], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
L_0048C9EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0]), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0048CA10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CA34u); set32(c.r[5], c.r[17].w[0] + 44u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x0048CA34u) [[unlikely]] return; }
L_0048CA34:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CA40u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0048CA40u) [[unlikely]] return; }
L_0048CA40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CA4Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00E3(c, 356u, depth + 1u); else { c.pc = 0x0048F170u; return; } if (c.pc != 0x0048CA4Cu) [[unlikely]] return; }
L_0048CA4C:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0048CA74; }
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0048CA70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CA70u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0048CA70u) [[unlikely]] return; }
L_0048CA70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0048CA74:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0048CA90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], c.r[17].w[0] + 44u);
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CABCu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x0048CABCu) [[unlikely]] return; }
L_0048CABC:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 4u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0048CB3C; }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.f[12] = 0u;
    c.f[1] = fp::add(c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CAFCu); st32((c.r[29].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_00C8(c, 16u, depth + 1u); else { c.pc = 0x00420540u; return; } if (c.pc != 0x0048CAFCu) [[unlikely]] return; }
L_0048CAFC:
    c.f[12] = ld32((c.r[29].w[0] + 92u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CB10u); set32(c.r[6], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_00E3(c, 66u, depth + 1u); else { c.pc = 0x0048CBB0u; return; } if (c.pc != 0x0048CB10u) [[unlikely]] return; }
L_0048CB10:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CB1Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x0048CB1Cu) [[unlikely]] return; }
L_0048CB1C:
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0048CB38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0048CB3C; } }
L_0048CB38:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0048CB3C:
    set32(c.r[18], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], 0u + 16u);
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 7;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_0048CB6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CB60u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048CB60u) [[unlikely]] return; }
L_0048CB60:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
L_0048CB6C:
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0048CBB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[12], c.f[12]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[2], c.f[12]));
    c.f[6] = fp::mul(c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[2] = fp::sub(c.f[2], c.f[5]);
    c.f[2] = fp::mul(c.f[2], c.f[6]);
    c.f[1] = fp::add(c.f[4], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[2] = fp::add(c.f[5], c.f[2]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[2]);  c.pc = t; return; }
L_0048CC30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CC54u); set32(c.r[5], c.r[17].w[0] + 44u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x0048CC54u) [[unlikely]] return; }
L_0048CC54:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CC60u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0048CC60u) [[unlikely]] return; }
L_0048CC60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CC6Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00E3(c, 292u, depth + 1u); else { c.pc = 0x0048E9A0u; return; } if (c.pc != 0x0048CC6Cu) [[unlikely]] return; }
L_0048CC6C:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0048CC94; }
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0048CC90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CC90u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0048CC90u) [[unlikely]] return; }
L_0048CC90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0048CC94:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0048CCB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], c.r[17].w[0] + 44u);
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CCDCu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x0048CCDCu) [[unlikely]] return; }
L_0048CCDC:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 4u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0048CD78; }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[3] = ld32((c.r[17].w[0] + 40u));  goto L_0048CD10; }
    st32((c.r[17].w[0] + 40u), c.f[1]);
    c.f[3] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 2;
L_0048CD10:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    fpu_div(c, 4u, c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[3] = fp::add(c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[17].w[0] + 28u));
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    c.f[2] = fp::add(c.f[1], c.f[2]);
    c.f[1] = fp::mul(c.f[0], c.f[4]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    st32((c.r[2].w[0] + 4u), c.f[3]);
    st32((c.r[2].w[0] + 8u), c.f[2]);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0048CD74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0048CD78; } }
L_0048CD74:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0048CD78:
    set32(c.r[18], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], 0u + 16u);
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 7;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_0048CDA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CD9Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048CD9Cu) [[unlikely]] return; }
L_0048CD9C:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
L_0048CDA8:
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0048CDE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CE04u); set32(c.r[5], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x0048CE04u) [[unlikely]] return; }
L_0048CE04:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CE10u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0048CE10u) [[unlikely]] return; }
L_0048CE10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CE1Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00E3(c, 316u, depth + 1u); else { c.pc = 0x0048EC20u; return; } if (c.pc != 0x0048CE1Cu) [[unlikely]] return; }
L_0048CE1C:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0048CE44; }
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0048CE40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CE40u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0048CE40u) [[unlikely]] return; }
L_0048CE40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0048CE44:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0048CE60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], c.r[17].w[0] + 52u);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CE8Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x0048CE8Cu) [[unlikely]] return; }
L_0048CE8C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 4u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0048CF60; }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.f[12] = 0u;
    c.f[1] = fp::add(c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CECCu); st32((c.r[29].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_00C8(c, 16u, depth + 1u); else { c.pc = 0x00420540u; return; } if (c.pc != 0x0048CECCu) [[unlikely]] return; }
L_0048CECC:
    c.f[3] = ld32((c.r[17].w[0] + 44u));
    c.f[2] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::sub(c.f[2], c.f[3]);
    c.f[1] = ld32((c.r[29].w[0] + 108u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CEF0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 315u, depth + 1u); else { c.pc = 0x00127570u; return; } if (c.pc != 0x0048CEF0u) [[unlikely]] return; }
L_0048CEF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    set32(c.r[5], c.r[17].w[0] + 20u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CF24u);  if (depth < kMaxDepth) unit_00C8(c, 46u, depth + 1u); else { c.pc = 0x00420B80u; return; } if (c.pc != 0x0048CF24u) [[unlikely]] return; }
L_0048CF24:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[17].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CF34u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00E3(c, 88u, depth + 1u); else { c.pc = 0x0048CFD0u; return; } if (c.pc != 0x0048CF34u) [[unlikely]] return; }
L_0048CF34:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CF40u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x0048CF40u) [[unlikely]] return; }
L_0048CF40:
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0048CF5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0048CF60; } }
L_0048CF5C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0048CF60:
    set32(c.r[18], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], 0u + 16u);
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 7;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_0048CF90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048CF84u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048CF84u) [[unlikely]] return; }
L_0048CF84:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
L_0048CF90:
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0048CFD0:
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[4] = fp::add(c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[4]);  c.pc = t; return; }
L_0048D010:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[5], c.r[18].w[0] + 4u);
    st16((c.r[4].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0048D08C; } }
    set32(c.r[4], c.r[17].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D068u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048D068u) [[unlikely]] return; }
L_0048D068:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], c.r[17].w[0] + 84u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 84u);  goto L_0048D084; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D080u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048D080u) [[unlikely]] return; }
L_0048D080:
    set32(c.r[2], c.r[17].w[0] + 84u);
    c.budget -= 1;
L_0048D084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_0048D0B4; } }
L_0048D08C:
    set32(c.r[19], ld32((c.r[18].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 104u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D09Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048D09Cu) [[unlikely]] return; }
L_0048D09C:
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D0B0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048D0B0u) [[unlikely]] return; }
L_0048D0B0:
    st32((c.r[17].w[0] + 84u), c.r[19].w[0]);
    c.budget -= 1;
L_0048D0B4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D0C0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0048D0C0u) [[unlikely]] return; }
L_0048D0C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D0CCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00E3(c, 24u, depth + 1u); else { c.pc = 0x0048C430u; return; } if (c.pc != 0x0048D0CCu) [[unlikely]] return; }
L_0048D0CC:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0048D0F4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0048D0F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D0F0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0048D0F0u) [[unlikely]] return; }
L_0048D0F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0048D0F4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0048D110:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[5], c.r[17].w[0] + 4u);
    st16((c.r[4].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.f[20] = c.f[12];  if (t) { goto L_0048D194; } }
    set32(c.r[4], c.r[16].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D170u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048D170u) [[unlikely]] return; }
L_0048D170:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], c.r[16].w[0] + 84u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 84u);  goto L_0048D18C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D188u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048D188u) [[unlikely]] return; }
L_0048D188:
    set32(c.r[2], c.r[16].w[0] + 84u);
    c.budget -= 1;
L_0048D18C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_0048D1BC; } }
L_0048D194:
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 104u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D1A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048D1A4u) [[unlikely]] return; }
L_0048D1A4:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D1B8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048D1B8u) [[unlikely]] return; }
L_0048D1B8:
    st32((c.r[16].w[0] + 84u), c.r[18].w[0]);
    c.budget -= 1;
L_0048D1BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D1C8u); set32(c.r[5], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_00E2(c, 133u, depth + 1u); else { c.pc = 0x004893F0u; return; } if (c.pc != 0x0048D1C8u) [[unlikely]] return; }
L_0048D1C8:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D1D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E3(c, 340u, depth + 1u); else { c.pc = 0x0048EEA0u; return; } if (c.pc != 0x0048D1D4u) [[unlikely]] return; }
L_0048D1D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D1E4u); set32(c.r[5], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0021(c, 26u, depth + 1u); else { c.pc = 0x001844E0u; return; } if (c.pc != 0x0048D1E4u) [[unlikely]] return; }
L_0048D1E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 84u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 132u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 106u)));
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 14;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[18], ld32((c.r[16].w[0] + 84u)));  goto L_0048D248; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D224u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048D224u) [[unlikely]] return; }
L_0048D224:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[29].w[0] + 116u);  goto L_0048D240; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D23Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048D23Cu) [[unlikely]] return; }
L_0048D23C:
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 1;
L_0048D240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 132u), c.r[2].w[0]);  if (t) { goto L_0048D270; } }
L_0048D248:
    c.r[5].d[0] = 0ull << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D258u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048D258u) [[unlikely]] return; }
L_0048D258:
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D26Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048D26Cu) [[unlikely]] return; }
L_0048D26C:
    st32((c.r[29].w[0] + 116u), c.r[18].w[0]);
    c.budget -= 1;
L_0048D270:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[5], c.r[29].w[0] + 116u);
    set32(c.r[19], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] << 5);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 12;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 116u)));  goto L_0048D2D0; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D2ACu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048D2ACu) [[unlikely]] return; }
L_0048D2AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0048D2C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D2C4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048D2C4u) [[unlikely]] return; }
L_0048D2C4:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0048D2C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0048D2F4; } }
L_0048D2D0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D2DCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048D2DCu) [[unlikely]] return; }
L_0048D2DC:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D2F0u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048D2F0u) [[unlikely]] return; }
L_0048D2F0:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_0048D2F4:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D308u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048D308u) [[unlikely]] return; }
L_0048D308:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_0048D338; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0048D33C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D338u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048D338u) [[unlikely]] return; }
L_0048D338:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0048D33C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0048D360:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[5], c.r[18].w[0] + 4u);
    st16((c.r[4].w[0] + 70u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0048D3DC; } }
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D3B8u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048D3B8u) [[unlikely]] return; }
L_0048D3B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], c.r[17].w[0] + 48u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 48u);  goto L_0048D3D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D3D0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048D3D0u) [[unlikely]] return; }
L_0048D3D0:
    set32(c.r[2], c.r[17].w[0] + 48u);
    c.budget -= 1;
L_0048D3D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_0048D404; } }
L_0048D3DC:
    set32(c.r[19], ld32((c.r[18].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D3ECu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048D3ECu) [[unlikely]] return; }
L_0048D3EC:
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D400u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048D400u) [[unlikely]] return; }
L_0048D400:
    st32((c.r[17].w[0] + 48u), c.r[19].w[0]);
    c.budget -= 1;
L_0048D404:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D410u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0048D410u) [[unlikely]] return; }
L_0048D410:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D41Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00E3(c, 30u, depth + 1u); else { c.pc = 0x0048C540u; return; } if (c.pc != 0x0048D41Cu) [[unlikely]] return; }
L_0048D41C:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0048D444; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0048D440; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D440u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0048D440u) [[unlikely]] return; }
L_0048D440:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0048D444:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0048D460:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[5], c.r[17].w[0] + 4u);
    st16((c.r[4].w[0] + 70u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.f[20] = c.f[12];  if (t) { goto L_0048D4E4; } }
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D4C0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048D4C0u) [[unlikely]] return; }
L_0048D4C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], c.r[16].w[0] + 48u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 48u);  goto L_0048D4DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D4D8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048D4D8u) [[unlikely]] return; }
L_0048D4D8:
    set32(c.r[2], c.r[16].w[0] + 48u);
    c.budget -= 1;
L_0048D4DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_0048D50C; } }
L_0048D4E4:
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D4F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048D4F4u) [[unlikely]] return; }
L_0048D4F4:
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D508u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048D508u) [[unlikely]] return; }
L_0048D508:
    st32((c.r[16].w[0] + 48u), c.r[18].w[0]);
    c.budget -= 1;
L_0048D50C:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D518u); set32(c.r[5], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_00B9(c, 422u, depth + 1u); else { c.pc = 0x003E7B80u; return; } if (c.pc != 0x0048D518u) [[unlikely]] return; }
L_0048D518:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D524u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E3(c, 355u, depth + 1u); else { c.pc = 0x0048F0D0u; return; } if (c.pc != 0x0048D524u) [[unlikely]] return; }
L_0048D524:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.f[12] = ld32((c.r[16].w[0] + 28u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D534u); c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0048D534u) [[unlikely]] return; }
L_0048D534:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 132u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 70u)));
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 14;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[18], ld32((c.r[16].w[0] + 48u)));  goto L_0048D598; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D574u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048D574u) [[unlikely]] return; }
L_0048D574:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[29].w[0] + 116u);  goto L_0048D590; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D58Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048D58Cu) [[unlikely]] return; }
L_0048D58C:
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 1;
L_0048D590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 132u), c.r[2].w[0]);  if (t) { goto L_0048D5C0; } }
L_0048D598:
    c.r[5].d[0] = 0ull << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D5A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048D5A8u) [[unlikely]] return; }
L_0048D5A8:
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D5BCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048D5BCu) [[unlikely]] return; }
L_0048D5BC:
    st32((c.r[29].w[0] + 116u), c.r[18].w[0]);
    c.budget -= 1;
L_0048D5C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], c.r[29].w[0] + 116u);
    set32(c.r[19], ld32((c.r[16].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] << 5);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 12;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 116u)));  goto L_0048D620; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D5FCu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048D5FCu) [[unlikely]] return; }
L_0048D5FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0048D618; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D614u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048D614u) [[unlikely]] return; }
L_0048D614:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0048D618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0048D644; } }
L_0048D620:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D62Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048D62Cu) [[unlikely]] return; }
L_0048D62C:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D640u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048D640u) [[unlikely]] return; }
L_0048D640:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_0048D644:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D658u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048D658u) [[unlikely]] return; }
L_0048D658:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_0048D688; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0048D68C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D688u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048D688u) [[unlikely]] return; }
L_0048D688:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0048D68C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0048D6B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[5], c.r[18].w[0] + 4u);
    st16((c.r[4].w[0] + 70u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0048D72C; } }
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D708u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048D708u) [[unlikely]] return; }
L_0048D708:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], c.r[17].w[0] + 48u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 48u);  goto L_0048D724; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D720u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048D720u) [[unlikely]] return; }
L_0048D720:
    set32(c.r[2], c.r[17].w[0] + 48u);
    c.budget -= 1;
L_0048D724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_0048D754; } }
L_0048D72C:
    set32(c.r[19], ld32((c.r[18].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D73Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048D73Cu) [[unlikely]] return; }
L_0048D73C:
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D750u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048D750u) [[unlikely]] return; }
L_0048D750:
    st32((c.r[17].w[0] + 48u), c.r[19].w[0]);
    c.budget -= 1;
L_0048D754:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D760u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0048D760u) [[unlikely]] return; }
L_0048D760:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D76Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00E3(c, 38u, depth + 1u); else { c.pc = 0x0048C6E0u; return; } if (c.pc != 0x0048D76Cu) [[unlikely]] return; }
L_0048D76C:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0048D794; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0048D790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D790u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0048D790u) [[unlikely]] return; }
L_0048D790:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0048D794:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0048D7B0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[5], c.r[17].w[0] + 4u);
    st16((c.r[4].w[0] + 70u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.f[20] = c.f[12];  if (t) { goto L_0048D834; } }
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D810u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048D810u) [[unlikely]] return; }
L_0048D810:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], c.r[16].w[0] + 48u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 48u);  goto L_0048D82C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D828u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048D828u) [[unlikely]] return; }
L_0048D828:
    set32(c.r[2], c.r[16].w[0] + 48u);
    c.budget -= 1;
L_0048D82C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_0048D85C; } }
L_0048D834:
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D844u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048D844u) [[unlikely]] return; }
L_0048D844:
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D858u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048D858u) [[unlikely]] return; }
L_0048D858:
    st32((c.r[16].w[0] + 48u), c.r[18].w[0]);
    c.budget -= 1;
L_0048D85C:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D868u); set32(c.r[5], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_00B9(c, 422u, depth + 1u); else { c.pc = 0x003E7B80u; return; } if (c.pc != 0x0048D868u) [[unlikely]] return; }
L_0048D868:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D874u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 409u, depth + 1u); else { c.pc = 0x0048BBD0u; return; } if (c.pc != 0x0048D874u) [[unlikely]] return; }
L_0048D874:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.f[12] = ld32((c.r[16].w[0] + 28u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D884u); c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0048D884u) [[unlikely]] return; }
L_0048D884:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 132u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 70u)));
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 14;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[18], ld32((c.r[16].w[0] + 48u)));  goto L_0048D8E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D8C4u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048D8C4u) [[unlikely]] return; }
L_0048D8C4:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[29].w[0] + 116u);  goto L_0048D8E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D8DCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048D8DCu) [[unlikely]] return; }
L_0048D8DC:
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 1;
L_0048D8E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 132u), c.r[2].w[0]);  if (t) { goto L_0048D910; } }
L_0048D8E8:
    c.r[5].d[0] = 0ull << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D8F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048D8F8u) [[unlikely]] return; }
L_0048D8F8:
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D90Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048D90Cu) [[unlikely]] return; }
L_0048D90C:
    st32((c.r[29].w[0] + 116u), c.r[18].w[0]);
    c.budget -= 1;
L_0048D910:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], c.r[29].w[0] + 116u);
    set32(c.r[19], ld32((c.r[16].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] << 5);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 12;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 116u)));  goto L_0048D970; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D94Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048D94Cu) [[unlikely]] return; }
L_0048D94C:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0048D968; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D964u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048D964u) [[unlikely]] return; }
L_0048D964:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0048D968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0048D994; } }
L_0048D970:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D97Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048D97Cu) [[unlikely]] return; }
L_0048D97C:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D990u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048D990u) [[unlikely]] return; }
L_0048D990:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_0048D994:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D9A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048D9A8u) [[unlikely]] return; }
L_0048D9A8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_0048D9D8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0048D9DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048D9D8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048D9D8u) [[unlikely]] return; }
L_0048D9D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0048D9DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0048DA00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[5], c.r[18].w[0] + 4u);
    st16((c.r[4].w[0] + 78u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0048DA7C; } }
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DA58u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048DA58u) [[unlikely]] return; }
L_0048DA58:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], c.r[17].w[0] + 56u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 56u);  goto L_0048DA74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DA70u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048DA70u) [[unlikely]] return; }
L_0048DA70:
    set32(c.r[2], c.r[17].w[0] + 56u);
    c.budget -= 1;
L_0048DA74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_0048DAA4; } }
L_0048DA7C:
    set32(c.r[19], ld32((c.r[18].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DA8Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048DA8Cu) [[unlikely]] return; }
L_0048DA8C:
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DAA0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048DAA0u) [[unlikely]] return; }
L_0048DAA0:
    st32((c.r[17].w[0] + 56u), c.r[19].w[0]);
    c.budget -= 1;
L_0048DAA4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DAB0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0048DAB0u) [[unlikely]] return; }
L_0048DAB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DABCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00E3(c, 46u, depth + 1u); else { c.pc = 0x0048C860u; return; } if (c.pc != 0x0048DABCu) [[unlikely]] return; }
L_0048DABC:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0048DAE4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0048DAE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DAE0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0048DAE0u) [[unlikely]] return; }
L_0048DAE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0048DAE4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0048DB00:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[5], c.r[17].w[0] + 4u);
    st16((c.r[4].w[0] + 78u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.f[20] = c.f[12];  if (t) { goto L_0048DB84; } }
    set32(c.r[4], c.r[16].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DB60u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048DB60u) [[unlikely]] return; }
L_0048DB60:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], c.r[16].w[0] + 56u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 56u);  goto L_0048DB7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DB78u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048DB78u) [[unlikely]] return; }
L_0048DB78:
    set32(c.r[2], c.r[16].w[0] + 56u);
    c.budget -= 1;
L_0048DB7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_0048DBAC; } }
L_0048DB84:
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DB94u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048DB94u) [[unlikely]] return; }
L_0048DB94:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DBA8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048DBA8u) [[unlikely]] return; }
L_0048DBA8:
    st32((c.r[16].w[0] + 56u), c.r[18].w[0]);
    c.budget -= 1;
L_0048DBAC:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DBB8u); set32(c.r[5], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_00B9(c, 422u, depth + 1u); else { c.pc = 0x003E7B80u; return; } if (c.pc != 0x0048DBB8u) [[unlikely]] return; }
L_0048DBB8:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DBC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 404u, depth + 1u); else { c.pc = 0x0048BA30u; return; } if (c.pc != 0x0048DBC4u) [[unlikely]] return; }
L_0048DBC4:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.f[12] = ld32((c.r[16].w[0] + 36u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DBD4u); c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0048DBD4u) [[unlikely]] return; }
L_0048DBD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 56u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 132u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 78u)));
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 14;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[18], ld32((c.r[16].w[0] + 56u)));  goto L_0048DC38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DC14u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048DC14u) [[unlikely]] return; }
L_0048DC14:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[29].w[0] + 116u);  goto L_0048DC30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DC2Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048DC2Cu) [[unlikely]] return; }
L_0048DC2C:
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 1;
L_0048DC30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 132u), c.r[2].w[0]);  if (t) { goto L_0048DC60; } }
L_0048DC38:
    c.r[5].d[0] = 0ull << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DC48u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048DC48u) [[unlikely]] return; }
L_0048DC48:
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DC5Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048DC5Cu) [[unlikely]] return; }
L_0048DC5C:
    st32((c.r[29].w[0] + 116u), c.r[18].w[0]);
    c.budget -= 1;
L_0048DC60:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], c.r[29].w[0] + 116u);
    set32(c.r[19], ld32((c.r[16].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] << 5);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 12;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 116u)));  goto L_0048DCC0; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DC9Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048DC9Cu) [[unlikely]] return; }
L_0048DC9C:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0048DCB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DCB4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048DCB4u) [[unlikely]] return; }
L_0048DCB4:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0048DCB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0048DCE4; } }
L_0048DCC0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DCCCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048DCCCu) [[unlikely]] return; }
L_0048DCCC:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DCE0u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048DCE0u) [[unlikely]] return; }
L_0048DCE0:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_0048DCE4:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DCF8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048DCF8u) [[unlikely]] return; }
L_0048DCF8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_0048DD28; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0048DD2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DD28u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048DD28u) [[unlikely]] return; }
L_0048DD28:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0048DD2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0048DD50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[5], c.r[18].w[0] + 4u);
    st16((c.r[4].w[0] + 94u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0048DDCC; } }
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DDA8u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048DDA8u) [[unlikely]] return; }
L_0048DDA8:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[17].w[0] + 72u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 72u);  goto L_0048DDC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DDC0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048DDC0u) [[unlikely]] return; }
L_0048DDC0:
    set32(c.r[2], c.r[17].w[0] + 72u);
    c.budget -= 1;
L_0048DDC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_0048DDF4; } }
L_0048DDCC:
    set32(c.r[19], ld32((c.r[18].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DDDCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048DDDCu) [[unlikely]] return; }
L_0048DDDC:
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DDF0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048DDF0u) [[unlikely]] return; }
L_0048DDF0:
    st32((c.r[17].w[0] + 72u), c.r[19].w[0]);
    c.budget -= 1;
L_0048DDF4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DE00u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0048DE00u) [[unlikely]] return; }
L_0048DE00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DE0Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00E3(c, 55u, depth + 1u); else { c.pc = 0x0048CA10u; return; } if (c.pc != 0x0048DE0Cu) [[unlikely]] return; }
L_0048DE0C:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0048DE34; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0048DE30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DE30u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0048DE30u) [[unlikely]] return; }
L_0048DE30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0048DE34:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0048DE50:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[5], c.r[17].w[0] + 4u);
    st16((c.r[4].w[0] + 94u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.f[20] = c.f[12];  if (t) { goto L_0048DED4; } }
    set32(c.r[4], c.r[16].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DEB0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048DEB0u) [[unlikely]] return; }
L_0048DEB0:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[16].w[0] + 72u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 72u);  goto L_0048DECC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DEC8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048DEC8u) [[unlikely]] return; }
L_0048DEC8:
    set32(c.r[2], c.r[16].w[0] + 72u);
    c.budget -= 1;
L_0048DECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_0048DEFC; } }
L_0048DED4:
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DEE4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048DEE4u) [[unlikely]] return; }
L_0048DEE4:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DEF8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048DEF8u) [[unlikely]] return; }
L_0048DEF8:
    st32((c.r[16].w[0] + 72u), c.r[18].w[0]);
    c.budget -= 1;
L_0048DEFC:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DF08u); set32(c.r[5], c.r[16].w[0] + 44u);  if (depth < kMaxDepth) unit_00E3(c, 219u, depth + 1u); else { c.pc = 0x0048E0A0u; return; } if (c.pc != 0x0048DF08u) [[unlikely]] return; }
L_0048DF08:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DF14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E3(c, 366u, depth + 1u); else { c.pc = 0x0048F260u; return; } if (c.pc != 0x0048DF14u) [[unlikely]] return; }
L_0048DF14:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DF24u); set32(c.r[5], c.r[16].w[0] + 44u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x0048DF24u) [[unlikely]] return; }
L_0048DF24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 72u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 132u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 94u)));
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 14;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[18], ld32((c.r[16].w[0] + 72u)));  goto L_0048DF88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DF64u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048DF64u) [[unlikely]] return; }
L_0048DF64:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[29].w[0] + 116u);  goto L_0048DF80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DF7Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048DF7Cu) [[unlikely]] return; }
L_0048DF7C:
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 1;
L_0048DF80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 132u), c.r[2].w[0]);  if (t) { goto L_0048DFB0; } }
L_0048DF88:
    c.r[5].d[0] = 0ull << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DF98u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048DF98u) [[unlikely]] return; }
L_0048DF98:
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DFACu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048DFACu) [[unlikely]] return; }
L_0048DFAC:
    st32((c.r[29].w[0] + 116u), c.r[18].w[0]);
    c.budget -= 1;
L_0048DFB0:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[5], c.r[29].w[0] + 116u);
    set32(c.r[19], ld32((c.r[16].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] << 5);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 12;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 116u)));  goto L_0048E010; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048DFECu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048DFECu) [[unlikely]] return; }
L_0048DFEC:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0048E008; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E004u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048E004u) [[unlikely]] return; }
L_0048E004:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0048E008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0048E034; } }
L_0048E010:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E01Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048E01Cu) [[unlikely]] return; }
L_0048E01C:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E030u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048E030u) [[unlikely]] return; }
L_0048E030:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_0048E034:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E048u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048E048u) [[unlikely]] return; }
L_0048E048:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_0048E078; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0048E07C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E078u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048E078u) [[unlikely]] return; }
L_0048E078:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0048E07C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0048E0A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 26u)));
    c.r[3].d[0] = c.r[6].d[0] & 512ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0048E0D0; } }
    c.r[3].d[0] = c.r[6].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], c.r[4].w[0] + 20u);  if (t) { goto L_0048E0D0; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 1;
L_0048E0D0:
    set32(c.r[5], 0u - 1025u);
    set32(c.r[3], 0u + 128u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  goto L_0048E1E8; }
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0048E1D8; }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0048E1C8; }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0048E1B8; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0048E1A8; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0048E198; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0048E188; }
    set32(c.r[3], 0u + 512u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[7].d[0] + 0ull;  goto L_0048E178; }
    set32(c.r[3], 0u + 256u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0048E158; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0048E200; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0048E1FC; } }
L_0048E158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E160u);  if (depth < kMaxDepth) unit_0004(c, 302u, depth + 1u); else { c.pc = 0x00113640u; return; } if (c.pc != 0x0048E160u) [[unlikely]] return; }
L_0048E160:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E170u); set32(c.r[4], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_000A(c, 219u, depth + 1u); else { c.pc = 0x00129C00u; return; } if (c.pc != 0x0048E170u) [[unlikely]] return; }
L_0048E170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0048E1FC; } }
L_0048E178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E180u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 219u, depth + 1u); else { c.pc = 0x00129C00u; return; } if (c.pc != 0x0048E180u) [[unlikely]] return; }
L_0048E180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0048E1FC; } }
L_0048E188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E190u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 218u, depth + 1u); else { c.pc = 0x00129BF0u; return; } if (c.pc != 0x0048E190u) [[unlikely]] return; }
L_0048E190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0048E1FC; } }
L_0048E198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E1A0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 217u, depth + 1u); else { c.pc = 0x00129BE0u; return; } if (c.pc != 0x0048E1A0u) [[unlikely]] return; }
L_0048E1A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0048E1FC; } }
L_0048E1A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E1B0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 216u, depth + 1u); else { c.pc = 0x00129BD0u; return; } if (c.pc != 0x0048E1B0u) [[unlikely]] return; }
L_0048E1B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0048E1FC; } }
L_0048E1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E1C0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 215u, depth + 1u); else { c.pc = 0x00129BB0u; return; } if (c.pc != 0x0048E1C0u) [[unlikely]] return; }
L_0048E1C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0048E1FC; } }
L_0048E1C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E1D0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 214u, depth + 1u); else { c.pc = 0x00129BA0u; return; } if (c.pc != 0x0048E1D0u) [[unlikely]] return; }
L_0048E1D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0048E1FC; } }
L_0048E1D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E1E0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 213u, depth + 1u); else { c.pc = 0x00129B90u; return; } if (c.pc != 0x0048E1E0u) [[unlikely]] return; }
L_0048E1E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0048E1FC; } }
L_0048E1E8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E1FCu); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 212u, depth + 1u); else { c.pc = 0x00129B80u; return; } if (c.pc != 0x0048E1FCu) [[unlikely]] return; }
L_0048E1FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0048E200:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0048E210:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[5], c.r[18].w[0] + 4u);
    st16((c.r[4].w[0] + 94u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0048E28C; } }
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E268u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048E268u) [[unlikely]] return; }
L_0048E268:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[17].w[0] + 72u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 72u);  goto L_0048E284; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E280u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048E280u) [[unlikely]] return; }
L_0048E280:
    set32(c.r[2], c.r[17].w[0] + 72u);
    c.budget -= 1;
L_0048E284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_0048E2B4; } }
L_0048E28C:
    set32(c.r[19], ld32((c.r[18].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E29Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048E29Cu) [[unlikely]] return; }
L_0048E29C:
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E2B0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048E2B0u) [[unlikely]] return; }
L_0048E2B0:
    st32((c.r[17].w[0] + 72u), c.r[19].w[0]);
    c.budget -= 1;
L_0048E2B4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E2C0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0048E2C0u) [[unlikely]] return; }
L_0048E2C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E2CCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00E3(c, 67u, depth + 1u); else { c.pc = 0x0048CC30u; return; } if (c.pc != 0x0048E2CCu) [[unlikely]] return; }
L_0048E2CC:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0048E2F4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0048E2F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E2F0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0048E2F0u) [[unlikely]] return; }
L_0048E2F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0048E2F4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0048E310:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[5], c.r[17].w[0] + 4u);
    st16((c.r[4].w[0] + 94u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.f[20] = c.f[12];  if (t) { goto L_0048E394; } }
    set32(c.r[4], c.r[16].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E370u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048E370u) [[unlikely]] return; }
L_0048E370:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[16].w[0] + 72u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 72u);  goto L_0048E38C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E388u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048E388u) [[unlikely]] return; }
L_0048E388:
    set32(c.r[2], c.r[16].w[0] + 72u);
    c.budget -= 1;
L_0048E38C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_0048E3BC; } }
L_0048E394:
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E3A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048E3A4u) [[unlikely]] return; }
L_0048E3A4:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E3B8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048E3B8u) [[unlikely]] return; }
L_0048E3B8:
    st32((c.r[16].w[0] + 72u), c.r[18].w[0]);
    c.budget -= 1;
L_0048E3BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E3C8u); set32(c.r[5], c.r[16].w[0] + 44u);  if (depth < kMaxDepth) unit_00E3(c, 219u, depth + 1u); else { c.pc = 0x0048E0A0u; return; } if (c.pc != 0x0048E3C8u) [[unlikely]] return; }
L_0048E3C8:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E3D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 407u, depth + 1u); else { c.pc = 0x0048BB10u; return; } if (c.pc != 0x0048E3D4u) [[unlikely]] return; }
L_0048E3D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E3E4u); set32(c.r[5], c.r[16].w[0] + 44u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x0048E3E4u) [[unlikely]] return; }
L_0048E3E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 72u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 132u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 94u)));
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 14;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[18], ld32((c.r[16].w[0] + 72u)));  goto L_0048E448; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E424u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048E424u) [[unlikely]] return; }
L_0048E424:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[29].w[0] + 116u);  goto L_0048E440; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E43Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048E43Cu) [[unlikely]] return; }
L_0048E43C:
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 1;
L_0048E440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 132u), c.r[2].w[0]);  if (t) { goto L_0048E470; } }
L_0048E448:
    c.r[5].d[0] = 0ull << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E458u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048E458u) [[unlikely]] return; }
L_0048E458:
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E46Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048E46Cu) [[unlikely]] return; }
L_0048E46C:
    st32((c.r[29].w[0] + 116u), c.r[18].w[0]);
    c.budget -= 1;
L_0048E470:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[5], c.r[29].w[0] + 116u);
    set32(c.r[19], ld32((c.r[16].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] << 5);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 12;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 116u)));  goto L_0048E4D0; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E4ACu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048E4ACu) [[unlikely]] return; }
L_0048E4AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0048E4C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E4C4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048E4C4u) [[unlikely]] return; }
L_0048E4C4:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0048E4C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0048E4F4; } }
L_0048E4D0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E4DCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048E4DCu) [[unlikely]] return; }
L_0048E4DC:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E4F0u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048E4F0u) [[unlikely]] return; }
L_0048E4F0:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_0048E4F4:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E508u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048E508u) [[unlikely]] return; }
L_0048E508:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_0048E538; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0048E53C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E538u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048E538u) [[unlikely]] return; }
L_0048E538:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0048E53C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0048E560:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[5], c.r[18].w[0] + 4u);
    st16((c.r[4].w[0] + 102u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0048E5DC; } }
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E5B8u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048E5B8u) [[unlikely]] return; }
L_0048E5B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[17].w[0] + 80u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 80u);  goto L_0048E5D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E5D0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048E5D0u) [[unlikely]] return; }
L_0048E5D0:
    set32(c.r[2], c.r[17].w[0] + 80u);
    c.budget -= 1;
L_0048E5D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_0048E604; } }
L_0048E5DC:
    set32(c.r[19], ld32((c.r[18].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 100u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E5ECu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048E5ECu) [[unlikely]] return; }
L_0048E5EC:
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E600u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048E600u) [[unlikely]] return; }
L_0048E600:
    st32((c.r[17].w[0] + 80u), c.r[19].w[0]);
    c.budget -= 1;
L_0048E604:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E610u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0048E610u) [[unlikely]] return; }
L_0048E610:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E61Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00E3(c, 75u, depth + 1u); else { c.pc = 0x0048CDE0u; return; } if (c.pc != 0x0048E61Cu) [[unlikely]] return; }
L_0048E61C:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0048E644; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0048E640; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E640u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0048E640u) [[unlikely]] return; }
L_0048E640:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0048E644:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0048E660:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[5], c.r[17].w[0] + 4u);
    st16((c.r[4].w[0] + 102u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.f[20] = c.f[12];  if (t) { goto L_0048E6E4; } }
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E6C0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048E6C0u) [[unlikely]] return; }
L_0048E6C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[16].w[0] + 80u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 80u);  goto L_0048E6DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E6D8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048E6D8u) [[unlikely]] return; }
L_0048E6D8:
    set32(c.r[2], c.r[16].w[0] + 80u);
    c.budget -= 1;
L_0048E6DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_0048E70C; } }
L_0048E6E4:
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 100u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E6F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048E6F4u) [[unlikely]] return; }
L_0048E6F4:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E708u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048E708u) [[unlikely]] return; }
L_0048E708:
    st32((c.r[16].w[0] + 80u), c.r[18].w[0]);
    c.budget -= 1;
L_0048E70C:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E718u); set32(c.r[5], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_00E3(c, 219u, depth + 1u); else { c.pc = 0x0048E0A0u; return; } if (c.pc != 0x0048E718u) [[unlikely]] return; }
L_0048E718:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E724u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 401u, depth + 1u); else { c.pc = 0x0048B930u; return; } if (c.pc != 0x0048E724u) [[unlikely]] return; }
L_0048E724:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E734u); set32(c.r[5], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x0048E734u) [[unlikely]] return; }
L_0048E734:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 80u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 132u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 102u)));
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 14;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[18], ld32((c.r[16].w[0] + 80u)));  goto L_0048E798; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E774u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048E774u) [[unlikely]] return; }
L_0048E774:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[29].w[0] + 116u);  goto L_0048E790; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E78Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048E78Cu) [[unlikely]] return; }
L_0048E78C:
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 1;
L_0048E790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 132u), c.r[2].w[0]);  if (t) { goto L_0048E7C0; } }
L_0048E798:
    c.r[5].d[0] = 0ull << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E7A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048E7A8u) [[unlikely]] return; }
L_0048E7A8:
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E7BCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048E7BCu) [[unlikely]] return; }
L_0048E7BC:
    st32((c.r[29].w[0] + 116u), c.r[18].w[0]);
    c.budget -= 1;
L_0048E7C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], c.r[29].w[0] + 116u);
    set32(c.r[19], ld32((c.r[16].w[0] + 72u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] << 5);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 12;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 116u)));  goto L_0048E820; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E7FCu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048E7FCu) [[unlikely]] return; }
L_0048E7FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0048E818; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E814u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048E814u) [[unlikely]] return; }
L_0048E814:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0048E818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0048E844; } }
L_0048E820:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E82Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048E82Cu) [[unlikely]] return; }
L_0048E82C:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E840u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048E840u) [[unlikely]] return; }
L_0048E840:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_0048E844:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E858u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048E858u) [[unlikely]] return; }
L_0048E858:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_0048E888; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0048E88C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E888u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048E888u) [[unlikely]] return; }
L_0048E888:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0048E88C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0048E8B0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E8D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 9u, depth + 1u); else { c.pc = 0x00134090u; return; } if (c.pc != 0x0048E8D8u) [[unlikely]] return; }
L_0048E8D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E8E8u); set32(c.r[5], c.r[5].w[0] - 17688u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0048E8E8u) [[unlikely]] return; }
L_0048E8E8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E8F8u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 101u, depth + 1u); else { c.pc = 0x00140C60u; return; } if (c.pc != 0x0048E8F8u) [[unlikely]] return; }
L_0048E8F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0048E91C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0048E91C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E91Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0048E91Cu) [[unlikely]] return; }
L_0048E91C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E92Cu); set32(c.r[5], c.r[5].w[0] - 17704u);  if (depth < kMaxDepth) unit_000C(c, 350u, depth + 1u); else { c.pc = 0x001335E0u; return; } if (c.pc != 0x0048E92Cu) [[unlikely]] return; }
L_0048E92C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E938u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0048E938u) [[unlikely]] return; }
L_0048E938:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E948u); set32(c.r[5], c.r[5].w[0] - 17720u);  if (depth < kMaxDepth) unit_000C(c, 350u, depth + 1u); else { c.pc = 0x001335E0u; return; } if (c.pc != 0x0048E948u) [[unlikely]] return; }
L_0048E948:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E954u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0048E954u) [[unlikely]] return; }
L_0048E954:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u - 1u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E984u); st32((c.r[17].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0048E984u) [[unlikely]] return; }
L_0048E984:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0048E9A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[6], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E9C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 9u, depth + 1u); else { c.pc = 0x00134090u; return; } if (c.pc != 0x0048E9C8u) [[unlikely]] return; }
L_0048E9C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E9D8u); set32(c.r[5], c.r[5].w[0] - 17648u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0048E9D8u) [[unlikely]] return; }
L_0048E9D8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048E9E8u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 101u, depth + 1u); else { c.pc = 0x00140C60u; return; } if (c.pc != 0x0048E9E8u) [[unlikely]] return; }
L_0048E9E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0048EA0C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0048EA0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EA0Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0048EA0Cu) [[unlikely]] return; }
L_0048EA0C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[5].w[0] - 17664u);
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 132u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EA28u); st32((c.r[29].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_000C(c, 350u, depth + 1u); else { c.pc = 0x001335E0u; return; } if (c.pc != 0x0048EA28u) [[unlikely]] return; }
L_0048EA28:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EA34u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x0048EA34u) [[unlikely]] return; }
L_0048EA34:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EA44u); set32(c.r[5], c.r[5].w[0] - 17680u);  if (depth < kMaxDepth) unit_000C(c, 350u, depth + 1u); else { c.pc = 0x001335E0u; return; } if (c.pc != 0x0048EA44u) [[unlikely]] return; }
L_0048EA44:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EA50u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0048EA50u) [[unlikely]] return; }
L_0048EA50:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[4] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[2] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[5], 0u - 1u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[5] = ld32((c.r[2].w[0] + 4u));
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[4] = fp::sub(c.f[4], c.f[5]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    st32((c.r[17].w[0] + 24u), c.f[4]);
    st32((c.r[17].w[0] + 28u), c.f[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EAB0u); st32((c.r[17].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0048EAB0u) [[unlikely]] return; }
L_0048EAB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0048EAD0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EAF8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000D(c, 9u, depth + 1u); else { c.pc = 0x00134090u; return; } if (c.pc != 0x0048EAF8u) [[unlikely]] return; }
L_0048EAF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EB08u); set32(c.r[5], c.r[5].w[0] - 17560u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0048EB08u) [[unlikely]] return; }
L_0048EB08:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EB18u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 101u, depth + 1u); else { c.pc = 0x00140C60u; return; } if (c.pc != 0x0048EB18u) [[unlikely]] return; }
L_0048EB18:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0048EB3C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0048EB3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EB3Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0048EB3Cu) [[unlikely]] return; }
L_0048EB3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EB4Cu); set32(c.r[5], c.r[5].w[0] - 17576u);  if (depth < kMaxDepth) unit_000C(c, 350u, depth + 1u); else { c.pc = 0x001335E0u; return; } if (c.pc != 0x0048EB4Cu) [[unlikely]] return; }
L_0048EB4C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EB58u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0048EB58u) [[unlikely]] return; }
L_0048EB58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EB68u); set32(c.r[5], c.r[5].w[0] - 17592u);  if (depth < kMaxDepth) unit_000C(c, 350u, depth + 1u); else { c.pc = 0x001335E0u; return; } if (c.pc != 0x0048EB68u) [[unlikely]] return; }
L_0048EB68:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EB74u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0048EB74u) [[unlikely]] return; }
L_0048EB74:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EB84u); set32(c.r[5], c.r[5].w[0] - 17608u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0048EB84u) [[unlikely]] return; }
L_0048EB84:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 28u), 0u);  goto L_0048EBA8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EB98u); set32(c.r[5], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0048EB98u) [[unlikely]] return; }
L_0048EB98:
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    c.f[0] = ld32((c.r[28].w[0] - 32556u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.budget -= 4;
L_0048EBA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EBB8u); set32(c.r[5], c.r[5].w[0] - 17632u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0048EBB8u) [[unlikely]] return; }
L_0048EBB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 32u), 0u);  goto L_0048EBDC; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EBCCu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0048EBCCu) [[unlikely]] return; }
L_0048EBCC:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[28].w[0] - 32556u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.budget -= 4;
L_0048EBDC:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u - 1u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EC0Cu); st32((c.r[16].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0048EC0Cu) [[unlikely]] return; }
L_0048EC0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0048EC20:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[6], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EC48u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000D(c, 9u, depth + 1u); else { c.pc = 0x00134090u; return; } if (c.pc != 0x0048EC48u) [[unlikely]] return; }
L_0048EC48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EC58u); set32(c.r[5], c.r[5].w[0] - 17480u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0048EC58u) [[unlikely]] return; }
L_0048EC58:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EC68u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 101u, depth + 1u); else { c.pc = 0x00140C60u; return; } if (c.pc != 0x0048EC68u) [[unlikely]] return; }
L_0048EC68:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0048EC8C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0048EC8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EC8Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0048EC8Cu) [[unlikely]] return; }
L_0048EC8C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[5].w[0] - 17496u);
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 132u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048ECA8u); st32((c.r[29].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_000C(c, 350u, depth + 1u); else { c.pc = 0x001335E0u; return; } if (c.pc != 0x0048ECA8u) [[unlikely]] return; }
L_0048ECA8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048ECB4u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x0048ECB4u) [[unlikely]] return; }
L_0048ECB4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048ECC4u); set32(c.r[5], c.r[5].w[0] - 17512u);  if (depth < kMaxDepth) unit_000C(c, 350u, depth + 1u); else { c.pc = 0x001335E0u; return; } if (c.pc != 0x0048ECC4u) [[unlikely]] return; }
L_0048ECC4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048ECD0u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0048ECD0u) [[unlikely]] return; }
L_0048ECD0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048ECE0u); set32(c.r[5], c.r[5].w[0] - 17528u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0048ECE0u) [[unlikely]] return; }
L_0048ECE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 44u), 0u);  goto L_0048ED04; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048ECF4u); set32(c.r[5], c.r[16].w[0] + 44u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0048ECF4u) [[unlikely]] return; }
L_0048ECF4:
    c.f[1] = ld32((c.r[16].w[0] + 44u));
    c.f[0] = ld32((c.r[28].w[0] - 32556u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.budget -= 4;
L_0048ED04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048ED14u); set32(c.r[5], c.r[5].w[0] - 17552u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0048ED14u) [[unlikely]] return; }
L_0048ED14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 48u), 0u);  goto L_0048ED38; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048ED28u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0048ED28u) [[unlikely]] return; }
L_0048ED28:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[28].w[0] - 32556u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.budget -= 4;
L_0048ED38:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[4] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[2] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[5], 0u - 1u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[5] = ld32((c.r[2].w[0] + 4u));
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[4] = fp::sub(c.f[4], c.f[5]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    st32((c.r[16].w[0] + 24u), c.f[4]);
    st32((c.r[16].w[0] + 28u), c.f[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048ED98u); st32((c.r[16].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0048ED98u) [[unlikely]] return; }
L_0048ED98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0048EDB0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EDD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 9u, depth + 1u); else { c.pc = 0x00134090u; return; } if (c.pc != 0x0048EDD8u) [[unlikely]] return; }
L_0048EDD8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EDE8u); set32(c.r[5], c.r[5].w[0] - 17440u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0048EDE8u) [[unlikely]] return; }
L_0048EDE8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EDF8u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 101u, depth + 1u); else { c.pc = 0x00140C60u; return; } if (c.pc != 0x0048EDF8u) [[unlikely]] return; }
L_0048EDF8:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0048EE1C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0048EE1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EE1Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0048EE1Cu) [[unlikely]] return; }
L_0048EE1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EE2Cu); set32(c.r[5], c.r[5].w[0] - 17456u);  if (depth < kMaxDepth) unit_000C(c, 350u, depth + 1u); else { c.pc = 0x001335E0u; return; } if (c.pc != 0x0048EE2Cu) [[unlikely]] return; }
L_0048EE2C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EE38u); set32(c.r[5], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_0021(c, 30u, depth + 1u); else { c.pc = 0x00184600u; return; } if (c.pc != 0x0048EE38u) [[unlikely]] return; }
L_0048EE38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EE48u); set32(c.r[5], c.r[5].w[0] - 17472u);  if (depth < kMaxDepth) unit_000C(c, 350u, depth + 1u); else { c.pc = 0x001335E0u; return; } if (c.pc != 0x0048EE48u) [[unlikely]] return; }
L_0048EE48:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EE54u); set32(c.r[5], c.r[17].w[0] + 40u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0048EE54u) [[unlikely]] return; }
L_0048EE54:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EE88u); st32((c.r[17].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0048EE88u) [[unlikely]] return; }
L_0048EE88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0048EEA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0048EF80; } }
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.f[1] = 0u;
    c.f[2] = fp::add(c.f[0], c.f[12]);
    st32((c.r[16].w[0] + 48u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    fpu_div(c, 0u, c.f[2], c.f[0]);
    c.f[1] = fp::max(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::min(c.f[1], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 24u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EEFCu); set32(c.r[6], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_00E3(c, 344u, depth + 1u); else { c.pc = 0x0048EFA0u; return; } if (c.pc != 0x0048EEFCu) [[unlikely]] return; }
L_0048EEFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = 0u;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[20], c.f[20]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[2], c.f[20]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EF30u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00C8(c, 47u, depth + 1u); else { c.pc = 0x00420BB0u; return; } if (c.pc != 0x0048EF30u) [[unlikely]] return; }
L_0048EF30:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048EF40u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00E2(c, 93u, depth + 1u); else { c.pc = 0x00488E60u; return; } if (c.pc != 0x0048EF40u) [[unlikely]] return; }
L_0048EF40:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_0048EF84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0048EF84; } }
L_0048EF80:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0048EF84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0048EFA0:
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[3] = ld32((c.r[5].w[0] + 12u));
    c.f[2] = ld32((c.r[6].w[0] + 12u));
    c.f[4] = fp::sub(c.f[1], c.f[0]);
    c.f[5] = fp::sub(c.f[3], c.f[2]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[4]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[5]);  c.pc = t; return; }
L_0048EFF0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F018u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 9u, depth + 1u); else { c.pc = 0x00134090u; return; } if (c.pc != 0x0048F018u) [[unlikely]] return; }
L_0048F018:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F028u); set32(c.r[5], c.r[5].w[0] - 17400u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0048F028u) [[unlikely]] return; }
L_0048F028:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F038u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 101u, depth + 1u); else { c.pc = 0x00140C60u; return; } if (c.pc != 0x0048F038u) [[unlikely]] return; }
L_0048F038:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0048F05C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0048F05C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F05Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0048F05Cu) [[unlikely]] return; }
L_0048F05C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F06Cu); set32(c.r[5], c.r[5].w[0] - 17416u);  if (depth < kMaxDepth) unit_000C(c, 350u, depth + 1u); else { c.pc = 0x001335E0u; return; } if (c.pc != 0x0048F06Cu) [[unlikely]] return; }
L_0048F06C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F078u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0048F078u) [[unlikely]] return; }
L_0048F078:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F088u); set32(c.r[5], c.r[5].w[0] - 17432u);  if (depth < kMaxDepth) unit_000C(c, 350u, depth + 1u); else { c.pc = 0x001335E0u; return; } if (c.pc != 0x0048F088u) [[unlikely]] return; }
L_0048F088:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F094u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0048F094u) [[unlikely]] return; }
L_0048F094:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F0B0u); st32((c.r[17].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0048F0B0u) [[unlikely]] return; }
L_0048F0B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0048F0D0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0048F168; }
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.f[3] = 0u;
    c.f[1] = fp::add(c.f[0], c.f[12]);
    st32((c.r[4].w[0] + 24u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::max(c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::min(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[2].w[0];
    c.facc = fp::add(c.f[3], c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.f[0] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[1], c.f[2]));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.facc = fp::add(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 32;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0048F164; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0048F168; } }
L_0048F164:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0048F168:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0048F170:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[6], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F198u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 9u, depth + 1u); else { c.pc = 0x00134090u; return; } if (c.pc != 0x0048F198u) [[unlikely]] return; }
L_0048F198:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F1A8u); set32(c.r[5], c.r[5].w[0] - 17360u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0048F1A8u) [[unlikely]] return; }
L_0048F1A8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F1B8u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 101u, depth + 1u); else { c.pc = 0x00140C60u; return; } if (c.pc != 0x0048F1B8u) [[unlikely]] return; }
L_0048F1B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0048F1DC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0048F1DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F1DCu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0048F1DCu) [[unlikely]] return; }
L_0048F1DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F1ECu); set32(c.r[5], c.r[5].w[0] - 17376u);  if (depth < kMaxDepth) unit_000C(c, 350u, depth + 1u); else { c.pc = 0x001335E0u; return; } if (c.pc != 0x0048F1ECu) [[unlikely]] return; }
L_0048F1EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F1F8u); set32(c.r[5], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x0048F1F8u) [[unlikely]] return; }
L_0048F1F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F208u); set32(c.r[5], c.r[5].w[0] - 17392u);  if (depth < kMaxDepth) unit_000C(c, 350u, depth + 1u); else { c.pc = 0x001335E0u; return; } if (c.pc != 0x0048F208u) [[unlikely]] return; }
L_0048F208:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F214u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0048F214u) [[unlikely]] return; }
L_0048F214:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F240u); st32((c.r[17].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0048F240u) [[unlikely]] return; }
L_0048F240:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0048F260:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0048F328; }
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[2] = 0u;
    c.f[1] = fp::add(c.f[0], c.f[12]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::max(c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[3] = fp::min(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[2].w[0];
    c.facc = fp::add(c.f[2], c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.f[0] = fp::mul(c.f[3], c.f[3]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[1], c.f[3]));
    c.f[6] = fp::mul(c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    c.f[4] = ld32((c.r[4].w[0] + 12u));
    c.f[2] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[2] = fp::sub(c.f[2], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    c.f[2] = fp::mul(c.f[2], c.f[6]);
    c.f[5] = ld32((c.r[4].w[0] + 16u));
    c.f[1] = ld32((c.r[4].w[0] + 28u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    c.f[2] = fp::add(c.f[4], c.f[2]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[1] = fp::add(c.f[5], c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 44;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0048F324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0048F328; } }
L_0048F324:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0048F328:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0048F330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0048F3C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 30240u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0048F3A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 20656u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0048F3A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17744u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0048F3A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21552u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0048F3A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0048F3A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F3A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0048F3A8u) [[unlikely]] return; }
L_0048F3A8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0048F3C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F3C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0048F3C0u) [[unlikely]] return; }
L_0048F3C0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0048F3C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0048F3E0:
    set32(c.r[29], c.r[29].w[0] - 368u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F428u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0048F428u) [[unlikely]] return; }
L_0048F428:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F438u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0048F438u) [[unlikely]] return; }
L_0048F438:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F448u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0048F448u) [[unlikely]] return; }
L_0048F448:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0048FB00; } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  goto L_0048FB04; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0048FB00; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F470u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048F470u) [[unlikely]] return; }
L_0048F470:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.f[21] = c.f[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F484u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048F484u) [[unlikely]] return; }
L_0048F484:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.f[20] = c.f[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F498u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048F498u) [[unlikely]] return; }
L_0048F498:
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F4A8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048F4A8u) [[unlikely]] return; }
L_0048F4A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], c.r[29].w[0] + 308u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = fp::add(c.f[20], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 328u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 324u), c.r[4].w[0]);
    c.f[1] = c.r[3].w[0];
    st16((c.r[29].w[0] + 330u), static_cast<std::uint16_t>(c.r[2].w[0]));
    fpu_div(c, 20u, c.f[0], c.f[1]);
    c.f[22] = c.f[0];
    c.budget -= 19;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; c.f[23] = fp::add(c.f[2], c.f[20]);  if (t) { goto L_0048F504; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F4FCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048F4FCu) [[unlikely]] return; }
L_0048F4FC:
    set32(c.r[2], c.r[29].w[0] + 308u);
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    c.budget -= 2;
L_0048F504:
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    set32(c.r[5], c.r[29].w[0] + 308u);
    st32((c.r[2].w[0]), c.f[23]);
    st32((c.r[2].w[0] + 4u), c.f[21]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[18], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[23], ld32((c.r[17].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 330u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[23].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    c.budget -= 15;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[22], ld32((c.r[29].w[0] + 308u)));  goto L_0048F570; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F54Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048F54Cu) [[unlikely]] return; }
L_0048F54C:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0048F568; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F564u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048F564u) [[unlikely]] return; }
L_0048F564:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0048F568:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0048F594; } }
L_0048F570:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F57Cu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048F57Cu) [[unlikely]] return; }
L_0048F57C:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 324u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F590u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048F590u) [[unlikely]] return; }
L_0048F590:
    st32((c.r[16].w[0] + 4u), c.r[22].w[0]);
    c.budget -= 1;
L_0048F594:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F5A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048F5A8u) [[unlikely]] return; }
L_0048F5A8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 330u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 304u), c.r[3].w[0]);  if (t) { goto L_0048F5D8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 324u)));
    set32(c.r[2], c.r[29].w[0] + 308u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].d[0] = ld8((c.r[21].w[0] + 284u));  goto L_0048F5DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F5D8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048F5D8u) [[unlikely]] return; }
L_0048F5D8:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 284u));
    c.budget -= 1;
L_0048F5DC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[24] = ld32((c.r[21].w[0] + 292u));  if (t) { goto L_0048F5F4; } }
    c.f[21] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0048F5F8; } }
L_0048F5F4:
    c.f[21] = fp::sub(c.f[23], c.f[20]);
    c.budget -= 1;
L_0048F5F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 276u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 296u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 292u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 298u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0048F62C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F624u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048F624u) [[unlikely]] return; }
L_0048F624:
    set32(c.r[2], c.r[29].w[0] + 276u);
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 2;
L_0048F62C:
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[5], c.r[29].w[0] + 276u);
    st32((c.r[2].w[0]), c.f[21]);
    st32((c.r[2].w[0] + 4u), c.f[24]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[22], ld32((c.r[19].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 298u)));
    set32(c.r[19], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[4], c.r[22].w[0] << 5);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 15;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[18], ld32((c.r[29].w[0] + 276u)));  goto L_0048F698; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F674u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048F674u) [[unlikely]] return; }
L_0048F674:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0048F690; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F68Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048F68Cu) [[unlikely]] return; }
L_0048F68C:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0048F690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0048F6BC; } }
L_0048F698:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F6A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048F6A4u) [[unlikely]] return; }
L_0048F6A4:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F6B8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048F6B8u) [[unlikely]] return; }
L_0048F6B8:
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 1;
L_0048F6BC:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F6D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048F6D0u) [[unlikely]] return; }
L_0048F6D0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 298u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 272u), c.r[3].w[0]);  if (t) { goto L_0048F700; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[2], c.r[29].w[0] + 276u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].d[0] = ld8((c.r[21].w[0] + 284u));  goto L_0048F704; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F700u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048F700u) [[unlikely]] return; }
L_0048F700:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 284u));
    c.budget -= 1;
L_0048F704:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);  goto L_0048F720; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[21] = fp::add(c.f[0], c.f[22]);  if (t) { goto L_0048F724; } }
L_0048F720:
    c.f[21] = c.r[2].w[0];
    c.budget -= 1;
L_0048F724:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 244u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 264u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 260u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 266u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0048F758; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F750u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048F750u) [[unlikely]] return; }
L_0048F750:
    set32(c.r[2], c.r[29].w[0] + 244u);
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 2;
L_0048F758:
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[5], c.r[29].w[0] + 244u);
    st32((c.r[2].w[0]), c.f[21]);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[19], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[18], ld32((c.r[20].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 266u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 15;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 244u)));  goto L_0048F7C4; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F7A0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048F7A0u) [[unlikely]] return; }
L_0048F7A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0048F7BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F7B8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048F7B8u) [[unlikely]] return; }
L_0048F7B8:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0048F7BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0048F7E8; } }
L_0048F7C4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F7D0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048F7D0u) [[unlikely]] return; }
L_0048F7D0:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F7E4u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048F7E4u) [[unlikely]] return; }
L_0048F7E4:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_0048F7E8:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F7FCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048F7FCu) [[unlikely]] return; }
L_0048F7FC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 266u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 240u), c.r[3].w[0]);  if (t) { goto L_0048F82C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[2], c.r[29].w[0] + 244u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].d[0] = ld8((c.r[21].w[0] + 284u));  goto L_0048F830; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F82Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048F82Cu) [[unlikely]] return; }
L_0048F82C:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 284u));
    c.budget -= 1;
L_0048F830:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0048F844; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0048F848; } }
L_0048F844:
    c.f[20] = 0u;
    c.budget -= 1;
L_0048F848:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 212u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 232u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 228u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 234u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0048F87C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F874u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048F874u) [[unlikely]] return; }
L_0048F874:
    set32(c.r[2], c.r[29].w[0] + 212u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.budget -= 2;
L_0048F87C:
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[5], c.r[29].w[0] + 212u);
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[18], ld32((c.r[17].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    set32(c.r[17], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 15;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 212u)));  goto L_0048F8E8; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F8C4u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048F8C4u) [[unlikely]] return; }
L_0048F8C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0048F8E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F8DCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048F8DCu) [[unlikely]] return; }
L_0048F8DC:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0048F8E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0048F90C; } }
L_0048F8E8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F8F4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048F8F4u) [[unlikely]] return; }
L_0048F8F4:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F908u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048F908u) [[unlikely]] return; }
L_0048F908:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_0048F90C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F920u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048F920u) [[unlikely]] return; }
L_0048F920:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 208u), c.r[3].w[0]);  if (t) { goto L_0048F950; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[2], c.r[29].w[0] + 212u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[21].w[0])));  goto L_0048F954; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F950u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048F950u) [[unlikely]] return; }
L_0048F950:
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_0048F954:
    set32(c.r[25], ld32((c.r[25].w[0] + 208u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F960u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048F960u) [[unlikely]] return; }
L_0048F960:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 284u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0048FB00; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 124u)));
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[3], ld32((c.r[21].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F990u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x0048F990u) [[unlikely]] return; }
L_0048F990:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F99Cu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x0048F99Cu) [[unlikely]] return; }
L_0048F99C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 352u);  goto L_0048F9C4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0048F9C0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F9C0u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x0048F9C0u) [[unlikely]] return; }
L_0048F9C0:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 1;
L_0048F9C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048F9CCu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x0048F9CCu) [[unlikely]] return; }
L_0048F9CC:
    set32(c.r[6], ld32((c.r[21].w[0] + 116u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], ld32((c.r[21].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] - 26768u);
    set32(c.r[4], c.r[29].w[0] + 180u);
    set32(c.r[2], 0u + 16u);
    c.f[0] = ld32((c.r[29].w[0] + 352u));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    c.f[1] = c.r[5].w[0];
    st16((c.r[29].w[0] + 202u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st16((c.r[29].w[0] + 200u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 196u), c.r[4].w[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st32((c.r[29].w[0] + 352u), c.f[0]);  if (t) { goto L_0048FA20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FA18u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048FA18u) [[unlikely]] return; }
L_0048FA18:
    set32(c.r[2], c.r[29].w[0] + 180u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 2;
L_0048FA20:
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.f[0] = ld32((c.r[29].w[0] + 352u));
    set32(c.r[5], c.r[29].w[0] + 180u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 356u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 360u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[18], ld32((c.r[21].w[0] + 124u)));
    set32(c.r[17], ld32((c.r[21].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 18;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 180u)));  goto L_0048FA98; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FA74u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048FA74u) [[unlikely]] return; }
L_0048FA74:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0048FA90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FA8Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048FA8Cu) [[unlikely]] return; }
L_0048FA8C:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0048FA90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0048FABC; } }
L_0048FA98:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FAA4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0048FAA4u) [[unlikely]] return; }
L_0048FAA4:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FAB8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048FAB8u) [[unlikely]] return; }
L_0048FAB8:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_0048FABC:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FAD0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048FAD0u) [[unlikely]] return; }
L_0048FAD0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 176u), c.r[4].w[0]);  if (t) { goto L_0048FB00; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[3], c.r[29].w[0] + 180u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0048FB00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FB00u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0048FB00u) [[unlikely]] return; }
L_0048FB00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_0048FB04:
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_0048FB40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0048FB50:
    set32(c.r[29], c.r[29].w[0] - 608u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 28u), c.f[27]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 22;
    { const bool t = c.r[19].d[0] != 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_0048FC44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FBB0u); set32(c.r[4], 0u + 300u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0048FBB0u) [[unlikely]] return; }
L_0048FBB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0048FC44; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FBC8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_001D(c, 69u, depth + 1u); else { c.pc = 0x00174CD0u; return; } if (c.pc != 0x0048FBC8u) [[unlikely]] return; }
L_0048FBC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 30192u);
    set32(c.r[3], c.r[3].w[0] - 30168u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[4], 0u - 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 30136u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[19].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 30124u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[19].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 30100u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[19].w[0] + 132u), c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[19].w[0] + 284u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[19].w[0] + 284u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[19].w[0] + 284u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[19].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[19].w[0] + 288u), 0u);
    st32((c.r[19].w[0] + 292u), 0u);
    st32((c.r[19].w[0] + 296u), 0u);
    c.budget -= 31;
L_0048FC44:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FC58u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 26u, depth + 1u); else { c.pc = 0x00174380u; return; } if (c.pc != 0x0048FC58u) [[unlikely]] return; }
L_0048FC58:
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FC64u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x0048FC64u) [[unlikely]] return; }
L_0048FC64:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 16896u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FC7Cu); set32(c.r[7], c.r[29].w[0] + 560u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x0048FC7Cu) [[unlikely]] return; }
L_0048FC7C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 544u);  goto L_0048FC9C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FC98u); set32(c.r[5], c.r[5].w[0] - 16886u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0048FC98u) [[unlikely]] return; }
L_0048FC98:
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.budget -= 1;
L_0048FC9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FCA4u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x0048FCA4u) [[unlikely]] return; }
L_0048FCA4:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 16861u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FCBCu); set32(c.r[7], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x0048FCBCu) [[unlikely]] return; }
L_0048FCBC:
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FCC8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x0048FCC8u) [[unlikely]] return; }
L_0048FCC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 16856u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FCE0u); set32(c.r[7], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x0048FCE0u) [[unlikely]] return; }
L_0048FCE0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FCECu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0027(c, 228u, depth + 1u); else { c.pc = 0x0019F6B0u; return; } if (c.pc != 0x0048FCECu) [[unlikely]] return; }
L_0048FCEC:
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FCF8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x0048FCF8u) [[unlikely]] return; }
L_0048FCF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 16851u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FD10u); set32(c.r[7], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x0048FD10u) [[unlikely]] return; }
L_0048FD10:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 196u)));  goto L_0048FDC4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 513u);  goto L_0048FD2C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 520u)));
    c.budget -= 1;
L_0048FD2C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FD38u); set32(c.r[5], c.r[5].w[0] - 16841u);  if (depth < kMaxDepth) unit_00AE(c, 141u, depth + 1u); else { c.pc = 0x003B9868u; return; } if (c.pc != 0x0048FD38u) [[unlikely]] return; }
L_0048FD38:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 512u)));  goto L_0048FD70; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0048FD4C; } }
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 1;
L_0048FD4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FD54u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_00E4(c, 87u, depth + 1u); else { c.pc = 0x00490910u; return; } if (c.pc != 0x0048FD54u) [[unlikely]] return; }
L_0048FD54:
    c.r[5].d[0] = ld8((c.r[2].w[0] + 284u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = c.r[17].d[0] & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0048FDC0; } }
L_0048FD70:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 513u);  goto L_0048FD80; }
    set32(c.r[4], ld32((c.r[29].w[0] + 520u)));
    c.budget -= 1;
L_0048FD80:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FD8Cu); set32(c.r[5], c.r[5].w[0] - 16836u);  if (depth < kMaxDepth) unit_00AE(c, 141u, depth + 1u); else { c.pc = 0x003B9868u; return; } if (c.pc != 0x0048FD8Cu) [[unlikely]] return; }
L_0048FD8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0048FDC0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0048FDA0; } }
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 1;
L_0048FDA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FDA8u);  if (depth < kMaxDepth) unit_00E4(c, 87u, depth + 1u); else { c.pc = 0x00490910u; return; } if (c.pc != 0x0048FDA8u) [[unlikely]] return; }
L_0048FDA8:
    c.r[5].d[0] = ld8((c.r[2].w[0] + 284u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0048FDC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 1;
L_0048FDC4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 16830u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FDD8u); set32(c.r[7], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x0048FDD8u) [[unlikely]] return; }
L_0048FDD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 196u)));  goto L_0048FE68; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FDF0u); set32(c.r[5], c.r[5].w[0] - 16819u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0048FDF0u) [[unlikely]] return; }
L_0048FDF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FE00u); set32(c.r[5], c.r[5].w[0] - 16805u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0048FE00u) [[unlikely]] return; }
L_0048FE00:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[17].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0048FE0C; } }
    set32(c.r[17], c.r[19].w[0] + 48u);
    c.budget -= 1;
L_0048FE0C:
    set32(c.r[4], c.r[29].w[0] + 512u);
    set32(c.r[5], c.r[29].w[0] + 432u);
    set32(c.r[6], c.r[29].w[0] + 416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FE20u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x0048FE20u) [[unlikely]] return; }
L_0048FE20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FE30u); c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00E4(c, 87u, depth + 1u); else { c.pc = 0x00490910u; return; } if (c.pc != 0x0048FE30u) [[unlikely]] return; }
L_0048FE30:
    c.r[3].d[0] = c.r[17].d[0] & 1ull;
    c.r[7].d[0] = ld8((c.r[2].w[0] + 284u));
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[3], 0u - 3u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FE58u); st8((c.r[2].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0048FE58u) [[unlikely]] return; }
L_0048FE58:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FE64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0048FE64u) [[unlikely]] return; }
L_0048FE64:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 1;
L_0048FE68:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 16803u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FE7Cu); set32(c.r[7], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x0048FE7Cu) [[unlikely]] return; }
L_0048FE7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0048FEEC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 513u);  goto L_0048FE98; }
    set32(c.r[4], ld32((c.r[29].w[0] + 520u)));
    c.budget -= 1;
L_0048FE98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[29].w[0] + 588u);
    set32(c.r[5], c.r[5].w[0] - 12192u);
    set32(c.r[7], c.r[29].w[0] + 584u);
    set32(c.r[8], c.r[29].w[0] + 580u);
    st32((c.r[29].w[0] + 588u), 0u);
    st32((c.r[29].w[0] + 584u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FEBCu); st32((c.r[29].w[0] + 580u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x0048FEBCu) [[unlikely]] return; }
L_0048FEBC:
    c.f[20] = ld32((c.r[29].w[0] + 588u));
    c.f[21] = ld32((c.r[29].w[0] + 584u));
    c.f[22] = ld32((c.r[29].w[0] + 580u));
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0048FED4; } }
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 1;
L_0048FED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FEDCu);  if (depth < kMaxDepth) unit_00E4(c, 87u, depth + 1u); else { c.pc = 0x00490910u; return; } if (c.pc != 0x0048FEDCu) [[unlikely]] return; }
L_0048FEDC:
    st32((c.r[2].w[0] + 288u), c.f[20]);
    st32((c.r[2].w[0] + 292u), c.f[21]);
    st32((c.r[2].w[0] + 296u), c.f[22]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 4;
L_0048FEEC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 592u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] - 16791u);
    st32((c.r[29].w[0] + 596u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 600u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 604u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FF14u); set32(c.r[7], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x0048FF14u) [[unlikely]] return; }
L_0048FF14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[24] = ld32((c.r[29].w[0] + 592u));  [[clang::musttail]] return unit_00E4(c, 17u, depth); }
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[5], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FF2Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x0048FF2Cu) [[unlikely]] return; }
L_0048FF2C:
    set32(c.r[2], ld32((c.r[29].w[0] + 400u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 400u));  goto L_0048FF44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 404u)));  if (t) { goto L_0048FF4C; } }
L_0048FF44:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0048FF4C:
    c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FF5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0048FF5Cu) [[unlikely]] return; }
L_0048FF5C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 368u);  goto L_0048FFA0; }
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[5], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FF74u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x0048FF74u) [[unlikely]] return; }
L_0048FF74:
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 385u);  goto L_0048FF88; }
    set32(c.r[4], ld32((c.r[29].w[0] + 392u)));
    c.budget -= 1;
L_0048FF88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FF90u); set32(c.r[5], c.r[29].w[0] + 604u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x0048FF90u) [[unlikely]] return; }
L_0048FF90:
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FF9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0048FF9Cu) [[unlikely]] return; }
L_0048FF9C:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 1;
L_0048FFA0:
    set32(c.r[5], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FFACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x0048FFACu) [[unlikely]] return; }
L_0048FFAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 368u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 368u));  goto L_0048FFC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 372u)));  if (t) { goto L_0048FFCC; } }
L_0048FFC4:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0048FFCC:
    c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FFDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0048FFDCu) [[unlikely]] return; }
L_0048FFDC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 336u);  [[clang::musttail]] return unit_00E4(c, 6u, depth); }
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[5], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048FFF4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x0048FFF4u) [[unlikely]] return; }
L_0048FFF4:
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 353u);  [[clang::musttail]] return unit_00E4(c, 3u, depth); }
    [[clang::musttail]] return unit_00E4(c, 2u, depth);
}

}
