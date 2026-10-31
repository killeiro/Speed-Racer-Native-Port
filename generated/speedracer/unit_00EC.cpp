#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00EC[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0,
    0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0,
    0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31,
    0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63,
    0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0,
    0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 78, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 93,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0,
    0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0,
    0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0,
    0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152,
    0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0,
    0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0,
    0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168,
    0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0,
    0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0,
    0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0,
    199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0,
    0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0,
    232, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238,
    0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0,
    0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0,
    0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 267,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0,
    274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0,
    291, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0,
    0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0,
    0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0,
    328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 334, 0,
    0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0,
    0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0,
    0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350,
    0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0,
    356, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361,
    0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 368,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0,
    0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0,
    0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 389,
    0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395,
    0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0,
    0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0,
    412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440,
    0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0,
    454, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0,
    0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 0,
    0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0, 0, 0, 475,
    0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0,
    0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0,
};

void unit_00EC(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004B0000;
    case 2u: goto L_004B0010;
    case 3u: goto L_004B002C;
    case 4u: goto L_004B0044;
    case 5u: goto L_004B00A0;
    case 6u: goto L_004B00E8;
    case 7u: goto L_004B010C;
    case 8u: goto L_004B015C;
    case 9u: goto L_004B0194;
    case 10u: goto L_004B01A8;
    case 11u: goto L_004B01D4;
    case 12u: goto L_004B01EC;
    case 13u: goto L_004B0210;
    case 14u: goto L_004B0238;
    case 15u: goto L_004B0280;
    case 16u: goto L_004B02A0;
    case 17u: goto L_004B04BC;
    case 18u: goto L_004B04EC;
    case 19u: goto L_004B0500;
    case 20u: goto L_004B0514;
    case 21u: goto L_004B0554;
    case 22u: goto L_004B0578;
    case 23u: goto L_004B0588;
    case 24u: goto L_004B05A8;
    case 25u: goto L_004B05CC;
    case 26u: goto L_004B05DC;
    case 27u: goto L_004B0600;
    case 28u: goto L_004B0624;
    case 29u: goto L_004B0640;
    case 30u: goto L_004B0664;
    case 31u: goto L_004B067C;
    case 32u: goto L_004B06A0;
    case 33u: goto L_004B06B0;
    case 34u: goto L_004B06D4;
    case 35u: goto L_004B06E0;
    case 36u: goto L_004B06F0;
    case 37u: goto L_004B0700;
    case 38u: goto L_004B0770;
    case 39u: goto L_004B0780;
    case 40u: goto L_004B0790;
    case 41u: goto L_004B07A0;
    case 42u: goto L_004B07B0;
    case 43u: goto L_004B07C0;
    case 44u: goto L_004B07D0;
    case 45u: goto L_004B0800;
    case 46u: goto L_004B0848;
    case 47u: goto L_004B0860;
    case 48u: goto L_004B0880;
    case 49u: goto L_004B08D0;
    case 50u: goto L_004B08F4;
    case 51u: goto L_004B092C;
    case 52u: goto L_004B0948;
    case 53u: goto L_004B0980;
    case 54u: goto L_004B0998;
    case 55u: goto L_004B09BC;
    case 56u: goto L_004B09D4;
    case 57u: goto L_004B09F8;
    case 58u: goto L_004B0A24;
    case 59u: goto L_004B0A4C;
    case 60u: goto L_004B0A70;
    case 61u: goto L_004B0AA0;
    case 62u: goto L_004B0AE4;
    case 63u: goto L_004B0AFC;
    case 64u: goto L_004B0B14;
    case 65u: goto L_004B0B28;
    case 66u: goto L_004B0B40;
    case 67u: goto L_004B0B70;
    case 68u: goto L_004B0B9C;
    case 69u: goto L_004B0BC4;
    case 70u: goto L_004B0BE8;
    case 71u: goto L_004B0C18;
    case 72u: goto L_004B0C5C;
    case 73u: goto L_004B0C74;
    case 74u: goto L_004B0C8C;
    case 75u: goto L_004B0CA0;
    case 76u: goto L_004B0CB8;
    case 77u: goto L_004B0CE8;
    case 78u: goto L_004B0D04;
    case 79u: goto L_004B0D18;
    case 80u: goto L_004B0D24;
    case 81u: goto L_004B0D30;
    case 82u: goto L_004B0D70;
    case 83u: goto L_004B0DB0;
    case 84u: goto L_004B0DE4;
    case 85u: goto L_004B0E00;
    case 86u: goto L_004B0E20;
    case 87u: goto L_004B0E70;
    case 88u: goto L_004B0E7C;
    case 89u: goto L_004B0EA0;
    case 90u: goto L_004B0EAC;
    case 91u: goto L_004B0ED8;
    case 92u: goto L_004B0EE8;
    case 93u: goto L_004B0EFC;
    case 94u: goto L_004B0F40;
    case 95u: goto L_004B0F50;
    case 96u: goto L_004B0F64;
    case 97u: goto L_004B0F78;
    case 98u: goto L_004B1018;
    case 99u: goto L_004B1024;
    case 100u: goto L_004B106C;
    case 101u: goto L_004B1084;
    case 102u: goto L_004B109C;
    case 103u: goto L_004B10B0;
    case 104u: goto L_004B10C8;
    case 105u: goto L_004B10F8;
    case 106u: goto L_004B110C;
    case 107u: goto L_004B1168;
    case 108u: goto L_004B11BC;
    case 109u: goto L_004B11D4;
    case 110u: goto L_004B11EC;
    case 111u: goto L_004B1200;
    case 112u: goto L_004B1218;
    case 113u: goto L_004B1248;
    case 114u: goto L_004B1284;
    case 115u: goto L_004B12D8;
    case 116u: goto L_004B12F0;
    case 117u: goto L_004B1308;
    case 118u: goto L_004B131C;
    case 119u: goto L_004B1334;
    case 120u: goto L_004B1364;
    case 121u: goto L_004B1378;
    case 122u: goto L_004B13D4;
    case 123u: goto L_004B1428;
    case 124u: goto L_004B1440;
    case 125u: goto L_004B1458;
    case 126u: goto L_004B146C;
    case 127u: goto L_004B1484;
    case 128u: goto L_004B14B4;
    case 129u: goto L_004B14D4;
    case 130u: goto L_004B14E4;
    case 131u: goto L_004B14F8;
    case 132u: goto L_004B153C;
    case 133u: goto L_004B154C;
    case 134u: goto L_004B1560;
    case 135u: goto L_004B15E0;
    case 136u: goto L_004B1634;
    case 137u: goto L_004B164C;
    case 138u: goto L_004B1664;
    case 139u: goto L_004B1678;
    case 140u: goto L_004B1690;
    case 141u: goto L_004B16C0;
    case 142u: goto L_004B16FC;
    case 143u: goto L_004B1750;
    case 144u: goto L_004B1768;
    case 145u: goto L_004B1780;
    case 146u: goto L_004B1794;
    case 147u: goto L_004B17AC;
    case 148u: goto L_004B17DC;
    case 149u: goto L_004B1810;
    case 150u: goto L_004B1838;
    case 151u: goto L_004B1870;
    case 152u: goto L_004B187C;
    case 153u: goto L_004B18A0;
    case 154u: goto L_004B18AC;
    case 155u: goto L_004B18E4;
    case 156u: goto L_004B1948;
    case 157u: goto L_004B1960;
    case 158u: goto L_004B1978;
    case 159u: goto L_004B198C;
    case 160u: goto L_004B19A4;
    case 161u: goto L_004B19D4;
    case 162u: goto L_004B1A0C;
    case 163u: goto L_004B1A70;
    case 164u: goto L_004B1A88;
    case 165u: goto L_004B1AA0;
    case 166u: goto L_004B1AB4;
    case 167u: goto L_004B1ACC;
    case 168u: goto L_004B1AFC;
    case 169u: goto L_004B1B14;
    case 170u: goto L_004B1B40;
    case 171u: goto L_004B1B8C;
    case 172u: goto L_004B1B98;
    case 173u: goto L_004B1BAC;
    case 174u: goto L_004B1BC8;
    case 175u: goto L_004B1C00;
    case 176u: goto L_004B1C0C;
    case 177u: goto L_004B1C44;
    case 178u: goto L_004B1C54;
    case 179u: goto L_004B1C68;
    case 180u: goto L_004B1CA0;
    case 181u: goto L_004B1CD4;
    case 182u: goto L_004B1CE8;
    case 183u: goto L_004B1D30;
    case 184u: goto L_004B1D3C;
    case 185u: goto L_004B1D60;
    case 186u: goto L_004B1DB0;
    case 187u: goto L_004B1DD0;
    case 188u: goto L_004B1DE0;
    case 189u: goto L_004B1DF8;
    case 190u: goto L_004B1E10;
    case 191u: goto L_004B1E34;
    case 192u: goto L_004B1E50;
    case 193u: goto L_004B1E74;
    case 194u: goto L_004B1E8C;
    case 195u: goto L_004B1EB0;
    case 196u: goto L_004B1EC0;
    case 197u: goto L_004B1EE4;
    case 198u: goto L_004B1EF0;
    case 199u: goto L_004B1F00;
    case 200u: goto L_004B1F10;
    case 201u: goto L_004B1F20;
    case 202u: goto L_004B1F30;
    case 203u: goto L_004B1F74;
    case 204u: goto L_004B1FB0;
    case 205u: goto L_004B1FD0;
    case 206u: goto L_004B2004;
    case 207u: goto L_004B2018;
    case 208u: goto L_004B202C;
    case 209u: goto L_004B2034;
    case 210u: goto L_004B203C;
    case 211u: goto L_004B205C;
    case 212u: goto L_004B2068;
    case 213u: goto L_004B2074;
    case 214u: goto L_004B2084;
    case 215u: goto L_004B2094;
    case 216u: goto L_004B20BC;
    case 217u: goto L_004B20C8;
    case 218u: goto L_004B20D4;
    case 219u: goto L_004B20E0;
    case 220u: goto L_004B20F0;
    case 221u: goto L_004B2118;
    case 222u: goto L_004B2124;
    case 223u: goto L_004B2130;
    case 224u: goto L_004B2140;
    case 225u: goto L_004B2170;
    case 226u: goto L_004B21A8;
    case 227u: goto L_004B21B4;
    case 228u: goto L_004B21C0;
    case 229u: goto L_004B21CC;
    case 230u: goto L_004B21D4;
    case 231u: goto L_004B21E8;
    case 232u: goto L_004B2200;
    case 233u: goto L_004B220C;
    case 234u: goto L_004B2218;
    case 235u: goto L_004B2240;
    case 236u: goto L_004B22A0;
    case 237u: goto L_004B22CC;
    case 238u: goto L_004B22FC;
    case 239u: goto L_004B2308;
    case 240u: goto L_004B2320;
    case 241u: goto L_004B2340;
    case 242u: goto L_004B2374;
    case 243u: goto L_004B2380;
    case 244u: goto L_004B239C;
    case 245u: goto L_004B23BC;
    case 246u: goto L_004B23C4;
    case 247u: goto L_004B23D0;
    case 248u: goto L_004B23F4;
    case 249u: goto L_004B2458;
    case 250u: goto L_004B2478;
    case 251u: goto L_004B2490;
    case 252u: goto L_004B24AC;
    case 253u: goto L_004B24C4;
    case 254u: goto L_004B24E4;
    case 255u: goto L_004B24F4;
    case 256u: goto L_004B2504;
    case 257u: goto L_004B2528;
    case 258u: goto L_004B2540;
    case 259u: goto L_004B2554;
    case 260u: goto L_004B256C;
    case 261u: goto L_004B2578;
    case 262u: goto L_004B2584;
    case 263u: goto L_004B2590;
    case 264u: goto L_004B25B0;
    case 265u: goto L_004B25E0;
    case 266u: goto L_004B25EC;
    case 267u: goto L_004B25FC;
    case 268u: goto L_004B2624;
    case 269u: goto L_004B2630;
    case 270u: goto L_004B263C;
    case 271u: goto L_004B2650;
    case 272u: goto L_004B2664;
    case 273u: goto L_004B2670;
    case 274u: goto L_004B2680;
    case 275u: goto L_004B26A8;
    case 276u: goto L_004B26B4;
    case 277u: goto L_004B26C0;
    case 278u: goto L_004B26D0;
    case 279u: goto L_004B2700;
    case 280u: goto L_004B2738;
    case 281u: goto L_004B2744;
    case 282u: goto L_004B2750;
    case 283u: goto L_004B2758;
    case 284u: goto L_004B2770;
    case 285u: goto L_004B2784;
    case 286u: goto L_004B27A4;
    case 287u: goto L_004B27C0;
    case 288u: goto L_004B27C8;
    case 289u: goto L_004B27DC;
    case 290u: goto L_004B27F8;
    case 291u: goto L_004B2800;
    case 292u: goto L_004B2808;
    case 293u: goto L_004B2820;
    case 294u: goto L_004B282C;
    case 295u: goto L_004B2838;
    case 296u: goto L_004B2860;
    case 297u: goto L_004B28A4;
    case 298u: goto L_004B28E0;
    case 299u: goto L_004B2900;
    case 300u: goto L_004B292C;
    case 301u: goto L_004B2934;
    case 302u: goto L_004B2954;
    case 303u: goto L_004B2970;
    case 304u: goto L_004B2980;
    case 305u: goto L_004B29C8;
    case 306u: goto L_004B29D4;
    case 307u: goto L_004B29E4;
    case 308u: goto L_004B2A00;
    case 309u: goto L_004B2A2C;
    case 310u: goto L_004B2A3C;
    case 311u: goto L_004B2A54;
    case 312u: goto L_004B2A60;
    case 313u: goto L_004B2A7C;
    case 314u: goto L_004B2AB4;
    case 315u: goto L_004B2AD0;
    case 316u: goto L_004B2AEC;
    case 317u: goto L_004B2AF8;
    case 318u: goto L_004B2B14;
    case 319u: goto L_004B2B34;
    case 320u: goto L_004B2B48;
    case 321u: goto L_004B2B50;
    case 322u: goto L_004B2B6C;
    case 323u: goto L_004B2B78;
    case 324u: goto L_004B2B94;
    case 325u: goto L_004B2BA0;
    case 326u: goto L_004B2BC4;
    case 327u: goto L_004B2BDC;
    case 328u: goto L_004B2C00;
    case 329u: goto L_004B2C0C;
    case 330u: goto L_004B2C28;
    case 331u: goto L_004B2C4C;
    case 332u: goto L_004B2C58;
    case 333u: goto L_004B2C68;
    case 334u: goto L_004B2C78;
    case 335u: goto L_004B2C9C;
    case 336u: goto L_004B2CB4;
    case 337u: goto L_004B2CC8;
    case 338u: goto L_004B2CE0;
    case 339u: goto L_004B2CEC;
    case 340u: goto L_004B2CF8;
    case 341u: goto L_004B2D0C;
    case 342u: goto L_004B2D24;
    case 343u: goto L_004B2D30;
    case 344u: goto L_004B2D4C;
    case 345u: goto L_004B2D68;
    case 346u: goto L_004B2D84;
    case 347u: goto L_004B2DB8;
    case 348u: goto L_004B2DCC;
    case 349u: goto L_004B2DEC;
    case 350u: goto L_004B2DFC;
    case 351u: goto L_004B2E0C;
    case 352u: goto L_004B2E30;
    case 353u: goto L_004B2E48;
    case 354u: goto L_004B2E5C;
    case 355u: goto L_004B2E74;
    case 356u: goto L_004B2E80;
    case 357u: goto L_004B2E8C;
    case 358u: goto L_004B2E98;
    case 359u: goto L_004B2EC0;
    case 360u: goto L_004B2EF0;
    case 361u: goto L_004B2EFC;
    case 362u: goto L_004B2F0C;
    case 363u: goto L_004B2F34;
    case 364u: goto L_004B2F40;
    case 365u: goto L_004B2F4C;
    case 366u: goto L_004B2F60;
    case 367u: goto L_004B2F6C;
    case 368u: goto L_004B2F7C;
    case 369u: goto L_004B2FA4;
    case 370u: goto L_004B2FB0;
    case 371u: goto L_004B2FBC;
    case 372u: goto L_004B2FC8;
    case 373u: goto L_004B2FD8;
    case 374u: goto L_004B3008;
    case 375u: goto L_004B3040;
    case 376u: goto L_004B304C;
    case 377u: goto L_004B3058;
    case 378u: goto L_004B3074;
    case 379u: goto L_004B3090;
    case 380u: goto L_004B30A0;
    case 381u: goto L_004B30E0;
    case 382u: goto L_004B30F4;
    case 383u: goto L_004B3118;
    case 384u: goto L_004B3134;
    case 385u: goto L_004B313C;
    case 386u: goto L_004B3150;
    case 387u: goto L_004B316C;
    case 388u: goto L_004B3174;
    case 389u: goto L_004B317C;
    case 390u: goto L_004B3190;
    case 391u: goto L_004B319C;
    case 392u: goto L_004B31C0;
    case 393u: goto L_004B3220;
    case 394u: goto L_004B324C;
    case 395u: goto L_004B327C;
    case 396u: goto L_004B3288;
    case 397u: goto L_004B32A0;
    case 398u: goto L_004B32C0;
    case 399u: goto L_004B32D0;
    case 400u: goto L_004B3304;
    case 401u: goto L_004B3318;
    case 402u: goto L_004B3330;
    case 403u: goto L_004B333C;
    case 404u: goto L_004B3350;
    case 405u: goto L_004B3374;
    case 406u: goto L_004B3384;
    case 407u: goto L_004B339C;
    case 408u: goto L_004B33AC;
    case 409u: goto L_004B33C0;
    case 410u: goto L_004B33D4;
    case 411u: goto L_004B33E0;
    case 412u: goto L_004B3400;
    case 413u: goto L_004B3430;
    case 414u: goto L_004B3450;
    case 415u: goto L_004B3470;
    case 416u: goto L_004B34A0;
    case 417u: goto L_004B34B8;
    case 418u: goto L_004B34D0;
    case 419u: goto L_004B34E4;
    case 420u: goto L_004B3510;
    case 421u: goto L_004B3560;
    case 422u: goto L_004B3590;
    case 423u: goto L_004B35D0;
    case 424u: goto L_004B3600;
    case 425u: goto L_004B3610;
    case 426u: goto L_004B363C;
    case 427u: goto L_004B3650;
    case 428u: goto L_004B3690;
    case 429u: goto L_004B36C4;
    case 430u: goto L_004B36D0;
    case 431u: goto L_004B3708;
    case 432u: goto L_004B3728;
    case 433u: goto L_004B37B8;
    case 434u: goto L_004B3804;
    case 435u: goto L_004B3820;
    case 436u: goto L_004B3844;
    case 437u: goto L_004B385C;
    case 438u: goto L_004B38A0;
    case 439u: goto L_004B38E0;
    case 440u: goto L_004B38FC;
    case 441u: goto L_004B391C;
    case 442u: goto L_004B3980;
    case 443u: goto L_004B3998;
    case 444u: goto L_004B39C0;
    case 445u: goto L_004B39CC;
    case 446u: goto L_004B39EC;
    case 447u: goto L_004B3A40;
    case 448u: goto L_004B3A58;
    case 449u: goto L_004B3AD0;
    case 450u: goto L_004B3B48;
    case 451u: goto L_004B3B50;
    case 452u: goto L_004B3B5C;
    case 453u: goto L_004B3B68;
    case 454u: goto L_004B3B80;
    case 455u: goto L_004B3B9C;
    case 456u: goto L_004B3BC0;
    case 457u: goto L_004B3C5C;
    case 458u: goto L_004B3CAC;
    case 459u: goto L_004B3CC4;
    case 460u: goto L_004B3CE0;
    case 461u: goto L_004B3CF4;
    case 462u: goto L_004B3D0C;
    case 463u: goto L_004B3D3C;
    case 464u: goto L_004B3D70;
    case 465u: goto L_004B3DC0;
    case 466u: goto L_004B3DD8;
    case 467u: goto L_004B3DF4;
    case 468u: goto L_004B3E08;
    case 469u: goto L_004B3E20;
    case 470u: goto L_004B3E50;
    case 471u: goto L_004B3E5C;
    case 472u: goto L_004B3EB0;
    case 473u: goto L_004B3EDC;
    case 474u: goto L_004B3EE8;
    case 475u: goto L_004B3EFC;
    case 476u: goto L_004B3F04;
    case 477u: goto L_004B3F34;
    case 478u: goto L_004B3F50;
    case 479u: goto L_004B3F6C;
    case 480u: goto L_004B3F88;
    case 481u: goto L_004B3F98;
    case 482u: goto L_004B3FB4;
    case 483u: goto L_004B3FCC;
    case 484u: goto L_004B3FF0;
    default: bad_entry(c, 0x004B0000u); return;
    }
L_004B0000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004B0010:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 252u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004B0050; } }
L_004B002C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0044u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B0044u) [[unlikely]] return; }
L_004B0044:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], c.r[2].w[0] + 4u);
    c.budget -= 3;
L_004B0050:
    set32(c.r[4], ld32((c.r[16].w[0] + 248u)));
    c.r[2].d[0] = c.r[17].d[0] << 32;
    set32(c.r[3], ld32((c.r[16].w[0] + 252u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B002Cu | kUnwind; return; } goto L_004B002C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004B00A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_004B01EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 25920u);
    set32(c.r[2], c.r[2].w[0] - 25896u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[19].w[0] + 248u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004B0110; } }
L_004B00E8:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_004B0110; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B010Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B010Cu) [[unlikely]] return; }
L_004B010C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004B0110:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 252u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B00E8u | kUnwind; return; } goto L_004B00E8; }
    set32(c.r[2], c.r[19].w[0] + 240u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 232u);  goto L_004B0160; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B015C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B015C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B015C; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 252u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B015C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B015C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B015Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004B015Cu) [[unlikely]] return; }
L_004B015C:
    set32(c.r[2], c.r[19].w[0] + 232u);
    c.budget -= 1;
L_004B0160:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 172u);  goto L_004B0178; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 16544u);
    st32((c.r[19].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] + 172u);
    c.budget -= 4;
L_004B0178:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[19].w[0] + 140u);  goto L_004B0198; }
    set32(c.r[4], c.r[19].w[0] + 208u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B0194; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0194u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B0194u) [[unlikely]] return; }
L_004B0194:
    set32(c.r[4], c.r[19].w[0] + 140u);
    c.budget -= 1;
L_004B0198:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B01A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B01A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B01A8u) [[unlikely]] return; }
L_004B01A8:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_004B01D8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 21824u);
    set32(c.r[2], c.r[2].w[0] - 21800u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B01D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 208u, depth + 1u); else { c.pc = 0x001B3480u; return; } if (c.pc != 0x004B01D4u) [[unlikely]] return; }
L_004B01D4:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_004B01D8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_004B01F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B01ECu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004B01ECu) [[unlikely]] return; }
L_004B01EC:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_004B01F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004B0210:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0238u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 222u, depth + 1u); else { c.pc = 0x001B3670u; return; } if (c.pc != 0x004B0238u) [[unlikely]] return; }
L_004B0238:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21824u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 21800u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[19].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 25920u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 25896u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], c.r[19].w[0] + 140u);
    st8((c.r[19].w[0] + 136u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0280u); set32(c.r[5], c.r[5].w[0] - 3895u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004B0280u) [[unlikely]] return; }
L_004B0280:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[16], c.r[19].w[0] + 172u);
    st32((c.r[19].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 36u);
    st32((c.r[19].w[0] + 160u), 0u);
    st32((c.r[19].w[0] + 164u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B02A0u); st32((c.r[19].w[0] + 168u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004B02A0u) [[unlikely]] return; }
L_004B02A0:
    c.r[6].d[0] = ld8((c.r[16].w[0]));
    c.r[5].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 2u);
    set32(c.r[2], 0u - 3u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[12], 0u - 5u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    set32(c.r[13], c.r[5].w[0] << 2);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[10], 0u - 9u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[11], c.r[5].w[0] << 3);
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[9], c.r[5].w[0] << 4);
    set32(c.r[8], 0u - 17u);
    set32(c.r[6], 0u - 65u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[14].d[0] = ld8((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = c.r[2].w[0];
    c.r[3].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[13].d[0];
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 16u), 0u);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[10].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[11].d[0];
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.f[1] = ld32((c.r[2].w[0] - 8804u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 55;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_004B038C; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_004B03A4; } }
L_004B038C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 6;
L_004B03A4:
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[1] = ld32((c.r[2].w[0] - 8816u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[3].w[0] << 24);  if (t) { goto L_004B03DC; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] << 16);  if (t) { goto L_004B03F8; } }
L_004B03DC:
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[3].w[0] << 16);
    c.budget -= 7;
L_004B03F8:
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[1] = ld32((c.r[2].w[0] - 8812u));
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_004B0438; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] << 8);  if (t) { goto L_004B0450; } }
L_004B0438:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[3].w[0] << 8);
    c.budget -= 6;
L_004B0450:
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[1] = ld32((c.r[2].w[0] - 8808u));
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_004B0490; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] | c.r[4].d[0];  if (t) { goto L_004B04A8; } }
L_004B0490:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 6;
L_004B04A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[16].w[0] + 36u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B04BCu); set32(c.r[5], c.r[5].w[0] - 29944u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004B04BCu) [[unlikely]] return; }
L_004B04BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[19].w[0] + 240u);
    st8((c.r[19].w[0] + 228u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 16544u);
    st32((c.r[19].w[0] + 232u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 236u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 237u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 238u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B04ECu); st8((c.r[19].w[0] + 239u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004B04ECu) [[unlikely]] return; }
L_004B04EC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_004B0504; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0500u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004B0500u) [[unlikely]] return; }
L_004B0500:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_004B0504:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_004B0518; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0514u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004B0514u) [[unlikely]] return; }
L_004B0514:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_004B0518:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], 0u - 2u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[4], c.r[19].w[0] + 240u);
    st32((c.r[19].w[0] + 256u), 0u);
    st32((c.r[19].w[0] + 260u), 0u);
    c.r[6].d[0] = ld8((c.r[19].w[0] + 172u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[19].w[0] + 172u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0554u); st32((c.r[19].w[0] + 224u), 0u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x004B0554u) [[unlikely]] return; }
L_004B0554:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[19].w[0] + 229u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == 0ull; st8((c.r[19].w[0] + 230u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004B056C; } }
    set32(c.r[16], c.r[19].w[0] + 60u);
    c.budget -= 1;
L_004B056C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0578u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x004B0578u) [[unlikely]] return; }
L_004B0578:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0588u); set32(c.r[5], c.r[5].w[0] - 3907u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x004B0588u) [[unlikely]] return; }
L_004B0588:
    set32(c.r[2], 0u + 16u);
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    st16((c.r[29].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 84u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 100u)));  goto L_004B05B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B05A8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B05A8u) [[unlikely]] return; }
L_004B05A8:
    set32(c.r[2], c.r[29].w[0] + 84u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
L_004B05B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B05CCu); st32((c.r[2].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004B05CCu) [[unlikely]] return; }
L_004B05CC:
    st32((c.r[19].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B05DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004B05DCu) [[unlikely]] return; }
L_004B05DC:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004B0600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29592u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_004B061C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004B062C; } }
L_004B061C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0624u);  if (depth < kMaxDepth) unit_001B(c, 175u, depth + 1u); else { c.pc = 0x0016D7A0u; return; } if (c.pc != 0x004B0624u) [[unlikely]] return; }
L_004B0624:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_004B062C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004B0640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0664u); set32(c.r[4], c.r[4].w[0] - 4336u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004B0664u) [[unlikely]] return; }
L_004B0664:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004B0674; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004B0684; } }
L_004B0674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B067Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 177u, depth + 1u); else { c.pc = 0x0016D800u; return; } if (c.pc != 0x004B067Cu) [[unlikely]] return; }
L_004B067C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004B0684:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B06A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30996u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004B06B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29592u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_004B06CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004B06D4; } }
L_004B06CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B06D4u);  if (depth < kMaxDepth) unit_001B(c, 181u, depth + 1u); else { c.pc = 0x0016D8A0u; return; } if (c.pc != 0x004B06D4u) [[unlikely]] return; }
L_004B06D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004B06E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29592u)));  c.pc = t; return; }
L_004B06F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 4304u);  c.pc = t; return; }
L_004B0700:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[4].w[0] + 172u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[4].w[0] + 188u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[4].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    st32((c.r[4].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[4].w[0] + 200u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    st32((c.r[4].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 22;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 37u);  goto L_004B075C; }
    set32(c.r[5], ld32((c.r[5].w[0] + 44u)));
    c.budget -= 1;
L_004B075C:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 208u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00105240u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 129u, depth); }
L_004B0770:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 140u);  c.pc = t; return; }
L_004B0780:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 160u));  c.pc = t; return; }
L_004B0790:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 164u));  c.pc = t; return; }
L_004B07A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 204u)));  c.pc = t; return; }
L_004B07B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AE840u | kUnwind; return; } [[clang::musttail]] return unit_00EB(c, 330u, depth); }
L_004B07C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B00A0u | kUnwind; return; } goto L_004B00A0; }
L_004B07D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004B0860; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 25776u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004B0848; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 1;
L_004B0800:
    set32(c.r[2], c.r[2].w[0] - 16384u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004B0848; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17776u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004B0848; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 18208u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004B0848; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004B0848; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0848u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B0848u) [[unlikely]] return; }
L_004B0848:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004B0864; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0860u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004B0860u) [[unlikely]] return; }
L_004B0860:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004B0864:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B0880:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 18;
    { const bool t = c.r[19].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004B0914; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B08D0u); set32(c.r[4], 0u + 360u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004B08D0u) [[unlikely]] return; }
L_004B08D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004B0914; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 3680u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B08F4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001B1370u; return; } if (c.pc != 0x004B08F4u) [[unlikely]] return; }
L_004B08F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 25744u);
    set32(c.r[2], c.r[2].w[0] - 25720u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 352u), 0u);
    st32((c.r[19].w[0] + 356u), 0u);
    c.budget -= 8;
L_004B0914:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B092Cu); c.r[8].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 100u, depth + 1u); else { c.pc = 0x001ADE10u; return; } if (c.pc != 0x004B092Cu) [[unlikely]] return; }
L_004B092C:
    set32(c.r[16], ld32((c.r[28].w[0] - 28816u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 3679u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0948u); set32(c.r[4], c.r[16].w[0] + 2840u);  if (depth < kMaxDepth) unit_0023(c, 112u, depth + 1u); else { c.pc = 0x0018DCE0u; return; } if (c.pc != 0x004B0948u) [[unlikely]] return; }
L_004B0948:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[22].d[0] = 0ull + 0ull;  goto L_004B0968; }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[22], ld32((c.r[2].w[0] + 1452u)));
    c.budget -= 5;
L_004B0968:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0980u); st32((c.r[29].w[0] + 264u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x004B0980u) [[unlikely]] return; }
L_004B0980:
    set32(c.r[4], ld32((c.r[21].w[0] + 100u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[21].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 3663u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0998u); set32(c.r[7], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004B0998u) [[unlikely]] return; }
L_004B0998:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 100u)));  goto L_004B09C0; }
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 241u);  goto L_004B09B4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 1;
L_004B09B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B09BCu); set32(c.r[5], c.r[29].w[0] + 268u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x004B09BCu) [[unlikely]] return; }
L_004B09BC:
    set32(c.r[4], ld32((c.r[21].w[0] + 100u)));
    c.budget -= 1;
L_004B09C0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[21].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 3652u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B09D4u); set32(c.r[7], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004B09D4u) [[unlikely]] return; }
L_004B09D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[2] = ld32((c.r[29].w[0] + 268u));  goto L_004B09FC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 241u);  goto L_004B09F0; }
    set32(c.r[4], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 1;
L_004B09F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B09F8u); set32(c.r[5], c.r[29].w[0] + 264u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x004B09F8u) [[unlikely]] return; }
L_004B09F8:
    c.f[2] = ld32((c.r[29].w[0] + 268u));
    c.budget -= 1;
L_004B09FC:
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[29].w[0] + 264u));  goto L_004B0B74; }
    set32(c.r[4], 0u + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0A24u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004B0A24u) [[unlikely]] return; }
L_004B0A24:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[25], ld32((c.r[22].w[0])));  goto L_004B0A54; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 3680u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0A4Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001B1370u; return; } if (c.pc != 0x004B0A4Cu) [[unlikely]] return; }
L_004B0A4C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[22].w[0])));
    c.budget -= 2;
L_004B0A54:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0A70u); c.r[8].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B0A70u) [[unlikely]] return; }
L_004B0A70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 212u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 232u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.f[20] = ld32((c.r[29].w[0] + 268u));
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0] + 228u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 234u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004B0AA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0AA0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B0AA0u) [[unlikely]] return; }
L_004B0AA0:
    set32(c.r[2], c.r[29].w[0] + 212u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.budget -= 2;
L_004B0AA8:
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[5], c.r[29].w[0] + 212u);
    st32((c.r[2].w[0]), c.f[20]);
    set32(c.r[30], ld32((c.r[18].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    set32(c.r[4], c.r[30].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 12;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[23], ld32((c.r[29].w[0] + 212u)));  goto L_004B0B08; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0AE4u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B0AE4u) [[unlikely]] return; }
L_004B0AE4:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004B0B00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0AFCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B0AFCu) [[unlikely]] return; }
L_004B0AFC:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004B0B00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004B0B2C; } }
L_004B0B08:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0B14u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004B0B14u) [[unlikely]] return; }
L_004B0B14:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0B28u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B0B28u) [[unlikely]] return; }
L_004B0B28:
    st32((c.r[16].w[0] + 4u), c.r[23].w[0]);
    c.budget -= 1;
L_004B0B2C:
    set32(c.r[25], ld32((c.r[18].w[0] + 60u)));
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0B40u); set32(c.r[4], c.r[18].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B0B40u) [[unlikely]] return; }
L_004B0B40:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 208u), c.r[3].w[0]);  if (t) { goto L_004B0B70; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[2], c.r[29].w[0] + 212u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_004B0B70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0B70u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B0B70u) [[unlikely]] return; }
L_004B0B70:
    c.f[2] = ld32((c.r[29].w[0] + 264u));
    c.budget -= 1;
L_004B0B74:
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[19].w[0] + 352u), c.r[18].w[0]);  goto L_004B0CEC; }
    set32(c.r[4], 0u + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0B9Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004B0B9Cu) [[unlikely]] return; }
L_004B0B9C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[25], ld32((c.r[22].w[0])));  goto L_004B0BCC; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 3680u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0BC4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001B1370u; return; } if (c.pc != 0x004B0BC4u) [[unlikely]] return; }
L_004B0BC4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[22].w[0])));
    c.budget -= 2;
L_004B0BCC:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0BE8u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B0BE8u) [[unlikely]] return; }
L_004B0BE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 180u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 200u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.f[20] = ld32((c.r[29].w[0] + 264u));
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0] + 196u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 202u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004B0C20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0C18u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B0C18u) [[unlikely]] return; }
L_004B0C18:
    set32(c.r[2], c.r[29].w[0] + 180u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 2;
L_004B0C20:
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[5], c.r[29].w[0] + 180u);
    st32((c.r[2].w[0]), c.f[20]);
    set32(c.r[20], ld32((c.r[17].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    set32(c.r[4], c.r[20].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 12;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[21], ld32((c.r[29].w[0] + 180u)));  goto L_004B0C80; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0C5Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B0C5Cu) [[unlikely]] return; }
L_004B0C5C:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004B0C78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0C74u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B0C74u) [[unlikely]] return; }
L_004B0C74:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004B0C78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004B0CA4; } }
L_004B0C80:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0C8Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004B0C8Cu) [[unlikely]] return; }
L_004B0C8C:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0CA0u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B0CA0u) [[unlikely]] return; }
L_004B0CA0:
    st32((c.r[16].w[0] + 4u), c.r[21].w[0]);
    c.budget -= 1;
L_004B0CA4:
    set32(c.r[25], ld32((c.r[17].w[0] + 60u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0CB8u); set32(c.r[4], c.r[17].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B0CB8u) [[unlikely]] return; }
L_004B0CB8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_004B0CE8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[2], c.r[29].w[0] + 180u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_004B0CE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0CE8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B0CE8u) [[unlikely]] return; }
L_004B0CE8:
    st32((c.r[19].w[0] + 352u), c.r[18].w[0]);
    c.budget -= 1;
L_004B0CEC:
    st32((c.r[19].w[0] + 356u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 356u)));  goto L_004B0D08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0D04u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 246u, depth + 1u); else { c.pc = 0x001A7D10u; return; } if (c.pc != 0x004B0D04u) [[unlikely]] return; }
L_004B0D04:
    set32(c.r[4], ld32((c.r[19].w[0] + 356u)));
    c.budget -= 1;
L_004B0D08:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_004B0D1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0D18u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 246u, depth + 1u); else { c.pc = 0x001A7D10u; return; } if (c.pc != 0x004B0D18u) [[unlikely]] return; }
L_004B0D18:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_004B0D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0D24u);  if (depth < kMaxDepth) unit_00EC(c, 86u, depth + 1u); else { c.pc = 0x004B0E20u; return; } if (c.pc != 0x004B0D24u) [[unlikely]] return; }
L_004B0D24:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0D30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B0D30u) [[unlikely]] return; }
L_004B0D30:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_004B0D70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004B0D94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 148u)));  if (t) { goto L_004B0DA0; } }
L_004B0D94:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 144u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_004B0DA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 352u)));  goto L_004B0DB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0DB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 38u, depth + 1u); else { c.pc = 0x001B0CC0u; return; } if (c.pc != 0x004B0DB0u) [[unlikely]] return; }
L_004B0DB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004B0E04; } }
L_004B0DB8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004B0DCC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 356u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B0E00; } }
L_004B0DCC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 356u)));  goto L_004B0DE8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0DE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B0DE4u) [[unlikely]] return; }
L_004B0DE4:
    set32(c.r[4], ld32((c.r[16].w[0] + 356u)));
    c.budget -= 1;
L_004B0DE8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B0E00; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0E00u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B0E00u) [[unlikely]] return; }
L_004B0E00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004B0E04:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B0E20:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0E70u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004B0E70u) [[unlikely]] return; }
L_004B0E70:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0E7Cu); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x004B0E7Cu) [[unlikely]] return; }
L_004B0E7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 336u);  goto L_004B0EA4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004B0EA0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0EA0u); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004B0EA0u) [[unlikely]] return; }
L_004B0EA0:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 1;
L_004B0EA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0EACu); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x004B0EACu) [[unlikely]] return; }
L_004B0EAC:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    c.f[20] = 0u;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B14BC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B14BC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0ED8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B0ED8u) [[unlikely]] return; }
L_004B0ED8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0EE8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 76u, depth + 1u); else { c.pc = 0x0014C8D0u; return; } if (c.pc != 0x004B0EE8u) [[unlikely]] return; }
L_004B0EE8:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0EFCu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B0EFCu) [[unlikely]] return; }
L_004B0EFC:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_004B0F14; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_004B0F14:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_004B0F28; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_004B0F28:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    c.r[17].d[0] = c.r[2].d[0] << 48;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0F40u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B0F40u) [[unlikely]] return; }
L_004B0F40:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 46u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0F50u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 88u, depth + 1u); else { c.pc = 0x0014CC40u; return; } if (c.pc != 0x004B0F50u) [[unlikely]] return; }
L_004B0F50:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0F64u); c.f[23] = c.f[0];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B0F64u) [[unlikely]] return; }
L_004B0F64:
    set32(c.r[4], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B0F78u); c.f[22] = c.f[0];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B0F78u) [[unlikely]] return; }
L_004B0F78:
    c.f[1] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = fp::cvt_s_w(c.f[1]);
    c.f[2] = ld32((c.r[29].w[0] + 336u));
    c.f[1] = c.r[2].w[0];
    c.f[21] = c.f[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[4] = c.f[1] & fp::kAbs;
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[3]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[3], c.f[22]));
    c.facc = fp::add(c.f[1], c.f[3]);
    c.f[1] = fp::cvt_w_s(c.f[2]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[3], c.f[0]));
    set32(c.r[2], c.f[1]);
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    set32(c.r[2], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.r[18].d[0] = c.r[2].d[0] << 48;
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 27;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (t) { goto L_004B1250; } }
    c.f[0] = c.r[18].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[22] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 292u);
    set32(c.r[2], 0u + 16u);
    st16((c.r[29].w[0] + 312u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 308u), c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 314u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004B1020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1018u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B1018u) [[unlikely]] return; }
L_004B1018:
    set32(c.r[2], c.r[29].w[0] + 292u);
    st32((c.r[29].w[0] + 308u), c.r[2].w[0]);
    c.budget -= 2;
L_004B1020:
    set32(c.r[2], ld32((c.r[29].w[0] + 308u)));
    c.budget -= 1;
L_004B1024:
    set32(c.r[5], c.r[29].w[0] + 292u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), c.f[22]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 314u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[20], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 308u)));
    c.budget -= 15;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[21], ld32((c.r[29].w[0] + 292u)));  goto L_004B1090; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B106Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B106Cu) [[unlikely]] return; }
L_004B106C:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_004B1088; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1084u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B1084u) [[unlikely]] return; }
L_004B1084:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_004B1088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004B10B4; } }
L_004B1090:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B109Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004B109Cu) [[unlikely]] return; }
L_004B109C:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 308u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B10B0u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B10B0u) [[unlikely]] return; }
L_004B10B0:
    st32((c.r[17].w[0] + 4u), c.r[21].w[0]);
    c.budget -= 1;
L_004B10B4:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B10C8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B10C8u) [[unlikely]] return; }
L_004B10C8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 314u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 288u), c.r[3].w[0]);  if (t) { goto L_004B10F8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 308u)));
    set32(c.r[2], c.r[29].w[0] + 292u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 356u)));  goto L_004B10FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B10F8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B10F8u) [[unlikely]] return; }
L_004B10F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 356u)));
    c.budget -= 1;
L_004B10FC:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B110Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B110Cu) [[unlikely]] return; }
L_004B110C:
    c.f[2] = fp::mul(c.f[23], c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 260u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 280u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 276u), c.r[4].w[0]);
    c.f[1] = c.r[3].w[0];
    st16((c.r[29].w[0] + 282u), static_cast<std::uint16_t>(c.r[2].w[0]));
    fpu_div(c, 2u, c.f[2], c.f[1]);
    c.f[1] = c.r[19].w[0];
    c.f[22] = fp::cvt_s_w(c.f[1]);
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[20]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[21], c.f[0]));
    c.budget -= 21;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; c.f[20] = fp::sub(c.f[0], c.f[2]);  if (t) { goto L_004B1170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1168u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B1168u) [[unlikely]] return; }
L_004B1168:
    set32(c.r[2], c.r[29].w[0] + 260u);
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    c.budget -= 2;
L_004B1170:
    set32(c.r[2], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[5], c.r[29].w[0] + 260u);
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), c.f[22]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 282u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 276u)));
    c.budget -= 16;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 260u)));  goto L_004B11E0; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B11BCu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B11BCu) [[unlikely]] return; }
L_004B11BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004B11D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B11D4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B11D4u) [[unlikely]] return; }
L_004B11D4:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004B11D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004B1204; } }
L_004B11E0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B11ECu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004B11ECu) [[unlikely]] return; }
L_004B11EC:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 276u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1200u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B1200u) [[unlikely]] return; }
L_004B1200:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_004B1204:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1218u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B1218u) [[unlikely]] return; }
L_004B1218:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 282u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 256u), c.r[4].w[0]);  if (t) { goto L_004B17DC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[3], c.r[29].w[0] + 260u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_004B17E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1248u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B1248u) [[unlikely]] return; }
L_004B1248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B17DC; } }
L_004B1250:
    c.f[0] = c.r[19].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[21] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 228u);
    set32(c.r[2], 0u + 16u);
    st16((c.r[29].w[0] + 248u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 244u), c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 250u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004B128C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1284u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B1284u) [[unlikely]] return; }
L_004B1284:
    set32(c.r[2], c.r[29].w[0] + 228u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 2;
L_004B128C:
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[5], c.r[29].w[0] + 228u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), c.f[21]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 250u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[20], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[19].w[0] << 5);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 16;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[21], ld32((c.r[29].w[0] + 228u)));  goto L_004B12FC; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B12D8u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B12D8u) [[unlikely]] return; }
L_004B12D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_004B12F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B12F0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B12F0u) [[unlikely]] return; }
L_004B12F0:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_004B12F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004B1320; } }
L_004B12FC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1308u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004B1308u) [[unlikely]] return; }
L_004B1308:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B131Cu); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B131Cu) [[unlikely]] return; }
L_004B131C:
    st32((c.r[17].w[0] + 4u), c.r[21].w[0]);
    c.budget -= 1;
L_004B1320:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1334u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B1334u) [[unlikely]] return; }
L_004B1334:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 250u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 224u), c.r[3].w[0]);  if (t) { goto L_004B1364; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[2], c.r[29].w[0] + 228u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 352u)));  goto L_004B1368; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1364u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B1364u) [[unlikely]] return; }
L_004B1364:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    c.budget -= 1;
L_004B1368:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1378u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B1378u) [[unlikely]] return; }
L_004B1378:
    c.f[2] = fp::mul(c.f[23], c.f[22]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 196u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 212u), c.r[4].w[0]);
    c.f[1] = c.r[3].w[0];
    st16((c.r[29].w[0] + 218u), static_cast<std::uint16_t>(c.r[2].w[0]));
    fpu_div(c, 2u, c.f[2], c.f[1]);
    c.f[1] = c.r[18].w[0];
    c.f[21] = fp::cvt_s_w(c.f[1]);
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[20]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[22], c.f[0]));
    c.budget -= 21;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; c.f[20] = fp::add(c.f[0], c.f[2]);  if (t) { goto L_004B13DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B13D4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B13D4u) [[unlikely]] return; }
L_004B13D4:
    set32(c.r[2], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 2;
L_004B13DC:
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[5], c.r[29].w[0] + 196u);
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), c.f[21]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 16;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 196u)));  goto L_004B144C; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1428u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B1428u) [[unlikely]] return; }
L_004B1428:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004B1444; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1440u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B1440u) [[unlikely]] return; }
L_004B1440:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004B1444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004B1470; } }
L_004B144C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1458u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004B1458u) [[unlikely]] return; }
L_004B1458:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B146Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B146Cu) [[unlikely]] return; }
L_004B146C:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_004B1470:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1484u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B1484u) [[unlikely]] return; }
L_004B1484:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 192u), c.r[4].w[0]);  if (t) { goto L_004B17DC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[3], c.r[29].w[0] + 196u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B17DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B14B4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B14B4u) [[unlikely]] return; }
L_004B14B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B17DC; } }
L_004B14BC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B17DC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B14D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B14D4u) [[unlikely]] return; }
L_004B14D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B14E4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 76u, depth + 1u); else { c.pc = 0x0014C8D0u; return; } if (c.pc != 0x004B14E4u) [[unlikely]] return; }
L_004B14E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B14F8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B14F8u) [[unlikely]] return; }
L_004B14F8:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_004B1510; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_004B1510:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_004B1524; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_004B1524:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    c.r[17].d[0] = c.r[2].d[0] << 48;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B153Cu); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B153Cu) [[unlikely]] return; }
L_004B153C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 46u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B154Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 88u, depth + 1u); else { c.pc = 0x0014CC40u; return; } if (c.pc != 0x004B154Cu) [[unlikely]] return; }
L_004B154C:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1560u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B1560u) [[unlikely]] return; }
L_004B1560:
    c.f[1] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = fp::cvt_s_w(c.f[1]);
    c.f[2] = ld32((c.r[29].w[0] + 336u));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[2] = c.f[1] & fp::kAbs;
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[3]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_004B16C8; } }
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 164u);
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 184u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 180u), c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 186u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004B15E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B15E0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B15E0u) [[unlikely]] return; }
L_004B15E0:
    set32(c.r[2], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 2;
L_004B15E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[5], c.r[29].w[0] + 164u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), c.f[20]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 186u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 16;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 164u)));  goto L_004B1658; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1634u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B1634u) [[unlikely]] return; }
L_004B1634:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004B1650; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B164Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B164Cu) [[unlikely]] return; }
L_004B164C:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004B1650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004B167C; } }
L_004B1658:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1664u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004B1664u) [[unlikely]] return; }
L_004B1664:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1678u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B1678u) [[unlikely]] return; }
L_004B1678:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_004B167C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1690u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B1690u) [[unlikely]] return; }
L_004B1690:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 186u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 160u), c.r[4].w[0]);  if (t) { goto L_004B17DC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[3], c.r[29].w[0] + 164u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B17DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B16C0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B16C0u) [[unlikely]] return; }
L_004B16C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B17DC; } }
L_004B16C8:
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 152u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 148u), c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 154u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004B1704; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B16FCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B16FCu) [[unlikely]] return; }
L_004B16FC:
    set32(c.r[2], c.r[29].w[0] + 132u);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 2;
L_004B1704:
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[5], c.r[29].w[0] + 132u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), c.f[20]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 154u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 16;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 132u)));  goto L_004B1774; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1750u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B1750u) [[unlikely]] return; }
L_004B1750:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004B176C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1768u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B1768u) [[unlikely]] return; }
L_004B1768:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004B176C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004B1798; } }
L_004B1774:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1780u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004B1780u) [[unlikely]] return; }
L_004B1780:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1794u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B1794u) [[unlikely]] return; }
L_004B1794:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_004B1798:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B17ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B17ACu) [[unlikely]] return; }
L_004B17AC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 154u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 128u), c.r[4].w[0]);  if (t) { goto L_004B17DC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[3], c.r[29].w[0] + 132u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B17DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B17DCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B17DCu) [[unlikely]] return; }
L_004B17DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_004B17E0:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_004B1810:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1838u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 248u, depth + 1u); else { c.pc = 0x001AFCC0u; return; } if (c.pc != 0x004B1838u) [[unlikely]] return; }
L_004B1838:
    set32(c.r[3], ld32((c.r[19].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 120u)));  goto L_004B1854; }
    set32(c.r[3], ld32((c.r[19].w[0] + 356u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_004B1B18; }
    set32(c.r[3], ld32((c.r[19].w[0] + 120u)));
    c.budget -= 1;
L_004B1854:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_004B1B04; }
    set32(c.r[2], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1870u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0013(c, 344u, depth + 1u); else { c.pc = 0x0014EB90u; return; } if (c.pc != 0x004B1870u) [[unlikely]] return; }
L_004B1870:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B187Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0021(c, 30u, depth + 1u); else { c.pc = 0x00184600u; return; } if (c.pc != 0x004B187Cu) [[unlikely]] return; }
L_004B187C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_004B18A4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004B18A0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B18A0u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0021(c, 26u, depth + 1u); else { c.pc = 0x001844E0u; return; } if (c.pc != 0x004B18A0u) [[unlikely]] return; }
L_004B18A0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_004B18A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B18ACu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0013(c, 342u, depth + 1u); else { c.pc = 0x0014EB30u; return; } if (c.pc != 0x004B18ACu) [[unlikely]] return; }
L_004B18AC:
    set32(c.r[3], ld32((c.r[19].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 356u)));  goto L_004B19D8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 148u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 168u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 164u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004B18EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B18E4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B18E4u) [[unlikely]] return; }
L_004B18E4:
    set32(c.r[2], c.r[29].w[0] + 148u);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 2;
L_004B18EC:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[5], c.r[29].w[0] + 148u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[17], ld32((c.r[19].w[0] + 352u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    set32(c.r[18], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 20;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 148u)));  goto L_004B196C; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1948u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B1948u) [[unlikely]] return; }
L_004B1948:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004B1964; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1960u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B1960u) [[unlikely]] return; }
L_004B1960:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004B1964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004B1990; } }
L_004B196C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1978u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004B1978u) [[unlikely]] return; }
L_004B1978:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B198Cu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B198Cu) [[unlikely]] return; }
L_004B198C:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_004B1990:
    set32(c.r[25], ld32((c.r[17].w[0] + 60u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B19A4u); set32(c.r[4], c.r[17].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B19A4u) [[unlikely]] return; }
L_004B19A4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 144u), c.r[4].w[0]);  if (t) { goto L_004B19D4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[3], c.r[29].w[0] + 148u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B19D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B19D4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B19D4u) [[unlikely]] return; }
L_004B19D4:
    set32(c.r[3], ld32((c.r[19].w[0] + 356u)));
    c.budget -= 1;
L_004B19D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B1B14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 132u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004B1A14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1A0Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B1A0Cu) [[unlikely]] return; }
L_004B1A0C:
    set32(c.r[2], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 2;
L_004B1A14:
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[5], c.r[29].w[0] + 116u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[17], ld32((c.r[19].w[0] + 356u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[18], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 20;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 116u)));  goto L_004B1A94; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1A70u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B1A70u) [[unlikely]] return; }
L_004B1A70:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004B1A8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1A88u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B1A88u) [[unlikely]] return; }
L_004B1A88:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004B1A8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004B1AB8; } }
L_004B1A94:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1AA0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004B1AA0u) [[unlikely]] return; }
L_004B1AA0:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1AB4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B1AB4u) [[unlikely]] return; }
L_004B1AB4:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_004B1AB8:
    set32(c.r[25], ld32((c.r[17].w[0] + 60u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1ACCu); set32(c.r[4], c.r[17].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B1ACCu) [[unlikely]] return; }
L_004B1ACC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 112u), c.r[4].w[0]);  if (t) { goto L_004B1B14; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[3], c.r[29].w[0] + 116u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B1B14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1AFCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B1AFCu) [[unlikely]] return; }
L_004B1AFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B1B14; } }
L_004B1B04:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_004B1B14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1B14u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EC(c, 86u, depth + 1u); else { c.pc = 0x004B0E20u; return; } if (c.pc != 0x004B1B14u) [[unlikely]] return; }
L_004B1B14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_004B1B18:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_004B1B40:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 352u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_004B1B80; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 356u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_004B1D40; }
L_004B1B80:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1B8Cu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x004B1B8Cu) [[unlikely]] return; }
L_004B1B8C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1B98u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x004B1B98u) [[unlikely]] return; }
L_004B1B98:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1BACu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00E2(c, 238u, depth + 1u); else { c.pc = 0x0048A020u; return; } if (c.pc != 0x004B1BACu) [[unlikely]] return; }
L_004B1BAC:
    set32(c.r[4], ld32((c.r[18].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004B1CA4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1BC8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B1BC8u) [[unlikely]] return; }
L_004B1BC8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004B1C5C; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_004B1C60; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B1C5C; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1C00u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0010(c, 434u, depth + 1u); else { c.pc = 0x001433D0u; return; } if (c.pc != 0x004B1C00u) [[unlikely]] return; }
L_004B1C00:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1C0Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000A(c, 6u, depth + 1u); else { c.pc = 0x001280C0u; return; } if (c.pc != 0x004B1C0Cu) [[unlikely]] return; }
L_004B1C0C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_004B1C4C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 97u);  goto L_004B1C30; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_004B1C30:
    set32(c.r[4], ld32((c.r[18].w[0] + 352u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1C44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B1C44u) [[unlikely]] return; }
L_004B1C44:
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 2;
L_004B1C4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1C54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B1C54u) [[unlikely]] return; }
L_004B1C54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 356u)));  if (t) { goto L_004B1CA8; } }
L_004B1C5C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_004B1C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1C68u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000A(c, 6u, depth + 1u); else { c.pc = 0x001280C0u; return; } if (c.pc != 0x004B1C68u) [[unlikely]] return; }
L_004B1C68:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B1CA4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 129u);  goto L_004B1C8C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_004B1C8C:
    set32(c.r[4], ld32((c.r[18].w[0] + 352u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1CA0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B1CA0u) [[unlikely]] return; }
L_004B1CA0:
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004B1CA4:
    set32(c.r[4], ld32((c.r[18].w[0] + 356u)));
    c.budget -= 1;
L_004B1CA8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B1CD8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 113u);  goto L_004B1CC4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_004B1CC4:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1CD4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B1CD4u) [[unlikely]] return; }
L_004B1CD4:
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004B1CD8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 144u)));  goto L_004B1CEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1CE8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EC(c, 86u, depth + 1u); else { c.pc = 0x004B0E20u; return; } if (c.pc != 0x004B1CE8u) [[unlikely]] return; }
L_004B1CE8:
    set32(c.r[2], ld32((c.r[18].w[0] + 144u)));
    c.budget -= 1;
L_004B1CEC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 152u)));  goto L_004B1D1C; }
    st8((c.r[18].w[0] + 145u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull & 127ull;
    c.r[4].d[0] = ld8((c.r[18].w[0] + 144u));
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 255u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 144u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004B1D24; } }
L_004B1D1C:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 148u), 0u);
    c.budget -= 2;
L_004B1D24:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1D30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B1D30u) [[unlikely]] return; }
L_004B1D30:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1D3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B1D3Cu) [[unlikely]] return; }
L_004B1D3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_004B1D40:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004B1D60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004B1DF8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 25744u);
    set32(c.r[2], c.r[2].w[0] - 25720u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 352u)));
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 352u), 0u);  goto L_004B1DB4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1DB0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B1DB0u) [[unlikely]] return; }
L_004B1DB0:
    st32((c.r[17].w[0] + 352u), 0u);
    c.budget -= 1;
L_004B1DB4:
    set32(c.r[4], ld32((c.r[17].w[0] + 356u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004B1DD4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1DD0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B1DD0u) [[unlikely]] return; }
L_004B1DD0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004B1DD4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1DE0u); st32((c.r[17].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_002C(c, 55u, depth + 1u); else { c.pc = 0x001B1160u; return; } if (c.pc != 0x004B1DE0u) [[unlikely]] return; }
L_004B1DE0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004B1DFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1DF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004B1DF8u) [[unlikely]] return; }
L_004B1DF8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004B1DFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B1E10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29588u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_004B1E2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004B1E3C; } }
L_004B1E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1E34u);  if (depth < kMaxDepth) unit_002C(c, 98u, depth + 1u); else { c.pc = 0x001B1B10u; return; } if (c.pc != 0x004B1E34u) [[unlikely]] return; }
L_004B1E34:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_004B1E3C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004B1E50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1E74u); set32(c.r[4], c.r[4].w[0] - 3744u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004B1E74u) [[unlikely]] return; }
L_004B1E74:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004B1E84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004B1E94; } }
L_004B1E84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1E8Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 100u, depth + 1u); else { c.pc = 0x001B1B70u; return; } if (c.pc != 0x004B1E8Cu) [[unlikely]] return; }
L_004B1E8C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004B1E94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B1EB0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30844u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004B1EC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29588u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_004B1EDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004B1EE4; } }
L_004B1EDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1EE4u);  if (depth < kMaxDepth) unit_002C(c, 104u, depth + 1u); else { c.pc = 0x001B1C10u; return; } if (c.pc != 0x004B1EE4u) [[unlikely]] return; }
L_004B1EE4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004B1EF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29588u)));  c.pc = t; return; }
L_004B1F00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 3712u);  c.pc = t; return; }
L_004B1F10:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B1810u | kUnwind; return; } goto L_004B1810; }
L_004B1F20:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B1D60u | kUnwind; return; } goto L_004B1D60; }
L_004B1F30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004B1FB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 25584u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004B1F98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27552u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1F74u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x004B1F74u) [[unlikely]] return; }
L_004B1F74:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_004B1F9C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31120u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004B1F98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004B1F98:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_004B1F9C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004B1FB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B1FB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004B1FB0u) [[unlikely]] return; }
L_004B1FB0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004B1FB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B1FD0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2004u); set32(c.r[4], c.r[29].w[0] + 208u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B2004u) [[unlikely]] return; }
L_004B2004:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[5].w[0] - 3552u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2018u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0027(c, 9u, depth + 1u); else { c.pc = 0x0019C0F0u; return; } if (c.pc != 0x004B2018u) [[unlikely]] return; }
L_004B2018:
    set32(c.r[6], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B202Cu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x004B202Cu) [[unlikely]] return; }
L_004B202C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2034u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 185u, depth + 1u); else { c.pc = 0x0018AB20u; return; } if (c.pc != 0x004B2034u) [[unlikely]] return; }
L_004B2034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B203Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 196u, depth + 1u); else { c.pc = 0x00415660u; return; } if (c.pc != 0x004B203Cu) [[unlikely]] return; }
L_004B203C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_004B207C; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B205Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B205Cu) [[unlikely]] return; }
L_004B205C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2068u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B2068u) [[unlikely]] return; }
L_004B2068:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2074u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B2074u) [[unlikely]] return; }
L_004B2074:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_004B221C; } }
L_004B207C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2084u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x004B2084u) [[unlikely]] return; }
L_004B2084:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2094u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_00EC(c, 235u, depth + 1u); else { c.pc = 0x004B2240u; return; } if (c.pc != 0x004B2094u) [[unlikely]] return; }
L_004B2094:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[29].w[0] + 188u), 0u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B20BCu); set32(c.r[5], c.r[5].w[0] - 3550u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B20BCu) [[unlikely]] return; }
L_004B20BC:
    set32(c.r[4], c.r[20].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B20C8u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004B20C8u) [[unlikely]] return; }
L_004B20C8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B20D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004B20D4u) [[unlikely]] return; }
L_004B20D4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B20E0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x004B20E0u) [[unlikely]] return; }
L_004B20E0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B20F0u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_00EC(c, 235u, depth + 1u); else { c.pc = 0x004B2240u; return; } if (c.pc != 0x004B20F0u) [[unlikely]] return; }
L_004B20F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[29].w[0] + 156u), 0u);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2118u); set32(c.r[5], c.r[5].w[0] - 3542u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B2118u) [[unlikely]] return; }
L_004B2118:
    set32(c.r[4], c.r[20].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2124u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004B2124u) [[unlikely]] return; }
L_004B2124:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2130u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004B2130u) [[unlikely]] return; }
L_004B2130:
    set32(c.r[18], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2140u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x004B2140u) [[unlikely]] return; }
L_004B2140:
    st16((c.r[29].w[0] + 120u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = ld8((c.r[28].w[0] - 29580u));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004B2178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2170u); set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B2170u) [[unlikely]] return; }
L_004B2170:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_004B2178:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B21A8u); set32(c.r[5], c.r[5].w[0] - 3537u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B21A8u) [[unlikely]] return; }
L_004B21A8:
    set32(c.r[4], c.r[20].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B21B4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004B21B4u) [[unlikely]] return; }
L_004B21B4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B21C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004B21C0u) [[unlikely]] return; }
L_004B21C0:
    st32((c.r[20].w[0] + 64u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004B21EC; } }
L_004B21CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B21D4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 152u, depth + 1u); else { c.pc = 0x00189FB0u; return; } if (c.pc != 0x004B21D4u) [[unlikely]] return; }
L_004B21D4:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B21E8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B21E8u) [[unlikely]] return; }
L_004B21E8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004B21EC:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B21CCu | kUnwind; return; } goto L_004B21CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2200u); set32(c.r[4], c.r[20].w[0] + 4u);  if (depth < kMaxDepth) unit_000C(c, 347u, depth + 1u); else { c.pc = 0x00133590u; return; } if (c.pc != 0x004B2200u) [[unlikely]] return; }
L_004B2200:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B220Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B220Cu) [[unlikely]] return; }
L_004B220C:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2218u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B2218u) [[unlikely]] return; }
L_004B2218:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_004B221C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_004B2240:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[19].w[0] + 4u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st16((c.r[4].w[0] + 24u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[2], 0u + 256u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st16((c.r[4].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 19;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[5].w[0] + 1u);  goto L_004B2290; }
    set32(c.r[17], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 1;
L_004B2290:
    set32(c.r[2], 0u + 512u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B22A0u); st16((c.r[19].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x004B22A0u) [[unlikely]] return; }
L_004B22A0:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[18], 0u + 16u);  if (t) { goto L_004B22D4; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_004B22D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B22CCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B22CCu) [[unlikely]] return; }
L_004B22CC:
    set32(c.r[2], c.r[19].w[0] + 4u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_004B22D4:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 20u)));  goto L_004B2318; }
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[19].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 24u)));  goto L_004B2300; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B22FCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B22FCu) [[unlikely]] return; }
L_004B22FC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 24u)));
    c.budget -= 1;
L_004B2300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2308u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004B2308u) [[unlikely]] return; }
L_004B2308:
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 4;
L_004B2318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2320u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x004B2320u) [[unlikely]] return; }
L_004B2320:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004B2340:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[19].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] - 3550u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2374u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004B2374u) [[unlikely]] return; }
L_004B2374:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2380u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x004B2380u) [[unlikely]] return; }
L_004B2380:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 145u);  goto L_004B2394; }
    set32(c.r[5], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_004B2394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B239Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x004B239Cu) [[unlikely]] return; }
L_004B239C:
    set32(c.r[20], ld32((c.r[28].w[0] - 26060u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B23BCu); set32(c.r[16], c.r[2].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B23BCu) [[unlikely]] return; }
L_004B23BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B23C4u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004B23C4u) [[unlikely]] return; }
L_004B23C4:
    set32(c.r[5], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B23D0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 197u, depth + 1u); else { c.pc = 0x00415670u; return; } if (c.pc != 0x004B23D0u) [[unlikely]] return; }
L_004B23D0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);  goto L_004B23FC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B23F4u); set32(c.r[5], c.r[5].w[0] - 3527u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004B23F4u) [[unlikely]] return; }
L_004B23F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 128u)));  if (t) { goto L_004B245C; } }
L_004B23FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    fpu_div(c, 1u, c.f[0], c.f[1]);
    set32(c.r[7], 0u + 60u);
    set32(c.r[2], 0u + 100u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.r[7].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[8].d[0] = c.hi.d[0];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2458u); set32(c.r[5], c.r[5].w[0] - 3521u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x004B2458u) [[unlikely]] return; }
L_004B2458:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 1;
L_004B245C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 129u);  goto L_004B246C; }
    set32(c.r[6], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_004B246C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2478u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x004B2478u) [[unlikely]] return; }
L_004B2478:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] - 3506u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2490u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004B2490u) [[unlikely]] return; }
L_004B2490:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 113u);  goto L_004B24A4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_004B24A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B24ACu); set32(c.r[4], c.r[18].w[0] + 56u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004B24ACu) [[unlikely]] return; }
L_004B24AC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B24C4u); set32(c.r[6], c.r[6].w[0] - 3493u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004B24C4u) [[unlikely]] return; }
L_004B24C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 97u);  goto L_004B24D8; }
    set32(c.r[6], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_004B24D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B24E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x004B24E4u) [[unlikely]] return; }
L_004B24E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B24F4u); set32(c.r[5], c.r[5].w[0] - 3537u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004B24F4u) [[unlikely]] return; }
L_004B24F4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 175u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2504u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x004B2504u) [[unlikely]] return; }
L_004B2504:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 175u));  goto L_004B252C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004B2528; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 175u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2528u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x004B2528u) [[unlikely]] return; }
L_004B2528:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 175u));
    c.budget -= 1;
L_004B252C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 64u)));  goto L_004B2558; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2540u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x004B2540u) [[unlikely]] return; }
L_004B2540:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 220u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2554u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B2554u) [[unlikely]] return; }
L_004B2554:
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 1;
L_004B2558:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B256Cu); st32((c.r[19].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B256Cu) [[unlikely]] return; }
L_004B256C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2578u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B2578u) [[unlikely]] return; }
L_004B2578:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2584u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B2584u) [[unlikely]] return; }
L_004B2584:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2590u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B2590u) [[unlikely]] return; }
L_004B2590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004B25B0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B25E0u); set32(c.r[4], c.r[29].w[0] + 208u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B25E0u) [[unlikely]] return; }
L_004B25E0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B25ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x004B25ECu) [[unlikely]] return; }
L_004B25EC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B25FCu); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_00EC(c, 235u, depth + 1u); else { c.pc = 0x004B2240u; return; } if (c.pc != 0x004B25FCu) [[unlikely]] return; }
L_004B25FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[29].w[0] + 172u), 0u);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2624u); set32(c.r[5], c.r[5].w[0] - 3550u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B2624u) [[unlikely]] return; }
L_004B2624:
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2630u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004B2630u) [[unlikely]] return; }
L_004B2630:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B263Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004B263Cu) [[unlikely]] return; }
L_004B263C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[5].w[0] - 3552u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2650u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0027(c, 9u, depth + 1u); else { c.pc = 0x0019C0F0u; return; } if (c.pc != 0x004B2650u) [[unlikely]] return; }
L_004B2650:
    set32(c.r[6], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2664u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x004B2664u) [[unlikely]] return; }
L_004B2664:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2670u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x004B2670u) [[unlikely]] return; }
L_004B2670:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2680u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_00EC(c, 235u, depth + 1u); else { c.pc = 0x004B2240u; return; } if (c.pc != 0x004B2680u) [[unlikely]] return; }
L_004B2680:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[29].w[0] + 140u), 0u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B26A8u); set32(c.r[5], c.r[5].w[0] - 3542u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B26A8u) [[unlikely]] return; }
L_004B26A8:
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B26B4u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004B26B4u) [[unlikely]] return; }
L_004B26B4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B26C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004B26C0u) [[unlikely]] return; }
L_004B26C0:
    set32(c.r[17], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B26D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x004B26D0u) [[unlikely]] return; }
L_004B26D0:
    st16((c.r[29].w[0] + 104u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 84u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = ld8((c.r[28].w[0] - 29584u));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004B2708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2700u); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B2700u) [[unlikely]] return; }
L_004B2700:
    set32(c.r[2], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_004B2708:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2738u); set32(c.r[5], c.r[5].w[0] - 3537u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B2738u) [[unlikely]] return; }
L_004B2738:
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2744u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004B2744u) [[unlikely]] return; }
L_004B2744:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2750u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004B2750u) [[unlikely]] return; }
L_004B2750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2758u);  if (depth < kMaxDepth) unit_00C5(c, 196u, depth + 1u); else { c.pc = 0x00415660u; return; } if (c.pc != 0x004B2758u) [[unlikely]] return; }
L_004B2758:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004B2768; } }
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 1;
L_004B2768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2770u);  if (depth < kMaxDepth) unit_00E0(c, 311u, depth + 1u); else { c.pc = 0x00482720u; return; } if (c.pc != 0x004B2770u) [[unlikely]] return; }
L_004B2770:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2784u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B2784u) [[unlikely]] return; }
L_004B2784:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[6].w[0] - 3489u);
    set32(c.r[7], c.r[7].w[0] - 3471u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B27A4u); st32((c.r[19].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004B27A4u) [[unlikely]] return; }
L_004B27A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 177u);  goto L_004B27B8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_004B27B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B27C0u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004B27C0u) [[unlikely]] return; }
L_004B27C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B27C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 103u, depth + 1u); else { c.pc = 0x0047CD10u; return; } if (c.pc != 0x004B27C8u) [[unlikely]] return; }
L_004B27C8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29244u)));
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B27DCu); st32((c.r[28].w[0] - 29244u), 0u);  if (depth < kMaxDepth) unit_0026(c, 323u, depth + 1u); else { c.pc = 0x0019BE80u; return; } if (c.pc != 0x004B27DCu) [[unlikely]] return; }
L_004B27DC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[17].w[0] + 60u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B27F8u); c.r[9].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 306u, depth + 1u); else { c.pc = 0x0019BB20u; return; } if (c.pc != 0x004B27F8u) [[unlikely]] return; }
L_004B27F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2800u); set32(c.r[4], c.r[17].w[0] + 60u);  if (depth < kMaxDepth) unit_000F(c, 108u, depth + 1u); else { c.pc = 0x0013D410u; return; } if (c.pc != 0x004B2800u) [[unlikely]] return; }
L_004B2800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2808u); set32(c.r[4], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_000C(c, 347u, depth + 1u); else { c.pc = 0x00133590u; return; } if (c.pc != 0x004B2808u) [[unlikely]] return; }
L_004B2808:
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    st32((c.r[19].w[0] + 64u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2820u); st32((c.r[28].w[0] - 29244u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B2820u) [[unlikely]] return; }
L_004B2820:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B282Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B282Cu) [[unlikely]] return; }
L_004B282C:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2838u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B2838u) [[unlikely]] return; }
L_004B2838:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_004B2860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004B28E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 25520u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004B28C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27552u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B28A4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x004B28A4u) [[unlikely]] return; }
L_004B28A4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_004B28CC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31120u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004B28C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004B28C8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_004B28CC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004B28E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B28E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004B28E0u) [[unlikely]] return; }
L_004B28E0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004B28E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B2900:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B292Cu); set32(c.r[4], c.r[29].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B292Cu) [[unlikely]] return; }
L_004B292C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2934u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 185u, depth + 1u); else { c.pc = 0x0018AB20u; return; } if (c.pc != 0x004B2934u) [[unlikely]] return; }
L_004B2934:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 3376u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2954u); set32(c.r[7], c.r[7].w[0] - 3362u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004B2954u) [[unlikely]] return; }
L_004B2954:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 65u);  goto L_004B2968; }
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_004B2968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2970u);  if (depth < kMaxDepth) unit_00DD(c, 332u, depth + 1u); else { c.pc = 0x00476D30u; return; } if (c.pc != 0x004B2970u) [[unlikely]] return; }
L_004B2970:
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2980u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B2980u) [[unlikely]] return; }
L_004B2980:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], ld32((c.r[28].w[0] - 24136u)));  if (t) { goto L_004B29A4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[4].w[0] + 24u);  goto L_004B29A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + 8u);  if (t) { goto L_004B29A8; } }
L_004B29A4:
    set32(c.r[2], c.r[4].w[0] + 40u);
    c.budget -= 1;
L_004B29A8:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_004B29DC; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B29C8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B29C8u) [[unlikely]] return; }
L_004B29C8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B29D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B29D4u) [[unlikely]] return; }
L_004B29D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004B29E8; } }
L_004B29DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B29E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B29E4u) [[unlikely]] return; }
L_004B29E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004B29E8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004B2A00:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[18].w[0] + 56u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2A2Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004B2A2Cu) [[unlikely]] return; }
L_004B2A2C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2A3Cu); set32(c.r[5], c.r[5].w[0] - 3358u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B2A3Cu) [[unlikely]] return; }
L_004B2A3C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004B2D00; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2A54u); set32(c.r[5], c.r[5].w[0] - 3331u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004B2A54u) [[unlikely]] return; }
L_004B2A54:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2A60u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x004B2A60u) [[unlikely]] return; }
L_004B2A60:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 225u);  goto L_004B2A74; }
    set32(c.r[5], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 1;
L_004B2A74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2A7Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x004B2A7Cu) [[unlikely]] return; }
L_004B2A7C:
    set32(c.r[3], ld32((c.r[19].w[0] + 76u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[28].w[0] - 24136u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], ld32((c.r[19].w[0] + 68u)));  if (t) { goto L_004B2AA8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[4].w[0] + 24u);  goto L_004B2AAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { goto L_004B2AAC; } }
L_004B2AA8:
    set32(c.r[4], c.r[4].w[0] + 40u);
    c.budget -= 1;
L_004B2AAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2AB4u);  if (depth < kMaxDepth) unit_0004(c, 375u, depth + 1u); else { c.pc = 0x00113EC0u; return; } if (c.pc != 0x004B2AB4u) [[unlikely]] return; }
L_004B2AB4:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], ld32((c.r[19].w[0] + 68u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2AD0u); set32(c.r[6], c.r[6].w[0] - 3316u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004B2AD0u) [[unlikely]] return; }
L_004B2AD0:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 129u);  goto L_004B2AE4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_004B2AE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2AECu); set32(c.r[4], c.r[18].w[0] + 56u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004B2AECu) [[unlikely]] return; }
L_004B2AEC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2AF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B2AF8u) [[unlikely]] return; }
L_004B2AF8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] - 3299u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2B14u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004B2B14u) [[unlikely]] return; }
L_004B2B14:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 209u);  goto L_004B2B28; }
    set32(c.r[6], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 1;
L_004B2B28:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2B34u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x004B2B34u) [[unlikely]] return; }
L_004B2B34:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004B2B40; } }
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 1;
L_004B2B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2B48u);  if (depth < kMaxDepth) unit_00E0(c, 472u, depth + 1u); else { c.pc = 0x004838E0u; return; } if (c.pc != 0x004B2B48u) [[unlikely]] return; }
L_004B2B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2B50u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E7(c, 73u, depth + 1u); else { c.pc = 0x0049CBA0u; return; } if (c.pc != 0x004B2B50u) [[unlikely]] return; }
L_004B2B50:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 3282u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2B6Cu); set32(c.r[7], c.r[7].w[0] - 3274u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004B2B6Cu) [[unlikely]] return; }
L_004B2B6C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2B78u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 380u, depth + 1u); else { c.pc = 0x00477320u; return; } if (c.pc != 0x004B2B78u) [[unlikely]] return; }
L_004B2B78:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 113u);  goto L_004B2B8C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_004B2B8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2B94u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x004B2B94u) [[unlikely]] return; }
L_004B2B94:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2BA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B2BA0u) [[unlikely]] return; }
L_004B2BA0:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 193u);  goto L_004B2BB4; }
    set32(c.r[6], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_004B2BB4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2BC4u); set32(c.r[5], c.r[5].w[0] - 3282u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x004B2BC4u) [[unlikely]] return; }
L_004B2BC4:
    set32(c.r[7], ld32((c.r[19].w[0] + 68u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2BDCu); set32(c.r[6], c.r[6].w[0] - 3273u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004B2BDCu) [[unlikely]] return; }
L_004B2BDC:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 97u);  goto L_004B2BF0; }
    set32(c.r[6], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_004B2BF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2C00u); set32(c.r[5], c.r[5].w[0] - 3270u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x004B2C00u) [[unlikely]] return; }
L_004B2C00:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2C0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B2C0Cu) [[unlikely]] return; }
L_004B2C0C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] - 3260u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2C28u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004B2C28u) [[unlikely]] return; }
L_004B2C28:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 81u);  goto L_004B2C3C; }
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_004B2C3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2C4Cu); set32(c.r[5], c.r[5].w[0] - 3243u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x004B2C4Cu) [[unlikely]] return; }
L_004B2C4C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2C58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B2C58u) [[unlikely]] return; }
L_004B2C58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2C68u); set32(c.r[5], c.r[5].w[0] - 3232u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004B2C68u) [[unlikely]] return; }
L_004B2C68:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 271u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2C78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x004B2C78u) [[unlikely]] return; }
L_004B2C78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 271u));  goto L_004B2CA0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004B2C9C; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 271u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2C9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x004B2C9Cu) [[unlikely]] return; }
L_004B2C9C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 271u));
    c.budget -= 1;
L_004B2CA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 68u)));  goto L_004B2CCC; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2CB4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x004B2CB4u) [[unlikely]] return; }
L_004B2CB4:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 220u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2CC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B2CC8u) [[unlikely]] return; }
L_004B2CC8:
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 1;
L_004B2CCC:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2CE0u); st32((c.r[19].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B2CE0u) [[unlikely]] return; }
L_004B2CE0:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2CECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B2CECu) [[unlikely]] return; }
L_004B2CEC:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2CF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B2CF8u) [[unlikely]] return; }
L_004B2CF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 240u);  if (t) { goto L_004B2E90; } }
L_004B2D00:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2D0Cu); set32(c.r[5], c.r[5].w[0] - 3222u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004B2D0Cu) [[unlikely]] return; }
L_004B2D0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B2E8C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2D24u); set32(c.r[5], c.r[5].w[0] - 3194u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004B2D24u) [[unlikely]] return; }
L_004B2D24:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2D30u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x004B2D30u) [[unlikely]] return; }
L_004B2D30:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 177u);  goto L_004B2D44; }
    set32(c.r[5], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_004B2D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2D4Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x004B2D4Cu) [[unlikely]] return; }
L_004B2D4C:
    set32(c.r[7], ld32((c.r[19].w[0] + 72u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2D68u); set32(c.r[6], c.r[6].w[0] - 3273u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004B2D68u) [[unlikely]] return; }
L_004B2D68:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 161u);  goto L_004B2D7C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_004B2D7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2D84u); set32(c.r[4], c.r[18].w[0] + 56u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004B2D84u) [[unlikely]] return; }
L_004B2D84:
    set32(c.r[3], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[28].w[0] - 24136u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], ld32((c.r[19].w[0] + 72u)));  if (t) { goto L_004B2DAC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[4].w[0] + 24u);  goto L_004B2DB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { goto L_004B2DB0; } }
L_004B2DAC:
    set32(c.r[4], c.r[4].w[0] + 40u);
    c.budget -= 1;
L_004B2DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2DB8u);  if (depth < kMaxDepth) unit_0004(c, 375u, depth + 1u); else { c.pc = 0x00113EC0u; return; } if (c.pc != 0x004B2DB8u) [[unlikely]] return; }
L_004B2DB8:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2DCCu); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004B2DCCu) [[unlikely]] return; }
L_004B2DCC:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 145u);  goto L_004B2DE0; }
    set32(c.r[6], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_004B2DE0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2DECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x004B2DECu) [[unlikely]] return; }
L_004B2DEC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2DFCu); set32(c.r[5], c.r[5].w[0] - 3232u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004B2DFCu) [[unlikely]] return; }
L_004B2DFC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 270u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2E0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x004B2E0Cu) [[unlikely]] return; }
L_004B2E0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 270u));  goto L_004B2E34; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004B2E30; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 270u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2E30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x004B2E30u) [[unlikely]] return; }
L_004B2E30:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 270u));
    c.budget -= 1;
L_004B2E34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 72u)));  goto L_004B2E60; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2E48u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x004B2E48u) [[unlikely]] return; }
L_004B2E48:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 220u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2E5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B2E5Cu) [[unlikely]] return; }
L_004B2E5C:
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    c.budget -= 1;
L_004B2E60:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2E74u); st32((c.r[19].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B2E74u) [[unlikely]] return; }
L_004B2E74:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2E80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B2E80u) [[unlikely]] return; }
L_004B2E80:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2E8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B2E8Cu) [[unlikely]] return; }
L_004B2E8C:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 1;
L_004B2E90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2E98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B2E98u) [[unlikely]] return; }
L_004B2E98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_004B2EC0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2EF0u); set32(c.r[4], c.r[29].w[0] + 224u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B2EF0u) [[unlikely]] return; }
L_004B2EF0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2EFCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x004B2EFCu) [[unlikely]] return; }
L_004B2EFC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2F0Cu); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_00EC(c, 392u, depth + 1u); else { c.pc = 0x004B31C0u; return; } if (c.pc != 0x004B2F0Cu) [[unlikely]] return; }
L_004B2F0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[29].w[0] + 204u), 0u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2F34u); set32(c.r[5], c.r[5].w[0] - 3331u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B2F34u) [[unlikely]] return; }
L_004B2F34:
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2F40u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004B2F40u) [[unlikely]] return; }
L_004B2F40:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2F4Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004B2F4Cu) [[unlikely]] return; }
L_004B2F4C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2F60u); set32(c.r[6], c.r[6].w[0] - 3178u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x004B2F60u) [[unlikely]] return; }
L_004B2F60:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2F6Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x004B2F6Cu) [[unlikely]] return; }
L_004B2F6C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2F7Cu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_00EC(c, 392u, depth + 1u); else { c.pc = 0x004B31C0u; return; } if (c.pc != 0x004B2F7Cu) [[unlikely]] return; }
L_004B2F7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[29].w[0] + 156u), 0u);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2FA4u); set32(c.r[5], c.r[5].w[0] - 3194u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B2FA4u) [[unlikely]] return; }
L_004B2FA4:
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2FB0u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004B2FB0u) [[unlikely]] return; }
L_004B2FB0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2FBCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004B2FBCu) [[unlikely]] return; }
L_004B2FBC:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2FC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B2FC8u) [[unlikely]] return; }
L_004B2FC8:
    set32(c.r[17], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B2FD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x004B2FD8u) [[unlikely]] return; }
L_004B2FD8:
    st16((c.r[29].w[0] + 120u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = ld8((c.r[28].w[0] - 29576u));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004B3010; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3008u); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B3008u) [[unlikely]] return; }
L_004B3008:
    set32(c.r[2], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_004B3010:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3040u); set32(c.r[5], c.r[5].w[0] - 3232u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B3040u) [[unlikely]] return; }
L_004B3040:
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B304Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004B304Cu) [[unlikely]] return; }
L_004B304C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3058u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004B3058u) [[unlikely]] return; }
L_004B3058:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 3376u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3074u); set32(c.r[7], c.r[7].w[0] - 3362u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004B3074u) [[unlikely]] return; }
L_004B3074:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 81u);  goto L_004B3088; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_004B3088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3090u);  if (depth < kMaxDepth) unit_00DD(c, 332u, depth + 1u); else { c.pc = 0x00476D30u; return; } if (c.pc != 0x004B3090u) [[unlikely]] return; }
L_004B3090:
    st32((c.r[19].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B30A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B30A0u) [[unlikely]] return; }
L_004B30A0:
    set32(c.r[3], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], ld32((c.r[28].w[0] - 24136u)));  if (t) { goto L_004B30C4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[4].w[0] + 24u);  goto L_004B30C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + 8u);  if (t) { goto L_004B30C8; } }
L_004B30C4:
    set32(c.r[2], c.r[4].w[0] + 40u);
    c.budget -= 1;
L_004B30C8:
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004B30D8; } }
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 1;
L_004B30D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B30E0u);  if (depth < kMaxDepth) unit_00E0(c, 311u, depth + 1u); else { c.pc = 0x00482720u; return; } if (c.pc != 0x004B30E0u) [[unlikely]] return; }
L_004B30E0:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B30F4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B30F4u) [[unlikely]] return; }
L_004B30F4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[19].w[0] + 68u), 0u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[6], c.r[6].w[0] - 3170u);
    set32(c.r[7], c.r[7].w[0] - 3274u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3118u); st32((c.r[19].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004B3118u) [[unlikely]] return; }
L_004B3118:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 209u);  goto L_004B312C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 1;
L_004B312C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3134u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004B3134u) [[unlikely]] return; }
L_004B3134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B313Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 103u, depth + 1u); else { c.pc = 0x0047CD10u; return; } if (c.pc != 0x004B313Cu) [[unlikely]] return; }
L_004B313C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29244u)));
    st32((c.r[29].w[0] + 252u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3150u); st32((c.r[28].w[0] - 29244u), 0u);  if (depth < kMaxDepth) unit_0026(c, 323u, depth + 1u); else { c.pc = 0x0019BE80u; return; } if (c.pc != 0x004B3150u) [[unlikely]] return; }
L_004B3150:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[17].w[0] + 60u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B316Cu); c.r[9].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 306u, depth + 1u); else { c.pc = 0x0019BB20u; return; } if (c.pc != 0x004B316Cu) [[unlikely]] return; }
L_004B316C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3174u); set32(c.r[4], c.r[17].w[0] + 60u);  if (depth < kMaxDepth) unit_000F(c, 108u, depth + 1u); else { c.pc = 0x0013D410u; return; } if (c.pc != 0x004B3174u) [[unlikely]] return; }
L_004B3174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B317Cu); set32(c.r[4], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_000C(c, 347u, depth + 1u); else { c.pc = 0x00133590u; return; } if (c.pc != 0x004B317Cu) [[unlikely]] return; }
L_004B317C:
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3190u); st32((c.r[28].w[0] - 29244u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B3190u) [[unlikely]] return; }
L_004B3190:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B319Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B319Cu) [[unlikely]] return; }
L_004B319C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_004B31C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[19].w[0] + 4u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st16((c.r[4].w[0] + 24u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[2], 0u + 256u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st16((c.r[4].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 19;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[5].w[0] + 1u);  goto L_004B3210; }
    set32(c.r[17], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 1;
L_004B3210:
    set32(c.r[2], 0u + 512u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3220u); st16((c.r[19].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x004B3220u) [[unlikely]] return; }
L_004B3220:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[18], 0u + 16u);  if (t) { goto L_004B3254; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_004B3254; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B324Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B324Cu) [[unlikely]] return; }
L_004B324C:
    set32(c.r[2], c.r[19].w[0] + 4u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_004B3254:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 20u)));  goto L_004B3298; }
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[19].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 24u)));  goto L_004B3280; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B327Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B327Cu) [[unlikely]] return; }
L_004B327C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 24u)));
    c.budget -= 1;
L_004B3280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3288u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004B3288u) [[unlikely]] return; }
L_004B3288:
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 4;
L_004B3298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B32A0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x004B32A0u) [[unlikely]] return; }
L_004B32A0:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004B32C0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001750A0u | kUnwind; return; } [[clang::musttail]] return unit_001D(c, 92u, depth); }
L_004B32D0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004B331C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3304u); set32(c.r[4], 0u + 412u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004B3304u) [[unlikely]] return; }
L_004B3304:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_004B331C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3318u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 73u, depth + 1u); else { c.pc = 0x004B47A0u; return; } if (c.pc != 0x004B3318u) [[unlikely]] return; }
L_004B3318:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004B331C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3330u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 94u, depth + 1u); else { c.pc = 0x001750F0u; return; } if (c.pc != 0x004B3330u) [[unlikely]] return; }
L_004B3330:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B333Cu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x004B333Cu) [[unlikely]] return; }
L_004B333C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3350u); set32(c.r[6], c.r[6].w[0] - 2976u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004B3350u) [[unlikely]] return; }
L_004B3350:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 113u);  goto L_004B3364; }
    set32(c.r[6], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_004B3364:
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3374u); set32(c.r[7], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004B3374u) [[unlikely]] return; }
L_004B3374:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3384u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B3384u) [[unlikely]] return; }
L_004B3384:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_004B3448; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B339Cu); set32(c.r[5], c.r[5].w[0] - 2965u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004B339Cu) [[unlikely]] return; }
L_004B339C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B33ACu); set32(c.r[5], c.r[5].w[0] - 2948u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004B33ACu) [[unlikely]] return; }
L_004B33AC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B33C0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004B33C0u) [[unlikely]] return; }
L_004B33C0:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[18].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B33D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B33D4u) [[unlikely]] return; }
L_004B33D4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B33E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B33E0u) [[unlikely]] return; }
L_004B33E0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st8((c.r[16].w[0] + 384u), static_cast<std::uint8_t>(c.r[18].w[0]));  if (t) { goto L_004B3444; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 2946u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3400u); set32(c.r[7], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004B3400u) [[unlikely]] return; }
L_004B3400:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B3444; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 156u), c.r[3].w[0]);  if (t) { goto L_004B3424; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 136u)));  if (t) { goto L_004B3428; } }
L_004B3424:
    set32(c.r[4], c.r[29].w[0] + 129u);
    c.budget -= 1;
L_004B3428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3430u); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x004B3430u) [[unlikely]] return; }
L_004B3430:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B3444; } }
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[16].w[0] + 388u), c.f[0]);
    c.budget -= 2;
L_004B3444:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_004B3448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3450u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B3450u) [[unlikely]] return; }
L_004B3450:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004B3470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004B34B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25456u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B34A0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001D(c, 147u, depth + 1u); else { c.pc = 0x00175C10u; return; } if (c.pc != 0x004B34A0u) [[unlikely]] return; }
L_004B34A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004B34BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B34B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004B34B8u) [[unlikely]] return; }
L_004B34B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004B34BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B34D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B34E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 150u, depth + 1u); else { c.pc = 0x00175C80u; return; } if (c.pc != 0x004B34E4u) [[unlikely]] return; }
L_004B34E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 25456u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B3510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 304u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004B3534; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B3578; } }
L_004B3534:
    set32(c.r[3], ld32((c.r[16].w[0] + 396u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 320u)));
    mmi::pminw(c.r[5], c.r[2], c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 404u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_004B3558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004B3578; } }
L_004B3558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3560u);  if (depth < kMaxDepth) unit_0022(c, 186u, depth + 1u); else { c.pc = 0x0018AB50u; return; } if (c.pc != 0x004B3560u) [[unlikely]] return; }
L_004B3560:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 396u)));  goto L_004B3570; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B3578; } }
L_004B3570:
    set32(c.r[2], ld32((c.r[16].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004B3578:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B3590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 304u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004B35B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B35E8; } }
L_004B35B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 404u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B35C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004B35E8; } }
L_004B35C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B35D0u);  if (depth < kMaxDepth) unit_0022(c, 186u, depth + 1u); else { c.pc = 0x0018AB50u; return; } if (c.pc != 0x004B35D0u) [[unlikely]] return; }
L_004B35D0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 396u)));  goto L_004B35E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B35E8; } }
L_004B35E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004B35E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B3600:
    set32(c.r[3], ld32((c.r[4].w[0] + 320u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 396u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; mmi::pminw(c.r[2], c.r[2], c.r[3]);  c.pc = t; return; }
L_004B3610:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 376u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004B3660; } }
L_004B363C:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3650u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 152u, depth + 1u); else { c.pc = 0x00189FB0u; return; } if (c.pc != 0x004B3650u) [[unlikely]] return; }
L_004B3650:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_004B3660; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004B3670; } }
L_004B3660:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 380u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B363Cu | kUnwind; return; } goto L_004B363C; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_004B3670:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004B3690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004B36AC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 396u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 380u)));  goto L_004B36B4; }
L_004B36AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B36C4; } }
L_004B36B4:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B36C4u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0022(c, 152u, depth + 1u); else { c.pc = 0x00189FB0u; return; } if (c.pc != 0x004B36C4u) [[unlikely]] return; }
L_004B36C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004B36D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004B3700; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B3884; } }
L_004B3700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[19].w[0] + 276u)));  if (t) { goto L_004B3744; } }
L_004B3708:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  goto L_004B373C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3728u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B3728u) [[unlikely]] return; }
L_004B3728:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B3738; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B3774; } }
L_004B3738:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_004B373C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_004B3744:
    set32(c.r[4], ld32((c.r[19].w[0] + 272u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    set32(c.r[3], ld32((c.r[19].w[0] + 276u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B3708u | kUnwind; return; } goto L_004B3708; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004B3774:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 404u)));  goto L_004B3784; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B3884; } }
L_004B3784:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[19].w[0] + 396u)));  goto L_004B3794; }
    st32((c.r[19].w[0] + 404u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 396u)));
    c.budget -= 2;
L_004B3794:
    set32(c.r[2], ld32((c.r[19].w[0] + 404u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 320u)));  goto L_004B37B0; }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st32((c.r[19].w[0] + 404u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[19].w[0] + 320u)));
    c.budget -= 3;
L_004B37B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B37B8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 186u, depth + 1u); else { c.pc = 0x0018AB50u; return; } if (c.pc != 0x004B37B8u) [[unlikely]] return; }
L_004B37B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 404u)));  goto L_004B37D8; }
    set32(c.r[2], ld32((c.r[19].w[0] + 396u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_004B3874; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004B37F8; } }
L_004B37D8:
    set32(c.r[2], ld32((c.r[19].w[0] + 320u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 396u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004B37F8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 312u)));
    set32(c.r[18], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_004B37F8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B3874; } }
L_004B3804:
    set32(c.r[2], ld32((c.r[19].w[0] + 396u)));
    set32(c.r[16], c.r[3].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_004B3834; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3820u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 186u, depth + 1u); else { c.pc = 0x0018AB50u; return; } if (c.pc != 0x004B3820u) [[unlikely]] return; }
L_004B3820:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_004B3884; }
    set32(c.r[2], ld32((c.r[19].w[0] + 396u)));
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.budget -= 3;
L_004B3834:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3844u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B3844u) [[unlikely]] return; }
L_004B3844:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_004B3874; }
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B385Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B385Cu) [[unlikely]] return; }
L_004B385C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B3870; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B3884; } }
L_004B3870:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004B3874:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 404u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B3804u | kUnwind; return; } goto L_004B3804; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004B3884:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004B38A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 404u)));
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { set32(c.r[5], ld32((c.r[4].w[0] + 396u)));  goto L_004B38B4; }
    st32((c.r[4].w[0] + 404u), 0u);
    set32(c.r[5], ld32((c.r[4].w[0] + 396u)));
    c.budget -= 2;
L_004B38B4:
    set32(c.r[3], ld32((c.r[4].w[0] + 404u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B38CC; } }
    set32(c.r[3], c.r[5].w[0] - 1u);
    st32((c.r[4].w[0] + 404u), c.r[3].w[0]);
    c.budget -= 2;
L_004B38CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004B38E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 276u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004B3938; } }
L_004B38FC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  goto L_004B3930; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B391Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B391Cu) [[unlikely]] return; }
L_004B391C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B392C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B3968; } }
L_004B392C:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.budget -= 1;
L_004B3930:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_004B3938:
    set32(c.r[4], ld32((c.r[16].w[0] + 272u)));
    c.r[2].d[0] = c.r[17].d[0] << 32;
    set32(c.r[3], ld32((c.r[16].w[0] + 276u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B38FCu | kUnwind; return; } goto L_004B38FC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004B3968:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004B3980:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3998u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0023(c, 16u, depth + 1u); else { c.pc = 0x0018C2E0u; return; } if (c.pc != 0x004B3998u) [[unlikely]] return; }
L_004B3998:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 396u)));  goto L_004B39A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 404u), 0u);  if (t) { goto L_004B3AB0; } }
L_004B39A8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004B39B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 404u), 0u);  if (t) { goto L_004B3AB0; } }
L_004B39B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B39C0u);  if (depth < kMaxDepth) unit_0023(c, 16u, depth + 1u); else { c.pc = 0x0018C2E0u; return; } if (c.pc != 0x004B39C0u) [[unlikely]] return; }
L_004B39C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B39CCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 150u, depth + 1u); else { c.pc = 0x00189E80u; return; } if (c.pc != 0x004B39CCu) [[unlikely]] return; }
L_004B39CC:
    set32(c.r[3], 0u - 1u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 408u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 376u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 380u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_004B3A08; } }
L_004B39EC:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[4].w[0] + 4u);  goto L_004B3A04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 408u), c.r[6].w[0]);  if (t) { goto L_004B3A24; } }
L_004B3A04:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_004B3A08:
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[4].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B39ECu | kUnwind; return; } goto L_004B39EC; }
L_004B3A24:
    set32(c.r[3], ld32((c.r[17].w[0] + 408u)));
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004B3A38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 404u), 0u);  if (t) { goto L_004B3AB0; } }
L_004B3A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3A40u);  if (depth < kMaxDepth) unit_001D(c, 277u, depth + 1u); else { c.pc = 0x00177810u; return; } if (c.pc != 0x004B3A40u) [[unlikely]] return; }
L_004B3A40:
    set32(c.r[3], ld32((c.r[17].w[0] + 408u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    mmi::pmaxw(c.r[16], c.r[4], c.r[2]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3A58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 277u, depth + 1u); else { c.pc = 0x00177810u; return; } if (c.pc != 0x004B3A58u) [[unlikely]] return; }
L_004B3A58:
    set32(c.r[4], ld32((c.r[17].w[0] + 408u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 396u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::pminw(c.r[5], c.r[3], c.r[4]);
    set32(c.r[4], ld32((c.r[17].w[0] + 404u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[1].d[0] != 0ull) { c.r[1].d[0] = c.r[16].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  goto L_004B3A94; }
    set32(c.r[3], ld32((c.r[17].w[0] + 320u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004B3AB4; }
    c.r[1].d[0] = c.r[16].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_004B3A94:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 320u)));  goto L_004B3AA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 404u), c.r[16].w[0]);  if (t) { goto L_004B3AB0; } }
L_004B3AA4:
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 404u), c.r[3].w[0]);
    c.budget -= 3;
L_004B3AB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004B3AB4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004B3AD0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 404u)));
    c.budget -= 16;
    { const bool t = c.r[2].sd[0] >= 0; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004B3B14; } }
    st32((c.r[21].w[0] + 404u), 0u);
    c.budget -= 1;
L_004B3B14:
    set32(c.r[3], ld32((c.r[21].w[0] + 396u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 404u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 320u)));  goto L_004B3B34; }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st32((c.r[21].w[0] + 404u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 320u)));
    c.budget -= 3;
L_004B3B34:
    set32(c.r[2], ld32((c.r[21].w[0] + 396u)));
    mmi::pminw(c.r[23], c.r[2], c.r[3]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004B3B60; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_004B3B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3B50u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 152u, depth + 1u); else { c.pc = 0x00189FB0u; return; } if (c.pc != 0x004B3B50u) [[unlikely]] return; }
L_004B3B50:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3B5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x004B3B5Cu) [[unlikely]] return; }
L_004B3B5C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004B3B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3B68u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 185u, depth + 1u); else { c.pc = 0x0018AB20u; return; } if (c.pc != 0x004B3B68u) [[unlikely]] return; }
L_004B3B68:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B3B48u | kUnwind; return; } goto L_004B3B48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004B3E60; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 404u)));
    c.budget -= 1;
L_004B3B80:
    set32(c.r[2], ld32((c.r[21].w[0] + 396u)));
    set32(c.r[16], c.r[3].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[21].w[0])));  goto L_004B3BB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3B9Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 186u, depth + 1u); else { c.pc = 0x0018AB50u; return; } if (c.pc != 0x004B3B9Cu) [[unlikely]] return; }
L_004B3B9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_004B3E70; }
    set32(c.r[2], ld32((c.r[21].w[0] + 396u)));
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.budget -= 3;
L_004B3BB0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3BC0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B3BC0u) [[unlikely]] return; }
L_004B3BC0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[21].w[0] + 332u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B3BFC; } }
    c.f[0] = c.r[19].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 352u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[21].w[0] + 328u));
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[21] = ld32((c.r[21].w[0] + 356u));
    c.f[22] = ld32((c.r[21].w[0] + 360u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));  if (t) { goto L_004B3C24; } }
L_004B3BFC:
    c.f[0] = c.r[19].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 356u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[21].w[0] + 328u));
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[20] = ld32((c.r[21].w[0] + 352u));
    c.f[22] = ld32((c.r[21].w[0] + 360u));
    c.f[21] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    c.budget -= 10;
L_004B3C24:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 364u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B3D44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 196u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 212u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 218u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004B3C64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3C5Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B3C5Cu) [[unlikely]] return; }
L_004B3C5C:
    set32(c.r[2], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 2;
L_004B3C64:
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[5], c.r[29].w[0] + 196u);
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), c.f[21]);
    st32((c.r[2].w[0] + 8u), c.f[22]);
    set32(c.r[18], ld32((c.r[20].w[0] + 124u)));
    set32(c.r[22], ld32((c.r[20].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[22].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 15;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[17], ld32((c.r[29].w[0] + 196u)));  goto L_004B3CD4; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3CACu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B3CACu) [[unlikely]] return; }
L_004B3CAC:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004B3CC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3CC4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B3CC4u) [[unlikely]] return; }
L_004B3CC4:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004B3CC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004B3CF8; } }
    set32(c.r[17], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 1;
L_004B3CD4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3CE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004B3CE0u) [[unlikely]] return; }
L_004B3CE0:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3CF4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B3CF4u) [[unlikely]] return; }
L_004B3CF4:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_004B3CF8:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3D0Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B3D0Cu) [[unlikely]] return; }
L_004B3D0C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_004B3E50; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_004B3E54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3D3Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B3D3Cu) [[unlikely]] return; }
L_004B3D3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B3E50; } }
L_004B3D44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 164u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 184u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 180u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 186u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004B3D78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3D70u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B3D70u) [[unlikely]] return; }
L_004B3D70:
    set32(c.r[2], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 2;
L_004B3D78:
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[5], c.r[29].w[0] + 164u);
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), c.f[21]);
    st32((c.r[2].w[0] + 8u), c.f[22]);
    set32(c.r[18], ld32((c.r[20].w[0] + 124u)));
    set32(c.r[22], ld32((c.r[20].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 186u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[22].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 15;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[17], ld32((c.r[29].w[0] + 164u)));  goto L_004B3DE8; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3DC0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B3DC0u) [[unlikely]] return; }
L_004B3DC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004B3DDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3DD8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B3DD8u) [[unlikely]] return; }
L_004B3DD8:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004B3DDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004B3E0C; } }
    set32(c.r[17], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 1;
L_004B3DE8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3DF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004B3DF4u) [[unlikely]] return; }
L_004B3DF4:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3E08u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004B3E08u) [[unlikely]] return; }
L_004B3E08:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_004B3E0C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3E20u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B3E20u) [[unlikely]] return; }
L_004B3E20:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 186u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 160u), c.r[3].w[0]);  if (t) { goto L_004B3E50; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[2], c.r[29].w[0] + 164u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_004B3E50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3E50u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004B3E50u) [[unlikely]] return; }
L_004B3E50:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_004B3E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3E5Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x004B3E5Cu) [[unlikely]] return; }
L_004B3E5C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_004B3E60:
    c.r[3].d[0] = c.r[19].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 404u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B3B80u | kUnwind; return; } goto L_004B3B80; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_004B3E70:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_004B3EB0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3EDCu); st32((c.r[4].w[0] + 376u), 0u);  if (depth < kMaxDepth) unit_0022(c, 185u, depth + 1u); else { c.pc = 0x0018AB20u; return; } if (c.pc != 0x004B3EDCu) [[unlikely]] return; }
L_004B3EDC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3EE8u); set32(c.r[4], c.r[20].w[0] + 368u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x004B3EE8u) [[unlikely]] return; }
L_004B3EE8:
    st32((c.r[20].w[0] + 396u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 400u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 236u), 0u);  if (t) { [[clang::musttail]] return unit_00ED(c, 26u, depth); } }
L_004B3EFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3F04u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 152u, depth + 1u); else { c.pc = 0x00189FB0u; return; } if (c.pc != 0x004B3F04u) [[unlikely]] return; }
L_004B3F04:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 236u)));  [[clang::musttail]] return unit_00ED(c, 25u, depth); }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 2931u);
    set32(c.r[7], c.r[7].w[0] - 2920u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3F34u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004B3F34u) [[unlikely]] return; }
L_004B3F34:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 2908u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3F50u); set32(c.r[7], c.r[7].w[0] - 2891u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004B3F50u) [[unlikely]] return; }
L_004B3F50:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 2890u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3F6Cu); set32(c.r[7], c.r[7].w[0] - 2883u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004B3F6Cu) [[unlikely]] return; }
L_004B3F6C:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 113u);  goto L_004B3F80; }
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_004B3F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3F88u);  if (depth < kMaxDepth) unit_000F(c, 289u, depth + 1u); else { c.pc = 0x0013EE00u; return; } if (c.pc != 0x004B3F88u) [[unlikely]] return; }
L_004B3F88:
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3F98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004B3F98u) [[unlikely]] return; }
L_004B3F98:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 209u);  goto L_004B3FAC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 1;
L_004B3FAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3FB4u); set32(c.r[4], ld32((c.r[28].w[0] - 22944u)));  if (depth < kMaxDepth) unit_00ED(c, 491u, depth + 1u); else { c.pc = 0x004B7610u; return; } if (c.pc != 0x004B3FB4u) [[unlikely]] return; }
L_004B3FB4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[5].w[0] - 2881u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3FCCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 301u, depth + 1u); else { c.pc = 0x0012A770u; return; } if (c.pc != 0x004B3FCCu) [[unlikely]] return; }
L_004B3FCC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_004B3FDC; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004B3FDC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[5].w[0] - 2876u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B3FF0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 301u, depth + 1u); else { c.pc = 0x0012A770u; return; } if (c.pc != 0x004B3FF0u) [[unlikely]] return; }
L_004B3FF0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_00ED(c, 1u, depth); } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
    [[clang::musttail]] return unit_00ED(c, 1u, depth);
}

}
