#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00C2[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141,
    0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0,
    0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0,
    0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0,
    0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0,
    0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 185,
    0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 191,
    0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0,
    0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0,
    207, 0, 208, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0,
    0, 222, 0, 223, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0,
    230, 0, 231, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0,
    0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0,
    0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0,
    0, 249, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0,
    0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269,
    0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276,
    0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 285,
    0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0,
    295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0,
    0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0,
    0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0,
    0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0,
    0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0,
    0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334,
    0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336,
    0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0,
    0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0,
    0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    357, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0,
    0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0,
    0, 0, 0, 0, 0, 373, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0,
    0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0,
    0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 391,
    0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0,
    396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404,
    0, 0, 405, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0,
    0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0,
    0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0,
    423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 433, 0, 0, 0, 434, 0, 0, 0,
    0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0,
    0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0,
    0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0,
    0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0,
    0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0,
};

void unit_00C2(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00408000;
    case 2u: goto L_00408028;
    case 3u: goto L_00408050;
    case 4u: goto L_00408078;
    case 5u: goto L_004080A0;
    case 6u: goto L_004080CC;
    case 7u: goto L_004080F8;
    case 8u: goto L_00408120;
    case 9u: goto L_0040814C;
    case 10u: goto L_00408178;
    case 11u: goto L_004081A4;
    case 12u: goto L_004081D0;
    case 13u: goto L_004081FC;
    case 14u: goto L_00408228;
    case 15u: goto L_00408254;
    case 16u: goto L_0040827C;
    case 17u: goto L_004082A8;
    case 18u: goto L_004082D0;
    case 19u: goto L_004082FC;
    case 20u: goto L_00408328;
    case 21u: goto L_00408354;
    case 22u: goto L_00408380;
    case 23u: goto L_004083AC;
    case 24u: goto L_004083D4;
    case 25u: goto L_004083FC;
    case 26u: goto L_00408428;
    case 27u: goto L_00408454;
    case 28u: goto L_0040847C;
    case 29u: goto L_004084A8;
    case 30u: goto L_004084D4;
    case 31u: goto L_00408500;
    case 32u: goto L_0040852C;
    case 33u: goto L_00408554;
    case 34u: goto L_00408580;
    case 35u: goto L_004085A8;
    case 36u: goto L_004085D0;
    case 37u: goto L_004085F8;
    case 38u: goto L_00408620;
    case 39u: goto L_00408648;
    case 40u: goto L_00408674;
    case 41u: goto L_004086A0;
    case 42u: goto L_004086CC;
    case 43u: goto L_004086F8;
    case 44u: goto L_00408724;
    case 45u: goto L_0040874C;
    case 46u: goto L_00408774;
    case 47u: goto L_004087A0;
    case 48u: goto L_004087C8;
    case 49u: goto L_004087F0;
    case 50u: goto L_00408818;
    case 51u: goto L_00408844;
    case 52u: goto L_00408870;
    case 53u: goto L_00408898;
    case 54u: goto L_004088C0;
    case 55u: goto L_004088E8;
    case 56u: goto L_00408910;
    case 57u: goto L_00408938;
    case 58u: goto L_00408960;
    case 59u: goto L_00408988;
    case 60u: goto L_004089B0;
    case 61u: goto L_004089D8;
    case 62u: goto L_00408A00;
    case 63u: goto L_00408A28;
    case 64u: goto L_00408A50;
    case 65u: goto L_00408A78;
    case 66u: goto L_00408AA0;
    case 67u: goto L_00408AC8;
    case 68u: goto L_00408AF4;
    case 69u: goto L_00408B20;
    case 70u: goto L_00408B48;
    case 71u: goto L_00408B74;
    case 72u: goto L_00408B9C;
    case 73u: goto L_00408BC4;
    case 74u: goto L_00408BEC;
    case 75u: goto L_00408C18;
    case 76u: goto L_00408C44;
    case 77u: goto L_00408C70;
    case 78u: goto L_00408C9C;
    case 79u: goto L_00408CC8;
    case 80u: goto L_00408CF4;
    case 81u: goto L_00408D20;
    case 82u: goto L_00408D4C;
    case 83u: goto L_00408D78;
    case 84u: goto L_00408DA0;
    case 85u: goto L_00408DC8;
    case 86u: goto L_00408DF4;
    case 87u: goto L_00408E20;
    case 88u: goto L_00408E4C;
    case 89u: goto L_00408E78;
    case 90u: goto L_00408EA4;
    case 91u: goto L_00408ED0;
    case 92u: goto L_00408EFC;
    case 93u: goto L_00408F28;
    case 94u: goto L_00408F54;
    case 95u: goto L_00408F7C;
    case 96u: goto L_00408FA4;
    case 97u: goto L_00408FCC;
    case 98u: goto L_00408FF8;
    case 99u: goto L_00409024;
    case 100u: goto L_00409050;
    case 101u: goto L_0040907C;
    case 102u: goto L_004090A8;
    case 103u: goto L_004090D4;
    case 104u: goto L_00409100;
    case 105u: goto L_0040912C;
    case 106u: goto L_00409158;
    case 107u: goto L_00409184;
    case 108u: goto L_004091B0;
    case 109u: goto L_004091DC;
    case 110u: goto L_00409208;
    case 111u: goto L_00409234;
    case 112u: goto L_0040925C;
    case 113u: goto L_00409288;
    case 114u: goto L_004092B4;
    case 115u: goto L_004092E0;
    case 116u: goto L_0040930C;
    case 117u: goto L_00409338;
    case 118u: goto L_00409364;
    case 119u: goto L_00409390;
    case 120u: goto L_004093BC;
    case 121u: goto L_004093E8;
    case 122u: goto L_00409414;
    case 123u: goto L_00409440;
    case 124u: goto L_0040946C;
    case 125u: goto L_00409498;
    case 126u: goto L_004094C4;
    case 127u: goto L_004094F0;
    case 128u: goto L_0040951C;
    case 129u: goto L_00409548;
    case 130u: goto L_00409570;
    case 131u: goto L_00409598;
    case 132u: goto L_004095C4;
    case 133u: goto L_004095F0;
    case 134u: goto L_0040961C;
    case 135u: goto L_00409630;
    case 136u: goto L_00409658;
    case 137u: goto L_0040967C;
    case 138u: goto L_004096A8;
    case 139u: goto L_004096C0;
    case 140u: goto L_004096E8;
    case 141u: goto L_004096FC;
    case 142u: goto L_0040970C;
    case 143u: goto L_00409730;
    case 144u: goto L_00409744;
    case 145u: goto L_00409754;
    case 146u: goto L_00409778;
    case 147u: goto L_0040978C;
    case 148u: goto L_0040979C;
    case 149u: goto L_004097C0;
    case 150u: goto L_0040981C;
    case 151u: goto L_00409840;
    case 152u: goto L_00409864;
    case 153u: goto L_00409878;
    case 154u: goto L_00409888;
    case 155u: goto L_004098AC;
    case 156u: goto L_004098BC;
    case 157u: goto L_004098CC;
    case 158u: goto L_004098F0;
    case 159u: goto L_00409900;
    case 160u: goto L_00409910;
    case 161u: goto L_00409934;
    case 162u: goto L_00409948;
    case 163u: goto L_00409970;
    case 164u: goto L_00409994;
    case 165u: goto L_004099A8;
    case 166u: goto L_004099B8;
    case 167u: goto L_004099DC;
    case 168u: goto L_004099F4;
    case 169u: goto L_00409A14;
    case 170u: goto L_00409A3C;
    case 171u: goto L_00409A50;
    case 172u: goto L_00409A60;
    case 173u: goto L_00409A80;
    case 174u: goto L_00409AA0;
    case 175u: goto L_00409AF4;
    case 176u: goto L_00409B20;
    case 177u: goto L_00409B48;
    case 178u: goto L_00409B5C;
    case 179u: goto L_00409B6C;
    case 180u: goto L_00409B90;
    case 181u: goto L_00409BA4;
    case 182u: goto L_00409BB4;
    case 183u: goto L_00409BD8;
    case 184u: goto L_00409BEC;
    case 185u: goto L_00409BFC;
    case 186u: goto L_00409C20;
    case 187u: goto L_00409C88;
    case 188u: goto L_00409CB0;
    case 189u: goto L_00409CD8;
    case 190u: goto L_00409CEC;
    case 191u: goto L_00409CFC;
    case 192u: goto L_00409D20;
    case 193u: goto L_00409D34;
    case 194u: goto L_00409D44;
    case 195u: goto L_00409D68;
    case 196u: goto L_00409D78;
    case 197u: goto L_00409D88;
    case 198u: goto L_00409DAC;
    case 199u: goto L_00409DC0;
    case 200u: goto L_00409DE0;
    case 201u: goto L_00409E00;
    case 202u: goto L_00409E34;
    case 203u: goto L_00409E48;
    case 204u: goto L_00409E50;
    case 205u: goto L_00409E64;
    case 206u: goto L_00409E6C;
    case 207u: goto L_00409E80;
    case 208u: goto L_00409E88;
    case 209u: goto L_00409E9C;
    case 210u: goto L_00409EA4;
    case 211u: goto L_00409EB8;
    case 212u: goto L_00409ED0;
    case 213u: goto L_00409EF0;
    case 214u: goto L_00409F10;
    case 215u: goto L_00409F3C;
    case 216u: goto L_00409F4C;
    case 217u: goto L_00409F64;
    case 218u: goto L_00409F8C;
    case 219u: goto L_00409FD0;
    case 220u: goto L_00409FE4;
    case 221u: goto L_00409FEC;
    case 222u: goto L_0040A004;
    case 223u: goto L_0040A00C;
    case 224u: goto L_0040A024;
    case 225u: goto L_0040A02C;
    case 226u: goto L_0040A044;
    case 227u: goto L_0040A04C;
    case 228u: goto L_0040A064;
    case 229u: goto L_0040A06C;
    case 230u: goto L_0040A080;
    case 231u: goto L_0040A088;
    case 232u: goto L_0040A09C;
    case 233u: goto L_0040A0A4;
    case 234u: goto L_0040A0C8;
    case 235u: goto L_0040A0F0;
    case 236u: goto L_0040A11C;
    case 237u: goto L_0040A13C;
    case 238u: goto L_0040A158;
    case 239u: goto L_0040A178;
    case 240u: goto L_0040A188;
    case 241u: goto L_0040A198;
    case 242u: goto L_0040A1B0;
    case 243u: goto L_0040A1E8;
    case 244u: goto L_0040A20C;
    case 245u: goto L_0040A224;
    case 246u: goto L_0040A240;
    case 247u: goto L_0040A264;
    case 248u: goto L_0040A278;
    case 249u: goto L_0040A284;
    case 250u: goto L_0040A28C;
    case 251u: goto L_0040A2A0;
    case 252u: goto L_0040A2D0;
    case 253u: goto L_0040A2F4;
    case 254u: goto L_0040A308;
    case 255u: goto L_0040A31C;
    case 256u: goto L_0040A334;
    case 257u: goto L_0040A34C;
    case 258u: goto L_0040A370;
    case 259u: goto L_0040A38C;
    case 260u: goto L_0040A3A0;
    case 261u: goto L_0040A3AC;
    case 262u: goto L_0040A3C0;
    case 263u: goto L_0040A3E0;
    case 264u: goto L_0040A408;
    case 265u: goto L_0040A418;
    case 266u: goto L_0040A434;
    case 267u: goto L_0040A44C;
    case 268u: goto L_0040A464;
    case 269u: goto L_0040A47C;
    case 270u: goto L_0040A494;
    case 271u: goto L_0040A4AC;
    case 272u: goto L_0040A4B4;
    case 273u: goto L_0040A4C4;
    case 274u: goto L_0040A4D4;
    case 275u: goto L_0040A4E0;
    case 276u: goto L_0040A4FC;
    case 277u: goto L_0040A510;
    case 278u: goto L_0040A520;
    case 279u: goto L_0040A530;
    case 280u: goto L_0040A540;
    case 281u: goto L_0040A550;
    case 282u: goto L_0040A560;
    case 283u: goto L_0040A5D8;
    case 284u: goto L_0040A5E8;
    case 285u: goto L_0040A5FC;
    case 286u: goto L_0040A608;
    case 287u: goto L_0040A62C;
    case 288u: goto L_0040A6AC;
    case 289u: goto L_0040A774;
    case 290u: goto L_0040A7F0;
    case 291u: goto L_0040A834;
    case 292u: goto L_0040A844;
    case 293u: goto L_0040A854;
    case 294u: goto L_0040A874;
    case 295u: goto L_0040A880;
    case 296u: goto L_0040A8F0;
    case 297u: goto L_0040A928;
    case 298u: goto L_0040A948;
    case 299u: goto L_0040AA40;
    case 300u: goto L_0040AA80;
    case 301u: goto L_0040AAB8;
    case 302u: goto L_0040AAE4;
    case 303u: goto L_0040AAEC;
    case 304u: goto L_0040AB08;
    case 305u: goto L_0040AB50;
    case 306u: goto L_0040AB70;
    case 307u: goto L_0040AB88;
    case 308u: goto L_0040ABC0;
    case 309u: goto L_0040ABEC;
    case 310u: goto L_0040AC10;
    case 311u: goto L_0040AC40;
    case 312u: goto L_0040AC50;
    case 313u: goto L_0040AC60;
    case 314u: goto L_0040AC70;
    case 315u: goto L_0040AC90;
    case 316u: goto L_0040ACA8;
    case 317u: goto L_0040ACB0;
    case 318u: goto L_0040ACC0;
    case 319u: goto L_0040AD10;
    case 320u: goto L_0040AD24;
    case 321u: goto L_0040AD30;
    case 322u: goto L_0040AD54;
    case 323u: goto L_0040AD64;
    case 324u: goto L_0040AD78;
    case 325u: goto L_0040AD84;
    case 326u: goto L_0040ADA8;
    case 327u: goto L_0040ADB8;
    case 328u: goto L_0040ADC4;
    case 329u: goto L_0040AE54;
    case 330u: goto L_0040AEC8;
    case 331u: goto L_0040AED8;
    case 332u: goto L_0040AF74;
    case 333u: goto L_0040AFAC;
    case 334u: goto L_0040AFFC;
    case 335u: goto L_0040B020;
    case 336u: goto L_0040B07C;
    case 337u: goto L_0040B084;
    case 338u: goto L_0040B0B0;
    case 339u: goto L_0040B0D8;
    case 340u: goto L_0040B0F0;
    case 341u: goto L_0040B104;
    case 342u: goto L_0040B130;
    case 343u: goto L_0040B1A8;
    case 344u: goto L_0040B1B8;
    case 345u: goto L_0040B21C;
    case 346u: goto L_0040B224;
    case 347u: goto L_0040B234;
    case 348u: goto L_0040B248;
    case 349u: goto L_0040B268;
    case 350u: goto L_0040B288;
    case 351u: goto L_0040B2A8;
    case 352u: goto L_0040B2C8;
    case 353u: goto L_0040B2FC;
    case 354u: goto L_0040B324;
    case 355u: goto L_0040B330;
    case 356u: goto L_0040B348;
    case 357u: goto L_0040B380;
    case 358u: goto L_0040B38C;
    case 359u: goto L_0040B398;
    case 360u: goto L_0040B3B4;
    case 361u: goto L_0040B3E0;
    case 362u: goto L_0040B450;
    case 363u: goto L_0040B470;
    case 364u: goto L_0040B494;
    case 365u: goto L_0040B49C;
    case 366u: goto L_0040B4A8;
    case 367u: goto L_0040B4B8;
    case 368u: goto L_0040B4C8;
    case 369u: goto L_0040B4E0;
    case 370u: goto L_0040B520;
    case 371u: goto L_0040B54C;
    case 372u: goto L_0040B570;
    case 373u: goto L_0040B594;
    case 374u: goto L_0040B59C;
    case 375u: goto L_0040B5B4;
    case 376u: goto L_0040B5D0;
    case 377u: goto L_0040B608;
    case 378u: goto L_0040B620;
    case 379u: goto L_0040B640;
    case 380u: goto L_0040B664;
    case 381u: goto L_0040B66C;
    case 382u: goto L_0040B684;
    case 383u: goto L_0040B69C;
    case 384u: goto L_0040B6C8;
    case 385u: goto L_0040B6D8;
    case 386u: goto L_0040B6F0;
    case 387u: goto L_0040B714;
    case 388u: goto L_0040B730;
    case 389u: goto L_0040B768;
    case 390u: goto L_0040B774;
    case 391u: goto L_0040B77C;
    case 392u: goto L_0040B794;
    case 393u: goto L_0040B7A4;
    case 394u: goto L_0040B7B4;
    case 395u: goto L_0040B7E0;
    case 396u: goto L_0040B800;
    case 397u: goto L_0040B81C;
    case 398u: goto L_0040B840;
    case 399u: goto L_0040B860;
    case 400u: goto L_0040B890;
    case 401u: goto L_0040B898;
    case 402u: goto L_0040B8B0;
    case 403u: goto L_0040B8D4;
    case 404u: goto L_0040B8FC;
    case 405u: goto L_0040B908;
    case 406u: goto L_0040B914;
    case 407u: goto L_0040B91C;
    case 408u: goto L_0040B934;
    case 409u: goto L_0040B94C;
    case 410u: goto L_0040B968;
    case 411u: goto L_0040B98C;
    case 412u: goto L_0040B9A8;
    case 413u: goto L_0040B9B8;
    case 414u: goto L_0040B9CC;
    case 415u: goto L_0040B9E4;
    case 416u: goto L_0040BA04;
    case 417u: goto L_0040BA28;
    case 418u: goto L_0040BA40;
    case 419u: goto L_0040BA64;
    case 420u: goto L_0040BA90;
    case 421u: goto L_0040BAB0;
    case 422u: goto L_0040BADC;
    case 423u: goto L_0040BB00;
    case 424u: goto L_0040BB60;
    case 425u: goto L_0040BBA8;
    case 426u: goto L_0040BBB0;
    case 427u: goto L_0040BBC8;
    case 428u: goto L_0040BBE8;
    case 429u: goto L_0040BC10;
    case 430u: goto L_0040BC34;
    case 431u: goto L_0040BC48;
    case 432u: goto L_0040BC58;
    case 433u: goto L_0040BC60;
    case 434u: goto L_0040BC70;
    case 435u: goto L_0040BC90;
    case 436u: goto L_0040BCBC;
    case 437u: goto L_0040BCD0;
    case 438u: goto L_0040BD08;
    case 439u: goto L_0040BD34;
    case 440u: goto L_0040BD44;
    case 441u: goto L_0040BD4C;
    case 442u: goto L_0040BD54;
    case 443u: goto L_0040BD78;
    case 444u: goto L_0040BD94;
    case 445u: goto L_0040BDC0;
    case 446u: goto L_0040BDF4;
    case 447u: goto L_0040BE04;
    case 448u: goto L_0040BE2C;
    case 449u: goto L_0040BE4C;
    case 450u: goto L_0040BE58;
    case 451u: goto L_0040BE80;
    case 452u: goto L_0040BEA0;
    case 453u: goto L_0040BEAC;
    case 454u: goto L_0040BEC0;
    case 455u: goto L_0040BEEC;
    case 456u: goto L_0040BF10;
    case 457u: goto L_0040BF44;
    case 458u: goto L_0040BF54;
    case 459u: goto L_0040BF74;
    case 460u: goto L_0040BF88;
    case 461u: goto L_0040BFA8;
    case 462u: goto L_0040BFB4;
    case 463u: goto L_0040BFC0;
    case 464u: goto L_0040BFD4;
    case 465u: goto L_0040BFE4;
    case 466u: goto L_0040BFF8;
    default: bad_entry(c, 0x00408000u); return;
    }
L_00408000:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 465u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 31216u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408028u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408028u) [[unlikely]] return; }
L_00408028:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 478u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 31104u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408050u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408050u) [[unlikely]] return; }
L_00408050:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 503u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 31072u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408078u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408078u) [[unlikely]] return; }
L_00408078:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 528u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 30928u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004080A0u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004080A0u) [[unlikely]] return; }
L_004080A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 544u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 558u);
    set32(c.r[7], c.r[7].w[0] + 30912u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004080CCu); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004080CCu) [[unlikely]] return; }
L_004080CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 570u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 589u);
    set32(c.r[7], c.r[7].w[0] + 30832u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004080F8u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004080F8u) [[unlikely]] return; }
L_004080F8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 593u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 30784u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408120u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408120u) [[unlikely]] return; }
L_00408120:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 612u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 589u);
    set32(c.r[7], c.r[7].w[0] + 30768u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040814Cu); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0040814Cu) [[unlikely]] return; }
L_0040814C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 628u);
    set32(c.r[5], c.r[5].w[0] + 589u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 30752u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408178u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408178u) [[unlikely]] return; }
L_00408178:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 644u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 558u);
    set32(c.r[7], c.r[7].w[0] + 30192u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004081A4u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004081A4u) [[unlikely]] return; }
L_004081A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 666u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 558u);
    set32(c.r[7], c.r[7].w[0] + 30032u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004081D0u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004081D0u) [[unlikely]] return; }
L_004081D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 684u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 558u);
    set32(c.r[7], c.r[7].w[0] + 29872u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004081FCu); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004081FCu) [[unlikely]] return; }
L_004081FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 704u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 713u);
    set32(c.r[7], c.r[7].w[0] + 30720u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408228u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408228u) [[unlikely]] return; }
L_00408228:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 730u);
    set32(c.r[5], c.r[5].w[0] + 364u);
    set32(c.r[6], c.r[6].w[0] + 589u);
    set32(c.r[7], c.r[7].w[0] + 30672u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408254u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408254u) [[unlikely]] return; }
L_00408254:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 364u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 747u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 30592u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040827Cu); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0040827Cu) [[unlikely]] return; }
L_0040827C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 774u);
    set32(c.r[5], c.r[5].w[0] + 364u);
    set32(c.r[6], c.r[6].w[0] + 589u);
    set32(c.r[7], c.r[7].w[0] + 30432u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004082A8u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004082A8u) [[unlikely]] return; }
L_004082A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 364u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 806u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 30352u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004082D0u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004082D0u) [[unlikely]] return; }
L_004082D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 834u);
    set32(c.r[5], c.r[5].w[0] + 364u);
    set32(c.r[6], c.r[6].w[0] + 589u);
    set32(c.r[7], c.r[7].w[0] + 30208u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004082FCu); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004082FCu) [[unlikely]] return; }
L_004082FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 863u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 589u);
    set32(c.r[7], c.r[7].w[0] + 29840u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408328u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408328u) [[unlikely]] return; }
L_00408328:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 876u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 441u);
    set32(c.r[7], c.r[7].w[0] + 29856u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408354u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408354u) [[unlikely]] return; }
L_00408354:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 894u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 589u);
    set32(c.r[7], c.r[7].w[0] + 29824u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408380u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408380u) [[unlikely]] return; }
L_00408380:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 912u);
    set32(c.r[5], c.r[5].w[0] + 589u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 29792u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004083ACu); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004083ACu) [[unlikely]] return; }
L_004083AC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 927u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 29728u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004083D4u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004083D4u) [[unlikely]] return; }
L_004083D4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 939u);
    set32(c.r[5], c.r[5].w[0] + 364u);
    set32(c.r[7], c.r[7].w[0] + 29616u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004083FCu); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004083FCu) [[unlikely]] return; }
L_004083FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 953u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 364u);
    set32(c.r[7], c.r[7].w[0] + 29680u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408428u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408428u) [[unlikely]] return; }
L_00408428:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 967u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 441u);
    set32(c.r[7], c.r[7].w[0] + 22704u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408454u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408454u) [[unlikely]] return; }
L_00408454:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 983u);
    set32(c.r[5], c.r[5].w[0] + 441u);
    set32(c.r[7], c.r[7].w[0] + 22656u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040847Cu); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0040847Cu) [[unlikely]] return; }
L_0040847C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 1001u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 441u);
    set32(c.r[7], c.r[7].w[0] + 23296u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004084A8u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004084A8u) [[unlikely]] return; }
L_004084A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 1016u);
    set32(c.r[5], c.r[5].w[0] + 441u);
    set32(c.r[6], c.r[6].w[0] + 364u);
    set32(c.r[7], c.r[7].w[0] + 29600u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004084D4u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004084D4u) [[unlikely]] return; }
L_004084D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 1036u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 589u);
    set32(c.r[7], c.r[7].w[0] + 29568u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408500u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408500u) [[unlikely]] return; }
L_00408500:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 1056u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 589u);
    set32(c.r[7], c.r[7].w[0] + 29552u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040852Cu); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0040852Cu) [[unlikely]] return; }
L_0040852C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1082u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 29488u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408554u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408554u) [[unlikely]] return; }
L_00408554:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 1098u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 1121u);
    set32(c.r[7], c.r[7].w[0] + 29408u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408580u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408580u) [[unlikely]] return; }
L_00408580:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1133u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 29392u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004085A8u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004085A8u) [[unlikely]] return; }
L_004085A8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1162u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 29376u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004085D0u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004085D0u) [[unlikely]] return; }
L_004085D0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1190u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 29344u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004085F8u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004085F8u) [[unlikely]] return; }
L_004085F8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1211u);
    set32(c.r[5], c.r[5].w[0] + 441u);
    set32(c.r[7], c.r[7].w[0] + 29312u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408620u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408620u) [[unlikely]] return; }
L_00408620:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1235u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 29296u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408648u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408648u) [[unlikely]] return; }
L_00408648:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 1268u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 441u);
    set32(c.r[7], c.r[7].w[0] + 29168u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408674u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408674u) [[unlikely]] return; }
L_00408674:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 1297u);
    set32(c.r[5], c.r[5].w[0] + 441u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 29088u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004086A0u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004086A0u) [[unlikely]] return; }
L_004086A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 1326u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 441u);
    set32(c.r[7], c.r[7].w[0] + 29120u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004086CCu); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004086CCu) [[unlikely]] return; }
L_004086CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 1347u);
    set32(c.r[5], c.r[5].w[0] + 589u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 29072u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004086F8u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004086F8u) [[unlikely]] return; }
L_004086F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 1368u);
    set32(c.r[5], c.r[5].w[0] + 1385u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 29056u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408724u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408724u) [[unlikely]] return; }
L_00408724:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1392u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 29040u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040874Cu); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0040874Cu) [[unlikely]] return; }
L_0040874C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 1411u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 28784u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408774u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408774u) [[unlikely]] return; }
L_00408774:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 1429u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 441u);
    set32(c.r[7], c.r[7].w[0] + 23312u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004087A0u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004087A0u) [[unlikely]] return; }
L_004087A0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1452u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 28736u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004087C8u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004087C8u) [[unlikely]] return; }
L_004087C8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1468u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 28688u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004087F0u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004087F0u) [[unlikely]] return; }
L_004087F0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1483u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 28640u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408818u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408818u) [[unlikely]] return; }
L_00408818:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 1506u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 589u);
    set32(c.r[7], c.r[7].w[0] + 28304u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408844u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408844u) [[unlikely]] return; }
L_00408844:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 1524u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 441u);
    set32(c.r[7], c.r[7].w[0] + 28544u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408870u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408870u) [[unlikely]] return; }
L_00408870:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1544u);
    set32(c.r[5], c.r[5].w[0] + 441u);
    set32(c.r[7], c.r[7].w[0] + 28448u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408898u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408898u) [[unlikely]] return; }
L_00408898:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1568u);
    set32(c.r[5], c.r[5].w[0] + 441u);
    set32(c.r[7], c.r[7].w[0] + 28400u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004088C0u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004088C0u) [[unlikely]] return; }
L_004088C0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1585u);
    set32(c.r[5], c.r[5].w[0] + 441u);
    set32(c.r[7], c.r[7].w[0] + 28352u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004088E8u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004088E8u) [[unlikely]] return; }
L_004088E8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1603u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 28256u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408910u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408910u) [[unlikely]] return; }
L_00408910:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1633u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 28208u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408938u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408938u) [[unlikely]] return; }
L_00408938:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1659u);
    set32(c.r[5], c.r[5].w[0] + 441u);
    set32(c.r[7], c.r[7].w[0] + 28160u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408960u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408960u) [[unlikely]] return; }
L_00408960:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1687u);
    set32(c.r[5], c.r[5].w[0] + 441u);
    set32(c.r[7], c.r[7].w[0] + 28112u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408988u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408988u) [[unlikely]] return; }
L_00408988:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1702u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 28064u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004089B0u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004089B0u) [[unlikely]] return; }
L_004089B0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1725u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 28032u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004089D8u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004089D8u) [[unlikely]] return; }
L_004089D8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1748u);
    set32(c.r[5], c.r[5].w[0] + 441u);
    set32(c.r[7], c.r[7].w[0] + 27984u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408A00u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408A00u) [[unlikely]] return; }
L_00408A00:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1773u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 28496u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408A28u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408A28u) [[unlikely]] return; }
L_00408A28:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1801u);
    set32(c.r[5], c.r[5].w[0] + 441u);
    set32(c.r[7], c.r[7].w[0] + 27936u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408A50u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408A50u) [[unlikely]] return; }
L_00408A50:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1837u);
    set32(c.r[5], c.r[5].w[0] + 441u);
    set32(c.r[7], c.r[7].w[0] + 28608u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408A78u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408A78u) [[unlikely]] return; }
L_00408A78:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1857u);
    set32(c.r[5], c.r[5].w[0] + 441u);
    set32(c.r[7], c.r[7].w[0] + 27232u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408AA0u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408AA0u) [[unlikely]] return; }
L_00408AA0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1878u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 27888u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408AC8u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408AC8u) [[unlikely]] return; }
L_00408AC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 1890u);
    set32(c.r[5], c.r[5].w[0] + 1385u);
    set32(c.r[6], c.r[6].w[0] + 589u);
    set32(c.r[7], c.r[7].w[0] + 27872u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408AF4u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408AF4u) [[unlikely]] return; }
L_00408AF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 1921u);
    set32(c.r[5], c.r[5].w[0] + 1385u);
    set32(c.r[6], c.r[6].w[0] + 589u);
    set32(c.r[7], c.r[7].w[0] + 27856u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408B20u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408B20u) [[unlikely]] return; }
L_00408B20:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 1953u);
    set32(c.r[5], c.r[5].w[0] + 364u);
    set32(c.r[7], c.r[7].w[0] + 27840u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408B48u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408B48u) [[unlikely]] return; }
L_00408B48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 1985u);
    set32(c.r[5], c.r[5].w[0] + 1385u);
    set32(c.r[6], c.r[6].w[0] + 589u);
    set32(c.r[7], c.r[7].w[0] + 27552u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408B74u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408B74u) [[unlikely]] return; }
L_00408B74:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 2006u);
    set32(c.r[5], c.r[5].w[0] + 364u);
    set32(c.r[7], c.r[7].w[0] + 27472u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408B9Cu); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408B9Cu) [[unlikely]] return; }
L_00408B9C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 2026u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 27344u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408BC4u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408BC4u) [[unlikely]] return; }
L_00408BC4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[4].w[0] + 2044u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 27280u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408BECu); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408BECu) [[unlikely]] return; }
L_00408BEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2057u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 441u);
    set32(c.r[7], c.r[7].w[0] + 23920u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408C18u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408C18u) [[unlikely]] return; }
L_00408C18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2079u);
    set32(c.r[5], c.r[5].w[0] + 441u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 24064u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408C44u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408C44u) [[unlikely]] return; }
L_00408C44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2101u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 441u);
    set32(c.r[7], c.r[7].w[0] + 23664u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408C70u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408C70u) [[unlikely]] return; }
L_00408C70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2131u);
    set32(c.r[5], c.r[5].w[0] + 441u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 23808u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408C9Cu); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408C9Cu) [[unlikely]] return; }
L_00408C9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2161u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 441u);
    set32(c.r[7], c.r[7].w[0] + 23040u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408CC8u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408CC8u) [[unlikely]] return; }
L_00408CC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2177u);
    set32(c.r[5], c.r[5].w[0] + 441u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 23184u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408CF4u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408CF4u) [[unlikely]] return; }
L_00408CF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2193u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 441u);
    set32(c.r[7], c.r[7].w[0] + 22784u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408D20u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408D20u) [[unlikely]] return; }
L_00408D20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2212u);
    set32(c.r[5], c.r[5].w[0] + 441u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 22928u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408D4Cu); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408D4Cu) [[unlikely]] return; }
L_00408D4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2231u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 364u);
    set32(c.r[7], c.r[7].w[0] + 23616u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408D78u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408D78u) [[unlikely]] return; }
L_00408D78:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2245u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 23568u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408DA0u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408DA0u) [[unlikely]] return; }
L_00408DA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 364u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2275u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 23520u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408DC8u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408DC8u) [[unlikely]] return; }
L_00408DC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2293u);
    set32(c.r[5], c.r[5].w[0] + 441u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 23472u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408DF4u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408DF4u) [[unlikely]] return; }
L_00408DF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2315u);
    set32(c.r[5], c.r[5].w[0] + 364u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 23424u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408E20u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408E20u) [[unlikely]] return; }
L_00408E20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2343u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 2371u);
    set32(c.r[7], c.r[7].w[0] + 23328u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408E4Cu); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408E4Cu) [[unlikely]] return; }
L_00408E4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2382u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 2404u);
    set32(c.r[7], c.r[7].w[0] + 22016u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408E78u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408E78u) [[unlikely]] return; }
L_00408E78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2414u);
    set32(c.r[5], c.r[5].w[0] + 441u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 22544u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408EA4u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408EA4u) [[unlikely]] return; }
L_00408EA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2436u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 1121u);
    set32(c.r[7], c.r[7].w[0] + 27200u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408ED0u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408ED0u) [[unlikely]] return; }
L_00408ED0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2454u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 1121u);
    set32(c.r[7], c.r[7].w[0] + 27168u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408EFCu); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408EFCu) [[unlikely]] return; }
L_00408EFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2470u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 1121u);
    set32(c.r[7], c.r[7].w[0] + 27136u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408F28u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408F28u) [[unlikely]] return; }
L_00408F28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2494u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    set32(c.r[6], c.r[6].w[0] + 2519u);
    set32(c.r[7], c.r[7].w[0] + 27104u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408F54u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408F54u) [[unlikely]] return; }
L_00408F54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2536u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 27088u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408F7Cu); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408F7Cu) [[unlikely]] return; }
L_00408F7C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2568u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 27072u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408FA4u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408FA4u) [[unlikely]] return; }
L_00408FA4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2599u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 27024u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408FCCu); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408FCCu) [[unlikely]] return; }
L_00408FCC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2626u);
    set32(c.r[5], c.r[5].w[0] + 589u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 27008u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408FF8u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00408FF8u) [[unlikely]] return; }
L_00408FF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2651u);
    set32(c.r[5], c.r[5].w[0] + 1385u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 26816u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409024u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00409024u) [[unlikely]] return; }
L_00409024:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2682u);
    set32(c.r[5], c.r[5].w[0] + 1385u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 26528u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409050u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00409050u) [[unlikely]] return; }
L_00409050:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2721u);
    set32(c.r[5], c.r[5].w[0] + 1385u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 26416u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040907Cu); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0040907Cu) [[unlikely]] return; }
L_0040907C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2745u);
    set32(c.r[5], c.r[5].w[0] + 1385u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 26304u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004090A8u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004090A8u) [[unlikely]] return; }
L_004090A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2773u);
    set32(c.r[5], c.r[5].w[0] + 1385u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 26160u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004090D4u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004090D4u) [[unlikely]] return; }
L_004090D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2797u);
    set32(c.r[5], c.r[5].w[0] + 1385u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 26016u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409100u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00409100u) [[unlikely]] return; }
L_00409100:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2825u);
    set32(c.r[5], c.r[5].w[0] + 1385u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 25856u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040912Cu); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0040912Cu) [[unlikely]] return; }
L_0040912C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2851u);
    set32(c.r[5], c.r[5].w[0] + 1385u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 25712u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409158u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00409158u) [[unlikely]] return; }
L_00409158:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2884u);
    set32(c.r[5], c.r[5].w[0] + 2915u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 25632u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409184u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00409184u) [[unlikely]] return; }
L_00409184:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2921u);
    set32(c.r[5], c.r[5].w[0] + 1385u);
    set32(c.r[6], c.r[6].w[0] + 364u);
    set32(c.r[7], c.r[7].w[0] + 25136u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004091B0u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004091B0u) [[unlikely]] return; }
L_004091B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2957u);
    set32(c.r[5], c.r[5].w[0] + 1385u);
    set32(c.r[6], c.r[6].w[0] + 589u);
    set32(c.r[7], c.r[7].w[0] + 25056u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004091DCu); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004091DCu) [[unlikely]] return; }
L_004091DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 2986u);
    set32(c.r[5], c.r[5].w[0] + 364u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 24976u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409208u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00409208u) [[unlikely]] return; }
L_00409208:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 3026u);
    set32(c.r[5], c.r[5].w[0] + 589u);
    set32(c.r[6], c.r[6].w[0] + 364u);
    set32(c.r[7], c.r[7].w[0] + 24736u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409234u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00409234u) [[unlikely]] return; }
L_00409234:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 589u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 3053u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 24896u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040925Cu); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0040925Cu) [[unlikely]] return; }
L_0040925C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 3078u);
    set32(c.r[5], c.r[5].w[0] + 1385u);
    set32(c.r[6], c.r[6].w[0] + 589u);
    set32(c.r[7], c.r[7].w[0] + 24576u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409288u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00409288u) [[unlikely]] return; }
L_00409288:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 3111u);
    set32(c.r[5], c.r[5].w[0] + 1385u);
    set32(c.r[6], c.r[6].w[0] + 364u);
    set32(c.r[7], c.r[7].w[0] + 24432u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004092B4u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004092B4u) [[unlikely]] return; }
L_004092B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 3139u);
    set32(c.r[5], c.r[5].w[0] + 1385u);
    set32(c.r[6], c.r[6].w[0] + 589u);
    set32(c.r[7], c.r[7].w[0] + 24288u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004092E0u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004092E0u) [[unlikely]] return; }
L_004092E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 3174u);
    set32(c.r[5], c.r[5].w[0] + 589u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 25472u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040930Cu); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0040930Cu) [[unlikely]] return; }
L_0040930C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 3208u);
    set32(c.r[5], c.r[5].w[0] + 2915u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 25552u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409338u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00409338u) [[unlikely]] return; }
L_00409338:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 3241u);
    set32(c.r[5], c.r[5].w[0] + 2915u);
    set32(c.r[6], c.r[6].w[0] + 364u);
    set32(c.r[7], c.r[7].w[0] + 25408u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409364u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00409364u) [[unlikely]] return; }
L_00409364:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 3265u);
    set32(c.r[5], c.r[5].w[0] + 2915u);
    set32(c.r[6], c.r[6].w[0] + 364u);
    set32(c.r[7], c.r[7].w[0] + 25344u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409390u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00409390u) [[unlikely]] return; }
L_00409390:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 3289u);
    set32(c.r[5], c.r[5].w[0] + 2915u);
    set32(c.r[6], c.r[6].w[0] + 364u);
    set32(c.r[7], c.r[7].w[0] + 25280u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004093BCu); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004093BCu) [[unlikely]] return; }
L_004093BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 3316u);
    set32(c.r[5], c.r[5].w[0] + 2915u);
    set32(c.r[6], c.r[6].w[0] + 364u);
    set32(c.r[7], c.r[7].w[0] + 25216u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004093E8u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004093E8u) [[unlikely]] return; }
L_004093E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 3343u);
    set32(c.r[5], c.r[5].w[0] + 2915u);
    set32(c.r[6], c.r[6].w[0] + 589u);
    set32(c.r[7], c.r[7].w[0] + 24800u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409414u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00409414u) [[unlikely]] return; }
L_00409414:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 3370u);
    set32(c.r[5], c.r[5].w[0] + 589u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 24176u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409440u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00409440u) [[unlikely]] return; }
L_00409440:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 3391u);
    set32(c.r[5], c.r[5].w[0] + 589u);
    set32(c.r[6], c.r[6].w[0] + 3411u);
    set32(c.r[7], c.r[7].w[0] + 21936u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040946Cu); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0040946Cu) [[unlikely]] return; }
L_0040946C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 3420u);
    set32(c.r[5], c.r[5].w[0] + 364u);
    set32(c.r[6], c.r[6].w[0] + 3411u);
    set32(c.r[7], c.r[7].w[0] + 21824u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409498u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00409498u) [[unlikely]] return; }
L_00409498:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 3435u);
    set32(c.r[5], c.r[5].w[0] + 364u);
    set32(c.r[6], c.r[6].w[0] + 3455u);
    set32(c.r[7], c.r[7].w[0] + 21648u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004094C4u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004094C4u) [[unlikely]] return; }
L_004094C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 3469u);
    set32(c.r[5], c.r[5].w[0] + 364u);
    set32(c.r[6], c.r[6].w[0] + 3455u);
    set32(c.r[7], c.r[7].w[0] + 21504u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004094F0u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004094F0u) [[unlikely]] return; }
L_004094F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 3488u);
    set32(c.r[5], c.r[5].w[0] + 364u);
    set32(c.r[6], c.r[6].w[0] + 3455u);
    set32(c.r[7], c.r[7].w[0] + 21376u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040951Cu); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0040951Cu) [[unlikely]] return; }
L_0040951C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 3510u);
    set32(c.r[5], c.r[5].w[0] + 441u);
    set32(c.r[6], c.r[6].w[0] + 3455u);
    set32(c.r[7], c.r[7].w[0] + 21184u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409548u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00409548u) [[unlikely]] return; }
L_00409548:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 3529u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 21168u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409570u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00409570u) [[unlikely]] return; }
L_00409570:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 345u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 3555u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 21152u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409598u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00409598u) [[unlikely]] return; }
L_00409598:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 3579u);
    set32(c.r[5], c.r[5].w[0] + 1385u);
    set32(c.r[6], c.r[6].w[0] + 364u);
    set32(c.r[7], c.r[7].w[0] + 21136u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004095C4u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004095C4u) [[unlikely]] return; }
L_004095C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 3595u);
    set32(c.r[5], c.r[5].w[0] + 589u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 21024u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004095F0u); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x004095F0u) [[unlikely]] return; }
L_004095F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 3614u);
    set32(c.r[5], c.r[5].w[0] + 589u);
    set32(c.r[6], c.r[6].w[0] + 345u);
    set32(c.r[7], c.r[7].w[0] + 20912u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040961Cu); set32(c.r[8], c.r[8].w[0] - 128u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0040961Cu) [[unlikely]] return; }
L_0040961C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00409630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409658u); set32(c.r[4], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_0004(c, 375u, depth + 1u); else { c.pc = 0x00113EC0u; return; } if (c.pc != 0x00409658u) [[unlikely]] return; }
L_00409658:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_00409674; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_00409674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040967Cu); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x0040967Cu) [[unlikely]] return; }
L_0040967C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] + 36u);  goto L_0040968C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004096AC; } }
L_0040968C:
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_004096A0; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_004096A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004096A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004096A8u) [[unlikely]] return; }
L_004096A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004096AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004096C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004096E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x004096E8u) [[unlikely]] return; }
L_004096E8:
    set32(c.r[17], c.r[2].w[0] + 28u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 4016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004096FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004096FCu) [[unlikely]] return; }
L_004096FC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040970Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x0040970Cu) [[unlikely]] return; }
L_0040970C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00409730; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00409730; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409730u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x00409730u) [[unlikely]] return; }
L_00409730:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[18], ld32((c.r[29].w[0] + 92u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409744u); set32(c.r[5], c.r[5].w[0] + 4030u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00409744u) [[unlikely]] return; }
L_00409744:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409754u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x00409754u) [[unlikely]] return; }
L_00409754:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0040977C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00409778; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409778u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x00409778u) [[unlikely]] return; }
L_00409778:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040977C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[17], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040978Cu); set32(c.r[5], c.r[5].w[0] + 4051u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0040978Cu) [[unlikely]] return; }
L_0040978C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040979Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x0040979Cu) [[unlikely]] return; }
L_0040979C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], ld32((c.r[28].w[0] - 26064u)));  goto L_004097C4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004097C0; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004097C0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x004097C0u) [[unlikely]] return; }
L_004097C0:
    set32(c.r[7], ld32((c.r[28].w[0] - 26064u)));
    c.budget -= 1;
L_004097C4:
    set32(c.r[6], c.r[18].w[0] - 1u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[8], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[8].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040981Cu); set32(c.r[5], c.r[5].w[0] + 4064u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0040981Cu) [[unlikely]] return; }
L_0040981C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00409840:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409864u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x00409864u) [[unlikely]] return; }
L_00409864:
    set32(c.r[17], c.r[2].w[0] + 28u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 4016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409878u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00409878u) [[unlikely]] return; }
L_00409878:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409888u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x00409888u) [[unlikely]] return; }
L_00409888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004098AC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004098AC; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004098ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x004098ACu) [[unlikely]] return; }
L_004098AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004098BCu); set32(c.r[5], c.r[5].w[0] + 4030u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004098BCu) [[unlikely]] return; }
L_004098BC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004098CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x004098CCu) [[unlikely]] return; }
L_004098CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004098F0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004098F0; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004098F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x004098F0u) [[unlikely]] return; }
L_004098F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409900u); set32(c.r[5], c.r[5].w[0] + 4051u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00409900u) [[unlikely]] return; }
L_00409900:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409910u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x00409910u) [[unlikely]] return; }
L_00409910:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 68u)));  goto L_00409938; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00409934; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409934u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x00409934u) [[unlikely]] return; }
L_00409934:
    set32(c.r[6], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 1;
L_00409938:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409948u); set32(c.r[5], c.r[5].w[0] + 4064u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x00409948u) [[unlikely]] return; }
L_00409948:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00409970:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409994u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x00409994u) [[unlikely]] return; }
L_00409994:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 4067u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004099A8u); set32(c.r[4], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004099A8u) [[unlikely]] return; }
L_004099A8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 79u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004099B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x004099B8u) [[unlikely]] return; }
L_004099B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 79u));  goto L_004099E0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004099DC; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 79u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004099DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x004099DCu) [[unlikely]] return; }
L_004099DC:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 79u));
    c.budget -= 1;
L_004099E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 332u);  if (t) { goto L_00409A44; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004099F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0004(c, 375u, depth + 1u); else { c.pc = 0x00113EC0u; return; } if (c.pc != 0x004099F4u) [[unlikely]] return; }
L_004099F4:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 9u);  goto L_00409A0C; }
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 1;
L_00409A0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409A14u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x00409A14u) [[unlikely]] return; }
L_00409A14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00409B00; }
    set32(c.r[3], c.r[2].w[0] + 20u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_00409A34; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_00409A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409A3Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00409A3Cu) [[unlikely]] return; }
L_00409A3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00409B00; } }
L_00409A44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409A50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0004(c, 375u, depth + 1u); else { c.pc = 0x00113EC0u; return; } if (c.pc != 0x00409A50u) [[unlikely]] return; }
L_00409A50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409A60u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0004(c, 375u, depth + 1u); else { c.pc = 0x00113EC0u; return; } if (c.pc != 0x00409A60u) [[unlikely]] return; }
L_00409A60:
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 9u);  goto L_00409A78; }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_00409A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409A80u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x00409A80u) [[unlikely]] return; }
L_00409A80:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[17].w[0] + 9u);  goto L_00409A98; }
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_00409A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409AA0u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x00409AA0u) [[unlikely]] return; }
L_00409AA0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00409AFC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00409AFC; } }
    set32(c.r[3], c.r[2].w[0] + 20u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[3].w[0] + 1u);  goto L_00409AC8; }
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_00409AC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 20u);  if (t) { goto L_00409AE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_00409AE4; } }
L_00409AE0:
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00409AE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409AF4u); set32(c.r[5], c.r[5].w[0] + 4098u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x00409AF4u) [[unlikely]] return; }
L_00409AF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00409B00; } }
L_00409AFC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00409B00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00409B20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409B48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x00409B48u) [[unlikely]] return; }
L_00409B48:
    set32(c.r[17], c.r[2].w[0] + 28u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 4016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409B5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00409B5Cu) [[unlikely]] return; }
L_00409B5C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409B6Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x00409B6Cu) [[unlikely]] return; }
L_00409B6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00409B90; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00409B90; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409B90u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x00409B90u) [[unlikely]] return; }
L_00409B90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[18], ld32((c.r[29].w[0] + 92u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409BA4u); set32(c.r[5], c.r[5].w[0] + 4030u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00409BA4u) [[unlikely]] return; }
L_00409BA4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409BB4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x00409BB4u) [[unlikely]] return; }
L_00409BB4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00409BDC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00409BD8; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409BD8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x00409BD8u) [[unlikely]] return; }
L_00409BD8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00409BDC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[17], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409BECu); set32(c.r[5], c.r[5].w[0] + 4051u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00409BECu) [[unlikely]] return; }
L_00409BEC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409BFCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x00409BFCu) [[unlikely]] return; }
L_00409BFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] - 1u);  goto L_00409C24; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00409C20; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409C20u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x00409C20u) [[unlikely]] return; }
L_00409C20:
    set32(c.r[5], c.r[18].w[0] - 1u);
    c.budget -= 1;
L_00409C24:
    set32(c.r[6], ld32((c.r[28].w[0] - 26064u)));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[6], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 22;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_00409C80; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_00409C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409C88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00409C88u) [[unlikely]] return; }
L_00409C88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00409CB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409CD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x00409CD8u) [[unlikely]] return; }
L_00409CD8:
    set32(c.r[16], c.r[2].w[0] + 28u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 4016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409CECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00409CECu) [[unlikely]] return; }
L_00409CEC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409CFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x00409CFCu) [[unlikely]] return; }
L_00409CFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00409D20; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00409D20; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409D20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x00409D20u) [[unlikely]] return; }
L_00409D20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[17], ld32((c.r[29].w[0] + 92u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409D34u); set32(c.r[5], c.r[5].w[0] + 4030u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00409D34u) [[unlikely]] return; }
L_00409D34:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409D44u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x00409D44u) [[unlikely]] return; }
L_00409D44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00409D68; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00409D68; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409D68u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x00409D68u) [[unlikely]] return; }
L_00409D68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409D78u); set32(c.r[5], c.r[5].w[0] + 4051u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00409D78u) [[unlikely]] return; }
L_00409D78:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409D88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x00409D88u) [[unlikely]] return; }
L_00409D88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00409DAC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00409DAC; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409DACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x00409DACu) [[unlikely]] return; }
L_00409DAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409DC0u); set32(c.r[5], c.r[5].w[0] + 4064u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x00409DC0u) [[unlikely]] return; }
L_00409DC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00409DE0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_00C2[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00409E00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26056u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { st32((c.r[28].w[0] - 26060u), 0u);  goto L_00409EBC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 3824u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_00C2[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00409E34:
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00409E48u); set32(c.r[5], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00409E48u) [[unlikely]] return; }
L_00409E48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00409EB8; } }
L_00409E50:
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00409E64u); set32(c.r[5], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00409E64u) [[unlikely]] return; }
L_00409E64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00409EB8; } }
L_00409E6C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00409E80u); set32(c.r[5], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00409E80u) [[unlikely]] return; }
L_00409E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00409EB8; } }
L_00409E88:
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00409E9Cu); set32(c.r[5], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00409E9Cu) [[unlikely]] return; }
L_00409E9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00409EB8; } }
L_00409EA4:
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00409EB8u); set32(c.r[5], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00409EB8u) [[unlikely]] return; }
L_00409EB8:
    st32((c.r[28].w[0] - 26060u), 0u);
    c.budget -= 1;
L_00409EBC:
    st32((c.r[28].w[0] - 26056u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00409ED0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_00C2[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00409EF0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_00C2[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00409F10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409F3Cu); set32(c.r[5], c.r[5].w[0] + 4011u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00409F3Cu) [[unlikely]] return; }
L_00409F3C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));  goto L_00409F54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409F4Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 201u, depth + 1u); else { c.pc = 0x00409E00u; return; } if (c.pc != 0x00409F4Cu) [[unlikely]] return; }
L_00409F4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0040A0D0; } }
L_00409F54:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00409F64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0040A0D0; } }
L_00409F64:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00409F94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3760u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409F8Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00409F8Cu) [[unlikely]] return; }
L_00409F8C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00409F64u | kUnwind; return; } goto L_00409F64; }
L_00409F94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3764u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0040A0D0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 3872u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_00C2[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00409FD0:
    set32(c.r[4], c.r[18].w[0] + 20u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[18].w[0] + 20u);  goto L_0040A0B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409FE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 318u, depth + 1u); else { c.pc = 0x0040E1A0u; return; } if (c.pc != 0x00409FE4u) [[unlikely]] return; }
L_00409FE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040A0B0; } }
L_00409FEC:
    set32(c.r[4], c.r[18].w[0] + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040A0B0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A004u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C4(c, 264u, depth + 1u); else { c.pc = 0x00411CE0u; return; } if (c.pc != 0x0040A004u) [[unlikely]] return; }
L_0040A004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040A0B0; } }
L_0040A00C:
    set32(c.r[4], c.r[18].w[0] + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040A0B0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A024u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00C4(c, 264u, depth + 1u); else { c.pc = 0x00411CE0u; return; } if (c.pc != 0x0040A024u) [[unlikely]] return; }
L_0040A024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040A0B0; } }
L_0040A02C:
    set32(c.r[4], c.r[18].w[0] + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040A0B0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A044u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C5(c, 178u, depth + 1u); else { c.pc = 0x004154A0u; return; } if (c.pc != 0x0040A044u) [[unlikely]] return; }
L_0040A044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040A0B0; } }
L_0040A04C:
    set32(c.r[4], c.r[18].w[0] + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040A0B0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A064u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00C5(c, 178u, depth + 1u); else { c.pc = 0x004154A0u; return; } if (c.pc != 0x0040A064u) [[unlikely]] return; }
L_0040A064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040A0B0; } }
L_0040A06C:
    set32(c.r[4], c.r[18].w[0] + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040A0B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A080u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 266u, depth + 1u); else { c.pc = 0x00415DB0u; return; } if (c.pc != 0x0040A080u) [[unlikely]] return; }
L_0040A080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040A0B0; } }
L_0040A088:
    set32(c.r[4], c.r[18].w[0] + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040A0B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A09Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 3u, depth + 1u); else { c.pc = 0x00418030u; return; } if (c.pc != 0x0040A09Cu) [[unlikely]] return; }
L_0040A09C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040A0B0; } }
L_0040A0A4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040A0D0; } }
L_0040A0B0:
    set32(c.r[4], c.r[18].w[0] + 20u);
    c.budget -= 1;
L_0040A0B4:
    st32((c.r[28].w[0] - 26060u), c.r[4].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A0C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040A0C8u) [[unlikely]] return; }
L_0040A0C8:
    st32((c.r[28].w[0] - 26056u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));
    c.budget -= 2;
L_0040A0D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040A0F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26064u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 26064u)));  goto L_0040A120; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A11Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040A11Cu) [[unlikely]] return; }
L_0040A11C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26064u)));
    c.budget -= 1;
L_0040A120:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[16], ld32((c.r[28].w[0] - 26064u)));
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { st32((c.r[28].w[0] - 26064u), 0u);  goto L_0040A19C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A13Cu); set32(c.r[4], ld32((c.r[28].w[0] - 29004u)));  if (depth < kMaxDepth) unit_0010(c, 440u, depth + 1u); else { c.pc = 0x00143460u; return; } if (c.pc != 0x0040A13Cu) [[unlikely]] return; }
L_0040A13C:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 16u), 0u);  goto L_0040A15C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A158u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040A158u) [[unlikely]] return; }
L_0040A158:
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 1;
L_0040A15C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_0040A17C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A178u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040A178u) [[unlikely]] return; }
L_0040A178:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_0040A17C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A188u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DD(c, 38u, depth + 1u); else { c.pc = 0x00474600u; return; } if (c.pc != 0x0040A188u) [[unlikely]] return; }
L_0040A188:
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A198u); st32((c.r[28].w[0] - 26064u), 0u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0040A198u) [[unlikely]] return; }
L_0040A198:
    st32((c.r[28].w[0] - 26064u), 0u);
    c.budget -= 1;
L_0040A19C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040A1B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040A224; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 24u);
    set32(c.r[2], c.r[2].w[0] + 24456u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0040A1E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A1E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040A1E8u) [[unlikely]] return; }
L_0040A1E8:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0040A210; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040A20C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040A20C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A20Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 25u, depth + 1u); else { c.pc = 0x003EC400u; return; } if (c.pc != 0x0040A20Cu) [[unlikely]] return; }
L_0040A20C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0040A210:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0040A228; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A224u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0040A224u) [[unlikely]] return; }
L_0040A224:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040A228:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040A240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040A284; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1044u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A264u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0040A264u) [[unlikely]] return; }
L_0040A264:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  goto L_0040A27C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 1044u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A278u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 41u, depth + 1u); else { c.pc = 0x00474680u; return; } if (c.pc != 0x0040A278u) [[unlikely]] return; }
L_0040A278:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_0040A27C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A284u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 19u, depth + 1u); else { c.pc = 0x00474370u; return; } if (c.pc != 0x0040A284u) [[unlikely]] return; }
L_0040A284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A28Cu); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_00DD(c, 12u, depth + 1u); else { c.pc = 0x00474180u; return; } if (c.pc != 0x0040A28Cu) [[unlikely]] return; }
L_0040A28C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040A2A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040A34C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 1044u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A2D0u); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0040A2D0u) [[unlikely]] return; }
L_0040A2D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0040A338; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 1044u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 24456u);
    set32(c.r[19], c.r[17].w[0] + 4u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A2F4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0040A2F4u) [[unlikely]] return; }
L_0040A2F4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0040A30C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A308u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0040A308u) [[unlikely]] return; }
L_0040A308:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0040A30C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[19].w[0]), c.r[2].w[0]);  goto L_0040A320; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A31Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0040A31Cu) [[unlikely]] return; }
L_0040A31C:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0040A320:
    set32(c.r[4], c.r[17].w[0] + 24u);
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0] + 8u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A334u); st32((c.r[19].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0040A334u) [[unlikely]] return; }
L_0040A334:
    st32((c.r[17].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 1;
L_0040A338:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 4105u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A34Cu); st32((c.r[18].w[0] + 8u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 241u, depth + 1u); else { c.pc = 0x003E9C20u; return; } if (c.pc != 0x0040A34Cu) [[unlikely]] return; }
L_0040A34C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0040A370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1048u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A38Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0040A38Cu) [[unlikely]] return; }
L_0040A38C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 52u);  goto L_0040A3A4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A3A0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 263u, depth + 1u); else { c.pc = 0x0040A3E0u; return; } if (c.pc != 0x0040A3A0u) [[unlikely]] return; }
L_0040A3A0:
    set32(c.r[4], 0u + 52u);
    c.budget -= 1;
L_0040A3A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A3ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0040A3ACu) [[unlikely]] return; }
L_0040A3AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 26064u)));  goto L_0040A3C4; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A3C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 467u, depth + 1u); else { c.pc = 0x003FF740u; return; } if (c.pc != 0x0040A3C0u) [[unlikely]] return; }
L_0040A3C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26064u)));
    c.budget -= 1;
L_0040A3C4:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040A3E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 1044u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 44u);
    st32((c.r[28].w[0] - 26060u), 0u);
    st32((c.r[28].w[0] - 26064u), c.r[16].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A408u); st32((c.r[28].w[0] - 26056u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0040A408u) [[unlikely]] return; }
L_0040A408:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040A418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A418u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 115u, depth + 1u); else { c.pc = 0x00144B80u; return; } if (c.pc != 0x0040A418u) [[unlikely]] return; }
L_0040A418:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 4127u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A434u); set32(c.r[6], c.r[6].w[0] - 25424u);  if (depth < kMaxDepth) unit_0011(c, 100u, depth + 1u); else { c.pc = 0x001449A0u; return; } if (c.pc != 0x0040A434u) [[unlikely]] return; }
L_0040A434:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[5].w[0] + 4148u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A44Cu); set32(c.r[6], c.r[6].w[0] - 25824u);  if (depth < kMaxDepth) unit_0011(c, 100u, depth + 1u); else { c.pc = 0x001449A0u; return; } if (c.pc != 0x0040A44Cu) [[unlikely]] return; }
L_0040A44C:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[5].w[0] + 4176u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A464u); set32(c.r[6], c.r[6].w[0] - 26256u);  if (depth < kMaxDepth) unit_0011(c, 100u, depth + 1u); else { c.pc = 0x001449A0u; return; } if (c.pc != 0x0040A464u) [[unlikely]] return; }
L_0040A464:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[5].w[0] + 4198u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A47Cu); set32(c.r[6], c.r[6].w[0] - 26560u);  if (depth < kMaxDepth) unit_0011(c, 100u, depth + 1u); else { c.pc = 0x001449A0u; return; } if (c.pc != 0x0040A47Cu) [[unlikely]] return; }
L_0040A47C:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[5].w[0] + 4218u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A494u); set32(c.r[6], c.r[6].w[0] - 26944u);  if (depth < kMaxDepth) unit_0011(c, 100u, depth + 1u); else { c.pc = 0x001449A0u; return; } if (c.pc != 0x0040A494u) [[unlikely]] return; }
L_0040A494:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[5].w[0] + 4242u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A4ACu); set32(c.r[6], c.r[6].w[0] - 27088u);  if (depth < kMaxDepth) unit_0011(c, 100u, depth + 1u); else { c.pc = 0x001449A0u; return; } if (c.pc != 0x0040A4ACu) [[unlikely]] return; }
L_0040A4AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A4B4u); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0011(c, 85u, depth + 1u); else { c.pc = 0x001447C0u; return; } if (c.pc != 0x0040A4B4u) [[unlikely]] return; }
L_0040A4B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A4C4u); set32(c.r[5], c.r[5].w[0] + 4263u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0040A4C4u) [[unlikely]] return; }
L_0040A4C4:
    set32(c.r[4], ld32((c.r[28].w[0] - 29004u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A4D4u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0010(c, 445u, depth + 1u); else { c.pc = 0x00143520u; return; } if (c.pc != 0x0040A4D4u) [[unlikely]] return; }
L_0040A4D4:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A4E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040A4E0u) [[unlikely]] return; }
L_0040A4E0:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[4], c.r[16].w[0] + 20u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1024u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A4FCu); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0040A4FCu) [[unlikely]] return; }
L_0040A4FC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040A510:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 4376u);  c.pc = t; return; }
L_0040A520:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 120u));  c.pc = t; return; }
L_0040A530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 116u));  c.pc = t; return; }
L_0040A540:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040A550:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040A560:
    c.budget -= 2;
    { c.r[7].d[0] = 0ull + 0ull;  goto L_0040A570; }
L_0040A570:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[20], ld32((c.r[2].w[0] + 184u)));
    c.budget -= 19;
    { const bool t = c.r[20].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0040A5CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0040A7C0; } }
L_0040A5CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A5D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 99u, depth + 1u); else { c.pc = 0x004B8D90u; return; } if (c.pc != 0x0040A5D8u) [[unlikely]] return; }
L_0040A5D8:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A5E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 99u, depth + 1u); else { c.pc = 0x004B8D90u; return; } if (c.pc != 0x0040A5E8u) [[unlikely]] return; }
L_0040A5E8:
    c.f[23] = fp::sub(c.f[20], c.f[0]);
    c.f[20] = ld32((c.r[17].w[0] + 1172u));
    c.f[22] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A5FCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 251u, depth + 1u); else { c.pc = 0x00462ED0u; return; } if (c.pc != 0x0040A5FCu) [[unlikely]] return; }
L_0040A5FC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A608u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 76u, depth + 1u); else { c.pc = 0x00464830u; return; } if (c.pc != 0x0040A608u) [[unlikely]] return; }
L_0040A608:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[3] = ld32((c.r[28].w[0] - 32252u));
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A62Cu); c.f[21] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));  if (depth < kMaxDepth) unit_00D8(c, 210u, depth + 1u); else { c.pc = 0x004623F0u; return; } if (c.pc != 0x0040A62Cu) [[unlikely]] return; }
L_0040A62C:
    c.f[0] = fp::sub(c.f[0], c.f[21]);
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0040A650; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] | 20864ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040A7BC; } }
L_0040A650:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_0040A69C; }
    c.f[0] = 0u;
    c.f[0] = fp::sub(c.f[22], c.f[0]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0040A688; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040A694; } }
L_0040A688:
    fpu_div(c, 0u, c.f[23], c.f[22]);
    c.budget -= 3;
L_0040A694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040A7BC; } }
L_0040A69C:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A6ACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 202u, depth + 1u); else { c.pc = 0x004D1CE0u; return; } if (c.pc != 0x0040A6ACu) [[unlikely]] return; }
L_0040A6AC:
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[5], ld32((c.r[17].w[0] + 132u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[6], 0u + 30u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[19].w[0] + 112u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 232u)));
    set32(c.r[7], c.f[0]);
    mmi::div(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 28u));
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[3] = ld32((c.r[4].w[0]));  if (t) { goto L_0040A70C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AA0000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040A748; } }
L_0040A70C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[3].w[0] - 3u);  goto L_0040A728; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C20000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040A748; } }
L_0040A728:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040A744; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42DC0000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040A748; } }
L_0040A744:
    c.f[21] = 0u;
    c.budget -= 1;
L_0040A748:
    c.f[0] = 0u;
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    c.f[2] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], c.r[6].w[0] << 4);  goto L_0040A790; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A774u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00EE(c, 99u, depth + 1u); else { c.pc = 0x004B8D90u; return; } if (c.pc != 0x0040A774u) [[unlikely]] return; }
L_0040A774:
    fpu_div(c, 0u, c.f[0], c.f[21]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040A7BC; } }
L_0040A790:
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[21]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[1]);
    c.budget -= 11;
L_0040A7BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0040A7C0:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0040A7F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 184u)));
    c.budget -= 12;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0040A828; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0040A8D0; } }
L_0040A828:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A834u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 99u, depth + 1u); else { c.pc = 0x004B8D90u; return; } if (c.pc != 0x0040A834u) [[unlikely]] return; }
L_0040A834:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A844u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_00EE(c, 99u, depth + 1u); else { c.pc = 0x004B8D90u; return; } if (c.pc != 0x0040A844u) [[unlikely]] return; }
L_0040A844:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.f[20] = c.f[0];  if (t) { goto L_0040A8CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A854u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 210u, depth + 1u); else { c.pc = 0x004623F0u; return; } if (c.pc != 0x0040A854u) [[unlikely]] return; }
L_0040A854:
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[22] = c.f[0];  if (t) { goto L_0040A868; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = fp::sub(c.f[21], c.f[20]);  if (t) { goto L_0040A86C; } }
L_0040A868:
    c.f[20] = fp::sub(c.f[20], c.f[21]);
    c.budget -= 1;
L_0040A86C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A874u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 251u, depth + 1u); else { c.pc = 0x00462ED0u; return; } if (c.pc != 0x0040A874u) [[unlikely]] return; }
L_0040A874:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A880u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 76u, depth + 1u); else { c.pc = 0x00464830u; return; } if (c.pc != 0x0040A880u) [[unlikely]] return; }
L_0040A880:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[3] = ld32((c.r[28].w[0] - 32564u));
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[0] = fp::sub(c.f[22], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_0040A8D0; }
    fpu_div(c, 0u, c.f[20], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0040A8D4; } }
L_0040A8CC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040A8D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0040A8D4:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040A8F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 320u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0040AA10; } }
L_0040A928:
    set32(c.r[2], ld32((c.r[18].w[0] + 320u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A948u); set32(c.r[16], c.r[3].w[0] + 216u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x0040A948u) [[unlikely]] return; }
L_0040A948:
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 30u);
    c.f[3] = 0u;
    c.f[1] = ld32((c.r[6].w[0] + 1172u));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0040AA10; }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0040AA0C; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_0040AA0C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 212u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040AA0C; } }
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[3], ld32((c.r[6].w[0] + 132u)));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 120u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = ld32((c.r[3].w[0] + 28u));  if (t) { goto L_0040A9DC; } }
    fpu_div(c, 3u, c.f[1], c.f[0]);
    c.budget -= 3;
L_0040A9DC:
    c.f[1] = fp::sub(c.f[2], c.f[3]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[16].w[0] + 16u)));  goto L_0040A9FC; }
    c.f[1] = c.f[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 2;
L_0040A9FC:
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.f[1]);
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.budget -= 4;
L_0040AA0C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0040AA10:
    c.r[3].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A928u | kUnwind; return; } goto L_0040A928; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0040AA40:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 184u)));
    c.budget -= 14;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[4].w[0] + 212u), 0u);  if (t) { goto L_0040AAA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AA80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 210u, depth + 1u); else { c.pc = 0x004623F0u; return; } if (c.pc != 0x0040AA80u) [[unlikely]] return; }
L_0040AA80:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.f[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 212u), c.r[3].w[0]);
    c.budget -= 8;
L_0040AAA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 320u)));
    set32(c.r[21], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0040AB20; } }
L_0040AAB8:
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 228u), 0u);
    set32(c.r[16], c.r[4].w[0] + 216u);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[4].w[0] + 216u), c.r[3].w[0]);  if (t) { goto L_0040AB1C; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AAE4u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x0040AAE4u) [[unlikely]] return; }
L_0040AAE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0040AB0C; } }
L_0040AAEC:
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[28].w[0] - 30312u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AB08u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0040AB08u) [[unlikely]] return; }
L_0040AB08:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0040AB0C:
    set32(c.r[3], ld32((c.r[20].w[0] + 212u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040AAECu | kUnwind; return; } goto L_0040AAEC; }
L_0040AB1C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0040AB20:
    c.r[3].d[0] = c.r[19].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040AAB8u | kUnwind; return; } goto L_0040AAB8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0040AB50:
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040ABB8; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 320u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0040ABAC; } }
L_0040AB70:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[3].w[0] + 216u);  if (t) { goto L_0040AB98; } }
L_0040AB88:
    set32(c.r[5], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 4;
L_0040AB98:
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    c.r[3].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040AB88u | kUnwind; return; } goto L_0040AB88; }
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0040ABAC:
    c.r[3].d[0] = c.r[9].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[9].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040AB70u | kUnwind; return; } goto L_0040AB70; }
L_0040ABB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040ABC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 9u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 64u)));
    st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ABECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040ABECu) [[unlikely]] return; }
L_0040ABEC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040AC10:
    set32(c.r[2], ld32((c.r[5].w[0] + 188u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 188u);  if (t) { goto L_0040AC28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0040AC2C; } }
L_0040AC28:
    set32(c.r[7], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0040AC2C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + 5582u);
    c.budget -= 5;
    { c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E9F0u | kUnwind; return; } [[clang::musttail]] return unit_000F(c, 268u, depth); }
L_0040AC40:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 188u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00105240u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 129u, depth); }
L_0040AC50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 100u)));  c.pc = t; return; }
L_0040AC60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 92u), c.r[5].w[0]);  c.pc = t; return; }
L_0040AC70:
    c.r[3].d[0] = c.r[5].d[0] ^ 4ull;
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0040AC90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ACA8u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 193u, depth + 1u); else { c.pc = 0x004D1B80u; return; } if (c.pc != 0x0040ACA8u) [[unlikely]] return; }
L_0040ACA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ACB0u);  if (depth < kMaxDepth) unit_00BE(c, 38u, depth + 1u); else { c.pc = 0x003F8A10u; return; } if (c.pc != 0x0040ACB0u) [[unlikely]] return; }
L_0040ACB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0040ACC0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040AFFC; } }
    set32(c.r[3], 0u + 6u);
    st32((c.r[29].w[0] + 144u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 148u), 0u);
    st32((c.r[29].w[0] + 152u), 0u);
    st32((c.r[29].w[0] + 156u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_0040AF30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AD10u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x0040AD10u) [[unlikely]] return; }
L_0040AD10:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[17].w[0] + 140u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AD24u); set32(c.r[6], c.r[6].w[0] + 5599u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x0040AD24u) [[unlikely]] return; }
L_0040AD24:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AD30u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0040AD30u) [[unlikely]] return; }
L_0040AD30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[21] = ld32((c.r[29].w[0] + 176u));  goto L_0040AD58; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040AD54; } }
    c.f[12] = ld32((c.r[29].w[0] + 176u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AD54u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0040AD54u) [[unlikely]] return; }
L_0040AD54:
    c.f[21] = ld32((c.r[29].w[0] + 176u));
    c.budget -= 1;
L_0040AD58:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AD64u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0040AD64u) [[unlikely]] return; }
L_0040AD64:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 140u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AD78u); set32(c.r[6], c.r[6].w[0] + 5614u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x0040AD78u) [[unlikely]] return; }
L_0040AD78:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AD84u); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x0040AD84u) [[unlikely]] return; }
L_0040AD84:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[20] = ld32((c.r[29].w[0] + 172u));  goto L_0040ADAC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 106u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040ADA8; } }
    c.f[12] = ld32((c.r[29].w[0] + 172u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ADA8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0040ADA8u) [[unlikely]] return; }
L_0040ADA8:
    c.f[20] = ld32((c.r[29].w[0] + 172u));
    c.budget -= 1;
L_0040ADAC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ADB8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0040ADB8u) [[unlikely]] return; }
L_0040ADB8:
    c.f[20] = fp::sub(c.f[20], c.f[21]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0040AE58; } }
L_0040ADC4:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0040ADD8; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040ADF0; } }
L_0040ADD8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0040ADF0:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0; c.f[1] = fp::mul(c.f[0], c.f[20]);  if (t) { goto L_0040AE04; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040AE20; } }
L_0040AE04:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0040AE20:
    fpu_div(c, 0u, c.f[1], c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 228u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = fp::add(c.f[21], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AE54u); st32((c.r[29].w[0] + 228u), c.f[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0040AE54u) [[unlikely]] return; }
L_0040AE54:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0040AE58:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040ADC4u | kUnwind; return; } goto L_0040ADC4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    st32((c.r[29].w[0] + 224u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 220u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    st32((c.r[29].w[0] + 212u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_0040AEAC; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0040AEAC:
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));  goto L_0040AF34; }
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[17], c.r[3].w[0] - 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 212u), c.r[17].w[0]);  if (t) { goto L_0040AF18; } }
L_0040AEC8:
    set32(c.r[4], c.r[29].w[0] + 204u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AED8u); st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00C3(c, 104u, depth + 1u); else { c.pc = 0x0040CC20u; return; } if (c.pc != 0x0040AED8u) [[unlikely]] return; }
L_0040AED8:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[5], ld32((c.r[29].w[0] + 216u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 208u), c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + 4u);
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    st32((c.r[29].w[0] + 216u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    st32((c.r[29].w[0] + 192u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[5].w[0]), c.f[0]);
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 16;
L_0040AF18:
    set32(c.r[4], ld32((c.r[29].w[0] + 216u)));
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040AEC8u | kUnwind; return; } goto L_0040AEC8; }
L_0040AF30:
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 1;
L_0040AF34:
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 320u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[29].w[0] + 200u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 188u), c.f[0]);
    st32((c.r[29].w[0] + 196u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    set32(c.r[17], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[29].w[0] + 184u), c.f[0]);
    set32(c.r[18], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0040AFBC; } }
L_0040AF74:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[17].d[0] << 32;  goto L_0040AFB4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[20] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AFACu); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_00BE(c, 228u, depth + 1u); else { c.pc = 0x003FA660u; return; } if (c.pc != 0x0040AFACu) [[unlikely]] return; }
L_0040AFAC:
    st32((c.r[2].w[0] + 76u), c.f[20]);
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.budget -= 2;
L_0040AFB4:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[17], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_0040AFBC:
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040AF74u | kUnwind; return; } goto L_0040AF74; }
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0040B000; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040AFFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AFFCu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0040AFFCu) [[unlikely]] return; }
L_0040AFFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0040B000:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0040B020:
    set32(c.r[29], c.r[29].w[0] - 208u);
    set32(c.r[2], 0u + 6u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[19], ld32((c.r[4].w[0] + 320u)));
    set32(c.r[16], ld32((c.r[19].w[0] + 60u)));
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[22], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[29].w[0] + 148u), 0u);
    st32((c.r[29].w[0] + 152u), 0u);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), 0u);  if (t) { goto L_0040B134; } }
L_0040B07C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0040B0C0; } }
L_0040B084:
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 156u);
    set32(c.r[2], ld32((c.r[2].w[0] + 156u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_0040B0A8; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0040B0A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B0B0u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 213u, depth + 1u); else { c.pc = 0x004E5EB0u; return; } if (c.pc != 0x0040B0B0u) [[unlikely]] return; }
L_0040B0B0:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0040B0C0; }
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_0040B0C0:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B084u | kUnwind; return; } goto L_0040B084; }
    set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B0D8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 221u, depth + 1u); else { c.pc = 0x004E5FA0u; return; } if (c.pc != 0x0040B0D8u) [[unlikely]] return; }
L_0040B0D8:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0040B0FC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] + 132u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B0F0u); set32(c.r[5], c.r[5].w[0] + 5630u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0040B0F0u) [[unlikely]] return; }
L_0040B0F0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 152u)));  goto L_0040B110; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0040B0FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B104u);  if (depth < kMaxDepth) unit_00C3(c, 102u, depth + 1u); else { c.pc = 0x0040CBF0u; return; } if (c.pc != 0x0040B104u) [[unlikely]] return; }
L_0040B104:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0040B134; }
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_0040B110:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 204u);
    st32((c.r[29].w[0] + 204u), c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B130u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0040B130u) [[unlikely]] return; }
L_0040B130:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0040B134:
    set32(c.r[2], ld32((c.r[28].w[0] - 22676u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[21].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B07Cu | kUnwind; return; } goto L_0040B07C; }
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    st32((c.r[29].w[0] + 200u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    st32((c.r[29].w[0] + 188u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_0040B18C; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0040B18C:
    c.r[1].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0040B334; }
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[17], c.r[2].w[0] - 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[17].w[0]);  if (t) { goto L_0040B1F8; } }
L_0040B1A8:
    set32(c.r[4], c.r[29].w[0] + 180u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B1B8u); st8((c.r[29].w[0] + 180u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00C3(c, 104u, depth + 1u); else { c.pc = 0x0040CC20u; return; } if (c.pc != 0x0040B1B8u) [[unlikely]] return; }
L_0040B1B8:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[5], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    set32(c.r[2], c.r[5].w[0] + 4u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 16;
L_0040B1F8:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B1A8u | kUnwind; return; } goto L_0040B1A8; }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040B334; } }
L_0040B21C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B224u); c.r[17].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0040B224u) [[unlikely]] return; }
L_0040B224:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0040B240; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B234u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 102u, depth + 1u); else { c.pc = 0x0040CBF0u; return; } if (c.pc != 0x0040B234u) [[unlikely]] return; }
L_0040B234:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 1u);  goto L_0040B2D0; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0040B240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B248u);  if (depth < kMaxDepth) unit_00C3(c, 102u, depth + 1u); else { c.pc = 0x0040CBF0u; return; } if (c.pc != 0x0040B248u) [[unlikely]] return; }
L_0040B248:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 156u)));  goto L_0040B290; }
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B268u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 221u, depth + 1u); else { c.pc = 0x004E5FA0u; return; } if (c.pc != 0x0040B268u) [[unlikely]] return; }
L_0040B268:
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_0040B280; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0040B280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B288u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0040B288u) [[unlikely]] return; }
L_0040B288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 128u)));  if (t) { goto L_0040B300; } }
L_0040B290:
    set32(c.r[3], c.r[18].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B2A8u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 221u, depth + 1u); else { c.pc = 0x004E5FA0u; return; } if (c.pc != 0x0040B2A8u) [[unlikely]] return; }
L_0040B2A8:
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_0040B2C0; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0040B2C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B2C8u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0040B2C8u) [[unlikely]] return; }
L_0040B2C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040B2FC; } }
L_0040B2D0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 156u);
    set32(c.r[2], ld32((c.r[2].w[0] + 156u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_0040B2F4; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0040B2F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B2FCu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0040B2FCu) [[unlikely]] return; }
L_0040B2FC:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 1;
L_0040B300:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], ld32((c.r[20].w[0] + 112u)));  if (t) { goto L_0040B314; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 136u)));  if (t) { goto L_0040B318; } }
L_0040B314:
    set32(c.r[5], c.r[29].w[0] + 129u);
    c.budget -= 1;
L_0040B318:
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B324u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 211u, depth + 1u); else { c.pc = 0x004D1E20u; return; } if (c.pc != 0x0040B324u) [[unlikely]] return; }
L_0040B324:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B330u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040B330u) [[unlikely]] return; }
L_0040B330:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0040B334:
    c.r[2].d[0] = c.r[18].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B21Cu | kUnwind; return; } goto L_0040B21C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B348u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 318u, depth + 1u); else { c.pc = 0x0040ACC0u; return; } if (c.pc != 0x0040B348u) [[unlikely]] return; }
L_0040B348:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 104u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  goto L_0040B384; }
    set32(c.r[2], ld32((c.r[20].w[0] + 156u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] + 156u);  if (t) { goto L_0040B370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0040B374; } }
L_0040B370:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0040B374:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B380u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 211u, depth + 1u); else { c.pc = 0x004D1E20u; return; } if (c.pc != 0x0040B380u) [[unlikely]] return; }
L_0040B380:
    set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));
    c.budget -= 1;
L_0040B384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B38Cu);  if (depth < kMaxDepth) unit_00B3(c, 274u, depth + 1u); else { c.pc = 0x003CE2C0u; return; } if (c.pc != 0x0040B38Cu) [[unlikely]] return; }
L_0040B38C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B398u); set32(c.r[4], ld32((c.r[2].w[0] + 48u)));  if (depth < kMaxDepth) unit_00FF(c, 351u, depth + 1u); else { c.pc = 0x004FEC60u; return; } if (c.pc != 0x0040B398u) [[unlikely]] return; }
L_0040B398:
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_0040B3B8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040B3B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B3B4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0040B3B4u) [[unlikely]] return; }
L_0040B3B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0040B3B8:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0040B3E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[1] = ld32((c.r[4].w[0] + 56u));  goto L_0040B420; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040B41C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040B41C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040B41C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0040B444; } }
L_0040B41C:
    c.f[1] = ld32((c.r[4].w[0] + 56u));
    c.budget -= 1;
L_0040B420:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0040B444; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040B444; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040B444:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040B450:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 52u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040B460; } }
    st8((c.r[4].w[0] + 52u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0040B460:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040B470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 52u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040B4CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B494u);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x0040B494u) [[unlikely]] return; }
L_0040B494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B49Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 317u, depth + 1u); else { c.pc = 0x003BE990u; return; } if (c.pc != 0x0040B49Cu) [[unlikely]] return; }
L_0040B49C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B4A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 398u, depth + 1u); else { c.pc = 0x003BF2A0u; return; } if (c.pc != 0x0040B4A8u) [[unlikely]] return; }
L_0040B4A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B4B8u); set32(c.r[5], c.r[5].w[0] + 5633u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0040B4B8u) [[unlikely]] return; }
L_0040B4B8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st8((c.r[17].w[0] + 52u), static_cast<std::uint8_t>(0u));  goto L_0040B4CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B4C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 58u, depth + 1u); else { c.pc = 0x004045C0u; return; } if (c.pc != 0x0040B4C8u) [[unlikely]] return; }
L_0040B4C8:
    st8((c.r[17].w[0] + 52u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0040B4CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040B4E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 52u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040B510; } }
    st8((c.r[16].w[0] + 204u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0040B510:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B520u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040B520u) [[unlikely]] return; }
L_0040B520:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0040B558; }
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 7u);
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B54Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040B54Cu) [[unlikely]] return; }
L_0040B54C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
L_0040B558:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040B570:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 52u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040B5C0; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B594u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_00CD(c, 189u, depth + 1u); else { c.pc = 0x00435290u; return; } if (c.pc != 0x0040B594u) [[unlikely]] return; }
L_0040B594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B59Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00CD(c, 194u, depth + 1u); else { c.pc = 0x00435310u; return; } if (c.pc != 0x0040B59Cu) [[unlikely]] return; }
L_0040B59C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 36u);
    set32(c.r[2], c.r[2].w[0] + 24664u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B5B4u); st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040B5B4u) [[unlikely]] return; }
L_0040B5B4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 204u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0040B5C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040B5D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040B620; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 24664u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0040B608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B608u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040B608u) [[unlikely]] return; }
L_0040B608:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0040B624; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B620u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0040B620u) [[unlikely]] return; }
L_0040B620:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040B624:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040B640:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 52u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040B6B4; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B664u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_00CD(c, 189u, depth + 1u); else { c.pc = 0x00435290u; return; } if (c.pc != 0x0040B664u) [[unlikely]] return; }
L_0040B664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B66Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00CD(c, 194u, depth + 1u); else { c.pc = 0x00435310u; return; } if (c.pc != 0x0040B66Cu) [[unlikely]] return; }
L_0040B66C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 36u);
    set32(c.r[2], c.r[2].w[0] + 24664u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B684u); st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040B684u) [[unlikely]] return; }
L_0040B684:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B69Cu); set32(c.r[4], ld32((c.r[2].w[0] + 340u)));  if (depth < kMaxDepth) unit_00BD(c, 179u, depth + 1u); else { c.pc = 0x003F5BF0u; return; } if (c.pc != 0x0040B69Cu) [[unlikely]] return; }
L_0040B69C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 204u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_0040B6B4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 340u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B6C8u); c.f[12] = ld32((c.r[28].w[0] - 29056u));  if (depth < kMaxDepth) unit_00BD(c, 177u, depth + 1u); else { c.pc = 0x003F5AF0u; return; } if (c.pc != 0x0040B6C8u) [[unlikely]] return; }
L_0040B6C8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B6D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040B6D8u) [[unlikely]] return; }
L_0040B6D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0040B724; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B6F0u); set32(c.r[4], ld32((c.r[2].w[0] + 340u)));  if (depth < kMaxDepth) unit_00BD(c, 178u, depth + 1u); else { c.pc = 0x003F5B90u; return; } if (c.pc != 0x0040B6F0u) [[unlikely]] return; }
L_0040B6F0:
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B714u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040B714u) [[unlikely]] return; }
L_0040B714:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 121u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
L_0040B724:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040B730:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 52u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040B7A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B768u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00FF(c, 255u, depth + 1u); else { c.pc = 0x004FE280u; return; } if (c.pc != 0x0040B768u) [[unlikely]] return; }
L_0040B768:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B774u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_00CD(c, 189u, depth + 1u); else { c.pc = 0x00435290u; return; } if (c.pc != 0x0040B774u) [[unlikely]] return; }
L_0040B774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B77Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00CD(c, 194u, depth + 1u); else { c.pc = 0x00435310u; return; } if (c.pc != 0x0040B77Cu) [[unlikely]] return; }
L_0040B77C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 36u);
    set32(c.r[2], c.r[2].w[0] + 24664u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B794u); st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040B794u) [[unlikely]] return; }
L_0040B794:
    st8((c.r[16].w[0] + 204u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B7A4u); set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));  if (depth < kMaxDepth) unit_00CD(c, 467u, depth + 1u); else { c.pc = 0x00437AD0u; return; } if (c.pc != 0x0040B7A4u) [[unlikely]] return; }
L_0040B7A4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B7B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040B7B4u) [[unlikely]] return; }
L_0040B7B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0040B7EC; }
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B7E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040B7E0u) [[unlikely]] return; }
L_0040B7E0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
L_0040B7EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040B800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B81Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 21u, depth + 1u); else { c.pc = 0x004F4220u; return; } if (c.pc != 0x0040B81Cu) [[unlikely]] return; }
L_0040B81C:
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B840u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040B840u) [[unlikely]] return; }
L_0040B840:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040B860:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 52u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040B944; } }
    st8((c.r[18].w[0] + 52u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0040B8D8; } }
L_0040B890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B898u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0040B898u) [[unlikely]] return; }
L_0040B898:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_0040B8B4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B8B0u); set32(c.r[5], c.r[5].w[0] + 5646u);  if (depth < kMaxDepth) unit_00B9(c, 232u, depth + 1u); else { c.pc = 0x003E5A00u; return; } if (c.pc != 0x0040B8B0u) [[unlikely]] return; }
L_0040B8B0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0040B8B4:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B8D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040B8D4u) [[unlikely]] return; }
L_0040B8D4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0040B8D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B890u | kUnwind; return; } goto L_0040B890; }
    set32(c.r[16], ld32((c.r[28].w[0] - 22500u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 5656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B8FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 539u, depth + 1u); else { c.pc = 0x004F3EA0u; return; } if (c.pc != 0x0040B8FCu) [[unlikely]] return; }
L_0040B8FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B908u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 21u, depth + 1u); else { c.pc = 0x004F4220u; return; } if (c.pc != 0x0040B908u) [[unlikely]] return; }
L_0040B908:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B914u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_00CD(c, 189u, depth + 1u); else { c.pc = 0x00435290u; return; } if (c.pc != 0x0040B914u) [[unlikely]] return; }
L_0040B914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B91Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00CD(c, 194u, depth + 1u); else { c.pc = 0x00435310u; return; } if (c.pc != 0x0040B91Cu) [[unlikely]] return; }
L_0040B91C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 84u);
    set32(c.r[2], c.r[2].w[0] + 24664u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B934u); st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040B934u) [[unlikely]] return; }
L_0040B934:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 56u), c.r[3].w[0]);
    st8((c.r[18].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0040B944:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0040BA08; } }
L_0040B94C:
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B968u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040B968u) [[unlikely]] return; }
L_0040B968:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0] + 44u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0040BA08; }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0040B98C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B98Cu);  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x0040B98Cu) [[unlikely]] return; }
L_0040B98C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040BA04; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0040B9A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B9A8u);  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x0040B9A8u) [[unlikely]] return; }
L_0040B9A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B9B8u); set32(c.r[5], c.r[5].w[0] + 5678u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0040B9B8u) [[unlikely]] return; }
L_0040B9B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040BA04; } }
    set32(c.r[4], 0u + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B9CCu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0040B9CCu) [[unlikely]] return; }
L_0040B9CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_0040B9E8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B9E4u); set32(c.r[5], c.r[5].w[0] + 5678u);  if (depth < kMaxDepth) unit_00B9(c, 232u, depth + 1u); else { c.pc = 0x003E5A00u; return; } if (c.pc != 0x0040B9E4u) [[unlikely]] return; }
L_0040B9E4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0040B9E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BA04u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040BA04u) [[unlikely]] return; }
L_0040BA04:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0040BA08:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B94Cu | kUnwind; return; } goto L_0040B94C; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BA28u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040BA28u) [[unlikely]] return; }
L_0040BA28:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0040BA70; }
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BA40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 21u, depth + 1u); else { c.pc = 0x004F4220u; return; } if (c.pc != 0x0040BA40u) [[unlikely]] return; }
L_0040BA40:
    st8((c.r[18].w[0] + 60u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    st8((c.r[18].w[0] + 60u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BA64u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040BA64u) [[unlikely]] return; }
L_0040BA64:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 3;
L_0040BA70:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0040BA90:
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040BAA4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040BAA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040BAB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 64u), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BADCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040BADCu) [[unlikely]] return; }
L_0040BADC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040BB00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[28].w[0] - 31148u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 60u));
    fpu_div(c, 20u, c.f[12], c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040BB3C; } }
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.budget -= 3;
L_0040BB3C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 204u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0040BB58; }
    c.f[0] = ld32((c.r[16].w[0] + 208u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[16].w[0] + 208u), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_0040BB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BB60u);  if (depth < kMaxDepth) unit_00C2(c, 296u, depth + 1u); else { c.pc = 0x0040A8F0u; return; } if (c.pc != 0x0040BB60u) [[unlikely]] return; }
L_0040BB60:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 120u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 120u));  goto L_0040BB7C; }
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 120u));
    c.budget -= 4;
L_0040BB7C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0040BC00; }
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0040BBFC; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BBA8u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_00CD(c, 189u, depth + 1u); else { c.pc = 0x00435290u; return; } if (c.pc != 0x0040BBA8u) [[unlikely]] return; }
L_0040BBA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BBB0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00CD(c, 194u, depth + 1u); else { c.pc = 0x00435310u; return; } if (c.pc != 0x0040BBB0u) [[unlikely]] return; }
L_0040BBB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 52u);
    set32(c.r[2], c.r[2].w[0] + 24664u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BBC8u); st32((c.r[29].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040BBC8u) [[unlikely]] return; }
L_0040BBC8:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], 0u + 6u);
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BBE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040BBE8u) [[unlikely]] return; }
L_0040BBE8:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 120u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 5;
L_0040BBFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0040BC00:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0040BC10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BC34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FF(c, 325u, depth + 1u); else { c.pc = 0x004FEA10u; return; } if (c.pc != 0x0040BC34u) [[unlikely]] return; }
L_0040BC34:
    set32(c.r[4], c.r[16].w[0] + 104u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BC48u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FE(c, 248u, depth + 1u); else { c.pc = 0x004F9D60u; return; } if (c.pc != 0x0040BC48u) [[unlikely]] return; }
L_0040BC48:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BC58u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 181u, depth + 1u); else { c.pc = 0x004D1A40u; return; } if (c.pc != 0x0040BC58u) [[unlikely]] return; }
L_0040BC58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BC60u); set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));  if (depth < kMaxDepth) unit_00D1(c, 25u, depth + 1u); else { c.pc = 0x00444200u; return; } if (c.pc != 0x0040BC60u) [[unlikely]] return; }
L_0040BC60:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BC70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040BC70u) [[unlikely]] return; }
L_0040BC70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040BC90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BCBCu); set32(c.r[4], ld32((c.r[28].w[0] - 26860u)));  if (depth < kMaxDepth) unit_00B6(c, 159u, depth + 1u); else { c.pc = 0x003D9BE0u; return; } if (c.pc != 0x0040BCBCu) [[unlikely]] return; }
L_0040BCBC:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BCD0u); c.r[17].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040BCD0u) [[unlikely]] return; }
L_0040BCD0:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 72u)));  goto L_0040BCE4; }
    set32(c.r[17], 0u + 2u);
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 2;
L_0040BCE4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] + 73u);  goto L_0040BCF4; }
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 1;
L_0040BCF4:
    c.r[6].d[0] = ld8((c.r[18].w[0] + 68u));
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BD08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FF(c, 397u, depth + 1u); else { c.pc = 0x004FF110u; return; } if (c.pc != 0x0040BD08u) [[unlikely]] return; }
L_0040BD08:
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0040BD28; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040BD2C; } }
L_0040BD28:
    c.f[12] = c.r[2].w[0];
    c.budget -= 1;
L_0040BD2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BD34u);  if (depth < kMaxDepth) unit_00EF(c, 337u, depth + 1u); else { c.pc = 0x004BF600u; return; } if (c.pc != 0x0040BD34u) [[unlikely]] return; }
L_0040BD34:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BD44u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040BD44u) [[unlikely]] return; }
L_0040BD44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BD4Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 299u, depth + 1u); else { c.pc = 0x0040AA40u; return; } if (c.pc != 0x0040BD4Cu) [[unlikely]] return; }
L_0040BD4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BD54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FF(c, 313u, depth + 1u); else { c.pc = 0x004FE930u; return; } if (c.pc != 0x0040BD54u) [[unlikely]] return; }
L_0040BD54:
    set32(c.r[2], ld32((c.r[18].w[0] + 188u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] + 188u);  if (t) { goto L_0040BD6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0040BD70; } }
L_0040BD6C:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0040BD70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BD78u); set32(c.r[4], ld32((c.r[28].w[0] - 24272u)));  if (depth < kMaxDepth) unit_00DB(c, 265u, depth + 1u); else { c.pc = 0x0046FBB0u; return; } if (c.pc != 0x0040BD78u) [[unlikely]] return; }
L_0040BD78:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[2].w[0] + 1u);  goto L_0040BD8C; }
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_0040BD8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BD94u); set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));  if (depth < kMaxDepth) unit_00CD(c, 395u, depth + 1u); else { c.pc = 0x004372C0u; return; } if (c.pc != 0x0040BD94u) [[unlikely]] return; }
L_0040BD94:
    set32(c.r[3], ld32((c.r[28].w[0] - 27612u)));
    st8((c.r[3].w[0] + 2633u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040BDC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[4].w[0] + 204u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 208u), 0u);
    st8((c.r[4].w[0] + 120u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BDF4u); st8((c.r[4].w[0] + 121u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00C2(c, 305u, depth + 1u); else { c.pc = 0x0040AB50u; return; } if (c.pc != 0x0040BDF4u) [[unlikely]] return; }
L_0040BDF4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0040BEB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BE04u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BA(c, 18u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x0040BE04u) [[unlikely]] return; }
L_0040BE04:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 144u)));  goto L_0040BE5C; }
    set32(c.r[7], ld32((c.r[16].w[0] + 112u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[8], ld32((c.r[2].w[0] + 620u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[9], ld32((c.r[2].w[0] + 624u)));
    set32(c.r[5], 0u + 6u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BE2Cu); set32(c.r[6], c.r[6].w[0] + 5690u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x0040BE2Cu) [[unlikely]] return; }
L_0040BE2C:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_0040BE40; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_0040BE40:
    set32(c.r[4], c.r[16].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BE4Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 167u, depth + 1u); else { c.pc = 0x004194B0u; return; } if (c.pc != 0x0040BE4Cu) [[unlikely]] return; }
L_0040BE4C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BE58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040BE58u) [[unlikely]] return; }
L_0040BE58:
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 1;
L_0040BE5C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040BEAC; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 112u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + 5722u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BE80u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x0040BE80u) [[unlikely]] return; }
L_0040BE80:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_0040BE94; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_0040BE94:
    set32(c.r[4], c.r[16].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BEA0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 167u, depth + 1u); else { c.pc = 0x004194B0u; return; } if (c.pc != 0x0040BEA0u) [[unlikely]] return; }
L_0040BEA0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BEACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0040BEACu) [[unlikely]] return; }
L_0040BEAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0040BEB0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0040BEC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 64u)));
    st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BEECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040BEECu) [[unlikely]] return; }
L_0040BEEC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040BF10:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 60u), c.r[6].w[0]);
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BF44u); set32(c.r[4], c.r[2].w[0] + 156u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0040BF44u) [[unlikely]] return; }
L_0040BF44:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BF54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040BF54u) [[unlikely]] return; }
L_0040BF54:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  [[clang::musttail]] return unit_00C3(c, 7u, depth); }
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));  goto L_0040BFDC; }
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BF74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x0040BF74u) [[unlikely]] return; }
L_0040BF74:
    set32(c.r[16], c.r[2].w[0] + 28u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 5755u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BF88u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x0040BF88u) [[unlikely]] return; }
L_0040BF88:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0040BFC8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] + 5755u);
    set32(c.r[6], c.r[29].w[0] + 60u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BFA8u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C3(c, 14u, depth + 1u); else { c.pc = 0x0040C140u; return; } if (c.pc != 0x0040BFA8u) [[unlikely]] return; }
L_0040BFA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BFB4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0040BFB4u) [[unlikely]] return; }
L_0040BFB4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BFC0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0040BFC0u) [[unlikely]] return; }
L_0040BFC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00C3(c, 6u, depth); } }
L_0040BFC8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BFD4u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_00C3(c, 8u, depth + 1u); else { c.pc = 0x0040C060u; return; } if (c.pc != 0x0040BFD4u) [[unlikely]] return; }
L_0040BFD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00C3(c, 6u, depth); } }
L_0040BFDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BFE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x0040BFE4u) [[unlikely]] return; }
L_0040BFE4:
    set32(c.r[16], c.r[2].w[0] + 28u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 5770u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BFF8u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x0040BFF8u) [[unlikely]] return; }
L_0040BFF8:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  [[clang::musttail]] return unit_00C3(c, 5u, depth); }
    [[clang::musttail]] return unit_00C3(c, 1u, depth);
}

}
