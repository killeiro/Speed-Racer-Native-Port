#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AF[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0,
    0, 9, 0, 10, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 19, 0, 0, 0, 20, 21, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 23, 0, 24, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0,
    35, 0, 0, 0, 0, 36, 0, 37, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 41, 0, 42, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 58, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0,
    0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0,
    0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0,
    0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0,
    0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0,
    0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    96, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 99, 0, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 103, 104, 0, 0, 105, 0,
    106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0,
    0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    133, 0, 134, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0,
    0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0,
    0, 0, 0, 160, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0,
    0, 0, 0, 164, 0, 0, 0, 0, 165, 166, 167, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 173, 174, 0, 0, 0, 175, 0, 176, 0, 0, 177, 0,
    0, 0, 178, 0, 0, 179, 0, 180, 0, 181, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 185, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0,
    220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0,
    226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232,
    0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0,
    0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255,
    0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0,
    0, 278, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 287, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0,
    0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 299, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 306, 0,
    307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0,
    316, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0,
    326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0,
    0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0,
    0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 354, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0,
    358, 0, 0, 359, 0, 0, 360, 0, 361, 0, 0, 0, 362, 0, 0, 363, 0, 0, 364, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 370, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0,
    0, 374, 0, 0, 375, 0, 0, 376, 0, 377, 0, 0, 0, 378, 0, 0, 379, 0, 0, 380, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0,
    388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0,
    395, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0,
    403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0,
    0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412,
    0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0,
    0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0,
    428, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0,
    433, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0,
    0, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 448, 0, 0, 449, 0, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0,
    456, 0, 0, 0, 0, 0, 457, 0, 458, 0, 459, 0, 460, 0, 461, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0,
    0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 480, 0, 0, 0,
    481, 0, 0, 0, 482, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 492,
    0, 0, 0, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 497, 0,
    0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 0,
    0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 509, 0,
};

void unit_00AF(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003BC000;
    case 2u: goto L_003BC014;
    case 3u: goto L_003BC048;
    case 4u: goto L_003BC09C;
    case 5u: goto L_003BC0B8;
    case 6u: goto L_003BC124;
    case 7u: goto L_003BC138;
    case 8u: goto L_003BC178;
    case 9u: goto L_003BC184;
    case 10u: goto L_003BC18C;
    case 11u: goto L_003BC190;
    case 12u: goto L_003BC1D0;
    case 13u: goto L_003BC204;
    case 14u: goto L_003BC238;
    case 15u: goto L_003BC2C8;
    case 16u: goto L_003BC2D8;
    case 17u: goto L_003BC330;
    case 18u: goto L_003BC340;
    case 19u: goto L_003BC348;
    case 20u: goto L_003BC358;
    case 21u: goto L_003BC35C;
    case 22u: goto L_003BC380;
    case 23u: goto L_003BC384;
    case 24u: goto L_003BC38C;
    case 25u: goto L_003BC390;
    case 26u: goto L_003BC3C4;
    case 27u: goto L_003BC3CC;
    case 28u: goto L_003BC3D8;
    case 29u: goto L_003BC3E4;
    case 30u: goto L_003BC400;
    case 31u: goto L_003BC41C;
    case 32u: goto L_003BC440;
    case 33u: goto L_003BC464;
    case 34u: goto L_003BC474;
    case 35u: goto L_003BC480;
    case 36u: goto L_003BC494;
    case 37u: goto L_003BC49C;
    case 38u: goto L_003BC4A0;
    case 39u: goto L_003BC4CC;
    case 40u: goto L_003BC4D8;
    case 41u: goto L_003BC4EC;
    case 42u: goto L_003BC4F4;
    case 43u: goto L_003BC520;
    case 44u: goto L_003BC528;
    case 45u: goto L_003BC540;
    case 46u: goto L_003BC548;
    case 47u: goto L_003BC58C;
    case 48u: goto L_003BC5B4;
    case 49u: goto L_003BC5C4;
    case 50u: goto L_003BC5C8;
    case 51u: goto L_003BC5E8;
    case 52u: goto L_003BC5F0;
    case 53u: goto L_003BC600;
    case 54u: goto L_003BC624;
    case 55u: goto L_003BC668;
    case 56u: goto L_003BC6C8;
    case 57u: goto L_003BC6F0;
    case 58u: goto L_003BC6F4;
    case 59u: goto L_003BC7A4;
    case 60u: goto L_003BC7B4;
    case 61u: goto L_003BC7E8;
    case 62u: goto L_003BC808;
    case 63u: goto L_003BC844;
    case 64u: goto L_003BC878;
    case 65u: goto L_003BC888;
    case 66u: goto L_003BC8B8;
    case 67u: goto L_003BC8D4;
    case 68u: goto L_003BC8E4;
    case 69u: goto L_003BC8EC;
    case 70u: goto L_003BC904;
    case 71u: goto L_003BC918;
    case 72u: goto L_003BC928;
    case 73u: goto L_003BC938;
    case 74u: goto L_003BC950;
    case 75u: goto L_003BC9DC;
    case 76u: goto L_003BCA08;
    case 77u: goto L_003BCA50;
    case 78u: goto L_003BCA74;
    case 79u: goto L_003BCA98;
    case 80u: goto L_003BCAB4;
    case 81u: goto L_003BCAF8;
    case 82u: goto L_003BCB14;
    case 83u: goto L_003BCB34;
    case 84u: goto L_003BCB74;
    case 85u: goto L_003BCB90;
    case 86u: goto L_003BCC14;
    case 87u: goto L_003BCC88;
    case 88u: goto L_003BCCD4;
    case 89u: goto L_003BCCD8;
    case 90u: goto L_003BCD0C;
    case 91u: goto L_003BCD20;
    case 92u: goto L_003BCD74;
    case 93u: goto L_003BCDA0;
    case 94u: goto L_003BCDA8;
    case 95u: goto L_003BCDBC;
    case 96u: goto L_003BCE00;
    case 97u: goto L_003BCE04;
    case 98u: goto L_003BCE34;
    case 99u: goto L_003BCE38;
    case 100u: goto L_003BCE44;
    case 101u: goto L_003BCE4C;
    case 102u: goto L_003BCE54;
    case 103u: goto L_003BCE68;
    case 104u: goto L_003BCE6C;
    case 105u: goto L_003BCE78;
    case 106u: goto L_003BCE80;
    case 107u: goto L_003BCE94;
    case 108u: goto L_003BCED0;
    case 109u: goto L_003BCEEC;
    case 110u: goto L_003BCF2C;
    case 111u: goto L_003BCF44;
    case 112u: goto L_003BCF68;
    case 113u: goto L_003BCF78;
    case 114u: goto L_003BCFC0;
    case 115u: goto L_003BCFC8;
    case 116u: goto L_003BCFD8;
    case 117u: goto L_003BD004;
    case 118u: goto L_003BD030;
    case 119u: goto L_003BD040;
    case 120u: goto L_003BD09C;
    case 121u: goto L_003BD0D4;
    case 122u: goto L_003BD0E8;
    case 123u: goto L_003BD120;
    case 124u: goto L_003BD15C;
    case 125u: goto L_003BD188;
    case 126u: goto L_003BD1F8;
    case 127u: goto L_003BD230;
    case 128u: goto L_003BD264;
    case 129u: goto L_003BD288;
    case 130u: goto L_003BD2B4;
    case 131u: goto L_003BD2D4;
    case 132u: goto L_003BD2D8;
    case 133u: goto L_003BD300;
    case 134u: goto L_003BD308;
    case 135u: goto L_003BD30C;
    case 136u: goto L_003BD32C;
    case 137u: goto L_003BD360;
    case 138u: goto L_003BD388;
    case 139u: goto L_003BD3AC;
    case 140u: goto L_003BD43C;
    case 141u: goto L_003BD44C;
    case 142u: goto L_003BD460;
    case 143u: goto L_003BD480;
    case 144u: goto L_003BD4A8;
    case 145u: goto L_003BD4C0;
    case 146u: goto L_003BD4DC;
    case 147u: goto L_003BD510;
    case 148u: goto L_003BD53C;
    case 149u: goto L_003BD550;
    case 150u: goto L_003BD570;
    case 151u: goto L_003BD578;
    case 152u: goto L_003BD588;
    case 153u: goto L_003BD59C;
    case 154u: goto L_003BD5B0;
    case 155u: goto L_003BD5E8;
    case 156u: goto L_003BD600;
    case 157u: goto L_003BD630;
    case 158u: goto L_003BD664;
    case 159u: goto L_003BD674;
    case 160u: goto L_003BD68C;
    case 161u: goto L_003BD690;
    case 162u: goto L_003BD6D0;
    case 163u: goto L_003BD6F8;
    case 164u: goto L_003BD70C;
    case 165u: goto L_003BD720;
    case 166u: goto L_003BD724;
    case 167u: goto L_003BD728;
    case 168u: goto L_003BD738;
    case 169u: goto L_003BD74C;
    case 170u: goto L_003BD760;
    case 171u: goto L_003BD7B8;
    case 172u: goto L_003BD7C8;
    case 173u: goto L_003BD7D0;
    case 174u: goto L_003BD7D4;
    case 175u: goto L_003BD7E4;
    case 176u: goto L_003BD7EC;
    case 177u: goto L_003BD7F8;
    case 178u: goto L_003BD808;
    case 179u: goto L_003BD814;
    case 180u: goto L_003BD81C;
    case 181u: goto L_003BD824;
    case 182u: goto L_003BD838;
    case 183u: goto L_003BD840;
    case 184u: goto L_003BD8B0;
    case 185u: goto L_003BD8B4;
    case 186u: goto L_003BD8C8;
    case 187u: goto L_003BD8D0;
    case 188u: goto L_003BD8E0;
    case 189u: goto L_003BD910;
    case 190u: goto L_003BD918;
    case 191u: goto L_003BD934;
    case 192u: goto L_003BD93C;
    case 193u: goto L_003BD974;
    case 194u: goto L_003BD980;
    case 195u: goto L_003BD9A4;
    case 196u: goto L_003BD9D8;
    case 197u: goto L_003BDA08;
    case 198u: goto L_003BDA54;
    case 199u: goto L_003BDA70;
    case 200u: goto L_003BDAB4;
    case 201u: goto L_003BDAD0;
    case 202u: goto L_003BDB10;
    case 203u: goto L_003BDB28;
    case 204u: goto L_003BDB60;
    case 205u: goto L_003BDB78;
    case 206u: goto L_003BDBA4;
    case 207u: goto L_003BDBD8;
    case 208u: goto L_003BDC18;
    case 209u: goto L_003BDC5C;
    case 210u: goto L_003BDC98;
    case 211u: goto L_003BDCC0;
    case 212u: goto L_003BDCF0;
    case 213u: goto L_003BDD00;
    case 214u: goto L_003BDD10;
    case 215u: goto L_003BDD20;
    case 216u: goto L_003BDD40;
    case 217u: goto L_003BDD50;
    case 218u: goto L_003BDD60;
    case 219u: goto L_003BDD70;
    case 220u: goto L_003BDD80;
    case 221u: goto L_003BDD90;
    case 222u: goto L_003BDDB0;
    case 223u: goto L_003BDDCC;
    case 224u: goto L_003BDDE4;
    case 225u: goto L_003BDDF0;
    case 226u: goto L_003BDE00;
    case 227u: goto L_003BDE14;
    case 228u: goto L_003BDE2C;
    case 229u: goto L_003BDE38;
    case 230u: goto L_003BDE50;
    case 231u: goto L_003BDE64;
    case 232u: goto L_003BDE7C;
    case 233u: goto L_003BDE90;
    case 234u: goto L_003BDEAC;
    case 235u: goto L_003BDEB4;
    case 236u: goto L_003BDEBC;
    case 237u: goto L_003BDEC8;
    case 238u: goto L_003BDED4;
    case 239u: goto L_003BDEF4;
    case 240u: goto L_003BDF10;
    case 241u: goto L_003BDF28;
    case 242u: goto L_003BDF34;
    case 243u: goto L_003BDF54;
    case 244u: goto L_003BDF70;
    case 245u: goto L_003BDF88;
    case 246u: goto L_003BDF94;
    case 247u: goto L_003BDFB4;
    case 248u: goto L_003BDFD0;
    case 249u: goto L_003BDFE8;
    case 250u: goto L_003BDFF4;
    case 251u: goto L_003BE010;
    case 252u: goto L_003BE0B0;
    case 253u: goto L_003BE0E0;
    case 254u: goto L_003BE130;
    case 255u: goto L_003BE1FC;
    case 256u: goto L_003BE208;
    case 257u: goto L_003BE224;
    case 258u: goto L_003BE23C;
    case 259u: goto L_003BE2B0;
    case 260u: goto L_003BE2BC;
    case 261u: goto L_003BE2D0;
    case 262u: goto L_003BE2F0;
    case 263u: goto L_003BE334;
    case 264u: goto L_003BE340;
    case 265u: goto L_003BE35C;
    case 266u: goto L_003BE370;
    case 267u: goto L_003BE390;
    case 268u: goto L_003BE3C8;
    case 269u: goto L_003BE3DC;
    case 270u: goto L_003BE3F0;
    case 271u: goto L_003BE440;
    case 272u: goto L_003BE46C;
    case 273u: goto L_003BE478;
    case 274u: goto L_003BE490;
    case 275u: goto L_003BE4AC;
    case 276u: goto L_003BE4DC;
    case 277u: goto L_003BE4E8;
    case 278u: goto L_003BE504;
    case 279u: goto L_003BE510;
    case 280u: goto L_003BE520;
    case 281u: goto L_003BE558;
    case 282u: goto L_003BE570;
    case 283u: goto L_003BE594;
    case 284u: goto L_003BE640;
    case 285u: goto L_003BE658;
    case 286u: goto L_003BE668;
    case 287u: goto L_003BE674;
    case 288u: goto L_003BE6A0;
    case 289u: goto L_003BE6C4;
    case 290u: goto L_003BE6E0;
    case 291u: goto L_003BE71C;
    case 292u: goto L_003BE724;
    case 293u: goto L_003BE72C;
    case 294u: goto L_003BE760;
    case 295u: goto L_003BE778;
    case 296u: goto L_003BE794;
    case 297u: goto L_003BE7A8;
    case 298u: goto L_003BE7D8;
    case 299u: goto L_003BE810;
    case 300u: goto L_003BE818;
    case 301u: goto L_003BE820;
    case 302u: goto L_003BE83C;
    case 303u: goto L_003BE844;
    case 304u: goto L_003BE85C;
    case 305u: goto L_003BE86C;
    case 306u: goto L_003BE878;
    case 307u: goto L_003BE880;
    case 308u: goto L_003BE8A0;
    case 309u: goto L_003BE8AC;
    case 310u: goto L_003BE8CC;
    case 311u: goto L_003BE910;
    case 312u: goto L_003BE930;
    case 313u: goto L_003BE940;
    case 314u: goto L_003BE960;
    case 315u: goto L_003BE970;
    case 316u: goto L_003BE980;
    case 317u: goto L_003BE990;
    case 318u: goto L_003BE9A0;
    case 319u: goto L_003BE9C0;
    case 320u: goto L_003BE9D0;
    case 321u: goto L_003BE9DC;
    case 322u: goto L_003BEA14;
    case 323u: goto L_003BEA30;
    case 324u: goto L_003BEA50;
    case 325u: goto L_003BEA5C;
    case 326u: goto L_003BEA80;
    case 327u: goto L_003BEAB4;
    case 328u: goto L_003BEACC;
    case 329u: goto L_003BEAD8;
    case 330u: goto L_003BEB18;
    case 331u: goto L_003BEB5C;
    case 332u: goto L_003BEB74;
    case 333u: goto L_003BEB90;
    case 334u: goto L_003BEBB8;
    case 335u: goto L_003BEBE4;
    case 336u: goto L_003BEC10;
    case 337u: goto L_003BEC54;
    case 338u: goto L_003BEC60;
    case 339u: goto L_003BEC9C;
    case 340u: goto L_003BECB0;
    case 341u: goto L_003BECCC;
    case 342u: goto L_003BECF4;
    case 343u: goto L_003BED20;
    case 344u: goto L_003BED70;
    case 345u: goto L_003BED88;
    case 346u: goto L_003BEDA0;
    case 347u: goto L_003BEDD4;
    case 348u: goto L_003BEDDC;
    case 349u: goto L_003BEE0C;
    case 350u: goto L_003BEE40;
    case 351u: goto L_003BEE88;
    case 352u: goto L_003BEE9C;
    case 353u: goto L_003BEEA8;
    case 354u: goto L_003BEEB4;
    case 355u: goto L_003BEEBC;
    case 356u: goto L_003BEECC;
    case 357u: goto L_003BEEEC;
    case 358u: goto L_003BEF00;
    case 359u: goto L_003BEF0C;
    case 360u: goto L_003BEF18;
    case 361u: goto L_003BEF20;
    case 362u: goto L_003BEF30;
    case 363u: goto L_003BEF3C;
    case 364u: goto L_003BEF48;
    case 365u: goto L_003BEF50;
    case 366u: goto L_003BEF60;
    case 367u: goto L_003BEF8C;
    case 368u: goto L_003BEFA0;
    case 369u: goto L_003BEFAC;
    case 370u: goto L_003BEFB8;
    case 371u: goto L_003BEFC0;
    case 372u: goto L_003BEFD0;
    case 373u: goto L_003BEFF0;
    case 374u: goto L_003BF004;
    case 375u: goto L_003BF010;
    case 376u: goto L_003BF01C;
    case 377u: goto L_003BF024;
    case 378u: goto L_003BF034;
    case 379u: goto L_003BF040;
    case 380u: goto L_003BF04C;
    case 381u: goto L_003BF054;
    case 382u: goto L_003BF064;
    case 383u: goto L_003BF0A4;
    case 384u: goto L_003BF0B4;
    case 385u: goto L_003BF0D0;
    case 386u: goto L_003BF0E4;
    case 387u: goto L_003BF0F0;
    case 388u: goto L_003BF100;
    case 389u: goto L_003BF140;
    case 390u: goto L_003BF150;
    case 391u: goto L_003BF160;
    case 392u: goto L_003BF190;
    case 393u: goto L_003BF1EC;
    case 394u: goto L_003BF1F4;
    case 395u: goto L_003BF200;
    case 396u: goto L_003BF21C;
    case 397u: goto L_003BF264;
    case 398u: goto L_003BF2A0;
    case 399u: goto L_003BF2B0;
    case 400u: goto L_003BF2C0;
    case 401u: goto L_003BF2E0;
    case 402u: goto L_003BF2F0;
    case 403u: goto L_003BF300;
    case 404u: goto L_003BF338;
    case 405u: goto L_003BF350;
    case 406u: goto L_003BF370;
    case 407u: goto L_003BF394;
    case 408u: goto L_003BF3B0;
    case 409u: goto L_003BF3E0;
    case 410u: goto L_003BF410;
    case 411u: goto L_003BF430;
    case 412u: goto L_003BF47C;
    case 413u: goto L_003BF490;
    case 414u: goto L_003BF4C0;
    case 415u: goto L_003BF4D0;
    case 416u: goto L_003BF4F0;
    case 417u: goto L_003BF4F8;
    case 418u: goto L_003BF510;
    case 419u: goto L_003BF52C;
    case 420u: goto L_003BF53C;
    case 421u: goto L_003BF54C;
    case 422u: goto L_003BF558;
    case 423u: goto L_003BF570;
    case 424u: goto L_003BF5A4;
    case 425u: goto L_003BF5B0;
    case 426u: goto L_003BF5C8;
    case 427u: goto L_003BF5E0;
    case 428u: goto L_003BF600;
    case 429u: goto L_003BF614;
    case 430u: goto L_003BF620;
    case 431u: goto L_003BF640;
    case 432u: goto L_003BF664;
    case 433u: goto L_003BF680;
    case 434u: goto L_003BF6A4;
    case 435u: goto L_003BF6BC;
    case 436u: goto L_003BF6E0;
    case 437u: goto L_003BF6F0;
    case 438u: goto L_003BF714;
    case 439u: goto L_003BF720;
    case 440u: goto L_003BF730;
    case 441u: goto L_003BF740;
    case 442u: goto L_003BF760;
    case 443u: goto L_003BF768;
    case 444u: goto L_003BF7A4;
    case 445u: goto L_003BF7B8;
    case 446u: goto L_003BF7CC;
    case 447u: goto L_003BF7E0;
    case 448u: goto L_003BF808;
    case 449u: goto L_003BF814;
    case 450u: goto L_003BF824;
    case 451u: goto L_003BF830;
    case 452u: goto L_003BF83C;
    case 453u: goto L_003BF848;
    case 454u: goto L_003BF854;
    case 455u: goto L_003BF860;
    case 456u: goto L_003BF880;
    case 457u: goto L_003BF898;
    case 458u: goto L_003BF8A0;
    case 459u: goto L_003BF8A8;
    case 460u: goto L_003BF8B0;
    case 461u: goto L_003BF8B8;
    case 462u: goto L_003BF8C0;
    case 463u: goto L_003BF8E8;
    case 464u: goto L_003BF8F8;
    case 465u: goto L_003BF908;
    case 466u: goto L_003BF918;
    case 467u: goto L_003BF928;
    case 468u: goto L_003BF970;
    case 469u: goto L_003BFB54;
    case 470u: goto L_003BFB68;
    case 471u: goto L_003BFC50;
    case 472u: goto L_003BFC60;
    case 473u: goto L_003BFD00;
    case 474u: goto L_003BFD18;
    case 475u: goto L_003BFD28;
    case 476u: goto L_003BFD38;
    case 477u: goto L_003BFD44;
    case 478u: goto L_003BFD54;
    case 479u: goto L_003BFD64;
    case 480u: goto L_003BFD70;
    case 481u: goto L_003BFD80;
    case 482u: goto L_003BFD90;
    case 483u: goto L_003BFD9C;
    case 484u: goto L_003BFDB0;
    case 485u: goto L_003BFDBC;
    case 486u: goto L_003BFDD0;
    case 487u: goto L_003BFDE0;
    case 488u: goto L_003BFE28;
    case 489u: goto L_003BFE38;
    case 490u: goto L_003BFE44;
    case 491u: goto L_003BFE68;
    case 492u: goto L_003BFE7C;
    case 493u: goto L_003BFE98;
    case 494u: goto L_003BFEA0;
    case 495u: goto L_003BFEC8;
    case 496u: goto L_003BFEDC;
    case 497u: goto L_003BFEF8;
    case 498u: goto L_003BFF04;
    case 499u: goto L_003BFF28;
    case 500u: goto L_003BFF4C;
    case 501u: goto L_003BFF58;
    case 502u: goto L_003BFF74;
    case 503u: goto L_003BFF90;
    case 504u: goto L_003BFFA0;
    case 505u: goto L_003BFFAC;
    case 506u: goto L_003BFFBC;
    case 507u: goto L_003BFFCC;
    case 508u: goto L_003BFFD8;
    case 509u: goto L_003BFFF8;
    default: bad_entry(c, 0x003BC000u); return;
    }
L_003BC000:
    st32((c.r[20].w[0]), c.r[15].w[0]);
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[20], c.r[20].w[0] + 8u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[14], c.r[14].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBAB4u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 382u, depth); } }
L_003BC014:
    st32((c.r[20].w[0]), c.r[22].w[0]);
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[14], c.r[14].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[15].d[0] != 0ull; st32((c.r[29].w[0] + 40u), c.r[14].w[0]);  if (t) { goto L_003BC054; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC048u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BC048u) [[unlikely]] return; }
L_003BC048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 488u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F4u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 372u, depth); } }
    set32(c.r[20], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_003BC054:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[14], 0u + 1u);
    set32(c.r[15], c.r[15].w[0] - 28680u);
    st32((c.r[20].w[0] + 4u), c.r[14].w[0]);
    st32((c.r[20].w[0]), c.r[15].w[0]);
    set32(c.r[22], c.r[22].w[0] + c.r[5].w[0]);
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[14], c.r[14].w[0] + 1u);
    set32(c.r[15], c.r[15].w[0] + 1u);
    st32((c.r[29].w[0] + 40u), c.r[14].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8u);  if (t) { goto L_003BC0A4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC09Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BC09Cu) [[unlikely]] return; }
L_003BC09C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F4u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 372u, depth); } }
L_003BC0A4:
    set32(c.r[13], ld32((c.r[29].w[0] + 492u)));
    set32(c.r[15], ld32((c.r[29].w[0] + 488u)));
    st32((c.r[20].w[0]), c.r[22].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[13], c.r[13].w[0] - c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBEC4u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 401u, depth); } }
L_003BC0B8:
    c.r[15].d[0] = c.r[15].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[13], ld32((c.r[29].w[0] + 508u)));  if (t) { goto L_003BC0D0; } }
    c.r[15].d[0] = c.r[13].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], 0u + 1u);  if (t) { goto L_003BC290; } }
L_003BC0D0:
    c.r[15].d[0] = ld8((c.r[22].w[0]));
    set32(c.r[14], 0u + 2u);
    st8((c.r[29].w[0] + 464u), static_cast<std::uint8_t>(c.r[15].w[0]));
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[15], 0u + 46u);
    st8((c.r[29].w[0] + 465u), static_cast<std::uint8_t>(c.r[15].w[0]));
    set32(c.r[15], c.r[29].w[0] + 464u);
    st32((c.r[20].w[0] + 4u), c.r[14].w[0]);
    st32((c.r[20].w[0]), c.r[15].w[0]);
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[14], c.r[14].w[0] + 2u);
    set32(c.r[15], c.r[15].w[0] + 1u);
    st32((c.r[29].w[0] + 40u), c.r[14].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8u);  if (t) { goto L_003BC12C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC124u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BC124u) [[unlikely]] return; }
L_003BC124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F4u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 372u, depth); } }
L_003BC12C:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 528u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC138u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003BC138u) [[unlikely]] return; }
L_003BC138:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[13], ld32((c.r[29].w[0] + 492u)));  if (t) { goto L_003BC1E0; } }
    st32((c.r[20].w[0]), c.r[22].w[0]);
    set32(c.r[15], c.r[13].w[0] - 1u);
    st32((c.r[20].w[0] + 4u), c.r[15].w[0]);
    set32(c.r[15], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[14], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[15], c.r[15].w[0] + c.r[13].w[0]);
    set32(c.r[14], c.r[14].w[0] + 1u);
    set32(c.r[15], c.r[15].w[0] - 1u);
    st32((c.r[29].w[0] + 40u), c.r[15].w[0]);
    c.r[13].d[0] = c.r[14].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[13].d[0] != 0ull; st32((c.r[29].w[0] + 36u), c.r[14].w[0]);  if (t) { goto L_003BC18C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 1;
L_003BC178:
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC184u); set32(c.r[20], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BC184u) [[unlikely]] return; }
L_003BC184:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[13], ld32((c.r[29].w[0] + 500u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F8u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 373u, depth); } }
L_003BC18C:
    set32(c.r[14], ld32((c.r[29].w[0] + 536u)));
    c.budget -= 1;
L_003BC190:
    set32(c.r[15], c.r[29].w[0] + 16u);
    st32((c.r[20].w[0]), c.r[15].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[14].w[0]);
    set32(c.r[15], ld32((c.r[29].w[0] + 536u)));
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    st32((c.r[29].w[0] + 40u), c.r[14].w[0]);
    set32(c.r[15], c.r[15].w[0] + 1u);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBAE8u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 385u, depth); } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC1D0u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BC1D0u) [[unlikely]] return; }
L_003BC1D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F4u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 372u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[13], ld32((c.r[29].w[0] + 508u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBAECu | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 386u, depth); } }
L_003BC1E0:
    set32(c.r[15], ld32((c.r[29].w[0] + 492u)));
    set32(c.r[16], c.r[15].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[15].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC18Cu | kUnwind; return; } goto L_003BC18C; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003BC254; } }
    set32(c.r[18], 0u + 16u);
    set32(c.r[17], c.r[15].w[0] - 28736u);
    st32((c.r[20].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 3;
L_003BC204:
    st32((c.r[20].w[0]), c.r[17].w[0]);
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[14], c.r[14].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[15].d[0] != 0ull; st32((c.r[29].w[0] + 40u), c.r[14].w[0]);  if (t) { goto L_003BC240; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC238u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BC238u) [[unlikely]] return; }
L_003BC238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F4u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 372u, depth); } }
L_003BC240:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[15].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[15].d[0] == 0ull) { st32((c.r[20].w[0] + 4u), c.r[18].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC204u | kUnwind; return; } goto L_003BC204; }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 1;
L_003BC254:
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[15], c.r[15].w[0] - 28736u);
    st32((c.r[20].w[0]), c.r[15].w[0]);
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[14], c.r[14].w[0] + c.r[16].w[0]);
    set32(c.r[15], c.r[15].w[0] + 1u);
    st32((c.r[29].w[0] + 40u), c.r[14].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC18Cu | kUnwind; return; } goto L_003BC18C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 500u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC178u | kUnwind; return; } goto L_003BC178; } }
    c.budget -= 1;
L_003BC290:
    st32((c.r[20].w[0]), c.r[22].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[15].w[0]);
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[14], c.r[14].w[0] + 1u);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[15].d[0] != 0ull; st32((c.r[29].w[0] + 40u), c.r[14].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC18Cu | kUnwind; return; } goto L_003BC18C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC2C8u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BC2C8u) [[unlikely]] return; }
L_003BC2C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F4u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 372u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[14], ld32((c.r[29].w[0] + 536u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC190u | kUnwind; return; } goto L_003BC190; } }
L_003BC2D8:
    set32(c.r[14], ld32((c.r[29].w[0] + 508u)));
    c.r[15].d[0] = c.r[14].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], 0u + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB910u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 374u, depth); } }
    st8((c.r[29].w[0] + 465u), static_cast<std::uint8_t>(c.r[19].w[0]));
    st8((c.r[29].w[0] + 464u), static_cast<std::uint8_t>(c.r[15].w[0]));
    set32(c.r[14], 0u + 2u);
    set32(c.r[15], c.r[29].w[0] + 464u);
    st32((c.r[20].w[0] + 4u), c.r[14].w[0]);
    st32((c.r[20].w[0]), c.r[15].w[0]);
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[14], c.r[14].w[0] + 2u);
    set32(c.r[15], c.r[15].w[0] + 1u);
    st32((c.r[29].w[0] + 40u), c.r[14].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB910u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 374u, depth); } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC330u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BC330u) [[unlikely]] return; }
L_003BC330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F4u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 372u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[13], ld32((c.r[29].w[0] + 548u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB914u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 375u, depth); } }
L_003BC340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = ld8((c.r[29].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8A0u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 370u, depth); } }
L_003BC348:
    set32(c.r[13], ld32((c.r[29].w[0] + 508u)));
    c.r[15].d[0] = c.r[13].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[15].w[0] + c.r[23].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB7D4u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 366u, depth); } }
L_003BC358:
    c.r[15].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 1;
L_003BC35C:
    set32(c.r[14], ld32((c.r[29].w[0] + 544u)));
    c.r[15].d[0] = c.r[15].d[0] << 32;
    set32(c.r[22], c.r[22].w[0] - 1u);
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] >> 4;
    set32(c.r[15], c.r[14].w[0] + c.r[15].w[0]);
    c.r[14].d[0] = ld8((c.r[15].w[0]));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC358u | kUnwind; return; } goto L_003BC358; } }
L_003BC380:
    set32(c.r[15], c.r[29].w[0] - c.r[22].w[0]);
    c.budget -= 1;
L_003BC384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[15].w[0] + 460u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB7B8u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 365u, depth); } }
L_003BC38C:
    c.r[15].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 1;
L_003BC390:
    set32(c.r[22], c.r[22].w[0] - 1u);
    c.r[15].d[0] = c.r[15].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[2].d[0] = c.r[2].d[0] >> 3;
    c.r[14].d[0] = c.r[15].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC38Cu | kUnwind; return; } goto L_003BC38C; } }
    set32(c.r[13], ld32((c.r[29].w[0] + 508u)));
    c.r[15].d[0] = c.r[13].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], 0u + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC380u | kUnwind; return; } goto L_003BC380; } }
    c.budget -= 2;
    if (c.r[15].d[0] == c.r[14].d[0]) { set32(c.r[15], c.r[29].w[0] - c.r[22].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC384u | kUnwind; return; } goto L_003BC384; }
    set32(c.r[22], c.r[22].w[0] - 1u);
    c.budget -= 1;
L_003BC3C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC380u | kUnwind; return; } goto L_003BC380; } }
L_003BC3CC:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);  if (t) { goto L_003BC410; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003BC3D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC3E4u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_00AC(c, 28u, depth + 1u); else { c.pc = 0x003B12A0u; return; } if (c.pc != 0x003BC3E4u) [[unlikely]] return; }
L_003BC3E4:
    set32(c.r[22], c.r[22].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC400u); st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x003BC400u) [[unlikely]] return; }
L_003BC400:
    c.r[15].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC3D8u | kUnwind; return; } goto L_003BC3D8; } }
    c.r[15].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.budget -= 1;
L_003BC410:
    set32(c.r[22], c.r[22].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = c.r[15].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC3C4u | kUnwind; return; } goto L_003BC3C4; } }
L_003BC41C:
    c.budget -= 2;
    { const bool t = c.r[14].d[0] != 0ull; set32(c.r[15], c.r[29].w[0] - c.r[22].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC384u | kUnwind; return; } goto L_003BC384; } }
    set32(c.r[13], ld32((c.r[29].w[0] + 508u)));
    c.r[15].d[0] = c.r[13].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], 0u + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC380u | kUnwind; return; } goto L_003BC380; } }
    set32(c.r[22], c.r[29].w[0] + 459u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 459u), static_cast<std::uint8_t>(c.r[15].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC380u | kUnwind; return; } goto L_003BC380; } }
L_003BC440:
    c.r[15].d[0] = c.r[13].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], ld32((c.r[29].w[0] + 504u)));  if (t) { goto L_003BC454; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB738u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 361u, depth); } }
L_003BC454:
    set32(c.r[2], ld32((c.r[15].w[0])));
    set32(c.r[15], c.r[15].w[0] + 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 504u), c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB740u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 362u, depth); } }
L_003BC464:
    set32(c.r[14], ld32((c.r[29].w[0] + 508u)));
    c.r[6].d[0] = ld8((c.r[21].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = c.r[14].d[0] | 8ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB640u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 352u, depth); } }
L_003BC474:
    set32(c.r[14], ld32((c.r[29].w[0] + 508u)));
    c.r[14].d[0] = c.r[14].d[0] | 16ull;
    st32((c.r[29].w[0] + 508u), c.r[14].w[0]);
    c.budget -= 3;
L_003BC480:
    set32(c.r[13], ld32((c.r[29].w[0] + 508u)));
    c.r[15].d[0] = c.r[13].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], ld32((c.r[29].w[0] + 504u)));  if (t) { goto L_003BC4A8; } }
    c.r[2].d[0] = ld64((c.r[15].w[0]));
    c.budget -= 1;
L_003BC494:
    set32(c.r[14], c.r[15].w[0] + 8u);
    st32((c.r[29].w[0] + 504u), c.r[14].w[0]);
    c.budget -= 2;
L_003BC49C:
    c.r[14].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BC4A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB758u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 363u, depth); } }
L_003BC4A8:
    c.r[15].d[0] = c.r[13].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], ld32((c.r[29].w[0] + 504u)));  if (t) { goto L_003BC4BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[15].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC494u | kUnwind; return; } goto L_003BC494; } }
L_003BC4BC:
    c.r[2].d[0] = ld32((c.r[15].w[0]));
    set32(c.r[15], c.r[15].w[0] + 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 504u), c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC49Cu | kUnwind; return; } goto L_003BC49C; } }
L_003BC4CC:
    set32(c.r[14], ld32((c.r[29].w[0] + 508u)));
    c.r[14].d[0] = c.r[14].d[0] | 16ull;
    st32((c.r[29].w[0] + 508u), c.r[14].w[0]);
    c.budget -= 3;
L_003BC4D8:
    set32(c.r[13], ld32((c.r[29].w[0] + 508u)));
    c.r[15].d[0] = c.r[13].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], ld32((c.r[29].w[0] + 504u)));  if (t) { goto L_003BC4FC; } }
    c.r[2].d[0] = ld64((c.r[15].w[0]));
    c.budget -= 1;
L_003BC4EC:
    set32(c.r[14], c.r[15].w[0] + 8u);
    st32((c.r[29].w[0] + 504u), c.r[14].w[0]);
    c.budget -= 2;
L_003BC4F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[14], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC4A0u | kUnwind; return; } goto L_003BC4A0; } }
L_003BC4FC:
    c.r[15].d[0] = c.r[13].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], ld32((c.r[29].w[0] + 504u)));  if (t) { goto L_003BC510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[15].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC4ECu | kUnwind; return; } goto L_003BC4EC; } }
L_003BC510:
    c.r[2].d[0] = ld32((c.r[15].w[0]));
    set32(c.r[15], c.r[15].w[0] + 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 504u), c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC4F4u | kUnwind; return; } goto L_003BC4F4; } }
L_003BC520:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[15], c.r[15].w[0] - 28672u);
    c.budget -= 2;
L_003BC528:
    st32((c.r[29].w[0] + 544u), c.r[15].w[0]);
    set32(c.r[13], ld32((c.r[29].w[0] + 508u)));
    c.r[15].d[0] = c.r[13].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], ld32((c.r[29].w[0] + 504u)));  if (t) { goto L_003BC568; } }
    c.r[2].d[0] = ld64((c.r[15].w[0]));
    c.budget -= 1;
L_003BC540:
    set32(c.r[14], c.r[15].w[0] + 8u);
    st32((c.r[29].w[0] + 504u), c.r[14].w[0]);
    c.budget -= 2;
L_003BC548:
    set32(c.r[13], ld32((c.r[29].w[0] + 508u)));
    c.r[15].d[0] = c.r[13].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[14], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC4A0u | kUnwind; return; } goto L_003BC4A0; } }
    c.r[15].d[0] = c.r[13].d[0] | 2ull;
    if (c.r[2].d[0] != 0) c.r[13].d[0] = c.r[15].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 508u), c.r[13].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC4A0u | kUnwind; return; } goto L_003BC4A0; } }
L_003BC568:
    c.r[15].d[0] = c.r[13].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], ld32((c.r[29].w[0] + 504u)));  if (t) { goto L_003BC57C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[15].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC540u | kUnwind; return; } goto L_003BC540; } }
L_003BC57C:
    c.r[2].d[0] = ld32((c.r[15].w[0]));
    set32(c.r[15], c.r[15].w[0] + 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 504u), c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC548u | kUnwind; return; } goto L_003BC548; } }
L_003BC58C:
    set32(c.r[15], ld32((c.r[29].w[0] + 504u)));
    set32(c.r[22], c.r[29].w[0] + 112u);
    set32(c.r[13], ld32((c.r[29].w[0] + 504u)));
    set32(c.r[30], 0u + 1u);
    c.r[14].d[0] = ld8((c.r[15].w[0]));
    set32(c.r[13], c.r[13].w[0] + 8u);
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 504u), c.r[13].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 112u), static_cast<std::uint8_t>(c.r[14].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB7B8u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 365u, depth); } }
L_003BC5B4:
    set32(c.r[15], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[15].d[0]; set32(c.r[15], 0u + 103u);  if (t) { goto L_003BC788; } }
    set32(c.r[17], 0u + 6u);
    c.budget -= 1;
L_003BC5C4:
    set32(c.r[13], ld32((c.r[29].w[0] + 508u)));
    c.budget -= 1;
L_003BC5C8:
    c.r[15].d[0] = c.r[13].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], ld32((c.r[29].w[0] + 504u)));  if (t) { goto L_003BC770; } }
    set32(c.r[14], ld32((c.r[29].w[0] + 504u)));
    c.r[15].d[0] = ld64((c.r[15].w[0]));
    set32(c.r[14], c.r[14].w[0] + 8u);
    st64((c.r[29].w[0] + 528u), c.r[15].d[0]);
    st32((c.r[29].w[0] + 504u), c.r[14].w[0]);
    c.budget -= 5;
L_003BC5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC5F0u); c.r[4].d[0] = ld64((c.r[29].w[0] + 528u));  if (depth < kMaxDepth) unit_00AB(c, 338u, depth + 1u); else { c.pc = 0x003AEA10u; return; } if (c.pc != 0x003BC5F0u) [[unlikely]] return; }
L_003BC5F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld64((c.r[29].w[0] + 528u));  if (t) { goto L_003BC61C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC600u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003BC600u) [[unlikely]] return; }
L_003BC600:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003BC610; } }
    set32(c.r[14], 0u + 45u);
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.budget -= 2;
L_003BC610:
    set32(c.r[30], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[15].w[0] - 28648u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB7B8u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 365u, depth); } }
L_003BC61C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC624u); c.r[4].d[0] = ld64((c.r[29].w[0] + 528u));  if (depth < kMaxDepth) unit_00AB(c, 339u, depth + 1u); else { c.pc = 0x003AEA58u; return; } if (c.pc != 0x003BC624u) [[unlikely]] return; }
L_003BC624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003BC638; } }
    set32(c.r[30], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[15].w[0] - 28640u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB7B8u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 365u, depth); } }
L_003BC638:
    set32(c.r[13], ld32((c.r[29].w[0] + 508u)));
    set32(c.r[8], c.r[29].w[0] + 1u);
    set32(c.r[4], ld32((c.r[29].w[0] + 496u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[13].d[0] = c.r[13].d[0] | 256ull;
    c.r[5].d[0] = ld64((c.r[29].w[0] + 528u));
    st32((c.r[29].w[0] + 508u), c.r[13].w[0]);
    set32(c.r[9], c.r[29].w[0] + 488u);
    c.r[10].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[11], c.r[29].w[0] + 492u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC668u); set32(c.r[7], ld32((c.r[29].w[0] + 508u)));  if (depth < kMaxDepth) unit_00AF(c, 74u, depth + 1u); else { c.pc = 0x003BC950u; return; } if (c.pc != 0x003BC668u) [[unlikely]] return; }
L_003BC668:
    set32(c.r[15], 0u + 103u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[15].d[0]; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003BC680; } }
    set32(c.r[15], 0u + 71u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[15].d[0]; set32(c.r[5], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_003BC6AC; } }
L_003BC680:
    set32(c.r[5], ld32((c.r[29].w[0] + 488u)));
    c.r[15].d[0] = c.r[5].sd[0] < -3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; c.r[13].d[0] = c.r[19].d[0] ^ 103ull;  if (t) { goto L_003BC69C; } }
    c.r[15].d[0] = c.r[17].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[19], 0u + 103u);  if (t) { goto L_003BC6AC; } }
L_003BC69C:
    set32(c.r[15], 0u + 101u);
    set32(c.r[14], 0u + 69u);
    c.r[19].d[0] = c.r[15].d[0] + 0ull;
    if (c.r[13].d[0] != 0) c.r[19].d[0] = c.r[14].d[0];
    c.budget -= 4;
L_003BC6AC:
    c.r[15].d[0] = c.r[19].sd[0] < 102ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 16u);  if (t) { goto L_003BC704; } }
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[29].w[0] + 488u), c.r[5].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC6C8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 81u, depth + 1u); else { c.pc = 0x003BCAF8u; return; } if (c.pc != 0x003BC6C8u) [[unlikely]] return; }
L_003BC6C8:
    set32(c.r[15], ld32((c.r[29].w[0] + 492u)));
    st32((c.r[29].w[0] + 536u), c.r[2].w[0]);
    c.r[14].d[0] = c.r[15].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[14].d[0] == 0ull; set32(c.r[30], c.r[2].w[0] + c.r[15].w[0]);  if (t) { goto L_003BC6EC; } }
    set32(c.r[14], ld32((c.r[29].w[0] + 508u)));
    c.r[15].d[0] = c.r[14].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 1u)));  if (t) { goto L_003BC6F4; } }
L_003BC6EC:
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.budget -= 1;
L_003BC6F0:
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 1u)));
    c.budget -= 1;
L_003BC6F4:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[14], 0u + 45u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB7B8u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 365u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB7B8u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 365u, depth); } }
L_003BC704:
    set32(c.r[15], 0u + 102u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[15].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 492u)));  if (t) { goto L_003BC73C; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[30], c.r[17].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC6F0u | kUnwind; return; } goto L_003BC6F0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[30].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BC730; } }
    set32(c.r[13], ld32((c.r[29].w[0] + 508u)));
    c.r[15].d[0] = c.r[13].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 1u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC6F4u | kUnwind; return; } goto L_003BC6F4; } }
L_003BC730:
    set32(c.r[15], c.r[5].w[0] + c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[15].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC6F0u | kUnwind; return; } goto L_003BC6F0; } }
L_003BC73C:
    c.r[15].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[14], ld32((c.r[29].w[0] + 508u)));  if (t) { goto L_003BC75C; } }
    c.r[15].d[0] = c.r[14].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; c.r[30].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC6F0u | kUnwind; return; } goto L_003BC6F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC6F0u | kUnwind; return; } goto L_003BC6F0; } }
L_003BC75C:
    c.budget -= 2;
    if (c.r[5].sd[0] > 0) { set32(c.r[30], c.r[2].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC6F0u | kUnwind; return; } goto L_003BC6F0; }
    set32(c.r[15], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[15].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC6F0u | kUnwind; return; } goto L_003BC6F0; } }
L_003BC770:
    c.r[15].d[0] = ld64((c.r[15].w[0]));
    st64((c.r[29].w[0] + 528u), c.r[15].d[0]);
    set32(c.r[15], ld32((c.r[29].w[0] + 504u)));
    set32(c.r[15], c.r[15].w[0] + 8u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 504u), c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC5E8u | kUnwind; return; } goto L_003BC5E8; } }
L_003BC788:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[15].d[0]; set32(c.r[15], 0u + 71u);  if (t) { goto L_003BC798; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[15].d[0]; set32(c.r[13], ld32((c.r[29].w[0] + 508u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC5C8u | kUnwind; return; } goto L_003BC5C8; } }
L_003BC798:
    set32(c.r[15], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; if (c.r[17].d[0] == 0) c.r[17].d[0] = c.r[15].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC5C4u | kUnwind; return; } goto L_003BC5C4; } }
L_003BC7A4:
    set32(c.r[15], ld32((c.r[29].w[0] + 508u)));
    c.r[6].d[0] = ld8((c.r[21].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = c.r[15].d[0] | 64ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB608u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 349u, depth); } }
L_003BC7B4:
    c.r[6].d[0] = ld8((c.r[21].w[0]));
    set32(c.r[15], 0u + 108u);
    set32(c.r[14], c.r[6].w[0] << 24);
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[14].w[0]) >> 24));
    c.budget -= 6;
    { const bool t = c.r[14].d[0] != c.r[15].d[0]; set32(c.r[14], ld32((c.r[29].w[0] + 508u)));  if (t) { goto L_003BC7E0; } }
    set32(c.r[13], ld32((c.r[29].w[0] + 508u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[13].d[0] = c.r[13].d[0] | 16ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 508u), c.r[13].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB5ECu | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 346u, depth); } }
L_003BC7E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = c.r[14].d[0] | 16ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB640u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 352u, depth); } }
L_003BC7E8:
    set32(c.r[13], ld32((c.r[29].w[0] + 508u)));
    c.r[15].d[0] = c.r[13].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], ld32((c.r[29].w[0] + 504u)));  if (t) { goto L_003BC810; } }
    set32(c.r[13], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[14], ld32((c.r[15].w[0])));
    set32(c.r[15], c.r[15].w[0] + 8u);
    st64((c.r[14].w[0]), c.r[13].d[0]);
    c.budget -= 4;
L_003BC808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 504u), c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB504u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 337u, depth); } }
L_003BC810:
    c.r[15].d[0] = c.r[13].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[13], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003BC830; } }
    set32(c.r[15], ld32((c.r[29].w[0] + 504u)));
    set32(c.r[14], ld32((c.r[15].w[0])));
    set32(c.r[15], c.r[15].w[0] + 8u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[14].w[0]), static_cast<std::uint16_t>(c.r[13].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC808u | kUnwind; return; } goto L_003BC808; } }
L_003BC830:
    set32(c.r[15], ld32((c.r[29].w[0] + 504u)));
    set32(c.r[14], ld32((c.r[15].w[0])));
    set32(c.r[15], c.r[15].w[0] + 8u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[14].w[0]), c.r[13].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC808u | kUnwind; return; } goto L_003BC808; } }
L_003BC844:
    set32(c.r[15], ld32((c.r[29].w[0] + 504u)));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[14], c.r[14].w[0] - 28632u);
    set32(c.r[19], 0u + 120u);
    set32(c.r[2], ld32((c.r[15].w[0])));
    set32(c.r[13], c.r[15].w[0] + 8u);
    st32((c.r[29].w[0] + 544u), c.r[14].w[0]);
    set32(c.r[15], ld32((c.r[29].w[0] + 508u)));
    st32((c.r[29].w[0] + 504u), c.r[13].w[0]);
    set32(c.r[14], 0u + 2u);
    c.r[15].d[0] = c.r[15].d[0] | 2ull;
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 508u), c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC4A0u | kUnwind; return; } goto L_003BC4A0; } }
L_003BC878:
    set32(c.r[15], ld32((c.r[29].w[0] + 508u)));
    c.r[6].d[0] = ld8((c.r[21].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = c.r[15].d[0] | 16ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB608u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 349u, depth); } }
L_003BC888:
    set32(c.r[15], ld32((c.r[29].w[0] + 504u)));
    set32(c.r[13], c.r[15].w[0] + 8u);
    set32(c.r[22], ld32((c.r[15].w[0])));
    c.budget -= 5;
    { const bool t = c.r[22].d[0] != 0ull; st32((c.r[29].w[0] + 504u), c.r[13].w[0]);  if (t) { goto L_003BC8A4; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[22], c.r[15].w[0] - 28608u);
    c.budget -= 2;
L_003BC8A4:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003BC8DC; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC8B8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 368u, depth + 1u); else { c.pc = 0x003B7F20u; return; } if (c.pc != 0x003BC8B8u) [[unlikely]] return; }
L_003BC8B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[30].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003BC8D4; } }
    set32(c.r[30], c.r[2].w[0] - c.r[22].w[0]);
    c.r[15].d[0] = c.r[17].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[15].d[0] == 0ull) { st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB7B8u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 365u, depth); }
    c.r[30].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003BC8D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB7B8u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 365u, depth); } }
L_003BC8DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC8E4u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003BC8E4u) [[unlikely]] return; }
L_003BC8E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC8D4u | kUnwind; return; } goto L_003BC8D4; } }
L_003BC8EC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[22], c.r[29].w[0] + 112u);  if (t) { goto L_003BC904; } }
    st8((c.r[29].w[0] + 112u), static_cast<std::uint8_t>(c.r[19].w[0]));
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[30], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB7B8u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 365u, depth); } }
L_003BC904:
    set32(c.r[15], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 500u)));  if (t) { goto L_003BC920; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC918u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BC918u) [[unlikely]] return; }
L_003BC918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[13], ld32((c.r[29].w[0] + 500u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F8u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 373u, depth); } }
L_003BC920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 36u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F4u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 372u, depth); } }
L_003BC928:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[15], c.r[15].w[0] - 28632u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC528u | kUnwind; return; } goto L_003BC528; } }
    c.budget -= 1;
L_003BC938:
    set32(c.r[15], ld32((c.r[29].w[0] + 480u)));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != c.r[17].d[0]; set32(c.r[21], c.r[21].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB514u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 338u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB534u | kUnwind; return; } [[clang::musttail]] return unit_00AE(c, 340u, depth); } }
    c.budget -= 1;
L_003BC950:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[15], 0u + 102u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[17].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    set32(c.r[18], 0u + 3u);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 22;
    { const bool t = c.r[10].d[0] == c.r[15].d[0]; c.r[30].d[0] = c.r[11].d[0] + 0ull;  if (t) { goto L_003BC9C4; } }
    set32(c.r[15], 0u + 101u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == c.r[15].d[0]; set32(c.r[15], 0u + 69u);  if (t) { goto L_003BC9BC; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[15].d[0]; set32(c.r[18], 0u + 2u);  if (t) { goto L_003BC9C4; } }
L_003BC9BC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[18], 0u + 2u);
    c.budget -= 2;
L_003BC9C4:
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.budget -= 3;
    if (c.r[15].sd[0] >= 0) { st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  goto L_003BC9E8; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC9DCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003BC9DCu) [[unlikely]] return; }
L_003BC9DC:
    set32(c.r[15], 0u + 45u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.budget -= 3;
L_003BC9E8:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCA08u); set32(c.r[10], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00AC(c, 184u, depth + 1u); else { c.pc = 0x003B3840u; return; } if (c.pc != 0x003BCA08u) [[unlikely]] return; }
L_003BCA08:
    set32(c.r[15], 0u + 103u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[15].d[0]; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003BCA20; } }
    set32(c.r[15], 0u + 71u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[15].d[0]; set32(c.r[15], 0u + 102u);  if (t) { goto L_003BCA2C; } }
L_003BCA20:
    c.r[15].d[0] = c.r[23].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], 0u + 102u);  if (t) { goto L_003BCAF0; } }
L_003BCA2C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[15].d[0]; set32(c.r[16], c.r[18].w[0] + c.r[20].w[0]);  if (t) { goto L_003BCA68; } }
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[15], 0u + 48u);
    c.budget -= 4;
    if (c.r[14].d[0] != c.r[15].d[0]) { set32(c.r[15], ld32((c.r[21].w[0])));  goto L_003BCA64; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCA50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003BCA50u) [[unlikely]] return; }
L_003BCA50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[15], 0u + 1u);  if (t) { goto L_003BCA60; } }
    set32(c.r[15], c.r[15].w[0] - c.r[20].w[0]);
    st32((c.r[21].w[0]), c.r[15].w[0]);
    c.budget -= 2;
L_003BCA60:
    set32(c.r[15], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_003BCA64:
    set32(c.r[16], c.r[16].w[0] + c.r[15].w[0]);
    c.budget -= 1;
L_003BCA68:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCA74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003BCA74u) [[unlikely]] return; }
L_003BCA74:
    set32(c.r[15], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] == 0) c.r[15].d[0] = c.r[16].d[0];
    st32((c.r[29].w[0] + 4u), c.r[15].w[0]);
    set32(c.r[14], ld32((c.r[29].w[0] + 4u)));
    c.r[15].d[0] = c.r[14].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[15].d[0] == 0ull; c.r[13].d[0] = c.r[14].d[0] + 0ull;  if (t) { goto L_003BCAB4; } }
    set32(c.r[12], 0u + 48u);
    c.budget -= 1;
L_003BCA98:
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[14], c.r[13].w[0] + 1u);
    c.r[15].d[0] = c.r[14].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 4u), c.r[14].w[0]);
    c.budget -= 7;
    { const bool t = c.r[15].d[0] != 0ull; c.r[13].d[0] = c.r[14].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCA98u | kUnwind; return; } goto L_003BCA98; } }
L_003BCAB4:
    set32(c.r[15], c.r[14].w[0] - c.r[18].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[30].w[0]), c.r[15].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003BCAF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[14], ld32((c.r[29].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCAB4u | kUnwind; return; } goto L_003BCAB4; } }
L_003BCAF8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_003BCBB8; } }
    set32(c.r[15], 0u + 45u);
    set32(c.r[5], 0u - c.r[5].w[0]);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[15].w[0]));
    set32(c.r[2], c.r[4].w[0] + 2u);
    c.budget -= 4;
L_003BCB14:
    set32(c.r[13], c.r[29].w[0] + 40u);
    c.r[15].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; c.r[10].d[0] = c.r[13].d[0] + 0ull;  if (t) { goto L_003BCB9C; } }
    c.r[12].d[0] = c.r[13].d[0] + 0ull;
    set32(c.r[11], 0u + 10u);
    set32(c.r[13], 0u + 10u);
    mmi::div(c, 0, c.r[5].w[0], c.r[13].w[0]);
    c.budget -= 4;
L_003BCB34:
    set32(c.r[12], c.r[12].w[0] - 1u);
    c.budget -= 3;
    if (c.r[13].d[0] == 0ull) { breakpoint(c, 0x003BCB3Cu);  goto L_003BCB40; }
L_003BCB40:
    c.r[15].d[0] = c.hi.d[0];
    c.r[14].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[15].w[0] + 48u);
    c.r[5].d[0] = c.lo.d[0];
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[14].d[0] = c.r[14].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[14].d[0] == 0ull) { mmi::div(c, 0, c.r[5].w[0], c.r[13].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCB34u | kUnwind; return; } goto L_003BCB34; }
    set32(c.r[13], c.r[12].w[0] - 1u);
    set32(c.r[14], c.r[5].w[0] + 48u);
    c.r[15].d[0] = c.r[13].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull; st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));  if (t) { goto L_003BCB90; } }
L_003BCB74:
    c.r[15].d[0] = ld8((c.r[13].w[0]));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[15].d[0] = c.r[13].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCB74u | kUnwind; return; } goto L_003BCB74; } }
L_003BCB90:
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BCB9C:
    set32(c.r[15], 0u + 48u);
    set32(c.r[14], c.r[5].w[0] + 48u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCB90u | kUnwind; return; } goto L_003BCB90; } }
L_003BCBB8:
    set32(c.r[15], 0u + 43u);
    set32(c.r[2], c.r[4].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[15].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCB14u | kUnwind; return; } goto L_003BCB14; } }
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BCC00; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[14], ld32((c.r[15].w[0] + 30960u)));
    st32((c.r[16].w[0] + 84u), c.r[14].w[0]);
    c.r[4].d[0] = c.r[14].d[0] + 0ull;
    c.budget -= 4;
L_003BCC00:
    set32(c.r[15], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  goto L_003BCC18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCC14u);  if (depth < kMaxDepth) unit_00AD(c, 259u, depth + 1u); else { c.pc = 0x003B6E80u; return; } if (c.pc != 0x003BCC14u) [[unlikely]] return; }
L_003BCC14:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_003BCC18:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003BCC88; }
L_003BCC88:
    set32(c.r[29], c.r[29].w[0] - 736u);
    st64((c.r[29].w[0] + 664u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 680u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 696u), c.r[21].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 720u), c.r[30].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 656u), c.r[16].d[0]);
    c.r[21].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 672u), c.r[18].d[0]);
    c.r[30].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 688u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 704u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 712u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 728u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 608u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 612u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 620u), 0u);
    st32((c.r[29].w[0] + 616u), 0u);
    c.budget -= 19;
L_003BCCD4:
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 1;
L_003BCCD8:
    set32(c.r[2], ld32((c.r[29].w[0] + 616u)));
    c.budget -= 3;
    { const bool t = c.r[13].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_003BCE04; } }
    set32(c.r[15], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != c.r[15].d[0]; set32(c.r[15], 0u + 37u);  if (t) { goto L_003BCD64; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[12], c.r[15].w[0] - 31768u);
    set32(c.r[14], c.r[13].w[0] + c.r[12].w[0]);
    c.r[15].d[0] = ld8((c.r[14].w[0]));
    c.r[15].d[0] = c.r[15].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[15].d[0] == 0ull; c.r[16].d[0] = c.r[12].d[0] + 0ull;  if (t) { goto L_003BCD60; } }
L_003BCD0C:
    set32(c.r[15], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[15].sd[0] > 0) { set32(c.r[13], ld32((c.r[17].w[0])));  goto L_003BCD2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCD20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 90u, depth + 1u); else { c.pc = 0x003B8E38u; return; } if (c.pc != 0x003BCD20u) [[unlikely]] return; }
L_003BCD20:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCCD8u | kUnwind; return; } goto L_003BCCD8; }
    set32(c.r[13], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003BCD2C:
    c.r[15].d[0] = ld8((c.r[13].w[0]));
    set32(c.r[15], c.r[15].w[0] + c.r[16].w[0]);
    c.r[14].d[0] = ld8((c.r[15].w[0]));
    c.r[14].d[0] = c.r[14].d[0] & 8ull;
    c.budget -= 6;
    { const bool t = c.r[14].d[0] == 0ull; set32(c.r[15], c.r[13].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCCD4u | kUnwind; return; } goto L_003BCCD4; } }
    set32(c.r[14], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[15].w[0]);
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[14], c.r[14].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[14].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCD0Cu | kUnwind; return; } goto L_003BCD0C; } }
    c.budget -= 1;
L_003BCD60:
    set32(c.r[15], 0u + 37u);
    c.budget -= 1;
L_003BCD64:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != c.r[15].d[0]; set32(c.r[16], c.r[19].w[0] - 1u);  if (t) { goto L_003BCDA4; } }
    c.r[23].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003BCD74:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[15].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(121ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_003BD8E0; } }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[15], c.r[16].w[0] << 2);
    set32(c.r[14], c.r[14].w[0] - 28192u);
    set32(c.r[15], c.r[15].w[0] + c.r[14].w[0]);
    set32(c.r[13], ld32((c.r[15].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[13].w[0];  c.pc = t; if (t - 0x003BC000u < 16384u) { entry = entries_00AF[(t - 0x003BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003BCDA0:
    set32(c.r[16], c.r[19].w[0] - 1u);
    c.budget -= 1;
L_003BCDA4:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BCDA8:
    set32(c.r[15], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[15].sd[0] > 0) { set32(c.r[13], ld32((c.r[17].w[0])));  goto L_003BCDC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCDBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 90u, depth + 1u); else { c.pc = 0x003B8E38u; return; } if (c.pc != 0x003BCDBCu) [[unlikely]] return; }
L_003BCDBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[13], ld32((c.r[29].w[0] + 616u)));  if (t) { goto L_003BCE38; } }
    set32(c.r[13], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003BCDC8:
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[15].d[0] = ld8((c.r[13].w[0]));
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != c.r[14].d[0]; set32(c.r[15], c.r[13].w[0] + 1u);  if (t) { goto L_003BCE00; } }
    set32(c.r[14], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[15].w[0]);
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[14], c.r[14].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[18].sd[0] <= 0; st32((c.r[17].w[0] + 4u), c.r[14].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCDA8u | kUnwind; return; } goto L_003BCDA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCCD8u | kUnwind; return; } goto L_003BCCD8; } }
L_003BCE00:
    set32(c.r[2], ld32((c.r[29].w[0] + 616u)));
    c.budget -= 1;
L_003BCE04:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 656u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 664u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 672u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 680u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 688u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 696u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 704u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 712u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 720u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 728u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 736u);  c.pc = t; return; }
L_003BCE34:
    set32(c.r[13], ld32((c.r[29].w[0] + 616u)));
    c.budget -= 1;
L_003BCE38:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; if (c.r[13].d[0] != 0) c.r[2].d[0] = c.r[13].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCE04u | kUnwind; return; } goto L_003BCE04; } }
L_003BCE44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCE04u | kUnwind; return; } goto L_003BCE04; } }
L_003BCE4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[20].d[0] | 8ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCD74u | kUnwind; return; } goto L_003BCD74; } }
L_003BCE54:
    set32(c.r[15], 0u + 10u);
    mmi::mult(c, 0, c.r[23].w[0], c.r[15].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[15].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[15].w[0] - 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCD74u | kUnwind; return; } goto L_003BCD74; } }
L_003BCE68:
    c.r[20].d[0] = c.r[20].d[0] | 1ull;
    c.budget -= 1;
L_003BCE6C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[16], 0u + 3u);
    set32(c.r[15], c.r[15].w[0] - 21752u);
    c.budget -= 3;
L_003BCE78:
    st32((c.r[29].w[0] + 620u), c.r[15].w[0]);
    set32(c.r[30], 0u + 10u);
    c.budget -= 2;
L_003BCE80:
    set32(c.r[15], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[15].sd[0] > 0; c.r[15].d[0] = c.r[20].d[0] & 32ull;  if (t) { goto L_003BCE9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCE94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 90u, depth + 1u); else { c.pc = 0x003B8E38u; return; } if (c.pc != 0x003BCE94u) [[unlikely]] return; }
L_003BCE94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[15].d[0] = c.r[20].d[0] & 32ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCE34u | kUnwind; return; } goto L_003BCE34; } }
L_003BCE9C:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;  if (t) { goto L_003BCF08; } }
    set32(c.r[13], ld32((c.r[17].w[0])));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[12], c.r[15].w[0] - 31768u);
    c.r[14].d[0] = ld8((c.r[13].w[0]));
    set32(c.r[14], c.r[14].w[0] + c.r[12].w[0]);
    c.r[15].d[0] = ld8((c.r[14].w[0]));
    c.r[15].d[0] = c.r[15].d[0] & 8ull;
    c.budget -= 9;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;  if (t) { goto L_003BCF08; } }
    c.r[18].d[0] = c.r[12].d[0] + 0ull;
    set32(c.r[15], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 2;
L_003BCED0:
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[15], c.r[15].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[15].sd[0] <= 0; st32((c.r[17].w[0] + 4u), c.r[15].w[0]);  if (t) { goto L_003BD7B0; } }
    set32(c.r[15], c.r[13].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[15].w[0]);
    set32(c.r[13], ld32((c.r[17].w[0])));
    c.budget -= 3;
L_003BCEEC:
    c.r[15].d[0] = ld8((c.r[13].w[0]));
    set32(c.r[15], c.r[15].w[0] + c.r[18].w[0]);
    c.r[14].d[0] = ld8((c.r[15].w[0]));
    c.r[14].d[0] = c.r[14].d[0] & 8ull;
    c.budget -= 6;
    if (c.r[14].d[0] != 0ull) { set32(c.r[15], ld32((c.r[17].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCED0u | kUnwind; return; } goto L_003BCED0; }
    c.r[15].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 1;
L_003BCF08:
    c.budget -= 2;
    if (c.r[15].d[0] == 0ull) { c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCCD8u | kUnwind; return; } goto L_003BCCD8; }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[15], c.r[16].w[0] << 2);
    set32(c.r[14], c.r[14].w[0] - 27708u);
    set32(c.r[15], c.r[15].w[0] + c.r[14].w[0]);
    set32(c.r[13], ld32((c.r[15].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[13].w[0];  c.pc = t; if (t - 0x003BC000u < 16384u) { entry = entries_00AF[(t - 0x003BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003BCF2C:
    set32(c.r[15], 0u + 1u);
    c.r[14].d[0] = c.r[20].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[14].d[0] == 0ull; if (c.r[23].d[0] == 0) c.r[23].d[0] = c.r[15].d[0];  if (t) { goto L_003BCFA0; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 2;
L_003BCF44:
    c.r[15].d[0] = c.r[18].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003BCF80; } }
    set32(c.r[15], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[23], c.r[23].w[0] - c.r[18].w[0]);
    set32(c.r[15], c.r[15].w[0] + c.r[18].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCF68u); st32((c.r[17].w[0]), c.r[15].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 90u, depth + 1u); else { c.pc = 0x003B8E38u; return; } if (c.pc != 0x003BCF68u) [[unlikely]] return; }
L_003BCF68:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCF44u | kUnwind; return; } goto L_003BCF44; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[13], ld32((c.r[29].w[0] + 616u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCE38u | kUnwind; return; } goto L_003BCE38; } }
L_003BCF78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCCD4u | kUnwind; return; } goto L_003BCCD4; } }
L_003BCF80:
    set32(c.r[14], ld32((c.r[17].w[0])));
    set32(c.r[15], c.r[18].w[0] - c.r[23].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[15].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[23].w[0]);
    set32(c.r[14], c.r[14].w[0] + c.r[23].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[14].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCF78u | kUnwind; return; } goto L_003BCF78; } }
    c.budget -= 1;
L_003BCFA0:
    set32(c.r[15], ld32((c.r[29].w[0] + 612u)));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[15].w[0])));
    set32(c.r[15], c.r[15].w[0] + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCFC0u); st32((c.r[29].w[0] + 612u), c.r[15].w[0]);  if (depth < kMaxDepth) unit_00AD(c, 277u, depth + 1u); else { c.pc = 0x003B7130u; return; } if (c.pc != 0x003BCFC0u) [[unlikely]] return; }
L_003BCFC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[21], c.r[21].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCE34u | kUnwind; return; } goto L_003BCE34; } }
L_003BCFC8:
    set32(c.r[13], ld32((c.r[29].w[0] + 616u)));
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 616u), c.r[13].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCCD4u | kUnwind; return; } goto L_003BCCD4; } }
L_003BCFD8:
    set32(c.r[15], 0u - 1u);
    c.r[14].d[0] = c.r[20].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[14].d[0] == 0ull; if (c.r[23].d[0] == 0) c.r[23].d[0] = c.r[15].d[0];  if (t) { goto L_003BD070; } }
    set32(c.r[12], ld32((c.r[17].w[0])));
    c.r[15].d[0] = ld8((c.r[12].w[0]));
    set32(c.r[14], c.r[29].w[0] + c.r[15].w[0]);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[14].w[0])));
    c.budget -= 6;
    { const bool t = c.r[13].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003BD05C; } }
    set32(c.r[14], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003BD004:
    set32(c.r[15], c.r[12].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[15].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[14], c.r[14].w[0] - 1u);
    set32(c.r[23], c.r[23].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[23].d[0] == 0ull; st32((c.r[17].w[0] + 4u), c.r[14].w[0]);  if (t) { goto L_003BD05C; } }
    c.budget -= 2;
    if (c.r[14].sd[0] > 0) { set32(c.r[12], ld32((c.r[17].w[0])));  goto L_003BD048; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD030u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 90u, depth + 1u); else { c.pc = 0x003B8E38u; return; } if (c.pc != 0x003BD030u) [[unlikely]] return; }
L_003BD030:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[12], ld32((c.r[17].w[0])));  goto L_003BD048; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[13], ld32((c.r[29].w[0] + 616u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCE38u | kUnwind; return; } goto L_003BCE38; } }
L_003BD040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCCD4u | kUnwind; return; } goto L_003BCCD4; } }
L_003BD048:
    c.r[15].d[0] = ld8((c.r[12].w[0]));
    set32(c.r[14], c.r[29].w[0] + c.r[15].w[0]);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[14].w[0])));
    c.budget -= 5;
    if (c.r[13].d[0] != 0ull) { set32(c.r[14], ld32((c.r[17].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD004u | kUnwind; return; } goto L_003BD004; }
L_003BD05C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCCD4u | kUnwind; return; } goto L_003BCCD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 616u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCE04u | kUnwind; return; } goto L_003BCE04; } }
    c.budget -= 1;
L_003BD070:
    set32(c.r[15], ld32((c.r[29].w[0] + 612u)));
    set32(c.r[12], ld32((c.r[17].w[0])));
    set32(c.r[14], c.r[15].w[0] + 8u);
    set32(c.r[22], ld32((c.r[15].w[0])));
    st32((c.r[29].w[0] + 612u), c.r[14].w[0]);
    c.r[13].d[0] = ld8((c.r[12].w[0]));
    set32(c.r[15], c.r[29].w[0] + c.r[13].w[0]);
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0])));
    c.budget -= 10;
    { const bool t = c.r[14].d[0] == 0ull; c.r[18].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003BD0E4; } }
    set32(c.r[15], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003BD09C:
    set32(c.r[13], c.r[12].w[0] + 1u);
    set32(c.r[23], c.r[23].w[0] - 1u);
    set32(c.r[15], c.r[15].w[0] - 1u);
    st32((c.r[17].w[0] + 4u), c.r[15].w[0]);
    c.r[14].d[0] = ld8((c.r[12].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    st32((c.r[17].w[0]), c.r[13].w[0]);
    c.budget -= 9;
    { const bool t = c.r[23].d[0] == 0ull; set32(c.r[22], c.r[22].w[0] + 1u);  if (t) { goto L_003BD0E4; } }
    set32(c.r[15], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[15].sd[0] > 0) { set32(c.r[12], ld32((c.r[17].w[0])));  goto L_003BD104; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD0D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 90u, depth + 1u); else { c.pc = 0x003B8E38u; return; } if (c.pc != 0x003BD0D4u) [[unlikely]] return; }
L_003BD0D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[12], ld32((c.r[17].w[0])));  goto L_003BD104; }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == c.r[18].d[0]; set32(c.r[13], ld32((c.r[29].w[0] + 616u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCE38u | kUnwind; return; } goto L_003BCE38; } }
L_003BD0E4:
    set32(c.r[18], c.r[22].w[0] - c.r[18].w[0]);
    c.budget -= 1;
L_003BD0E8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 616u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCE04u | kUnwind; return; } goto L_003BCE04; } }
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[15], ld32((c.r[29].w[0] + 616u)));
    set32(c.r[15], c.r[15].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 616u), c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD040u | kUnwind; return; } goto L_003BD040; } }
L_003BD104:
    c.r[15].d[0] = ld8((c.r[12].w[0]));
    set32(c.r[14], c.r[29].w[0] + c.r[15].w[0]);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[14].w[0])));
    c.budget -= 5;
    if (c.r[13].d[0] != 0ull) { set32(c.r[15], ld32((c.r[17].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD09Cu | kUnwind; return; } goto L_003BD09C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[22].w[0] - c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD0E8u | kUnwind; return; } goto L_003BD0E8; } }
L_003BD120:
    set32(c.r[15], 0u - 1u);
    c.r[14].d[0] = c.r[20].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[14].d[0] == 0ull; if (c.r[23].d[0] == 0) c.r[23].d[0] = c.r[15].d[0];  if (t) { goto L_003BD1B8; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[13], ld32((c.r[17].w[0])));
    set32(c.r[12], c.r[15].w[0] - 31768u);
    c.r[15].d[0] = ld8((c.r[13].w[0]));
    set32(c.r[15], c.r[15].w[0] + c.r[12].w[0]);
    c.r[14].d[0] = ld8((c.r[15].w[0]));
    c.r[14].d[0] = c.r[14].d[0] & 8ull;
    c.budget -= 9;
    { const bool t = c.r[14].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD040u | kUnwind; return; } goto L_003BD040; } }
    c.r[16].d[0] = c.r[12].d[0] + 0ull;
    set32(c.r[14], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 2;
L_003BD15C:
    set32(c.r[15], c.r[13].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[15].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[14], c.r[14].w[0] - 1u);
    set32(c.r[23], c.r[23].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[23].d[0] == 0ull; st32((c.r[17].w[0] + 4u), c.r[14].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD040u | kUnwind; return; } goto L_003BD040; } }
    c.budget -= 2;
    if (c.r[14].sd[0] > 0) { set32(c.r[13], ld32((c.r[17].w[0])));  goto L_003BD194; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD188u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 90u, depth + 1u); else { c.pc = 0x003B8E38u; return; } if (c.pc != 0x003BD188u) [[unlikely]] return; }
L_003BD188:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[21], c.r[21].w[0] + c.r[18].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCCD4u | kUnwind; return; } goto L_003BCCD4; }
    set32(c.r[13], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003BD194:
    c.r[15].d[0] = ld8((c.r[13].w[0]));
    set32(c.r[15], c.r[15].w[0] + c.r[16].w[0]);
    c.r[14].d[0] = ld8((c.r[15].w[0]));
    c.r[14].d[0] = c.r[14].d[0] & 8ull;
    c.budget -= 6;
    if (c.r[14].d[0] == 0ull) { set32(c.r[14], ld32((c.r[17].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD15Cu | kUnwind; return; } goto L_003BD15C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCCD4u | kUnwind; return; } goto L_003BCCD4; } }
    c.budget -= 1;
L_003BD1B8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[12], ld32((c.r[17].w[0])));
    set32(c.r[11], c.r[15].w[0] - 31768u);
    set32(c.r[13], ld32((c.r[29].w[0] + 612u)));
    set32(c.r[15], ld32((c.r[29].w[0] + 612u)));
    c.r[14].d[0] = ld8((c.r[12].w[0]));
    set32(c.r[15], c.r[15].w[0] + 8u);
    set32(c.r[22], ld32((c.r[13].w[0])));
    st32((c.r[29].w[0] + 612u), c.r[15].w[0]);
    set32(c.r[14], c.r[14].w[0] + c.r[11].w[0]);
    c.r[15].d[0] = ld8((c.r[14].w[0]));
    c.r[15].d[0] = c.r[15].d[0] & 8ull;
    c.budget -= 14;
    { const bool t = c.r[15].d[0] != 0ull; c.r[18].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003BD254; } }
    c.r[16].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[15], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 2;
L_003BD1F8:
    set32(c.r[13], c.r[12].w[0] + 1u);
    set32(c.r[23], c.r[23].w[0] - 1u);
    set32(c.r[15], c.r[15].w[0] - 1u);
    st32((c.r[17].w[0] + 4u), c.r[15].w[0]);
    c.r[14].d[0] = ld8((c.r[12].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    st32((c.r[17].w[0]), c.r[13].w[0]);
    c.budget -= 9;
    { const bool t = c.r[23].d[0] == 0ull; set32(c.r[22], c.r[22].w[0] + 1u);  if (t) { goto L_003BD254; } }
    set32(c.r[15], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[15].sd[0] > 0) { set32(c.r[12], ld32((c.r[17].w[0])));  goto L_003BD23C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD230u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 90u, depth + 1u); else { c.pc = 0x003B8E38u; return; } if (c.pc != 0x003BD230u) [[unlikely]] return; }
L_003BD230:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[15], c.r[22].w[0] - c.r[18].w[0]);  if (t) { goto L_003BD258; } }
    set32(c.r[12], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003BD23C:
    c.r[15].d[0] = ld8((c.r[12].w[0]));
    set32(c.r[15], c.r[15].w[0] + c.r[16].w[0]);
    c.r[14].d[0] = ld8((c.r[15].w[0]));
    c.r[14].d[0] = c.r[14].d[0] & 8ull;
    c.budget -= 6;
    if (c.r[14].d[0] == 0ull) { set32(c.r[15], ld32((c.r[17].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD1F8u | kUnwind; return; } goto L_003BD1F8; }
L_003BD254:
    set32(c.r[15], c.r[22].w[0] - c.r[18].w[0]);
    c.budget -= 1;
L_003BD258:
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCFC8u | kUnwind; return; } goto L_003BCFC8; } }
L_003BD264:
    set32(c.r[23], c.r[23].w[0] - 1u);
    set32(c.r[15], 0u + 348u);
    c.r[14].d[0] = c.r[23].d[0] < static_cast<std::uint64_t>(349ll) ? 1ull : 0ull;
    c.r[20].d[0] = c.r[20].d[0] | 704ull;
    if (c.r[14].d[0] == 0) c.r[23].d[0] = c.r[15].d[0];
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[23].d[0] == 0ull; set32(c.r[22], c.r[29].w[0] + 256u);  if (t) { goto L_003BD308; } }
    set32(c.r[15], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003BD288:
    c.r[16].d[0] = ld8((c.r[15].w[0]));
    set32(c.r[14], c.r[16].w[0] - 43u);
    c.r[15].d[0] = c.r[14].d[0] < static_cast<std::uint64_t>(78ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], c.r[14].w[0] << 2);  if (t) { goto L_003BD308; } }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[14], c.r[14].w[0] - 27688u);
    set32(c.r[15], c.r[15].w[0] + c.r[14].w[0]);
    set32(c.r[13], ld32((c.r[15].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[13].w[0];  c.pc = t; if (t - 0x003BC000u < 16384u) { entry = entries_00AF[(t - 0x003BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003BD2B4:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull; c.r[15].d[0] = c.r[20].d[0] & 512ull;  if (t) { goto L_003BD2C8; } }
    set32(c.r[30], 0u + 8u);
    c.r[20].d[0] = c.r[20].d[0] | 256ull;
    c.r[15].d[0] = c.r[20].d[0] & 512ull;
    c.budget -= 3;
L_003BD2C8:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], 0u - 449u);  if (t) { goto L_003BD2D4; } }
    set32(c.r[15], 0u - 705u);
    c.budget -= 1;
L_003BD2D4:
    c.r[20].d[0] = c.r[20].d[0] & c.r[15].d[0];
    c.budget -= 1;
L_003BD2D8:
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[15], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[15], c.r[15].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[15].sd[0] <= 0; st32((c.r[17].w[0] + 4u), c.r[15].w[0]);  if (t) { goto L_003BD434; } }
    set32(c.r[15], ld32((c.r[17].w[0])));
    set32(c.r[15], c.r[15].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[15].w[0]);
    set32(c.r[23], c.r[23].w[0] - 1u);
    c.budget -= 4;
L_003BD300:
    c.budget -= 2;
    if (c.r[23].d[0] != 0ull) { set32(c.r[15], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD288u | kUnwind; return; } goto L_003BD288; }
L_003BD308:
    c.r[15].d[0] = c.r[20].d[0] & 128ull;
    c.budget -= 1;
L_003BD30C:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[14], c.r[29].w[0] + 256u);  if (t) { goto L_003BD338; } }
    c.r[15].d[0] = c.r[14].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[15].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 616u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCE04u | kUnwind; return; } goto L_003BCE04; }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] - 1u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD32Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 319u, depth + 1u); else { c.pc = 0x003BB100u; return; } if (c.pc != 0x003BD32Cu) [[unlikely]] return; }
L_003BD32C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 616u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCE04u | kUnwind; return; } goto L_003BCE04; } }
    c.budget -= 1;
L_003BD338:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] - 1u)));
    set32(c.r[15], 0u + 120u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[15].d[0]; set32(c.r[15], 0u + 88u);  if (t) { goto L_003BD350; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[15].d[0]; c.r[15].d[0] = c.r[20].d[0] & 8ull;  if (t) { goto L_003BD364; } }
L_003BD350:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[22], c.r[22].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD360u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 319u, depth + 1u); else { c.pc = 0x003BB100u; return; } if (c.pc != 0x003BD360u) [[unlikely]] return; }
L_003BD360:
    c.r[15].d[0] = c.r[20].d[0] & 8ull;
    c.budget -= 1;
L_003BD364:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[13], c.r[29].w[0] + 256u);  if (t) { goto L_003BD3BC; } }
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[15], ld32((c.r[29].w[0] + 620u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[15].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD388u); set32(c.r[4], ld32((c.r[29].w[0] + 608u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BD388u) [[unlikely]] return; }
L_003BD388:
    c.r[15].d[0] = c.r[20].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], ld32((c.r[29].w[0] + 612u)));  if (t) { goto L_003BD3C8; } }
    c.r[13].d[0] = c.r[2].d[0] << 32;
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 32);
    set32(c.r[14], ld32((c.r[15].w[0])));
    set32(c.r[15], c.r[15].w[0] + 8u);
    st32((c.r[14].w[0]), c.r[13].w[0]);
    st32((c.r[29].w[0] + 612u), c.r[15].w[0]);
    c.budget -= 6;
L_003BD3AC:
    set32(c.r[14], ld32((c.r[29].w[0] + 616u)));
    set32(c.r[14], c.r[14].w[0] + 1u);
    st32((c.r[29].w[0] + 616u), c.r[14].w[0]);
    set32(c.r[13], c.r[29].w[0] + 256u);
    c.budget -= 4;
L_003BD3BC:
    set32(c.r[15], c.r[22].w[0] - c.r[13].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCCD4u | kUnwind; return; } goto L_003BCCD4; } }
L_003BD3C8:
    c.r[15].d[0] = c.r[20].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], ld32((c.r[29].w[0] + 612u)));  if (t) { goto L_003BD3F0; } }
    c.r[14].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[13], ld32((c.r[29].w[0] + 612u)));
    set32(c.r[15], ld32((c.r[15].w[0])));
    set32(c.r[13], c.r[13].w[0] + 8u);
    st32((c.r[29].w[0] + 612u), c.r[13].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[15].w[0]), static_cast<std::uint16_t>(c.r[14].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD3ACu | kUnwind; return; } goto L_003BD3AC; } }
L_003BD3F0:
    c.r[15].d[0] = c.r[20].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], ld32((c.r[29].w[0] + 612u)));  if (t) { goto L_003BD414; } }
    set32(c.r[14], ld32((c.r[29].w[0] + 612u)));
    set32(c.r[15], ld32((c.r[15].w[0])));
    set32(c.r[14], c.r[14].w[0] + 8u);
    st32((c.r[29].w[0] + 612u), c.r[14].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st64((c.r[15].w[0]), c.r[2].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD3ACu | kUnwind; return; } goto L_003BD3AC; } }
L_003BD414:
    c.r[14].d[0] = c.r[2].d[0] << 32;
    set32(c.r[13], ld32((c.r[29].w[0] + 612u)));
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 32);
    set32(c.r[15], ld32((c.r[15].w[0])));
    set32(c.r[13], c.r[13].w[0] + 8u);
    st32((c.r[29].w[0] + 612u), c.r[13].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[15].w[0]), c.r[14].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD3ACu | kUnwind; return; } goto L_003BD3AC; } }
L_003BD434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD43Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 90u, depth + 1u); else { c.pc = 0x003B8E38u; return; } if (c.pc != 0x003BD43Cu) [[unlikely]] return; }
L_003BD43C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[15].d[0] = c.r[20].d[0] & 128ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD30Cu | kUnwind; return; } goto L_003BD30C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[23].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD300u | kUnwind; return; } goto L_003BD300; } }
L_003BD44C:
    c.r[15].d[0] = c.r[20].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], 0u - 65u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD308u | kUnwind; return; } goto L_003BD308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[20].d[0] & c.r[15].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD2D8u | kUnwind; return; } goto L_003BD2D8; } }
L_003BD460:
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[15], c.r[30].w[0] << 1);
    set32(c.r[14], c.r[14].w[0] - 28240u);
    set32(c.r[13], 0u - 449u);
    set32(c.r[15], c.r[15].w[0] + c.r[14].w[0]);
    c.r[20].d[0] = c.r[20].d[0] & c.r[13].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[30].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD2D8u | kUnwind; return; } goto L_003BD2D8; } }
L_003BD480:
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[15], c.r[30].w[0] << 1);
    set32(c.r[14], c.r[14].w[0] - 28240u);
    set32(c.r[15], c.r[15].w[0] + c.r[14].w[0]);
    c.r[30].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0])));
    c.r[14].d[0] = c.r[30].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[14].d[0] != 0ull; set32(c.r[15], 0u - 449u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD308u | kUnwind; return; } goto L_003BD308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[20].d[0] & c.r[15].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD2D8u | kUnwind; return; } goto L_003BD2D8; } }
L_003BD4A8:
    c.r[15].d[0] = c.r[30].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[15], 0u - 449u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD308u | kUnwind; return; } goto L_003BD308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[20].d[0] & c.r[15].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD2D8u | kUnwind; return; } goto L_003BD2D8; } }
    c.budget -= 1;
L_003BD4C0:
    c.r[15].d[0] = c.r[20].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], c.r[29].w[0] + 257u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD308u | kUnwind; return; } goto L_003BD308; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[15].d[0]; set32(c.r[15], 0u - 257u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD308u | kUnwind; return; } goto L_003BD308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], 0u + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD2D4u | kUnwind; return; } goto L_003BD2D4; } }
L_003BD4DC:
    set32(c.r[23], c.r[23].w[0] - 1u);
    st64((c.r[29].w[0] + 624u), 0ull);
    c.r[14].d[0] = c.r[23].d[0] < static_cast<std::uint64_t>(349ll) ? 1ull : 0ull;
    st32((c.r[29].w[0] + 640u), 0u);
    set32(c.r[15], 0u + 348u);
    st64((c.r[29].w[0] + 632u), 0ull);
    if (c.r[14].d[0] == 0) c.r[23].d[0] = c.r[15].d[0];
    c.r[20].d[0] = c.r[20].d[0] | 960ull;
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { const bool t = c.r[23].d[0] == 0ull; set32(c.r[22], c.r[29].w[0] + 256u);  if (t) { goto L_003BD578; } }
    set32(c.r[15], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003BD510:
    c.r[16].d[0] = ld8((c.r[15].w[0]));
    set32(c.r[14], c.r[16].w[0] - 43u);
    c.r[15].d[0] = c.r[14].d[0] < static_cast<std::uint64_t>(59ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], c.r[14].w[0] << 2);  if (t) { goto L_003BD578; } }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[14], c.r[14].w[0] - 27376u);
    set32(c.r[15], c.r[15].w[0] + c.r[14].w[0]);
    set32(c.r[13], ld32((c.r[15].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[13].w[0];  c.pc = t; if (t - 0x003BC000u < 16384u) { entry = entries_00AF[(t - 0x003BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003BD53C:
    c.r[15].d[0] = c.r[20].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], 0u - 65u);  if (t) { goto L_003BD720; } }
    c.r[18].d[0] = c.r[18].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[20].d[0] = c.r[20].d[0] & c.r[15].d[0];
    c.budget -= 2;
L_003BD550:
    set32(c.r[15], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[15], c.r[15].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[15].sd[0] <= 0; st32((c.r[17].w[0] + 4u), c.r[15].w[0]);  if (t) { goto L_003BD704; } }
    set32(c.r[15], ld32((c.r[17].w[0])));
    set32(c.r[15], c.r[15].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[15].w[0]);
    c.budget -= 3;
L_003BD570:
    c.budget -= 2;
    if (c.r[23].d[0] != 0ull) { set32(c.r[15], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD510u | kUnwind; return; } goto L_003BD510; }
L_003BD578:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[15], 0u - 129u);  if (t) { goto L_003BD584; } }
    c.r[20].d[0] = c.r[20].d[0] & c.r[15].d[0];
    c.budget -= 1;
L_003BD584:
    c.r[15].d[0] = c.r[20].d[0] & 128ull;
    c.budget -= 1;
L_003BD588:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].d[0] = c.r[20].d[0] & 512ull;  if (t) { goto L_003BD600; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[13], c.r[29].w[0] + 256u);  if (t) { goto L_003BD5C0; } }
    c.r[15].d[0] = c.r[13].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003BD59C:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[22], c.r[22].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCE00u | kUnwind; return; } goto L_003BCE00; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD5B0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));  if (depth < kMaxDepth) unit_00AE(c, 319u, depth + 1u); else { c.pc = 0x003BB100u; return; } if (c.pc != 0x003BD5B0u) [[unlikely]] return; }
L_003BD5B0:
    set32(c.r[14], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = c.r[14].d[0] < c.r[22].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD59Cu | kUnwind; return; } goto L_003BD59C; } }
    c.budget -= 1;
L_003BD5C0:
    set32(c.r[22], c.r[22].w[0] - 1u);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    set32(c.r[15], 0u + 101u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[15].d[0]; set32(c.r[21], c.r[21].w[0] - 1u);  if (t) { goto L_003BD5F4; } }
    set32(c.r[15], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[15].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003BD5F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD5E8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 319u, depth + 1u); else { c.pc = 0x003BB100u; return; } if (c.pc != 0x003BD5E8u) [[unlikely]] return; }
L_003BD5E8:
    set32(c.r[22], c.r[22].w[0] - 1u);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    set32(c.r[21], c.r[21].w[0] - 1u);
    c.budget -= 3;
L_003BD5F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD600u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 319u, depth + 1u); else { c.pc = 0x003BB100u; return; } if (c.pc != 0x003BD600u) [[unlikely]] return; }
L_003BD600:
    c.r[15].d[0] = c.r[20].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCCD8u | kUnwind; return; } goto L_003BCCD8; }
    c.r[14].d[0] = c.r[20].d[0] & 768ull;
    set32(c.r[15], 0u + 512u);
    c.budget -= 4;
    { const bool t = c.r[14].d[0] != c.r[15].d[0]; st8((c.r[22].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_003BD6D8; } }
    c.r[15].d[0] = ld64((c.r[29].w[0] + 624u));
    st32((c.r[29].w[0] + 640u), c.r[22].w[0]);
    c.r[18].d[0] = c.r[18].d[0] - c.r[15].d[0];
    st64((c.r[29].w[0] + 632u), c.r[18].d[0]);
    c.r[6].d[0] = 0ull - c.r[18].d[0];
    c.budget -= 5;
L_003BD630:
    c.r[13].d[0] = ld64((c.r[29].w[0] + 632u));
    c.budget -= 3;
    { const bool t = c.r[13].d[0] == 0ull; set32(c.r[14], ld32((c.r[29].w[0] + 640u)));  if (t) { goto L_003BD664; } }
    set32(c.r[15], c.r[29].w[0] + 585u);
    set32(c.r[13], ld32((c.r[29].w[0] + 640u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[15].d[0] = c.r[14].d[0] < c.r[15].d[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] - 28200u);
    set32(c.r[14], c.r[29].w[0] + 584u);
    if (c.r[15].d[0] == 0) c.r[13].d[0] = c.r[14].d[0];
    st32((c.r[29].w[0] + 640u), c.r[13].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD664u); set32(c.r[4], ld32((c.r[29].w[0] + 640u)));  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x003BD664u) [[unlikely]] return; }
L_003BD664:
    set32(c.r[4], ld32((c.r[29].w[0] + 608u)));
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD674u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 114u, depth + 1u); else { c.pc = 0x003B26A0u; return; } if (c.pc != 0x003BD674u) [[unlikely]] return; }
L_003BD674:
    c.r[15].d[0] = c.r[20].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], ld32((c.r[29].w[0] + 612u)));  if (t) { goto L_003BD6A0; } }
    set32(c.r[14], ld32((c.r[15].w[0])));
    set32(c.r[15], c.r[15].w[0] + 8u);
    st32((c.r[29].w[0] + 612u), c.r[15].w[0]);
    c.budget -= 3;
L_003BD68C:
    st64((c.r[14].w[0]), c.r[2].d[0]);
    c.budget -= 1;
L_003BD690:
    set32(c.r[15], ld32((c.r[29].w[0] + 616u)));
    set32(c.r[15], c.r[15].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 616u), c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCCD4u | kUnwind; return; } goto L_003BCCD4; } }
L_003BD6A0:
    c.r[15].d[0] = c.r[20].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], ld32((c.r[29].w[0] + 612u)));  if (t) { goto L_003BD6BC; } }
    set32(c.r[13], c.r[15].w[0] + 8u);
    set32(c.r[14], ld32((c.r[15].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 612u), c.r[13].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD68Cu | kUnwind; return; } goto L_003BD68C; } }
L_003BD6BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[14], c.r[15].w[0] + 8u);
    set32(c.r[16], ld32((c.r[15].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD6D0u); st32((c.r[29].w[0] + 612u), c.r[14].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x003BD6D0u) [[unlikely]] return; }
L_003BD6D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD690u | kUnwind; return; } goto L_003BD690; } }
L_003BD6D8:
    c.r[13].d[0] = ld64((c.r[29].w[0] + 632u));
    c.budget -= 3;
    { const bool t = c.r[13].d[0] == 0ull; set32(c.r[14], ld32((c.r[29].w[0] + 640u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD664u | kUnwind; return; } goto L_003BD664; } }
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 608u)));
    set32(c.r[7], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD6F8u); set32(c.r[5], c.r[14].w[0] + 1u);  if (depth < kMaxDepth) unit_00AE(c, 284u, depth + 1u); else { c.pc = 0x003BAB08u; return; } if (c.pc != 0x003BD6F8u) [[unlikely]] return; }
L_003BD6F8:
    c.r[15].d[0] = ld64((c.r[29].w[0] + 632u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] - c.r[15].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD630u | kUnwind; return; } goto L_003BD630; } }
L_003BD704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD70Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 90u, depth + 1u); else { c.pc = 0x003B8E38u; return; } if (c.pc != 0x003BD70Cu) [[unlikely]] return; }
L_003BD70C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD570u | kUnwind; return; } goto L_003BD570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD578u | kUnwind; return; } goto L_003BD578; } }
    c.budget -= 1;
L_003BD720:
    set32(c.r[15], 0u - 193u);
    c.budget -= 1;
L_003BD724:
    c.r[20].d[0] = c.r[20].d[0] & c.r[15].d[0];
    c.budget -= 1;
L_003BD728:
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[23], c.r[23].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[22].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD550u | kUnwind; return; } goto L_003BD550; } }
L_003BD738:
    c.r[15].d[0] = c.r[20].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], 0u - 65u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD578u | kUnwind; return; } goto L_003BD578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[20].d[0] & c.r[15].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD728u | kUnwind; return; } goto L_003BD728; } }
L_003BD74C:
    c.r[15].d[0] = c.r[20].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], 0u - 321u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD578u | kUnwind; return; } goto L_003BD578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0] + 624u), c.r[18].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD724u | kUnwind; return; } goto L_003BD724; } }
L_003BD760:
    c.r[14].d[0] = c.r[20].d[0] & 640ull;
    set32(c.r[15], 0u + 512u);
    c.budget -= 4;
    { const bool t = c.r[14].d[0] == c.r[15].d[0]; c.r[15].d[0] = c.r[20].d[0] & 512ull;  if (t) { goto L_003BD780; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD578u | kUnwind; return; } goto L_003BD578; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[15].d[0] = c.r[20].d[0] & 128ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD588u | kUnwind; return; } goto L_003BD588; } }
L_003BD780:
    c.r[15].d[0] = c.r[20].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[15], 0u - 769u);  if (t) { goto L_003BD79C; } }
    c.r[14].d[0] = ld64((c.r[29].w[0] + 624u));
    st32((c.r[29].w[0] + 640u), c.r[22].w[0]);
    c.r[18].d[0] = c.r[18].d[0] - c.r[14].d[0];
    st64((c.r[29].w[0] + 632u), c.r[18].d[0]);
    c.budget -= 4;
L_003BD79C:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[15].d[0] = c.r[20].d[0] & c.r[15].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[15].d[0] | 192ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD728u | kUnwind; return; } goto L_003BD728; } }
    c.budget -= 1;
L_003BD7B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD7B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 90u, depth + 1u); else { c.pc = 0x003B8E38u; return; } if (c.pc != 0x003BD7B8u) [[unlikely]] return; }
L_003BD7B8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[13], ld32((c.r[29].w[0] + 616u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCE38u | kUnwind; return; } goto L_003BCE38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[13], ld32((c.r[17].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCEECu | kUnwind; return; } goto L_003BCEEC; } }
L_003BD7C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[20].d[0] | 2ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCD74u | kUnwind; return; } goto L_003BCD74; } }
L_003BD7D0:
    c.r[20].d[0] = c.r[20].d[0] | 1ull;
    c.budget -= 1;
L_003BD7D4:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[16], 0u + 3u);
    set32(c.r[15], c.r[15].w[0] - 21128u);
    set32(c.r[30], 0u + 8u);
    c.budget -= 4;
L_003BD7E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 620u), c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCE80u | kUnwind; return; } goto L_003BCE80; } }
L_003BD7EC:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD7F8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 190u, depth + 1u); else { c.pc = 0x003BD918u; return; } if (c.pc != 0x003BD7F8u) [[unlikely]] return; }
L_003BD7F8:
    c.r[20].d[0] = c.r[20].d[0] | 32ull;
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCE80u | kUnwind; return; } goto L_003BCE80; } }
L_003BD808:
    c.r[20].d[0] = c.r[20].d[0] | 32ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCE80u | kUnwind; return; } goto L_003BCE80; } }
L_003BD814:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCE80u | kUnwind; return; } goto L_003BCE80; } }
L_003BD81C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[20].d[0] | 4ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCD74u | kUnwind; return; } goto L_003BCD74; } }
L_003BD824:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[16], 0u + 3u);
    set32(c.r[15], c.r[15].w[0] - 21752u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD7E4u | kUnwind; return; } goto L_003BD7E4; } }
L_003BD838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[20].d[0] | 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCD74u | kUnwind; return; } goto L_003BCD74; } }
L_003BD840:
    c.r[15].d[0] = c.r[20].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCCD8u | kUnwind; return; } goto L_003BCCD8; }
    c.r[15].d[0] = c.r[20].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], ld32((c.r[29].w[0] + 612u)));  if (t) { goto L_003BD870; } }
    set32(c.r[13], ld32((c.r[29].w[0] + 612u)));
    set32(c.r[15], ld32((c.r[15].w[0])));
    set32(c.r[13], c.r[13].w[0] + 8u);
    st32((c.r[29].w[0] + 612u), c.r[13].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[15].w[0]), static_cast<std::uint16_t>(c.r[21].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCCD4u | kUnwind; return; } goto L_003BCCD4; } }
L_003BD870:
    c.r[15].d[0] = c.r[20].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], ld32((c.r[29].w[0] + 612u)));  if (t) { goto L_003BD898; } }
    c.r[14].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[13], ld32((c.r[29].w[0] + 612u)));
    set32(c.r[15], ld32((c.r[15].w[0])));
    set32(c.r[13], c.r[13].w[0] + 8u);
    st32((c.r[29].w[0] + 612u), c.r[13].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st64((c.r[15].w[0]), c.r[14].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCCD4u | kUnwind; return; } goto L_003BCCD4; } }
L_003BD898:
    set32(c.r[14], ld32((c.r[29].w[0] + 612u)));
    set32(c.r[15], ld32((c.r[15].w[0])));
    set32(c.r[14], c.r[14].w[0] + 8u);
    st32((c.r[29].w[0] + 612u), c.r[14].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[15].w[0]), c.r[21].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCCD4u | kUnwind; return; } goto L_003BCCD4; } }
L_003BD8B0:
    c.r[20].d[0] = c.r[20].d[0] | 272ull;
    c.budget -= 1;
L_003BD8B4:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[16], 0u + 3u);
    set32(c.r[15], c.r[15].w[0] - 21128u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[30], 0u + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD7E4u | kUnwind; return; } goto L_003BD7E4; } }
L_003BD8C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCE80u | kUnwind; return; } goto L_003BCE80; } }
L_003BD8D0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[16], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[15], c.r[15].w[0] - 21128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCE78u | kUnwind; return; } goto L_003BCE78; } }
L_003BD8E0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[15], c.r[15].w[0] - 21752u);
    set32(c.r[14], c.r[14].w[0] - 31768u);
    st32((c.r[29].w[0] + 620u), c.r[15].w[0]);
    set32(c.r[14], c.r[16].w[0] + c.r[14].w[0]);
    set32(c.r[30], 0u + 10u);
    set32(c.r[16], 0u + 3u);
    c.r[15].d[0] = ld8((c.r[14].w[0]));
    c.r[15].d[0] = c.r[15].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[20].d[0] | c.r[15].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCE80u | kUnwind; return; } goto L_003BCE80; } }
L_003BD910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[20].d[0] | 256ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD8B4u | kUnwind; return; } goto L_003BD8B4; } }
L_003BD918:
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[15], 0u + 94u);
    c.budget -= 4;
    { const bool t = c.r[13].d[0] != c.r[15].d[0]; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_003BD9FC; } }
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[11], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_003BD934:
    c.r[14].d[0] = 0ull + 0ull;
    set32(c.r[15], c.r[4].w[0] + c.r[14].w[0]);
    c.budget -= 2;
L_003BD93C:
    st8((c.r[15].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.r[15].d[0] = c.r[14].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[15], c.r[4].w[0] + c.r[14].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD93Cu | kUnwind; return; } goto L_003BD93C; } }
    c.budget -= 2;
    { const bool t = c.r[13].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] - 1u);  if (t) { goto L_003BD9A4; } }
    set32(c.r[15], 0u + 1u);
    set32(c.r[9], 0u + 45u);
    set32(c.r[11], c.r[15].w[0] - c.r[11].w[0]);
    set32(c.r[8], 0u + 93u);
    set32(c.r[10], 0u + 93u);
    c.budget -= 5;
L_003BD974:
    set32(c.r[15], c.r[4].w[0] + c.r[13].w[0]);
    st8((c.r[15].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
L_003BD980:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == c.r[9].d[0]; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_003BD9BC; } }
    c.r[15].d[0] = c.r[12].sd[0] < 46ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_003BD9AC; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] - 1u);  if (t) { goto L_003BD9A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = c.r[12].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD974u | kUnwind; return; } goto L_003BD974; } }
L_003BD9A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BD9AC:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == c.r[8].d[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD9A4u | kUnwind; return; } goto L_003BD9A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = c.r[12].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD974u | kUnwind; return; } goto L_003BD974; } }
L_003BD9BC:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == c.r[10].d[0]; c.r[15].d[0] = c.r[12].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;  if (t) { goto L_003BD9D0; } }
    c.budget -= 2;
    if (c.r[15].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_003BD9D8; }
L_003BD9D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[13], 0u + 45u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD974u | kUnwind; return; } goto L_003BD974; } }
L_003BD9D8:
    set32(c.r[13], c.r[13].w[0] + 1u);
    set32(c.r[15], c.r[4].w[0] + c.r[13].w[0]);
    c.r[14].d[0] = c.r[13].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[14].d[0] != 0ull; st8((c.r[15].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD9D8u | kUnwind; return; } goto L_003BD9D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD980u | kUnwind; return; } goto L_003BD980; } }
L_003BD9FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD934u | kUnwind; return; } goto L_003BD934; } }
    c.budget -= 1;
L_003BDA08:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 96u), c.r[16].d[0]);
    set32(c.r[14], c.r[5].w[0] - 1u);
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    if (c.r[5].d[0] == 0) c.r[14].d[0] = 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[13], ld32((c.r[15].w[0] + 30960u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[15], 0u + 520u);
    st32((c.r[29].w[0] + 20u), c.r[14].w[0]);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 84u), c.r[13].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDA54u); st32((c.r[29].w[0] + 8u), c.r[14].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 330u, depth + 1u); else { c.pc = 0x003BB388u; return; } if (c.pc != 0x003BDA54u) [[unlikely]] return; }
L_003BDA54:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[15], ld32((c.r[29].w[0])));  if (t) { goto L_003BDA60; } }
    st8((c.r[15].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003BDA60:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 104u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003BDA70:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[14], c.r[6].w[0] - 1u);
    st64((c.r[29].w[0] + 96u), c.r[16].d[0]);
    if (c.r[6].d[0] == 0) c.r[14].d[0] = 0ull;
    set32(c.r[15], 0u + 520u);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.r[14].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 84u), c.r[4].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDAB4u); st32((c.r[29].w[0] + 8u), c.r[14].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 332u, depth + 1u); else { c.pc = 0x003BB400u; return; } if (c.pc != 0x003BDAB4u) [[unlikely]] return; }
L_003BDAB4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[15], ld32((c.r[29].w[0])));  if (t) { goto L_003BDAC0; } }
    st8((c.r[15].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003BDAC0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 104u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003BDAD0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[13].d[0] = c.r[4].d[0] + 0ull;
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    set32(c.r[12], ld32((c.r[15].w[0] + 30960u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[13].w[0]);
    set32(c.r[15], 0u + 520u);
    st32((c.r[29].w[0] + 20u), c.r[14].w[0]);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));
    st32((c.r[29].w[0] + 84u), c.r[12].w[0]);
    st32((c.r[29].w[0]), c.r[13].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDB10u); st32((c.r[29].w[0] + 8u), c.r[14].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 330u, depth + 1u); else { c.pc = 0x003BB388u; return; } if (c.pc != 0x003BDB10u) [[unlikely]] return; }
L_003BDB10:
    set32(c.r[15], ld32((c.r[29].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    st8((c.r[15].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003BDB28:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[13].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[15], 0u + 520u);
    st32((c.r[29].w[0] + 20u), c.r[14].w[0]);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 84u), c.r[4].w[0]);
    st32((c.r[29].w[0]), c.r[13].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDB60u); st32((c.r[29].w[0] + 8u), c.r[14].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 332u, depth + 1u); else { c.pc = 0x003BB400u; return; } if (c.pc != 0x003BDB60u) [[unlikely]] return; }
L_003BDB60:
    set32(c.r[15], ld32((c.r[29].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    st8((c.r[15].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003BDB78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[16].w[0] + 20784u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDBA4u); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 211u, depth + 1u); else { c.pc = 0x003993E8u; return; } if (c.pc != 0x003BDBA4u) [[unlikely]] return; }
L_003BDBA4:
    c.r[15].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[14], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != c.r[14].d[0]; c.r[2].d[0] = c.r[15].d[0] + 0ull;  if (t) { goto L_003BDBC0; } }
    set32(c.r[15], ld32((c.r[16].w[0] + 20784u)));
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { st32((c.r[17].w[0]), c.r[15].w[0]);  goto L_003BDBC0; }
L_003BDBC0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BDBD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 7;
    if (c.r[4].d[0] != 0ull) { set32(c.r[15], ld32((c.r[4].w[0] + 56u)));  goto L_003BDC08; }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[14], ld32((c.r[15].w[0] + 30960u)));
    st32((c.r[16].w[0] + 84u), c.r[14].w[0]);
    c.r[4].d[0] = c.r[14].d[0] + 0ull;
    set32(c.r[15], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 5;
L_003BDC08:
    c.budget -= 2;
    if (c.r[15].d[0] != 0ull) { c.r[14].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_003BDC1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDC18u);  if (depth < kMaxDepth) unit_00AD(c, 259u, depth + 1u); else { c.pc = 0x003B6E80u; return; } if (c.pc != 0x003BDC18u) [[unlikely]] return; }
L_003BDC18:
    c.r[14].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_003BDC1C:
    c.r[15].d[0] = c.r[14].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { set32(c.r[13], ld32((c.r[16].w[0] + 16u)));  goto L_003BDC88; }
    c.r[15].d[0] = c.r[14].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BDCC4; } }
    c.r[15].d[0] = c.r[14].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[15].d[0] == 0ull) { set32(c.r[13], ld32((c.r[16].w[0] + 16u)));  goto L_003BDC80; }
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[15], c.r[16].w[0] + 64u);  if (t) { goto L_003BDC64; } }
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[15].d[0]) { st32((c.r[16].w[0] + 48u), 0u);  goto L_003BDC64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDC5Cu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x001002A0u; return; } if (c.pc != 0x003BDC5Cu) [[unlikely]] return; }
L_003BDC5C:
    c.r[14].d[0] = ld16((c.r[16].w[0] + 12u));
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 2;
L_003BDC64:
    set32(c.r[13], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[15], 0u - 37u);
    c.r[15].d[0] = c.r[14].d[0] & c.r[15].d[0];
    st32((c.r[16].w[0] + 4u), 0u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[14].d[0] = c.r[15].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[13].w[0]);
    c.budget -= 7;
L_003BDC80:
    c.r[15].d[0] = c.r[14].d[0] | 8ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.budget -= 2;
L_003BDC88:
    c.budget -= 2;
    if (c.r[13].d[0] != 0ull) { c.r[14].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_003BDC9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDC98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 359u, depth + 1u); else { c.pc = 0x003B7DA0u; return; } if (c.pc != 0x003BDC98u) [[unlikely]] return; }
L_003BDC98:
    c.r[14].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_003BDC9C:
    c.r[15].d[0] = c.r[14].d[0] & 1ull;
    set32(c.r[15], c.r[15].w[0] << 16);
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> 16));
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].d[0] = c.r[14].d[0] & 2ull;  if (t) { goto L_003BDCD4; } }
    set32(c.r[15], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[15], 0u - c.r[15].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[15].w[0]);
    c.budget -= 4;
L_003BDCC0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BDCC4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BDCD4:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { goto L_003BDCE0; } }
    set32(c.r[14], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_003BDCE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[14].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BDCC0u | kUnwind; return; } goto L_003BDCC0; } }
    c.budget -= 2;
L_003BDCF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDD00u);  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003BDD00u) [[unlikely]] return; }
L_003BDD00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BDD10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDD20u);  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003BDD20u) [[unlikely]] return; }
L_003BDD20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BDD40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDD50u);  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003BDD50u) [[unlikely]] return; }
L_003BDD50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BDD60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDD70u);  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003BDD70u) [[unlikely]] return; }
L_003BDD70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BDD80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDD90u);  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003BDD90u) [[unlikely]] return; }
L_003BDD90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BDDB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] <= 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BDDD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDDCCu);  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x003BDDCCu) [[unlikely]] return; }
L_003BDDCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BDDF4; } }
L_003BDDD4:
    c.r[3].d[0] = c.r[4].d[0] >> 1;
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDDE4u); c.r[4].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x003BDDE4u) [[unlikely]] return; }
L_003BDDE4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDDF0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003BDDF0u) [[unlikely]] return; }
L_003BDDF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003BDDF4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BDE00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BDE1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE14u);  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x003BDE14u) [[unlikely]] return; }
L_003BDE14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BDE3C; } }
L_003BDE1C:
    c.r[3].d[0] = c.r[4].d[0] >> 1;
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE2Cu); c.r[4].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x003BDE2Cu) [[unlikely]] return; }
L_003BDE2C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE38u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003BDE38u) [[unlikely]] return; }
L_003BDE38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003BDE3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BDE50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BDE6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE64u);  if (depth < kMaxDepth) unit_00AB(c, 443u, depth + 1u); else { c.pc = 0x003AF8A0u; return; } if (c.pc != 0x003BDE64u) [[unlikely]] return; }
L_003BDE64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BDE84; } }
L_003BDE6C:
    c.r[3].d[0] = c.r[4].d[0] >> 1;
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE7Cu); c.r[4].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_00AB(c, 443u, depth + 1u); else { c.pc = 0x003AF8A0u; return; } if (c.pc != 0x003BDE7Cu) [[unlikely]] return; }
L_003BDE7C:
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003BDE84:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BDE90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[5], c.r[5].w[0] - 8016u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDEACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 203u, depth + 1u); else { c.pc = 0x00102B00u; return; } if (c.pc != 0x003BDEACu) [[unlikely]] return; }
L_003BDEAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDEB4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 176u, depth + 1u); else { c.pc = 0x00102690u; return; } if (c.pc != 0x003BDEB4u) [[unlikely]] return; }
L_003BDEB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDEBCu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_002D(c, 73u, depth + 1u); else { c.pc = 0x001B4B00u; return; } if (c.pc != 0x003BDEBCu) [[unlikely]] return; }
L_003BDEBC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDEC8u); set32(c.r[4], c.r[4].w[0] - 8176u);  if (depth < kMaxDepth) unit_002D(c, 105u, depth + 1u); else { c.pc = 0x001B5030u; return; } if (c.pc != 0x003BDEC8u) [[unlikely]] return; }
L_003BDEC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDED4u); set32(c.r[4], c.r[4].w[0] - 26969u);  if (depth < kMaxDepth) unit_0000(c, 201u, depth + 1u); else { c.pc = 0x00102AB0u; return; } if (c.pc != 0x003BDED4u) [[unlikely]] return; }
L_003BDED4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 39321ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDEF4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 199u, depth + 1u); else { c.pc = 0x001029D0u; return; } if (c.pc != 0x003BDEF4u) [[unlikely]] return; }
L_003BDEF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[7], 0u + 1u);
    c.r[6].d[0] = c.r[2].d[0] | 26214ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF10u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 199u, depth + 1u); else { c.pc = 0x001029D0u; return; } if (c.pc != 0x003BDF10u) [[unlikely]] return; }
L_003BDF10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF28u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 199u, depth + 1u); else { c.pc = 0x001029D0u; return; } if (c.pc != 0x003BDF28u) [[unlikely]] return; }
L_003BDF28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF34u); set32(c.r[4], c.r[4].w[0] - 26961u);  if (depth < kMaxDepth) unit_0000(c, 201u, depth + 1u); else { c.pc = 0x00102AB0u; return; } if (c.pc != 0x003BDF34u) [[unlikely]] return; }
L_003BDF34:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 39321ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF54u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 199u, depth + 1u); else { c.pc = 0x001029D0u; return; } if (c.pc != 0x003BDF54u) [[unlikely]] return; }
L_003BDF54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[7], 0u + 1u);
    c.r[6].d[0] = c.r[2].d[0] | 26214ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF70u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 199u, depth + 1u); else { c.pc = 0x001029D0u; return; } if (c.pc != 0x003BDF70u) [[unlikely]] return; }
L_003BDF70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF88u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 199u, depth + 1u); else { c.pc = 0x001029D0u; return; } if (c.pc != 0x003BDF88u) [[unlikely]] return; }
L_003BDF88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF94u); set32(c.r[4], c.r[4].w[0] - 26949u);  if (depth < kMaxDepth) unit_0000(c, 201u, depth + 1u); else { c.pc = 0x00102AB0u; return; } if (c.pc != 0x003BDF94u) [[unlikely]] return; }
L_003BDF94:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 39321ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDFB4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 199u, depth + 1u); else { c.pc = 0x001029D0u; return; } if (c.pc != 0x003BDFB4u) [[unlikely]] return; }
L_003BDFB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[7], 0u + 1u);
    c.r[6].d[0] = c.r[2].d[0] | 26214ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDFD0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 199u, depth + 1u); else { c.pc = 0x001029D0u; return; } if (c.pc != 0x003BDFD0u) [[unlikely]] return; }
L_003BDFD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDFE8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 199u, depth + 1u); else { c.pc = 0x001029D0u; return; } if (c.pc != 0x003BDFE8u) [[unlikely]] return; }
L_003BDFE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDFF4u); set32(c.r[4], c.r[4].w[0] - 26961u);  if (depth < kMaxDepth) unit_0000(c, 178u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x003BDFF4u) [[unlikely]] return; }
L_003BDFF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BE010:
    c.r[2].d[0] = c.r[6].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003BE028; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003BE050; } }
L_003BE028:
    c.r[2].d[0] = c.r[6].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BE040; } }
    c.r[2].d[0] = c.r[6].d[0] & 64512ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (t) { goto L_003BE050; } }
L_003BE040:
    c.budget -= 2;
    if (c.r[4].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_003BE050; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BE050; } }
L_003BE050:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_003BE074; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003BE074; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(16385ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003BE074; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BE074:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[3], 0u + 9u);  goto L_003BE090; }
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BE08C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BE08C:
    set32(c.r[3], 0u + 9u);
    c.budget -= 1;
L_003BE090:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003BE09C; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_003BE09C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BE0B0:
    c.r[1].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003BE0D0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 30976u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
L_003BE0D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BE0E0:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 156u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BE11C; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));  goto L_003BE114; }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003BE11C; } }
L_003BE114:
    c.r[3].d[0] = c.r[3].d[0] & 65534ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003BE11C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BE130:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[4].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[4].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 36u));
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 48u));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 52u));
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 56u));
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 60u));
    st32((c.r[4].w[0] + 68u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 40;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003BE1D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0] + 32u)));  if (t) { goto L_003BE1DC; } }
L_003BE1D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BE1DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BE210; } }
    set32(c.r[4], c.r[17].w[0] + 136u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 100u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE1FCu); st32((c.r[29].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C190u; return; } if (c.pc != 0x003BE1FCu) [[unlikely]] return; }
L_003BE1FC:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE208u); set32(c.r[4], c.r[17].w[0] + 136u);  if (depth < kMaxDepth) unit_000F(c, 15u, depth + 1u); else { c.pc = 0x0013C180u; return; } if (c.pc != 0x003BE208u) [[unlikely]] return; }
L_003BE208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 156u)));  if (t) { goto L_003BE228; } }
L_003BE210:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_003BE21C; }
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 1;
L_003BE21C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE224u); set32(c.r[5], c.r[17].w[0] + 136u);  if (depth < kMaxDepth) unit_00C6(c, 208u, depth + 1u); else { c.pc = 0x00419890u; return; } if (c.pc != 0x003BE224u) [[unlikely]] return; }
L_003BE224:
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 1;
L_003BE228:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 160u)));  goto L_003BE240; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE23Cu); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_00C6(c, 294u, depth + 1u); else { c.pc = 0x0041A0B0u; return; } if (c.pc != 0x003BE23Cu) [[unlikely]] return; }
L_003BE23C:
    set32(c.r[16], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 1;
L_003BE240:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003BE2C0; }
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    st32((c.r[29].w[0] + 60u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    st32((c.r[29].w[0] + 92u), 0u);
    c.f[12] = ld32((c.r[17].w[0] + 56u));
    c.f[13] = ld32((c.r[17].w[0] + 60u));
    c.f[14] = ld32((c.r[17].w[0] + 64u));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE2B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 204u, depth + 1u); else { c.pc = 0x003276B0u; return; } if (c.pc != 0x003BE2B0u) [[unlikely]] return; }
L_003BE2B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE2BCu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x003275C0u; return; } if (c.pc != 0x003BE2BCu) [[unlikely]] return; }
L_003BE2BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003BE2C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003BE2D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003BE2E0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 1;
L_003BE2E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BE2F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 152u), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BE310; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[5].w[0] + 32u)));  if (t) { goto L_003BE314; } }
L_003BE310:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BE314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BE348; } }
    set32(c.r[4], c.r[16].w[0] + 136u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE334u); st32((c.r[29].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C190u; return; } if (c.pc != 0x003BE334u) [[unlikely]] return; }
L_003BE334:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE340u); set32(c.r[4], c.r[16].w[0] + 136u);  if (depth < kMaxDepth) unit_000F(c, 15u, depth + 1u); else { c.pc = 0x0013C180u; return; } if (c.pc != 0x003BE340u) [[unlikely]] return; }
L_003BE340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003BE360; } }
L_003BE348:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_003BE354; }
    set32(c.r[4], ld32((c.r[5].w[0] + 32u)));
    c.budget -= 1;
L_003BE354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE35Cu); set32(c.r[5], c.r[16].w[0] + 136u);  if (depth < kMaxDepth) unit_00C6(c, 208u, depth + 1u); else { c.pc = 0x00419890u; return; } if (c.pc != 0x003BE35Cu) [[unlikely]] return; }
L_003BE35C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003BE360:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BE370:
    set32(c.r[2], ld32((c.r[4].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 8u)));  goto L_003BE380; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BE380:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BE390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BE3B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 32u)));  if (t) { goto L_003BE3B4; } }
L_003BE3B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BE3B4:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003BE3D0; }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE3C8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 93u, depth + 1u); else { c.pc = 0x00424B90u; return; } if (c.pc != 0x003BE3C8u) [[unlikely]] return; }
L_003BE3C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_003BE3E0; } }
L_003BE3D0:
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE3DCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 124u, depth + 1u); else { c.pc = 0x00424EA0u; return; } if (c.pc != 0x003BE3DCu) [[unlikely]] return; }
L_003BE3DC:
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 1;
L_003BE3E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BE3F0:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 5u));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 156u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[4].w[0] + 72u);  goto L_003BE434; }
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));  goto L_003BE428; }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003BE430; } }
L_003BE428:
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003BE430:
    set32(c.r[5], c.r[4].w[0] + 72u);
    c.budget -= 1;
L_003BE434:
    c.budget -= 2;
    { c.r[6].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE130u | kUnwind; return; } goto L_003BE130; }
L_003BE440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 156u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 156u), 0u);  goto L_003BE470; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE46Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BE46Cu) [[unlikely]] return; }
L_003BE46C:
    st32((c.r[16].w[0] + 156u), 0u);
    c.budget -= 1;
L_003BE470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE478u); set32(c.r[4], ld32((c.r[16].w[0] + 152u)));  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x003BE478u) [[unlikely]] return; }
L_003BE478:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BE490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE4ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x003BE4ACu) [[unlikely]] return; }
L_003BE4AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003BE4BC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 1;
L_003BE4BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BE4F0; } }
    set32(c.r[4], c.r[16].w[0] + 136u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE4DCu); st32((c.r[29].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C190u; return; } if (c.pc != 0x003BE4DCu) [[unlikely]] return; }
L_003BE4DC:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE4E8u); set32(c.r[4], c.r[16].w[0] + 136u);  if (depth < kMaxDepth) unit_000F(c, 15u, depth + 1u); else { c.pc = 0x0013C180u; return; } if (c.pc != 0x003BE4E8u) [[unlikely]] return; }
L_003BE4E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003BE508; } }
L_003BE4F0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_003BE4FC; }
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 1;
L_003BE4FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE504u); set32(c.r[5], c.r[16].w[0] + 136u);  if (depth < kMaxDepth) unit_00C6(c, 208u, depth + 1u); else { c.pc = 0x00419890u; return; } if (c.pc != 0x003BE504u) [[unlikely]] return; }
L_003BE504:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003BE508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE510u);  if (depth < kMaxDepth) unit_00AF(c, 270u, depth + 1u); else { c.pc = 0x003BE3F0u; return; } if (c.pc != 0x003BE510u) [[unlikely]] return; }
L_003BE510:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BE520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003BE55C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 21288u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003BE558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE558u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003BE558u) [[unlikely]] return; }
L_003BE558:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003BE55C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BE570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 21288u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE594u); set32(c.r[4], c.r[16].w[0] + 136u);  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C1E0u; return; } if (c.pc != 0x003BE594u) [[unlikely]] return; }
L_003BE594:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 160u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 152u), 0u);
    st32((c.r[16].w[0] + 156u), 0u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 128u), 0u);
    st32((c.r[16].w[0] + 132u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 43;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BE640:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE658u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003BE658u) [[unlikely]] return; }
L_003BE658:
    set32(c.r[4], c.r[29].w[0] + 60u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE668u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AF(c, 346u, depth + 1u); else { c.pc = 0x003BEDA0u; return; } if (c.pc != 0x003BE668u) [[unlikely]] return; }
L_003BE668:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE674u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003BE674u) [[unlikely]] return; }
L_003BE674:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], c.r[16].w[0] + 32u);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[3].w[0] + 28u)));  goto L_003BE688; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BE688:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BE6A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003BE6C8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE6C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BE6C4u) [[unlikely]] return; }
L_003BE6C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003BE6C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BE6E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_003BE71C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE71Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BE71Cu) [[unlikely]] return; }
L_003BE71C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE724u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x003BE724u) [[unlikely]] return; }
L_003BE724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE72Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 522u, depth + 1u); else { c.pc = 0x004A3CF0u; return; } if (c.pc != 0x003BE72Cu) [[unlikely]] return; }
L_003BE72C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 48u)));  goto L_003BE74C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BE748; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003BE748:
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 1;
L_003BE74C:
    set32(c.r[16], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_003BE8E8; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_003BE8E4; } }
L_003BE760:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_003BE778; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE778u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BE778u) [[unlikely]] return; }
L_003BE778:
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE794u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BE794u) [[unlikely]] return; }
L_003BE794:
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[17].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003BE7C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE7A8u);  if (depth < kMaxDepth) unit_00AF(c, 398u, depth + 1u); else { c.pc = 0x003BF2A0u; return; } if (c.pc != 0x003BE7A8u) [[unlikely]] return; }
L_003BE7A8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[2].w[0] + 1u);  goto L_003BE7BC; }
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_003BE7BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BE7C8; } }
L_003BE7C4:
    set32(c.r[17], c.r[17].w[0] - 26928u);
    c.budget -= 1;
L_003BE7C8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003BE7F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE7D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 398u, depth + 1u); else { c.pc = 0x003BF2A0u; return; } if (c.pc != 0x003BE7D8u) [[unlikely]] return; }
L_003BE7D8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_003BE7EC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_003BE7EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_003BE7FC; } }
L_003BE7F4:
    set32(c.r[2], c.r[2].w[0] - 26928u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 2;
L_003BE7FC:
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE810u); st32((c.r[29].w[0] + 108u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00AF(c, 316u, depth + 1u); else { c.pc = 0x003BE980u; return; } if (c.pc != 0x003BE810u) [[unlikely]] return; }
L_003BE810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003BE8A4; } }
L_003BE818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE820u); set32(c.r[4], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_00AF(c, 315u, depth + 1u); else { c.pc = 0x003BE970u; return; } if (c.pc != 0x003BE820u) [[unlikely]] return; }
L_003BE820:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 104u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE83Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BE83Cu) [[unlikely]] return; }
L_003BE83C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE844u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 314u, depth + 1u); else { c.pc = 0x003BE960u; return; } if (c.pc != 0x003BE844u) [[unlikely]] return; }
L_003BE844:
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 56u)));  goto L_003BE8BC; }
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE85Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 316u, depth + 1u); else { c.pc = 0x003BE980u; return; } if (c.pc != 0x003BE85Cu) [[unlikely]] return; }
L_003BE85C:
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[5], c.r[29].w[0] + 116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE86Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 313u, depth + 1u); else { c.pc = 0x003BE940u; return; } if (c.pc != 0x003BE86Cu) [[unlikely]] return; }
L_003BE86C:
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE878u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_00AF(c, 312u, depth + 1u); else { c.pc = 0x003BE930u; return; } if (c.pc != 0x003BE878u) [[unlikely]] return; }
L_003BE878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE880u); set32(c.r[4], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_00AF(c, 315u, depth + 1u); else { c.pc = 0x003BE970u; return; } if (c.pc != 0x003BE880u) [[unlikely]] return; }
L_003BE880:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_003BE8A0; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE8A0u); set32(c.r[19], c.r[19].w[0] + 1u);  if (depth < kMaxDepth) unit_00AF(c, 311u, depth + 1u); else { c.pc = 0x003BE910u; return; } if (c.pc != 0x003BE8A0u) [[unlikely]] return; }
L_003BE8A0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003BE8A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE8ACu);  if (depth < kMaxDepth) unit_00AF(c, 314u, depth + 1u); else { c.pc = 0x003BE960u; return; } if (c.pc != 0x003BE8ACu) [[unlikely]] return; }
L_003BE8AC:
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE818u | kUnwind; return; } goto L_003BE818; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 1;
L_003BE8BC:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE8CCu); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BE8CCu) [[unlikely]] return; }
L_003BE8CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BE8E4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE760u | kUnwind; return; } goto L_003BE760; } }
L_003BE8E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003BE8E8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003BE910:
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[6].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[6].w[0]);  c.pc = t; return; }
L_003BE930:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003BE940:
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003BE960:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_003BE970:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_003BE980:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003BE990:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 56u)));  c.pc = t; return; }
L_003BE9A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE9C0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003BE9C0u) [[unlikely]] return; }
L_003BE9C0:
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[5], c.r[17].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE9D0u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00AF(c, 346u, depth + 1u); else { c.pc = 0x003BEDA0u; return; } if (c.pc != 0x003BE9D0u) [[unlikely]] return; }
L_003BE9D0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE9DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003BE9DCu) [[unlikely]] return; }
L_003BE9DC:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], c.r[17].w[0] + 32u);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[3].w[0] + 28u)));  goto L_003BE9F0; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BE9F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 1024u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] - 26927u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEA14u); st32((c.r[17].w[0] + 48u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003BEA14u) [[unlikely]] return; }
L_003BEA14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BEA30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEA50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 398u, depth + 1u); else { c.pc = 0x003BF2A0u; return; } if (c.pc != 0x003BEA50u) [[unlikely]] return; }
L_003BEA50:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEA5Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 336u, depth + 1u); else { c.pc = 0x003BEC10u; return; } if (c.pc != 0x003BEA5Cu) [[unlikely]] return; }
L_003BEA5C:
    st32((c.r[2].w[0] + 16u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BEA80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BEB74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21304u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_003BEAD8; } }
L_003BEAB4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 60u);  goto L_003BEAD0; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEACCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BEACCu) [[unlikely]] return; }
L_003BEACC:
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 1;
L_003BEAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEAD8u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x003BEAD8u) [[unlikely]] return; }
L_003BEAD8:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], c.r[16].w[0] + 32u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[3].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BEAB4u | kUnwind; return; } goto L_003BEAB4; }
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BEB18; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BEB18; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BEB18; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003BEB18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEB18u);  if (depth < kMaxDepth) unit_00AF(c, 350u, depth + 1u); else { c.pc = 0x003BEE40u; return; } if (c.pc != 0x003BEB18u) [[unlikely]] return; }
L_003BEB18:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_003BEB60; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003BEB5C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003BEB5C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003BEB5C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003BEB5C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BEB5C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BEB5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEB5Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003BEB5Cu) [[unlikely]] return; }
L_003BEB5C:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_003BEB60:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003BEB78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEB74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003BEB74u) [[unlikely]] return; }
L_003BEB74:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003BEB78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BEB90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEBB8u); st32((c.r[4].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x003BEBB8u) [[unlikely]] return; }
L_003BEBB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[29].w[0] + 36u);
    set32(c.r[2], c.r[2].w[0] + 21304u);
    set32(c.r[4], c.r[16].w[0] + 20u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 40u);
    set32(c.r[2], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 40u), 0u);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEBE4u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AF(c, 391u, depth + 1u); else { c.pc = 0x003BF160u; return; } if (c.pc != 0x003BEBE4u) [[unlikely]] return; }
L_003BEBE4:
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BEC10:
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
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003BEC80; } }
L_003BEC54:
    set32(c.r[5], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEC60u); c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x003BEC60u) [[unlikely]] return; }
L_003BEC60:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[19].d[0] = c.r[17].d[0] + 0ull;  goto L_003BEC74; }
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003BEC80; } }
L_003BEC74:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003BEC80:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BEC54u | kUnwind; return; } goto L_003BEC54; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[5].d[0] = c.r[20].d[0] + 0ull;  goto L_003BECA8; }
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEC9Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x003BEC9Cu) [[unlikely]] return; }
L_003BEC9C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], c.r[19].w[0] + 12u);  goto L_003BECF8; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003BECA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BECB0u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003BECB0u) [[unlikely]] return; }
L_003BECB0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BECCCu); st32((c.r[29].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_00AF(c, 392u, depth + 1u); else { c.pc = 0x003BF190u; return; } if (c.pc != 0x003BECCCu) [[unlikely]] return; }
L_003BECCC:
    set32(c.r[16], c.r[2].w[0] + 12u);
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003BECF8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BECF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BECF4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003BECF4u) [[unlikely]] return; }
L_003BECF4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003BECF8:
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
L_003BED20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BED88; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003BED74; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003BED70; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BED70; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BED70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BED70u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003BED70u) [[unlikely]] return; }
L_003BED70:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003BED74:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003BED8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BED88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003BED88u) [[unlikely]] return; }
L_003BED88:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003BED8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BEDA0:
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
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[19].w[0] + 12u);  if (t) { goto L_003BEDEC; } }
L_003BEDD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEDDCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x003BEDDCu) [[unlikely]] return; }
L_003BEDDC:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], ld32((c.r[17].w[0] + 4u)));  goto L_003BEDEC; }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_003BEDEC:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BEDD4u | kUnwind; return; } goto L_003BEDD4; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[19].w[0] + 12u);  goto L_003BEE18; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEE0Cu); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x003BEE0Cu) [[unlikely]] return; }
L_003BEE0C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[20].w[0]), c.r[16].w[0]);  goto L_003BEE1C; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 1;
L_003BEE18:
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_003BEE1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003BEE40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BEF60; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_003BEED0; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003BEE8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEE88u);  if (depth < kMaxDepth) unit_00AF(c, 350u, depth + 1u); else { c.pc = 0x003BEE40u; return; } if (c.pc != 0x003BEE88u) [[unlikely]] return; }
L_003BEE88:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003BEE8C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003BEEA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEE9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 350u, depth + 1u); else { c.pc = 0x003BEE40u; return; } if (c.pc != 0x003BEE9Cu) [[unlikely]] return; }
L_003BEE9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003BEEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEEA8u);  if (depth < kMaxDepth) unit_00AF(c, 390u, depth + 1u); else { c.pc = 0x003BF150u; return; } if (c.pc != 0x003BEEA8u) [[unlikely]] return; }
L_003BEEA8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEEB4u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00AF(c, 388u, depth + 1u); else { c.pc = 0x003BF100u; return; } if (c.pc != 0x003BEEB4u) [[unlikely]] return; }
L_003BEEB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEEBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 387u, depth + 1u); else { c.pc = 0x003BF0F0u; return; } if (c.pc != 0x003BEEBCu) [[unlikely]] return; }
L_003BEEBC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEECCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00AF(c, 385u, depth + 1u); else { c.pc = 0x003BF0D0u; return; } if (c.pc != 0x003BEECCu) [[unlikely]] return; }
L_003BEECC:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_003BEED0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003BEF34; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003BEEF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEEECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 350u, depth + 1u); else { c.pc = 0x003BEE40u; return; } if (c.pc != 0x003BEEECu) [[unlikely]] return; }
L_003BEEEC:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003BEEF0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003BEF04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEF00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 350u, depth + 1u); else { c.pc = 0x003BEE40u; return; } if (c.pc != 0x003BEF00u) [[unlikely]] return; }
L_003BEF00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003BEF04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEF0Cu);  if (depth < kMaxDepth) unit_00AF(c, 390u, depth + 1u); else { c.pc = 0x003BF150u; return; } if (c.pc != 0x003BEF0Cu) [[unlikely]] return; }
L_003BEF0C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEF18u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00AF(c, 388u, depth + 1u); else { c.pc = 0x003BF100u; return; } if (c.pc != 0x003BEF18u) [[unlikely]] return; }
L_003BEF18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEF20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 387u, depth + 1u); else { c.pc = 0x003BF0F0u; return; } if (c.pc != 0x003BEF20u) [[unlikely]] return; }
L_003BEF20:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEF30u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00AF(c, 385u, depth + 1u); else { c.pc = 0x003BF0D0u; return; } if (c.pc != 0x003BEF30u) [[unlikely]] return; }
L_003BEF30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003BEF34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEF3Cu);  if (depth < kMaxDepth) unit_00AF(c, 390u, depth + 1u); else { c.pc = 0x003BF150u; return; } if (c.pc != 0x003BEF3Cu) [[unlikely]] return; }
L_003BEF3C:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEF48u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00AF(c, 343u, depth + 1u); else { c.pc = 0x003BED20u; return; } if (c.pc != 0x003BEF48u) [[unlikely]] return; }
L_003BEF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEF50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 387u, depth + 1u); else { c.pc = 0x003BF0F0u; return; } if (c.pc != 0x003BEF50u) [[unlikely]] return; }
L_003BEF50:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_003BEF64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEF60u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003BEF60u) [[unlikely]] return; }
L_003BEF60:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003BEF64:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 12u);  goto L_003BF068; }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_003BEFD4; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003BEF90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEF8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 350u, depth + 1u); else { c.pc = 0x003BEE40u; return; } if (c.pc != 0x003BEF8Cu) [[unlikely]] return; }
L_003BEF8C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003BEF90:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003BEFA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEFA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 350u, depth + 1u); else { c.pc = 0x003BEE40u; return; } if (c.pc != 0x003BEFA0u) [[unlikely]] return; }
L_003BEFA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003BEFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEFACu);  if (depth < kMaxDepth) unit_00AF(c, 390u, depth + 1u); else { c.pc = 0x003BF150u; return; } if (c.pc != 0x003BEFACu) [[unlikely]] return; }
L_003BEFAC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEFB8u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00AF(c, 388u, depth + 1u); else { c.pc = 0x003BF100u; return; } if (c.pc != 0x003BEFB8u) [[unlikely]] return; }
L_003BEFB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEFC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 387u, depth + 1u); else { c.pc = 0x003BF0F0u; return; } if (c.pc != 0x003BEFC0u) [[unlikely]] return; }
L_003BEFC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEFD0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00AF(c, 385u, depth + 1u); else { c.pc = 0x003BF0D0u; return; } if (c.pc != 0x003BEFD0u) [[unlikely]] return; }
L_003BEFD0:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_003BEFD4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003BF038; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003BEFF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEFF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 350u, depth + 1u); else { c.pc = 0x003BEE40u; return; } if (c.pc != 0x003BEFF0u) [[unlikely]] return; }
L_003BEFF0:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003BEFF4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003BF008; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF004u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 350u, depth + 1u); else { c.pc = 0x003BEE40u; return; } if (c.pc != 0x003BF004u) [[unlikely]] return; }
L_003BF004:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003BF008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF010u);  if (depth < kMaxDepth) unit_00AF(c, 390u, depth + 1u); else { c.pc = 0x003BF150u; return; } if (c.pc != 0x003BF010u) [[unlikely]] return; }
L_003BF010:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF01Cu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00AF(c, 388u, depth + 1u); else { c.pc = 0x003BF100u; return; } if (c.pc != 0x003BF01Cu) [[unlikely]] return; }
L_003BF01C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF024u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 387u, depth + 1u); else { c.pc = 0x003BF0F0u; return; } if (c.pc != 0x003BF024u) [[unlikely]] return; }
L_003BF024:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF034u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00AF(c, 385u, depth + 1u); else { c.pc = 0x003BF0D0u; return; } if (c.pc != 0x003BF034u) [[unlikely]] return; }
L_003BF034:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003BF038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF040u);  if (depth < kMaxDepth) unit_00AF(c, 390u, depth + 1u); else { c.pc = 0x003BF150u; return; } if (c.pc != 0x003BF040u) [[unlikely]] return; }
L_003BF040:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF04Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00AF(c, 343u, depth + 1u); else { c.pc = 0x003BED20u; return; } if (c.pc != 0x003BF04Cu) [[unlikely]] return; }
L_003BF04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF054u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 387u, depth + 1u); else { c.pc = 0x003BF0F0u; return; } if (c.pc != 0x003BF054u) [[unlikely]] return; }
L_003BF054:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003BF064; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF064u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003BF064u) [[unlikely]] return; }
L_003BF064:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_003BF068:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BF0A4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BF0A4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BF0A4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BF0A4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BF0A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF0A4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003BF0A4u) [[unlikely]] return; }
L_003BF0A4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003BF0B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF0B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003BF0B4u) [[unlikely]] return; }
L_003BF0B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003BF0B8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BF0D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BF0E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF0E4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003BF0E4u) [[unlikely]] return; }
L_003BF0E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BF0F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_003BF100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BF140; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003BF144; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003BF140; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BF140; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BF140; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF140u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003BF140u) [[unlikely]] return; }
L_003BF140:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003BF144:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BF150:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003BF160:
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
L_003BF190:
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
    { const bool t = c.r[1].d[0] != 0ull; c.r[18].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003BF1F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF1ECu); set32(c.r[5], c.r[5].w[0] - 26882u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003BF1ECu) [[unlikely]] return; }
L_003BF1EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF1F4u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003BF1F4u) [[unlikely]] return; }
L_003BF1F4:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF200u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003BF200u) [[unlikely]] return; }
L_003BF200:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] + 12u);
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_003BF228; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF21Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003BF21Cu) [[unlikely]] return; }
L_003BF21C:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 3;
L_003BF228:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003BF248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[17].w[0]);  if (t) { goto L_003BF24C; } }
L_003BF248:
    st32((c.r[20].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_003BF24C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF264u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x003BF264u) [[unlikely]] return; }
L_003BF264:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003BF274; }
    st32((c.r[21].w[0] + 20u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003BF274:
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
L_003BF2A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 4u);  c.pc = t; return; }
L_003BF2B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BF2C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[3].w[0]);  c.pc = t; return; }
L_003BF2E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BF2F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), 0u);  c.pc = t; return; }
L_003BF300:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BF350; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 21328u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003BF338; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF338u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003BF338u) [[unlikely]] return; }
L_003BF338:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003BF354; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF350u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003BF350u) [[unlikely]] return; }
L_003BF350:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003BF354:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BF370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 21328u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF394u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003BF394u) [[unlikely]] return; }
L_003BF394:
    st32((c.r[16].w[0] + 20u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BF3B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF3E0u); set32(c.r[6], c.r[6].w[0] - 26816u);  if (depth < kMaxDepth) unit_0000(c, 231u, depth + 1u); else { c.pc = 0x00102E60u; return; } if (c.pc != 0x003BF3E0u) [[unlikely]] return; }
L_003BF3E0:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BF410:
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], 0u + 271u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003BF424; } }
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 1;
L_003BF424:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BF430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003BF480; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21360u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003BF464; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27888u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003BF464:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003BF47C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF47Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003BF47Cu) [[unlikely]] return; }
L_003BF47C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003BF480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BF490:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27888u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21360u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_003BF4C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_003BF4D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF4F0u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0014(c, 351u, depth + 1u); else { c.pc = 0x00153610u; return; } if (c.pc != 0x003BF4F0u) [[unlikely]] return; }
L_003BF4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF4F8u); set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  if (depth < kMaxDepth) unit_0015(c, 20u, depth + 1u); else { c.pc = 0x00154280u; return; } if (c.pc != 0x003BF4F8u) [[unlikely]] return; }
L_003BF4F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BF510:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF52Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00AF(c, 413u, depth + 1u); else { c.pc = 0x003BF490u; return; } if (c.pc != 0x003BF52Cu) [[unlikely]] return; }
L_003BF52C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF53Cu); set32(c.r[6], c.r[17].w[0] + 60u);  if (depth < kMaxDepth) unit_00AF(c, 408u, depth + 1u); else { c.pc = 0x003BF3B0u; return; } if (c.pc != 0x003BF53Cu) [[unlikely]] return; }
L_003BF53C:
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 28960u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF54Cu); c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0014(c, 357u, depth + 1u); else { c.pc = 0x001536E0u; return; } if (c.pc != 0x003BF54Cu) [[unlikely]] return; }
L_003BF54C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF558u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00AF(c, 411u, depth + 1u); else { c.pc = 0x003BF430u; return; } if (c.pc != 0x003BF558u) [[unlikely]] return; }
L_003BF558:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BF570:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BF5C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 21376u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF5A4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x003BF5A4u) [[unlikely]] return; }
L_003BF5A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF5B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 69u, depth + 1u); else { c.pc = 0x00138E80u; return; } if (c.pc != 0x003BF5B0u) [[unlikely]] return; }
L_003BF5B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003BF5CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF5C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003BF5C8u) [[unlikely]] return; }
L_003BF5C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003BF5CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BF5E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF600u); c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 74u, depth + 1u); else { c.pc = 0x00138F30u; return; } if (c.pc != 0x003BF600u) [[unlikely]] return; }
L_003BF600:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 21376u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF614u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 395u, depth + 1u); else { c.pc = 0x0012B2D0u; return; } if (c.pc != 0x003BF614u) [[unlikely]] return; }
L_003BF614:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF620u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000A(c, 320u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x003BF620u) [[unlikely]] return; }
L_003BF620:
    st32((c.r[17].w[0] + 60u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BF640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30512u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003BF65C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BF66C; } }
L_003BF65C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF664u);  if (depth < kMaxDepth) unit_000E(c, 80u, depth + 1u); else { c.pc = 0x00138FF0u; return; } if (c.pc != 0x003BF664u) [[unlikely]] return; }
L_003BF664:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003BF66C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BF680:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF6A4u); set32(c.r[4], c.r[4].w[0] - 26192u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003BF6A4u) [[unlikely]] return; }
L_003BF6A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003BF6B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003BF6C4; } }
L_003BF6B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF6BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 82u, depth + 1u); else { c.pc = 0x00139030u; return; } if (c.pc != 0x003BF6BCu) [[unlikely]] return; }
L_003BF6BC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003BF6C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BF6E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 31208u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003BF6F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30512u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003BF70C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BF714; } }
L_003BF70C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF714u);  if (depth < kMaxDepth) unit_000E(c, 89u, depth + 1u); else { c.pc = 0x001390A0u; return; } if (c.pc != 0x003BF714u) [[unlikely]] return; }
L_003BF714:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BF720:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30512u)));  c.pc = t; return; }
L_003BF730:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 26144u);  c.pc = t; return; }
L_003BF740:
    set32(c.r[29], c.r[29].w[0] - 992u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF760u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A6(c, 18u, depth + 1u); else { c.pc = 0x00398290u; return; } if (c.pc != 0x003BF760u) [[unlikely]] return; }
L_003BF760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF768u); set32(c.r[4], c.r[29].w[0] + 800u);  if (depth < kMaxDepth) unit_00AF(c, 456u, depth + 1u); else { c.pc = 0x003BF880u; return; } if (c.pc != 0x003BF768u) [[unlikely]] return; }
L_003BF768:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 640u);
    c.f[0] = ld32((c.r[28].w[0] - 32560u));
    st32((c.r[29].w[0] + 948u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 952u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 960u), c.r[2].w[0]);
    set32(c.r[2], 0u + 480u);
    st32((c.r[29].w[0] + 980u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 956u), c.f[0]);
    st32((c.r[29].w[0] + 976u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 984u), 0u);
    st8((c.r[29].w[0] + 964u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF7A4u); st8((c.r[29].w[0] + 965u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00B6(c, 77u, depth + 1u); else { c.pc = 0x003D88A0u; return; } if (c.pc != 0x003BF7A4u) [[unlikely]] return; }
L_003BF7A4:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 26032u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF7B8u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_00AE(c, 270u, depth + 1u); else { c.pc = 0x003BA6C0u; return; } if (c.pc != 0x003BF7B8u) [[unlikely]] return; }
L_003BF7B8:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[16], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 941u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003BF7F4; } }
L_003BF7CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF7E0u); set32(c.r[5], c.r[5].w[0] - 26024u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003BF7E0u) [[unlikely]] return; }
L_003BF7E0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_003BF7F4; }
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 941u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_003BF7F4:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF7CCu | kUnwind; return; } goto L_003BF7CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF808u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0012(c, 431u, depth + 1u); else { c.pc = 0x0014B530u; return; } if (c.pc != 0x003BF808u) [[unlikely]] return; }
L_003BF808:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF814u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00B6(c, 67u, depth + 1u); else { c.pc = 0x003D86B0u; return; } if (c.pc != 0x003BF814u) [[unlikely]] return; }
L_003BF814:
    set32(c.r[4], c.r[29].w[0] + 916u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF824u); st32((c.r[28].w[0] - 29204u), 0u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003BF824u) [[unlikely]] return; }
L_003BF824:
    set32(c.r[4], c.r[29].w[0] + 900u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF830u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003BF830u) [[unlikely]] return; }
L_003BF830:
    set32(c.r[4], c.r[29].w[0] + 884u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF83Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003BF83Cu) [[unlikely]] return; }
L_003BF83C:
    set32(c.r[4], c.r[29].w[0] + 868u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF848u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003BF848u) [[unlikely]] return; }
L_003BF848:
    set32(c.r[4], c.r[29].w[0] + 852u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF854u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003BF854u) [[unlikely]] return; }
L_003BF854:
    set32(c.r[4], c.r[29].w[0] + 836u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF860u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003BF860u) [[unlikely]] return; }
L_003BF860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 992u);  c.pc = t; return; }
L_003BF880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF898u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003BF898u) [[unlikely]] return; }
L_003BF898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF8A0u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003BF8A0u) [[unlikely]] return; }
L_003BF8A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF8A8u); set32(c.r[4], c.r[16].w[0] + 68u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003BF8A8u) [[unlikely]] return; }
L_003BF8A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF8B0u); set32(c.r[4], c.r[16].w[0] + 84u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003BF8B0u) [[unlikely]] return; }
L_003BF8B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF8B8u); set32(c.r[4], c.r[16].w[0] + 100u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003BF8B8u) [[unlikely]] return; }
L_003BF8B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF8C0u); set32(c.r[4], c.r[16].w[0] + 116u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003BF8C0u) [[unlikely]] return; }
L_003BF8C0:
    set32(c.r[2], 0u + 640u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], 0u + 480u);
    set32(c.r[2], 0u + 16u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 36u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF8E8u); set32(c.r[5], c.r[5].w[0] - 26048u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003BF8E8u) [[unlikely]] return; }
L_003BF8E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF8F8u); set32(c.r[5], c.r[5].w[0] - 26064u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003BF8F8u) [[unlikely]] return; }
L_003BF8F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[16].w[0] + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF908u); set32(c.r[5], c.r[5].w[0] - 26080u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003BF908u) [[unlikely]] return; }
L_003BF908:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[16].w[0] + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF918u); set32(c.r[5], c.r[5].w[0] - 26096u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003BF918u) [[unlikely]] return; }
L_003BF918:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[16].w[0] + 116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF928u); set32(c.r[5], c.r[5].w[0] - 26104u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003BF928u) [[unlikely]] return; }
L_003BF928:
    st32((c.r[16].w[0] + 132u), 0u);
    set32(c.r[2], 0u + 1024u);
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[3], 0u + 640u);
    set32(c.r[2], 0u + 480u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 140u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 141u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 144u), 0u);
    st32((c.r[28].w[0] - 29204u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BF970:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BF9A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = ld32((c.r[2].w[0] + 96u));  if (t) { goto L_003BF9A8; } }
L_003BF9A4:
    c.f[3] = ld32((c.r[28].w[0] - 29052u));
    c.budget -= 1;
L_003BF9A8:
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[4] = fp::add(c.f[1], c.f[2]);
    c.f[2] = ld32((c.r[16].w[0] + 108u));
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[5] = fp::sub(c.f[3], c.f[4]);
    c.f[4] = fp::add(c.f[1], c.f[2]);
    c.f[2] = ld32((c.r[16].w[0] + 112u));
    c.f[1] = ld32((c.r[16].w[0] + 80u));
    c.f[3] = ld32((c.r[16].w[0] + 40u));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[2] = fp::add(c.f[1], c.f[2]);
    c.f[1] = ld32((c.r[16].w[0] + 44u));
    c.f[3] = fp::sub(c.f[3], c.f[4]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.facc = fp::mul(c.f[5], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40100000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 29;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[4] = ld32((c.r[16].w[0] + 116u));  goto L_003BFA24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BFC24; } }
L_003BFA24:
    c.f[2] = 0u;
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    c.f[2] = fp::sub(c.f[2], c.f[4]);
    c.f[2] = c.f[2] & fp::kAbs;
    c.f[5] = ld32((c.r[16].w[0] + 84u));
    c.f[6] = ld32((c.r[16].w[0] + 88u));
    c.f[9] = ld32((c.r[16].w[0] + 92u));
    c.f[10] = ld32((c.r[16].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BFA54; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BFA54:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 255ull;  goto L_003BFA8C; }
    c.f[3] = ld32((c.r[16].w[0] + 120u));
    c.f[2] = 0u;
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[2] = c.f[2] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BFA84; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BFA84:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 2;
L_003BFA8C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  goto L_003BFAC0; }
    c.f[3] = ld32((c.r[16].w[0] + 124u));
    c.f[2] = 0u;
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[2] = c.f[2] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BFAB8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BFAB8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003BFAC0:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[8] = c.f[5] ^ fp::kSign;  goto L_003BFBBC; }
    c.f[3] = ld32((c.r[16].w[0] + 120u));
    c.f[2] = ld32((c.r[16].w[0] + 124u));
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[5] = fp::sqrt(c.f[5]);
    c.f[1] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BFB18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[1], c.f[5]);
    c.f[20] = fp::mul(c.f[4], c.f[1]);
    c.f[21] = fp::mul(c.f[3], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[22] = fp::mul(c.f[2], c.f[1]);  if (t) { goto L_003BFB28; } }
L_003BFB18:
    c.f[20] = 0u;
    c.f[21] = c.f[20];
    c.f[22] = c.f[20];
    c.budget -= 4;
L_003BFB28:
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = fp::sqrt(c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = c.r[2].w[0];
    c.f[23] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFB54u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x003BFB54u) [[unlikely]] return; }
L_003BFB54:
    c.f[20] = fp::mul(c.f[0], c.f[20]);
    c.f[21] = fp::mul(c.f[0], c.f[21]);
    c.f[22] = fp::mul(c.f[0], c.f[22]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFB68u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x003BFB68u) [[unlikely]] return; }
L_003BFB68:
    c.f[4] = ld32((c.r[16].w[0] + 84u));
    c.f[3] = ld32((c.r[16].w[0] + 96u));
    c.f[2] = ld32((c.r[16].w[0] + 88u));
    c.facc = fp::mul(c.f[4], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[20]));
    c.f[1] = ld32((c.r[16].w[0] + 92u));
    c.facc = fp::sub(c.facc, fp::mul(c.f[2], c.f[22]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[1], c.f[21]));
    c.facc = fp::mul(c.f[2], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[21]));
    c.facc = fp::sub(c.facc, fp::mul(c.f[1], c.f[20]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[4], c.f[22]));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[22]));
    c.facc = fp::sub(c.facc, fp::mul(c.f[4], c.f[21]));
    c.f[9] = fp::add(c.facc, fp::mul(c.f[2], c.f[20]));
    c.facc = fp::mul(c.f[3], c.f[0]);
    c.facc = fp::sub(c.facc, fp::mul(c.f[4], c.f[20]));
    c.facc = fp::sub(c.facc, fp::mul(c.f[2], c.f[21]));
    c.f[10] = fp::sub(c.facc, fp::mul(c.f[1], c.f[22]));
    c.f[8] = c.f[5] ^ fp::kSign;
    c.budget -= 21;
L_003BFBBC:
    c.f[5] = ld32((c.r[16].w[0] + 60u));
    c.f[7] = c.f[6] ^ fp::kSign;
    c.f[6] = c.f[9] ^ fp::kSign;
    c.f[4] = ld32((c.r[16].w[0] + 56u));
    c.facc = fp::mul(c.f[6], c.f[5]);
    c.f[3] = ld32((c.r[16].w[0] + 52u));
    c.facc = fp::add(c.facc, fp::mul(c.f[10], c.f[4]));
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.facc = fp::sub(c.facc, fp::mul(c.f[8], c.f[3]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[7], c.f[0]));
    c.facc = fp::mul(c.f[7], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[10], c.f[3]));
    c.facc = fp::sub(c.facc, fp::mul(c.f[6], c.f[0]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[8], c.f[4]));
    c.facc = fp::mul(c.f[8], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[10], c.f[0]));
    c.facc = fp::sub(c.facc, fp::mul(c.f[7], c.f[4]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[3]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = ld32((c.r[28].w[0] - 32188u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 25;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BFC24; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BFC24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BFC50:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 136u);  [[clang::musttail]] return unit_00B0(c, 212u, depth); }
L_003BFC60:
    set32(c.r[29], c.r[29].w[0] - 192u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[4].w[0] + 60u), c.f[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 28;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003BFDC0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[28].w[0] - 29052u));  goto L_003BFCE4; }
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    c.budget -= 1;
L_003BFCE4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 4096u);
    st32((c.r[29].w[0] + 188u), c.f[0]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] - 25776u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFD00u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003BFD00u) [[unlikely]] return; }
L_003BFD00:
    c.r[5].d[0] = ld16((c.r[28].w[0] - 30504u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[7], 0u + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFD18u); set32(c.r[8], 0u + 6u);  if (depth < kMaxDepth) unit_0018(c, 17u, depth + 1u); else { c.pc = 0x00160200u; return; } if (c.pc != 0x003BFD18u) [[unlikely]] return; }
L_003BFD18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFD28u); set32(c.r[5], c.r[5].w[0] - 25864u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003BFD28u) [[unlikely]] return; }
L_003BFD28:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFD38u); set32(c.r[6], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0017(c, 449u, depth + 1u); else { c.pc = 0x0015FF90u; return; } if (c.pc != 0x003BFD38u) [[unlikely]] return; }
L_003BFD38:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFD44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003BFD44u) [[unlikely]] return; }
L_003BFD44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFD54u); set32(c.r[5], c.r[5].w[0] - 25856u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003BFD54u) [[unlikely]] return; }
L_003BFD54:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFD64u); set32(c.r[6], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0017(c, 449u, depth + 1u); else { c.pc = 0x0015FF90u; return; } if (c.pc != 0x003BFD64u) [[unlikely]] return; }
L_003BFD64:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFD70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003BFD70u) [[unlikely]] return; }
L_003BFD70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFD80u); set32(c.r[5], c.r[5].w[0] - 25848u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003BFD80u) [[unlikely]] return; }
L_003BFD80:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFD90u); set32(c.r[6], c.r[29].w[0] + 188u);  if (depth < kMaxDepth) unit_0017(c, 449u, depth + 1u); else { c.pc = 0x0015FF90u; return; } if (c.pc != 0x003BFD90u) [[unlikely]] return; }
L_003BFD90:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFD9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003BFD9Cu) [[unlikely]] return; }
L_003BFD9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFDB0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 297u, depth + 1u); else { c.pc = 0x00162730u; return; } if (c.pc != 0x003BFDB0u) [[unlikely]] return; }
L_003BFDB0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFDBCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x00160180u; return; } if (c.pc != 0x003BFDBCu) [[unlikely]] return; }
L_003BFDBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003BFDC0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003BFDD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 128u), c.r[5].w[0]);  c.pc = t; return; }
L_003BFDE0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00B0(c, 15u, depth); } }
    c.r[17].d[0] = ld16((c.r[18].w[0] + 4u));
    c.r[2].d[0] = ld16((c.r[28].w[0] - 30500u));
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[2].d[0] = ld16((c.r[28].w[0] - 30508u));  goto L_003BFF78; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFE28u); set32(c.r[5], c.r[5].w[0] - 25824u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003BFE28u) [[unlikely]] return; }
L_003BFE28:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFE38u); set32(c.r[6], c.r[29].w[0] + 188u);  if (depth < kMaxDepth) unit_0017(c, 440u, depth + 1u); else { c.pc = 0x0015FE00u; return; } if (c.pc != 0x003BFE38u) [[unlikely]] return; }
L_003BFE38:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFE44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003BFE44u) [[unlikely]] return; }
L_003BFE44:
    set32(c.r[8], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_003BFEA8; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 4096u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] - 25742u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFE68u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003BFE68u) [[unlikely]] return; }
L_003BFE68:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFE7Cu); set32(c.r[16], ld32((c.r[19].w[0] + 128u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x003BFE7Cu) [[unlikely]] return; }
L_003BFE7C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003BFF74; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFE98u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FF(c, 253u, depth + 1u); else { c.pc = 0x004FE210u; return; } if (c.pc != 0x003BFE98u) [[unlikely]] return; }
L_003BFE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFEA0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 308u, depth + 1u); else { c.pc = 0x0042E7D0u; return; } if (c.pc != 0x003BFEA0u) [[unlikely]] return; }
L_003BFEA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BFF74; } }
L_003BFEA8:
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[2].d[0]) { set32(c.r[5], 0u + 2u);  goto L_003BFF0C; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 4096u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] - 25682u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFEC8u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003BFEC8u) [[unlikely]] return; }
L_003BFEC8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFEDCu); set32(c.r[16], ld32((c.r[19].w[0] + 128u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x003BFEDCu) [[unlikely]] return; }
L_003BFEDC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003BFF74; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFEF8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FF(c, 253u, depth + 1u); else { c.pc = 0x004FE210u; return; } if (c.pc != 0x003BFEF8u) [[unlikely]] return; }
L_003BFEF8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFF04u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00CB(c, 370u, depth + 1u); else { c.pc = 0x0042FEB0u; return; } if (c.pc != 0x003BFF04u) [[unlikely]] return; }
L_003BFF04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BFF74; } }
L_003BFF0C:
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[5].d[0]) { set32(c.r[2], 0u + 4u);  goto L_003BFF30; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 4096u);
    set32(c.r[6], c.r[6].w[0] - 25618u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFF28u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003BFF28u) [[unlikely]] return; }
L_003BFF28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BFF74; } }
L_003BFF30:
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[2].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003BFF60; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 4096u);
    set32(c.r[6], c.r[6].w[0] - 25548u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFF4Cu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003BFF4Cu) [[unlikely]] return; }
L_003BFF4C:
    set32(c.r[4], ld32((c.r[19].w[0] + 128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFF58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 273u, depth + 1u); else { c.pc = 0x004BA510u; return; } if (c.pc != 0x003BFF58u) [[unlikely]] return; }
L_003BFF58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BFF74; } }
L_003BFF60:
    set32(c.r[4], 0u + 4096u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], c.r[6].w[0] - 25479u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFF74u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003BFF74u) [[unlikely]] return; }
L_003BFF74:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 30508u));
    c.budget -= 1;
L_003BFF78:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[2].d[0] = ld16((c.r[28].w[0] - 30504u));  [[clang::musttail]] return unit_00B0(c, 1u, depth); }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFF90u); set32(c.r[5], c.r[5].w[0] - 25896u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003BFF90u) [[unlikely]] return; }
L_003BFF90:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFFA0u); set32(c.r[6], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_0017(c, 440u, depth + 1u); else { c.pc = 0x0015FE00u; return; } if (c.pc != 0x003BFFA0u) [[unlikely]] return; }
L_003BFFA0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFFACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003BFFACu) [[unlikely]] return; }
L_003BFFAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFFBCu); set32(c.r[5], c.r[5].w[0] - 25888u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003BFFBCu) [[unlikely]] return; }
L_003BFFBC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFFCCu); set32(c.r[6], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0017(c, 440u, depth + 1u); else { c.pc = 0x0015FE00u; return; } if (c.pc != 0x003BFFCCu) [[unlikely]] return; }
L_003BFFCC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFFD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003BFFD8u) [[unlikely]] return; }
L_003BFFD8:
    set32(c.r[8], ld32((c.r[29].w[0] + 180u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[9], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[4], 0u + 4096u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] - 25447u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFFF8u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003BFFF8u) [[unlikely]] return; }
L_003BFFF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { [[clang::musttail]] return unit_00B0(c, 16u, depth); } }
    [[clang::musttail]] return unit_00B0(c, 1u, depth);
}

}
