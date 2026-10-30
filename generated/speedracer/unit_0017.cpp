#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0017[4096] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0,
    8, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0,
    0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 55,
    0, 0, 56, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 60, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 86, 0,
    0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104,
    0, 0, 0, 0, 105, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0,
    0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 167,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0,
    171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181,
    0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0,
    0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0,
    203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 212, 0, 0, 0, 213,
    0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 218, 0, 0, 0, 219, 0, 0, 220, 0, 221, 0, 0,
    0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 227, 0, 0, 0, 228, 0, 0,
    0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 233, 0, 0, 0, 234, 0, 0, 235, 0, 236, 0, 0, 0, 237,
    0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264,
    0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0,
    0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0,
    0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0,
    0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 319,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330,
    0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0,
    0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0,
    347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0,
    0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0,
    0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0,
    377, 0, 0, 378, 0, 0, 379, 0, 380, 0, 0, 0, 381, 0, 0, 382, 0, 0, 383, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 389, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0,
    0, 393, 0, 0, 394, 0, 0, 395, 0, 396, 0, 0, 0, 397, 0, 0, 398, 0, 0, 399, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0,
    407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0,
    414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0,
    420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0,
    0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0,
    0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0,
    440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 452, 0, 0, 0, 0, 0, 453,
};

void unit_0017(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0015C000;
    case 2u: goto L_0015C008;
    case 3u: goto L_0015C01C;
    case 4u: goto L_0015C024;
    case 5u: goto L_0015C038;
    case 6u: goto L_0015C05C;
    case 7u: goto L_0015C078;
    case 8u: goto L_0015C080;
    case 9u: goto L_0015C08C;
    case 10u: goto L_0015C094;
    case 11u: goto L_0015C0BC;
    case 12u: goto L_0015C0DC;
    case 13u: goto L_0015C100;
    case 14u: goto L_0015C114;
    case 15u: goto L_0015C130;
    case 16u: goto L_0015C144;
    case 17u: goto L_0015C160;
    case 18u: goto L_0015C190;
    case 19u: goto L_0015C1F0;
    case 20u: goto L_0015C214;
    case 21u: goto L_0015C228;
    case 22u: goto L_0015C24C;
    case 23u: goto L_0015C27C;
    case 24u: goto L_0015C2C0;
    case 25u: goto L_0015C2E0;
    case 26u: goto L_0015C2FC;
    case 27u: goto L_0015C310;
    case 28u: goto L_0015C3A8;
    case 29u: goto L_0015C418;
    case 30u: goto L_0015C434;
    case 31u: goto L_0015C45C;
    case 32u: goto L_0015C490;
    case 33u: goto L_0015C4D0;
    case 34u: goto L_0015C548;
    case 35u: goto L_0015C58C;
    case 36u: goto L_0015C5C0;
    case 37u: goto L_0015C5D8;
    case 38u: goto L_0015C5E4;
    case 39u: goto L_0015C600;
    case 40u: goto L_0015C620;
    case 41u: goto L_0015C660;
    case 42u: goto L_0015C678;
    case 43u: goto L_0015C68C;
    case 44u: goto L_0015C6A0;
    case 45u: goto L_0015C6B4;
    case 46u: goto L_0015C6D4;
    case 47u: goto L_0015C6E4;
    case 48u: goto L_0015C718;
    case 49u: goto L_0015C724;
    case 50u: goto L_0015C734;
    case 51u: goto L_0015C744;
    case 52u: goto L_0015C758;
    case 53u: goto L_0015C764;
    case 54u: goto L_0015C770;
    case 55u: goto L_0015C77C;
    case 56u: goto L_0015C788;
    case 57u: goto L_0015C794;
    case 58u: goto L_0015C7A4;
    case 59u: goto L_0015C7D8;
    case 60u: goto L_0015C804;
    case 61u: goto L_0015C818;
    case 62u: goto L_0015C820;
    case 63u: goto L_0015C834;
    case 64u: goto L_0015C84C;
    case 65u: goto L_0015C85C;
    case 66u: goto L_0015C874;
    case 67u: goto L_0015C880;
    case 68u: goto L_0015C8A8;
    case 69u: goto L_0015C8B4;
    case 70u: goto L_0015C8C0;
    case 71u: goto L_0015C8CC;
    case 72u: goto L_0015C8D8;
    case 73u: goto L_0015C8EC;
    case 74u: goto L_0015C908;
    case 75u: goto L_0015C9B0;
    case 76u: goto L_0015C9E4;
    case 77u: goto L_0015CA24;
    case 78u: goto L_0015CA50;
    case 79u: goto L_0015CA78;
    case 80u: goto L_0015CAB0;
    case 81u: goto L_0015CAB8;
    case 82u: goto L_0015CAC0;
    case 83u: goto L_0015CACC;
    case 84u: goto L_0015CAD8;
    case 85u: goto L_0015CAEC;
    case 86u: goto L_0015CAF8;
    case 87u: goto L_0015CB0C;
    case 88u: goto L_0015CB28;
    case 89u: goto L_0015CB34;
    case 90u: goto L_0015CB60;
    case 91u: goto L_0015CB84;
    case 92u: goto L_0015CBCC;
    case 93u: goto L_0015CC20;
    case 94u: goto L_0015CC40;
    case 95u: goto L_0015CC50;
    case 96u: goto L_0015CC60;
    case 97u: goto L_0015CC8C;
    case 98u: goto L_0015CCB0;
    case 99u: goto L_0015CCE0;
    case 100u: goto L_0015CD08;
    case 101u: goto L_0015CD30;
    case 102u: goto L_0015CD44;
    case 103u: goto L_0015CD60;
    case 104u: goto L_0015CD7C;
    case 105u: goto L_0015CD90;
    case 106u: goto L_0015CD94;
    case 107u: goto L_0015CDB0;
    case 108u: goto L_0015CDDC;
    case 109u: goto L_0015CDF4;
    case 110u: goto L_0015CE00;
    case 111u: goto L_0015CE40;
    case 112u: goto L_0015CE64;
    case 113u: goto L_0015CE94;
    case 114u: goto L_0015CEAC;
    case 115u: goto L_0015CED0;
    case 116u: goto L_0015CF00;
    case 117u: goto L_0015CF14;
    case 118u: goto L_0015CF28;
    case 119u: goto L_0015CF44;
    case 120u: goto L_0015CF5C;
    case 121u: goto L_0015CF70;
    case 122u: goto L_0015CF84;
    case 123u: goto L_0015CFA4;
    case 124u: goto L_0015CFB8;
    case 125u: goto L_0015CFCC;
    case 126u: goto L_0015CFEC;
    case 127u: goto L_0015D000;
    case 128u: goto L_0015D030;
    case 129u: goto L_0015D074;
    case 130u: goto L_0015D090;
    case 131u: goto L_0015D0E8;
    case 132u: goto L_0015D11C;
    case 133u: goto L_0015D150;
    case 134u: goto L_0015D184;
    case 135u: goto L_0015D1A0;
    case 136u: goto L_0015D1EC;
    case 137u: goto L_0015D230;
    case 138u: goto L_0015D290;
    case 139u: goto L_0015D298;
    case 140u: goto L_0015D2E4;
    case 141u: goto L_0015D324;
    case 142u: goto L_0015D370;
    case 143u: goto L_0015D3DC;
    case 144u: goto L_0015D404;
    case 145u: goto L_0015D44C;
    case 146u: goto L_0015D478;
    case 147u: goto L_0015D494;
    case 148u: goto L_0015D4D4;
    case 149u: goto L_0015D510;
    case 150u: goto L_0015D5A0;
    case 151u: goto L_0015D5C0;
    case 152u: goto L_0015D600;
    case 153u: goto L_0015D61C;
    case 154u: goto L_0015D6AC;
    case 155u: goto L_0015D6C0;
    case 156u: goto L_0015D710;
    case 157u: goto L_0015D738;
    case 158u: goto L_0015D740;
    case 159u: goto L_0015D754;
    case 160u: goto L_0015D7CC;
    case 161u: goto L_0015D7E8;
    case 162u: goto L_0015D810;
    case 163u: goto L_0015D844;
    case 164u: goto L_0015D850;
    case 165u: goto L_0015D85C;
    case 166u: goto L_0015D868;
    case 167u: goto L_0015D87C;
    case 168u: goto L_0015D898;
    case 169u: goto L_0015D8C0;
    case 170u: goto L_0015D8EC;
    case 171u: goto L_0015D900;
    case 172u: goto L_0015D910;
    case 173u: goto L_0015D928;
    case 174u: goto L_0015D940;
    case 175u: goto L_0015D958;
    case 176u: goto L_0015D970;
    case 177u: goto L_0015D990;
    case 178u: goto L_0015D9A0;
    case 179u: goto L_0015D9D4;
    case 180u: goto L_0015D9E8;
    case 181u: goto L_0015D9FC;
    case 182u: goto L_0015DA14;
    case 183u: goto L_0015DA40;
    case 184u: goto L_0015DA64;
    case 185u: goto L_0015DA70;
    case 186u: goto L_0015DAB0;
    case 187u: goto L_0015DAD0;
    case 188u: goto L_0015DB24;
    case 189u: goto L_0015DB48;
    case 190u: goto L_0015DB60;
    case 191u: goto L_0015DB80;
    case 192u: goto L_0015DBC0;
    case 193u: goto L_0015DBDC;
    case 194u: goto L_0015DC6C;
    case 195u: goto L_0015DC88;
    case 196u: goto L_0015DCA0;
    case 197u: goto L_0015DCD0;
    case 198u: goto L_0015DD00;
    case 199u: goto L_0015DD10;
    case 200u: goto L_0015DD34;
    case 201u: goto L_0015DD50;
    case 202u: goto L_0015DD68;
    case 203u: goto L_0015DD80;
    case 204u: goto L_0015DDA4;
    case 205u: goto L_0015DDC0;
    case 206u: goto L_0015DDD8;
    case 207u: goto L_0015DDF0;
    case 208u: goto L_0015DE38;
    case 209u: goto L_0015DE4C;
    case 210u: goto L_0015DE58;
    case 211u: goto L_0015DE64;
    case 212u: goto L_0015DE6C;
    case 213u: goto L_0015DE7C;
    case 214u: goto L_0015DE9C;
    case 215u: goto L_0015DEB0;
    case 216u: goto L_0015DEBC;
    case 217u: goto L_0015DEC8;
    case 218u: goto L_0015DED0;
    case 219u: goto L_0015DEE0;
    case 220u: goto L_0015DEEC;
    case 221u: goto L_0015DEF4;
    case 222u: goto L_0015DF04;
    case 223u: goto L_0015DF30;
    case 224u: goto L_0015DF44;
    case 225u: goto L_0015DF50;
    case 226u: goto L_0015DF5C;
    case 227u: goto L_0015DF64;
    case 228u: goto L_0015DF74;
    case 229u: goto L_0015DF94;
    case 230u: goto L_0015DFA8;
    case 231u: goto L_0015DFB4;
    case 232u: goto L_0015DFC0;
    case 233u: goto L_0015DFC8;
    case 234u: goto L_0015DFD8;
    case 235u: goto L_0015DFE4;
    case 236u: goto L_0015DFEC;
    case 237u: goto L_0015DFFC;
    case 238u: goto L_0015E00C;
    case 239u: goto L_0015E030;
    case 240u: goto L_0015E044;
    case 241u: goto L_0015E050;
    case 242u: goto L_0015E060;
    case 243u: goto L_0015E070;
    case 244u: goto L_0015E080;
    case 245u: goto L_0015E0B0;
    case 246u: goto L_0015E10C;
    case 247u: goto L_0015E124;
    case 248u: goto L_0015E1A0;
    case 249u: goto L_0015E214;
    case 250u: goto L_0015E228;
    case 251u: goto L_0015E234;
    case 252u: goto L_0015E290;
    case 253u: goto L_0015E2B4;
    case 254u: goto L_0015E2C4;
    case 255u: goto L_0015E2E0;
    case 256u: goto L_0015E320;
    case 257u: goto L_0015E354;
    case 258u: goto L_0015E370;
    case 259u: goto L_0015E3E0;
    case 260u: goto L_0015E3E8;
    case 261u: goto L_0015E438;
    case 262u: goto L_0015E440;
    case 263u: goto L_0015E454;
    case 264u: goto L_0015E47C;
    case 265u: goto L_0015E484;
    case 266u: goto L_0015E498;
    case 267u: goto L_0015E4D4;
    case 268u: goto L_0015E4DC;
    case 269u: goto L_0015E4F0;
    case 270u: goto L_0015E550;
    case 271u: goto L_0015E560;
    case 272u: goto L_0015E58C;
    case 273u: goto L_0015E5C0;
    case 274u: goto L_0015E5E8;
    case 275u: goto L_0015E5F0;
    case 276u: goto L_0015E604;
    case 277u: goto L_0015E62C;
    case 278u: goto L_0015E634;
    case 279u: goto L_0015E648;
    case 280u: goto L_0015E66C;
    case 281u: goto L_0015E674;
    case 282u: goto L_0015E688;
    case 283u: goto L_0015E700;
    case 284u: goto L_0015E730;
    case 285u: goto L_0015E754;
    case 286u: goto L_0015E764;
    case 287u: goto L_0015E780;
    case 288u: goto L_0015E7B0;
    case 289u: goto L_0015E7D4;
    case 290u: goto L_0015E7EC;
    case 291u: goto L_0015E808;
    case 292u: goto L_0015E840;
    case 293u: goto L_0015E884;
    case 294u: goto L_0015E8E0;
    case 295u: goto L_0015E940;
    case 296u: goto L_0015E948;
    case 297u: goto L_0015E994;
    case 298u: goto L_0015E9D4;
    case 299u: goto L_0015EA20;
    case 300u: goto L_0015EA8C;
    case 301u: goto L_0015EABC;
    case 302u: goto L_0015EB18;
    case 303u: goto L_0015EB44;
    case 304u: goto L_0015EB64;
    case 305u: goto L_0015EBA4;
    case 306u: goto L_0015EBE0;
    case 307u: goto L_0015EC80;
    case 308u: goto L_0015ECA0;
    case 309u: goto L_0015ECC4;
    case 310u: goto L_0015ECE0;
    case 311u: goto L_0015ECF8;
    case 312u: goto L_0015ED10;
    case 313u: goto L_0015ED44;
    case 314u: goto L_0015ED54;
    case 315u: goto L_0015ED80;
    case 316u: goto L_0015ED90;
    case 317u: goto L_0015EDE8;
    case 318u: goto L_0015EDF0;
    case 319u: goto L_0015EDFC;
    case 320u: goto L_0015EE5C;
    case 321u: goto L_0015EE90;
    case 322u: goto L_0015EF00;
    case 323u: goto L_0015EF50;
    case 324u: goto L_0015EFA8;
    case 325u: goto L_0015EFC4;
    case 326u: goto L_0015EFDC;
    case 327u: goto L_0015F030;
    case 328u: goto L_0015F040;
    case 329u: goto L_0015F068;
    case 330u: goto L_0015F07C;
    case 331u: goto L_0015F0A0;
    case 332u: goto L_0015F0C0;
    case 333u: goto L_0015F0F8;
    case 334u: goto L_0015F104;
    case 335u: goto L_0015F140;
    case 336u: goto L_0015F158;
    case 337u: goto L_0015F180;
    case 338u: goto L_0015F1A4;
    case 339u: goto L_0015F1B0;
    case 340u: goto L_0015F1C0;
    case 341u: goto L_0015F1D0;
    case 342u: goto L_0015F1E0;
    case 343u: goto L_0015F208;
    case 344u: goto L_0015F220;
    case 345u: goto L_0015F22C;
    case 346u: goto L_0015F268;
    case 347u: goto L_0015F280;
    case 348u: goto L_0015F2A0;
    case 349u: goto L_0015F2D8;
    case 350u: goto L_0015F2F0;
    case 351u: goto L_0015F304;
    case 352u: goto L_0015F318;
    case 353u: goto L_0015F32C;
    case 354u: goto L_0015F34C;
    case 355u: goto L_0015F370;
    case 356u: goto L_0015F3B4;
    case 357u: goto L_0015F408;
    case 358u: goto L_0015F48C;
    case 359u: goto L_0015F4A0;
    case 360u: goto L_0015F4BC;
    case 361u: goto L_0015F4E4;
    case 362u: goto L_0015F510;
    case 363u: goto L_0015F560;
    case 364u: goto L_0015F578;
    case 365u: goto L_0015F590;
    case 366u: goto L_0015F5C4;
    case 367u: goto L_0015F614;
    case 368u: goto L_0015F68C;
    case 369u: goto L_0015F6C0;
    case 370u: goto L_0015F708;
    case 371u: goto L_0015F71C;
    case 372u: goto L_0015F728;
    case 373u: goto L_0015F734;
    case 374u: goto L_0015F73C;
    case 375u: goto L_0015F74C;
    case 376u: goto L_0015F76C;
    case 377u: goto L_0015F780;
    case 378u: goto L_0015F78C;
    case 379u: goto L_0015F798;
    case 380u: goto L_0015F7A0;
    case 381u: goto L_0015F7B0;
    case 382u: goto L_0015F7BC;
    case 383u: goto L_0015F7C8;
    case 384u: goto L_0015F7D0;
    case 385u: goto L_0015F7E0;
    case 386u: goto L_0015F80C;
    case 387u: goto L_0015F820;
    case 388u: goto L_0015F82C;
    case 389u: goto L_0015F838;
    case 390u: goto L_0015F840;
    case 391u: goto L_0015F850;
    case 392u: goto L_0015F870;
    case 393u: goto L_0015F884;
    case 394u: goto L_0015F890;
    case 395u: goto L_0015F89C;
    case 396u: goto L_0015F8A4;
    case 397u: goto L_0015F8B4;
    case 398u: goto L_0015F8C0;
    case 399u: goto L_0015F8CC;
    case 400u: goto L_0015F8D4;
    case 401u: goto L_0015F8E4;
    case 402u: goto L_0015F924;
    case 403u: goto L_0015F934;
    case 404u: goto L_0015F950;
    case 405u: goto L_0015F964;
    case 406u: goto L_0015F970;
    case 407u: goto L_0015F980;
    case 408u: goto L_0015F9C0;
    case 409u: goto L_0015F9D0;
    case 410u: goto L_0015F9E0;
    case 411u: goto L_0015FA10;
    case 412u: goto L_0015FA6C;
    case 413u: goto L_0015FA74;
    case 414u: goto L_0015FA80;
    case 415u: goto L_0015FA9C;
    case 416u: goto L_0015FAE4;
    case 417u: goto L_0015FB20;
    case 418u: goto L_0015FB50;
    case 419u: goto L_0015FB68;
    case 420u: goto L_0015FB80;
    case 421u: goto L_0015FBAC;
    case 422u: goto L_0015FC08;
    case 423u: goto L_0015FC30;
    case 424u: goto L_0015FC44;
    case 425u: goto L_0015FC60;
    case 426u: goto L_0015FC74;
    case 427u: goto L_0015FC88;
    case 428u: goto L_0015FC9C;
    case 429u: goto L_0015FCAC;
    case 430u: goto L_0015FCD0;
    case 431u: goto L_0015FCF4;
    case 432u: goto L_0015FD50;
    case 433u: goto L_0015FD60;
    case 434u: goto L_0015FD78;
    case 435u: goto L_0015FD88;
    case 436u: goto L_0015FDA0;
    case 437u: goto L_0015FDC0;
    case 438u: goto L_0015FDD4;
    case 439u: goto L_0015FDE4;
    case 440u: goto L_0015FE00;
    case 441u: goto L_0015FE38;
    case 442u: goto L_0015FE4C;
    case 443u: goto L_0015FE54;
    case 444u: goto L_0015FE84;
    case 445u: goto L_0015FEA0;
    case 446u: goto L_0015FED4;
    case 447u: goto L_0015FF2C;
    case 448u: goto L_0015FF58;
    case 449u: goto L_0015FF90;
    case 450u: goto L_0015FFC8;
    case 451u: goto L_0015FFDC;
    case 452u: goto L_0015FFE4;
    case 453u: goto L_0015FFFC;
    default: bad_entry(c, 0x0015C000u); return;
    }
L_0015C000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C008u); set32(c.r[6], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0032(c, 119u, depth + 1u); else { c.pc = 0x001CA610u; return; } if (c.pc != 0x0015C008u) [[unlikely]] return; }
L_0015C008:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 23168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C01Cu); set32(c.r[6], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0032(c, 106u, depth + 1u); else { c.pc = 0x001CA130u; return; } if (c.pc != 0x0015C01Cu) [[unlikely]] return; }
L_0015C01C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C024u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0015C024u) [[unlikely]] return; }
L_0015C024:
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C038u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015C038u) [[unlikely]] return; }
L_0015C038:
    set32(c.r[8], ld32((c.r[19].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], ld32((c.r[29].w[0] + 308u)));
    set32(c.r[9], c.r[16].w[0] + 1u);
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[5].w[0] + 23321u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C05Cu); set32(c.r[6], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0015C05Cu) [[unlikely]] return; }
L_0015C05C:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 273u);  goto L_0015C070; }
    set32(c.r[5], ld32((c.r[29].w[0] + 280u)));
    c.budget -= 1;
L_0015C070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C078u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 32u, depth + 1u); else { c.pc = 0x001C4930u; return; } if (c.pc != 0x0015C078u) [[unlikely]] return; }
L_0015C078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C080u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 367u, depth + 1u); else { c.pc = 0x001C3AF0u; return; } if (c.pc != 0x0015C080u) [[unlikely]] return; }
L_0015C080:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C08Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0015C08Cu) [[unlikely]] return; }
L_0015C08C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015C160; } }
L_0015C094:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[29].w[0] + 896u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015BF10u | kUnwind; return; } [[clang::musttail]] return unit_0016(c, 629u, depth); }
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 128u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C0BCu); set32(c.r[9], c.r[29].w[0] + 848u);  if (depth < kMaxDepth) unit_0017(c, 18u, depth + 1u); else { c.pc = 0x0015C190u; return; } if (c.pc != 0x0015C0BCu) [[unlikely]] return; }
L_0015C0BC:
    st32((c.r[29].w[0] + 1928u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0015C148; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C0DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015C0DCu) [[unlikely]] return; }
L_0015C0DC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 20u)));  goto L_0015C11C; }
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 1928u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C100u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015C100u) [[unlikely]] return; }
L_0015C100:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C114u); set32(c.r[5], ld32((c.r[29].w[0] + 1928u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015C114u) [[unlikely]] return; }
L_0015C114:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0015C148; } }
L_0015C11C:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C130u); set32(c.r[6], c.r[29].w[0] + 1928u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015C130u) [[unlikely]] return; }
L_0015C130:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C144u); set32(c.r[5], c.r[29].w[0] + 1928u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015C144u) [[unlikely]] return; }
L_0015C144:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0015C148:
    set32(c.r[2], ld32((c.r[28].w[0] - 28940u)));
    c.budget -= 3;
    if (c.r[20].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[5].d[0] + 0ull;  goto L_0015C160; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C160u); st32((c.r[28].w[0] - 28940u), 0u);  if (depth < kMaxDepth) unit_0032(c, 140u, depth + 1u); else { c.pc = 0x001CAA50u; return; } if (c.pc != 0x0015C160u) [[unlikely]] return; }
L_0015C160:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1936u);  c.pc = t; return; }
L_0015C190:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 188u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 184u), c.r[9].w[0]);  if (t) { goto L_0015C1F0; } }
    set32(c.r[7], ld32((c.r[21].w[0] + 24u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 16u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C1F0u); set32(c.r[6], c.r[6].w[0] + 23463u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0015C1F0u) [[unlikely]] return; }
L_0015C1F0:
    set32(c.r[16], ld32((c.r[21].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 188u)));
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 332u), c.r[16].w[0]);  if (t) { goto L_0015C228; } }
    set32(c.r[4], c.r[29].w[0] + 328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C214u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0015C214u) [[unlikely]] return; }
L_0015C214:
    set32(c.r[2], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[4], c.r[29].w[0] + 332u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C228u); set32(c.r[5], c.r[2].w[0] - c.r[16].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0015C228u) [[unlikely]] return; }
L_0015C228:
    set32(c.r[2], ld32((c.r[29].w[0] + 332u)));
    c.r[23].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 9;
L_0015C24C:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[2].d[0] = ld8((c.r[21].w[0]));  goto L_0015C2A0; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 20u)));  goto L_0015C264; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0015C2C8; } }
L_0015C264:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015C2C4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C27Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015C27Cu) [[unlikely]] return; }
L_0015C27C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0015C2C4; } }
    set32(c.r[2], c.r[20].w[0] << 2);
    c.r[23].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 288u), c.r[17].w[0]);  if (t) { goto L_0015C2C4; } }
L_0015C2A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015C2C4; } }
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 188u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C2C0u); set32(c.r[4], c.r[2].w[0] + 288u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0015C2C0u) [[unlikely]] return; }
L_0015C2C0:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0015C2C4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0015C2C8:
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015C24Cu | kUnwind; return; } goto L_0015C24C; }
    set32(c.r[18], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0015C3AC; } }
L_0015C2E0:
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[22].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C2FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015C2FCu) [[unlikely]] return; }
L_0015C2FC:
    set32(c.r[4], ld32((c.r[22].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C310u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015C310u) [[unlikely]] return; }
L_0015C310:
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[4].w[0])));  if (t) { goto L_0015C330; } }
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_0015C330:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_0015C364; }
    c.r[1].d[0] = c.r[20].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { st32((c.r[18].w[0]), c.r[4].w[0]);  goto L_0015C35C; }
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 288u), c.r[4].w[0]);  if (t) { goto L_0015C3A8; } }
L_0015C35C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_0015C3A8; } }
L_0015C364:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0015C394; }
    c.r[1].d[0] = c.r[19].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { st32((c.r[18].w[0]), c.r[4].w[0]);  goto L_0015C38C; }
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 240u), c.r[4].w[0]);  if (t) { goto L_0015C3A8; } }
L_0015C38C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_0015C3A8; } }
L_0015C394:
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 16u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C3A8u); set32(c.r[6], c.r[6].w[0] + 23499u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0015C3A8u) [[unlikely]] return; }
L_0015C3A8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0015C3AC:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015C2E0u | kUnwind; return; } goto L_0015C2E0; }
    set32(c.r[2], c.r[29].w[0] + 192u);
    set32(c.r[3], c.r[18].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_0015C3D0; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0015C3D0:
    set32(c.r[3], c.r[2].w[0] << 5);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_0015C3E4; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0015C3E4:
    set32(c.r[3], c.r[2].w[0] + 15u);
    set32(c.r[2], 0u - 16u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));  if (t) { goto L_0015C404; } }
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_0015C404:
    set32(c.r[8], ld32((c.r[29].w[0] + 160u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C418u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0017(c, 33u, depth + 1u); else { c.pc = 0x0015C4D0u; return; } if (c.pc != 0x0015C418u) [[unlikely]] return; }
L_0015C418:
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0015C474; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C434u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015C434u) [[unlikely]] return; }
L_0015C434:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 20u)));  goto L_0015C44C; }
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[21].w[0] + 20u)));  if (t) { goto L_0015C478; } }
L_0015C44C:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C45Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015C45Cu) [[unlikely]] return; }
L_0015C45C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0015C474; } }
    set32(c.r[2], c.r[23].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 288u)));
    c.budget -= 3;
L_0015C474:
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    c.budget -= 1;
L_0015C478:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0015C494; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C490u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015C490u) [[unlikely]] return; }
L_0015C490:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0015C494:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_0015C4D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 64u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    set32(c.r[11], ld32((c.r[29].w[0] + 64u)));
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0] + 112u), c.r[8].w[0]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 96u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[6].w[0]);
    c.f[20] = ld32((c.r[11].w[0] + 32u));
    set32(c.r[8], ld32((c.r[29].w[0] + 96u)));
    c.f[21] = ld32((c.r[11].w[0] + 36u));
    set32(c.r[9], ld32((c.r[29].w[0] + 80u)));
    c.f[22] = ld32((c.r[11].w[0] + 40u));
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.f[23] = ld32((c.r[11].w[0] + 44u));
    c.f[12] = ld32((c.r[11].w[0]));
    st32((c.r[29].w[0] + 48u), c.r[4].w[0]);
    c.f[13] = ld32((c.r[11].w[0] + 4u));
    c.f[14] = ld32((c.r[11].w[0] + 8u));
    c.f[15] = ld32((c.r[11].w[0] + 12u));
    c.f[16] = ld32((c.r[11].w[0] + 16u));
    c.f[17] = ld32((c.r[11].w[0] + 20u));
    c.f[18] = ld32((c.r[11].w[0] + 24u));
    c.f[19] = ld32((c.r[11].w[0] + 28u));
    c.budget -= 30;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 0u);  if (t) { goto L_0015C564; } }
L_0015C548:
    set32(c.r[9], c.r[9].w[0] - 4u);
    set32(c.r[29], c.r[29].w[0] - 8u);
    set32(c.r[10], ld32((c.r[9].w[0])));
    set32(c.r[8], c.r[8].w[0] - 4u);
    st32((c.r[29].w[0]), c.r[10].w[0]);
    c.budget -= 7;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015C548u | kUnwind; return; } goto L_0015C548; } }
L_0015C564:
    set32(c.r[11], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[11].w[0])));
    set32(c.r[5], ld32((c.r[11].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[11].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[11].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[11].w[0] + 16u)));
    set32(c.r[9], ld32((c.r[11].w[0] + 20u)));
    set32(c.r[10], ld32((c.r[11].w[0] + 24u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C58Cu); set32(c.r[11], ld32((c.r[11].w[0] + 28u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015C58Cu) [[unlikely]] return; }
L_0015C58C:
    set32(c.r[29], c.r[16].w[0] + 0u);
    set32(c.r[16], c.r[2].w[0] + 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0015C5C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u - 10002u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C5D8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 41u, depth + 1u); else { c.pc = 0x001C4AA0u; return; } if (c.pc != 0x0015C5D8u) [[unlikely]] return; }
L_0015C5D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C5E4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 612u, depth + 1u); else { c.pc = 0x0015BD80u; return; } if (c.pc != 0x0015C5E4u) [[unlikely]] return; }
L_0015C5E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015C600:
    set32(c.r[3], ld32((c.r[28].w[0] - 28940u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0015C610; } }
    st32((c.r[28].w[0] - 28940u), 0u);
    c.budget -= 1;
L_0015C610:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015C620:
    set32(c.r[29], c.r[29].w[0] - 320u);
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
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C660u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 594u, depth + 1u); else { c.pc = 0x0015BBB0u; return; } if (c.pc != 0x0015C660u) [[unlikely]] return; }
L_0015C660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015C670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015CB38; } }
L_0015C670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C678u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0015C678u) [[unlikely]] return; }
L_0015C678:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 256u);  if (t) { goto L_0015C6B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C68Cu);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0015C68Cu) [[unlikely]] return; }
L_0015C68C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0015C6A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C6A0u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0015C6A0u) [[unlikely]] return; }
L_0015C6A0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0015C6A4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 256u), c.r[2].w[0]);  goto L_0015C6B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C6B4u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0015C6B4u) [[unlikely]] return; }
L_0015C6B4:
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.budget -= 1;
L_0015C6B8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 260u), 0u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    st32((c.r[29].w[0] + 264u), 0u);
    set32(c.r[6], 0u + 44u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C6D4u); st32((c.r[29].w[0] + 268u), 0u);  if (depth < kMaxDepth) unit_000F(c, 408u, depth + 1u); else { c.pc = 0x0013FEF0u; return; } if (c.pc != 0x0015C6D4u) [[unlikely]] return; }
L_0015C6D4:
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[4], c.r[20].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C6E4u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0017(c, 178u, depth + 1u); else { c.pc = 0x0015D9A0u; return; } if (c.pc != 0x0015C6E4u) [[unlikely]] return; }
L_0015C6E4:
    set32(c.r[6], ld32((c.r[20].w[0] + 36u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] - 4u), c.r[2].w[0]);
    set32(c.r[16], c.r[3].w[0] - 48u);
    st32((c.r[3].w[0] - 24u), c.r[19].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C718u); set32(c.r[4], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0015C718u) [[unlikely]] return; }
L_0015C718:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C724u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0015C724u) [[unlikely]] return; }
L_0015C724:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C734u); set32(c.r[5], c.r[5].w[0] + 23578u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0015C734u) [[unlikely]] return; }
L_0015C734:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C744u); set32(c.r[5], c.r[5].w[0] + 23584u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0015C744u) [[unlikely]] return; }
L_0015C744:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C758u); set32(c.r[7], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 353u, depth + 1u); else { c.pc = 0x0013F620u; return; } if (c.pc != 0x0015C758u) [[unlikely]] return; }
L_0015C758:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C764u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 380u, depth + 1u); else { c.pc = 0x0013FA80u; return; } if (c.pc != 0x0015C764u) [[unlikely]] return; }
L_0015C764:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C770u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0015C770u) [[unlikely]] return; }
L_0015C770:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C77Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0015C77Cu) [[unlikely]] return; }
L_0015C77C:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C788u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0015C788u) [[unlikely]] return; }
L_0015C788:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C794u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0015C794u) [[unlikely]] return; }
L_0015C794:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C7A4u); set32(c.r[5], c.r[5].w[0] + 23585u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0015C7A4u) [[unlikely]] return; }
L_0015C7A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 20u), 0u);  goto L_0015C80C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[29].w[0] + 241u);  goto L_0015C7C0; }
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 1;
L_0015C7C0:
    st32((c.r[29].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 308u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28944u)));
    set32(c.r[6], c.r[29].w[0] + 316u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C7D8u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0017(c, 133u, depth + 1u); else { c.pc = 0x0015D150u; return; } if (c.pc != 0x0015C7D8u) [[unlikely]] return; }
L_0015C7D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 28944u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 308u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[3].w[0] + 16u)));  goto L_0015C808; }
    set32(c.r[7], ld32((c.r[29].w[0] + 316u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 16u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C804u); set32(c.r[6], c.r[6].w[0] + 23537u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0015C804u) [[unlikely]] return; }
L_0015C804:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0015C808:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_0015C80C:
    set32(c.r[5], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C818u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0017(c, 151u, depth + 1u); else { c.pc = 0x0015D5C0u; return; } if (c.pc != 0x0015C818u) [[unlikely]] return; }
L_0015C818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0015CA7C; } }
L_0015C820:
    set32(c.r[17], c.r[18].w[0] << 4);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 23585u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C834u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0015C834u) [[unlikely]] return; }
L_0015C834:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0015CA7C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C84Cu); set32(c.r[5], c.r[5].w[0] + 23578u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0015C84Cu) [[unlikely]] return; }
L_0015C84C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C85Cu); set32(c.r[5], c.r[5].w[0] + 23584u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0015C85Cu) [[unlikely]] return; }
L_0015C85C:
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C874u); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_000F(c, 353u, depth + 1u); else { c.pc = 0x0013F620u; return; } if (c.pc != 0x0015C874u) [[unlikely]] return; }
L_0015C874:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C880u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 380u, depth + 1u); else { c.pc = 0x0013FA80u; return; } if (c.pc != 0x0015C880u) [[unlikely]] return; }
L_0015C880:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 268u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);  if (t) { goto L_0015C89C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 120u)));  if (t) { goto L_0015C8A0; } }
L_0015C89C:
    set32(c.r[5], c.r[29].w[0] + 113u);
    c.budget -= 1;
L_0015C8A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C8A8u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0015C8A8u) [[unlikely]] return; }
L_0015C8A8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C8B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0015C8B4u) [[unlikely]] return; }
L_0015C8B4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C8C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0015C8C0u) [[unlikely]] return; }
L_0015C8C0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C8CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0015C8CCu) [[unlikely]] return; }
L_0015C8CC:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C8D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0015C8D8u) [[unlikely]] return; }
L_0015C8D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 23590u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C8ECu); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0015C8ECu) [[unlikely]] return; }
L_0015C8EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0015C914; }
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 23596u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C908u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0015C908u) [[unlikely]] return; }
L_0015C908:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 268u)));  goto L_0015C91C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0015C914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 292u), c.r[2].w[0]);  if (t) { goto L_0015C9F0; } }
L_0015C91C:
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[4].w[0]));  goto L_0015C938; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_0015C940; } }
L_0015C938:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0015C940:
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_0015C958; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 1;
L_0015C958:
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], 0u + 38u);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { st32((c.r[29].w[0] + 292u), 0u);  goto L_0015C9B8; }
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0015C980; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0015C9EC; } }
L_0015C980:
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[4].w[0]));  goto L_0015C99C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_0015C9A4; } }
L_0015C99C:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0015C9A4:
    set32(c.r[5], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C9B0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0008(c, 198u, depth + 1u); else { c.pc = 0x00121790u; return; } if (c.pc != 0x0015C9B0u) [[unlikely]] return; }
L_0015C9B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 268u)));  if (t) { goto L_0015C9F4; } }
L_0015C9B8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[4].w[0]));  goto L_0015C9D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_0015C9D8; } }
L_0015C9D0:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0015C9D8:
    set32(c.r[5], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C9E4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0008(c, 198u, depth + 1u); else { c.pc = 0x00121790u; return; } if (c.pc != 0x0015C9E4u) [[unlikely]] return; }
L_0015C9E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015C9F0; } }
L_0015C9EC:
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 1;
L_0015C9F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    c.budget -= 1;
L_0015C9F4:
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_0015CA0C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0015CA0C:
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 296u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28944u)));
    set32(c.r[6], c.r[29].w[0] + 304u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CA24u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0017(c, 133u, depth + 1u); else { c.pc = 0x0015D150u; return; } if (c.pc != 0x0015CA24u) [[unlikely]] return; }
L_0015CA24:
    set32(c.r[2], ld32((c.r[28].w[0] - 28944u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 296u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[3].w[0] + 16u)));  goto L_0015CA54; }
    set32(c.r[7], ld32((c.r[29].w[0] + 304u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 16u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CA50u); set32(c.r[6], c.r[6].w[0] + 23537u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0015CA50u) [[unlikely]] return; }
L_0015CA50:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0015CA54:
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[7], c.r[29].w[0] + 288u);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CA78u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0017(c, 137u, depth + 1u); else { c.pc = 0x0015D230u; return; } if (c.pc != 0x0015CA78u) [[unlikely]] return; }
L_0015CA78:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0015CA7C:
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 268u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015C820u | kUnwind; return; } goto L_0015C820; }
    set32(c.r[17], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[6], c.r[29].w[0] + 280u);
    set32(c.r[18], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[4], c.r[20].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] << 1);
    st32((c.r[20].w[0] + 44u), c.r[18].w[0]);
    c.r[2].d[0] = ld64((c.r[28].w[0] - 31032u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CAB0u); st64((c.r[29].w[0] + 280u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0017(c, 95u, depth + 1u); else { c.pc = 0x0015CC50u; return; } if (c.pc != 0x0015CAB0u) [[unlikely]] return; }
L_0015CAB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0015CAD0; } }
L_0015CAB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CAC0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 94u, depth + 1u); else { c.pc = 0x0015CC40u; return; } if (c.pc != 0x0015CAC0u) [[unlikely]] return; }
L_0015CAC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CACCu); set32(c.r[5], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_0017(c, 93u, depth + 1u); else { c.pc = 0x0015CC20u; return; } if (c.pc != 0x0015CACCu) [[unlikely]] return; }
L_0015CACC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0015CAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CAD8u); set32(c.r[4], c.r[20].w[0] + 48u);  if (depth < kMaxDepth) unit_0016(c, 611u, depth + 1u); else { c.pc = 0x0015BD70u; return; } if (c.pc != 0x0015CAD8u) [[unlikely]] return; }
L_0015CAD8:
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[20].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015CAB8u | kUnwind; return; } goto L_0015CAB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0015CB10; } }
L_0015CAEC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CAF8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 607u, depth + 1u); else { c.pc = 0x0015BD00u; return; } if (c.pc != 0x0015CAF8u) [[unlikely]] return; }
L_0015CAF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0015CB10; }
    set32(c.r[4], c.r[20].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CB0Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 90u, depth + 1u); else { c.pc = 0x0015CB60u; return; } if (c.pc != 0x0015CB0Cu) [[unlikely]] return; }
L_0015CB0C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0015CB10:
    c.r[2].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[20].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015CAECu | kUnwind; return; } goto L_0015CAEC; }
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CB28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0015CB28u) [[unlikely]] return; }
L_0015CB28:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CB34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 292u, depth + 1u); else { c.pc = 0x0011EEB0u; return; } if (c.pc != 0x0015CB34u) [[unlikely]] return; }
L_0015CB34:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0015CB38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_0015CB60:
    set32(c.r[6], c.r[5].w[0] << 1);
    set32(c.r[8], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0xF0000000u);  if (t) { goto L_0015CBA4; } }
L_0015CB84:
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { goto L_0015CBA4; } }
    set32(c.r[6], c.r[6].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[6].d[0];
    c.budget -= 2;
L_0015CBA4:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { c.r[6].d[0] = c.r[6].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015CB84u | kUnwind; return; } goto L_0015CB84; }
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    c.r[6].d[0] = 0ull | 65535ull;
    set32(c.r[10], ld32((c.r[4].w[0] + 16u)));
    mmi::divu(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[11].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = c.r[11].d[0] + 0ull;  if (t) { goto L_0015CBE0; } }
L_0015CBCC:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[12].d[0] != c.r[7].d[0];  if (t) { goto L_0015CBE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_0015CBE0; } }
L_0015CBE0:
    set32(c.r[9], c.r[12].w[0] << 3);
    set32(c.r[8], c.r[10].w[0] + c.r[9].w[0]);
    c.r[7].d[0] = ld16((c.r[8].w[0] + 6u));
    c.budget -= 5;
    if (c.r[7].d[0] != c.r[6].d[0]) { set32(c.r[7], ld32((c.r[4].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015CBCCu | kUnwind; return; } goto L_0015CBCC; }
    st16((c.r[8].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[11].w[0]));  c.pc = t; return; }
L_0015CC20:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 4u));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 6u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0015CC40:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0015CC50:
    c.budget -= 2;
    {  goto L_0015DCA0; }
L_0015CC60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 28u), c.r[7].w[0]);
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 28944u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CC8Cu); set32(c.r[8], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_0017(c, 40u, depth + 1u); else { c.pc = 0x0015C620u; return; } if (c.pc != 0x0015CC8Cu) [[unlikely]] return; }
L_0015CC8C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  goto L_0015CC9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015CCA0; } }
L_0015CC9C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0015CCA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015CCB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 52u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 28944u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[4], c.r[29].w[0] + 60u);
    set32(c.r[17], c.r[2].w[0] + 16u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CCE0u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0017(c, 133u, depth + 1u); else { c.pc = 0x0015D150u; return; } if (c.pc != 0x0015CCE0u) [[unlikely]] return; }
L_0015CCE0:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 28944u)));  goto L_0015CCFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015CD10; } }
L_0015CCFC:
    set32(c.r[5], c.r[29].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CD08u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0017(c, 128u, depth + 1u); else { c.pc = 0x0015D030u; return; } if (c.pc != 0x0015CD08u) [[unlikely]] return; }
L_0015CD08:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0015CD10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015CD30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28944u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CD44u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 107u, depth + 1u); else { c.pc = 0x0015CDB0u; return; } if (c.pc != 0x0015CD44u) [[unlikely]] return; }
L_0015CD44:
    st32((c.r[28].w[0] - 28944u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015CD60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 68u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CD7Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0015CD7Cu) [[unlikely]] return; }
L_0015CD7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0015CD94; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CD90u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 115u, depth + 1u); else { c.pc = 0x0015CED0u; return; } if (c.pc != 0x0015CD90u) [[unlikely]] return; }
L_0015CD90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0015CD94:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015CDB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015CEAC; } }
    st32((c.r[28].w[0] - 28944u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_0015CE00; } }
L_0015CDDC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 60u);  goto L_0015CDF8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CDF4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015CDF4u) [[unlikely]] return; }
L_0015CDF4:
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 1;
L_0015CDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CE00u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x0015CE00u) [[unlikely]] return; }
L_0015CE00:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], c.r[17].w[0] + 16u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[3].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015CDDCu | kUnwind; return; } goto L_0015CDDC; }
    set32(c.r[2], c.r[17].w[0] + 44u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 28u);  goto L_0015CE44; }
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015CE40; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015CE40; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015CE40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CE40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 203u, depth + 1u); else { c.pc = 0x0015DD80u; return; } if (c.pc != 0x0015CE40u) [[unlikely]] return; }
L_0015CE40:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 1;
L_0015CE44:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 4u);  goto L_0015CE68; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015CE64; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015CE64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CE64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 199u, depth + 1u); else { c.pc = 0x0015DD10u; return; } if (c.pc != 0x0015CE64u) [[unlikely]] return; }
L_0015CE64:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0015CE68:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0015CE98; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015CE94; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015CE94; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0015CE94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CE94u);  if (depth < kMaxDepth) unit_0017(c, 207u, depth + 1u); else { c.pc = 0x0015DDF0u; return; } if (c.pc != 0x0015CE94u) [[unlikely]] return; }
L_0015CE94:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0015CE98:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0015CEB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CEACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0015CEACu) [[unlikely]] return; }
L_0015CEAC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015CEB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015CED0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[20].w[0] + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CF00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0015CF00u) [[unlikely]] return; }
L_0015CF00:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0015CF18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CF14u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0015CF14u) [[unlikely]] return; }
L_0015CF14:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0015CF18:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 104u), c.r[2].w[0]);  goto L_0015CF2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CF28u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0015CF28u) [[unlikely]] return; }
L_0015CF28:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_0015CF2C:
    set32(c.r[5], c.r[29].w[0] + 100u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CF44u); set32(c.r[6], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0017(c, 244u, depth + 1u); else { c.pc = 0x0015E080u; return; } if (c.pc != 0x0015CF44u) [[unlikely]] return; }
L_0015CF44:
    set32(c.r[3], 0u - 1u);
    set32(c.r[18], c.r[20].w[0] + 28u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0015CF84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CF5Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0015CF5Cu) [[unlikely]] return; }
L_0015CF5C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0015CF74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CF70u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0015CF70u) [[unlikely]] return; }
L_0015CF70:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0015CF74:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[18].w[0]), c.r[2].w[0]);  goto L_0015CF88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CF84u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0015CF84u) [[unlikely]] return; }
L_0015CF84:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0015CF88:
    set32(c.r[17], c.r[20].w[0] + 44u);
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[16], c.r[17].w[0] + 4u);
    st32((c.r[18].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CFA4u); st32((c.r[18].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0015CFA4u) [[unlikely]] return; }
L_0015CFA4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0015CFBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CFB8u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0015CFB8u) [[unlikely]] return; }
L_0015CFB8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0015CFBC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_0015CFD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CFCCu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0015CFCCu) [[unlikely]] return; }
L_0015CFCC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0015CFD0:
    set32(c.r[4], c.r[17].w[0] + 4u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 32u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CFECu); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_0017(c, 191u, depth + 1u); else { c.pc = 0x0015DB80u; return; } if (c.pc != 0x0015CFECu) [[unlikely]] return; }
L_0015CFEC:
    st32((c.r[20].w[0]), c.r[19].w[0]);
    set32(c.r[4], c.r[20].w[0] + 28u);
    set32(c.r[5], 0u + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D000u); st32((c.r[28].w[0] - 28944u), c.r[20].w[0]);  if (depth < kMaxDepth) unit_0017(c, 155u, depth + 1u); else { c.pc = 0x0015D6C0u; return; } if (c.pc != 0x0015D000u) [[unlikely]] return; }
L_0015D000:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0015D030:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[21].w[0] + 12u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0015D0B8; } }
L_0015D074:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015D088; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015D094; } }
L_0015D088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D090u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0015D090u) [[unlikely]] return; }
L_0015D090:
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 1;
L_0015D094:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = c.r[17].d[0] + 0ull;  goto L_0015D0AC; }
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0015D0B8; } }
L_0015D0AC:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0015D0B8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D074u | kUnwind; return; } goto L_0015D074; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  goto L_0015D0FC; }
    set32(c.r[5], ld32((c.r[20].w[0])));
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0015D0E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015D0EC; } }
L_0015D0E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D0E8u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0015D0E8u) [[unlikely]] return; }
L_0015D0E8:
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 1;
L_0015D0EC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 12u);  goto L_0015D120; }
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_0015D0FC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 136u);
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D11Cu); st32((c.r[29].w[0] + 140u), 0u);  if (depth < kMaxDepth) unit_0017(c, 316u, depth + 1u); else { c.pc = 0x0015ED90u; return; } if (c.pc != 0x0015D11Cu) [[unlikely]] return; }
L_0015D11C:
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_0015D120:
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
L_0015D150:
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
    set32(c.r[17], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[19].w[0] + 12u);  if (t) { goto L_0015D1B8; } }
L_0015D184:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0015D198; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0015D1A4; } }
L_0015D198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D1A0u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0015D1A0u) [[unlikely]] return; }
L_0015D1A0:
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 1;
L_0015D1A4:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 4u)));  goto L_0015D1B8; }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_0015D1B8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D184u | kUnwind; return; } goto L_0015D184; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[19].w[0] + 12u);  goto L_0015D200; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0015D1E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0015D1F0; } }
L_0015D1E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D1ECu);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0015D1ECu) [[unlikely]] return; }
L_0015D1EC:
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 1;
L_0015D1F0:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[20].w[0]), c.r[16].w[0]);  goto L_0015D204; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 1;
L_0015D200:
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0015D204:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0015D230:
    set32(c.r[29], c.r[29].w[0] - 128u);
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
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0015D5A0; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 8u)));  goto L_0015D29C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D290u); set32(c.r[5], c.r[5].w[0] + 23682u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0015D290u) [[unlikely]] return; }
L_0015D290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D298u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0015D298u) [[unlikely]] return; }
L_0015D298:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_0015D29C:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  goto L_0015D428; }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] - c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_0015D2D0; } }
    set32(c.r[3], c.r[3].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_0015D2D0:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] << 3);  goto L_0015D364; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0015D310; } }
L_0015D2E4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_0015D300; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_0015D300:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0015D310:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D2E4u | kUnwind; return; } goto L_0015D2E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0015D350; } }
L_0015D324:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_0015D340; }
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_0015D340:
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0015D350:
    c.r[3].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D324u | kUnwind; return; } goto L_0015D324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D3FC; } }
L_0015D364:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[6].w[0] - c.r[5].w[0]);  if (t) { goto L_0015D39C; } }
L_0015D370:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_0015D38C; }
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[7].w[0]), c.f[1]);
    st32((c.r[7].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_0015D38C:
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0015D39C:
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D370u | kUnwind; return; } goto L_0015D370; } }
    set32(c.r[3], c.r[4].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);  goto L_0015D3F0; }
    c.r[1].d[0] = c.r[17].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0015D3D0; } }
    set32(c.r[17], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_0015D3D0:
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D3F0; } }
L_0015D3DC:
    set32(c.r[6], c.r[6].w[0] - 8u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_0015D3F0:
    c.r[1].d[0] = c.r[19].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D3DCu | kUnwind; return; } goto L_0015D3DC; }
L_0015D3FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D418; } }
L_0015D404:
    set32(c.r[18], c.r[18].w[0] - 1u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 5;
L_0015D418:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D404u | kUnwind; return; } goto L_0015D404; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0015D5A4; } }
L_0015D428:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    set32(c.r[16], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_0015D444; }
L_0015D444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0015D460; } }
L_0015D44C:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_0015D460; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_0015D460:
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D44Cu | kUnwind; return; } goto L_0015D44C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D478u); set32(c.r[4], c.r[16].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0015D478u) [[unlikely]] return; }
L_0015D478:
    st32((c.r[29].w[0] + 100u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_0015D4C0; } }
L_0015D494:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_0015D4B0; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_0015D4B0:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_0015D4C0:
    c.r[3].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D494u | kUnwind; return; } goto L_0015D494; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D500; } }
L_0015D4D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_0015D4F0; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_0015D4F0:
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_0015D500:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D4D4u | kUnwind; return; } goto L_0015D4D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_0015D540; } }
L_0015D510:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_0015D52C; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_0015D52C:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_0015D540:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D510u | kUnwind; return; } goto L_0015D510; } }
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[20].d[0]) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_0015D598; }
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[20].w[0])));
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 17;
L_0015D598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D5A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 308u, depth + 1u); else { c.pc = 0x0015ECA0u; return; } if (c.pc != 0x0015D5A0u) [[unlikely]] return; }
L_0015D5A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0015D5A4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0015D5C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015D6AC; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[17].w[0] << 3);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D600u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0015D600u) [[unlikely]] return; }
L_0015D600:
    st32((c.r[29].w[0] + 52u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_0015D648; } }
L_0015D61C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 56u)));  goto L_0015D638; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 5;
L_0015D638:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 4;
L_0015D648:
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D61Cu | kUnwind; return; } goto L_0015D61C; } }
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_0015D6A4; }
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
L_0015D6A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D6ACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 308u, depth + 1u); else { c.pc = 0x0015ECA0u; return; } if (c.pc != 0x0015D6ACu) [[unlikely]] return; }
L_0015D6AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015D6C0:
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
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015D7E8; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] << 4);
    st32((c.r[29].w[0] + 80u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D710u); st32((c.r[29].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0015D710u) [[unlikely]] return; }
L_0015D710:
    st32((c.r[29].w[0] + 84u), c.r[16].w[0]);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_0015D768; } }
L_0015D738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D740u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x0015D740u) [[unlikely]] return; }
L_0015D740:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 88u)));  goto L_0015D758; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D754u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 162u, depth + 1u); else { c.pc = 0x0015D810u; return; } if (c.pc != 0x0015D754u) [[unlikely]] return; }
L_0015D754:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0015D758:
    set32(c.r[17], c.r[17].w[0] + 48u);
    set32(c.r[18], c.r[18].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 4;
L_0015D768:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D738u | kUnwind; return; } goto L_0015D738; }
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[19].d[0]) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_0015D7C4; }
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 17;
L_0015D7C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D7CCu);  if (depth < kMaxDepth) unit_0017(c, 312u, depth + 1u); else { c.pc = 0x0015ED10u; return; } if (c.pc != 0x0015D7CCu) [[unlikely]] return; }
L_0015D7CC:
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0015D7EC; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015D7E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D7E8u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0015D7E8u) [[unlikely]] return; }
L_0015D7E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0015D7EC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0015D810:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[16], c.r[18].w[0] + 4u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[17].w[0] + 4u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D844u); set32(c.r[4], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015D990u; return; } if (c.pc != 0x0015D844u) [[unlikely]] return; }
L_0015D844:
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D850u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0017(c, 176u, depth + 1u); else { c.pc = 0x0015D970u; return; } if (c.pc != 0x0015D850u) [[unlikely]] return; }
L_0015D850:
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D85Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 172u, depth + 1u); else { c.pc = 0x0015D910u; return; } if (c.pc != 0x0015D85Cu) [[unlikely]] return; }
L_0015D85C:
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D868u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 171u, depth + 1u); else { c.pc = 0x0015D900u; return; } if (c.pc != 0x0015D868u) [[unlikely]] return; }
L_0015D868:
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D87Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 169u, depth + 1u); else { c.pc = 0x0015D8C0u; return; } if (c.pc != 0x0015D87Cu) [[unlikely]] return; }
L_0015D87C:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[18].w[0] + 28u);
    set32(c.r[5], c.r[17].w[0] + 28u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D898u); st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0015D898u) [[unlikely]] return; }
L_0015D898:
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 44u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015D8C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 40u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D8ECu); st32((c.r[4].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0017(c, 245u, depth + 1u); else { c.pc = 0x0015E0B0u; return; } if (c.pc != 0x0015D8ECu) [[unlikely]] return; }
L_0015D8EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015D900:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0015D910:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0015D95C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D928u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0015D928u) [[unlikely]] return; }
L_0015D928:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0015D948; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D940u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0015D940u) [[unlikely]] return; }
L_0015D940:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0015D948:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0015D960; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D958u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0015D958u) [[unlikely]] return; }
L_0015D958:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0015D95C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0015D960:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015D970:
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0015D990:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0015D9A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015DA78; } }
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D9D4u); set32(c.r[18], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0015D9D4u) [[unlikely]] return; }
L_0015D9D4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0015D9EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D9E8u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0015D9E8u) [[unlikely]] return; }
L_0015D9E8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0015D9EC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 68u), c.r[2].w[0]);  goto L_0015DA00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D9FCu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0015D9FCu) [[unlikely]] return; }
L_0015D9FC:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 1;
L_0015DA00:
    set32(c.r[4], c.r[18].w[0] + 28u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DA14u); st32((c.r[29].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0015DA14u) [[unlikely]] return; }
L_0015DA14:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[7], c.r[29].w[0] + 64u);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DA40u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 258u, depth + 1u); else { c.pc = 0x0015E370u; return; } if (c.pc != 0x0015DA40u) [[unlikely]] return; }
L_0015DA40:
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 68u);  goto L_0015DA68; }
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015DA64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DA64u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0015DA64u) [[unlikely]] return; }
L_0015DA64:
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.budget -= 1;
L_0015DA68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DA70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 308u, depth + 1u); else { c.pc = 0x0015ECA0u; return; } if (c.pc != 0x0015DA70u) [[unlikely]] return; }
L_0015DA70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0015DAB4; } }
L_0015DA78:
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0015DAB0; } }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[5], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DAB0u); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 248u, depth + 1u); else { c.pc = 0x0015E1A0u; return; } if (c.pc != 0x0015DAB0u) [[unlikely]] return; }
L_0015DAB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0015DAB4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0015DAD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015DB60; } }
    set32(c.r[2], c.r[17].w[0] + 28u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 4u);  goto L_0015DB28; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015DB24; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015DB24; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015DB24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DB24u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0015DB24u) [[unlikely]] return; }
L_0015DB24:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0015DB28:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0015DB4C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015DB48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015DB48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DB48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 308u, depth + 1u); else { c.pc = 0x0015ECA0u; return; } if (c.pc != 0x0015DB48u) [[unlikely]] return; }
L_0015DB48:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0015DB4C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0015DB64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DB60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0015DB60u) [[unlikely]] return; }
L_0015DB60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015DB64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015DB80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015DC88; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[17].w[0] << 3);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DBC0u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0015DBC0u) [[unlikely]] return; }
L_0015DBC0:
    st32((c.r[29].w[0] + 52u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_0015DC08; } }
L_0015DBDC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 56u)));  goto L_0015DBF8; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 5;
L_0015DBF8:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 4;
L_0015DC08:
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015DBDCu | kUnwind; return; } goto L_0015DBDC; } }
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_0015DC64; }
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
L_0015DC64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DC6Cu);  if (depth < kMaxDepth) unit_0017(c, 315u, depth + 1u); else { c.pc = 0x0015ED80u; return; } if (c.pc != 0x0015DC6Cu) [[unlikely]] return; }
L_0015DC6C:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0015DC8C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015DC88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DC88u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0015DC88u) [[unlikely]] return; }
L_0015DC88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0015DC8C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015DCA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0015DCD8; } }
    set32(c.r[6], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DCD0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0017(c, 294u, depth + 1u); else { c.pc = 0x0015E8E0u; return; } if (c.pc != 0x0015DCD0u) [[unlikely]] return; }
L_0015DCD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0015DD04; } }
L_0015DCD8:
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0015DD00; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DD00u); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 292u, depth + 1u); else { c.pc = 0x0015E840u; return; } if (c.pc != 0x0015DD00u) [[unlikely]] return; }
L_0015DD00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0015DD04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015DD10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015DD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DD34u);  if (depth < kMaxDepth) unit_0017(c, 312u, depth + 1u); else { c.pc = 0x0015ED10u; return; } if (c.pc != 0x0015DD34u) [[unlikely]] return; }
L_0015DD34:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0015DD54; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015DD50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DD50u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0015DD50u) [[unlikely]] return; }
L_0015DD50:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0015DD54:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0015DD6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DD68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0015DD68u) [[unlikely]] return; }
L_0015DD68:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015DD6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015DD80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015DDD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DDA4u);  if (depth < kMaxDepth) unit_0017(c, 315u, depth + 1u); else { c.pc = 0x0015ED80u; return; } if (c.pc != 0x0015DDA4u) [[unlikely]] return; }
L_0015DDA4:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0015DDC4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015DDC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DDC0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0015DDC0u) [[unlikely]] return; }
L_0015DDC0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0015DDC4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0015DDDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DDD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0015DDD8u) [[unlikely]] return; }
L_0015DDD8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015DDDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015DDF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015DF04; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_0015DE80; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0015DE3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DE38u);  if (depth < kMaxDepth) unit_0017(c, 207u, depth + 1u); else { c.pc = 0x0015DDF0u; return; } if (c.pc != 0x0015DE38u) [[unlikely]] return; }
L_0015DE38:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0015DE3C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0015DE50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DE4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 207u, depth + 1u); else { c.pc = 0x0015DDF0u; return; } if (c.pc != 0x0015DE4Cu) [[unlikely]] return; }
L_0015DE4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015DE50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DE58u);  if (depth < kMaxDepth) unit_0017(c, 243u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x0015DE58u) [[unlikely]] return; }
L_0015DE58:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DE64u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_0017(c, 242u, depth + 1u); else { c.pc = 0x0015E060u; return; } if (c.pc != 0x0015DE64u) [[unlikely]] return; }
L_0015DE64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DE6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 241u, depth + 1u); else { c.pc = 0x0015E050u; return; } if (c.pc != 0x0015DE6Cu) [[unlikely]] return; }
L_0015DE6C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DE7Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 239u, depth + 1u); else { c.pc = 0x0015E030u; return; } if (c.pc != 0x0015DE7Cu) [[unlikely]] return; }
L_0015DE7C:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0015DE80:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0015DEE4; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0015DEA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DE9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 207u, depth + 1u); else { c.pc = 0x0015DDF0u; return; } if (c.pc != 0x0015DE9Cu) [[unlikely]] return; }
L_0015DE9C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0015DEA0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0015DEB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DEB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 207u, depth + 1u); else { c.pc = 0x0015DDF0u; return; } if (c.pc != 0x0015DEB0u) [[unlikely]] return; }
L_0015DEB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015DEB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DEBCu);  if (depth < kMaxDepth) unit_0017(c, 243u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x0015DEBCu) [[unlikely]] return; }
L_0015DEBC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DEC8u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_0017(c, 242u, depth + 1u); else { c.pc = 0x0015E060u; return; } if (c.pc != 0x0015DEC8u) [[unlikely]] return; }
L_0015DEC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DED0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 241u, depth + 1u); else { c.pc = 0x0015E050u; return; } if (c.pc != 0x0015DED0u) [[unlikely]] return; }
L_0015DED0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DEE0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 239u, depth + 1u); else { c.pc = 0x0015E030u; return; } if (c.pc != 0x0015DEE0u) [[unlikely]] return; }
L_0015DEE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015DEE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DEECu);  if (depth < kMaxDepth) unit_0017(c, 243u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x0015DEECu) [[unlikely]] return; }
L_0015DEEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DEF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 241u, depth + 1u); else { c.pc = 0x0015E050u; return; } if (c.pc != 0x0015DEF4u) [[unlikely]] return; }
L_0015DEF4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_0015DF08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DF04u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0015DF04u) [[unlikely]] return; }
L_0015DF04:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0015DF08:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0015DFFC; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_0015DF78; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0015DF34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DF30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 207u, depth + 1u); else { c.pc = 0x0015DDF0u; return; } if (c.pc != 0x0015DF30u) [[unlikely]] return; }
L_0015DF30:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0015DF34:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0015DF48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DF44u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 207u, depth + 1u); else { c.pc = 0x0015DDF0u; return; } if (c.pc != 0x0015DF44u) [[unlikely]] return; }
L_0015DF44:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015DF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DF50u);  if (depth < kMaxDepth) unit_0017(c, 243u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x0015DF50u) [[unlikely]] return; }
L_0015DF50:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DF5Cu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_0017(c, 242u, depth + 1u); else { c.pc = 0x0015E060u; return; } if (c.pc != 0x0015DF5Cu) [[unlikely]] return; }
L_0015DF5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DF64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 241u, depth + 1u); else { c.pc = 0x0015E050u; return; } if (c.pc != 0x0015DF64u) [[unlikely]] return; }
L_0015DF64:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DF74u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 239u, depth + 1u); else { c.pc = 0x0015E030u; return; } if (c.pc != 0x0015DF74u) [[unlikely]] return; }
L_0015DF74:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0015DF78:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0015DFDC; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0015DF98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DF94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 207u, depth + 1u); else { c.pc = 0x0015DDF0u; return; } if (c.pc != 0x0015DF94u) [[unlikely]] return; }
L_0015DF94:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0015DF98:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0015DFAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DFA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 207u, depth + 1u); else { c.pc = 0x0015DDF0u; return; } if (c.pc != 0x0015DFA8u) [[unlikely]] return; }
L_0015DFA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015DFAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DFB4u);  if (depth < kMaxDepth) unit_0017(c, 243u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x0015DFB4u) [[unlikely]] return; }
L_0015DFB4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DFC0u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_0017(c, 242u, depth + 1u); else { c.pc = 0x0015E060u; return; } if (c.pc != 0x0015DFC0u) [[unlikely]] return; }
L_0015DFC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DFC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 241u, depth + 1u); else { c.pc = 0x0015E050u; return; } if (c.pc != 0x0015DFC8u) [[unlikely]] return; }
L_0015DFC8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DFD8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 239u, depth + 1u); else { c.pc = 0x0015E030u; return; } if (c.pc != 0x0015DFD8u) [[unlikely]] return; }
L_0015DFD8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015DFDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DFE4u);  if (depth < kMaxDepth) unit_0017(c, 243u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x0015DFE4u) [[unlikely]] return; }
L_0015DFE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DFECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 241u, depth + 1u); else { c.pc = 0x0015E050u; return; } if (c.pc != 0x0015DFECu) [[unlikely]] return; }
L_0015DFEC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0015DFFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DFFCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0015DFFCu) [[unlikely]] return; }
L_0015DFFC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0015E010; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E00Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0015E00Cu) [[unlikely]] return; }
L_0015E00C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0015E010:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015E030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0015E044; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E044u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0015E044u) [[unlikely]] return; }
L_0015E044:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015E050:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_0015E060:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015E070:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0015E080:
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
L_0015E0B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st32((c.r[29].w[0] + 108u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[6].w[0] - c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_0015E0F8; } }
    set32(c.r[3], c.r[3].w[0] + 7u);
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_0015E0F8:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0015E180; }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E10Cu); set32(c.r[4], c.r[19].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0015E10Cu) [[unlikely]] return; }
L_0015E10C:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] << 32;
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);  if (t) { goto L_0015E160; } }
L_0015E124:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[3].d[0] = c.r[17].d[0] << 32;  goto L_0015E148; }
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.budget -= 7;
L_0015E148:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[17], c.r[3].w[0] + 8u);
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 6;
L_0015E160:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E124u | kUnwind; return; } goto L_0015E124; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0015E180:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0015E1A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[18].d[0] != c.r[17].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0015E1D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0015E264; } }
L_0015E1D4:
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[16].w[0] - c.r[17].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[20].d[0] = c.lo.d[0];
    c.budget -= 12;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], c.r[20].w[0] << 1);  goto L_0015E218; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E214u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 252u, depth + 1u); else { c.pc = 0x0015E290u; return; } if (c.pc != 0x0015E214u) [[unlikely]] return; }
L_0015E214:
    set32(c.r[2], c.r[20].w[0] << 1);
    c.budget -= 1;
L_0015E218:
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[18].w[0] + c.r[2].w[0]);  if (t) { goto L_0015E238; } }
L_0015E228:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E234u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 187u, depth + 1u); else { c.pc = 0x0015DAD0u; return; } if (c.pc != 0x0015E234u) [[unlikely]] return; }
L_0015E234:
    set32(c.r[20], c.r[20].w[0] + 48u);
    c.budget -= 1;
L_0015E238:
    c.r[2].d[0] = c.r[20].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E228u | kUnwind; return; } goto L_0015E228; } }
    set32(c.r[5], c.r[17].w[0] - c.r[18].w[0]);
    set32(c.r[4], 0u + 48u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 8;
L_0015E264:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0015E290:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0015E2F0; } }
L_0015E2B4:
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[5], c.r[18].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E2C4u); st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0017(c, 256u, depth + 1u); else { c.pc = 0x0015E320u; return; } if (c.pc != 0x0015E2C4u) [[unlikely]] return; }
L_0015E2C4:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + 28u);
    set32(c.r[5], c.r[18].w[0] + 28u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E2E0u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x0015E2E0u) [[unlikely]] return; }
L_0015E2E0:
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    set32(c.r[18], c.r[18].w[0] + 48u);
    set32(c.r[16], c.r[16].w[0] + 48u);
    c.budget -= 4;
L_0015E2F0:
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E2B4u | kUnwind; return; } goto L_0015E2B4; }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015E320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == c.r[5].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0015E358; }
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E354u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 321u, depth + 1u); else { c.pc = 0x0015EE90u; return; } if (c.pc != 0x0015E354u) [[unlikely]] return; }
L_0015E354:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0015E358:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015E370:
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
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0015E700; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 8u)));  goto L_0015E3EC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E3E0u); set32(c.r[5], c.r[5].w[0] + 23682u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0015E3E0u) [[unlikely]] return; }
L_0015E3E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E3E8u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0015E3E8u) [[unlikely]] return; }
L_0015E3E8:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_0015E3EC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[19].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0])));  goto L_0015E568; }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[2], 0u + 48u);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[16].w[0] - c.r[20].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[23].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[23].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] << 1);  goto L_0015E4C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0015E468; } }
L_0015E438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E440u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x0015E440u) [[unlikely]] return; }
L_0015E440:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 8u)));  goto L_0015E458; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E454u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 162u, depth + 1u); else { c.pc = 0x0015D810u; return; } if (c.pc != 0x0015E454u) [[unlikely]] return; }
L_0015E454:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_0015E458:
    set32(c.r[17], c.r[17].w[0] + 48u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_0015E468:
    c.r[1].d[0] = c.r[23].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], 0u + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E438u | kUnwind; return; } goto L_0015E438; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0015E4AC; } }
L_0015E47C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E484u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x0015E484u) [[unlikely]] return; }
L_0015E484:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 8u)));  goto L_0015E49C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E498u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 162u, depth + 1u); else { c.pc = 0x0015D810u; return; } if (c.pc != 0x0015E498u) [[unlikely]] return; }
L_0015E498:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_0015E49C:
    set32(c.r[22], c.r[22].w[0] + 48u);
    set32(c.r[17], c.r[17].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_0015E4AC:
    c.r[2].d[0] = c.r[22].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E47Cu | kUnwind; return; } goto L_0015E47C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0015E554; } }
L_0015E4C0:
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[30], c.r[2].w[0] << 4);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[16].w[0] - c.r[30].w[0]);  if (t) { goto L_0015E504; } }
L_0015E4D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E4DCu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x0015E4DCu) [[unlikely]] return; }
L_0015E4DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 8u)));  goto L_0015E4F4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E4F0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 162u, depth + 1u); else { c.pc = 0x0015D810u; return; } if (c.pc != 0x0015E4F0u) [[unlikely]] return; }
L_0015E4F0:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_0015E4F4:
    set32(c.r[17], c.r[17].w[0] + 48u);
    set32(c.r[22], c.r[22].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_0015E504:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E4D4u | kUnwind; return; } goto L_0015E4D4; }
    set32(c.r[3], c.r[23].w[0] - c.r[19].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[20].w[0] + c.r[3].w[0]);  goto L_0015E544; }
    c.r[1].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0015E540; } }
    set32(c.r[18], c.r[18].w[0] + c.r[30].w[0]);
    c.budget -= 1;
L_0015E540:
    set32(c.r[5], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_0015E544:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E550u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 288u, depth + 1u); else { c.pc = 0x0015E7B0u; return; } if (c.pc != 0x0015E550u) [[unlikely]] return; }
L_0015E550:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0015E554:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E560u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 284u, depth + 1u); else { c.pc = 0x0015E730u; return; } if (c.pc != 0x0015E560u) [[unlikely]] return; }
L_0015E560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_0015E704; } }
L_0015E568:
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 164u), 0u);
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 172u), 0u);
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_0015E584; }
L_0015E584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0015E5A0; } }
L_0015E58C:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_0015E5A0; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_0015E5A0:
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E58Cu | kUnwind; return; } goto L_0015E58C; }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E5C0u); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0015E5C0u) [[unlikely]] return; }
L_0015E5C0:
    st32((c.r[29].w[0] + 164u), c.r[16].w[0]);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_0015E618; } }
L_0015E5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E5F0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x0015E5F0u) [[unlikely]] return; }
L_0015E5F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_0015E608; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E604u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 162u, depth + 1u); else { c.pc = 0x0015D810u; return; } if (c.pc != 0x0015E604u) [[unlikely]] return; }
L_0015E604:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_0015E608:
    set32(c.r[16], c.r[16].w[0] + 48u);
    set32(c.r[17], c.r[17].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_0015E618:
    c.r[2].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E5E8u | kUnwind; return; } goto L_0015E5E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015E65C; } }
L_0015E62C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E634u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x0015E634u) [[unlikely]] return; }
L_0015E634:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_0015E64C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E648u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 162u, depth + 1u); else { c.pc = 0x0015D810u; return; } if (c.pc != 0x0015E648u) [[unlikely]] return; }
L_0015E648:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_0015E64C:
    set32(c.r[17], c.r[17].w[0] + 48u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_0015E65C:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[4], 0u + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E62Cu | kUnwind; return; } goto L_0015E62C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] < c.r[22].d[0] ? 1ull : 0ull;  if (t) { goto L_0015E6A0; } }
L_0015E66C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E674u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x0015E674u) [[unlikely]] return; }
L_0015E674:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_0015E68C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E688u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 162u, depth + 1u); else { c.pc = 0x0015D810u; return; } if (c.pc != 0x0015E688u) [[unlikely]] return; }
L_0015E688:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_0015E68C:
    set32(c.r[16], c.r[16].w[0] + 48u);
    set32(c.r[17], c.r[17].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_0015E6A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E66Cu | kUnwind; return; } goto L_0015E66C; }
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[21].d[0]) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_0015E6F8; }
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[21].w[0])));
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 17;
L_0015E6F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E700u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 199u, depth + 1u); else { c.pc = 0x0015DD10u; return; } if (c.pc != 0x0015E700u) [[unlikely]] return; }
L_0015E700:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0015E704:
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
L_0015E730:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0015E790; } }
L_0015E754:
    set32(c.r[4], c.r[18].w[0] + 4u);
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E764u); st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0017(c, 256u, depth + 1u); else { c.pc = 0x0015E320u; return; } if (c.pc != 0x0015E764u) [[unlikely]] return; }
L_0015E764:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], c.r[18].w[0] + 28u);
    set32(c.r[5], c.r[16].w[0] + 28u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E780u); st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x0015E780u) [[unlikely]] return; }
L_0015E780:
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    set32(c.r[17], c.r[17].w[0] - 1u);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    set32(c.r[18], c.r[18].w[0] + 48u);
    c.budget -= 4;
L_0015E790:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E754u | kUnwind; return; } goto L_0015E754; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015E7B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0015E810; } }
L_0015E7D4:
    set32(c.r[16], c.r[16].w[0] - 48u);
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[5], c.r[17].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E7ECu); st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0017(c, 256u, depth + 1u); else { c.pc = 0x0015E320u; return; } if (c.pc != 0x0015E7ECu) [[unlikely]] return; }
L_0015E7EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + 28u);
    set32(c.r[5], c.r[17].w[0] + 28u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E808u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x0015E808u) [[unlikely]] return; }
L_0015E808:
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.budget -= 2;
L_0015E810:
    c.r[1].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E7D4u | kUnwind; return; } goto L_0015E7D4; }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015E840:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[6].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  goto L_0015E850; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015E8D0; } }
L_0015E850:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] - c.r[6].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_0015E870; } }
    set32(c.r[2], c.r[3].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_0015E870:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);  goto L_0015E8B0; }
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0015E8A0; } }
L_0015E884:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[8].w[0] + 4u));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[8].w[0] + 6u));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 7;
L_0015E8A0:
    c.r[2].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[8].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E884u | kUnwind; return; } goto L_0015E884; }
    set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_0015E8B0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));  if (t) { goto L_0015E8C0; } }
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_0015E8C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0015E8D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015E8E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
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
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0015EC80; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 8u)));  goto L_0015E94C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E940u); set32(c.r[5], c.r[5].w[0] + 23682u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0015E940u) [[unlikely]] return; }
L_0015E940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E948u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0015E948u) [[unlikely]] return; }
L_0015E948:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_0015E94C:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  goto L_0015EAE8; }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] - c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_0015E980; } }
    set32(c.r[3], c.r[3].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_0015E980:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] << 3);  goto L_0015EA14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0015E9C0; } }
L_0015E994:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_0015E9B0; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_0015E9B0:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0015E9C0:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E994u | kUnwind; return; } goto L_0015E994; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0015EA00; } }
L_0015E9D4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_0015E9F0; }
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_0015E9F0:
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0015EA00:
    c.r[3].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E9D4u | kUnwind; return; } goto L_0015E9D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015EAB4; } }
L_0015EA14:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[6].w[0] - c.r[5].w[0]);  if (t) { goto L_0015EA4C; } }
L_0015EA20:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_0015EA3C; }
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[7].w[0]), c.f[1]);
    st32((c.r[7].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_0015EA3C:
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0015EA4C:
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015EA20u | kUnwind; return; } goto L_0015EA20; } }
    set32(c.r[3], c.r[4].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);  goto L_0015EAA8; }
    c.r[1].d[0] = c.r[17].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0015EA80; } }
    set32(c.r[17], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_0015EA80:
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015EAA8; } }
L_0015EA8C:
    set32(c.r[6], c.r[6].w[0] - 8u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 4u));
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0015EAA8:
    c.r[1].d[0] = c.r[19].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015EA8Cu | kUnwind; return; } goto L_0015EA8C; }
L_0015EAB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015EAD8; } }
L_0015EABC:
    set32(c.r[18], c.r[18].w[0] - 1u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    st16((c.r[19].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    st16((c.r[19].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 7;
L_0015EAD8:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015EABCu | kUnwind; return; } goto L_0015EABC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0015EC84; } }
L_0015EAE8:
    set32(c.r[16], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_0015EB08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0015EB10; } }
L_0015EB08:
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0015EB10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_0015EB30; } }
L_0015EB18:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_0015EB2C; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_0015EB2C:
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0015EB30:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015EB18u | kUnwind; return; } goto L_0015EB18; }
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EB44u); set32(c.r[4], c.r[16].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0015EB44u) [[unlikely]] return; }
L_0015EB44:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[29].w[0] + 100u), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    st32((c.r[29].w[0] + 108u), c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_0015EB90; } }
L_0015EB64:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_0015EB80; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_0015EB80:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_0015EB90:
    c.r[3].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015EB64u | kUnwind; return; } goto L_0015EB64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015EBD0; } }
L_0015EBA4:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_0015EBC0; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_0015EBC0:
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_0015EBD0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015EBA4u | kUnwind; return; } goto L_0015EBA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_0015EC10; } }
L_0015EBE0:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_0015EBFC; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_0015EBFC:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_0015EC10:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015EBE0u | kUnwind; return; } goto L_0015EBE0; } }
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[20].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  goto L_0015EC68; }
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[20].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 17;
L_0015EC68:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 104u), 0u);  if (t) { goto L_0015EC80; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015EC80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EC80u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0015EC80u) [[unlikely]] return; }
L_0015EC80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0015EC84:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0015ECA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015ECF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ECC4u);  if (depth < kMaxDepth) unit_0017(c, 327u, depth + 1u); else { c.pc = 0x0015F030u; return; } if (c.pc != 0x0015ECC4u) [[unlikely]] return; }
L_0015ECC4:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0015ECE4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015ECE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ECE0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0015ECE0u) [[unlikely]] return; }
L_0015ECE0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0015ECE4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0015ECFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ECF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0015ECF8u) [[unlikely]] return; }
L_0015ECF8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015ECFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015ED10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] + c.r[3].w[0]);  if (t) { goto L_0015ED54; } }
L_0015ED44:
    set32(c.r[18], c.r[18].w[0] - 48u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ED54u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 187u, depth + 1u); else { c.pc = 0x0015DAD0u; return; } if (c.pc != 0x0015ED54u) [[unlikely]] return; }
L_0015ED54:
    c.r[1].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015ED44u | kUnwind; return; } goto L_0015ED44; } }
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015ED80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_0015ED90:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
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
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(-1ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0015EDF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EDE8u); set32(c.r[5], c.r[5].w[0] + 23711u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0015EDE8u) [[unlikely]] return; }
L_0015EDE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EDF0u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0015EDF0u) [[unlikely]] return; }
L_0015EDF0:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EDFCu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0015EDFCu) [[unlikely]] return; }
L_0015EDFC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_0015EE20; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 5;
L_0015EE20:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0015EE40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[16].w[0]);  if (t) { goto L_0015EE44; } }
L_0015EE40:
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_0015EE44:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EE5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x0015EE5Cu) [[unlikely]] return; }
L_0015EE5C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0015EE6C; }
    st32((c.r[21].w[0] + 20u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0015EE6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0015EE90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[17].w[0] - c.r[18].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_0015EEC8; } }
    set32(c.r[3], c.r[3].w[0] + 7u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_0015EEC8:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { st32((c.r[19].w[0] + 8u), 0u);  goto L_0015EF8C; }
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[29].w[0] + 92u);  goto L_0015EEEC; }
    set32(c.r[3], c.r[19].w[0] + 8u);
    c.budget -= 1;
L_0015EEEC:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_0015EF14; } }
L_0015EF00:
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.budget -= 5;
L_0015EF14:
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015EF00u | kUnwind; return; } goto L_0015EF00; }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;  goto L_0015EF40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0015F010; } }
L_0015EF40:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0015F014; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015EF7C; } }
L_0015EF50:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_0015EF6C; }
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 5;
L_0015EF6C:
    set32(c.r[18], c.r[18].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0015EF7C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015EF50u | kUnwind; return; } goto L_0015EF50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015F010; } }
L_0015EF8C:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  goto L_0015EFB4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 12u), 0u);  goto L_0015EFAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EFA8u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0015EFA8u) [[unlikely]] return; }
L_0015EFA8:
    st32((c.r[19].w[0] + 12u), 0u);
    c.budget -= 1;
L_0015EFAC:
    st32((c.r[19].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.budget -= 2;
L_0015EFB4:
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EFC4u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0015EFC4u) [[unlikely]] return; }
L_0015EFC4:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 12u)));  if (t) { goto L_0015F008; } }
L_0015EFDC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_0015EFF8; }
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[4].w[0]), c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 5;
L_0015EFF8:
    set32(c.r[18], c.r[18].w[0] + 8u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0015F008:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015EFDCu | kUnwind; return; } goto L_0015EFDC; } }
L_0015F010:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0015F014:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0015F030:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_0015F040:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F068u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0015F068u) [[unlikely]] return; }
L_0015F068:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F07Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 331u, depth + 1u); else { c.pc = 0x0015F0A0u; return; } if (c.pc != 0x0015F07Cu) [[unlikely]] return; }
L_0015F07C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015F0A0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[9], ld32((c.r[4].w[0] + 8u)));  goto L_0015F0C4; }
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[9], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] >> 57;  if (t) { goto L_0015F0C8; } }
    goto L_0015F0C4;
L_0015F0C0:
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 1;
L_0015F0C4:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_0015F0C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_0015F138; }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0015F134; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[2].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[9].w[0] + c.r[6].w[0]);  goto L_0015F0F0; }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[9].w[0] + c.r[6].w[0]);
    c.budget -= 2;
L_0015F0F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[2].w[0] + 1u);  if (t) { goto L_0015F128; } }
L_0015F0F8:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0015F11C; } }
L_0015F104:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_0015F118; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[8].w[0] - c.r[9].w[0]);  if (t) { goto L_0015F138; } }
L_0015F118:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0015F11C:
    c.r[2].d[0] = c.r[4].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015F104u | kUnwind; return; } goto L_0015F104; }
L_0015F128:
    c.r[1].d[0] = c.r[9].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[8], c.r[8].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015F0F8u | kUnwind; return; } goto L_0015F0F8; }
L_0015F134:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0015F138:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015F140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 28936u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F158u); set32(c.r[4], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_0017(c, 365u, depth + 1u); else { c.pc = 0x0015F590u; return; } if (c.pc != 0x0015F158u) [[unlikely]] return; }
L_0015F158:
    set32(c.r[2], ld32((c.r[28].w[0] - 28936u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[3].w[0] + 28u)));  goto L_0015F170; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0015F170:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015F180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F1A4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015F1A4u) [[unlikely]] return; }
L_0015F1A4:
    set32(c.r[4], ld32((c.r[28].w[0] - 28936u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F1B0u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0017(c, 355u, depth + 1u); else { c.pc = 0x0015F370u; return; } if (c.pc != 0x0015F1B0u) [[unlikely]] return; }
L_0015F1B0:
    st32((c.r[2].w[0] + 16u), c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F1C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0015F1C0u) [[unlikely]] return; }
L_0015F1C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015F1D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 28936u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0015F1E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015F280; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_0015F22C; } }
L_0015F208:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 60u);  goto L_0015F224; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F220u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015F220u) [[unlikely]] return; }
L_0015F220:
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 1;
L_0015F224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F22Cu);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x0015F22Cu) [[unlikely]] return; }
L_0015F22C:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], c.r[16].w[0] + 12u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[3].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015F208u | kUnwind; return; } goto L_0015F208; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 28936u), 0u);  if (t) { goto L_0015F268; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_0015F26C; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0015F268; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0015F268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F268u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 369u, depth + 1u); else { c.pc = 0x0015F6C0u; return; } if (c.pc != 0x0015F268u) [[unlikely]] return; }
L_0015F268:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_0015F26C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0015F284; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F280u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0015F280u) [[unlikely]] return; }
L_0015F280:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0015F284:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015F2A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0015F2DC; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 22448u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0015F2D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F2D8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0015F2D8u) [[unlikely]] return; }
L_0015F2D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0015F2DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015F2F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F304u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0015F304u) [[unlikely]] return; }
L_0015F304:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0015F31C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F318u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0015F318u) [[unlikely]] return; }
L_0015F318:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0015F31C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 40u), c.r[2].w[0]);  goto L_0015F330; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F32Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0015F32Cu) [[unlikely]] return; }
L_0015F32C:
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 1;
L_0015F330:
    set32(c.r[5], c.r[29].w[0] + 36u);
    set32(c.r[2], c.r[29].w[0] + 44u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 40u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F34Cu); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0017(c, 410u, depth + 1u); else { c.pc = 0x0015F9E0u; return; } if (c.pc != 0x0015F34Cu) [[unlikely]] return; }
L_0015F34C:
    st32((c.r[28].w[0] - 28936u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015F370:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[21].w[0] + 12u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0015F428; } }
L_0015F3B4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015F3D4; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 12u));
    set32(c.r[7], c.r[17].w[0] + 13u);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[2].d[0] >> 57;  if (t) { goto L_0015F3DC; } }
L_0015F3D4:
    set32(c.r[7], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[8], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 2;
L_0015F3DC:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[20].w[0]));  goto L_0015F3F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[20].w[0] + 4u)));  if (t) { goto L_0015F3FC; } }
L_0015F3F4:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[6].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0015F3FC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F408u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 299u, depth + 1u); else { c.pc = 0x001034A0u; return; } if (c.pc != 0x0015F408u) [[unlikely]] return; }
L_0015F408:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[19].d[0] = c.r[17].d[0] + 0ull;  goto L_0015F41C; }
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0015F428; } }
L_0015F41C:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0015F428:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015F3B4u | kUnwind; return; } goto L_0015F3B4; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[5].d[0] = c.r[20].d[0] + 0ull;  goto L_0015F498; }
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[20].w[0] + 8u)));  goto L_0015F45C; }
    c.r[2].d[0] = ld8((c.r[20].w[0]));
    set32(c.r[7], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[2].d[0] >> 57;  if (t) { goto L_0015F460; } }
L_0015F45C:
    set32(c.r[8], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_0015F460:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[19].w[0] + 12u));  goto L_0015F478; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[19].w[0] + 16u)));  if (t) { goto L_0015F480; } }
L_0015F478:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[6].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0015F480:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F48Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 299u, depth + 1u); else { c.pc = 0x001034A0u; return; } if (c.pc != 0x0015F48Cu) [[unlikely]] return; }
L_0015F48C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], c.r[19].w[0] + 12u);  goto L_0015F4E8; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0015F498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F4A0u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0015F4A0u) [[unlikely]] return; }
L_0015F4A0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F4BCu); st32((c.r[29].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_0017(c, 411u, depth + 1u); else { c.pc = 0x0015FA10u; return; } if (c.pc != 0x0015F4BCu) [[unlikely]] return; }
L_0015F4BC:
    set32(c.r[16], c.r[2].w[0] + 12u);
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0015F4E8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015F4E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F4E4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0015F4E4u) [[unlikely]] return; }
L_0015F4E4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0015F4E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0015F510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015F578; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0015F564; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0015F560; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F560; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015F560; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F560u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0015F560u) [[unlikely]] return; }
L_0015F560:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0015F564:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0015F57C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F578u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0015F578u) [[unlikely]] return; }
L_0015F578:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015F57C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015F590:
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
    set32(c.r[17], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[19].w[0] + 12u);  if (t) { goto L_0015F624; } }
L_0015F5C4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[18].w[0] + 8u)));  goto L_0015F5E4; }
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[7], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[2].d[0] >> 57;  if (t) { goto L_0015F5E8; } }
L_0015F5E4:
    set32(c.r[8], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0015F5E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0] + 12u));  goto L_0015F600; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[17].w[0] + 16u)));  if (t) { goto L_0015F608; } }
L_0015F600:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[6].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0015F608:
    set32(c.r[4], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F614u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 299u, depth + 1u); else { c.pc = 0x001034A0u; return; } if (c.pc != 0x0015F614u) [[unlikely]] return; }
L_0015F614:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], ld32((c.r[17].w[0] + 4u)));  goto L_0015F624; }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_0015F624:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015F5C4u | kUnwind; return; } goto L_0015F5C4; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[19].w[0] + 12u);  goto L_0015F698; }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[16].w[0] + 20u)));  goto L_0015F65C; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    set32(c.r[7], c.r[16].w[0] + 13u);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[2].d[0] >> 57;  if (t) { goto L_0015F660; } }
L_0015F65C:
    set32(c.r[8], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0015F660:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0]));  goto L_0015F678; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_0015F680; } }
L_0015F678:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[6].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0015F680:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F68Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 299u, depth + 1u); else { c.pc = 0x001034A0u; return; } if (c.pc != 0x0015F68Cu) [[unlikely]] return; }
L_0015F68C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[20].w[0]), c.r[16].w[0]);  goto L_0015F69C; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 1;
L_0015F698:
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0015F69C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0015F6C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015F7E0; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_0015F750; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0015F70C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F708u);  if (depth < kMaxDepth) unit_0017(c, 369u, depth + 1u); else { c.pc = 0x0015F6C0u; return; } if (c.pc != 0x0015F708u) [[unlikely]] return; }
L_0015F708:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0015F70C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0015F720; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F71Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 369u, depth + 1u); else { c.pc = 0x0015F6C0u; return; } if (c.pc != 0x0015F71Cu) [[unlikely]] return; }
L_0015F71C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015F720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F728u);  if (depth < kMaxDepth) unit_0017(c, 409u, depth + 1u); else { c.pc = 0x0015F9D0u; return; } if (c.pc != 0x0015F728u) [[unlikely]] return; }
L_0015F728:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F734u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_0017(c, 407u, depth + 1u); else { c.pc = 0x0015F980u; return; } if (c.pc != 0x0015F734u) [[unlikely]] return; }
L_0015F734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F73Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 406u, depth + 1u); else { c.pc = 0x0015F970u; return; } if (c.pc != 0x0015F73Cu) [[unlikely]] return; }
L_0015F73C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F74Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 404u, depth + 1u); else { c.pc = 0x0015F950u; return; } if (c.pc != 0x0015F74Cu) [[unlikely]] return; }
L_0015F74C:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0015F750:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0015F7B4; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0015F770; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F76Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 369u, depth + 1u); else { c.pc = 0x0015F6C0u; return; } if (c.pc != 0x0015F76Cu) [[unlikely]] return; }
L_0015F76C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0015F770:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0015F784; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F780u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 369u, depth + 1u); else { c.pc = 0x0015F6C0u; return; } if (c.pc != 0x0015F780u) [[unlikely]] return; }
L_0015F780:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015F784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F78Cu);  if (depth < kMaxDepth) unit_0017(c, 409u, depth + 1u); else { c.pc = 0x0015F9D0u; return; } if (c.pc != 0x0015F78Cu) [[unlikely]] return; }
L_0015F78C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F798u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_0017(c, 407u, depth + 1u); else { c.pc = 0x0015F980u; return; } if (c.pc != 0x0015F798u) [[unlikely]] return; }
L_0015F798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F7A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 406u, depth + 1u); else { c.pc = 0x0015F970u; return; } if (c.pc != 0x0015F7A0u) [[unlikely]] return; }
L_0015F7A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F7B0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 404u, depth + 1u); else { c.pc = 0x0015F950u; return; } if (c.pc != 0x0015F7B0u) [[unlikely]] return; }
L_0015F7B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015F7B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F7BCu);  if (depth < kMaxDepth) unit_0017(c, 409u, depth + 1u); else { c.pc = 0x0015F9D0u; return; } if (c.pc != 0x0015F7BCu) [[unlikely]] return; }
L_0015F7BC:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F7C8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 362u, depth + 1u); else { c.pc = 0x0015F510u; return; } if (c.pc != 0x0015F7C8u) [[unlikely]] return; }
L_0015F7C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F7D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 406u, depth + 1u); else { c.pc = 0x0015F970u; return; } if (c.pc != 0x0015F7D0u) [[unlikely]] return; }
L_0015F7D0:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_0015F7E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F7E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0015F7E0u) [[unlikely]] return; }
L_0015F7E0:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0015F7E4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 12u);  goto L_0015F8E8; }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_0015F854; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0015F810; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F80Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 369u, depth + 1u); else { c.pc = 0x0015F6C0u; return; } if (c.pc != 0x0015F80Cu) [[unlikely]] return; }
L_0015F80C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0015F810:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0015F824; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F820u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 369u, depth + 1u); else { c.pc = 0x0015F6C0u; return; } if (c.pc != 0x0015F820u) [[unlikely]] return; }
L_0015F820:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015F824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F82Cu);  if (depth < kMaxDepth) unit_0017(c, 409u, depth + 1u); else { c.pc = 0x0015F9D0u; return; } if (c.pc != 0x0015F82Cu) [[unlikely]] return; }
L_0015F82C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F838u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_0017(c, 407u, depth + 1u); else { c.pc = 0x0015F980u; return; } if (c.pc != 0x0015F838u) [[unlikely]] return; }
L_0015F838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F840u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 406u, depth + 1u); else { c.pc = 0x0015F970u; return; } if (c.pc != 0x0015F840u) [[unlikely]] return; }
L_0015F840:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F850u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 404u, depth + 1u); else { c.pc = 0x0015F950u; return; } if (c.pc != 0x0015F850u) [[unlikely]] return; }
L_0015F850:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0015F854:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0015F8B8; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0015F874; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F870u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 369u, depth + 1u); else { c.pc = 0x0015F6C0u; return; } if (c.pc != 0x0015F870u) [[unlikely]] return; }
L_0015F870:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0015F874:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0015F888; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F884u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 369u, depth + 1u); else { c.pc = 0x0015F6C0u; return; } if (c.pc != 0x0015F884u) [[unlikely]] return; }
L_0015F884:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015F888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F890u);  if (depth < kMaxDepth) unit_0017(c, 409u, depth + 1u); else { c.pc = 0x0015F9D0u; return; } if (c.pc != 0x0015F890u) [[unlikely]] return; }
L_0015F890:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F89Cu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_0017(c, 407u, depth + 1u); else { c.pc = 0x0015F980u; return; } if (c.pc != 0x0015F89Cu) [[unlikely]] return; }
L_0015F89C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F8A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 406u, depth + 1u); else { c.pc = 0x0015F970u; return; } if (c.pc != 0x0015F8A4u) [[unlikely]] return; }
L_0015F8A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F8B4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 404u, depth + 1u); else { c.pc = 0x0015F950u; return; } if (c.pc != 0x0015F8B4u) [[unlikely]] return; }
L_0015F8B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015F8B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F8C0u);  if (depth < kMaxDepth) unit_0017(c, 409u, depth + 1u); else { c.pc = 0x0015F9D0u; return; } if (c.pc != 0x0015F8C0u) [[unlikely]] return; }
L_0015F8C0:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F8CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 362u, depth + 1u); else { c.pc = 0x0015F510u; return; } if (c.pc != 0x0015F8CCu) [[unlikely]] return; }
L_0015F8CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F8D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 406u, depth + 1u); else { c.pc = 0x0015F970u; return; } if (c.pc != 0x0015F8D4u) [[unlikely]] return; }
L_0015F8D4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0015F8E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F8E4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0015F8E4u) [[unlikely]] return; }
L_0015F8E4:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_0015F8E8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015F924; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015F924; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015F924; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015F924; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015F924; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F924u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0015F924u) [[unlikely]] return; }
L_0015F924:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0015F938; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F934u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0015F934u) [[unlikely]] return; }
L_0015F934:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0015F938:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015F950:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0015F964; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F964u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0015F964u) [[unlikely]] return; }
L_0015F964:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015F970:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_0015F980:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0015F9C0; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0015F9C4; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0015F9C0; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015F9C0; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015F9C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F9C0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0015F9C0u) [[unlikely]] return; }
L_0015F9C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0015F9C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015F9D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0015F9E0:
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
L_0015FA10:
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
    { const bool t = c.r[1].d[0] != 0ull; c.r[18].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0015FA74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FA6Cu); set32(c.r[5], c.r[5].w[0] + 23770u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0015FA6Cu) [[unlikely]] return; }
L_0015FA6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FA74u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0015FA74u) [[unlikely]] return; }
L_0015FA74:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FA80u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0015FA80u) [[unlikely]] return; }
L_0015FA80:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] + 12u);
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_0015FAA8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FA9Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0015FA9Cu) [[unlikely]] return; }
L_0015FA9C:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 3;
L_0015FAA8:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0015FAC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[17].w[0]);  if (t) { goto L_0015FACC; } }
L_0015FAC8:
    st32((c.r[20].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_0015FACC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FAE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x0015FAE4u) [[unlikely]] return; }
L_0015FAE4:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0015FAF4; }
    st32((c.r[21].w[0] + 20u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0015FAF4:
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
L_0015FB20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015FB68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 22400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FB50u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 121u, depth + 1u); else { c.pc = 0x0013D730u; return; } if (c.pc != 0x0015FB50u) [[unlikely]] return; }
L_0015FB50:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0015FB6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FB68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0015FB68u) [[unlikely]] return; }
L_0015FB68:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015FB6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015FB80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = ld16((c.r[4].w[0] + 4u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FBACu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 36u, depth + 1u); else { c.pc = 0x001604F0u; return; } if (c.pc != 0x0015FBACu) [[unlikely]] return; }
L_0015FBAC:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0015FC80; }
    set32(c.r[2], c.r[2].w[0] + 7u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));  if (t) { goto L_0015FBCC; } }
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_0015FBCC:
    set32(c.r[6], 0u + 4u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[6].d[0]) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_0015FC50; }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[6].d[0]) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_0015FC20; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[6].d[0]) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_0015FBF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015FC7C; } }
L_0015FBF8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FC08u); set32(c.r[5], c.r[29].w[0] + 95u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015FC08u) [[unlikely]] return; }
L_0015FC08:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0015FC7C; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 95u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0015FC7C; } }
L_0015FC20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FC30u); set32(c.r[5], c.r[29].w[0] + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015FC30u) [[unlikely]] return; }
L_0015FC30:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0015FC7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FC44u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0018(c, 31u, depth + 1u); else { c.pc = 0x00160470u; return; } if (c.pc != 0x0015FC44u) [[unlikely]] return; }
L_0015FC44:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0015FC7C; } }
L_0015FC50:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FC60u); set32(c.r[5], c.r[29].w[0] + 88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015FC60u) [[unlikely]] return; }
L_0015FC60:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0015FC7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FC74u); set32(c.r[4], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0018(c, 29u, depth + 1u); else { c.pc = 0x00160430u; return; } if (c.pc != 0x0015FC74u) [[unlikely]] return; }
L_0015FC74:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 2;
L_0015FC7C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015FC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FC88u);  if (depth < kMaxDepth) unit_000F(c, 64u, depth + 1u); else { c.pc = 0x0013C9F0u; return; } if (c.pc != 0x0015FC88u) [[unlikely]] return; }
L_0015FC88:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FC9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015FC9Cu) [[unlikely]] return; }
L_0015FC9C:
    set32(c.r[5], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FCACu); set32(c.r[4], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_000F(c, 80u, depth + 1u); else { c.pc = 0x0013CD70u; return; } if (c.pc != 0x0015FCACu) [[unlikely]] return; }
L_0015FCAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0015FCD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld16((c.r[4].w[0] + 4u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FCF4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 36u, depth + 1u); else { c.pc = 0x001604F0u; return; } if (c.pc != 0x0015FCF4u) [[unlikely]] return; }
L_0015FCF4:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 8u);  goto L_0015FDB8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 7u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));  if (t) { goto L_0015FD18; } }
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_0015FD18:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st32((c.r[29].w[0] + 68u), c.r[4].w[0]);  goto L_0015FD80; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st16((c.r[29].w[0] + 76u), static_cast<std::uint16_t>(c.r[4].w[0]));  goto L_0015FD58; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[6].d[0]) { st8((c.r[29].w[0] + 79u), static_cast<std::uint8_t>(c.r[4].w[0]));  goto L_0015FD44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015FDA4; } }
L_0015FD44:
    set32(c.r[5], c.r[29].w[0] + 79u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FD50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 80u, depth + 1u); else { c.pc = 0x0013CD70u; return; } if (c.pc != 0x0015FD50u) [[unlikely]] return; }
L_0015FD50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0015FDA4; } }
L_0015FD58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FD60u); set32(c.r[4], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0018(c, 35u, depth + 1u); else { c.pc = 0x001604D0u; return; } if (c.pc != 0x0015FD60u) [[unlikely]] return; }
L_0015FD60:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 76u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 74u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FD78u); st16((c.r[29].w[0] + 74u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 80u, depth + 1u); else { c.pc = 0x0013CD70u; return; } if (c.pc != 0x0015FD78u) [[unlikely]] return; }
L_0015FD78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0015FDA4; } }
L_0015FD80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FD88u); set32(c.r[4], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_0018(c, 32u, depth + 1u); else { c.pc = 0x00160490u; return; } if (c.pc != 0x0015FD88u) [[unlikely]] return; }
L_0015FD88:
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FDA0u); st32((c.r[29].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 80u, depth + 1u); else { c.pc = 0x0013CD70u; return; } if (c.pc != 0x0015FDA0u) [[unlikely]] return; }
L_0015FDA0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0015FDA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015FDB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015FDE4; } }
L_0015FDB4:
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_0015FDB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FDC0u);  if (depth < kMaxDepth) unit_000F(c, 64u, depth + 1u); else { c.pc = 0x0013C9F0u; return; } if (c.pc != 0x0015FDC0u) [[unlikely]] return; }
L_0015FDC0:
    set32(c.r[25], ld32((c.r[17].w[0] + 8u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FDD4u); set32(c.r[4], c.r[17].w[0] + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015FDD4u) [[unlikely]] return; }
L_0015FDD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FDE4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 80u, depth + 1u); else { c.pc = 0x0013CD70u; return; } if (c.pc != 0x0015FDE4u) [[unlikely]] return; }
L_0015FDE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015FE00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 4u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FE38u); c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 36u, depth + 1u); else { c.pc = 0x001604F0u; return; } if (c.pc != 0x0015FE38u) [[unlikely]] return; }
L_0015FE38:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 8u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FE4Cu); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 108u, depth + 1u); else { c.pc = 0x0013D410u; return; } if (c.pc != 0x0015FE4Cu) [[unlikely]] return; }
L_0015FE4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  if (t) { goto L_0015FEAC; } }
L_0015FE54:
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[19].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0015FEA8; }
    set32(c.r[25], ld32((c.r[21].w[0] + 8u)));
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[4], c.r[21].w[0] + 8u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FE84u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015FE84u) [[unlikely]] return; }
L_0015FE84:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FEA0u); set32(c.r[5], c.r[21].w[0] + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015FEA0u) [[unlikely]] return; }
L_0015FEA0:
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_0015FEA8:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_0015FEAC:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_0015FEE8; }
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], c.r[3].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FED4u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_000A(c, 6u, depth + 1u); else { c.pc = 0x001280C0u; return; } if (c.pc != 0x0015FED4u) [[unlikely]] return; }
L_0015FED4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015FE54u | kUnwind; return; } goto L_0015FE54; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_0015FEE8:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 24u)));  goto L_0015FEF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015FF5C; } }
L_0015FEF8:
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[19].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[21].w[0] + 8u)));  goto L_0015FF14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015FF5C; } }
L_0015FF14:
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[4], c.r[21].w[0] + 8u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FF2Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015FF2Cu) [[unlikely]] return; }
L_0015FF2C:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[5], c.r[21].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FF58u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015FF58u) [[unlikely]] return; }
L_0015FF58:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0015FF5C:
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
L_0015FF90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 4u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FFC8u); c.r[21].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 36u, depth + 1u); else { c.pc = 0x001604F0u; return; } if (c.pc != 0x0015FFC8u) [[unlikely]] return; }
L_0015FFC8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 8u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FFDCu); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 108u, depth + 1u); else { c.pc = 0x0013D410u; return; } if (c.pc != 0x0015FFDCu) [[unlikely]] return; }
L_0015FFDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  if (t) { [[clang::musttail]] return unit_0018(c, 5u, depth); } }
L_0015FFE4:
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[19].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  [[clang::musttail]] return unit_0018(c, 4u, depth); }
    set32(c.r[25], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_0015FFFC:
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
    [[clang::musttail]] return unit_0018(c, 1u, depth);
}

}
