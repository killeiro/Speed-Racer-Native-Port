#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000E[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15,
    0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72,
    0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0,
    0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0,
    87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 91, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94,
    0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107,
    0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156,
    0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0,
    0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 182, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0,
    0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0,
    0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0,
    0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0,
    0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0,
    236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247,
    0, 0, 248, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0,
    0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 258, 259, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 263, 0,
    264, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0,
    274, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 280,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0,
    0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 290,
    0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 296, 0, 0, 0, 297, 0, 298,
    0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 311, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0,
    0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0,
    0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0,
    327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0,
    0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0,
    340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0,
    366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0,
    369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0,
    374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0,
    380, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0,
    386, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0,
    0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0,
    0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403,
    0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0,
    416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0,
    0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0,
    427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0,
    432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0,
    436, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440,
};

void unit_000E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00138000;
    case 2u: goto L_00138030;
    case 3u: goto L_0013803C;
    case 4u: goto L_00138080;
    case 5u: goto L_001380AC;
    case 6u: goto L_001380C0;
    case 7u: goto L_001380F8;
    case 8u: goto L_00138100;
    case 9u: goto L_0013812C;
    case 10u: goto L_001381B0;
    case 11u: goto L_001381C8;
    case 12u: goto L_00138200;
    case 13u: goto L_0013824C;
    case 14u: goto L_00138258;
    case 15u: goto L_0013827C;
    case 16u: goto L_00138288;
    case 17u: goto L_001382AC;
    case 18u: goto L_001382B8;
    case 19u: goto L_00138380;
    case 20u: goto L_001384B4;
    case 21u: goto L_001384C0;
    case 22u: goto L_001384DC;
    case 23u: goto L_001384F8;
    case 24u: goto L_001385DC;
    case 25u: goto L_001385EC;
    case 26u: goto L_0013863C;
    case 27u: goto L_00138670;
    case 28u: goto L_00138740;
    case 29u: goto L_0013883C;
    case 30u: goto L_00138880;
    case 31u: goto L_0013888C;
    case 32u: goto L_001388C0;
    case 33u: goto L_00138900;
    case 34u: goto L_00138970;
    case 35u: goto L_00138A20;
    case 36u: goto L_00138A30;
    case 37u: goto L_00138A4C;
    case 38u: goto L_00138A58;
    case 39u: goto L_00138A68;
    case 40u: goto L_00138A88;
    case 41u: goto L_00138A94;
    case 42u: goto L_00138AA0;
    case 43u: goto L_00138AB4;
    case 44u: goto L_00138AC0;
    case 45u: goto L_00138AE0;
    case 46u: goto L_00138B30;
    case 47u: goto L_00138B5C;
    case 48u: goto L_00138B8C;
    case 49u: goto L_00138B98;
    case 50u: goto L_00138BB0;
    case 51u: goto L_00138BD0;
    case 52u: goto L_00138C00;
    case 53u: goto L_00138C44;
    case 54u: goto L_00138C70;
    case 55u: goto L_00138CA0;
    case 56u: goto L_00138CAC;
    case 57u: goto L_00138CC4;
    case 58u: goto L_00138CE8;
    case 59u: goto L_00138D10;
    case 60u: goto L_00138D20;
    case 61u: goto L_00138D34;
    case 62u: goto L_00138D64;
    case 63u: goto L_00138D80;
    case 64u: goto L_00138DB0;
    case 65u: goto L_00138DDC;
    case 66u: goto L_00138DFC;
    case 67u: goto L_00138E10;
    case 68u: goto L_00138E44;
    case 69u: goto L_00138E80;
    case 70u: goto L_00138ECC;
    case 71u: goto L_00138EE4;
    case 72u: goto L_00138EFC;
    case 73u: goto L_00138F14;
    case 74u: goto L_00138F30;
    case 75u: goto L_00138F5C;
    case 76u: goto L_00138F88;
    case 77u: goto L_00138FA0;
    case 78u: goto L_00138FB4;
    case 79u: goto L_00138FC8;
    case 80u: goto L_00138FF0;
    case 81u: goto L_00139014;
    case 82u: goto L_00139030;
    case 83u: goto L_0013903C;
    case 84u: goto L_00139040;
    case 85u: goto L_00139054;
    case 86u: goto L_0013906C;
    case 87u: goto L_00139080;
    case 88u: goto L_00139090;
    case 89u: goto L_001390A0;
    case 90u: goto L_001390C0;
    case 91u: goto L_001390C4;
    case 92u: goto L_001390D0;
    case 93u: goto L_001390E0;
    case 94u: goto L_001390FC;
    case 95u: goto L_00139110;
    case 96u: goto L_00139130;
    case 97u: goto L_001391A8;
    case 98u: goto L_001391D0;
    case 99u: goto L_00139218;
    case 100u: goto L_00139230;
    case 101u: goto L_0013925C;
    case 102u: goto L_00139264;
    case 103u: goto L_00139280;
    case 104u: goto L_001392AC;
    case 105u: goto L_001392C4;
    case 106u: goto L_001392E0;
    case 107u: goto L_001392FC;
    case 108u: goto L_00139308;
    case 109u: goto L_00139360;
    case 110u: goto L_001393B8;
    case 111u: goto L_001393E0;
    case 112u: goto L_00139428;
    case 113u: goto L_00139440;
    case 114u: goto L_0013946C;
    case 115u: goto L_00139490;
    case 116u: goto L_001394C8;
    case 117u: goto L_001394F0;
    case 118u: goto L_00139538;
    case 119u: goto L_00139550;
    case 120u: goto L_00139568;
    case 121u: goto L_00139590;
    case 122u: goto L_001395C8;
    case 123u: goto L_001395E0;
    case 124u: goto L_0013962C;
    case 125u: goto L_00139644;
    case 126u: goto L_0013965C;
    case 127u: goto L_00139674;
    case 128u: goto L_001396B8;
    case 129u: goto L_001396E0;
    case 130u: goto L_001396F4;
    case 131u: goto L_00139710;
    case 132u: goto L_00139730;
    case 133u: goto L_00139760;
    case 134u: goto L_00139790;
    case 135u: goto L_001397A0;
    case 136u: goto L_001397C4;
    case 137u: goto L_001397E0;
    case 138u: goto L_001397F8;
    case 139u: goto L_00139810;
    case 140u: goto L_0013983C;
    case 141u: goto L_00139840;
    case 142u: goto L_0013984C;
    case 143u: goto L_0013986C;
    case 144u: goto L_00139878;
    case 145u: goto L_001398B0;
    case 146u: goto L_001398D0;
    case 147u: goto L_00139910;
    case 148u: goto L_00139928;
    case 149u: goto L_00139960;
    case 150u: goto L_001399A4;
    case 151u: goto L_001399E0;
    case 152u: goto L_00139A1C;
    case 153u: goto L_00139A90;
    case 154u: goto L_00139ABC;
    case 155u: goto L_00139AE4;
    case 156u: goto L_00139AFC;
    case 157u: goto L_00139B08;
    case 158u: goto L_00139B24;
    case 159u: goto L_00139B3C;
    case 160u: goto L_00139B60;
    case 161u: goto L_00139BA4;
    case 162u: goto L_00139C00;
    case 163u: goto L_00139C60;
    case 164u: goto L_00139C68;
    case 165u: goto L_00139CB4;
    case 166u: goto L_00139CF4;
    case 167u: goto L_00139D40;
    case 168u: goto L_00139DAC;
    case 169u: goto L_00139DDC;
    case 170u: goto L_00139E38;
    case 171u: goto L_00139E3C;
    case 172u: goto L_00139E64;
    case 173u: goto L_00139E84;
    case 174u: goto L_00139EC4;
    case 175u: goto L_00139F00;
    case 176u: goto L_00139FA0;
    case 177u: goto L_00139FC0;
    case 178u: goto L_00139FD0;
    case 179u: goto L_00139FE0;
    case 180u: goto L_00139FF0;
    case 181u: goto L_0013A03C;
    case 182u: goto L_0013A040;
    case 183u: goto L_0013A048;
    case 184u: goto L_0013A060;
    case 185u: goto L_0013A080;
    case 186u: goto L_0013A0C0;
    case 187u: goto L_0013A0D0;
    case 188u: goto L_0013A0EC;
    case 189u: goto L_0013A10C;
    case 190u: goto L_0013A138;
    case 191u: goto L_0013A148;
    case 192u: goto L_0013A160;
    case 193u: goto L_0013A1A0;
    case 194u: goto L_0013A1B0;
    case 195u: goto L_0013A1C4;
    case 196u: goto L_0013A1D8;
    case 197u: goto L_0013A1F0;
    case 198u: goto L_0013A214;
    case 199u: goto L_0013A228;
    case 200u: goto L_0013A240;
    case 201u: goto L_0013A264;
    case 202u: goto L_0013A278;
    case 203u: goto L_0013A290;
    case 204u: goto L_0013A2B4;
    case 205u: goto L_0013A2C8;
    case 206u: goto L_0013A2E4;
    case 207u: goto L_0013A2F0;
    case 208u: goto L_0013A328;
    case 209u: goto L_0013A340;
    case 210u: goto L_0013A34C;
    case 211u: goto L_0013A380;
    case 212u: goto L_0013A39C;
    case 213u: goto L_0013A3B4;
    case 214u: goto L_0013A3D4;
    case 215u: goto L_0013A3E0;
    case 216u: goto L_0013A3EC;
    case 217u: goto L_0013A400;
    case 218u: goto L_0013A420;
    case 219u: goto L_0013A460;
    case 220u: goto L_0013A490;
    case 221u: goto L_0013A4B8;
    case 222u: goto L_0013A4F0;
    case 223u: goto L_0013A524;
    case 224u: goto L_0013A540;
    case 225u: goto L_0013A564;
    case 226u: goto L_0013A588;
    case 227u: goto L_0013A594;
    case 228u: goto L_0013A5E0;
    case 229u: goto L_0013A5F8;
    case 230u: goto L_0013A60C;
    case 231u: goto L_0013A620;
    case 232u: goto L_0013A63C;
    case 233u: goto L_0013A64C;
    case 234u: goto L_0013A664;
    case 235u: goto L_0013A670;
    case 236u: goto L_0013A680;
    case 237u: goto L_0013A688;
    case 238u: goto L_0013A6A0;
    case 239u: goto L_0013A6B0;
    case 240u: goto L_0013A6BC;
    case 241u: goto L_0013A6D0;
    case 242u: goto L_0013A6E4;
    case 243u: goto L_0013A6F4;
    case 244u: goto L_0013A710;
    case 245u: goto L_0013A72C;
    case 246u: goto L_0013A770;
    case 247u: goto L_0013A77C;
    case 248u: goto L_0013A788;
    case 249u: goto L_0013A798;
    case 250u: goto L_0013A7A0;
    case 251u: goto L_0013A7B8;
    case 252u: goto L_0013A7C8;
    case 253u: goto L_0013A7D4;
    case 254u: goto L_0013A7E8;
    case 255u: goto L_0013A7F8;
    case 256u: goto L_0013A814;
    case 257u: goto L_0013A830;
    case 258u: goto L_0013A838;
    case 259u: goto L_0013A83C;
    case 260u: goto L_0013A840;
    case 261u: goto L_0013A85C;
    case 262u: goto L_0013A86C;
    case 263u: goto L_0013A878;
    case 264u: goto L_0013A880;
    case 265u: goto L_0013A888;
    case 266u: goto L_0013A898;
    case 267u: goto L_0013A8B4;
    case 268u: goto L_0013A8C8;
    case 269u: goto L_0013A8D8;
    case 270u: goto L_0013A920;
    case 271u: goto L_0013A940;
    case 272u: goto L_0013A950;
    case 273u: goto L_0013A970;
    case 274u: goto L_0013A980;
    case 275u: goto L_0013A990;
    case 276u: goto L_0013A99C;
    case 277u: goto L_0013A9D0;
    case 278u: goto L_0013A9E0;
    case 279u: goto L_0013A9F0;
    case 280u: goto L_0013A9FC;
    case 281u: goto L_0013AA50;
    case 282u: goto L_0013AA78;
    case 283u: goto L_0013AA90;
    case 284u: goto L_0013AA9C;
    case 285u: goto L_0013AAAC;
    case 286u: goto L_0013AAB4;
    case 287u: goto L_0013AACC;
    case 288u: goto L_0013AADC;
    case 289u: goto L_0013AAE8;
    case 290u: goto L_0013AAFC;
    case 291u: goto L_0013AB10;
    case 292u: goto L_0013AB20;
    case 293u: goto L_0013AB70;
    case 294u: goto L_0013ABCC;
    case 295u: goto L_0013ABD8;
    case 296u: goto L_0013ABE4;
    case 297u: goto L_0013ABF4;
    case 298u: goto L_0013ABFC;
    case 299u: goto L_0013AC0C;
    case 300u: goto L_0013AC2C;
    case 301u: goto L_0013AC3C;
    case 302u: goto L_0013AC50;
    case 303u: goto L_0013AC64;
    case 304u: goto L_0013ACE0;
    case 305u: goto L_0013AD0C;
    case 306u: goto L_0013AD24;
    case 307u: goto L_0013AD80;
    case 308u: goto L_0013ADC4;
    case 309u: goto L_0013ADDC;
    case 310u: goto L_0013ADF0;
    case 311u: goto L_0013ADF8;
    case 312u: goto L_0013AE50;
    case 313u: goto L_0013AEA0;
    case 314u: goto L_0013AECC;
    case 315u: goto L_0013AF38;
    case 316u: goto L_0013AF78;
    case 317u: goto L_0013AF84;
    case 318u: goto L_0013AF9C;
    case 319u: goto L_0013AFC0;
    case 320u: goto L_0013AFF4;
    case 321u: goto L_0013B010;
    case 322u: goto L_0013B024;
    case 323u: goto L_0013B038;
    case 324u: goto L_0013B03C;
    case 325u: goto L_0013B058;
    case 326u: goto L_0013B06C;
    case 327u: goto L_0013B080;
    case 328u: goto L_0013B094;
    case 329u: goto L_0013B0D0;
    case 330u: goto L_0013B100;
    case 331u: goto L_0013B110;
    case 332u: goto L_0013B134;
    case 333u: goto L_0013B150;
    case 334u: goto L_0013B174;
    case 335u: goto L_0013B18C;
    case 336u: goto L_0013B1B0;
    case 337u: goto L_0013B1C0;
    case 338u: goto L_0013B1E4;
    case 339u: goto L_0013B1F0;
    case 340u: goto L_0013B200;
    case 341u: goto L_0013B210;
    case 342u: goto L_0013B234;
    case 343u: goto L_0013B240;
    case 344u: goto L_0013B270;
    case 345u: goto L_0013B2A0;
    case 346u: goto L_0013B2B0;
    case 347u: goto L_0013B2D4;
    case 348u: goto L_0013B2F0;
    case 349u: goto L_0013B308;
    case 350u: goto L_0013B320;
    case 351u: goto L_0013B364;
    case 352u: goto L_0013B3C0;
    case 353u: goto L_0013B420;
    case 354u: goto L_0013B428;
    case 355u: goto L_0013B474;
    case 356u: goto L_0013B4B4;
    case 357u: goto L_0013B500;
    case 358u: goto L_0013B56C;
    case 359u: goto L_0013B59C;
    case 360u: goto L_0013B5F8;
    case 361u: goto L_0013B624;
    case 362u: goto L_0013B644;
    case 363u: goto L_0013B684;
    case 364u: goto L_0013B6C0;
    case 365u: goto L_0013B760;
    case 366u: goto L_0013B780;
    case 367u: goto L_0013B790;
    case 368u: goto L_0013B7E8;
    case 369u: goto L_0013B800;
    case 370u: goto L_0013B820;
    case 371u: goto L_0013B840;
    case 372u: goto L_0013B860;
    case 373u: goto L_0013B870;
    case 374u: goto L_0013B880;
    case 375u: goto L_0013B8A4;
    case 376u: goto L_0013B8B4;
    case 377u: goto L_0013B8CC;
    case 378u: goto L_0013B8E0;
    case 379u: goto L_0013B8F4;
    case 380u: goto L_0013B900;
    case 381u: goto L_0013B910;
    case 382u: goto L_0013B91C;
    case 383u: goto L_0013B92C;
    case 384u: goto L_0013B940;
    case 385u: goto L_0013B96C;
    case 386u: goto L_0013B980;
    case 387u: goto L_0013B98C;
    case 388u: goto L_0013B9A4;
    case 389u: goto L_0013B9B0;
    case 390u: goto L_0013B9BC;
    case 391u: goto L_0013B9C8;
    case 392u: goto L_0013B9F0;
    case 393u: goto L_0013BA14;
    case 394u: goto L_0013BA40;
    case 395u: goto L_0013BA68;
    case 396u: goto L_0013BA88;
    case 397u: goto L_0013BA94;
    case 398u: goto L_0013BAA0;
    case 399u: goto L_0013BAB4;
    case 400u: goto L_0013BAC0;
    case 401u: goto L_0013BAD0;
    case 402u: goto L_0013BAF0;
    case 403u: goto L_0013BAFC;
    case 404u: goto L_0013BB08;
    case 405u: goto L_0013BB1C;
    case 406u: goto L_0013BB40;
    case 407u: goto L_0013BB80;
    case 408u: goto L_0013BBB0;
    case 409u: goto L_0013BBD8;
    case 410u: goto L_0013BC10;
    case 411u: goto L_0013BC44;
    case 412u: goto L_0013BC60;
    case 413u: goto L_0013BC98;
    case 414u: goto L_0013BCC4;
    case 415u: goto L_0013BCF4;
    case 416u: goto L_0013BD00;
    case 417u: goto L_0013BD18;
    case 418u: goto L_0013BD40;
    case 419u: goto L_0013BD70;
    case 420u: goto L_0013BD9C;
    case 421u: goto L_0013BDC8;
    case 422u: goto L_0013BDF8;
    case 423u: goto L_0013BE04;
    case 424u: goto L_0013BE1C;
    case 425u: goto L_0013BE40;
    case 426u: goto L_0013BE70;
    case 427u: goto L_0013BE80;
    case 428u: goto L_0013BE90;
    case 429u: goto L_0013BEC4;
    case 430u: goto L_0013BED0;
    case 431u: goto L_0013BEE8;
    case 432u: goto L_0013BF00;
    case 433u: goto L_0013BF3C;
    case 434u: goto L_0013BF50;
    case 435u: goto L_0013BF5C;
    case 436u: goto L_0013BF80;
    case 437u: goto L_0013BFA4;
    case 438u: goto L_0013BFC0;
    case 439u: goto L_0013BFE4;
    case 440u: goto L_0013BFFC;
    default: bad_entry(c, 0x00138000u); return;
    }
L_00138000:
    c.r[3].d[0] = c.r[5].d[0] & 1023ull;
    set32(c.r[6], c.r[3].w[0] - 511u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 10));
    c.facc = fp::add(c.f[0], c.f[1]);
    set32(c.r[3], c.r[8].w[0] << 2);
    c.f[1] = c.r[6].w[0];
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[3].w[0]), c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.budget -= 12;
L_00138030:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00137FF8u | kUnwind; return; } [[clang::musttail]] return unit_000D(c, 487u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0013803C:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00138058; }
    c.f[1] = c.f[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_00138058:
    set32(c.r[3], c.r[7].w[0] << 2);
    c.f[0] = c.r[5].w[0];
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::sqrt(c.f[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.f[0]);  c.pc = t; return; }
L_00138080:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[4].w[0] << 2);
    c.budget -= 11;
L_001380AC:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 5;
L_001380C0:
    c.f[1] = c.f[1] & fp::kAbs;
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_001380DC; }
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_001380DC:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[4].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001380ACu | kUnwind; return; } goto L_001380AC; }
    set32(c.r[2], c.r[19].w[0] << 2);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_001380F8:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[19].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00138170; }
L_00138100:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[28].w[0] - 32360u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013812Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[3]));  if (depth < kMaxDepth) unit_00AB(c, 392u, depth + 1u); else { c.pc = 0x003AF2A8u; return; } if (c.pc != 0x0013812Cu) [[unlikely]] return; }
L_0013812C:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], 0u - 511u);  goto L_00138154; }
    set32(c.r[4], 0u - c.r[4].w[0]);
    set32(c.r[3], 0u - 511u);
    c.budget -= 2;
L_00138154:
    set32(c.r[2], 0u + 511u);
    mmi::pmaxw(c.r[3], c.r[4], c.r[3]);
    mmi::pminw(c.r[2], c.r[3], c.r[2]);
    set32(c.r[2], c.r[2].w[0] + 511u);
    set32(c.r[3], c.r[18].w[0] << 10);
    c.r[18].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 7;
L_00138170:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001380F8u | kUnwind; return; } goto L_001380F8; } }
    set32(c.r[2], c.r[19].w[0] << 30);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[2].d[0] = c.r[18].d[0] | c.r[2].d[0];
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001381B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001381C8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 12u, depth + 1u); else { c.pc = 0x00138200u; return; } if (c.pc != 0x001381C8u) [[unlikely]] return; }
L_001381C8:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00138200:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    fpu_div(c, 20u, c.f[12], c.f[0]);
    c.f[21] = c.f[13];
    c.f[25] = c.f[14];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013824Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x0013824Cu) [[unlikely]] return; }
L_0013824C:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138258u); c.f[24] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x00138258u) [[unlikely]] return; }
L_00138258:
    c.f[23] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 20u, c.f[21], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013827Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x0013827Cu) [[unlikely]] return; }
L_0013827C:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138288u); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x00138288u) [[unlikely]] return; }
L_00138288:
    c.f[21] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 20u, c.f[25], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001382ACu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x001382ACu) [[unlikely]] return; }
L_001382AC:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001382B8u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x001382B8u) [[unlikely]] return; }
L_001382B8:
    c.f[6] = 0u;
    c.facc = fp::mul(c.f[23], c.f[22]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[24], c.f[6]));
    c.f[1] = fp::sub(c.f[1], c.f[6]);
    c.facc = fp::add(c.f[6], c.f[1]);
    c.f[2] = fp::mul(c.f[6], c.f[22]);
    c.f[5] = fp::add(c.facc, fp::mul(c.f[6], c.f[21]));
    c.facc = fp::add(c.f[6], c.f[2]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[24], c.f[21]));
    c.f[1] = fp::sub(c.f[1], c.f[6]);
    c.facc = fp::add(c.f[6], c.f[1]);
    c.f[4] = fp::add(c.facc, fp::mul(c.f[23], c.f[6]));
    c.facc = fp::add(c.f[6], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[24], c.f[6]));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[23], c.f[21]));
    c.facc = fp::mul(c.f[24], c.f[22]);
    c.f[3] = fp::add(c.f[6], c.f[1]);
    c.facc = fp::sub(c.facc, fp::mul(c.f[23], c.f[6]));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[6], c.f[21]));
    c.f[2] = fp::sub(c.f[1], c.f[6]);
    c.facc = fp::mul(c.f[5], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[6]));
    c.facc = fp::sub(c.facc, fp::mul(c.f[4], c.f[0]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[6]));
    c.facc = fp::mul(c.f[4], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[6]));
    st32((c.r[16].w[0]), c.f[1]);
    c.facc = fp::sub(c.facc, fp::mul(c.f[3], c.f[6]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[5], c.f[0]));
    c.facc = fp::mul(c.f[3], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[0]));
    st32((c.r[16].w[0] + 4u), c.f[1]);
    c.facc = fp::sub(c.facc, fp::mul(c.f[5], c.f[6]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[4], c.f[6]));
    c.facc = fp::mul(c.f[2], c.f[20]);
    c.facc = fp::sub(c.facc, fp::mul(c.f[5], c.f[6]));
    c.facc = fp::sub(c.facc, fp::mul(c.f[4], c.f[6]));
    st32((c.r[16].w[0] + 8u), c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[3], c.f[0]));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 50;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00138380:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[3] = 0u;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.facc = fp::add(c.f[3], c.f[3]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.f[26]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = ld32((c.r[5].w[0]));
    c.f[7] = ld32((c.r[4].w[0]));
    c.f[21] = ld32((c.r[5].w[0] + 4u));
    c.f[6] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::sub(c.f[7], c.f[20]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = fp::add(c.f[7], c.f[20]);
    c.facc = fp::add(c.f[3], c.f[3]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = fp::sub(c.f[6], c.f[21]);
    c.facc = fp::add(c.f[3], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = fp::add(c.f[6], c.f[21]);
    c.facc = fp::add(c.f[3], c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[22] = ld32((c.r[5].w[0] + 8u));
    c.f[5] = ld32((c.r[4].w[0] + 8u));
    c.facc = fp::add(c.f[3], c.f[1]);
    c.f[23] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = fp::sub(c.f[5], c.f[22]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = fp::add(c.f[5], c.f[22]);
    c.facc = fp::add(c.f[3], c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[4] = ld32((c.r[4].w[0] + 12u));
    c.facc = fp::add(c.f[3], c.f[1]);
    c.f[0] = fp::sub(c.f[4], c.f[23]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = fp::add(c.f[4], c.f[23]);
    c.facc = fp::add(c.f[3], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 49;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[25] = c.f[12];  if (t) { goto L_00138454; } }
    c.f[20] = c.f[20] ^ fp::kSign;
    c.f[21] = c.f[21] ^ fp::kSign;
    c.f[22] = c.f[22] ^ fp::kSign;
    c.f[23] = c.f[23] ^ fp::kSign;
    c.budget -= 4;
L_00138454:
    c.facc = fp::mul(c.f[6], c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[20]));
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[22]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[4], c.f[23]));
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[3]);
    c.f[0] = ld32((c.r[28].w[0] - 32268u));
    c.f[4] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[21] ^ fp::kSign;  goto L_001385B8; }
    c.f[1] = fp::sub(c.f[2], c.f[3]);
    c.f[0] = ld32((c.r[28].w[0] - 32264u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00138514; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::max(c.f[3], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001384B4u); c.f[12] = fp::min(c.f[0], c.f[2]);  if (depth < kMaxDepth) unit_00AB(c, 427u, depth + 1u); else { c.pc = 0x003AF6F8u; return; } if (c.pc != 0x001384B4u) [[unlikely]] return; }
L_001384B4:
    c.f[24] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001384C0u); c.f[12] = c.f[24];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x001384C0u) [[unlikely]] return; }
L_001384C0:
    c.f[26] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[25]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001384DCu); c.f[12] = fp::mul(c.f[0], c.f[24]);  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x001384DCu) [[unlikely]] return; }
L_001384DC:
    c.f[12] = fp::mul(c.f[25], c.f[24]);
    fpu_div(c, 24u, c.f[0], c.f[26]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001384F8u);  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x001384F8u) [[unlikely]] return; }
L_001384F8:
    fpu_div(c, 1u, c.f[0], c.f[26]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00138574; } }
L_00138514:
    fpu_compare(c, fp::key(c.f[25]) < fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013852C; } }
    fpu_compare(c, fp::key(c.f[25]) <= fp::key(c.f[2]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[24] = fp::sub(c.f[2], c.f[25]);  goto L_00138570; }
L_0013852C:
    c.f[24] = 0u;
    fpu_compare(c, fp::key(c.f[25]) < fp::key(c.f[24]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00138548; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[24] = c.r[3].w[0];
    c.budget -= 2;
L_00138548:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[25]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00138564; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00138568; } }
L_00138564:
    c.f[1] = c.r[3].w[0];
    c.budget -= 1;
L_00138568:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0]));  if (t) { goto L_00138578; } }
L_00138570:
    c.f[1] = c.f[25];
    c.budget -= 1;
L_00138574:
    c.f[0] = ld32((c.r[17].w[0]));
    c.budget -= 1;
L_00138578:
    c.facc = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[24], c.f[0]));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.facc = fp::mul(c.f[1], c.f[21]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[24], c.f[0]));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.facc = fp::mul(c.f[1], c.f[22]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[24], c.f[0]));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.facc = fp::mul(c.f[1], c.f[23]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[24], c.f[0]));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_0013863C; } }
L_001385B8:
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[20]);
    c.f[0] = c.f[23] ^ fp::kSign;
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[25]);
    c.f[0] = ld32((c.r[28].w[0] - 32608u));
    st32((c.r[16].w[0] + 12u), c.f[22]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001385DCu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x001385DCu) [[unlikely]] return; }
L_001385DC:
    c.f[20] = c.f[0];
    c.f[0] = ld32((c.r[28].w[0] - 32608u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001385ECu); c.f[12] = fp::mul(c.f[0], c.f[25]);  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x001385ECu) [[unlikely]] return; }
L_001385EC:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[17].w[0]));
    c.facc = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[20], c.f[2]));
    st32((c.r[16].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.facc = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[20], c.f[2]));
    st32((c.r[16].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.facc = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[20], c.f[2]));
    st32((c.r[16].w[0] + 8u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    c.facc = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[20], c.f[2]));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 20;
L_0013863C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00138670:
    c.f[6] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[3].w[0];
    c.f[5] = ld32((c.r[4].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = fp::mul(c.f[2], c.f[6]);
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[3] = fp::mul(c.f[2], c.f[5]);
    c.f[10] = fp::mul(c.f[4], c.f[1]);
    c.f[7] = fp::mul(c.f[4], c.f[6]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[9] = fp::mul(c.f[3], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[4] = fp::mul(c.f[3], c.f[6]);
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[8] = fp::mul(c.f[2], c.f[1]);
    c.f[6] = fp::mul(c.f[2], c.f[6]);
    c.f[5] = fp::mul(c.f[2], c.f[5]);
    c.f[2] = fp::add(c.f[3], c.f[0]);
    c.f[1] = fp::add(c.f[7], c.f[0]);
    c.f[0] = fp::add(c.f[7], c.f[3]);
    c.f[3] = c.r[3].w[0];
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    st32((c.r[5].w[0]), c.f[2]);
    c.f[2] = fp::sub(c.f[4], c.f[8]);
    st32((c.r[5].w[0] + 16u), c.f[2]);
    c.f[1] = fp::sub(c.f[3], c.f[1]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    c.f[3] = fp::add(c.f[4], c.f[8]);
    c.f[4] = fp::add(c.f[6], c.f[9]);
    st32((c.r[5].w[0] + 32u), c.f[4]);
    st32((c.r[5].w[0] + 4u), c.f[3]);
    st32((c.r[5].w[0] + 20u), c.f[1]);
    c.f[3] = fp::sub(c.f[5], c.f[10]);
    c.f[2] = fp::sub(c.f[6], c.f[9]);
    st32((c.r[5].w[0] + 36u), c.f[3]);
    c.f[1] = fp::add(c.f[5], c.f[10]);
    st32((c.r[5].w[0] + 8u), c.f[2]);
    st32((c.r[5].w[0] + 24u), c.f[1]);
    st32((c.r[5].w[0] + 40u), c.f[0]);
    st32((c.r[5].w[0] + 12u), 0u);
    st32((c.r[5].w[0] + 28u), 0u);
    st32((c.r[5].w[0] + 44u), 0u);
    st32((c.r[5].w[0] + 48u), 0u);
    st32((c.r[5].w[0] + 52u), 0u);
    st32((c.r[5].w[0] + 56u), 0u);
    c.budget -= 50;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 60u), c.r[3].w[0]);  c.pc = t; return; }
L_00138740:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[3] = ld32((c.r[5].w[0] + 20u));
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[4] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[2], c.f[3]);
    c.f[1] = fp::add(c.f[4], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001387D4; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[2] = fp::sqrt(c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[2]);
    fpu_div(c, 2u, c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 36u));
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[0]);  if (t) { goto L_00138940; } }
L_001387D4:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_001387E4; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 1;
L_001387E4:
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], c.r[7].w[0] << 4);  goto L_0013880C; }
    set32(c.r[7], 0u + 2u);
    set32(c.r[3], c.r[7].w[0] << 4);
    c.budget -= 2;
L_0013880C:
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[8], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[12], c.r[12].w[0] - 6608u);
    c.f[2] = ld32((c.r[3].w[0]));
    set32(c.r[7], c.r[12].w[0] + c.r[8].w[0]);
    set32(c.r[11], ld32((c.r[7].w[0])));
    set32(c.r[10], c.r[29].w[0]);
    set32(c.r[9], 0u + 12u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 12;
L_0013883C:
    set32(c.r[7], c.r[11].w[0] << 2);
    set32(c.r[3], c.r[11].w[0] << 4);
    set32(c.r[14], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[11], c.r[12].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[14].w[0] + c.r[7].w[0]);
    set32(c.r[11], ld32((c.r[11].w[0])));
    c.f[1] = ld32((c.r[3].w[0]));
    set32(c.r[3], c.r[11].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[11], c.r[5].w[0] + c.r[11].w[0]);
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    set32(c.r[5], c.r[11].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[2] = fp::sqrt(c.f[0]);
    c.budget -= 17;
L_00138880:
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_001388A8; } }
L_0013888C:
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[9], c.r[9].w[0] - 1u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013888Cu | kUnwind; return; } goto L_0013888C; } }
L_001388A8:
    set32(c.r[5], c.r[4].w[0] + 4u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[12], c.r[11].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[4].w[0] + 8u);
    set32(c.r[9], c.r[11].w[0] + c.r[8].w[0]);
    c.budget -= 6;
L_001388C0:
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[11], c.r[14].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[10], c.r[14].w[0] + c.r[8].w[0]);
    c.f[1] = c.r[5].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[2]);
    set32(c.r[5], c.r[8].w[0] + c.r[29].w[0]);
    set32(c.r[13], ld32((c.r[5].w[0])));
    set32(c.r[8], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[7].w[0] + c.r[29].w[0]);
    fpu_div(c, 2u, c.f[1], c.f[2]);
    set32(c.r[7], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 16;
L_00138900:
    st32((c.r[13].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[12].w[0]));
    c.f[0] = ld32((c.r[11].w[0]));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[10].w[0]));
    c.f[0] = ld32((c.r[8].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[9].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 16;
L_00138940:
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00138970:
    c.f[6] = ld32((c.r[5].w[0]));
    c.f[7] = ld32((c.r[5].w[0] + 4u));
    c.f[13] = ld32((c.r[6].w[0]));
    c.f[9] = ld32((c.r[5].w[0] + 8u));
    c.f[10] = ld32((c.r[5].w[0] + 12u));
    c.f[11] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = c.f[6] ^ fp::kSign;
    c.f[0] = 0u;
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.f[12] = ld32((c.r[6].w[0] + 4u));
    c.f[2] = c.f[7] ^ fp::kSign;
    c.facc = fp::add(c.facc, fp::mul(c.f[10], c.f[13]));
    c.f[8] = c.f[9] ^ fp::kSign;
    c.facc = fp::sub(c.facc, fp::mul(c.f[2], c.f[11]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[8], c.f[12]));
    c.facc = fp::mul(c.f[2], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[10], c.f[12]));
    c.facc = fp::sub(c.facc, fp::mul(c.f[8], c.f[13]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[1], c.f[11]));
    c.facc = fp::mul(c.f[8], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[10], c.f[11]));
    c.facc = fp::sub(c.facc, fp::mul(c.f[1], c.f[12]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[2], c.f[13]));
    c.facc = fp::mul(c.f[10], c.f[0]);
    c.facc = fp::sub(c.facc, fp::mul(c.f[1], c.f[13]));
    c.facc = fp::sub(c.facc, fp::mul(c.f[2], c.f[12]));
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[8], c.f[11]));
    c.facc = fp::mul(c.f[5], c.f[10]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[6]));
    c.facc = fp::sub(c.facc, fp::mul(c.f[4], c.f[9]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[7]));
    c.facc = fp::mul(c.f[4], c.f[10]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[7]));
    c.facc = fp::sub(c.facc, fp::mul(c.f[3], c.f[6]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[5], c.f[9]));
    c.facc = fp::mul(c.f[3], c.f[10]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[9]));
    st32((c.r[4].w[0]), c.f[0]);
    c.facc = fp::sub(c.facc, fp::mul(c.f[5], c.f[7]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[4], c.f[6]));
    st32((c.r[4].w[0] + 4u), c.f[1]);
    c.budget -= 44;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_00138A20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 5728u);  c.pc = t; return; }
L_00138A30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138A4Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 120u, depth + 1u); else { c.pc = 0x001352B0u; return; } if (c.pc != 0x00138A4Cu) [[unlikely]] return; }
L_00138A4C:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138A58u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00138A58u) [[unlikely]] return; }
L_00138A58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138A68u); set32(c.r[5], c.r[5].w[0] - 5697u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x00138A68u) [[unlikely]] return; }
L_00138A68:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00138AA8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 5697u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138A88u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000E(c, 51u, depth + 1u); else { c.pc = 0x00138BD0u; return; } if (c.pc != 0x00138A88u) [[unlikely]] return; }
L_00138A88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138A94u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00138A94u) [[unlikely]] return; }
L_00138A94:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138AA0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00138AA0u) [[unlikely]] return; }
L_00138AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_00138AB8; } }
L_00138AA8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138AB4u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 45u, depth + 1u); else { c.pc = 0x00138AE0u; return; } if (c.pc != 0x00138AB4u) [[unlikely]] return; }
L_00138AB4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_00138AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138AC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00138AC0u) [[unlikely]] return; }
L_00138AC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00138AE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[5], c.r[5].w[0] << 5);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], 0u + 256u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[17], c.r[3].w[0] + c.r[5].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 15;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[6].w[0] + 1u);  goto L_00138B20; }
    set32(c.r[18], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 1;
L_00138B20:
    set32(c.r[2], 0u + 512u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138B30u); st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00138B30u) [[unlikely]] return; }
L_00138B30:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[19], 0u + 16u);  if (t) { goto L_00138B64; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[19], ld32((c.r[17].w[0] + 4u)));  goto L_00138B64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138B5Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00138B5Cu) [[unlikely]] return; }
L_00138B5C:
    set32(c.r[2], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00138B64:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_00138BA8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));  goto L_00138B90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138B8Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00138B8Cu) [[unlikely]] return; }
L_00138B8C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_00138B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138B98u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00138B98u) [[unlikely]] return; }
L_00138B98:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
L_00138BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138BB0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x00138BB0u) [[unlikely]] return; }
L_00138BB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00138BD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138C00u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x00138C00u) [[unlikely]] return; }
L_00138C00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[20].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    st16((c.r[20].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 256u);
    st32((c.r[20].w[0] + 20u), c.r[4].w[0]);
    st16((c.r[20].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[16].w[0] + 1u);  goto L_00138C34; }
    set32(c.r[17], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_00138C34:
    set32(c.r[2], 0u + 512u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138C44u); st16((c.r[20].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00138C44u) [[unlikely]] return; }
L_00138C44:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[18], 0u + 16u);  if (t) { goto L_00138C78; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], ld32((c.r[20].w[0] + 4u)));  goto L_00138C78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138C70u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00138C70u) [[unlikely]] return; }
L_00138C70:
    set32(c.r[2], c.r[20].w[0] + 4u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00138C78:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 20u)));  goto L_00138CBC; }
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));  goto L_00138CA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138CA0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00138CA0u) [[unlikely]] return; }
L_00138CA0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));
    c.budget -= 1;
L_00138CA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138CACu); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00138CACu) [[unlikely]] return; }
L_00138CAC:
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 4;
L_00138CBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138CC4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x00138CC4u) [[unlikely]] return; }
L_00138CC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138CE8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138CE8u) [[unlikely]] return; }
L_00138CE8:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00138D10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  c.pc = t; return; }
L_00138D20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138D34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 81u, depth + 1u); else { c.pc = 0x0012CAF0u; return; } if (c.pc != 0x00138D34u) [[unlikely]] return; }
L_00138D34:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00138D68; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00138D64; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00138D64; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138D64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138D64u) [[unlikely]] return; }
L_00138D64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00138D68:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00138D80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00138DB0; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138DB0u); set32(c.r[6], c.r[6].w[0] - 5692u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00138DB0u) [[unlikely]] return; }
L_00138DB0:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_00138DFC; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 11u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00138E00; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138DDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138DDCu) [[unlikely]] return; }
L_00138DDC:
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 10u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00138DFC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138DFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138DFCu) [[unlikely]] return; }
L_00138DFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00138E00:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00138E10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00138E54; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8u));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138E44u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138E44u) [[unlikely]] return; }
L_00138E44:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 28u)));  goto L_00138E58; }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00138E54:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_00138E58:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00138E80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00138F14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25360u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 9u));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  goto L_00138ED0; }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00138ECCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00138ECCu) [[unlikely]] return; }
L_00138ECC:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_00138ED0:
    set32(c.r[2], c.r[17].w[0] + 16u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(0u));  goto L_00138EE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138EE4u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x001002F0u; return; } if (c.pc != 0x00138EE4u) [[unlikely]] return; }
L_00138EE4:
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00138EE8:
    set32(c.r[2], c.r[17].w[0] + 16u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138EFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 139u, depth + 1u); else { c.pc = 0x001354E0u; return; } if (c.pc != 0x00138EFCu) [[unlikely]] return; }
L_00138EFC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00138F18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138F14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00138F14u) [[unlikely]] return; }
L_00138F14:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00138F18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00138F30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138F5Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 142u, depth + 1u); else { c.pc = 0x00135570u; return; } if (c.pc != 0x00138F5Cu) [[unlikely]] return; }
L_00138F5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[19].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] - 25360u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[19].w[0]), c.r[3].w[0]);
    st8((c.r[19].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[19].w[0] + 28u), 0u);
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138F88u); st8((c.r[19].w[0] + 8u), static_cast<std::uint8_t>(c.r[18].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00138F88u) [[unlikely]] return; }
L_00138F88:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 12u)));  goto L_00138FAC; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138FA0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 397u, depth + 1u); else { c.pc = 0x0013FD00u; return; } if (c.pc != 0x00138FA0u) [[unlikely]] return; }
L_00138FA0:
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00138FB4; } }
L_00138FAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138FB4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x00138FB4u) [[unlikely]] return; }
L_00138FB4:
    set32(c.r[2], ld32((c.r[28].w[0] - 29164u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st8((c.r[19].w[0] + 11u), static_cast<std::uint8_t>(0u));  goto L_00138FCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138FC8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 88u, depth + 1u); else { c.pc = 0x0012CB90u; return; } if (c.pc != 0x00138FC8u) [[unlikely]] return; }
L_00138FC8:
    st8((c.r[19].w[0] + 11u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00138FCC:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00138FF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31208u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0013900C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0013901C; } }
L_0013900C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139014u);  if (depth < kMaxDepth) unit_000D(c, 144u, depth + 1u); else { c.pc = 0x001355D0u; return; } if (c.pc != 0x00139014u) [[unlikely]] return; }
L_00139014:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0013901C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00139030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 3;
L_0013903C:
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_00139040:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139054u); set32(c.r[4], c.r[4].w[0] - 12992u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00139054u) [[unlikely]] return; }
L_00139054:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00139064; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00139074; } }
L_00139064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013906Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 145u, depth + 1u); else { c.pc = 0x001355F0u; return; } if (c.pc != 0x0013906Cu) [[unlikely]] return; }
L_0013906C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00139074:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
L_00139080:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00139090:
    set32(c.r[2], ld32((c.r[28].w[0] - 31220u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_001390A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31208u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001390BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001390C4; } }
L_001390BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001390C4u);  if (depth < kMaxDepth) unit_000D(c, 148u, depth + 1u); else { c.pc = 0x00135640u; return; } if (c.pc != 0x001390C4u) [[unlikely]] return; }
    goto L_001390C4;
L_001390C0:
    c.budget -= 1;
L_001390C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001390D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 31208u)));  c.pc = t; return; }
L_001390E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 836u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001390FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x001390FCu) [[unlikely]] return; }
L_001390FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00139114; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139110u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 106u, depth + 1u); else { c.pc = 0x001392E0u; return; } if (c.pc != 0x00139110u) [[unlikely]] return; }
L_00139110:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00139114:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00139130:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013925C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 25280u);
    set32(c.r[2], c.r[2].w[0] - 25256u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[28].w[0] - 29076u), 0u);  if (t) { goto L_00139244; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25184u);
    set32(c.r[3], c.r[3].w[0] - 25160u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00139230; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25208u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001391D8; } }
L_001391A8:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 24u);  if (t) { goto L_001391D0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001391D0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001391D0u) [[unlikely]] return; }
L_001391D0:
    st32((c.r[19].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_001391D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 808u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001391A8u | kUnwind; return; } goto L_001391A8; }
    set32(c.r[2], c.r[18].w[0] + 812u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 808u), 0u);  if (t) { goto L_00139218; } }
    set32(c.r[4], c.r[18].w[0] + 816u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139218; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139218; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139218u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 135u, depth + 1u); else { c.pc = 0x001397A0u; return; } if (c.pc != 0x00139218u) [[unlikely]] return; }
L_00139218:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00140000u);
    set32(c.r[4], c.r[18].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] - 28032u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139230u); set32(c.r[7], 0u + 40u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x00139230u) [[unlikely]] return; }
L_00139230:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_00139248; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25232u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00139244:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_00139248:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00139260; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013925Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0013925Cu) [[unlikely]] return; }
L_0013925C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00139260:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00139264:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00139280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001392C4; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_001392B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001392ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001392ACu) [[unlikely]] return; }
L_001392AC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001392B0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001392C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001392C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001392C4u) [[unlikely]] return; }
L_001392C4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001392C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001392E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001392FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 131u, depth + 1u); else { c.pc = 0x00139710u; return; } if (c.pc != 0x001392FCu) [[unlikely]] return; }
L_001392FC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139308u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000E(c, 123u, depth + 1u); else { c.pc = 0x001395E0u; return; } if (c.pc != 0x00139308u) [[unlikely]] return; }
L_00139308:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25184u);
    set32(c.r[3], c.r[3].w[0] - 25160u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 25280u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 25256u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[28].w[0] - 29076u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00139360:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013946C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25184u);
    set32(c.r[3], c.r[3].w[0] - 25160u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00139440; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25208u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001393E8; } }
L_001393B8:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 24u);  if (t) { goto L_001393E0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001393E0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001393E0u) [[unlikely]] return; }
L_001393E0:
    st32((c.r[19].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_001393E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 808u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001393B8u | kUnwind; return; } goto L_001393B8; }
    set32(c.r[2], c.r[18].w[0] + 812u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 808u), 0u);  if (t) { goto L_00139428; } }
    set32(c.r[4], c.r[18].w[0] + 816u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139428; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139428; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139428; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139428u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 135u, depth + 1u); else { c.pc = 0x001397A0u; return; } if (c.pc != 0x00139428u) [[unlikely]] return; }
L_00139428:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00140000u);
    set32(c.r[4], c.r[18].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] - 28032u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139440u); set32(c.r[7], 0u + 40u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x00139440u) [[unlikely]] return; }
L_00139440:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_00139458; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25232u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 4;
L_00139458:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00139470; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013946Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0013946Cu) [[unlikely]] return; }
L_0013946C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00139470:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00139490:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00139568; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25208u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_001394F8; } }
L_001394C8:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 20u);  if (t) { goto L_001394F0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001394F0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001394F0u) [[unlikely]] return; }
L_001394F0:
    st32((c.r[19].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_001394F8:
    set32(c.r[2], ld32((c.r[18].w[0] + 804u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001394C8u | kUnwind; return; } goto L_001394C8; }
    set32(c.r[2], c.r[18].w[0] + 808u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 804u), 0u);  if (t) { goto L_00139538; } }
    set32(c.r[4], c.r[18].w[0] + 812u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139538; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139538; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139538u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 135u, depth + 1u); else { c.pc = 0x001397A0u; return; } if (c.pc != 0x00139538u) [[unlikely]] return; }
L_00139538:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00140000u);
    set32(c.r[4], c.r[18].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] - 28032u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139550u); set32(c.r[7], 0u + 40u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x00139550u) [[unlikely]] return; }
L_00139550:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0013956C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139568u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00139568u) [[unlikely]] return; }
L_00139568:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0013956C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00139590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001395CC; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 25232u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_001395C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001395C8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001395C8u) [[unlikely]] return; }
L_001395C8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001395CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001395E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00140000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[2].w[0] - 25208u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00140000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 26912u);
    set32(c.r[4], c.r[19].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] - 28032u);
    set32(c.r[7], 0u + 20u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013962Cu); set32(c.r[8], 0u + 40u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x0013962Cu) [[unlikely]] return; }
L_0013962C:
    set32(c.r[17], c.r[19].w[0] + 808u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 4u);  if (t) { goto L_00139678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139644u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00139644u) [[unlikely]] return; }
L_00139644:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_00139664; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013965Cu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0013965Cu) [[unlikely]] return; }
L_0013965C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00139664:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0]), c.r[18].w[0]);  goto L_0013967C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139674u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00139674u) [[unlikely]] return; }
L_00139674:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00139678:
    st32((c.r[16].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_0013967C:
    set32(c.r[2], c.r[19].w[0] + 4u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[5], 0u + 40u);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[6], c.r[29].w[0] + 88u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 31200u)));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 31196u));
    c.r[2].d[0] = ld16((c.r[28].w[0] - 31194u));
    st32((c.r[29].w[0] + 88u), c.r[7].w[0]);
    st16((c.r[29].w[0] + 92u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001396B8u); st16((c.r[29].w[0] + 94u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 132u, depth + 1u); else { c.pc = 0x00139730u; return; } if (c.pc != 0x001396B8u) [[unlikely]] return; }
L_001396B8:
    st32((c.r[19].w[0] + 804u), 0u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001396E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001396F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x001396F4u) [[unlikely]] return; }
L_001396F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00139710:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25232u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00139730:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00139768; } }
    set32(c.r[6], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139760u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 162u, depth + 1u); else { c.pc = 0x00139C00u; return; } if (c.pc != 0x00139760u) [[unlikely]] return; }
L_00139760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00139794; } }
L_00139768:
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00139790; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139790u); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 160u, depth + 1u); else { c.pc = 0x00139B60u; return; } if (c.pc != 0x00139790u) [[unlikely]] return; }
L_00139790:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00139794:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001397A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001397F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001397C4u);  if (depth < kMaxDepth) unit_000E(c, 177u, depth + 1u); else { c.pc = 0x00139FC0u; return; } if (c.pc != 0x001397C4u) [[unlikely]] return; }
L_001397C4:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_001397E4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001397E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001397E0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x001397E0u) [[unlikely]] return; }
L_001397E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001397E4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001397FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001397F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001397F8u) [[unlikely]] return; }
L_001397F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001397FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00139810:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
L_0013983C:
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_00139840:
    st32((c.r[6].w[0] + 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001398D4; } }
L_0013984C:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[21], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013986Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013986Cu) [[unlikely]] return; }
L_0013986C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139878u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00139878u) [[unlikely]] return; }
L_00139878:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001398D4; }
    set32(c.r[2], c.r[21].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[21], c.r[2].w[0] + 4u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[21].w[0] + 20u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001398B0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x001398B0u) [[unlikely]] return; }
L_001398B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[7], c.r[21].w[0] + 4u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001398D0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 215u, depth + 1u); else { c.pc = 0x0011E0A0u; return; } if (c.pc != 0x001398D0u) [[unlikely]] return; }
L_001398D0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001398D4:
    set32(c.r[3], ld32((c.r[20].w[0] + 808u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013984Cu | kUnwind; return; } goto L_0013984C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00139910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139928u); set32(c.r[4], c.r[16].w[0] + 812u);  if (depth < kMaxDepth) unit_000E(c, 149u, depth + 1u); else { c.pc = 0x00139960u; return; } if (c.pc != 0x00139928u) [[unlikely]] return; }
L_00139928:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00139948; }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 5;
L_00139948:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00139960:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00139994; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00139A6C; } }
L_00139994:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0xF0000000u);  if (t) { goto L_001399C4; } }
L_001399A4:
    set32(c.r[4], c.r[17].w[0] << 4);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[17], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { goto L_001399C4; } }
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.r[17].d[0] = c.r[17].d[0] ^ c.r[2].d[0];
    c.budget -= 2;
L_001399C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[2].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001399A4u | kUnwind; return; } goto L_001399A4; }
    mmi::divu(c, 0, c.r[17].w[0], c.r[5].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 16u)));  if (t) { goto L_00139A50; } }
L_001399E0:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 12u)));  goto L_00139A38; }
    c.r[4].d[0] = ld16((c.r[4].w[0] + 4u));
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[3].w[0] + 1u);  goto L_00139A14; }
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_00139A14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139A1Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00139A1Cu) [[unlikely]] return; }
L_00139A1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00139A34; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[2].w[0] + 4u));  if (t) { goto L_00139A6C; } }
L_00139A34:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 1;
L_00139A38:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00139A4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00139A4C; } }
L_00139A4C:
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 1;
L_00139A50:
    set32(c.r[16], c.r[18].w[0] << 3);
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001399E0u | kUnwind; return; } goto L_001399E0; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00139A6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00139A90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139ABCu); set32(c.r[4], c.r[18].w[0] + 812u);  if (depth < kMaxDepth) unit_000E(c, 149u, depth + 1u); else { c.pc = 0x00139960u; return; } if (c.pc != 0x00139ABCu) [[unlikely]] return; }
L_00139ABC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], c.r[2].w[0] << 2);  goto L_00139ACC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00139B3C; } }
L_00139ACC:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139AE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00139AE4u) [[unlikely]] return; }
L_00139AE4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_00139B2C; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00139AFCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00139AFCu) [[unlikely]] return; }
L_00139AFC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139B08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 101u, depth + 1u); else { c.pc = 0x0012CD00u; return; } if (c.pc != 0x00139B08u) [[unlikely]] return; }
L_00139B08:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00139B24u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00139B24u) [[unlikely]] return; }
L_00139B24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00139B40; } }
L_00139B2C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00139B3Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00139B3Cu) [[unlikely]] return; }
L_00139B3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00139B40:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00139B60:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[6].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  goto L_00139B70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00139BF0; } }
L_00139B70:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] - c.r[6].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_00139B90; } }
    set32(c.r[2], c.r[3].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_00139B90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);  goto L_00139BD0; }
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00139BC0; } }
L_00139BA4:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[8].w[0] + 4u));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[8].w[0] + 6u));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 7;
L_00139BC0:
    c.r[2].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[8].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00139BA4u | kUnwind; return; } goto L_00139BA4; }
    set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_00139BD0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));  if (t) { goto L_00139BE0; } }
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_00139BE0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00139BF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00139C00:
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
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00139FA0; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 8u)));  goto L_00139C6C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139C60u); set32(c.r[5], c.r[5].w[0] - 5583u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x00139C60u) [[unlikely]] return; }
L_00139C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139C68u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x00139C68u) [[unlikely]] return; }
L_00139C68:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_00139C6C:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  goto L_00139E08; }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] - c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_00139CA0; } }
    set32(c.r[3], c.r[3].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_00139CA0:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] << 3);  goto L_00139D34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00139CE0; } }
L_00139CB4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_00139CD0; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_00139CD0:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00139CE0:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139CB4u | kUnwind; return; } goto L_00139CB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00139D20; } }
L_00139CF4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_00139D10; }
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_00139D10:
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00139D20:
    c.r[3].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139CF4u | kUnwind; return; } goto L_00139CF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139DD4; } }
L_00139D34:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[6].w[0] - c.r[5].w[0]);  if (t) { goto L_00139D6C; } }
L_00139D40:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_00139D5C; }
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[7].w[0]), c.f[1]);
    st32((c.r[7].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_00139D5C:
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00139D6C:
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139D40u | kUnwind; return; } goto L_00139D40; } }
    set32(c.r[3], c.r[4].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);  goto L_00139DC8; }
    c.r[1].d[0] = c.r[17].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00139DA0; } }
    set32(c.r[17], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_00139DA0:
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139DC8; } }
L_00139DAC:
    set32(c.r[6], c.r[6].w[0] - 8u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 4u));
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00139DC8:
    c.r[1].d[0] = c.r[19].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00139DACu | kUnwind; return; } goto L_00139DAC; }
L_00139DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139DF8; } }
L_00139DDC:
    set32(c.r[18], c.r[18].w[0] - 1u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    st16((c.r[19].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    st16((c.r[19].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 7;
L_00139DF8:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00139DDCu | kUnwind; return; } goto L_00139DDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00139FA4; } }
L_00139E08:
    set32(c.r[16], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_00139E28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00139E30; } }
L_00139E28:
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00139E30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_00139E50; } }
L_00139E38:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.budget -= 1;
L_00139E3C:
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_00139E4C; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_00139E4C:
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00139E50:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00139E38u | kUnwind; return; } goto L_00139E38; }
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139E64u); set32(c.r[4], c.r[16].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00139E64u) [[unlikely]] return; }
L_00139E64:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[29].w[0] + 100u), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    st32((c.r[29].w[0] + 108u), c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_00139EB0; } }
L_00139E84:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_00139EA0; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_00139EA0:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_00139EB0:
    c.r[3].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139E84u | kUnwind; return; } goto L_00139E84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139EF0; } }
L_00139EC4:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_00139EE0; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_00139EE0:
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_00139EF0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139EC4u | kUnwind; return; } goto L_00139EC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_00139F30; } }
L_00139F00:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_00139F1C; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_00139F1C:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_00139F30:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139F00u | kUnwind; return; } goto L_00139F00; } }
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[20].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  goto L_00139F88; }
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
L_00139F88:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 104u), 0u);  if (t) { goto L_00139FA0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139FA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139FA0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00139FA0u) [[unlikely]] return; }
L_00139FA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00139FA4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00139FC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_00139FD0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00139360u | kUnwind; return; } goto L_00139360; }
L_00139FE0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00139130u | kUnwind; return; } goto L_00139130; }
L_00139FF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013A060; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25136u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0013A048; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27696u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0013A048; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0013A048; } }
    goto L_0013A040;
L_0013A03C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0013A040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A048u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0013A048u) [[unlikely]] return; }
L_0013A048:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0013A064; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A060u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0013A060u) [[unlikely]] return; }
L_0013A060:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013A064:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013A080:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0013A0A8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_0013A0A0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0013A0A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013A0AC; } }
L_0013A0A8:
    set32(c.r[2], c.r[2].w[0] - 5488u);
    c.budget -= 1;
L_0013A0AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A0C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 5192u);  c.pc = t; return; }
L_0013A0D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A0ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0013A0ECu) [[unlikely]] return; }
L_0013A0EC:
    set32(c.r[7], ld32((c.r[28].w[0] - 29072u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[6].w[0] - 5152u);
    set32(c.r[2], c.r[7].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A10Cu); st32((c.r[28].w[0] - 29072u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x0013A10Cu) [[unlikely]] return; }
L_0013A10C:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[29].w[0] + 49u);  goto L_0013A120; }
    set32(c.r[7], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_0013A120:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A138u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013A138u) [[unlikely]] return; }
L_0013A138:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A148u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0013A148u) [[unlikely]] return; }
L_0013A148:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013A160:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[6], c.r[6].w[0] - 5133u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[7], 0u + 10u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A1A0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x0013A1A0u) [[unlikely]] return; }
L_0013A1A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A1B0u); set32(c.r[5], c.r[5].w[0] - 5131u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0013A1B0u) [[unlikely]] return; }
L_0013A1B0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0013A1CC; }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A1C4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0013A1C4u) [[unlikely]] return; }
L_0013A1C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013A350; } }
L_0013A1CC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A1D8u); set32(c.r[5], c.r[5].w[0] - 5126u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0013A1D8u) [[unlikely]] return; }
L_0013A1D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], 0u + 32u);  goto L_0013A218; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A1F0u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x0013A1F0u) [[unlikely]] return; }
L_0013A1F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[29].w[0] + 200u)));  goto L_0013A218; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0013A214; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A214u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x0013A214u) [[unlikely]] return; }
L_0013A214:
    set32(c.r[18], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_0013A218:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A228u); set32(c.r[5], c.r[5].w[0] - 5117u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0013A228u) [[unlikely]] return; }
L_0013A228:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0013A268; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A240u); set32(c.r[5], c.r[29].w[0] + 207u);  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x0013A240u) [[unlikely]] return; }
L_0013A240:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = ld8((c.r[29].w[0] + 207u));  goto L_0013A268; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0013A264; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 207u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A264u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x0013A264u) [[unlikely]] return; }
L_0013A264:
    c.r[17].d[0] = ld8((c.r[29].w[0] + 207u));
    c.budget -= 1;
L_0013A268:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A278u); set32(c.r[5], c.r[5].w[0] - 5103u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0013A278u) [[unlikely]] return; }
L_0013A278:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0013A2B8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A290u); set32(c.r[5], c.r[29].w[0] + 206u);  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x0013A290u) [[unlikely]] return; }
L_0013A290:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld8((c.r[29].w[0] + 206u));  goto L_0013A2B8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0013A2B4; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 206u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A2B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x0013A2B4u) [[unlikely]] return; }
L_0013A2B4:
    c.r[16].d[0] = ld8((c.r[29].w[0] + 206u));
    c.budget -= 1;
L_0013A2B8:
    set32(c.r[4], 0u + 88u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A2C8u); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0013A2C8u) [[unlikely]] return; }
L_0013A2C8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0013A32C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A2E4u); set32(c.r[5], c.r[5].w[0] - 5131u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0013A2E4u) [[unlikely]] return; }
L_0013A2E4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A2F0u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x0013A2F0u) [[unlikely]] return; }
L_0013A2F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[19], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 112u);  if (t) { goto L_0013A30C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 120u)));  if (t) { goto L_0013A310; } }
L_0013A30C:
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0013A310:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A328u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 319u, depth + 1u); else { c.pc = 0x0013AFC0u; return; } if (c.pc != 0x0013A328u) [[unlikely]] return; }
L_0013A328:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0013A32C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_0013A344; }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A340u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0013A340u) [[unlikely]] return; }
L_0013A340:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_0013A344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A34Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0013A34Cu) [[unlikely]] return; }
L_0013A34C:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0013A350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0013A380:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A39Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 36u, depth + 1u); else { c.pc = 0x00138A30u; return; } if (c.pc != 0x0013A39Cu) [[unlikely]] return; }
L_0013A39C:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[16].w[0] + 36u);
    set32(c.r[5], c.r[5].w[0] - 5126u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A3B4u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x0013A3B4u) [[unlikely]] return; }
L_0013A3B4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0013A3F4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 5126u);
    set32(c.r[6], c.r[29].w[0] + 92u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A3D4u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000E(c, 220u, depth + 1u); else { c.pc = 0x0013A490u; return; } if (c.pc != 0x0013A3D4u) [[unlikely]] return; }
L_0013A3D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A3E0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0013A3E0u) [[unlikely]] return; }
L_0013A3E0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A3ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0013A3ECu) [[unlikely]] return; }
L_0013A3EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0013A404; } }
L_0013A3F4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A400u); set32(c.r[6], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_000E(c, 218u, depth + 1u); else { c.pc = 0x0013A420u; return; } if (c.pc != 0x0013A400u) [[unlikely]] return; }
L_0013A400:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0013A404:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0013A420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], c.r[5].w[0] << 5);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 4u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[16], ld32((c.r[6].w[0])));
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[17].w[0] + 4u);
    c.budget -= 14;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  goto L_0013A46C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A460u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0013A460u) [[unlikely]] return; }
L_0013A460:
    set32(c.r[3], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
L_0013A46C:
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013A490:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A4B8u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x0013A4B8u) [[unlikely]] return; }
L_0013A4B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[18].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st16((c.r[18].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 4u);
    st32((c.r[18].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[16].w[0])));
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 12;
    if (c.r[4].d[0] == c.r[5].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_0013A4FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A4F0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0013A4F0u) [[unlikely]] return; }
L_0013A4F0:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
L_0013A4FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[16].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A524u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013A524u) [[unlikely]] return; }
L_0013A524:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013A540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[7].w[0] + c.r[3].w[0]);  if (t) { goto L_0013A5A8; } }
L_0013A564:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = c.r[7].d[0] << 32;  goto L_0013A5A0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0013A59C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A588u);  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x0013A588u) [[unlikely]] return; }
L_0013A588:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A594u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 231u, depth + 1u); else { c.pc = 0x0013A620u; return; } if (c.pc != 0x0013A594u) [[unlikely]] return; }
L_0013A594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0013A5C8; } }
L_0013A59C:
    c.r[3].d[0] = c.r[7].d[0] << 32;
    c.budget -= 1;
L_0013A5A0:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[7], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_0013A5A8:
    c.r[3].d[0] = c.r[7].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[7].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013A564u | kUnwind; return; } goto L_0013A564; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0013A5C8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013A5E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A5F8u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 341u, depth + 1u); else { c.pc = 0x0013B210u; return; } if (c.pc != 0x0013A5F8u) [[unlikely]] return; }
L_0013A5F8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0013A610; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A60Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013AB70u; return; } if (c.pc != 0x0013A60Cu) [[unlikely]] return; }
L_0013A60C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0013A610:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013A620:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
L_0013A63C:
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A64Cu); set32(c.r[4], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013A9D0u; return; } if (c.pc != 0x0013A64Cu) [[unlikely]] return; }
L_0013A64C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 52u);  goto L_0013A65C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u - 1u);  if (t) { goto L_0013A708; } }
L_0013A65C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A664u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 275u, depth + 1u); else { c.pc = 0x0013A990u; return; } if (c.pc != 0x0013A664u) [[unlikely]] return; }
L_0013A664:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A670u); set32(c.r[4], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013A9D0u; return; } if (c.pc != 0x0013A670u) [[unlikely]] return; }
L_0013A670:
    mmi::divu(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 56u);  if (t) { goto L_0013A6EC; } }
L_0013A680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A688u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 274u, depth + 1u); else { c.pc = 0x0013A980u; return; } if (c.pc != 0x0013A688u) [[unlikely]] return; }
L_0013A688:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_0013A6DC; }
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A6A0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 274u, depth + 1u); else { c.pc = 0x0013A980u; return; } if (c.pc != 0x0013A6A0u) [[unlikely]] return; }
L_0013A6A0:
    c.r[6].d[0] = ld16((c.r[2].w[0] + 4u));
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A6B0u); set32(c.r[4], c.r[17].w[0] + 72u);  if (depth < kMaxDepth) unit_000E(c, 273u, depth + 1u); else { c.pc = 0x0013A970u; return; } if (c.pc != 0x0013A6B0u) [[unlikely]] return; }
L_0013A6B0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A6BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0013A6BCu) [[unlikely]] return; }
L_0013A6BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013A6D8; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A6D0u); set32(c.r[4], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_000E(c, 274u, depth + 1u); else { c.pc = 0x0013A980u; return; } if (c.pc != 0x0013A6D0u) [[unlikely]] return; }
L_0013A6D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = ld16((c.r[2].w[0] + 4u));  if (t) { goto L_0013A708; } }
L_0013A6D8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0013A6DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A6E4u); set32(c.r[4], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_000E(c, 272u, depth + 1u); else { c.pc = 0x0013A950u; return; } if (c.pc != 0x0013A6E4u) [[unlikely]] return; }
L_0013A6E4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 2;
L_0013A6EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A6F4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 274u, depth + 1u); else { c.pc = 0x0013A980u; return; } if (c.pc != 0x0013A6F4u) [[unlikely]] return; }
L_0013A6F4:
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[17].w[0] + 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013A680u | kUnwind; return; } goto L_0013A680; }
    set32(c.r[20], 0u - 1u);
    c.budget -= 1;
L_0013A708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A710u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x0013A710u) [[unlikely]] return; }
L_0013A710:
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 5091u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A72Cu); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 413u, depth + 1u); else { c.pc = 0x0012FF20u; return; } if (c.pc != 0x0013A72Cu) [[unlikely]] return; }
L_0013A72C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[20].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 76u)));  goto L_0013A740; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013A8FC; } }
L_0013A740:
    c.r[1].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0] + 32u));  goto L_0013A754; }
    st32((c.r[17].w[0] + 76u), c.r[20].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 32u));
    c.budget -= 2;
L_0013A754:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 52u);  goto L_0013A774; }
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A770u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x0013A770u) [[unlikely]] return; }
L_0013A770:
    set32(c.r[4], c.r[17].w[0] + 52u);
    c.budget -= 1;
L_0013A774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A77Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 275u, depth + 1u); else { c.pc = 0x0013A990u; return; } if (c.pc != 0x0013A77Cu) [[unlikely]] return; }
L_0013A77C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A788u); set32(c.r[4], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013A9D0u; return; } if (c.pc != 0x0013A788u) [[unlikely]] return; }
L_0013A788:
    mmi::divu(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 56u);  if (t) { goto L_0013A7F0; } }
L_0013A798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A7A0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 271u, depth + 1u); else { c.pc = 0x0013A940u; return; } if (c.pc != 0x0013A7A0u) [[unlikely]] return; }
L_0013A7A0:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_0013A7E0; }
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A7B8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 271u, depth + 1u); else { c.pc = 0x0013A940u; return; } if (c.pc != 0x0013A7B8u) [[unlikely]] return; }
L_0013A7B8:
    c.r[6].d[0] = ld16((c.r[2].w[0] + 4u));
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A7C8u); set32(c.r[4], c.r[17].w[0] + 72u);  if (depth < kMaxDepth) unit_000E(c, 273u, depth + 1u); else { c.pc = 0x0013A970u; return; } if (c.pc != 0x0013A7C8u) [[unlikely]] return; }
L_0013A7C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A7D4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0013A7D4u) [[unlikely]] return; }
L_0013A7D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 56u);  goto L_0013A80C; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0013A7E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A7E8u); set32(c.r[4], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_000E(c, 272u, depth + 1u); else { c.pc = 0x0013A950u; return; } if (c.pc != 0x0013A7E8u) [[unlikely]] return; }
L_0013A7E8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 2;
L_0013A7F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A7F8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 271u, depth + 1u); else { c.pc = 0x0013A940u; return; } if (c.pc != 0x0013A7F8u) [[unlikely]] return; }
L_0013A7F8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[17].w[0] + 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013A798u | kUnwind; return; } goto L_0013A798; }
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 1;
L_0013A80C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A814u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 271u, depth + 1u); else { c.pc = 0x0013A940u; return; } if (c.pc != 0x0013A814u) [[unlikely]] return; }
L_0013A814:
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 48u)));  goto L_0013A8E0; }
    set32(c.r[4], c.r[17].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A830u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 272u, depth + 1u); else { c.pc = 0x0013A950u; return; } if (c.pc != 0x0013A830u) [[unlikely]] return; }
L_0013A830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0013A88C; } }
L_0013A838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A840u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 271u, depth + 1u); else { c.pc = 0x0013A940u; return; } if (c.pc != 0x0013A840u) [[unlikely]] return; }
    goto L_0013A840;
L_0013A83C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0013A840:
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_0013A880; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A85Cu); set32(c.r[4], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_000E(c, 271u, depth + 1u); else { c.pc = 0x0013A940u; return; } if (c.pc != 0x0013A85Cu) [[unlikely]] return; }
L_0013A85C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A86Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 271u, depth + 1u); else { c.pc = 0x0013A940u; return; } if (c.pc != 0x0013A86Cu) [[unlikely]] return; }
L_0013A86C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A878u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 270u, depth + 1u); else { c.pc = 0x0013A920u; return; } if (c.pc != 0x0013A878u) [[unlikely]] return; }
L_0013A878:
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0013A880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A888u); set32(c.r[4], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_000E(c, 272u, depth + 1u); else { c.pc = 0x0013A950u; return; } if (c.pc != 0x0013A888u) [[unlikely]] return; }
L_0013A888:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0013A88C:
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A898u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 271u, depth + 1u); else { c.pc = 0x0013A940u; return; } if (c.pc != 0x0013A898u) [[unlikely]] return; }
L_0013A898:
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[17].w[0] + 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013A838u | kUnwind; return; } goto L_0013A838; }
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A8B4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 271u, depth + 1u); else { c.pc = 0x0013A940u; return; } if (c.pc != 0x0013A8B4u) [[unlikely]] return; }
L_0013A8B4:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A8C8u); c.r[16].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_000E(c, 271u, depth + 1u); else { c.pc = 0x0013A940u; return; } if (c.pc != 0x0013A8C8u) [[unlikely]] return; }
L_0013A8C8:
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A8D8u); set32(c.r[4], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_000E(c, 271u, depth + 1u); else { c.pc = 0x0013A940u; return; } if (c.pc != 0x0013A8D8u) [[unlikely]] return; }
L_0013A8D8:
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 2;
L_0013A8E0:
    set32(c.r[4], c.r[20].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 7;
L_0013A8FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0013A920:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 4u));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 6u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0013A940:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0013A950:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0013A964; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013A964:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A970:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { set32(c.r[4], ld32((c.r[2].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00138D10u | kUnwind; return; } goto L_00138D10; }
L_0013A980:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0013A990:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0xF0000000u);  if (t) { goto L_0013A9BC; } }
L_0013A99C:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_0013A9BC; } }
    set32(c.r[3], c.r[3].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.budget -= 2;
L_0013A9BC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013A99Cu | kUnwind; return; } goto L_0013A99C; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A9D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_0013A9E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 80u)));  c.pc = t; return; }
L_0013A9F0:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0013AA24; } }
L_0013A9FC:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_0013AA24; }
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[5].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0013AA20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013AA44; } }
L_0013AA20:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0013AA24:
    c.r[1].d[0] = c.r[5].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0013AA44; }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013A9FCu | kUnwind; return; } goto L_0013A9FC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013AA44:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013AA50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 56u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AA78u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013A9D0u; return; } if (c.pc != 0x0013AA78u) [[unlikely]] return; }
L_0013AA78:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] + 52u);  goto L_0013AA88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0013AB34; } }
L_0013AA88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AA90u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 275u, depth + 1u); else { c.pc = 0x0013A990u; return; } if (c.pc != 0x0013AA90u) [[unlikely]] return; }
L_0013AA90:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AA9Cu); set32(c.r[4], c.r[19].w[0] + 56u);  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013A9D0u; return; } if (c.pc != 0x0013AA9Cu) [[unlikely]] return; }
L_0013AA9C:
    mmi::divu(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[19].w[0] + 56u);  if (t) { goto L_0013AB18; } }
L_0013AAAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AAB4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 274u, depth + 1u); else { c.pc = 0x0013A980u; return; } if (c.pc != 0x0013AAB4u) [[unlikely]] return; }
L_0013AAB4:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_0013AB08; }
    set32(c.r[4], c.r[19].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AACCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 274u, depth + 1u); else { c.pc = 0x0013A980u; return; } if (c.pc != 0x0013AACCu) [[unlikely]] return; }
L_0013AACC:
    c.r[6].d[0] = ld16((c.r[2].w[0] + 4u));
    set32(c.r[5], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AADCu); set32(c.r[4], c.r[19].w[0] + 72u);  if (depth < kMaxDepth) unit_000E(c, 273u, depth + 1u); else { c.pc = 0x0013A970u; return; } if (c.pc != 0x0013AADCu) [[unlikely]] return; }
L_0013AADC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AAE8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0013AAE8u) [[unlikely]] return; }
L_0013AAE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013AB04; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AAFCu); set32(c.r[4], c.r[19].w[0] + 56u);  if (depth < kMaxDepth) unit_000E(c, 274u, depth + 1u); else { c.pc = 0x0013A980u; return; } if (c.pc != 0x0013AAFCu) [[unlikely]] return; }
L_0013AAFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld16((c.r[2].w[0] + 4u));  if (t) { goto L_0013AB34; } }
L_0013AB04:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013AB08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AB10u); set32(c.r[4], c.r[19].w[0] + 52u);  if (depth < kMaxDepth) unit_000E(c, 272u, depth + 1u); else { c.pc = 0x0013A950u; return; } if (c.pc != 0x0013AB10u) [[unlikely]] return; }
L_0013AB10:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 56u);
    c.budget -= 2;
L_0013AB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AB20u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 274u, depth + 1u); else { c.pc = 0x0013A980u; return; } if (c.pc != 0x0013AB20u) [[unlikely]] return; }
L_0013AB20:
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[19].w[0] + 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013AAACu | kUnwind; return; } goto L_0013AAAC; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0013AB34:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 48u)));  goto L_0013AB48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013AB54; } }
L_0013AB48:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0013AB54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0013AB70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 84u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013ACB8; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0013ACBC; }
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[20].w[0] + 72u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[18], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ABCCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 273u, depth + 1u); else { c.pc = 0x0013A970u; return; } if (c.pc != 0x0013ABCCu) [[unlikely]] return; }
L_0013ABCC:
    set32(c.r[4], c.r[20].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ABD8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 275u, depth + 1u); else { c.pc = 0x0013A990u; return; } if (c.pc != 0x0013ABD8u) [[unlikely]] return; }
L_0013ABD8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ABE4u); set32(c.r[4], c.r[20].w[0] + 56u);  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013A9D0u; return; } if (c.pc != 0x0013ABE4u) [[unlikely]] return; }
L_0013ABE4:
    mmi::divu(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0013AC00; } }
L_0013ABF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ABFCu); set32(c.r[4], c.r[20].w[0] + 52u);  if (depth < kMaxDepth) unit_000E(c, 272u, depth + 1u); else { c.pc = 0x0013A950u; return; } if (c.pc != 0x0013ABFCu) [[unlikely]] return; }
L_0013ABFC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0013AC00:
    set32(c.r[4], c.r[20].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AC0Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 271u, depth + 1u); else { c.pc = 0x0013A940u; return; } if (c.pc != 0x0013AC0Cu) [[unlikely]] return; }
L_0013AC0C:
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013ABF4u | kUnwind; return; } goto L_0013ABF4; }
    set32(c.r[4], c.r[20].w[0] + 56u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AC2Cu); c.r[18].d[0] = c.r[18].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000E(c, 271u, depth + 1u); else { c.pc = 0x0013A940u; return; } if (c.pc != 0x0013AC2Cu) [[unlikely]] return; }
L_0013AC2C:
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[4], c.r[20].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AC3Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 271u, depth + 1u); else { c.pc = 0x0013A940u; return; } if (c.pc != 0x0013AC3Cu) [[unlikely]] return; }
L_0013AC3C:
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 56u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AC50u); c.r[16].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000E(c, 271u, depth + 1u); else { c.pc = 0x0013A940u; return; } if (c.pc != 0x0013AC50u) [[unlikely]] return; }
L_0013AC50:
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0013AC84; } }
L_0013AC64:
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 44u)));  goto L_0013AC9C; }
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 3;
L_0013AC84:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 48u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013AC64u | kUnwind; return; } goto L_0013AC64; }
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 1;
L_0013AC9C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 80u)));  goto L_0013ACB0; }
    set32(c.r[3], 0u - 1u);
    st32((c.r[20].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 3;
L_0013ACB0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 2;
L_0013ACB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0013ACBC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0013ACE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 32u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0013AD5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 48u)));  if (t) { goto L_0013AD30; } }
L_0013AD0C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_0013AD28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AD24u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x0013AD24u) [[unlikely]] return; }
L_0013AD24:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_0013AD28:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_0013AD30:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013AD0Cu | kUnwind; return; } goto L_0013AD0C; }
L_0013AD5C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0013AD80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 32u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013AE34; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_0013AE04; } }
L_0013ADC4:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[18], ld32((c.r[3].w[0] - 4u)));
    c.budget -= 4;
    if (c.r[18].d[0] == 0ull) { c.r[3].d[0] = c.r[17].d[0] << 32;  goto L_0013ADFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ADDCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x0013ADDCu) [[unlikely]] return; }
L_0013ADDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 5018u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ADF0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 413u, depth + 1u); else { c.pc = 0x0012FF20u; return; } if (c.pc != 0x0013ADF0u) [[unlikely]] return; }
L_0013ADF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ADF8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x0013ADF8u) [[unlikely]] return; }
L_0013ADF8:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.budget -= 1;
L_0013ADFC:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[17], c.r[3].w[0] - 4u);
    c.budget -= 2;
L_0013AE04:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 12;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013ADC4u | kUnwind; return; } goto L_0013ADC4; }
L_0013AE34:
    st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0013AE50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013AF9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25104u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_0013AED8; } }
L_0013AEA0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_0013AED0; }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 10u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013AECC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AECCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013AECCu) [[unlikely]] return; }
L_0013AECC:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_0013AED0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] - 4u);
    c.budget -= 2;
L_0013AED8:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013AEA0u | kUnwind; return; } goto L_0013AEA0; }
    set32(c.r[2], c.r[17].w[0] + 52u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 36u);  goto L_0013AF3C; }
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013AF38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013AF38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013AF38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AF38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 346u, depth + 1u); else { c.pc = 0x0013B2B0u; return; } if (c.pc != 0x0013AF38u) [[unlikely]] return; }
L_0013AF38:
    set32(c.r[2], c.r[17].w[0] + 36u);
    c.budget -= 1;
L_0013AF3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0013AF7C; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013AF78; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013AF78; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013AF78; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013AF78; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013AF78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AF78u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0013AF78u) [[unlikely]] return; }
L_0013AF78:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013AF7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AF84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 69u, depth + 1u); else { c.pc = 0x00138E80u; return; } if (c.pc != 0x0013AF84u) [[unlikely]] return; }
L_0013AF84:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0013AFA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AF9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0013AF9Cu) [[unlikely]] return; }
L_0013AF9C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013AFA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0013AFC0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    c.r[7].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AFF4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000E(c, 74u, depth + 1u); else { c.pc = 0x00138F30u; return; } if (c.pc != 0x0013AFF4u) [[unlikely]] return; }
L_0013AFF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[20].w[0] + 36u);
    set32(c.r[2], c.r[2].w[0] - 25104u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B010u); st32((c.r[29].w[0] + 124u), 0u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0013B010u) [[unlikely]] return; }
L_0013B010:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0013B028; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B024u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0013B024u) [[unlikely]] return; }
L_0013B024:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0013B028:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_0013B03C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B038u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0013B038u) [[unlikely]] return; }
L_0013B038:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0013B03C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[6], c.r[29].w[0] + 124u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B058u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0004(c, 154u, depth + 1u); else { c.pc = 0x00112050u; return; } if (c.pc != 0x0013B058u) [[unlikely]] return; }
L_0013B058:
    set32(c.r[17], c.r[20].w[0] + 52u);
    set32(c.r[21], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[16], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B06Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0013B06Cu) [[unlikely]] return; }
L_0013B06C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0013B084; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B080u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0013B080u) [[unlikely]] return; }
L_0013B080:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0013B084:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_0013B098; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B094u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0013B094u) [[unlikely]] return; }
L_0013B094:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0013B098:
    set32(c.r[5], c.r[19].w[0] << 1);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[17].w[0]), c.r[21].w[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 31184u)));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 31180u));
    c.r[2].d[0] = ld16((c.r[28].w[0] - 31178u));
    st32((c.r[29].w[0] + 112u), c.r[7].w[0]);
    st16((c.r[29].w[0] + 116u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B0D0u); st16((c.r[29].w[0] + 118u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 343u, depth + 1u); else { c.pc = 0x0013B240u; return; } if (c.pc != 0x0013B0D0u) [[unlikely]] return; }
L_0013B0D0:
    st32((c.r[20].w[0] + 76u), 0u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 80u), 0u);
    st8((c.r[20].w[0] + 32u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[20].w[0] + 84u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
L_0013B100:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0013B110:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31192u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0013B12C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0013B13C; } }
L_0013B12C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B134u);  if (depth < kMaxDepth) unit_000E(c, 80u, depth + 1u); else { c.pc = 0x00138FF0u; return; } if (c.pc != 0x0013B134u) [[unlikely]] return; }
L_0013B134:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0013B13C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013B150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B174u); set32(c.r[4], c.r[4].w[0] - 13016u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0013B174u) [[unlikely]] return; }
L_0013B174:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0013B184; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013B194; } }
L_0013B184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B18Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 82u, depth + 1u); else { c.pc = 0x00139030u; return; } if (c.pc != 0x0013B18Cu) [[unlikely]] return; }
L_0013B18C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0013B194:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013B1B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 31208u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0013B1C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31192u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0013B1DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013B1E4; } }
L_0013B1DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B1E4u);  if (depth < kMaxDepth) unit_000E(c, 89u, depth + 1u); else { c.pc = 0x001390A0u; return; } if (c.pc != 0x0013B1E4u) [[unlikely]] return; }
L_0013B1E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013B1F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 31192u)));  c.pc = t; return; }
L_0013B200:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 5176u);  c.pc = t; return; }
L_0013B210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0013B224; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013B234; } }
L_0013B224:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B234u); set32(c.r[5], ld32((c.r[28].w[0] - 31208u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013B234u) [[unlikely]] return; }
L_0013B234:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013B240:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0013B278; } }
    set32(c.r[6], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B270u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 352u, depth + 1u); else { c.pc = 0x0013B3C0u; return; } if (c.pc != 0x0013B270u) [[unlikely]] return; }
L_0013B270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0013B2A4; } }
L_0013B278:
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013B2A0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B2A0u); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 350u, depth + 1u); else { c.pc = 0x0013B320u; return; } if (c.pc != 0x0013B2A0u) [[unlikely]] return; }
L_0013B2A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0013B2A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013B2B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013B308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B2D4u);  if (depth < kMaxDepth) unit_000E(c, 366u, depth + 1u); else { c.pc = 0x0013B780u; return; } if (c.pc != 0x0013B2D4u) [[unlikely]] return; }
L_0013B2D4:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0013B2F4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013B2F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B2F0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0013B2F0u) [[unlikely]] return; }
L_0013B2F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0013B2F4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0013B30C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B308u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0013B308u) [[unlikely]] return; }
L_0013B308:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013B30C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013B320:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[6].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  goto L_0013B330; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013B3B0; } }
L_0013B330:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] - c.r[6].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_0013B350; } }
    set32(c.r[2], c.r[3].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_0013B350:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);  goto L_0013B390; }
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0013B380; } }
L_0013B364:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[8].w[0] + 4u));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[8].w[0] + 6u));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 7;
L_0013B380:
    c.r[2].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[8].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B364u | kUnwind; return; } goto L_0013B364; }
    set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_0013B390:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));  if (t) { goto L_0013B3A0; } }
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_0013B3A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0013B3B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013B3C0:
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
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0013B760; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 8u)));  goto L_0013B42C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B420u); set32(c.r[5], c.r[5].w[0] - 4912u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0013B420u) [[unlikely]] return; }
L_0013B420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B428u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0013B428u) [[unlikely]] return; }
L_0013B428:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_0013B42C:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  goto L_0013B5C8; }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] - c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_0013B460; } }
    set32(c.r[3], c.r[3].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_0013B460:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] << 3);  goto L_0013B4F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0013B4A0; } }
L_0013B474:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_0013B490; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_0013B490:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0013B4A0:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B474u | kUnwind; return; } goto L_0013B474; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0013B4E0; } }
L_0013B4B4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_0013B4D0; }
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_0013B4D0:
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0013B4E0:
    c.r[3].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B4B4u | kUnwind; return; } goto L_0013B4B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013B594; } }
L_0013B4F4:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[6].w[0] - c.r[5].w[0]);  if (t) { goto L_0013B52C; } }
L_0013B500:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_0013B51C; }
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[7].w[0]), c.f[1]);
    st32((c.r[7].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_0013B51C:
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0013B52C:
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B500u | kUnwind; return; } goto L_0013B500; } }
    set32(c.r[3], c.r[4].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);  goto L_0013B588; }
    c.r[1].d[0] = c.r[17].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013B560; } }
    set32(c.r[17], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_0013B560:
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013B588; } }
L_0013B56C:
    set32(c.r[6], c.r[6].w[0] - 8u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 4u));
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0013B588:
    c.r[1].d[0] = c.r[19].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B56Cu | kUnwind; return; } goto L_0013B56C; }
L_0013B594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013B5B8; } }
L_0013B59C:
    set32(c.r[18], c.r[18].w[0] - 1u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    st16((c.r[19].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    st16((c.r[19].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 7;
L_0013B5B8:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B59Cu | kUnwind; return; } goto L_0013B59C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0013B764; } }
L_0013B5C8:
    set32(c.r[16], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_0013B5E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0013B5F0; } }
L_0013B5E8:
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0013B5F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_0013B610; } }
L_0013B5F8:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_0013B60C; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_0013B60C:
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0013B610:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B5F8u | kUnwind; return; } goto L_0013B5F8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B624u); set32(c.r[4], c.r[16].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013B624u) [[unlikely]] return; }
L_0013B624:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[29].w[0] + 100u), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    st32((c.r[29].w[0] + 108u), c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_0013B670; } }
L_0013B644:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_0013B660; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_0013B660:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_0013B670:
    c.r[3].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B644u | kUnwind; return; } goto L_0013B644; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013B6B0; } }
L_0013B684:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_0013B6A0; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_0013B6A0:
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_0013B6B0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B684u | kUnwind; return; } goto L_0013B684; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_0013B6F0; } }
L_0013B6C0:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_0013B6DC; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_0013B6DC:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_0013B6F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B6C0u | kUnwind; return; } goto L_0013B6C0; } }
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[20].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  goto L_0013B748; }
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
L_0013B748:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 104u), 0u);  if (t) { goto L_0013B760; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013B760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B760u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0013B760u) [[unlikely]] return; }
L_0013B760:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0013B764:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0013B780:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_0013B790:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013B800; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25024u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0013B7E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27696u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0013B7E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0013B7E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B7E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0013B7E8u) [[unlikely]] return; }
L_0013B7E8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0013B804; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B800u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0013B800u) [[unlikely]] return; }
L_0013B800:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013B804:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013B820:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0013B848; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_0013B840; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0013B840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013B84C; } }
L_0013B848:
    set32(c.r[2], c.r[2].w[0] - 4880u);
    c.budget -= 1;
L_0013B84C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013B860:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 4704u);  c.pc = t; return; }
L_0013B870:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
L_0013B880:
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[6], c.r[6].w[0] - 4640u);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 10u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B8A4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x0013B8A4u) [[unlikely]] return; }
L_0013B8A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B8B4u); set32(c.r[5], c.r[5].w[0] - 4638u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0013B8B4u) [[unlikely]] return; }
L_0013B8B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_0013B8D8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B8CCu); set32(c.r[5], c.r[5].w[0] - 4633u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0013B8CCu) [[unlikely]] return; }
L_0013B8CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0013B8E8; }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_0013B8D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B8E0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0013B8E0u) [[unlikely]] return; }
L_0013B8E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013B9CC; } }
L_0013B8E8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B8F4u); set32(c.r[5], c.r[5].w[0] - 4638u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0013B8F4u) [[unlikely]] return; }
L_0013B8F4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B900u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x0013B900u) [[unlikely]] return; }
L_0013B900:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B910u); set32(c.r[5], c.r[5].w[0] - 4633u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0013B910u) [[unlikely]] return; }
L_0013B910:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B91Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x0013B91Cu) [[unlikely]] return; }
L_0013B91C:
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B92Cu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0013B92Cu) [[unlikely]] return; }
L_0013B92C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0013B990; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B940u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x0013B940u) [[unlikely]] return; }
L_0013B940:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0013B958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 120u)));  if (t) { goto L_0013B95C; } }
L_0013B958:
    set32(c.r[6], c.r[29].w[0] + 113u);
    c.budget -= 1;
L_0013B95C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B96Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 74u, depth + 1u); else { c.pc = 0x00138F30u; return; } if (c.pc != 0x0013B96Cu) [[unlikely]] return; }
L_0013B96C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 24992u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B980u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 395u, depth + 1u); else { c.pc = 0x0012B2D0u; return; } if (c.pc != 0x0013B980u) [[unlikely]] return; }
L_0013B980:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B98Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000A(c, 320u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x0013B98Cu) [[unlikely]] return; }
L_0013B98C:
    st32((c.r[17].w[0] + 60u), 0u);
    c.budget -= 1;
L_0013B990:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_0013B9A8; }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B9A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0013B9A4u) [[unlikely]] return; }
L_0013B9A4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_0013B9A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B9B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0013B9B0u) [[unlikely]] return; }
L_0013B9B0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B9BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0013B9BCu) [[unlikely]] return; }
L_0013B9BC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B9C8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0013B9C8u) [[unlikely]] return; }
L_0013B9C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013B9CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0013B9F0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BA14u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 36u, depth + 1u); else { c.pc = 0x00138A30u; return; } if (c.pc != 0x0013BA14u) [[unlikely]] return; }
L_0013BA14:
    c.r[3].d[0] = c.r[17].d[0] & 12ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0013BB20; }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0013BA30; }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_0013BA30:
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BA40u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x0013BA40u) [[unlikely]] return; }
L_0013BA40:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[29].w[0] + 129u);  goto L_0013BA54; }
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_0013BA54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BA68u); set32(c.r[5], c.r[5].w[0] - 4628u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x0013BA68u) [[unlikely]] return; }
L_0013BA68:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_0013BAA8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] - 4628u);
    set32(c.r[6], c.r[29].w[0] + 152u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BA88u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000E(c, 418u, depth + 1u); else { c.pc = 0x0013BD40u; return; } if (c.pc != 0x0013BA88u) [[unlikely]] return; }
L_0013BA88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BA94u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0013BA94u) [[unlikely]] return; }
L_0013BA94:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BAA0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0013BAA0u) [[unlikely]] return; }
L_0013BAA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_0013BAB8; } }
L_0013BAA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BAB4u); set32(c.r[6], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_000E(c, 412u, depth + 1u); else { c.pc = 0x0013BC60u; return; } if (c.pc != 0x0013BAB4u) [[unlikely]] return; }
L_0013BAB4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_0013BAB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BAC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0013BAC0u) [[unlikely]] return; }
L_0013BAC0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BAD0u); set32(c.r[5], c.r[5].w[0] - 4612u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x0013BAD0u) [[unlikely]] return; }
L_0013BAD0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0013BB10; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[5].w[0] - 4612u);
    set32(c.r[6], c.r[29].w[0] + 156u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BAF0u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000E(c, 408u, depth + 1u); else { c.pc = 0x0013BBB0u; return; } if (c.pc != 0x0013BAF0u) [[unlikely]] return; }
L_0013BAF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BAFCu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0013BAFCu) [[unlikely]] return; }
L_0013BAFC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BB08u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0013BB08u) [[unlikely]] return; }
L_0013BB08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013BB1C; } }
L_0013BB10:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BB1Cu); set32(c.r[6], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_000E(c, 406u, depth + 1u); else { c.pc = 0x0013BB40u; return; } if (c.pc != 0x0013BB1Cu) [[unlikely]] return; }
L_0013BB1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0013BB20:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0013BB40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], c.r[5].w[0] << 5);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 4u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[16], ld32((c.r[6].w[0])));
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[17].w[0] + 4u);
    c.budget -= 14;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  goto L_0013BB8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BB80u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0013BB80u) [[unlikely]] return; }
L_0013BB80:
    set32(c.r[3], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
L_0013BB8C:
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013BBB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BBD8u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x0013BBD8u) [[unlikely]] return; }
L_0013BBD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[18].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st16((c.r[18].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 4u);
    st32((c.r[18].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[16].w[0])));
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 12;
    if (c.r[4].d[0] == c.r[5].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_0013BC1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BC10u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0013BC10u) [[unlikely]] return; }
L_0013BC10:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
L_0013BC1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[16].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BC44u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013BC44u) [[unlikely]] return; }
L_0013BC44:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013BC60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[5], c.r[5].w[0] << 5);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], 0u + 512u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[19], ld32((c.r[6].w[0])));
    set32(c.r[17], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BC98u); st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0013BC98u) [[unlikely]] return; }
L_0013BC98:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[18], 0u + 16u);  if (t) { goto L_0013BCCC; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 4u)));  goto L_0013BCCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BCC4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0013BCC4u) [[unlikely]] return; }
L_0013BCC4:
    set32(c.r[2], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0013BCCC:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0013BD10; }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));  goto L_0013BCF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BCF4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0013BCF4u) [[unlikely]] return; }
L_0013BCF4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_0013BCF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BD00u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0013BD00u) [[unlikely]] return; }
L_0013BD00:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
L_0013BD10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BD18u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x0013BD18u) [[unlikely]] return; }
L_0013BD18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0013BD40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BD70u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x0013BD70u) [[unlikely]] return; }
L_0013BD70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[20].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    st16((c.r[20].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 512u);
    st32((c.r[20].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[16].w[0])));
    st16((c.r[20].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BD9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0013BD9Cu) [[unlikely]] return; }
L_0013BD9C:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[17], 0u + 16u);  if (t) { goto L_0013BDD0; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[17], ld32((c.r[20].w[0] + 4u)));  goto L_0013BDD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BDC8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0013BDC8u) [[unlikely]] return; }
L_0013BDC8:
    set32(c.r[2], c.r[20].w[0] + 4u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0013BDD0:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 20u)));  goto L_0013BE14; }
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));  goto L_0013BDFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BDF8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0013BDF8u) [[unlikely]] return; }
L_0013BDF8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));
    c.budget -= 1;
L_0013BDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BE04u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0013BE04u) [[unlikely]] return; }
L_0013BE04:
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 4;
L_0013BE14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BE1Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x0013BE1Cu) [[unlikely]] return; }
L_0013BE1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BE40u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013BE40u) [[unlikely]] return; }
L_0013BE40:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0013BE70:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00138D80u | kUnwind; return; } goto L_00138D80; }
L_0013BE80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0013BE90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013BEE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 24992u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BEC4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0013BEC4u) [[unlikely]] return; }
L_0013BEC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BED0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 69u, depth + 1u); else { c.pc = 0x00138E80u; return; } if (c.pc != 0x0013BED0u) [[unlikely]] return; }
L_0013BED0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0013BEEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BEE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0013BEE8u) [[unlikely]] return; }
L_0013BEE8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013BEEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013BF00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0013BF2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[6].w[0] + 8u)));  if (t) { goto L_0013BF30; } }
L_0013BF2C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0013BF30:
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BF3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 74u, depth + 1u); else { c.pc = 0x00138F30u; return; } if (c.pc != 0x0013BF3Cu) [[unlikely]] return; }
L_0013BF3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 24992u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BF50u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 395u, depth + 1u); else { c.pc = 0x0012B2D0u; return; } if (c.pc != 0x0013BF50u) [[unlikely]] return; }
L_0013BF50:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BF5Cu); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000A(c, 320u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x0013BF5Cu) [[unlikely]] return; }
L_0013BF5C:
    st32((c.r[17].w[0] + 60u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013BF80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31176u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0013BF9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0013BFAC; } }
L_0013BF9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BFA4u);  if (depth < kMaxDepth) unit_000E(c, 80u, depth + 1u); else { c.pc = 0x00138FF0u; return; } if (c.pc != 0x0013BFA4u) [[unlikely]] return; }
L_0013BFA4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0013BFAC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013BFC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BFE4u); set32(c.r[4], c.r[4].w[0] - 13072u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0013BFE4u) [[unlikely]] return; }
L_0013BFE4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0013BFF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_000F(c, 2u, depth); } }
L_0013BFF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013BFFCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 82u, depth + 1u); else { c.pc = 0x00139030u; return; } if (c.pc != 0x0013BFFCu) [[unlikely]] return; }
L_0013BFFC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
    [[clang::musttail]] return unit_000F(c, 1u, depth);
}

}
