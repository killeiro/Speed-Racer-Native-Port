#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0073[4096] = {
    1, 2, 0, 0, 0, 3, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0,
    0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0,
    0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0,
    0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0,
    0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0,
    0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0,
    0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0,
    103, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110,
    0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0,
    0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143,
    0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0,
    0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0,
    0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199,
    0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0,
    0, 209, 0, 210, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221,
    0, 0, 222, 0, 0, 223, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0,
    0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0,
    277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 288,
    0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0,
    0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0,
    0, 311, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0,
    0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334,
    0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 348, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0,
    352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356,
    0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0,
    369, 0, 0, 0, 0, 370, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0,
    0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0,
    0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0,
    396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 404, 0, 0, 405, 0,
    0, 406, 0, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 424, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0,
};

void unit_0073(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002CC000;
    case 2u: goto L_002CC004;
    case 3u: goto L_002CC014;
    case 4u: goto L_002CC024;
    case 5u: goto L_002CC028;
    case 6u: goto L_002CC040;
    case 7u: goto L_002CC050;
    case 8u: goto L_002CC080;
    case 9u: goto L_002CC0C0;
    case 10u: goto L_002CC0E0;
    case 11u: goto L_002CC100;
    case 12u: goto L_002CC140;
    case 13u: goto L_002CC180;
    case 14u: goto L_002CC1C8;
    case 15u: goto L_002CC1E8;
    case 16u: goto L_002CC1F8;
    case 17u: goto L_002CC214;
    case 18u: goto L_002CC22C;
    case 19u: goto L_002CC238;
    case 20u: goto L_002CC254;
    case 21u: goto L_002CC270;
    case 22u: goto L_002CC2BC;
    case 23u: goto L_002CC2EC;
    case 24u: goto L_002CC308;
    case 25u: goto L_002CC318;
    case 26u: goto L_002CC344;
    case 27u: goto L_002CC35C;
    case 28u: goto L_002CC36C;
    case 29u: goto L_002CC390;
    case 30u: goto L_002CC3AC;
    case 31u: goto L_002CC3D0;
    case 32u: goto L_002CC40C;
    case 33u: goto L_002CC430;
    case 34u: goto L_002CC458;
    case 35u: goto L_002CC46C;
    case 36u: goto L_002CC490;
    case 37u: goto L_002CC4C4;
    case 38u: goto L_002CC4F0;
    case 39u: goto L_002CC500;
    case 40u: goto L_002CC52C;
    case 41u: goto L_002CC544;
    case 42u: goto L_002CC554;
    case 43u: goto L_002CC580;
    case 44u: goto L_002CC590;
    case 45u: goto L_002CC5A0;
    case 46u: goto L_002CC5B4;
    case 47u: goto L_002CC5C0;
    case 48u: goto L_002CC5D4;
    case 49u: goto L_002CC5F0;
    case 50u: goto L_002CC600;
    case 51u: goto L_002CC610;
    case 52u: goto L_002CC620;
    case 53u: goto L_002CC630;
    case 54u: goto L_002CC640;
    case 55u: goto L_002CC658;
    case 56u: goto L_002CC668;
    case 57u: goto L_002CC690;
    case 58u: goto L_002CC6B8;
    case 59u: goto L_002CC6C8;
    case 60u: goto L_002CC6E4;
    case 61u: goto L_002CC700;
    case 62u: goto L_002CC710;
    case 63u: goto L_002CC750;
    case 64u: goto L_002CC76C;
    case 65u: goto L_002CC790;
    case 66u: goto L_002CC7A4;
    case 67u: goto L_002CC7D0;
    case 68u: goto L_002CC7E0;
    case 69u: goto L_002CC7F0;
    case 70u: goto L_002CC80C;
    case 71u: goto L_002CC818;
    case 72u: goto L_002CC82C;
    case 73u: goto L_002CC83C;
    case 74u: goto L_002CC850;
    case 75u: goto L_002CC860;
    case 76u: goto L_002CC874;
    case 77u: goto L_002CC884;
    case 78u: goto L_002CC898;
    case 79u: goto L_002CC8A8;
    case 80u: goto L_002CC8BC;
    case 81u: goto L_002CC8CC;
    case 82u: goto L_002CC8E0;
    case 83u: goto L_002CC8F0;
    case 84u: goto L_002CC904;
    case 85u: goto L_002CC914;
    case 86u: goto L_002CC928;
    case 87u: goto L_002CC938;
    case 88u: goto L_002CC94C;
    case 89u: goto L_002CC95C;
    case 90u: goto L_002CC970;
    case 91u: goto L_002CC990;
    case 92u: goto L_002CC9AC;
    case 93u: goto L_002CCA40;
    case 94u: goto L_002CCA60;
    case 95u: goto L_002CCA80;
    case 96u: goto L_002CCAA0;
    case 97u: goto L_002CCAAC;
    case 98u: goto L_002CCAC0;
    case 99u: goto L_002CCAD0;
    case 100u: goto L_002CCADC;
    case 101u: goto L_002CCAE8;
    case 102u: goto L_002CCAF4;
    case 103u: goto L_002CCB00;
    case 104u: goto L_002CCB0C;
    case 105u: goto L_002CCB18;
    case 106u: goto L_002CCB30;
    case 107u: goto L_002CCB40;
    case 108u: goto L_002CCB50;
    case 109u: goto L_002CCB70;
    case 110u: goto L_002CCB7C;
    case 111u: goto L_002CCB8C;
    case 112u: goto L_002CCBA0;
    case 113u: goto L_002CCBB8;
    case 114u: goto L_002CCBC8;
    case 115u: goto L_002CCBD4;
    case 116u: goto L_002CCBE0;
    case 117u: goto L_002CCBEC;
    case 118u: goto L_002CCBF8;
    case 119u: goto L_002CCC04;
    case 120u: goto L_002CCC10;
    case 121u: goto L_002CCC30;
    case 122u: goto L_002CCC48;
    case 123u: goto L_002CCC58;
    case 124u: goto L_002CCCA0;
    case 125u: goto L_002CCCC4;
    case 126u: goto L_002CCCD0;
    case 127u: goto L_002CCD9C;
    case 128u: goto L_002CCE10;
    case 129u: goto L_002CCEB8;
    case 130u: goto L_002CCF30;
    case 131u: goto L_002CCFB8;
    case 132u: goto L_002CD020;
    case 133u: goto L_002CD190;
    case 134u: goto L_002CD270;
    case 135u: goto L_002CD298;
    case 136u: goto L_002CD2B0;
    case 137u: goto L_002CD2C4;
    case 138u: goto L_002CD2F0;
    case 139u: goto L_002CD3A4;
    case 140u: goto L_002CD3BC;
    case 141u: goto L_002CD3C8;
    case 142u: goto L_002CD3DC;
    case 143u: goto L_002CD3FC;
    case 144u: goto L_002CD418;
    case 145u: goto L_002CD424;
    case 146u: goto L_002CD46C;
    case 147u: goto L_002CD4C4;
    case 148u: goto L_002CD5A8;
    case 149u: goto L_002CD5C4;
    case 150u: goto L_002CD608;
    case 151u: goto L_002CD620;
    case 152u: goto L_002CD63C;
    case 153u: goto L_002CD658;
    case 154u: goto L_002CD678;
    case 155u: goto L_002CD690;
    case 156u: goto L_002CD6A8;
    case 157u: goto L_002CD714;
    case 158u: goto L_002CD730;
    case 159u: goto L_002CD754;
    case 160u: goto L_002CD76C;
    case 161u: goto L_002CD794;
    case 162u: goto L_002CD7B0;
    case 163u: goto L_002CD7C8;
    case 164u: goto L_002CD7E4;
    case 165u: goto L_002CD814;
    case 166u: goto L_002CD83C;
    case 167u: goto L_002CD930;
    case 168u: goto L_002CD950;
    case 169u: goto L_002CD95C;
    case 170u: goto L_002CD98C;
    case 171u: goto L_002CD9A0;
    case 172u: goto L_002CD9D8;
    case 173u: goto L_002CDA60;
    case 174u: goto L_002CDA94;
    case 175u: goto L_002CDAA0;
    case 176u: goto L_002CDAAC;
    case 177u: goto L_002CDAC8;
    case 178u: goto L_002CDAE0;
    case 179u: goto L_002CDB2C;
    case 180u: goto L_002CDB6C;
    case 181u: goto L_002CDB80;
    case 182u: goto L_002CDB98;
    case 183u: goto L_002CDBCC;
    case 184u: goto L_002CDBE8;
    case 185u: goto L_002CDC04;
    case 186u: goto L_002CDC28;
    case 187u: goto L_002CDC44;
    case 188u: goto L_002CDC5C;
    case 189u: goto L_002CDCD8;
    case 190u: goto L_002CDCF4;
    case 191u: goto L_002CDD18;
    case 192u: goto L_002CDD34;
    case 193u: goto L_002CDDA0;
    case 194u: goto L_002CDDB4;
    case 195u: goto L_002CDE10;
    case 196u: goto L_002CDE20;
    case 197u: goto L_002CDE30;
    case 198u: goto L_002CDE40;
    case 199u: goto L_002CDE7C;
    case 200u: goto L_002CDEA0;
    case 201u: goto L_002CDECC;
    case 202u: goto L_002CDEF0;
    case 203u: goto L_002CDF00;
    case 204u: goto L_002CDF28;
    case 205u: goto L_002CDF3C;
    case 206u: goto L_002CDF4C;
    case 207u: goto L_002CDF60;
    case 208u: goto L_002CDF70;
    case 209u: goto L_002CDF84;
    case 210u: goto L_002CDF8C;
    case 211u: goto L_002CDF94;
    case 212u: goto L_002CDFAC;
    case 213u: goto L_002CDFC8;
    case 214u: goto L_002CDFD8;
    case 215u: goto L_002CE010;
    case 216u: goto L_002CE034;
    case 217u: goto L_002CE054;
    case 218u: goto L_002CE080;
    case 219u: goto L_002CE0D0;
    case 220u: goto L_002CE0F0;
    case 221u: goto L_002CE0FC;
    case 222u: goto L_002CE108;
    case 223u: goto L_002CE114;
    case 224u: goto L_002CE11C;
    case 225u: goto L_002CE12C;
    case 226u: goto L_002CE160;
    case 227u: goto L_002CE170;
    case 228u: goto L_002CE180;
    case 229u: goto L_002CE1A8;
    case 230u: goto L_002CE1B4;
    case 231u: goto L_002CE1C0;
    case 232u: goto L_002CE1CC;
    case 233u: goto L_002CE1F0;
    case 234u: goto L_002CE208;
    case 235u: goto L_002CE234;
    case 236u: goto L_002CE240;
    case 237u: goto L_002CE254;
    case 238u: goto L_002CE264;
    case 239u: goto L_002CE2A0;
    case 240u: goto L_002CE2B8;
    case 241u: goto L_002CE2C8;
    case 242u: goto L_002CE340;
    case 243u: goto L_002CE3A4;
    case 244u: goto L_002CE3BC;
    case 245u: goto L_002CE3E8;
    case 246u: goto L_002CE3F4;
    case 247u: goto L_002CE410;
    case 248u: goto L_002CE430;
    case 249u: goto L_002CE458;
    case 250u: goto L_002CE468;
    case 251u: goto L_002CE4DC;
    case 252u: goto L_002CE500;
    case 253u: goto L_002CE530;
    case 254u: goto L_002CE554;
    case 255u: goto L_002CE560;
    case 256u: goto L_002CE5C8;
    case 257u: goto L_002CE5F4;
    case 258u: goto L_002CE604;
    case 259u: goto L_002CE620;
    case 260u: goto L_002CE6E8;
    case 261u: goto L_002CE720;
    case 262u: goto L_002CE74C;
    case 263u: goto L_002CE75C;
    case 264u: goto L_002CE804;
    case 265u: goto L_002CE81C;
    case 266u: goto L_002CE848;
    case 267u: goto L_002CE854;
    case 268u: goto L_002CE870;
    case 269u: goto L_002CE8A0;
    case 270u: goto L_002CE8C4;
    case 271u: goto L_002CE8DC;
    case 272u: goto L_002CE8F0;
    case 273u: goto L_002CE924;
    case 274u: goto L_002CE930;
    case 275u: goto L_002CE94C;
    case 276u: goto L_002CE970;
    case 277u: goto L_002CE980;
    case 278u: goto L_002CE990;
    case 279u: goto L_002CE9AC;
    case 280u: goto L_002CE9D8;
    case 281u: goto L_002CEAF8;
    case 282u: goto L_002CEB10;
    case 283u: goto L_002CEB34;
    case 284u: goto L_002CEB48;
    case 285u: goto L_002CEB50;
    case 286u: goto L_002CEB64;
    case 287u: goto L_002CEB70;
    case 288u: goto L_002CEB7C;
    case 289u: goto L_002CEB88;
    case 290u: goto L_002CEB94;
    case 291u: goto L_002CEBA0;
    case 292u: goto L_002CEBCC;
    case 293u: goto L_002CEBF4;
    case 294u: goto L_002CEC10;
    case 295u: goto L_002CEC2C;
    case 296u: goto L_002CEC4C;
    case 297u: goto L_002CEC70;
    case 298u: goto L_002CEC90;
    case 299u: goto L_002CEC98;
    case 300u: goto L_002CECB8;
    case 301u: goto L_002CECC8;
    case 302u: goto L_002CECE4;
    case 303u: goto L_002CECF8;
    case 304u: goto L_002CED08;
    case 305u: goto L_002CED20;
    case 306u: goto L_002CED40;
    case 307u: goto L_002CED4C;
    case 308u: goto L_002CED54;
    case 309u: goto L_002CED6C;
    case 310u: goto L_002CED78;
    case 311u: goto L_002CED84;
    case 312u: goto L_002CED90;
    case 313u: goto L_002CED9C;
    case 314u: goto L_002CEDA8;
    case 315u: goto L_002CEDB4;
    case 316u: goto L_002CEDD8;
    case 317u: goto L_002CEDF8;
    case 318u: goto L_002CEE14;
    case 319u: goto L_002CEE30;
    case 320u: goto L_002CEE70;
    case 321u: goto L_002CEEA8;
    case 322u: goto L_002CEEB4;
    case 323u: goto L_002CEF18;
    case 324u: goto L_002CEF40;
    case 325u: goto L_002CEF5C;
    case 326u: goto L_002CEF6C;
    case 327u: goto L_002CEF98;
    case 328u: goto L_002CEFA8;
    case 329u: goto L_002CEFB4;
    case 330u: goto L_002CF000;
    case 331u: goto L_002CF034;
    case 332u: goto L_002CF044;
    case 333u: goto L_002CF060;
    case 334u: goto L_002CF07C;
    case 335u: goto L_002CF0A0;
    case 336u: goto L_002CF0C0;
    case 337u: goto L_002CF0C8;
    case 338u: goto L_002CF154;
    case 339u: goto L_002CF174;
    case 340u: goto L_002CF1A8;
    case 341u: goto L_002CF1B8;
    case 342u: goto L_002CF1D4;
    case 343u: goto L_002CF1E8;
    case 344u: goto L_002CF1F8;
    case 345u: goto L_002CF220;
    case 346u: goto L_002CF24C;
    case 347u: goto L_002CF25C;
    case 348u: goto L_002CF288;
    case 349u: goto L_002CF298;
    case 350u: goto L_002CF2A4;
    case 351u: goto L_002CF2DC;
    case 352u: goto L_002CF300;
    case 353u: goto L_002CF330;
    case 354u: goto L_002CF350;
    case 355u: goto L_002CF360;
    case 356u: goto L_002CF37C;
    case 357u: goto L_002CF39C;
    case 358u: goto L_002CF3A8;
    case 359u: goto L_002CF3C4;
    case 360u: goto L_002CF3E0;
    case 361u: goto L_002CF420;
    case 362u: goto L_002CF428;
    case 363u: goto L_002CF450;
    case 364u: goto L_002CF460;
    case 365u: goto L_002CF518;
    case 366u: goto L_002CF5A0;
    case 367u: goto L_002CF5C4;
    case 368u: goto L_002CF5EC;
    case 369u: goto L_002CF600;
    case 370u: goto L_002CF614;
    case 371u: goto L_002CF620;
    case 372u: goto L_002CF628;
    case 373u: goto L_002CF670;
    case 374u: goto L_002CF684;
    case 375u: goto L_002CF698;
    case 376u: goto L_002CF6F4;
    case 377u: goto L_002CF70C;
    case 378u: goto L_002CF740;
    case 379u: goto L_002CF790;
    case 380u: goto L_002CF7A8;
    case 381u: goto L_002CF7DC;
    case 382u: goto L_002CF834;
    case 383u: goto L_002CF84C;
    case 384u: goto L_002CF854;
    case 385u: goto L_002CF8BC;
    case 386u: goto L_002CF8D4;
    case 387u: goto L_002CF8DC;
    case 388u: goto L_002CF93C;
    case 389u: goto L_002CF948;
    case 390u: goto L_002CF97C;
    case 391u: goto L_002CF9CC;
    case 392u: goto L_002CF9FC;
    case 393u: goto L_002CFA30;
    case 394u: goto L_002CFA50;
    case 395u: goto L_002CFA68;
    case 396u: goto L_002CFA80;
    case 397u: goto L_002CFA98;
    case 398u: goto L_002CFAB0;
    case 399u: goto L_002CFAD0;
    case 400u: goto L_002CFB24;
    case 401u: goto L_002CFB38;
    case 402u: goto L_002CFB58;
    case 403u: goto L_002CFB60;
    case 404u: goto L_002CFB6C;
    case 405u: goto L_002CFB78;
    case 406u: goto L_002CFB84;
    case 407u: goto L_002CFB90;
    case 408u: goto L_002CFB9C;
    case 409u: goto L_002CFBA8;
    case 410u: goto L_002CFBB4;
    case 411u: goto L_002CFBD4;
    case 412u: goto L_002CFBE0;
    case 413u: goto L_002CFBF8;
    case 414u: goto L_002CFC28;
    case 415u: goto L_002CFC48;
    case 416u: goto L_002CFC70;
    case 417u: goto L_002CFCF0;
    case 418u: goto L_002CFD6C;
    case 419u: goto L_002CFD98;
    case 420u: goto L_002CFDD0;
    case 421u: goto L_002CFDD4;
    case 422u: goto L_002CFE14;
    case 423u: goto L_002CFE50;
    case 424u: goto L_002CFE90;
    case 425u: goto L_002CFE94;
    case 426u: goto L_002CFED4;
    case 427u: goto L_002CFF10;
    case 428u: goto L_002CFF50;
    case 429u: goto L_002CFF98;
    case 430u: goto L_002CFFB4;
    case 431u: goto L_002CFFD0;
    case 432u: goto L_002CFFD4;
    case 433u: goto L_002CFFF4;
    default: bad_entry(c, 0x002CC000u); return;
    }
L_002CC000:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_002CC004:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002CC028; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC014u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CC014u) [[unlikely]] return; }
L_002CC014:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC024u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CC024u) [[unlikely]] return; }
L_002CC024:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002CC028:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CC040:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 24u)));  c.pc = t; return; }
L_002CC050:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CC06C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CC06C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 1;
L_002CC06C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CC080:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  goto L_002CC098; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CC0B8; } }
L_002CC098:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CC0B8; }
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CC0B8; }
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 1;
L_002CC0B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CC0C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CC0D0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 1;
L_002CC0D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CC0E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CC0F0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_002CC0F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CC100:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  goto L_002CC118; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CC130; } }
L_002CC118:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CC130; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 12u)));  if (t) { goto L_002CC130; } }
L_002CC130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CC140:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  goto L_002CC158; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CC170; } }
L_002CC158:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CC170; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_002CC170; } }
L_002CC170:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CC180:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CC254; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 14368u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 28u);  goto L_002CC1CC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC1C8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CC1C8u) [[unlikely]] return; }
L_002CC1C8:
    set32(c.r[2], c.r[17].w[0] + 28u);
    c.budget -= 1;
L_002CC1CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CC214; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002CC214; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC1E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CC1E8u) [[unlikely]] return; }
L_002CC1E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC1F8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CC1F8u) [[unlikely]] return; }
L_002CC1F8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CC214; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC214u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CC214u) [[unlikely]] return; }
L_002CC214:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] - 22016u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC22Cu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x002CC22Cu) [[unlikely]] return; }
L_002CC22C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC238u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x002CC238u) [[unlikely]] return; }
L_002CC238:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002CC258; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC254u); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002CC254u) [[unlikely]] return; }
L_002CC254:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002CC258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CC270:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002CC2A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CC3B0; } }
L_002CC2A0:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_002CC2B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CC3B0; } }
L_002CC2B0:
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC2BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CC2BCu) [[unlikely]] return; }
L_002CC2BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CC2CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CC3B0; } }
L_002CC2CC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], 0u + 36u);  goto L_002CC300; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 120u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC2ECu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CC2ECu) [[unlikely]] return; }
L_002CC2EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CC2FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CC3B0; } }
L_002CC2FC:
    set32(c.r[4], 0u + 36u);
    c.budget -= 1;
L_002CC300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC308u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002CC308u) [[unlikely]] return; }
L_002CC308:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CC370; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC318u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x002CC318u) [[unlikely]] return; }
L_002CC318:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[2], c.r[2].w[0] + 14368u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 21520u);
    set32(c.r[6], c.r[6].w[0] - 22016u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC344u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x002CC344u) [[unlikely]] return; }
L_002CC344:
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[16].w[0] + 28u), 0u);  if (t) { goto L_002CC36C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC35Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CC35Cu) [[unlikely]] return; }
L_002CC35C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC36Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CC36Cu) [[unlikely]] return; }
L_002CC36C:
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 1;
L_002CC370:
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC390u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CC390u) [[unlikely]] return; }
L_002CC390:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002CC3B0; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC3ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CC3ACu) [[unlikely]] return; }
L_002CC3AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002CC3B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002CC3D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002CC43C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC40Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CC40Cu) [[unlikely]] return; }
L_002CC40C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002CC43C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 120u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC430u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CC430u) [[unlikely]] return; }
L_002CC430:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CC43C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CC43C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002CC460; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002CC45C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC458u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 139u, depth + 1u); else { c.pc = 0x0028D990u; return; } if (c.pc != 0x002CC458u) [[unlikely]] return; }
L_002CC458:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002CC45C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002CC460:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC46Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 21u, depth + 1u); else { c.pc = 0x002CC270u; return; } if (c.pc != 0x002CC46Cu) [[unlikely]] return; }
L_002CC46C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002CC490:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002CC4B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CC560; } }
L_002CC4B4:
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC4C4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CC4C4u) [[unlikely]] return; }
L_002CC4C4:
    c.r[1].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;  goto L_002CC4D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CC560; } }
L_002CC4D8:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], 0u + 36u);  goto L_002CC4E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CC560; } }
L_002CC4E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC4F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002CC4F0u) [[unlikely]] return; }
L_002CC4F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CC558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC500u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x002CC500u) [[unlikely]] return; }
L_002CC500:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[2], c.r[2].w[0] + 14368u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[17].w[0] + 8u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 21520u);
    set32(c.r[6], c.r[6].w[0] - 22016u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC52Cu); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x002CC52Cu) [[unlikely]] return; }
L_002CC52C:
    st32((c.r[17].w[0] + 24u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 28u), 0u);  if (t) { goto L_002CC554; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC544u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CC544u) [[unlikely]] return; }
L_002CC544:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC554u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CC554u) [[unlikely]] return; }
L_002CC554:
    st32((c.r[17].w[0] + 32u), 0u);
    c.budget -= 1;
L_002CC558:
    st32((c.r[17].w[0] + 24u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_002CC560:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CC580:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[6].w[0]);  c.pc = t; return; }
L_002CC590:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 31880u);  c.pc = t; return; }
L_002CC5A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC5B4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 319u, depth + 1u); else { c.pc = 0x0031EF20u; return; } if (c.pc != 0x002CC5B4u) [[unlikely]] return; }
L_002CC5B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC5C0u); set32(c.r[4], ld32((c.r[2].w[0] + 31880u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002CC5C0u) [[unlikely]] return; }
L_002CC5C0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC5D4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002CC5D4u) [[unlikely]] return; }
L_002CC5D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CC5F0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0087(c, 323u, depth); }
L_002CC600:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0087(c, 324u, depth); }
L_002CC610:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0087(c, 325u, depth); }
L_002CC620:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0087(c, 326u, depth); }
L_002CC630:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0087(c, 327u, depth); }
L_002CC640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 256u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC658u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002CC658u) [[unlikely]] return; }
L_002CC658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CC674; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC668u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 340u, depth + 1u); else { c.pc = 0x0031F170u; return; } if (c.pc != 0x002CC668u) [[unlikely]] return; }
L_002CC668:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 14512u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002CC674:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CC690:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 256u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC6B8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002CC6B8u) [[unlikely]] return; }
L_002CC6B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CC6D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC6C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 340u, depth + 1u); else { c.pc = 0x0031F170u; return; } if (c.pc != 0x002CC6C8u) [[unlikely]] return; }
L_002CC6C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 14512u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002CC6D4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC6E4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 331u, depth + 1u); else { c.pc = 0x0031F010u; return; } if (c.pc != 0x002CC6E4u) [[unlikely]] return; }
L_002CC6E4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CC700:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002CC000u < 16384u) { entry = entries_0073[(t - 0x002CC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002CC710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CC76C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 14512u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002CC750; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 18848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC750u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 283u, depth + 1u); else { c.pc = 0x0031EB50u; return; } if (c.pc != 0x002CC750u) [[unlikely]] return; }
L_002CC750:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002CC770; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC76Cu); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002CC76Cu) [[unlikely]] return; }
L_002CC76C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002CC770:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CC790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC7A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 342u, depth + 1u); else { c.pc = 0x0031F1B0u; return; } if (c.pc != 0x002CC7A4u) [[unlikely]] return; }
L_002CC7A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 14512u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CC7D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 31912u);  c.pc = t; return; }
L_002CC7E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CC7F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC80Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 349u, depth + 1u); else { c.pc = 0x0031F2E0u; return; } if (c.pc != 0x002CC80Cu) [[unlikely]] return; }
L_002CC80C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC818u); set32(c.r[4], ld32((c.r[2].w[0] + 31912u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002CC818u) [[unlikely]] return; }
L_002CC818:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC82Cu); set32(c.r[6], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002CC82Cu) [[unlikely]] return; }
L_002CC82C:
    set32(c.r[5], ld32((c.r[17].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC83Cu); set32(c.r[4], c.r[4].w[0] + 31920u);  if (depth < kMaxDepth) unit_0088(c, 223u, depth + 1u); else { c.pc = 0x00321A40u; return; } if (c.pc != 0x002CC83Cu) [[unlikely]] return; }
L_002CC83C:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC850u); set32(c.r[6], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002CC850u) [[unlikely]] return; }
L_002CC850:
    set32(c.r[5], ld32((c.r[17].w[0] + 132u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC860u); set32(c.r[4], c.r[4].w[0] + 31932u);  if (depth < kMaxDepth) unit_0088(c, 223u, depth + 1u); else { c.pc = 0x00321A40u; return; } if (c.pc != 0x002CC860u) [[unlikely]] return; }
L_002CC860:
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC874u); set32(c.r[6], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002CC874u) [[unlikely]] return; }
L_002CC874:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 136u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC884u); set32(c.r[4], c.r[4].w[0] + 31946u);  if (depth < kMaxDepth) unit_0088(c, 241u, depth + 1u); else { c.pc = 0x00321C40u; return; } if (c.pc != 0x002CC884u) [[unlikely]] return; }
L_002CC884:
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC898u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002CC898u) [[unlikely]] return; }
L_002CC898:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 138u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC8A8u); set32(c.r[4], c.r[4].w[0] + 31963u);  if (depth < kMaxDepth) unit_0088(c, 241u, depth + 1u); else { c.pc = 0x00321C40u; return; } if (c.pc != 0x002CC8A8u) [[unlikely]] return; }
L_002CC8A8:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC8BCu); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002CC8BCu) [[unlikely]] return; }
L_002CC8BC:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 140u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC8CCu); set32(c.r[4], c.r[4].w[0] + 31975u);  if (depth < kMaxDepth) unit_0088(c, 241u, depth + 1u); else { c.pc = 0x00321C40u; return; } if (c.pc != 0x002CC8CCu) [[unlikely]] return; }
L_002CC8CC:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC8E0u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002CC8E0u) [[unlikely]] return; }
L_002CC8E0:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 142u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC8F0u); set32(c.r[4], c.r[4].w[0] + 31989u);  if (depth < kMaxDepth) unit_0088(c, 241u, depth + 1u); else { c.pc = 0x00321C40u; return; } if (c.pc != 0x002CC8F0u) [[unlikely]] return; }
L_002CC8F0:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC904u); set32(c.r[6], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002CC904u) [[unlikely]] return; }
L_002CC904:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 144u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC914u); set32(c.r[4], c.r[4].w[0] + 32006u);  if (depth < kMaxDepth) unit_0088(c, 241u, depth + 1u); else { c.pc = 0x00321C40u; return; } if (c.pc != 0x002CC914u) [[unlikely]] return; }
L_002CC914:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC928u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002CC928u) [[unlikely]] return; }
L_002CC928:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 146u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC938u); set32(c.r[4], c.r[4].w[0] + 32018u);  if (depth < kMaxDepth) unit_0088(c, 241u, depth + 1u); else { c.pc = 0x00321C40u; return; } if (c.pc != 0x002CC938u) [[unlikely]] return; }
L_002CC938:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC94Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002CC94Cu) [[unlikely]] return; }
L_002CC94C:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 148u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC95Cu); set32(c.r[4], c.r[4].w[0] + 32035u);  if (depth < kMaxDepth) unit_0088(c, 241u, depth + 1u); else { c.pc = 0x00321C40u; return; } if (c.pc != 0x002CC95Cu) [[unlikely]] return; }
L_002CC95C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC970u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002CC970u) [[unlikely]] return; }
L_002CC970:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002CC990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC9ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 357u, depth + 1u); else { c.pc = 0x0031F380u; return; } if (c.pc != 0x002CC9ACu) [[unlikely]] return; }
L_002CC9AC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[17].w[0] + 136u));  goto L_002CC9BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CCA68; } }
L_002CC9BC:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 136u));
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CCA68; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 138u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 138u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CCA28; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 140u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 140u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CCA28; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 142u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 142u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CCA28; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 144u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 144u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CCA28; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 146u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 146u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CCA28; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 148u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 148u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[6], c.r[4].w[0] << 3);  goto L_002CCA34; }
L_002CCA28:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CCA68; } }
L_002CCA34:
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCA40u); set32(c.r[5], ld32((c.r[16].w[0] + 128u)));  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x002CCA40u) [[unlikely]] return; }
L_002CCA40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 136u));  goto L_002CCA50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CCA68; } }
L_002CCA50:
    set32(c.r[5], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCA60u); set32(c.r[6], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x002CCA60u) [[unlikely]] return; }
L_002CCA60:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002CCA68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CCA80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCAA0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 360u, depth + 1u); else { c.pc = 0x0031F420u; return; } if (c.pc != 0x002CCAA0u) [[unlikely]] return; }
L_002CCAA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCAACu); set32(c.r[5], c.r[18].w[0] + 136u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002CCAACu) [[unlikely]] return; }
L_002CCAAC:
    c.r[16].d[0] = ld16((c.r[18].w[0] + 136u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 128u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCAC0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 196u, depth + 1u); else { c.pc = 0x002CDE20u; return; } if (c.pc != 0x002CCAC0u) [[unlikely]] return; }
L_002CCAC0:
    set32(c.r[5], ld32((c.r[18].w[0] + 132u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCAD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 195u, depth + 1u); else { c.pc = 0x002CDE10u; return; } if (c.pc != 0x002CCAD0u) [[unlikely]] return; }
L_002CCAD0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCADCu); set32(c.r[5], c.r[18].w[0] + 138u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002CCADCu) [[unlikely]] return; }
L_002CCADC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCAE8u); set32(c.r[5], c.r[18].w[0] + 140u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002CCAE8u) [[unlikely]] return; }
L_002CCAE8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCAF4u); set32(c.r[5], c.r[18].w[0] + 142u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002CCAF4u) [[unlikely]] return; }
L_002CCAF4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCB00u); set32(c.r[5], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002CCB00u) [[unlikely]] return; }
L_002CCB00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCB0Cu); set32(c.r[5], c.r[18].w[0] + 146u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002CCB0Cu) [[unlikely]] return; }
L_002CCB0C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCB18u); set32(c.r[5], c.r[18].w[0] + 148u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002CCB18u) [[unlikely]] return; }
L_002CCB18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CCB30:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0087(c, 369u, depth); }
L_002CCB40:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0087(c, 370u, depth); }
L_002CCB50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCB70u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 371u, depth + 1u); else { c.pc = 0x0031F540u; return; } if (c.pc != 0x002CCB70u) [[unlikely]] return; }
L_002CCB70:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCB7Cu); set32(c.r[5], c.r[18].w[0] + 136u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002CCB7Cu) [[unlikely]] return; }
L_002CCB7C:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 136u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCB8Cu); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002CCB8Cu) [[unlikely]] return; }
L_002CCB8C:
    st32((c.r[18].w[0] + 128u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld16((c.r[18].w[0] + 136u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCBA0u); set32(c.r[4], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002CCBA0u) [[unlikely]] return; }
L_002CCBA0:
    st32((c.r[18].w[0] + 132u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld16((c.r[18].w[0] + 136u));
    set32(c.r[5], ld32((c.r[18].w[0] + 128u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCBB8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 198u, depth + 1u); else { c.pc = 0x002CDE40u; return; } if (c.pc != 0x002CCBB8u) [[unlikely]] return; }
L_002CCBB8:
    set32(c.r[5], ld32((c.r[18].w[0] + 132u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCBC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 197u, depth + 1u); else { c.pc = 0x002CDE30u; return; } if (c.pc != 0x002CCBC8u) [[unlikely]] return; }
L_002CCBC8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCBD4u); set32(c.r[5], c.r[18].w[0] + 138u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002CCBD4u) [[unlikely]] return; }
L_002CCBD4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCBE0u); set32(c.r[5], c.r[18].w[0] + 140u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002CCBE0u) [[unlikely]] return; }
L_002CCBE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCBECu); set32(c.r[5], c.r[18].w[0] + 142u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002CCBECu) [[unlikely]] return; }
L_002CCBEC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCBF8u); set32(c.r[5], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002CCBF8u) [[unlikely]] return; }
L_002CCBF8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCC04u); set32(c.r[5], c.r[18].w[0] + 146u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002CCC04u) [[unlikely]] return; }
L_002CCC04:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCC10u); set32(c.r[5], c.r[18].w[0] + 148u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002CCC10u) [[unlikely]] return; }
L_002CCC10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CCC30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 160u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCC48u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002CCC48u) [[unlikely]] return; }
L_002CCC48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CCC8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCC58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 425u, depth + 1u); else { c.pc = 0x0031FB80u; return; } if (c.pc != 0x002CCC58u) [[unlikely]] return; }
L_002CCC58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 14688u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 128u), 0u);
    st32((c.r[16].w[0] + 132u), 0u);
    st16((c.r[16].w[0] + 136u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 138u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 140u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 142u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 144u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 146u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 148u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 150u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
L_002CCC8C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CCCA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[4].w[0] + 150u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 12u));
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] <= 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002CCCC4; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCCC4u); set32(c.r[4], c.r[3].w[0] + 16u);  if (depth < kMaxDepth) unit_005F(c, 25u, depth + 1u); else { c.pc = 0x0027C650u; return; } if (c.pc != 0x002CCCC4u) [[unlikely]] return; }
L_002CCCC4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CCCD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.f[23] = c.f[12];
    c.f[22] = c.f[13];
    c.f[21] = c.f[14];
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[15];  if (t) { goto L_002CCDDC; } }
    c.r[2].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CCD24; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 136u));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002CCD24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CCD44; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 65535ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
L_002CCD44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CCDE0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CCDDC; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 50u));
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002CCDDC; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCD9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 456u, depth + 1u); else { c.pc = 0x002A7C20u; return; } if (c.pc != 0x002CCD9Cu) [[unlikely]] return; }
L_002CCD9C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[23]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 4u), c.f[22]);
    st32((c.r[3].w[0] + 8u), c.f[23]);
    st32((c.r[3].w[0] + 12u), c.f[20]);
    st32((c.r[3].w[0] + 16u), c.f[21]);
    st32((c.r[3].w[0] + 20u), c.f[20]);
    st32((c.r[3].w[0] + 24u), c.f[21]);
    st32((c.r[3].w[0] + 28u), c.f[22]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002CCDE0; } }
L_002CCDDC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CCDE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CCE10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_002CCF04; } }
    c.r[2].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CCE54; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 136u));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002CCE54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CCE74; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 132u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 65535ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
L_002CCE74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CCF08; }
    set32(c.r[6], c.r[5].w[0] << 1);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 50u));
    set32(c.r[5], ld32((c.r[19].w[0] + 132u)));
    c.r[3].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[5].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[5], c.r[5].w[0] << 3);
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_002CCF04; } }
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CCEB8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 456u, depth + 1u); else { c.pc = 0x002A7C20u; return; } if (c.pc != 0x002CCEB8u) [[unlikely]] return; }
L_002CCEB8:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_002CCF04; } }
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.r[1].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002CCF04; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 2u));
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[19].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002CCF08; } }
L_002CCF04:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CCF08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002CCF30:
    set32(c.r[8], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[8].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CD014; }
    c.r[2].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CCF54; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 136u));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002CCF54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CCF74; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 132u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 65535ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
L_002CCF74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CD010; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[2], ld32((c.r[4].w[0] + 128u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[7].w[0]));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002CD010; } }
    c.r[2].d[0] = ld16((c.r[7].w[0] + 2u));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[8].w[0] + c.r[2].w[0]);  if (t) { goto L_002CCFE8; } }
L_002CCFB8:
    set32(c.r[2], c.r[9].w[0] + 1u);
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[9].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 12;
L_002CCFE8:
    c.r[2].d[0] = ld16((c.r[7].w[0]));
    c.r[3].d[0] = c.r[9].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[9].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CCFB8u | kUnwind; return; } goto L_002CCFB8; }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 52u));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002CD014; } }
L_002CD010:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CD014:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CD020:
    c.r[2].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CD038; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 136u));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002CD038:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CD058; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 132u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 65535ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
L_002CD058:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CD180; }
    set32(c.r[6], c.r[5].w[0] << 1);
    set32(c.r[3], ld32((c.r[4].w[0] + 128u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 132u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CD17C; } }
    c.r[8].d[0] = ld16((c.r[5].w[0] + 2u));
    c.f[0] = fp::add(c.f[13], c.f[15]);
    set32(c.r[6], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[5], c.r[8].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[9], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[3].w[0] << 2);
    st32((c.r[5].w[0]), c.f[12]);
    set32(c.r[6], c.r[8].w[0] + 2u);
    set32(c.r[5], c.r[8].w[0] + 3u);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[8], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[3].w[0] << 2);
    st32((c.r[8].w[0] + 4u), c.f[13]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.f[1] = fp::add(c.f[12], c.f[14]);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0]), c.f[12]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.f[1]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.f[1]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 4u), c.f[13]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 8u), 0u);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 60;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 150u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002CD180; } }
L_002CD17C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CD180:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CD190:
    c.r[2].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CD1A8; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 136u));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002CD1A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CD1C8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 132u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 65535ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
L_002CD1C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CD25C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[2], ld32((c.r[4].w[0] + 128u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] < 0; set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002CD258; } }
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002CD258; } }
    c.r[5].d[0] = ld16((c.r[3].w[0] + 2u));
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 8u), 0u);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 150u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002CD25C; } }
L_002CD258:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CD25C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CD270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 140u));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002CD2D8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[6], c.r[3].w[0] << 3);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD298u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x002CD298u) [[unlikely]] return; }
L_002CD298:
    st16((c.r[16].w[0] + 140u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD2B0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CD2B0u) [[unlikely]] return; }
L_002CD2B0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD2C4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CD2C4u) [[unlikely]] return; }
L_002CD2C4:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 52u));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] | 4095ull;
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 150u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_002CD2D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CD2F0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[3].d[0] = c.r[22].d[0] & 65535ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002CD340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002CDA28; } }
L_002CD340:
    c.r[2].d[0] = c.r[20].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002CD35C; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_002CD35C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002CDA28; } }
L_002CD35C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[19].d[0] = ld16((c.r[21].w[0] + 140u));  goto L_002CD370; }
    set32(c.r[2], c.r[3].w[0] - 2u);
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    c.r[19].d[0] = ld16((c.r[21].w[0] + 140u));
    c.budget -= 3;
L_002CD370:
    set32(c.r[2], c.r[19].w[0] + 1u);
    st16((c.r[21].w[0] + 140u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[21].w[0] + 136u));
    c.r[2].d[0] = ld16((c.r[21].w[0] + 140u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 128u)));  goto L_002CD430; }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 138u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD3A4u); set32(c.r[4], c.r[16].w[0] << 3);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002CD3A4u) [[unlikely]] return; }
L_002CD3A4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[21].w[0] + 128u)));
    c.r[2].d[0] = ld16((c.r[21].w[0] + 136u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD3BCu); set32(c.r[6], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002CD3BCu) [[unlikely]] return; }
L_002CD3BC:
    set32(c.r[4], ld32((c.r[21].w[0] + 128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD3C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002CD3C8u) [[unlikely]] return; }
L_002CD3C8:
    set32(c.r[18], c.r[16].w[0] << 1);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD3DCu); st32((c.r[21].w[0] + 128u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002CD3DCu) [[unlikely]] return; }
L_002CD3DC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[21].w[0] + 136u));
    set32(c.r[6], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[18].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[21].w[0] + 132u)));  if (t) { goto L_002CD3FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD3FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002CD3FCu) [[unlikely]] return; }
L_002CD3FC:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 136u));
    set32(c.r[5], 0u + 255u);
    set32(c.r[3], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] << 1);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD418u); set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x002CD418u) [[unlikely]] return; }
L_002CD418:
    set32(c.r[4], ld32((c.r[21].w[0] + 132u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD424u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002CD424u) [[unlikely]] return; }
L_002CD424:
    st32((c.r[21].w[0] + 132u), c.r[17].w[0]);
    st16((c.r[21].w[0] + 136u), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0] + 128u)));
    c.budget -= 3;
L_002CD430:
    c.r[3].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[4], c.r[3].w[0] << 3);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[22].w[0]));
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.r[4].d[0] = ld16((c.r[21].w[0] + 80u));
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[6].d[0] = ld16((c.r[21].w[0] + 140u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull | 65535ull;  if (t) { goto L_002CD494; } }
L_002CD46C:
    c.r[5].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[7].w[0] + 1u);  goto L_002CD490; }
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CD4A4; } }
L_002CD490:
    c.r[7].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_002CD494:
    c.r[2].d[0] = c.r[7].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 132u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CD46Cu | kUnwind; return; } goto L_002CD46C; }
L_002CD4A4:
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[21].w[0] + 12u));
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD4C4u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CD4C4u) [[unlikely]] return; }
L_002CD4C4:
    c.r[6].d[0] = ld16((c.r[21].w[0] + 142u));
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 5;
    if (c.r[2].sd[0] <= 0) { set32(c.r[25], ld32((c.r[21].w[0])));  goto L_002CD820; }
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = ld16((c.r[21].w[0] + 144u));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002CD4F4; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002CD510; } }
L_002CD4F4:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_002CD510:
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_002CD554; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_002CD56C; } }
L_002CD554:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 6;
L_002CD56C:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD5A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002CD5A8u) [[unlikely]] return; }
L_002CD5A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD5C4u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002CD5C4u) [[unlikely]] return; }
L_002CD5C4:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[2], c.r[17].w[0] << 1);
    c.r[3].d[0] = ld16((c.r[21].w[0] + 142u));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[22], c.r[2].w[0] << 2);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[21].w[0] + 32u)));  if (t) { goto L_002CD608; } }
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD608u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002CD608u) [[unlikely]] return; }
L_002CD608:
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD620u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002CD620u) [[unlikely]] return; }
L_002CD620:
    st32((c.r[21].w[0] + 32u), c.r[30].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 40u)));  goto L_002CD6FC; }
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD63Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002CD63Cu) [[unlikely]] return; }
L_002CD63C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD658u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002CD658u) [[unlikely]] return; }
L_002CD658:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[21].w[0] + 36u)));  if (t) { goto L_002CD678; } }
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD678u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002CD678u) [[unlikely]] return; }
L_002CD678:
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD690u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002CD690u) [[unlikely]] return; }
L_002CD690:
    st32((c.r[21].w[0] + 36u), c.r[30].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].d[0] = ld16((c.r[21].w[0] + 142u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_002CD6E8; } }
L_002CD6A8:
    c.r[6].d[0] = c.r[8].d[0] & 65535ull;
    c.f[0] = ld32((c.r[3].w[0] + 31076u));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[2] = c.f[1] ^ fp::kSign;
    set32(c.r[7], c.r[5].w[0] << 2);
    c.f[1] = c.f[0] ^ fp::kSign;
    set32(c.r[6], ld32((c.r[21].w[0] + 36u)));
    c.f[0] = ld32((c.r[2].w[0] + 31072u));
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[6].w[0]), c.f[0]);
    st32((c.r[6].w[0] + 4u), c.f[1]);
    st32((c.r[6].w[0] + 8u), c.f[2]);
    c.budget -= 16;
L_002CD6E8:
    c.r[5].d[0] = c.r[8].d[0] & 65535ull;
    c.r[5].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[5].d[0] != 0ull) { c.f[1] = ld32((c.r[4].w[0] + 31080u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CD6A8u | kUnwind; return; } goto L_002CD6A8; }
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 1;
L_002CD6FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[21].w[0] + 50u));  goto L_002CD774; }
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD714u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002CD714u) [[unlikely]] return; }
L_002CD714:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6544u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD730u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002CD730u) [[unlikely]] return; }
L_002CD730:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 142u));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[6], c.r[3].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[21].w[0] + 40u)));  if (t) { goto L_002CD754; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD754u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002CD754u) [[unlikely]] return; }
L_002CD754:
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD76Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002CD76Cu) [[unlikely]] return; }
L_002CD76C:
    st32((c.r[21].w[0] + 40u), c.r[22].w[0]);
    c.r[2].d[0] = ld16((c.r[21].w[0] + 50u));
    c.budget -= 2;
L_002CD774:
    c.r[22].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 3;
    if (c.r[22].sd[0] <= 0) { st16((c.r[21].w[0] + 142u), static_cast<std::uint16_t>(c.r[18].w[0]));  goto L_002CD81C; }
    mmi::mult(c, 0, c.r[22].w[0], c.r[17].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[17].w[0] << 3);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD794u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002CD794u) [[unlikely]] return; }
L_002CD794:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 28784u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD7B0u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002CD7B0u) [[unlikely]] return; }
L_002CD7B0:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld16((c.r[21].w[0] + 142u));
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (t) { goto L_002CD7EC; } }
L_002CD7C8:
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 208u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD7E4u); set32(c.r[4], c.r[30].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002CD7E4u) [[unlikely]] return; }
L_002CD7E4:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_002CD7EC:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[21].w[0] + 12u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CD7C8u | kUnwind; return; } goto L_002CD7C8; }
    set32(c.r[4], ld32((c.r[21].w[0] + 44u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD814u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002CD814u) [[unlikely]] return; }
L_002CD814:
    st32((c.r[21].w[0] + 44u), c.r[30].w[0]);
    st16((c.r[21].w[0] + 142u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 2;
L_002CD81C:
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_002CD820:
    c.r[17].d[0] = c.r[20].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[21].w[0] + 80u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD83Cu); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CD83Cu) [[unlikely]] return; }
L_002CD83C:
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[3], ld32((c.r[21].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[21].w[0] + 96u), c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[21].w[0] + 80u));
    c.r[2].d[0] = ld16((c.r[21].w[0] + 146u));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 13;
    if (c.r[3].sd[0] <= 0) { c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));  goto L_002CD968; }
    c.f[0] = c.r[3].w[0];
    c.r[5].d[0] = ld16((c.r[21].w[0] + 148u));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002CD88C; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002CD8A8; } }
L_002CD88C:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_002CD8A8:
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_002CD8EC; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002CD904; } }
L_002CD8EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 6;
L_002CD904:
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[22].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[30], c.r[22].w[0] << 1);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD930u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002CD930u) [[unlikely]] return; }
L_002CD930:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[21].w[0] + 146u));
    set32(c.r[6], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[30].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[21].w[0] + 100u)));  if (t) { goto L_002CD950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD950u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002CD950u) [[unlikely]] return; }
L_002CD950:
    set32(c.r[4], ld32((c.r[21].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD95Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002CD95Cu) [[unlikely]] return; }
L_002CD95C:
    st32((c.r[21].w[0] + 100u), c.r[18].w[0]);
    st16((c.r[21].w[0] + 146u), static_cast<std::uint16_t>(c.r[22].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    c.budget -= 3;
L_002CD968:
    set32(c.r[2], ld32((c.r[21].w[0] + 100u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 4;
    { const bool t = c.r[23].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002CD9D0; } }
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CD98Cu); set32(c.r[6], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002CD98Cu) [[unlikely]] return; }
L_002CD98C:
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002CD9BC; } }
L_002CD9A0:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_002CD9BC:
    c.r[2].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CD9A0u | kUnwind; return; } goto L_002CD9A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld16((c.r[21].w[0] + 52u));  if (t) { goto L_002CDA1C; } }
L_002CD9D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002CDA08; } }
L_002CD9D8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2u);
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[18].w[0] + 6u);
    c.budget -= 12;
L_002CDA08:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[16].w[0] + 2u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CD9D8u | kUnwind; return; } goto L_002CD9D8; }
    c.r[3].d[0] = ld16((c.r[21].w[0] + 52u));
    c.budget -= 1;
L_002CDA1C:
    c.r[2].d[0] = c.r[19].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 33ull;
    st16((c.r[21].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002CDA28:
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
L_002CDA60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CDAC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 14688u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDA94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002CDA94u) [[unlikely]] return; }
L_002CDA94:
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDAA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002CDAA0u) [[unlikely]] return; }
L_002CDAA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDAACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 417u, depth + 1u); else { c.pc = 0x0031FAB0u; return; } if (c.pc != 0x002CDAACu) [[unlikely]] return; }
L_002CDAAC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002CDACC; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDAC8u); set32(c.r[5], 0u + 160u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002CDAC8u) [[unlikely]] return; }
L_002CDAC8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002CDACC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CDAE0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDB2Cu); c.r[16].d[0] = c.r[11].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 425u, depth + 1u); else { c.pc = 0x0031FB80u; return; } if (c.pc != 0x002CDB2Cu) [[unlikely]] return; }
L_002CDB2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 14688u);
    c.budget -= 4;
    { const bool t = c.r[19].sd[0] <= 0; st32((c.r[21].w[0]), c.r[2].w[0]);  if (t) { goto L_002CDB44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 136u), static_cast<std::uint16_t>(c.r[19].w[0]));  if (t) { goto L_002CDB4C; } }
L_002CDB44:
    set32(c.r[19], 0u + 1u);
    st16((c.r[21].w[0] + 136u), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.budget -= 2;
L_002CDB4C:
    c.budget -= 2;
    if (c.r[18].sd[0] <= 0) { set32(c.r[18], 0u + 1u);  goto L_002CDB54; }
L_002CDB54:
    st16((c.r[21].w[0] + 138u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[21].w[0] + 140u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = ld16((c.r[21].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDB6Cu); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002CDB6Cu) [[unlikely]] return; }
L_002CDB6C:
    st32((c.r[21].w[0] + 128u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld16((c.r[21].w[0] + 136u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDB80u); set32(c.r[4], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002CDB80u) [[unlikely]] return; }
L_002CDB80:
    st32((c.r[21].w[0] + 132u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[21].w[0] + 136u));
    set32(c.r[5], 0u + 255u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDB98u); set32(c.r[6], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x002CDB98u) [[unlikely]] return; }
L_002CDB98:
    c.budget -= 2;
    if (c.r[17].sd[0] <= 0) { set32(c.r[17], 0u + 1u);  goto L_002CDBA0; }
L_002CDBA0:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; st16((c.r[21].w[0] + 142u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_002CDBB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 144u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (t) { goto L_002CDBB8; } }
L_002CDBB0:
    set32(c.r[16], 0u + 1u);
    st16((c.r[21].w[0] + 144u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 2;
L_002CDBB8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDBCCu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CDBCCu) [[unlikely]] return; }
L_002CDBCC:
    c.r[16].d[0] = ld16((c.r[21].w[0] + 142u));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDBE8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002CDBE8u) [[unlikely]] return; }
L_002CDBE8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDC04u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002CDC04u) [[unlikely]] return; }
L_002CDC04:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[21].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_002CDCB8; } }
    c.r[16].d[0] = ld16((c.r[21].w[0] + 142u));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDC28u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002CDC28u) [[unlikely]] return; }
L_002CDC28:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDC44u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002CDC44u) [[unlikely]] return; }
L_002CDC44:
    st32((c.r[21].w[0] + 36u), c.r[2].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_002CDC9C; } }
L_002CDC5C:
    c.r[6].d[0] = c.r[8].d[0] & 65535ull;
    c.f[0] = ld32((c.r[3].w[0] + 31076u));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[2] = c.f[1] ^ fp::kSign;
    set32(c.r[7], c.r[5].w[0] << 2);
    c.f[1] = c.f[0] ^ fp::kSign;
    set32(c.r[6], ld32((c.r[21].w[0] + 36u)));
    c.f[0] = ld32((c.r[2].w[0] + 31072u));
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[6].w[0]), c.f[0]);
    st32((c.r[6].w[0] + 4u), c.f[1]);
    st32((c.r[6].w[0] + 8u), c.f[2]);
    c.budget -= 16;
L_002CDC9C:
    c.r[5].d[0] = ld16((c.r[21].w[0] + 142u));
    c.r[6].d[0] = c.r[8].d[0] & 65535ull;
    c.r[5].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[5].d[0] != 0ull) { c.f[1] = ld32((c.r[4].w[0] + 31080u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDC5Cu | kUnwind; return; } goto L_002CDC5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CDCBC; } }
L_002CDCB8:
    st32((c.r[21].w[0] + 36u), 0u);
    c.budget -= 1;
L_002CDCBC:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CDCF4; }
    c.r[16].d[0] = ld16((c.r[21].w[0] + 142u));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[16].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDCD8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002CDCD8u) [[unlikely]] return; }
L_002CDCD8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6544u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDCF4u); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002CDCF4u) [[unlikely]] return; }
L_002CDCF4:
    c.r[16].d[0] = c.r[23].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; st32((c.r[21].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_002CDD54; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 142u));
    set32(c.r[5], 0u + 1u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[17].w[0] << 3);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDD18u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002CDD18u) [[unlikely]] return; }
L_002CDD18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 28784u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDD34u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002CDD34u) [[unlikely]] return; }
L_002CDD34:
    st32((c.r[21].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], 0u - 64u);
    c.r[4].d[0] = ld16((c.r[21].w[0] + 50u));
    c.r[2].d[0] = c.r[16].d[0] & 63ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 50u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002CDD58; } }
L_002CDD54:
    st32((c.r[21].w[0] + 44u), 0u);
    c.budget -= 1;
L_002CDD58:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[2], 0u + 3u);  goto L_002CDD6C; }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002CDD6C:
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; st16((c.r[21].w[0] + 146u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002CDD84; } }
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002CDD88; } }
L_002CDD84:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002CDD88:
    st16((c.r[21].w[0] + 148u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDDA0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CDDA0u) [[unlikely]] return; }
L_002CDDA0:
    st32((c.r[21].w[0] + 96u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld16((c.r[21].w[0] + 146u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDDB4u); set32(c.r[4], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002CDDB4u) [[unlikely]] return; }
L_002CDDB4:
    st32((c.r[21].w[0] + 100u), c.r[2].w[0]);
    st8((c.r[21].w[0] + 150u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = ld16((c.r[21].w[0] + 52u));
    c.r[3].d[0] = c.r[2].d[0] | 4095ull;
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st16((c.r[21].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002CDE10:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 396u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7230u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 394u, depth); }
L_002CDE20:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 396u)));  goto L_002CDE50; }
L_002CDE30:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 392u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F72D0u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 398u, depth); }
L_002CDE40:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 392u)));  goto L_002CDEA0; }
L_002CDE50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDE7Cu); set32(c.r[8], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CDE7Cu) [[unlikely]] return; }
L_002CDE7C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CDEA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDECCu); set32(c.r[8], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CDECCu) [[unlikely]] return; }
L_002CDECC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CDEF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 32072u);  c.pc = t; return; }
L_002CDF00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[2].w[0] + 32072u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDF28u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002CDF28u) [[unlikely]] return; }
L_002CDF28:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDF3Cu); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002CDF3Cu) [[unlikely]] return; }
L_002CDF3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDF4Cu); set32(c.r[5], c.r[5].w[0] + 32080u);  if (depth < kMaxDepth) unit_0061(c, 376u, depth + 1u); else { c.pc = 0x00287A10u; return; } if (c.pc != 0x002CDF4Cu) [[unlikely]] return; }
L_002CDF4C:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDF60u); set32(c.r[6], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002CDF60u) [[unlikely]] return; }
L_002CDF60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDF70u); set32(c.r[5], c.r[5].w[0] + 32086u);  if (depth < kMaxDepth) unit_0061(c, 376u, depth + 1u); else { c.pc = 0x00287A10u; return; } if (c.pc != 0x002CDF70u) [[unlikely]] return; }
L_002CDF70:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDF84u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002CDF84u) [[unlikely]] return; }
L_002CDF84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002CDFDC; } }
L_002CDF8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDF94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002CDF94u) [[unlikely]] return; }
L_002CDF94:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDFACu); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x002CDFACu) [[unlikely]] return; }
L_002CDFAC:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 128u);
    set32(c.r[6], c.r[6].w[0] + 32098u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDFC8u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x002CDFC8u) [[unlikely]] return; }
L_002CDFC8:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CDFD8u); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002CDFD8u) [[unlikely]] return; }
L_002CDFD8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002CDFDC:
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], 0u + 128u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDF8Cu | kUnwind; return; } goto L_002CDF8C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002CE010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE034u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_005F(c, 28u, depth + 1u); else { c.pc = 0x0027C830u; return; } if (c.pc != 0x002CE034u) [[unlikely]] return; }
L_002CE034:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 32u);  goto L_002CE04C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CE0BC; } }
L_002CE04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE054u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_005F(c, 28u, depth + 1u); else { c.pc = 0x0027C830u; return; } if (c.pc != 0x002CE054u) [[unlikely]] return; }
L_002CE054:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 48u)));  goto L_002CE06C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CE0BC; } }
L_002CE06C:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_002CE0AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CE0BC; } }
L_002CE080:
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_002CE0AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CE0BC; } }
L_002CE0AC:
    c.r[2].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE080u | kUnwind; return; } goto L_002CE080; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002CE0BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CE0D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE0F0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 365u, depth + 1u); else { c.pc = 0x002AAF40u; return; } if (c.pc != 0x002CE0F0u) [[unlikely]] return; }
L_002CE0F0:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE0FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 384u, depth + 1u); else { c.pc = 0x00287AD0u; return; } if (c.pc != 0x002CE0FCu) [[unlikely]] return; }
L_002CE0FC:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE108u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 384u, depth + 1u); else { c.pc = 0x00287AD0u; return; } if (c.pc != 0x002CE108u) [[unlikely]] return; }
L_002CE108:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE114u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x002CE114u) [[unlikely]] return; }
L_002CE114:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002CE130; } }
L_002CE11C:
    set32(c.r[3], c.r[18].w[0] << 2);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE12Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002CE12Cu) [[unlikely]] return; }
L_002CE12C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002CE130:
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE11Cu | kUnwind; return; } goto L_002CE11C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CE160:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AAF50u | kUnwind; return; } [[clang::musttail]] return unit_006A(c, 366u, depth); }
L_002CE170:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AAF60u | kUnwind; return; } [[clang::musttail]] return unit_006A(c, 367u, depth); }
L_002CE180:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE1A8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 368u, depth + 1u); else { c.pc = 0x002AAF70u; return; } if (c.pc != 0x002CE1A8u) [[unlikely]] return; }
L_002CE1A8:
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE1B4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 387u, depth + 1u); else { c.pc = 0x00287B10u; return; } if (c.pc != 0x002CE1B4u) [[unlikely]] return; }
L_002CE1B4:
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE1C0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 387u, depth + 1u); else { c.pc = 0x00287B10u; return; } if (c.pc != 0x002CE1C0u) [[unlikely]] return; }
L_002CE1C0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE1CCu); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x002CE1CCu) [[unlikely]] return; }
L_002CE1CC:
    set32(c.r[16], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_002CE268; }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[20], c.r[16].w[0] << 2);  goto L_002CE1FC; }
    set32(c.r[4], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE1F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002CE1F0u) [[unlikely]] return; }
L_002CE1F0:
    st32((c.r[19].w[0] + 52u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 48u), 0u);  if (t) { goto L_002CE248; } }
L_002CE1FC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE208u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002CE208u) [[unlikely]] return; }
L_002CE208:
    set32(c.r[5], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CE234; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    mmi::pminw(c.r[2], c.r[2], c.r[16]);
    set32(c.r[6], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[20].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 52u)));  goto L_002CE238; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE234u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002CE234u) [[unlikely]] return; }
L_002CE234:
    set32(c.r[4], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 1;
L_002CE238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE240u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002CE240u) [[unlikely]] return; }
L_002CE240:
    st32((c.r[19].w[0] + 52u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 48u), c.r[16].w[0]);
    c.budget -= 2;
L_002CE248:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CE268; } }
L_002CE254:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE264u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002CE264u) [[unlikely]] return; }
L_002CE264:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002CE268:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE254u | kUnwind; return; } goto L_002CE254; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002CE2A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE2B8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002CE2B8u) [[unlikely]] return; }
L_002CE2B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CE32C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE2C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 372u, depth + 1u); else { c.pc = 0x002AAFF0u; return; } if (c.pc != 0x002CE2C8u) [[unlikely]] return; }
L_002CE2C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] + 14800u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 31024u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[6].w[0] + 31028u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 31032u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    c.f[0] = ld32((c.r[4].w[0] + 31024u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31028u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 31032u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 25;
L_002CE32C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CE340:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[2] = ld32((c.r[4].w[0] + 16u));
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    st32((c.r[5].w[0] + 16u), c.f[2]);
    st32((c.r[5].w[0] + 20u), c.f[1]);
    st32((c.r[5].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    st32((c.r[5].w[0] + 28u), c.f[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 48u)));
    c.budget -= 20;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CE3FC; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[20], c.r[17].w[0] << 2);  goto L_002CE3B0; }
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE3A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002CE3A4u) [[unlikely]] return; }
L_002CE3A4:
    st32((c.r[18].w[0] + 52u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 48u), 0u);  if (t) { goto L_002CE3FC; } }
L_002CE3B0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE3BCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002CE3BCu) [[unlikely]] return; }
L_002CE3BC:
    set32(c.r[5], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CE3E8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    mmi::pminw(c.r[2], c.r[2], c.r[17]);
    set32(c.r[6], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[20].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 52u)));  goto L_002CE3EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE3E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002CE3E8u) [[unlikely]] return; }
L_002CE3E8:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 1;
L_002CE3EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE3F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002CE3F4u) [[unlikely]] return; }
L_002CE3F4:
    st32((c.r[18].w[0] + 52u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 48u), c.r[17].w[0]);
    c.budget -= 2;
L_002CE3FC:
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE410u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002CE410u) [[unlikely]] return; }
L_002CE410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002CE430:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE458u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002CE458u) [[unlikely]] return; }
L_002CE458:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CE4CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE468u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 372u, depth + 1u); else { c.pc = 0x002AAFF0u; return; } if (c.pc != 0x002CE468u) [[unlikely]] return; }
L_002CE468:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] + 14800u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 31024u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[6].w[0] + 31028u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 31032u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    c.f[0] = ld32((c.r[4].w[0] + 31024u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31028u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 31032u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 25;
L_002CE4CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE4DCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 242u, depth + 1u); else { c.pc = 0x002CE340u; return; } if (c.pc != 0x002CE4DCu) [[unlikely]] return; }
L_002CE4DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CE500:
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  goto L_002CE510; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CE524; } }
L_002CE510:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[5].d[0] + 0ull;  goto L_002CE524; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CE524; } }
L_002CE524:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CE530:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE554u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 429u, depth + 1u); else { c.pc = 0x002AB610u; return; } if (c.pc != 0x002CE554u) [[unlikely]] return; }
L_002CE554:
    st32((c.r[18].w[0] + 44u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002CE5CC; } }
L_002CE560:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 212u)));  goto L_002CE570; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CE57C; } }
L_002CE570:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_002CE57C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002CE5CC; }
    c.f[1] = ld32((c.r[18].w[0] + 44u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[5], c.r[2].w[0] + 32u);  goto L_002CE5C0; }
    c.f[2] = ld32((c.r[2].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[18].w[0] + 32u), c.f[2]);
    st32((c.r[18].w[0] + 36u), c.f[1]);
    st32((c.r[18].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 44u), c.f[0]);  if (t) { goto L_002CE5C8; } }
L_002CE5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE5C8u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_005F(c, 24u, depth + 1u); else { c.pc = 0x0027C440u; return; } if (c.pc != 0x002CE5C8u) [[unlikely]] return; }
L_002CE5C8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002CE5CC:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 218u));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE560u | kUnwind; return; } goto L_002CE560; }
    set32(c.r[4], c.r[17].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 76u), 0u);
    st32((c.r[29].w[0] + 92u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE5F4u); st32((c.r[29].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0087(c, 263u, depth + 1u); else { c.pc = 0x0031E870u; return; } if (c.pc != 0x002CE5F4u) [[unlikely]] return; }
L_002CE5F4:
    set32(c.r[4], c.r[18].w[0] + 16u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE604u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_005F(c, 23u, depth + 1u); else { c.pc = 0x0027C400u; return; } if (c.pc != 0x002CE604u) [[unlikely]] return; }
L_002CE604:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002CE620:
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[5].w[0] + 160u));
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = ld32((c.r[5].w[0] + 164u));
    c.f[3] = fp::sub(c.f[3], c.f[2]);
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 168u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[1] = fp::sqrt(c.f[1]);
    c.f[5] = ld32((c.r[4].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[5]));
    c.budget -= 18;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CE714; }
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = ld8((c.r[5].w[0] + 296u));  goto L_002CE684; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CE714; } }
L_002CE684:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 272u);  if (t) { goto L_002CE694; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = ld32((c.r[3].w[0] + 4u));  if (t) { goto L_002CE6A4; } }
L_002CE694:
    fpu_div(c, 5u, c.f[5], c.f[1]);
    c.f[4] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 4;
L_002CE6A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[2], c.f[3]);
    fpu_div(c, 0u, c.f[2], c.f[0]);
    c.f[0] = fp::max(c.f[1], c.f[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 48u)));
    c.f[1] = fp::mul(c.f[5], c.f[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[5].w[0] + 324u));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.f[1] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_002CE708; } }
L_002CE6E8:
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_002CE708; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CE714; } }
L_002CE708:
    c.r[3].d[0] = c.r[2].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE6E8u | kUnwind; return; } goto L_002CE6E8; }
L_002CE714:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CE720:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 64u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE74Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002CE74Cu) [[unlikely]] return; }
L_002CE74C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CE7C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE75Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 372u, depth + 1u); else { c.pc = 0x002AAFF0u; return; } if (c.pc != 0x002CE75Cu) [[unlikely]] return; }
L_002CE75C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] + 14800u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 31024u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[6].w[0] + 31028u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 31032u));
    st32((c.r[18].w[0] + 24u), c.f[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    c.f[0] = ld32((c.r[4].w[0] + 31024u));
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31028u));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 31032u));
    st32((c.r[18].w[0] + 40u), c.f[0]);
    st32((c.r[18].w[0] + 44u), 0u);
    st32((c.r[18].w[0] + 48u), 0u);
    st32((c.r[18].w[0] + 52u), 0u);
    c.budget -= 25;
L_002CE7C0:
    c.f[2] = ld32((c.r[19].w[0] + 16u));
    c.f[1] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    st32((c.r[18].w[0] + 16u), c.f[2]);
    st32((c.r[18].w[0] + 20u), c.f[1]);
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    st32((c.r[18].w[0] + 28u), c.f[0]);
    set32(c.r[17], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 12;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 48u)));  goto L_002CE860; }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[20], c.r[17].w[0] << 2);  goto L_002CE810; }
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE804u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002CE804u) [[unlikely]] return; }
L_002CE804:
    st32((c.r[18].w[0] + 52u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 48u), 0u);  if (t) { goto L_002CE85C; } }
L_002CE810:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE81Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002CE81Cu) [[unlikely]] return; }
L_002CE81C:
    set32(c.r[5], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CE848; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    mmi::pminw(c.r[2], c.r[2], c.r[17]);
    set32(c.r[6], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[20].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 52u)));  goto L_002CE84C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE848u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002CE848u) [[unlikely]] return; }
L_002CE848:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 1;
L_002CE84C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE854u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002CE854u) [[unlikely]] return; }
L_002CE854:
    st32((c.r[18].w[0] + 52u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 48u), c.r[17].w[0]);
    c.budget -= 2;
L_002CE85C:
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 1;
L_002CE860:
    set32(c.r[5], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE870u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002CE870u) [[unlikely]] return; }
L_002CE870:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002CE8A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[4].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002CE8CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE8C4u);  if (depth < kMaxDepth) unit_0073(c, 253u, depth + 1u); else { c.pc = 0x002CE530u; return; } if (c.pc != 0x002CE8C4u) [[unlikely]] return; }
L_002CE8C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002CE8E0; } }
L_002CE8CC:
    set32(c.r[6], c.r[5].w[0] + 112u);
    set32(c.r[4], c.r[2].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE8DCu); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_005F(c, 23u, depth + 1u); else { c.pc = 0x0027C400u; return; } if (c.pc != 0x002CE8DCu) [[unlikely]] return; }
L_002CE8DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002CE8E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CE8F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CE94C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 14800u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE924u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002CE924u) [[unlikely]] return; }
L_002CE924:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE930u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 369u, depth + 1u); else { c.pc = 0x002AAF80u; return; } if (c.pc != 0x002CE930u) [[unlikely]] return; }
L_002CE930:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002CE950; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE94Cu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002CE94Cu) [[unlikely]] return; }
L_002CE94C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002CE950:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CE970:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 32136u);  c.pc = t; return; }
L_002CE980:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB1A0u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 411u, depth); }
L_002CE990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CE9ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 418u, depth + 1u); else { c.pc = 0x002BB240u; return; } if (c.pc != 0x002CE9ACu) [[unlikely]] return; }
L_002CE9AC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_002CE9BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CEAF8; } }
L_002CE9BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_002CE9D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CEAF8; } }
L_002CE9D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002CEAD8; } }
L_002CE9D8:
    set32(c.r[7], c.r[3].w[0] << 5);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[8], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.budget -= 8;
    if (c.r[6].d[0] == c.r[4].d[0]) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_002CEAD8; }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 2u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_002CEAD4; } }
    c.r[6].d[0] = ld16((c.r[8].w[0] + 4u));
    c.r[4].d[0] = ld16((c.r[7].w[0] + 4u));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_002CEAD4; } }
    c.r[6].d[0] = ld16((c.r[8].w[0] + 6u));
    c.r[4].d[0] = ld16((c.r[7].w[0] + 6u));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_002CEAD4; } }
    c.r[6].d[0] = ld16((c.r[8].w[0] + 8u));
    c.r[4].d[0] = ld16((c.r[7].w[0] + 8u));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_002CEAD4; } }
    c.r[6].d[0] = ld16((c.r[8].w[0] + 10u));
    c.r[4].d[0] = ld16((c.r[7].w[0] + 10u));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_002CEAD4; } }
    c.f[1] = ld32((c.r[8].w[0] + 16u));
    c.f[0] = ld32((c.r[7].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CEA60; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CEA60:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002CEA80; } }
    c.f[1] = ld32((c.r[8].w[0] + 20u));
    c.f[0] = ld32((c.r[7].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CEA80; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CEA80:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002CEAA0; } }
    c.f[1] = ld32((c.r[8].w[0] + 24u));
    c.f[0] = ld32((c.r[7].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CEAA0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CEAA0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[4].d[0] ^ 1ull;  goto L_002CEAC4; }
    c.f[1] = ld32((c.r[8].w[0] + 28u));
    c.f[0] = ld32((c.r[7].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CEAC0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CEAC0:
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 1;
L_002CEAC4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002CEAD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CEAF8; } }
L_002CEAD4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_002CEAD8:
    c.r[4].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CE9D8u | kUnwind; return; } goto L_002CE9D8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEAF8u); set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CEAF8u) [[unlikely]] return; }
L_002CEAF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CEB10:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEB34u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 424u, depth + 1u); else { c.pc = 0x002BB2D0u; return; } if (c.pc != 0x002CEB34u) [[unlikely]] return; }
L_002CEB34:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 108u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEB48u); st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x002CEB48u) [[unlikely]] return; }
L_002CEB48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002CEBD0; } }
L_002CEB50:
    set32(c.r[3], c.r[16].w[0] << 5);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEB64u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 92u, depth + 1u); else { c.pc = 0x001FD320u; return; } if (c.pc != 0x002CEB64u) [[unlikely]] return; }
L_002CEB64:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEB70u); set32(c.r[5], c.r[19].w[0] + 2u);  if (depth < kMaxDepth) unit_003F(c, 92u, depth + 1u); else { c.pc = 0x001FD320u; return; } if (c.pc != 0x002CEB70u) [[unlikely]] return; }
L_002CEB70:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEB7Cu); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002CEB7Cu) [[unlikely]] return; }
L_002CEB7C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEB88u); set32(c.r[5], c.r[19].w[0] + 6u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002CEB88u) [[unlikely]] return; }
L_002CEB88:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEB94u); set32(c.r[5], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002CEB94u) [[unlikely]] return; }
L_002CEB94:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEBA0u); set32(c.r[5], c.r[19].w[0] + 10u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002CEBA0u) [[unlikely]] return; }
L_002CEBA0:
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEBCCu); st32((c.r[29].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_0062(c, 160u, depth + 1u); else { c.pc = 0x002895A0u; return; } if (c.pc != 0x002CEBCCu) [[unlikely]] return; }
L_002CEBCC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002CEBD0:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CEB50u | kUnwind; return; } goto L_002CEB50; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEBF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CEBF4u) [[unlikely]] return; }
L_002CEBF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002CEC10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEC2Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 425u, depth + 1u); else { c.pc = 0x002BB2E0u; return; } if (c.pc != 0x002CEC2Cu) [[unlikely]] return; }
L_002CEC2C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_002CEC3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CEC50; } }
L_002CEC3C:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEC4Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CEC4Cu) [[unlikely]] return; }
L_002CEC4C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002CEC50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CEC70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEC90u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 427u, depth + 1u); else { c.pc = 0x002BB310u; return; } if (c.pc != 0x002CEC90u) [[unlikely]] return; }
L_002CEC90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEC98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x002CEC98u) [[unlikely]] return; }
L_002CEC98:
    set32(c.r[17], ld32((c.r[18].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002CED0C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[18].w[0] + 20u), c.r[16].w[0]);  goto L_002CECE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CECB8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CECB8u) [[unlikely]] return; }
L_002CECB8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CECC8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CECC8u) [[unlikely]] return; }
L_002CECC8:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CECE4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CECE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CECE4u) [[unlikely]] return; }
L_002CECE4:
    st32((c.r[18].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 1;
L_002CECE8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002CED08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CECF8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CECF8u) [[unlikely]] return; }
L_002CECF8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CED08u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CED08u) [[unlikely]] return; }
L_002CED08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002CED0C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CED20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CED40u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 428u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x002CED40u) [[unlikely]] return; }
L_002CED40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CED4Cu); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x002CED4Cu) [[unlikely]] return; }
L_002CED4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002CEDFC; } }
L_002CED54:
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CED6Cu); st32((c.r[29].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_003F(c, 93u, depth + 1u); else { c.pc = 0x001FD330u; return; } if (c.pc != 0x002CED6Cu) [[unlikely]] return; }
L_002CED6C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CED78u); set32(c.r[5], c.r[29].w[0] + 66u);  if (depth < kMaxDepth) unit_003F(c, 93u, depth + 1u); else { c.pc = 0x001FD330u; return; } if (c.pc != 0x002CED78u) [[unlikely]] return; }
L_002CED78:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CED84u); set32(c.r[5], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002CED84u) [[unlikely]] return; }
L_002CED84:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CED90u); set32(c.r[5], c.r[29].w[0] + 70u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002CED90u) [[unlikely]] return; }
L_002CED90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CED9Cu); set32(c.r[5], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002CED9Cu) [[unlikely]] return; }
L_002CED9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEDA8u); set32(c.r[5], c.r[29].w[0] + 74u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002CEDA8u) [[unlikely]] return; }
L_002CEDA8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEDB4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 165u, depth + 1u); else { c.pc = 0x00289600u; return; } if (c.pc != 0x002CEDB4u) [[unlikely]] return; }
L_002CEDB4:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 16u)));  goto L_002CEDDC; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_002CEDD0; }
    set32(c.r[5], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002CEDD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEDD8u); set32(c.r[4], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_0073(c, 320u, depth + 1u); else { c.pc = 0x002CEE70u; return; } if (c.pc != 0x002CEDD8u) [[unlikely]] return; }
L_002CEDD8:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_002CEDDC:
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEDF8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0073(c, 319u, depth + 1u); else { c.pc = 0x002CEE30u; return; } if (c.pc != 0x002CEDF8u) [[unlikely]] return; }
L_002CEDF8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002CEDFC:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CED54u | kUnwind; return; } goto L_002CED54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEE14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x002CEE14u) [[unlikely]] return; }
L_002CEE14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002CEE30:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 4u));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 6u));
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 8u));
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 10u));
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0] + 16u) & ~15u, c.r[3]);  c.pc = t; return; }
L_002CEE70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002CEF20; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002CEF0C; }
    set32(c.r[4], c.r[17].w[0] << 5);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEEA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002CEEA8u) [[unlikely]] return; }
L_002CEEA8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002CEEFC; } }
L_002CEEB4:
    set32(c.r[4], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 4u));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 6u));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 8u));
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 10u));
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 18;
L_002CEEFC:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CEEB4u | kUnwind; return; } goto L_002CEEB4; }
L_002CEF0C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEF18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002CEF18u) [[unlikely]] return; }
L_002CEF18:
    st32((c.r[18].w[0]), c.r[16].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 2;
L_002CEF20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CEF40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 60u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEF5Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002CEF5Cu) [[unlikely]] return; }
L_002CEF5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CEFDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEF6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x002CEF6Cu) [[unlikely]] return; }
L_002CEF6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14896u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 20u), 0u);  if (t) { goto L_002CEFA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEF98u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CEF98u) [[unlikely]] return; }
L_002CEF98:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CEFA8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CEFA8u) [[unlikely]] return; }
L_002CEFA8:
    set32(c.r[5], c.r[16].w[0] + 36u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[16].w[0] + 60u);
    c.budget -= 3;
L_002CEFB4:
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 12u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CEFB4u | kUnwind; return; } goto L_002CEFB4; } }
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 28u), 0u);
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_002CEFDC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CF000:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CF07C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_002CF064; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF034u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CF034u) [[unlikely]] return; }
L_002CF034:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF044u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CF044u) [[unlikely]] return; }
L_002CF044:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CF060; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF060u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CF060u) [[unlikely]] return; }
L_002CF060:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_002CF064:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002CF080; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF07Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002CF07Cu) [[unlikely]] return; }
L_002CF07C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002CF080:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CF0A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF0C0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 446u, depth + 1u); else { c.pc = 0x002BB4A0u; return; } if (c.pc != 0x002CF0C0u) [[unlikely]] return; }
L_002CF0C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002CF178; } }
L_002CF0C8:
    set32(c.r[3], c.r[16].w[0] << 5);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 92u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[29].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    st16((c.r[29].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 4u));
    st16((c.r[29].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 6u));
    st16((c.r[29].w[0] + 70u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8u));
    st16((c.r[29].w[0] + 72u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 10u));
    st16((c.r[29].w[0] + 74u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    st32((c.r[29].w[0] + 92u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 30;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 16u)));  goto L_002CF158; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_002CF14C; }
    set32(c.r[5], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002CF14C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF154u); set32(c.r[4], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0073(c, 320u, depth + 1u); else { c.pc = 0x002CEE70u; return; } if (c.pc != 0x002CF154u) [[unlikely]] return; }
L_002CF154:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_002CF158:
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF174u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0073(c, 319u, depth + 1u); else { c.pc = 0x002CEE30u; return; } if (c.pc != 0x002CF174u) [[unlikely]] return; }
L_002CF174:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002CF178:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { st32((c.r[29].w[0] + 80u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CF0C8u | kUnwind; return; } goto L_002CF0C8; }
    set32(c.r[16], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[3].d[0] = ld16((c.r[18].w[0] + 24u));  goto L_002CF1FC; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[18].w[0] + 20u)));  goto L_002CF1D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF1A8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CF1A8u) [[unlikely]] return; }
L_002CF1A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF1B8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CF1B8u) [[unlikely]] return; }
L_002CF1B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CF1D4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF1D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CF1D4u) [[unlikely]] return; }
L_002CF1D4:
    set32(c.r[16], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 1;
L_002CF1D8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 20u), c.r[16].w[0]);  if (t) { goto L_002CF1F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF1E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CF1E8u) [[unlikely]] return; }
L_002CF1E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF1F8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CF1F8u) [[unlikely]] return; }
L_002CF1F8:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 24u));
    c.budget -= 1;
L_002CF1FC:
    st16((c.r[17].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002CF220:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 60u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF24Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002CF24Cu) [[unlikely]] return; }
L_002CF24C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CF2CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF25Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x002CF25Cu) [[unlikely]] return; }
L_002CF25C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14896u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[16].w[0] + 20u), 0u);  if (t) { goto L_002CF298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF288u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CF288u) [[unlikely]] return; }
L_002CF288:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF298u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CF298u) [[unlikely]] return; }
L_002CF298:
    set32(c.r[5], c.r[16].w[0] + 36u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[16].w[0] + 60u);
    c.budget -= 3;
L_002CF2A4:
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 12u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CF2A4u | kUnwind; return; } goto L_002CF2A4; } }
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 28u), 0u);
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_002CF2CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF2DCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 335u, depth + 1u); else { c.pc = 0x002CF0A0u; return; } if (c.pc != 0x002CF2DCu) [[unlikely]] return; }
L_002CF2DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002CF300:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CF3C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 14896u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF330u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0072(c, 375u, depth + 1u); else { c.pc = 0x002CB290u; return; } if (c.pc != 0x002CF330u) [[unlikely]] return; }
L_002CF330:
    set32(c.r[2], c.r[17].w[0] + 20u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 8u);  goto L_002CF380; }
    set32(c.r[18], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002CF37C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF350u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CF350u) [[unlikely]] return; }
L_002CF350:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF360u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CF360u) [[unlikely]] return; }
L_002CF360:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CF37C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF37Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CF37Cu) [[unlikely]] return; }
L_002CF37C:
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_002CF380:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002CF3A0; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF39C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF39Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002CF39Cu) [[unlikely]] return; }
L_002CF39C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002CF3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF3A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x002CF3A8u) [[unlikely]] return; }
L_002CF3A8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002CF3C8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF3C4u); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002CF3C4u) [[unlikely]] return; }
L_002CF3C4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002CF3C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CF3E0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF420u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0071(c, 352u, depth + 1u); else { c.pc = 0x002C7D90u; return; } if (c.pc != 0x002CF420u) [[unlikely]] return; }
L_002CF420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF428u); set32(c.r[4], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002CF428u) [[unlikely]] return; }
L_002CF428:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 312u);
    set32(c.r[7], c.r[29].w[0] + 308u);
    set32(c.r[8], c.r[29].w[0] + 224u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    set32(c.r[9], c.r[29].w[0] + 319u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF450u); set32(c.r[10], c.r[29].w[0] + 304u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CF450u) [[unlikely]] return; }
L_002CF450:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CF468; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF460u); set32(c.r[4], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002CF460u) [[unlikely]] return; }
L_002CF460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CFA00; } }
L_002CF468:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], 0u + 116u);  goto L_002CF598; }
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 20u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CF594; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 22u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CF594; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[18].w[0] + 8u);  if (t) { goto L_002CF4D8; } }
    c.r[4].d[0] = ld8((c.r[19].w[0] + 28u));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CF584; }
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002CF4D8; } }
    c.r[4].d[0] = ld8((c.r[19].w[0] + 29u));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[2].w[0] + 12u)));  goto L_002CF4E4; }
L_002CF4D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF584; } }
L_002CF4E4:
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[5].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_002CF574; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002CF50C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002CF50C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CF584; } }
L_002CF50C:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF574; } }
L_002CF518:
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CF584; }
    set32(c.r[4], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002CF568; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 60u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002CF568; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 61u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 33u));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002CF574; }
L_002CF568:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF584; } }
L_002CF574:
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CF518u | kUnwind; return; } goto L_002CF518; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002CF584:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CF594; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[19].w[0] + 27u));  if (t) { goto L_002CF5CC; } }
L_002CF594:
    set32(c.r[4], 0u + 116u);
    c.budget -= 1;
L_002CF598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF5A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002CF5A0u) [[unlikely]] return; }
L_002CF5A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = c.r[2].d[0] + 0ull;  goto L_002CF5C8; }
    c.r[5].d[0] = ld16((c.r[19].w[0] + 20u));
    set32(c.r[8], 0u + 1u);
    c.r[6].d[0] = ld16((c.r[19].w[0] + 22u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[19].w[0] + 28u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF5C4u); c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 242u, depth + 1u); else { c.pc = 0x002C6150u; return; } if (c.pc != 0x002CF5C4u) [[unlikely]] return; }
L_002CF5C4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002CF5C8:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 27u));
    c.budget -= 1;
L_002CF5CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002CF648; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 22u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld16((c.r[19].w[0] + 24u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[22].d[0] = c.lo.d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF5ECu); set32(c.r[4], c.r[22].w[0] << 3);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002CF5ECu) [[unlikely]] return; }
L_002CF5EC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_002CF608; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF600u); set32(c.r[4], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002CF600u) [[unlikely]] return; }
L_002CF600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CFA00; } }
L_002CF608:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF614u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 4u, depth + 1u); else { c.pc = 0x002D00C0u; return; } if (c.pc != 0x002CF614u) [[unlikely]] return; }
L_002CF614:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002CF634; } }
L_002CF620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF628u); set32(c.r[5], c.r[29].w[0] + 300u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x002CF628u) [[unlikely]] return; }
L_002CF628:
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_002CF634:
    c.r[2].d[0] = c.r[16].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CF620u | kUnwind; return; } goto L_002CF620; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002CF668; } }
L_002CF648:
    c.r[5].d[0] = ld16((c.r[19].w[0] + 20u));
    c.r[4].d[0] = ld16((c.r[19].w[0] + 22u));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 24u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 26u));
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[20].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
L_002CF668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF670u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002CF670u) [[unlikely]] return; }
L_002CF670:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_002CF68C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF684u); set32(c.r[4], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002CF684u) [[unlikely]] return; }
L_002CF684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CFA00; } }
L_002CF68C:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF698u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 3u, depth + 1u); else { c.pc = 0x0027C020u; return; } if (c.pc != 0x002CF698u) [[unlikely]] return; }
L_002CF698:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[22], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[22].w[0], c.r[5].w[0]);
    c.r[20].d[0] = c.lo.d[0];
    c.r[2].d[0] = ld8((c.r[19].w[0] + 27u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[30], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_002CF818; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 22u));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld16((c.r[19].w[0] + 24u));
    c.r[4].d[0] = ld8((c.r[19].w[0] + 26u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] << 3);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], c.r[5].w[0] + 512u);  if (t) { goto L_002CF77C; } }
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[21].d[0] = 0ull + 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);  if (t) { goto L_002CF764; } }
L_002CF6F4:
    c.r[23].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[30].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (t) { goto L_002CF750; } }
L_002CF70C:
    set32(c.r[5], ld32((c.r[29].w[0] + 208u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld64((c.r[2].w[0]));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] - c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF740u); set32(c.r[6], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 424u, depth + 1u); else { c.pc = 0x002CFE90u; return; } if (c.pc != 0x002CF740u) [[unlikely]] return; }
L_002CF740:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[23], c.r[23].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[20].w[0]);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.budget -= 4;
L_002CF750:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 22u));
    c.r[3].d[0] = c.r[23].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { mmi::mult(c, 0, c.r[21].w[0], c.r[2].w[0]); c.r[2].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CF70Cu | kUnwind; return; } goto L_002CF70C; }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002CF764:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 24u));
    c.r[3].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CF6F4u | kUnwind; return; } goto L_002CF6F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002CF934; } }
L_002CF77C:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[21].d[0] = 0ull + 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);  if (t) { goto L_002CF800; } }
L_002CF790:
    c.r[23].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[30].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (t) { goto L_002CF7EC; } }
L_002CF7A8:
    set32(c.r[5], ld32((c.r[29].w[0] + 192u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld64((c.r[2].w[0]));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] - c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF7DCu); set32(c.r[6], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 420u, depth + 1u); else { c.pc = 0x002CFDD0u; return; } if (c.pc != 0x002CF7DCu) [[unlikely]] return; }
L_002CF7DC:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[23], c.r[23].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[20].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.budget -= 4;
L_002CF7EC:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 22u));
    c.r[3].d[0] = c.r[23].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { mmi::mult(c, 0, c.r[21].w[0], c.r[2].w[0]); c.r[2].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CF7A8u | kUnwind; return; } goto L_002CF7A8; }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002CF800:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 24u));
    c.r[3].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CF790u | kUnwind; return; } goto L_002CF790; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF930; } }
L_002CF818:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 26u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002CF8B0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[20].w[0] << 1);  if (t) { goto L_002CF898; } }
L_002CF834:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[30].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_002CF884; } }
L_002CF84C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002CF868; } }
L_002CF854:
    set32(c.r[4], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[4].d[0] & 65535ull;
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] + c.r[22].w[0]);
    c.budget -= 5;
L_002CF868:
    c.r[4].d[0] = ld16((c.r[19].w[0] + 20u));
    c.r[5].d[0] = c.r[7].d[0] & 65535ull;
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[4].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[3].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CF854u | kUnwind; return; } goto L_002CF854; }
    set32(c.r[9], c.r[9].w[0] - c.r[6].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 2;
L_002CF884:
    c.r[4].d[0] = ld16((c.r[19].w[0] + 22u));
    c.r[4].d[0] = c.r[8].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CF84Cu | kUnwind; return; } goto L_002CF84C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_002CF898:
    c.r[4].d[0] = ld16((c.r[19].w[0] + 24u));
    c.r[4].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[19].w[0] + 22u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CF834u | kUnwind; return; } goto L_002CF834; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CF930; } }
L_002CF8B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[20].w[0] << 1);  if (t) { goto L_002CF920; } }
L_002CF8BC:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[30].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_002CF90C; } }
L_002CF8D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002CF8F0; } }
L_002CF8DC:
    set32(c.r[4], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[4].d[0] & 65535ull;
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + 2u);
    set32(c.r[9], c.r[9].w[0] + c.r[22].w[0]);
    c.budget -= 5;
L_002CF8F0:
    c.r[4].d[0] = ld16((c.r[19].w[0] + 20u));
    c.r[5].d[0] = c.r[7].d[0] & 65535ull;
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[4].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[3].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CF8DCu | kUnwind; return; } goto L_002CF8DC; }
    set32(c.r[9], c.r[9].w[0] - c.r[6].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 2;
L_002CF90C:
    c.r[4].d[0] = ld16((c.r[19].w[0] + 22u));
    c.r[4].d[0] = c.r[8].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CF8D4u | kUnwind; return; } goto L_002CF8D4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_002CF920:
    c.r[4].d[0] = ld16((c.r[19].w[0] + 24u));
    c.r[4].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[19].w[0] + 22u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CF8BCu | kUnwind; return; } goto L_002CF8BC; }
L_002CF930:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002CF934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF93Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002CF93Cu) [[unlikely]] return; }
L_002CF93C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF948u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002CF948u) [[unlikely]] return; }
L_002CF948:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 24u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_002CF9A0; }
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld16((c.r[19].w[0] + 20u));
    c.r[4].d[0] = ld16((c.r[19].w[0] + 22u));
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_002CF98C; } }
L_002CF97C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 3u);
    c.budget -= 4;
L_002CF98C:
    c.r[2].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[3].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CF97Cu | kUnwind; return; } goto L_002CF97C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[19].w[0] + 4u);  if (t) { goto L_002CF9F4; } }
L_002CF9A0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CF9F0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld16((c.r[19].w[0] + 20u));
    c.r[4].d[0] = ld16((c.r[19].w[0] + 22u));
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_002CF9E4; } }
L_002CF9CC:
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 6;
L_002CF9E4:
    c.r[2].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[3].w[0] + 1u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CF9CCu | kUnwind; return; } goto L_002CF9CC; }
L_002CF9F0:
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 1;
L_002CF9F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CF9FCu);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002CF9FCu) [[unlikely]] return; }
L_002CF9FC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002CFA00:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_002CFA30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA50u); set32(c.r[5], c.r[5].w[0] + 32160u);  if (depth < kMaxDepth) unit_0047(c, 323u, depth + 1u); else { c.pc = 0x0021EE60u; return; } if (c.pc != 0x002CFA50u) [[unlikely]] return; }
L_002CFA50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002CFABC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA68u); set32(c.r[5], c.r[5].w[0] + 32165u);  if (depth < kMaxDepth) unit_0047(c, 323u, depth + 1u); else { c.pc = 0x0021EE60u; return; } if (c.pc != 0x002CFA68u) [[unlikely]] return; }
L_002CFA68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CFAB8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA80u); set32(c.r[5], c.r[5].w[0] + 32170u);  if (depth < kMaxDepth) unit_0047(c, 323u, depth + 1u); else { c.pc = 0x0021EE60u; return; } if (c.pc != 0x002CFA80u) [[unlikely]] return; }
L_002CFA80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CFAB8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFA98u); set32(c.r[5], c.r[5].w[0] + 32176u);  if (depth < kMaxDepth) unit_0047(c, 323u, depth + 1u); else { c.pc = 0x0021EE60u; return; } if (c.pc != 0x002CFA98u) [[unlikely]] return; }
L_002CFA98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CFAB8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFAB0u); set32(c.r[5], c.r[5].w[0] + 32181u);  if (depth < kMaxDepth) unit_0047(c, 323u, depth + 1u); else { c.pc = 0x0021EE60u; return; } if (c.pc != 0x002CFAB0u) [[unlikely]] return; }
L_002CFAB0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CFABC; }
L_002CFAB8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002CFABC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CFAD0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB24u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CFB24u) [[unlikely]] return; }
L_002CFB24:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB38u); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_005F(c, 5u, depth + 1u); else { c.pc = 0x0027C040u; return; } if (c.pc != 0x002CFB38u) [[unlikely]] return; }
L_002CFB38:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 140u));
    set32(c.r[2], 0u + 474u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002CFB50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CFD9C; } }
L_002CFB50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB58u); set32(c.r[5], c.r[29].w[0] + 143u);  if (depth < kMaxDepth) unit_0058(c, 283u, depth + 1u); else { c.pc = 0x002623F0u; return; } if (c.pc != 0x002CFB58u) [[unlikely]] return; }
L_002CFB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB60u); set32(c.r[4], c.r[20].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002CFB60u) [[unlikely]] return; }
L_002CFB60:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB6Cu); set32(c.r[5], c.r[20].w[0] + 26u);  if (depth < kMaxDepth) unit_0058(c, 283u, depth + 1u); else { c.pc = 0x002623F0u; return; } if (c.pc != 0x002CFB6Cu) [[unlikely]] return; }
L_002CFB6C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB78u); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_005F(c, 5u, depth + 1u); else { c.pc = 0x0027C040u; return; } if (c.pc != 0x002CFB78u) [[unlikely]] return; }
L_002CFB78:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB84u); set32(c.r[5], c.r[20].w[0] + 20u);  if (depth < kMaxDepth) unit_005F(c, 5u, depth + 1u); else { c.pc = 0x0027C040u; return; } if (c.pc != 0x002CFB84u) [[unlikely]] return; }
L_002CFB84:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB90u); set32(c.r[5], c.r[20].w[0] + 22u);  if (depth < kMaxDepth) unit_005F(c, 5u, depth + 1u); else { c.pc = 0x0027C040u; return; } if (c.pc != 0x002CFB90u) [[unlikely]] return; }
L_002CFB90:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFB9Cu); set32(c.r[5], c.r[20].w[0] + 24u);  if (depth < kMaxDepth) unit_005F(c, 5u, depth + 1u); else { c.pc = 0x0027C040u; return; } if (c.pc != 0x002CFB9Cu) [[unlikely]] return; }
L_002CFB9C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFBA8u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x002CFBA8u) [[unlikely]] return; }
L_002CFBA8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFBB4u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x002CFBB4u) [[unlikely]] return; }
L_002CFBB4:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[21], ld32((c.r[2].w[0] + 7456u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 84u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFBD4u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CFBD4u) [[unlikely]] return; }
L_002CFBD4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFBE0u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x002CFBE0u) [[unlikely]] return; }
L_002CFBE0:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFBF8u); set32(c.r[5], 0u + 404u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CFBF8u) [[unlikely]] return; }
L_002CFBF8:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 143u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002CFC10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 27u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002CFC30; } }
L_002CFC10:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[20].w[0] + 4u);  goto L_002CFC20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 27u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002CFC30; } }
L_002CFC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFC28u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002CFC28u) [[unlikely]] return; }
L_002CFC28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CFD9C; } }
L_002CFC30:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 24u));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[20].w[0] + 26u));  goto L_002CFC50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFC48u); set32(c.r[4], c.r[20].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002CFC48u) [[unlikely]] return; }
L_002CFC48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CFD9C; } }
L_002CFC50:
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[20].w[0] + 4u);  goto L_002CFC68; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 4u);  goto L_002CFC78; }
    set32(c.r[4], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_002CFC68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFC70u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002CFC70u) [[unlikely]] return; }
L_002CFC70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CFD9C; } }
L_002CFC78:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CFC94; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002CFC94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_002CFCA0; } }
L_002CFC94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 25024u);  if (t) { goto L_002CFCA4; } }
L_002CFCA0:
    set32(c.r[3], c.r[3].w[0] + 25104u);
    c.budget -= 1;
L_002CFCA4:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[6], c.r[3].w[0] + 24u);
    set32(c.r[5], c.r[20].w[0] + 52u);
    set32(c.r[4], 0u + 6u);
    st8((c.r[20].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1u));
    st8((c.r[20].w[0] + 29u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    st8((c.r[20].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[20].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[20].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[20].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[20].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[20].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 19;
L_002CFCF0:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CFCF0u | kUnwind; return; } goto L_002CFCF0; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 20u));
    set32(c.r[6], c.r[20].w[0] + 52u);
    set32(c.r[5], c.r[16].w[0] + 24u);
    set32(c.r[4], 0u + 6u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 22u));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 28u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 29u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 30u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 23;
L_002CFD6C:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CFD6Cu | kUnwind; return; } goto L_002CFD6C; } }
    set32(c.r[4], c.r[20].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFD98u); st8((c.r[22].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002CFD98u) [[unlikely]] return; }
L_002CFD98:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002CFD9C:
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
L_002CFDD0:
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CFDD4:
    c.r[9].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 6;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_002CFE7C; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 20u));
    c.r[8].d[0] = c.r[11].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_002CFE7C; } }
    c.r[3].d[0] = c.r[9].d[0] & 128ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[10].d[0] = c.r[9].d[0] & 127ull;  if (t) { goto L_002CFE44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_002CFE28; } }
L_002CFE14:
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[8].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 5;
L_002CFE28:
    set32(c.r[3], c.r[10].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull; c.r[10].d[0] = c.r[3].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CFE14u | kUnwind; return; } goto L_002CFE14; } }
    c.r[3].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[3], c.r[11].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = c.r[3].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CFDD4u | kUnwind; return; } goto L_002CFDD4; } }
L_002CFE44:
    c.r[9].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { goto L_002CFE58; } }
L_002CFE50:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.budget -= 2;
L_002CFE58:
    c.r[8].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[3], c.r[10].w[0] - 1u);
    c.r[10].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CFE50u | kUnwind; return; } goto L_002CFE50; } }
    c.r[3].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[3], c.r[11].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = c.r[3].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CFDD4u | kUnwind; return; } goto L_002CFDD4; } }
L_002CFE7C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CFE90:
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CFE94:
    c.r[9].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 6;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_002CFF3C; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 20u));
    c.r[8].d[0] = c.r[11].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_002CFF3C; } }
    c.r[3].d[0] = c.r[9].d[0] & 128ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[10].d[0] = c.r[9].d[0] & 127ull;  if (t) { goto L_002CFF04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_002CFEE8; } }
L_002CFED4:
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[8].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 5;
L_002CFEE8:
    set32(c.r[3], c.r[10].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull; c.r[10].d[0] = c.r[3].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CFED4u | kUnwind; return; } goto L_002CFED4; } }
    c.r[3].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[3], c.r[11].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = c.r[3].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CFE94u | kUnwind; return; } goto L_002CFE94; } }
L_002CFF04:
    c.r[9].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { goto L_002CFF18; } }
L_002CFF10:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.budget -= 2;
L_002CFF18:
    c.r[8].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[3], c.r[10].w[0] - 1u);
    c.r[10].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CFF10u | kUnwind; return; } goto L_002CFF10; } }
    c.r[3].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[3], c.r[11].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = c.r[3].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002CFE94u | kUnwind; return; } goto L_002CFE94; } }
L_002CFF3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CFF50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CFFB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 14976u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002CFF98; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 7728u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_002CFF98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFF98u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x002CFF98u) [[unlikely]] return; }
L_002CFF98:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002CFFB8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFFB4u); set32(c.r[5], 0u + 100u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002CFFB4u) [[unlikely]] return; }
L_002CFFB4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002CFFB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CFFD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.budget -= 1;
L_002CFFD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 7728u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CFFF4u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021DEA0u; return; } if (c.pc != 0x002CFFF4u) [[unlikely]] return; }
L_002CFFF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 28u);
    set32(c.r[2], c.r[2].w[0] + 14976u);
    c.budget -= 3;
    [[clang::musttail]] return unit_0074(c, 1u, depth);
}

}
