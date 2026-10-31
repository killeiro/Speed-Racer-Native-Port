#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BB[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0,
    0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 94, 0, 0, 95, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98,
    0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 0, 106, 0,
    0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0,
    0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117,
    0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 127,
    0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0,
    0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0,
    162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0,
    0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0,
    0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178,
    0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184,
    0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0,
    0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0,
    216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 227,
    0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0,
    0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0,
    244, 0, 245, 0, 246, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 254,
    0, 0, 255, 0, 256, 0, 257, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0,
    0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269,
    0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272,
    0, 0, 273, 0, 274, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0,
    0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0,
    0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0,
    0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0,
    0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304,
    0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0,
    0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 312,
    0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0,
    320, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0,
    327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0,
    331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341,
    0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0,
    350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355,
    0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0,
    360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0,
    0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0,
    0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385,
    0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 393, 0, 0, 394, 0, 0,
    395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401,
    0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0,
    0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0,
    0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0,
    421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426,
    0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432,
    0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444,
    0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0,
    457, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0,
    0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0,
};

void unit_00BB(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003EC000;
    case 2u: goto L_003EC010;
    case 3u: goto L_003EC09C;
    case 4u: goto L_003EC0D4;
    case 5u: goto L_003EC0F0;
    case 6u: goto L_003EC120;
    case 7u: goto L_003EC17C;
    case 8u: goto L_003EC18C;
    case 9u: goto L_003EC1BC;
    case 10u: goto L_003EC1C4;
    case 11u: goto L_003EC1D8;
    case 12u: goto L_003EC21C;
    case 13u: goto L_003EC230;
    case 14u: goto L_003EC25C;
    case 15u: goto L_003EC288;
    case 16u: goto L_003EC2A0;
    case 17u: goto L_003EC2A8;
    case 18u: goto L_003EC2BC;
    case 19u: goto L_003EC310;
    case 20u: goto L_003EC344;
    case 21u: goto L_003EC358;
    case 22u: goto L_003EC380;
    case 23u: goto L_003EC3BC;
    case 24u: goto L_003EC3D0;
    case 25u: goto L_003EC400;
    case 26u: goto L_003EC424;
    case 27u: goto L_003EC440;
    case 28u: goto L_003EC458;
    case 29u: goto L_003EC470;
    case 30u: goto L_003EC4AC;
    case 31u: goto L_003EC4C0;
    case 32u: goto L_003EC4F0;
    case 33u: goto L_003EC500;
    case 34u: goto L_003EC550;
    case 35u: goto L_003EC56C;
    case 36u: goto L_003EC58C;
    case 37u: goto L_003EC5A8;
    case 38u: goto L_003EC5C4;
    case 39u: goto L_003EC6B8;
    case 40u: goto L_003EC6C0;
    case 41u: goto L_003EC6D0;
    case 42u: goto L_003EC734;
    case 43u: goto L_003EC748;
    case 44u: goto L_003EC764;
    case 45u: goto L_003EC780;
    case 46u: goto L_003EC884;
    case 47u: goto L_003EC8C0;
    case 48u: goto L_003EC8EC;
    case 49u: goto L_003EC938;
    case 50u: goto L_003EC9C0;
    case 51u: goto L_003EC9F0;
    case 52u: goto L_003ECA3C;
    case 53u: goto L_003ECA5C;
    case 54u: goto L_003ECA80;
    case 55u: goto L_003ECB00;
    case 56u: goto L_003ECB40;
    case 57u: goto L_003ECB50;
    case 58u: goto L_003ECB5C;
    case 59u: goto L_003ECB70;
    case 60u: goto L_003ECB80;
    case 61u: goto L_003ECBDC;
    case 62u: goto L_003ECC90;
    case 63u: goto L_003ECCD4;
    case 64u: goto L_003ECD04;
    case 65u: goto L_003ECD48;
    case 66u: goto L_003ECD70;
    case 67u: goto L_003ECDA4;
    case 68u: goto L_003ECE2C;
    case 69u: goto L_003ECE60;
    case 70u: goto L_003ECEA0;
    case 71u: goto L_003ECF40;
    case 72u: goto L_003ECF6C;
    case 73u: goto L_003ED010;
    case 74u: goto L_003ED020;
    case 75u: goto L_003ED040;
    case 76u: goto L_003ED068;
    case 77u: goto L_003ED080;
    case 78u: goto L_003ED0CC;
    case 79u: goto L_003ED0E0;
    case 80u: goto L_003ED11C;
    case 81u: goto L_003ED170;
    case 82u: goto L_003ED190;
    case 83u: goto L_003ED1AC;
    case 84u: goto L_003ED1D0;
    case 85u: goto L_003ED1E0;
    case 86u: goto L_003ED1F0;
    case 87u: goto L_003ED200;
    case 88u: goto L_003ED24C;
    case 89u: goto L_003ED258;
    case 90u: goto L_003ED290;
    case 91u: goto L_003ED2A8;
    case 92u: goto L_003ED3B8;
    case 93u: goto L_003ED3C0;
    case 94u: goto L_003ED3C8;
    case 95u: goto L_003ED3D4;
    case 96u: goto L_003ED3DC;
    case 97u: goto L_003ED3E4;
    case 98u: goto L_003ED47C;
    case 99u: goto L_003ED488;
    case 100u: goto L_003ED490;
    case 101u: goto L_003ED4B8;
    case 102u: goto L_003ED4C0;
    case 103u: goto L_003ED4D8;
    case 104u: goto L_003ED4E4;
    case 105u: goto L_003ED4EC;
    case 106u: goto L_003ED4F8;
    case 107u: goto L_003ED504;
    case 108u: goto L_003ED55C;
    case 109u: goto L_003ED578;
    case 110u: goto L_003ED594;
    case 111u: goto L_003ED5D0;
    case 112u: goto L_003ED5E0;
    case 113u: goto L_003ED600;
    case 114u: goto L_003ED624;
    case 115u: goto L_003ED65C;
    case 116u: goto L_003ED680;
    case 117u: goto L_003ED6FC;
    case 118u: goto L_003ED70C;
    case 119u: goto L_003ED728;
    case 120u: goto L_003ED73C;
    case 121u: goto L_003ED74C;
    case 122u: goto L_003ED7C4;
    case 123u: goto L_003ED834;
    case 124u: goto L_003ED880;
    case 125u: goto L_003ED8E0;
    case 126u: goto L_003ED8F0;
    case 127u: goto L_003ED8FC;
    case 128u: goto L_003ED904;
    case 129u: goto L_003ED910;
    case 130u: goto L_003EDAE0;
    case 131u: goto L_003EDAF8;
    case 132u: goto L_003EDB50;
    case 133u: goto L_003EDBA4;
    case 134u: goto L_003EDBC0;
    case 135u: goto L_003EDBD4;
    case 136u: goto L_003EDBF0;
    case 137u: goto L_003EDC0C;
    case 138u: goto L_003EDC48;
    case 139u: goto L_003EDCF0;
    case 140u: goto L_003EDD30;
    case 141u: goto L_003EDD40;
    case 142u: goto L_003EDD58;
    case 143u: goto L_003EDD78;
    case 144u: goto L_003EDD88;
    case 145u: goto L_003EDDA4;
    case 146u: goto L_003EDDB8;
    case 147u: goto L_003EDDC8;
    case 148u: goto L_003EDDE0;
    case 149u: goto L_003EDDF8;
    case 150u: goto L_003EDE64;
    case 151u: goto L_003EDE90;
    case 152u: goto L_003EDEAC;
    case 153u: goto L_003EDEB8;
    case 154u: goto L_003EDEC8;
    case 155u: goto L_003EDEEC;
    case 156u: goto L_003EDF0C;
    case 157u: goto L_003EDF1C;
    case 158u: goto L_003EDF38;
    case 159u: goto L_003EDF4C;
    case 160u: goto L_003EDF5C;
    case 161u: goto L_003EDF74;
    case 162u: goto L_003EDF80;
    case 163u: goto L_003EDF94;
    case 164u: goto L_003EDFB4;
    case 165u: goto L_003EDFC4;
    case 166u: goto L_003EDFE0;
    case 167u: goto L_003EDFF4;
    case 168u: goto L_003EE004;
    case 169u: goto L_003EE018;
    case 170u: goto L_003EE030;
    case 171u: goto L_003EE050;
    case 172u: goto L_003EE060;
    case 173u: goto L_003EE084;
    case 174u: goto L_003EE094;
    case 175u: goto L_003EE0BC;
    case 176u: goto L_003EE0CC;
    case 177u: goto L_003EE0E8;
    case 178u: goto L_003EE0FC;
    case 179u: goto L_003EE10C;
    case 180u: goto L_003EE118;
    case 181u: goto L_003EE130;
    case 182u: goto L_003EE150;
    case 183u: goto L_003EE160;
    case 184u: goto L_003EE17C;
    case 185u: goto L_003EE190;
    case 186u: goto L_003EE1A0;
    case 187u: goto L_003EE1C4;
    case 188u: goto L_003EE1D4;
    case 189u: goto L_003EE200;
    case 190u: goto L_003EE210;
    case 191u: goto L_003EE230;
    case 192u: goto L_003EE248;
    case 193u: goto L_003EE254;
    case 194u: goto L_003EE26C;
    case 195u: goto L_003EE28C;
    case 196u: goto L_003EE29C;
    case 197u: goto L_003EE2B8;
    case 198u: goto L_003EE2CC;
    case 199u: goto L_003EE2DC;
    case 200u: goto L_003EE300;
    case 201u: goto L_003EE310;
    case 202u: goto L_003EE33C;
    case 203u: goto L_003EE34C;
    case 204u: goto L_003EE36C;
    case 205u: goto L_003EE394;
    case 206u: goto L_003EE3A0;
    case 207u: goto L_003EE3B0;
    case 208u: goto L_003EE424;
    case 209u: goto L_003EE430;
    case 210u: goto L_003EE43C;
    case 211u: goto L_003EE448;
    case 212u: goto L_003EE458;
    case 213u: goto L_003EE4DC;
    case 214u: goto L_003EE4E8;
    case 215u: goto L_003EE4F4;
    case 216u: goto L_003EE500;
    case 217u: goto L_003EE510;
    case 218u: goto L_003EE52C;
    case 219u: goto L_003EE538;
    case 220u: goto L_003EE544;
    case 221u: goto L_003EE550;
    case 222u: goto L_003EE55C;
    case 223u: goto L_003EE568;
    case 224u: goto L_003EE5DC;
    case 225u: goto L_003EE5E8;
    case 226u: goto L_003EE5F4;
    case 227u: goto L_003EE5FC;
    case 228u: goto L_003EE618;
    case 229u: goto L_003EE628;
    case 230u: goto L_003EE644;
    case 231u: goto L_003EE658;
    case 232u: goto L_003EE668;
    case 233u: goto L_003EE684;
    case 234u: goto L_003EE694;
    case 235u: goto L_003EE6B0;
    case 236u: goto L_003EE6C4;
    case 237u: goto L_003EE6D4;
    case 238u: goto L_003EE6F0;
    case 239u: goto L_003EE700;
    case 240u: goto L_003EE71C;
    case 241u: goto L_003EE730;
    case 242u: goto L_003EE740;
    case 243u: goto L_003EE768;
    case 244u: goto L_003EE780;
    case 245u: goto L_003EE788;
    case 246u: goto L_003EE790;
    case 247u: goto L_003EE79C;
    case 248u: goto L_003EE7AC;
    case 249u: goto L_003EE80C;
    case 250u: goto L_003EE82C;
    case 251u: goto L_003EE83C;
    case 252u: goto L_003EE858;
    case 253u: goto L_003EE86C;
    case 254u: goto L_003EE87C;
    case 255u: goto L_003EE888;
    case 256u: goto L_003EE890;
    case 257u: goto L_003EE898;
    case 258u: goto L_003EE8A4;
    case 259u: goto L_003EE8B4;
    case 260u: goto L_003EE8D4;
    case 261u: goto L_003EE8E0;
    case 262u: goto L_003EE8EC;
    case 263u: goto L_003EE904;
    case 264u: goto L_003EE910;
    case 265u: goto L_003EE91C;
    case 266u: goto L_003EE938;
    case 267u: goto L_003EE948;
    case 268u: goto L_003EE954;
    case 269u: goto L_003EE97C;
    case 270u: goto L_003EE988;
    case 271u: goto L_003EE994;
    case 272u: goto L_003EE9FC;
    case 273u: goto L_003EEA08;
    case 274u: goto L_003EEA10;
    case 275u: goto L_003EEA18;
    case 276u: goto L_003EEA20;
    case 277u: goto L_003EEA40;
    case 278u: goto L_003EEA88;
    case 279u: goto L_003EEA9C;
    case 280u: goto L_003EEAAC;
    case 281u: goto L_003EEAC8;
    case 282u: goto L_003EEAD4;
    case 283u: goto L_003EEAF4;
    case 284u: goto L_003EEB04;
    case 285u: goto L_003EEB20;
    case 286u: goto L_003EEB40;
    case 287u: goto L_003EEB50;
    case 288u: goto L_003EEB6C;
    case 289u: goto L_003EEB8C;
    case 290u: goto L_003EEB9C;
    case 291u: goto L_003EEBB8;
    case 292u: goto L_003EEBD8;
    case 293u: goto L_003EEBE8;
    case 294u: goto L_003EEC04;
    case 295u: goto L_003EEC24;
    case 296u: goto L_003EEC34;
    case 297u: goto L_003EEC50;
    case 298u: goto L_003EEC64;
    case 299u: goto L_003EEC84;
    case 300u: goto L_003EEC94;
    case 301u: goto L_003EECB0;
    case 302u: goto L_003EECD0;
    case 303u: goto L_003EECE0;
    case 304u: goto L_003EECFC;
    case 305u: goto L_003EED1C;
    case 306u: goto L_003EED2C;
    case 307u: goto L_003EED48;
    case 308u: goto L_003EED74;
    case 309u: goto L_003EED90;
    case 310u: goto L_003EEDD8;
    case 311u: goto L_003EEDE8;
    case 312u: goto L_003EEDFC;
    case 313u: goto L_003EEE0C;
    case 314u: goto L_003EEE20;
    case 315u: goto L_003EEE30;
    case 316u: goto L_003EEE38;
    case 317u: goto L_003EEE4C;
    case 318u: goto L_003EEE5C;
    case 319u: goto L_003EEE70;
    case 320u: goto L_003EEE80;
    case 321u: goto L_003EEE94;
    case 322u: goto L_003EEEA4;
    case 323u: goto L_003EEEB8;
    case 324u: goto L_003EEEC8;
    case 325u: goto L_003EEEDC;
    case 326u: goto L_003EEEEC;
    case 327u: goto L_003EEF00;
    case 328u: goto L_003EEF20;
    case 329u: goto L_003EEF54;
    case 330u: goto L_003EEF64;
    case 331u: goto L_003EEF80;
    case 332u: goto L_003EEF9C;
    case 333u: goto L_003EEFC0;
    case 334u: goto L_003EEFF0;
    case 335u: goto L_003EF03C;
    case 336u: goto L_003EF04C;
    case 337u: goto L_003EF094;
    case 338u: goto L_003EF0BC;
    case 339u: goto L_003EF0CC;
    case 340u: goto L_003EF0E8;
    case 341u: goto L_003EF0FC;
    case 342u: goto L_003EF10C;
    case 343u: goto L_003EF128;
    case 344u: goto L_003EF160;
    case 345u: goto L_003EF194;
    case 346u: goto L_003EF1A4;
    case 347u: goto L_003EF1C0;
    case 348u: goto L_003EF1D4;
    case 349u: goto L_003EF1E4;
    case 350u: goto L_003EF200;
    case 351u: goto L_003EF214;
    case 352u: goto L_003EF23C;
    case 353u: goto L_003EF24C;
    case 354u: goto L_003EF268;
    case 355u: goto L_003EF27C;
    case 356u: goto L_003EF28C;
    case 357u: goto L_003EF2B8;
    case 358u: goto L_003EF2D8;
    case 359u: goto L_003EF2F0;
    case 360u: goto L_003EF300;
    case 361u: goto L_003EF31C;
    case 362u: goto L_003EF340;
    case 363u: goto L_003EF374;
    case 364u: goto L_003EF384;
    case 365u: goto L_003EF3A0;
    case 366u: goto L_003EF3BC;
    case 367u: goto L_003EF3E0;
    case 368u: goto L_003EF414;
    case 369u: goto L_003EF420;
    case 370u: goto L_003EF45C;
    case 371u: goto L_003EF464;
    case 372u: goto L_003EF4A0;
    case 373u: goto L_003EF4CC;
    case 374u: goto L_003EF4F8;
    case 375u: goto L_003EF590;
    case 376u: goto L_003EF5B0;
    case 377u: goto L_003EF5CC;
    case 378u: goto L_003EF5DC;
    case 379u: goto L_003EF5F0;
    case 380u: goto L_003EF604;
    case 381u: goto L_003EF620;
    case 382u: goto L_003EF634;
    case 383u: goto L_003EF654;
    case 384u: goto L_003EF668;
    case 385u: goto L_003EF67C;
    case 386u: goto L_003EF68C;
    case 387u: goto L_003EF6A8;
    case 388u: goto L_003EF6E0;
    case 389u: goto L_003EF720;
    case 390u: goto L_003EF730;
    case 391u: goto L_003EF74C;
    case 392u: goto L_003EF758;
    case 393u: goto L_003EF768;
    case 394u: goto L_003EF774;
    case 395u: goto L_003EF780;
    case 396u: goto L_003EF798;
    case 397u: goto L_003EF7A8;
    case 398u: goto L_003EF7C0;
    case 399u: goto L_003EF7D0;
    case 400u: goto L_003EF7E8;
    case 401u: goto L_003EF7FC;
    case 402u: goto L_003EF810;
    case 403u: goto L_003EF830;
    case 404u: goto L_003EF840;
    case 405u: goto L_003EF854;
    case 406u: goto L_003EF868;
    case 407u: goto L_003EF888;
    case 408u: goto L_003EF89C;
    case 409u: goto L_003EF8AC;
    case 410u: goto L_003EF8C8;
    case 411u: goto L_003EF8DC;
    case 412u: goto L_003EF8EC;
    case 413u: goto L_003EF908;
    case 414u: goto L_003EF91C;
    case 415u: goto L_003EF92C;
    case 416u: goto L_003EF948;
    case 417u: goto L_003EF970;
    case 418u: goto L_003EF9B8;
    case 419u: goto L_003EF9C8;
    case 420u: goto L_003EF9F0;
    case 421u: goto L_003EFA00;
    case 422u: goto L_003EFA14;
    case 423u: goto L_003EFA28;
    case 424u: goto L_003EFA50;
    case 425u: goto L_003EFA60;
    case 426u: goto L_003EFA7C;
    case 427u: goto L_003EFA90;
    case 428u: goto L_003EFAA0;
    case 429u: goto L_003EFAB4;
    case 430u: goto L_003EFAC8;
    case 431u: goto L_003EFAE8;
    case 432u: goto L_003EFAFC;
    case 433u: goto L_003EFB10;
    case 434u: goto L_003EFB2C;
    case 435u: goto L_003EFB40;
    case 436u: goto L_003EFB60;
    case 437u: goto L_003EFBA0;
    case 438u: goto L_003EFBB0;
    case 439u: goto L_003EFBC4;
    case 440u: goto L_003EFBD4;
    case 441u: goto L_003EFBF0;
    case 442u: goto L_003EFC20;
    case 443u: goto L_003EFC40;
    case 444u: goto L_003EFC7C;
    case 445u: goto L_003EFC98;
    case 446u: goto L_003EFCA8;
    case 447u: goto L_003EFCC4;
    case 448u: goto L_003EFCD8;
    case 449u: goto L_003EFCF8;
    case 450u: goto L_003EFD20;
    case 451u: goto L_003EFD58;
    case 452u: goto L_003EFD74;
    case 453u: goto L_003EFDAC;
    case 454u: goto L_003EFDBC;
    case 455u: goto L_003EFDD0;
    case 456u: goto L_003EFDF0;
    case 457u: goto L_003EFE00;
    case 458u: goto L_003EFE14;
    case 459u: goto L_003EFE24;
    case 460u: goto L_003EFE40;
    case 461u: goto L_003EFE60;
    case 462u: goto L_003EFEB0;
    case 463u: goto L_003EFEC0;
    case 464u: goto L_003EFED4;
    case 465u: goto L_003EFEF4;
    case 466u: goto L_003EFF04;
    case 467u: goto L_003EFF18;
    case 468u: goto L_003EFF28;
    case 469u: goto L_003EFF44;
    case 470u: goto L_003EFF70;
    case 471u: goto L_003EFFC0;
    case 472u: goto L_003EFFD0;
    case 473u: goto L_003EFFE4;
    default: bad_entry(c, 0x003EC000u); return;
    }
L_003EC000:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003EC010:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
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
    set32(c.r[5], c.r[19].w[0] - c.r[20].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], 0u + 44u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 21;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 8u)));  goto L_003EC1FC; }
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[29].w[0] + 156u);  goto L_003EC078; }
    set32(c.r[3], c.r[21].w[0] + 8u);
    c.budget -= 1;
L_003EC078:
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[18], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[18].w[0] + c.r[3].w[0]);  if (t) { goto L_003EC138; } }
L_003EC09C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[20].w[0] + 5u);  goto L_003EC0AC; }
    set32(c.r[17], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 1;
L_003EC0AC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0] + 4u));  goto L_003EC0C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], ld32((c.r[18].w[0] + 8u)));  if (t) { goto L_003EC0CC; } }
L_003EC0C4:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[22].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_003EC0CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC0D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003EC0D4u) [[unlikely]] return; }
L_003EC0D4:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 148u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[8], c.r[17].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC0F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x003EC0F0u) [[unlikely]] return; }
L_003EC0F0:
    set32(c.r[4], c.r[18].w[0] + 20u);
    set32(c.r[3], c.r[20].w[0] + 20u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 36u)));  goto L_003EC124; }
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 32u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 152u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC120u); set32(c.r[6], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 457u, depth + 1u); else { c.pc = 0x003EBC50u; return; } if (c.pc != 0x003EC120u) [[unlikely]] return; }
L_003EC120:
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 1;
L_003EC124:
    st32((c.r[18].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    st32((c.r[18].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[20], c.r[20].w[0] + 44u);
    set32(c.r[18], c.r[18].w[0] + 44u);
    c.budget -= 5;
L_003EC138:
    c.r[3].d[0] = c.r[18].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC09Cu | kUnwind; return; } goto L_003EC09C; }
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;  goto L_003EC1AC; }
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_003EC190; } }
L_003EC17C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC18Cu); set32(c.r[5], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EC18Cu) [[unlikely]] return; }
L_003EC18C:
    set32(c.r[18], c.r[18].w[0] + 44u);
    c.budget -= 1;
L_003EC190:
    c.r[3].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC17Cu | kUnwind; return; } goto L_003EC17C; }
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_003EC2D8; } }
L_003EC1AC:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_003EC2DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EC1EC; } }
L_003EC1BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC1C4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x003EC1C4u) [[unlikely]] return; }
L_003EC1C4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 8u)));  goto L_003EC1DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC1D8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 367u, depth + 1u); else { c.pc = 0x003EAED0u; return; } if (c.pc != 0x003EC1D8u) [[unlikely]] return; }
L_003EC1D8:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_003EC1DC:
    set32(c.r[20], c.r[20].w[0] + 44u);
    set32(c.r[18], c.r[18].w[0] + 44u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_003EC1EC:
    c.budget -= 2;
    if (c.r[20].d[0] != c.r[19].d[0]) { set32(c.r[4], 0u + 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC1BCu | kUnwind; return; } goto L_003EC1BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EC2D8; } }
L_003EC1FC:
    set32(c.r[17], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_003EC230; } }
L_003EC21C:
    set32(c.r[5], 0u - 1u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC230u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EC230u) [[unlikely]] return; }
L_003EC230:
    c.r[1].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC21Cu | kUnwind; return; } goto L_003EC21C; }
    st32((c.r[21].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = c.r[16].d[0] << 32;  goto L_003EC268; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[21].w[0] + 12u), 0u);  goto L_003EC260; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC25Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003EC25Cu) [[unlikely]] return; }
L_003EC25C:
    st32((c.r[21].w[0] + 12u), 0u);
    c.budget -= 1;
L_003EC260:
    st32((c.r[21].w[0] + 4u), 0u);
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.budget -= 2;
L_003EC268:
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC288u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003EC288u) [[unlikely]] return; }
L_003EC288:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[21].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[21].w[0] + 12u)));  if (t) { goto L_003EC2D0; } }
L_003EC2A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC2A8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x003EC2A8u) [[unlikely]] return; }
L_003EC2A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 8u)));  goto L_003EC2C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC2BCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 367u, depth + 1u); else { c.pc = 0x003EAED0u; return; } if (c.pc != 0x003EC2BCu) [[unlikely]] return; }
L_003EC2BC:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_003EC2C0:
    set32(c.r[20], c.r[20].w[0] + 44u);
    set32(c.r[16], c.r[16].w[0] + 44u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_003EC2D0:
    c.budget -= 2;
    if (c.r[20].d[0] != c.r[19].d[0]) { set32(c.r[4], 0u + 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC2A0u | kUnwind; return; } goto L_003EC2A0; }
L_003EC2D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_003EC2DC:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003EC310:
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
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] + c.r[3].w[0]);  if (t) { goto L_003EC358; } }
L_003EC344:
    set32(c.r[5], 0u - 1u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC358u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EC358u) [[unlikely]] return; }
L_003EC358:
    c.r[1].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC344u | kUnwind; return; } goto L_003EC344; }
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003EC380:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_003EC3D0; } }
L_003EC3BC:
    set32(c.r[5], 0u - 1u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC3D0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EC3D0u) [[unlikely]] return; }
L_003EC3D0:
    c.r[1].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC3BCu | kUnwind; return; } goto L_003EC3BC; }
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003EC400:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003EC458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC424u);  if (depth < kMaxDepth) unit_00BB(c, 29u, depth + 1u); else { c.pc = 0x003EC470u; return; } if (c.pc != 0x003EC424u) [[unlikely]] return; }
L_003EC424:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003EC444; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EC440; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC440u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003EC440u) [[unlikely]] return; }
L_003EC440:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003EC444:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003EC45C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC458u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003EC458u) [[unlikely]] return; }
L_003EC458:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003EC45C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EC470:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_003EC4C0; } }
L_003EC4AC:
    set32(c.r[5], 0u - 1u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC4C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EC4C0u) [[unlikely]] return; }
L_003EC4C0:
    c.r[1].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC4ACu | kUnwind; return; } goto L_003EC4AC; }
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003EC4F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 7792u);  c.pc = t; return; }
L_003EC500:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003EC554; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_003EC544; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003EC554; } }
L_003EC544:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC550u); set32(c.r[4], c.r[2].w[0] + 104u);  if (depth < kMaxDepth) unit_00FE(c, 378u, depth + 1u); else { c.pc = 0x004FAF80u; return; } if (c.pc != 0x003EC550u) [[unlikely]] return; }
L_003EC550:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003EC554:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 304u);  goto L_003EC564; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EC894; } }
L_003EC564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC56Cu); st32((c.r[18].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00D6(c, 191u, depth + 1u); else { c.pc = 0x004596D0u; return; } if (c.pc != 0x003EC56Cu) [[unlikely]] return; }
L_003EC56C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 16960ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 308u), c.f[0]);  if (t) { goto L_003EC69C; } }
L_003EC58C:
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[19].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_003EC69C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC5A8u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_00D6(c, 191u, depth + 1u); else { c.pc = 0x004596D0u; return; } if (c.pc != 0x003EC5A8u) [[unlikely]] return; }
L_003EC5A8:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 208u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC5C4u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 177u, depth + 1u); else { c.pc = 0x0046A3D0u; return; } if (c.pc != 0x003EC5C4u) [[unlikely]] return; }
L_003EC5C4:
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    c.f[0] = ld32((c.r[29].w[0] + 308u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EC698; } }
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    set32(c.r[4], ld32((c.r[29].w[0] + 220u)));
    c.f[2] = ld32((c.r[29].w[0] + 244u));
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    st32((c.r[29].w[0] + 304u), c.f[1]);
    st32((c.r[29].w[0] + 312u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 308u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    c.f[1] = ld32((c.r[29].w[0] + 236u));
    st32((c.r[29].w[0] + 316u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    st32((c.r[29].w[0] + 320u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 340u), c.f[2]);
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 332u), c.f[1]);
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    st32((c.r[29].w[0] + 336u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 292u)));
    c.f[1] = ld32((c.r[29].w[0] + 248u));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 296u));
    c.f[0] = ld32((c.r[29].w[0] + 252u));
    st32((c.r[29].w[0] + 328u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 256u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 297u));
    st32((c.r[29].w[0] + 344u), c.f[1]);
    st32((c.r[29].w[0] + 388u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 348u), c.f[0]);
    st8((c.r[29].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    st8((c.r[29].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    st32((c.r[29].w[0] + 352u), c.f[2]);
    st32((c.r[29].w[0] + 356u), c.f[1]);
    st32((c.r[29].w[0] + 360u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 268u));
    c.f[1] = ld32((c.r[29].w[0] + 272u));
    c.f[0] = ld32((c.r[29].w[0] + 276u));
    st32((c.r[29].w[0] + 364u), c.f[2]);
    st32((c.r[29].w[0] + 368u), c.f[1]);
    st32((c.r[29].w[0] + 372u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 280u));
    c.f[1] = ld32((c.r[29].w[0] + 284u));
    c.f[0] = ld32((c.r[29].w[0] + 288u));
    st32((c.r[29].w[0] + 376u), c.f[2]);
    st32((c.r[29].w[0] + 380u), c.f[1]);
    st32((c.r[29].w[0] + 384u), c.f[0]);
    c.budget -= 48;
L_003EC698:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_003EC69C:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 364u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC58Cu | kUnwind; return; } goto L_003EC58C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC6B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 122u, depth + 1u); else { c.pc = 0x004654E0u; return; } if (c.pc != 0x003EC6B8u) [[unlikely]] return; }
L_003EC6B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003EC888; } }
L_003EC6C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_003EC740; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC6D0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 171u, depth + 1u); else { c.pc = 0x0046A2A0u; return; } if (c.pc != 0x003EC6D0u) [[unlikely]] return; }
L_003EC6D0:
    c.f[3] = ld32((c.r[2].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[3] = fp::sub(c.f[3], c.f[2]);
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[1] = fp::sqrt(c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = 0u;
    c.f[1] = fp::max(c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 308u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 22;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EC73C; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC734u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 122u, depth + 1u); else { c.pc = 0x004654E0u; return; } if (c.pc != 0x003EC734u) [[unlikely]] return; }
L_003EC734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003EC888; } }
L_003EC73C:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EC740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003EC85C; } }
L_003EC748:
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[19].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_003EC85C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC764u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00D6(c, 191u, depth + 1u); else { c.pc = 0x004596D0u; return; } if (c.pc != 0x003EC764u) [[unlikely]] return; }
L_003EC764:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC780u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 177u, depth + 1u); else { c.pc = 0x0046A3D0u; return; } if (c.pc != 0x003EC780u) [[unlikely]] return; }
L_003EC780:
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = ld32((c.r[29].w[0] + 308u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EC858; } }
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.f[2] = ld32((c.r[29].w[0] + 148u));
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    st32((c.r[29].w[0] + 304u), c.f[1]);
    st32((c.r[29].w[0] + 312u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 308u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.f[1] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[29].w[0] + 316u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    st32((c.r[29].w[0] + 320u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 340u), c.f[2]);
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 332u), c.f[1]);
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    st32((c.r[29].w[0] + 336u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    c.f[1] = ld32((c.r[29].w[0] + 152u));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 200u));
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[29].w[0] + 328u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 201u));
    st32((c.r[29].w[0] + 344u), c.f[1]);
    c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[29].w[0] + 348u), c.f[0]);
    st32((c.r[29].w[0] + 388u), c.r[4].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    st8((c.r[29].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st8((c.r[29].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 352u), c.f[2]);
    st32((c.r[29].w[0] + 356u), c.f[1]);
    st32((c.r[29].w[0] + 360u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 172u));
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    st32((c.r[29].w[0] + 364u), c.f[2]);
    st32((c.r[29].w[0] + 368u), c.f[1]);
    st32((c.r[29].w[0] + 372u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 184u));
    c.f[1] = ld32((c.r[29].w[0] + 188u));
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    st32((c.r[29].w[0] + 376u), c.f[2]);
    st32((c.r[29].w[0] + 380u), c.f[1]);
    st32((c.r[29].w[0] + 384u), c.f[0]);
    c.budget -= 49;
L_003EC858:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_003EC85C:
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 364u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC748u | kUnwind; return; } goto L_003EC748; }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_003EC87C; }
    st32((c.r[18].w[0]), c.r[21].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_003EC87C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC884u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 122u, depth + 1u); else { c.pc = 0x004654E0u; return; } if (c.pc != 0x003EC884u) [[unlikely]] return; }
L_003EC884:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003EC888:
    c.budget -= 2;
    if (c.r[21].d[0] != c.r[16].d[0]) { c.r[2].d[0] = ld8((c.r[21].w[0] + 306u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC6C0u | kUnwind; return; } goto L_003EC6C0; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003EC894:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_003EC8C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 108u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 108u), 0u);
    set32(c.r[5], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC8ECu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 33u, depth + 1u); else { c.pc = 0x003EC500u; return; } if (c.pc != 0x003EC8ECu) [[unlikely]] return; }
L_003EC8EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003EC9AC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 60u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC938u); st32((c.r[29].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_00BB(c, 62u, depth + 1u); else { c.pc = 0x003ECC90u; return; } if (c.pc != 0x003EC938u) [[unlikely]] return; }
L_003EC938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EC9A8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[17].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    st32((c.r[17].w[0] + 112u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    st32((c.r[17].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[17].w[0] + 120u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 60u));
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    st32((c.r[17].w[0] + 124u), c.f[2]);
    st32((c.r[17].w[0] + 128u), c.f[1]);
    st32((c.r[17].w[0] + 132u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[17].w[0] + 136u), c.f[2]);
    st32((c.r[17].w[0] + 140u), c.f[1]);
    st32((c.r[17].w[0] + 144u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 84u));
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[17].w[0] + 148u), c.f[2]);
    st32((c.r[17].w[0] + 152u), c.f[1]);
    st32((c.r[17].w[0] + 156u), c.f[0]);
    c.budget -= 26;
L_003EC9A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003EC9AC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003EC9C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003EC9F8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC9F0u); set32(c.r[4], c.r[2].w[0] + 104u);  if (depth < kMaxDepth) unit_00FE(c, 378u, depth + 1u); else { c.pc = 0x004FAF80u; return; } if (c.pc != 0x003EC9F0u) [[unlikely]] return; }
L_003EC9F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_003ECAE0; } }
L_003EC9F8:
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 52u), 0u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 60u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 92u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECA3Cu); set32(c.r[7], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00BB(c, 62u, depth + 1u); else { c.pc = 0x003ECC90u; return; } if (c.pc != 0x003ECA3Cu) [[unlikely]] return; }
L_003ECA3C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 105u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0] + 104u));  goto L_003ECA64; }
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECA5Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BB(c, 55u, depth + 1u); else { c.pc = 0x003ECB00u; return; } if (c.pc != 0x003ECA5Cu) [[unlikely]] return; }
L_003ECA5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_003ECA84; } }
L_003ECA64:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ECA80; } }
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECA80u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 55u, depth + 1u); else { c.pc = 0x003ECB00u; return; } if (c.pc != 0x003ECA80u) [[unlikely]] return; }
L_003ECA80:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_003ECA84:
    st32((c.r[17].w[0] + 112u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    st32((c.r[17].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[17].w[0] + 120u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 60u));
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    st32((c.r[17].w[0] + 124u), c.f[2]);
    st32((c.r[17].w[0] + 128u), c.f[1]);
    st32((c.r[17].w[0] + 132u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[17].w[0] + 136u), c.f[2]);
    st32((c.r[17].w[0] + 140u), c.f[1]);
    st32((c.r[17].w[0] + 144u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 84u));
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[17].w[0] + 148u), c.f[2]);
    st32((c.r[17].w[0] + 152u), c.f[1]);
    st32((c.r[17].w[0] + 156u), c.f[0]);
    c.budget -= 23;
L_003ECAE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003ECB00:
    set32(c.r[29], c.r[29].w[0] - 176u);
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
    c.budget -= 14;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003ECB48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECB40u); set32(c.r[4], ld32((c.r[21].w[0] + 108u)));  if (depth < kMaxDepth) unit_00D9(c, 138u, depth + 1u); else { c.pc = 0x00465A00u; return; } if (c.pc != 0x003ECB40u) [[unlikely]] return; }
L_003ECB40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003ECB54; } }
L_003ECB48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECB50u); set32(c.r[4], ld32((c.r[21].w[0] + 108u)));  if (depth < kMaxDepth) unit_00D9(c, 141u, depth + 1u); else { c.pc = 0x00465AC0u; return; } if (c.pc != 0x003ECB50u) [[unlikely]] return; }
L_003ECB50:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003ECB54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003ECC5C; } }
L_003ECB5C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 108u)));  goto L_003ECB78; }
    set32(c.r[4], ld32((c.r[21].w[0] + 108u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECB70u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 132u, depth + 1u); else { c.pc = 0x004657A0u; return; } if (c.pc != 0x003ECB70u) [[unlikely]] return; }
L_003ECB70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_003ECB84; } }
L_003ECB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECB80u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 135u, depth + 1u); else { c.pc = 0x004658D0u; return; } if (c.pc != 0x003ECB80u) [[unlikely]] return; }
L_003ECB80:
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_003ECB84:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_003ECC5C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ECC58; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 136u), 0u);
    st32((c.r[29].w[0] + 140u), 0u);
    st32((c.r[29].w[0] + 144u), 0u);
    st32((c.r[29].w[0] + 148u), 0u);
    st32((c.r[29].w[0] + 152u), 0u);
    st32((c.r[29].w[0] + 156u), 0u);
    st32((c.r[29].w[0] + 160u), 0u);
    st32((c.r[29].w[0] + 164u), 0u);
    st32((c.r[29].w[0] + 168u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECBDCu); st32((c.r[29].w[0] + 172u), 0u);  if (depth < kMaxDepth) unit_00BB(c, 62u, depth + 1u); else { c.pc = 0x003ECC90u; return; } if (c.pc != 0x003ECBDCu) [[unlikely]] return; }
L_003ECBDC:
    c.f[1] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003ECC58; } }
    st32((c.r[21].w[0] + 108u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[20].w[0] + 8u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 140u));
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    st32((c.r[20].w[0] + 12u), c.f[2]);
    st32((c.r[20].w[0] + 16u), c.f[1]);
    st32((c.r[20].w[0] + 20u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 152u));
    c.f[1] = ld32((c.r[29].w[0] + 156u));
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[20].w[0] + 24u), c.f[2]);
    st32((c.r[20].w[0] + 28u), c.f[1]);
    st32((c.r[20].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 164u));
    c.f[1] = ld32((c.r[29].w[0] + 168u));
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[20].w[0] + 36u), c.f[2]);
    st32((c.r[20].w[0] + 40u), c.f[1]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 44u), c.f[0]);  if (t) { goto L_003ECC68; } }
L_003ECC58:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003ECC5C:
    c.r[3].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ECB5Cu | kUnwind; return; } goto L_003ECB5C; } }
L_003ECC68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003ECC90:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[20] = ld32((c.r[28].w[0] - 32640u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECCD4u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 191u, depth + 1u); else { c.pc = 0x004596D0u; return; } if (c.pc != 0x003ECCD4u) [[unlikely]] return; }
L_003ECCD4:
    set32(c.r[2], ld32((c.r[20].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[2].d[0]) { c.r[21].d[0] = 0ull + 0ull;  goto L_003ECDF4; }
    c.f[0] = ld32((c.r[20].w[0] + 16u));
    set32(c.r[6], c.r[20].w[0] + 28u);
    set32(c.r[5], c.r[29].w[0] + 140u);
    set32(c.r[4], 0u + 9u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 20u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 9;
L_003ECD04:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ECD04u | kUnwind; return; } goto L_003ECD04; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 100u)));
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 104u));
    st8((c.r[29].w[0] + 216u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 105u));
    st8((c.r[29].w[0] + 217u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ECDF4; } }
L_003ECD48:
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[21].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_003ECDF4; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECD70u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 177u, depth + 1u); else { c.pc = 0x0046A3D0u; return; } if (c.pc != 0x003ECD70u) [[unlikely]] return; }
L_003ECD70:
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003ECDF0; } }
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[6], c.r[29].w[0] + 140u);
    set32(c.r[5], c.r[20].w[0] + 28u);
    set32(c.r[4], 0u + 9u);
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[20].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 9;
L_003ECDA4:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ECDA4u | kUnwind; return; } goto L_003ECDA4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[20].w[0] + 100u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 216u));
    st8((c.r[20].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 217u));
    st8((c.r[20].w[0] + 105u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0]), c.r[21].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[20] = ld32((c.r[29].w[0] + 132u));
    c.budget -= 11;
L_003ECDF0:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_003ECDF4:
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 364u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003ECD48u | kUnwind; return; } goto L_003ECD48; }
    st32((c.r[17].w[0] + 8u), c.f[20]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.f[12] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[6], c.r[17].w[0] + 36u);
    set32(c.r[7], c.r[17].w[0] + 24u);
    set32(c.r[8], c.r[17].w[0] + 12u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECE2Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 181u, depth + 1u); else { c.pc = 0x0046A520u; return; } if (c.pc != 0x003ECE2Cu) [[unlikely]] return; }
L_003ECE2C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003ECE60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[4].w[0] + 116u), c.f[0]);
    st32((c.r[4].w[0] + 120u), 0u);
    st32((c.r[4].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECEA0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0005(c, 172u, depth + 1u); else { c.pc = 0x00116E80u; return; } if (c.pc != 0x003ECEA0u) [[unlikely]] return; }
L_003ECEA0:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 56u));
    c.f[1] = ld32((c.r[29].w[0] + 60u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 68u));
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[16].w[0] + 64u), c.f[2]);
    st32((c.r[16].w[0] + 68u), c.f[1]);
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[16].w[0] + 76u), c.f[2]);
    st32((c.r[16].w[0] + 80u), c.f[1]);
    st32((c.r[16].w[0] + 84u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 92u));
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[16].w[0] + 88u), c.f[2]);
    st32((c.r[16].w[0] + 92u), c.f[1]);
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 40;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003ECF40:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 108u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECF6Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0005(c, 172u, depth + 1u); else { c.pc = 0x00116E80u; return; } if (c.pc != 0x003ECF6Cu) [[unlikely]] return; }
L_003ECF6C:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 56u));
    c.f[1] = ld32((c.r[29].w[0] + 60u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 68u));
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[16].w[0] + 64u), c.f[2]);
    st32((c.r[16].w[0] + 68u), c.f[1]);
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[16].w[0] + 76u), c.f[2]);
    st32((c.r[16].w[0] + 80u), c.f[1]);
    st32((c.r[16].w[0] + 84u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 92u));
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[16].w[0] + 88u), c.f[2]);
    st32((c.r[16].w[0] + 92u), c.f[1]);
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 40;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003ED010:
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[12]);  c.pc = t; return; }
L_003ED020:
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[0]);  c.pc = t; return; }
L_003ED040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_003ED05C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003ED06C; } }
L_003ED05C:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED068u); set32(c.r[4], c.r[2].w[0] + 104u);  if (depth < kMaxDepth) unit_00FE(c, 378u, depth + 1u); else { c.pc = 0x004FAF80u; return; } if (c.pc != 0x003ED068u) [[unlikely]] return; }
L_003ED068:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003ED06C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003ED080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003ED0D0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23056u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003ED0B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003ED0B4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003ED0CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED0CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003ED0CCu) [[unlikely]] return; }
L_003ED0CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003ED0D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ED0E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 26416u);
    set32(c.r[2], c.r[2].w[0] + 23056u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED11Cu); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_00D6(c, 191u, depth + 1u); else { c.pc = 0x004596D0u; return; } if (c.pc != 0x003ED11Cu) [[unlikely]] return; }
L_003ED11C:
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 128u), 0u);
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 136u), 0u);
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 144u), 0u);
    st32((c.r[16].w[0] + 148u), 0u);
    st32((c.r[16].w[0] + 152u), 0u);
    st32((c.r[16].w[0] + 156u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ED170:
    set32(c.r[2], ld32((c.r[28].w[0] - 30372u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_003ED17C; }
L_003ED17C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003ED190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED1ACu); set32(c.r[4], c.r[4].w[0] - 7824u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003ED1ACu) [[unlikely]] return; }
L_003ED1AC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_003ED1B4; }
L_003ED1B4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ED1D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 31172u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003ED1E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30372u)));
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003ED1F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30372u)));  c.pc = t; return; }
L_003ED200:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[25]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED24Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003ED24Cu) [[unlikely]] return; }
L_003ED24C:
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED258u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003ED258u) [[unlikely]] return; }
L_003ED258:
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::min(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED290u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BE(c, 256u, depth + 1u); else { c.pc = 0x003FA980u; return; } if (c.pc != 0x003ED290u) [[unlikely]] return; }
L_003ED290:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 200u)));  goto L_003ED58C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED2A8u); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_002F(c, 118u, depth + 1u); else { c.pc = 0x001BDBC0u; return; } if (c.pc != 0x003ED2A8u) [[unlikely]] return; }
L_003ED2A8:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 50u));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_003ED2C0; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003ED2D8; } }
L_003ED2C0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_003ED2D8:
    c.f[1] = fp::mul(c.f[0], c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_003ED318; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_003ED330; } }
L_003ED318:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 6;
L_003ED330:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.f[24] = ld32((c.r[28].w[0] - 29052u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.r[20].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[2].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    st32((c.r[2].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[2].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    c.budget -= 12;
    { const bool t = c.r[20].sd[0] <= 0; st32((c.r[2].w[0] + 60u), c.f[0]);  if (t) { goto L_003ED588; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[2].w[0];
    c.r[19].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[2].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[2].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[2].w[0] + 104u), c.f[0]);
    c.budget -= 22;
L_003ED3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED3C0u);  if (depth < kMaxDepth) unit_005F(c, 31u, depth + 1u); else { c.pc = 0x0027C8D0u; return; } if (c.pc != 0x003ED3C0u) [[unlikely]] return; }
L_003ED3C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED3C8u); c.f[23] = c.f[0];  if (depth < kMaxDepth) unit_005F(c, 31u, depth + 1u); else { c.pc = 0x0027C8D0u; return; } if (c.pc != 0x003ED3C8u) [[unlikely]] return; }
L_003ED3C8:
    c.f[22] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED3D4u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x003ED3D4u) [[unlikely]] return; }
L_003ED3D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED3DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x003ED3DCu) [[unlikely]] return; }
L_003ED3DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED3E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x003ED3E4u) [[unlikely]] return; }
L_003ED3E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[6] = c.r[2].w[0];
    c.f[3] = ld32((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[20] = c.f[0];
    c.f[0] = c.r[2].w[0];
    c.f[5] = ld32((c.r[16].w[0] + 8u));
    c.f[12] = 0u;
    c.f[1] = fp::add(c.f[3], c.f[0]);
    c.f[2] = ld32((c.r[16].w[0]));
    c.facc = fp::add(c.f[12], c.f[5]);
    c.f[4] = fp::add(c.facc, fp::mul(c.f[6], c.f[23]));
    c.facc = fp::add(c.f[12], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[22]));
    st32((c.r[29].w[0] + 188u), c.f[1]);
    st32((c.r[29].w[0] + 192u), c.f[4]);
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    fpu_rsqrt(c, 6u, c.f[21], c.f[6]);
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    c.f[0] = fp::mul(c.f[4], c.f[6]);
    st32((c.r[29].w[0] + 188u), c.f[1]);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[5], c.f[5]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::sqrt(c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.f[14] = c.r[2].w[0];
    c.f[23] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED47Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_00BB(c, 112u, depth + 1u); else { c.pc = 0x003ED5E0u; return; } if (c.pc != 0x003ED47Cu) [[unlikely]] return; }
L_003ED47C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED488u); set32(c.r[4], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0046(c, 279u, depth + 1u); else { c.pc = 0x0021AB00u; return; } if (c.pc != 0x003ED488u) [[unlikely]] return; }
L_003ED488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED490u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00BB(c, 111u, depth + 1u); else { c.pc = 0x003ED5D0u; return; } if (c.pc != 0x003ED490u) [[unlikely]] return; }
L_003ED490:
    c.f[1] = ld32((c.r[28].w[0] - 32244u));
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.f[22] = c.f[0];
    c.f[0] = ld32((c.r[28].w[0] - 32608u));
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[12] = ld32((c.r[29].w[0] + 184u));
    c.f[13] = ld32((c.r[29].w[0] + 188u));
    c.f[14] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED4B8u); c.f[20] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00BB(c, 112u, depth + 1u); else { c.pc = 0x003ED5E0u; return; } if (c.pc != 0x003ED4B8u) [[unlikely]] return; }
L_003ED4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED4C0u); set32(c.r[4], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x003ED4C0u) [[unlikely]] return; }
L_003ED4C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED4D8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_00BB(c, 112u, depth + 1u); else { c.pc = 0x003ED5E0u; return; } if (c.pc != 0x003ED4D8u) [[unlikely]] return; }
L_003ED4D8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED4E4u); set32(c.r[4], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_0046(c, 279u, depth + 1u); else { c.pc = 0x0021AB00u; return; } if (c.pc != 0x003ED4E4u) [[unlikely]] return; }
L_003ED4E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED4ECu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00BB(c, 111u, depth + 1u); else { c.pc = 0x003ED5D0u; return; } if (c.pc != 0x003ED4ECu) [[unlikely]] return; }
L_003ED4EC:
    c.f[12] = ld32((c.r[29].w[0] + 172u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED4F8u); c.f[25] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x003ED4F8u) [[unlikely]] return; }
L_003ED4F8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED504u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 216u, depth + 1u); else { c.pc = 0x003BDD40u; return; } if (c.pc != 0x003ED504u) [[unlikely]] return; }
L_003ED504:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[28].w[0] - 32304u));  goto L_003ED514; }
    c.f[25] = c.f[25] ^ fp::kSign;
    c.f[1] = ld32((c.r[28].w[0] - 32304u));
    c.budget -= 2;
L_003ED514:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.f[0] = ld32((c.r[28].w[0] - 32480u));
    c.f[1] = fp::mul(c.f[1], c.f[23]);
    st32((c.r[2].w[0] + 24u), c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[23]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    st32((c.r[2].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    st32((c.r[2].w[0] + 32u), c.f[22]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    st32((c.r[2].w[0] + 36u), c.f[20]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    st32((c.r[2].w[0] + 40u), c.f[25]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    st32((c.r[2].w[0] + 44u), c.f[20]);
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED55Cu); c.f[12] = c.f[24];  if (depth < kMaxDepth) unit_0060(c, 572u, depth + 1u); else { c.pc = 0x00283B30u; return; } if (c.pc != 0x003ED55Cu) [[unlikely]] return; }
L_003ED55C:
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.f[12] = c.f[24];
    set32(c.r[6], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED578u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ED578u) [[unlikely]] return; }
L_003ED578:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ED3B8u | kUnwind; return; } goto L_003ED3B8; } }
L_003ED588:
    set32(c.r[4], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_003ED58C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED594u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003ED594u) [[unlikely]] return; }
L_003ED594:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003ED5D0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF6F8u | kUnwind; return; } [[clang::musttail]] return unit_00AB(c, 427u, depth); }
L_003ED5E0:
    st32((c.r[4].w[0]), c.f[12]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.f[13]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[14]);  c.pc = t; return; }
L_003ED600:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED624u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_002F(c, 118u, depth + 1u); else { c.pc = 0x001BDBC0u; return; } if (c.pc != 0x003ED624u) [[unlikely]] return; }
L_003ED624:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 220u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 48u));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] > 0; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003ED64C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 220u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 48u));
    c.budget -= 5;
    if (c.r[3].sd[0] <= 0) { st32((c.r[16].w[0] + 76u), c.f[20]);  goto L_003ED660; }
L_003ED64C:
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED65Cu); c.f[12] = fp::sub(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_00BB(c, 116u, depth + 1u); else { c.pc = 0x003ED680u; return; } if (c.pc != 0x003ED65Cu) [[unlikely]] return; }
L_003ED65C:
    st32((c.r[16].w[0] + 76u), c.f[20]);
    c.budget -= 1;
L_003ED660:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003ED680:
    set32(c.r[29], c.r[29].w[0] - 368u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 212u)));
    set32(c.r[18], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 27;
    { const bool t = c.r[18].d[0] == c.r[17].d[0]; c.f[26] = c.f[12];  if (t) { goto L_003ED74C; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 212u), c.r[17].w[0]);  goto L_003ED72C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED6FCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003ED6FCu) [[unlikely]] return; }
L_003ED6FC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED70Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003ED70Cu) [[unlikely]] return; }
L_003ED70C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003ED728; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED728u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ED728u) [[unlikely]] return; }
L_003ED728:
    st32((c.r[16].w[0] + 212u), c.r[17].w[0]);
    c.budget -= 1;
L_003ED72C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 16u)));  goto L_003ED750; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED73Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003ED73Cu) [[unlikely]] return; }
L_003ED73C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED74Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003ED74Cu) [[unlikely]] return; }
L_003ED74C:
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 1;
L_003ED750:
    c.f[2] = ld32((c.r[19].w[0] + 116u));
    c.f[1] = ld32((c.r[19].w[0] + 120u));
    c.f[0] = ld32((c.r[19].w[0] + 112u));
    set32(c.r[3], ld32((c.r[4].w[0] + 220u)));
    set32(c.r[2], c.r[4].w[0] + 112u);
    c.f[3] = ld32((c.r[20].w[0] + 4u));
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.f[23] = ld32((c.r[4].w[0] + 172u));
    set32(c.r[30], c.r[4].w[0] + 160u);
    set32(c.r[19], ld32((c.r[3].w[0] + 112u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[21], ld32((c.r[3].w[0] + 80u)));
    c.f[25] = fp::mul(c.f[23], c.f[3]);
    set32(c.r[22], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 40u)));
    st32((c.r[29].w[0] + 352u), c.f[0]);
    st32((c.r[29].w[0] + 356u), c.f[2]);
    st32((c.r[29].w[0] + 360u), c.f[1]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 48u));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 48u));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);  if (t) { goto L_003ED7B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_003ED7BC; } }
L_003ED7B4:
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003ED7BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);  if (t) { goto L_003EDA9C; } }
L_003ED7C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = c.r[2].w[0];
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    set32(c.r[5], ld32((c.r[29].w[0] + 224u)));
    fpu_rsqrt(c, 4u, c.f[0], c.f[4]);
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[6], c.r[29].w[0] + 288u);
    c.f[20] = fp::mul(c.f[3], c.f[4]);
    c.f[21] = fp::mul(c.f[2], c.f[4]);
    c.f[22] = fp::mul(c.f[1], c.f[4]);
    c.f[3] = ld32((c.r[21].w[0]));
    c.f[2] = ld32((c.r[22].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[24] = fp::mul(c.f[23], c.f[2]);
    c.f[2] = fp::mul(c.f[23], c.f[1]);
    c.f[1] = fp::mul(c.f[23], c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::mul(c.f[23], c.f[0]);
    st32((c.r[29].w[0] + 292u), c.f[1]);
    st32((c.r[29].w[0] + 296u), c.f[2]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED834u); st32((c.r[29].w[0] + 288u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x003ED834u) [[unlikely]] return; }
L_003ED834:
    c.f[2] = fp::mul(c.f[25], c.f[20]);
    set32(c.r[5], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[6], c.r[29].w[0] + 272u);
    c.f[1] = fp::mul(c.f[25], c.f[21]);
    c.f[0] = fp::mul(c.f[25], c.f[22]);
    c.f[8] = ld32((c.r[29].w[0] + 312u));
    c.f[7] = ld32((c.r[30].w[0] + 8u));
    c.f[6] = ld32((c.r[29].w[0] + 308u));
    c.f[5] = ld32((c.r[30].w[0] + 4u));
    c.f[3] = ld32((c.r[30].w[0]));
    c.f[4] = ld32((c.r[29].w[0] + 304u));
    c.f[20] = fp::add(c.f[8], c.f[7]);
    c.f[21] = fp::add(c.f[6], c.f[5]);
    c.f[22] = fp::add(c.f[4], c.f[3]);
    st32((c.r[29].w[0] + 272u), c.f[2]);
    st32((c.r[29].w[0] + 276u), c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED880u); st32((c.r[29].w[0] + 280u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x003ED880u) [[unlikely]] return; }
L_003ED880:
    c.f[2] = ld32((c.r[29].w[0] + 336u));
    c.f[1] = ld32((c.r[29].w[0] + 340u));
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = ld32((c.r[28].w[0] - 32564u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[5], ld32((c.r[20].w[0] + 12u)));  goto L_003ED8B0; }
    c.f[24] = 0u;
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 2;
L_003ED8B0:
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 220u)));
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED8E0u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 197u, depth + 1u); else { c.pc = 0x001BE690u; return; } if (c.pc != 0x003ED8E0u) [[unlikely]] return; }
L_003ED8E0:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED8F0u); set32(c.r[6], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_005A(c, 350u, depth + 1u); else { c.pc = 0x0026B3E0u; return; } if (c.pc != 0x003ED8F0u) [[unlikely]] return; }
L_003ED8F0:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED8FCu); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x003ED8FCu) [[unlikely]] return; }
L_003ED8FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED904u); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x003ED904u) [[unlikely]] return; }
L_003ED904:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED910u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0046(c, 276u, depth + 1u); else { c.pc = 0x0021AA70u; return; } if (c.pc != 0x003ED910u) [[unlikely]] return; }
L_003ED910:
    c.f[1] = ld32((c.r[29].w[0] + 324u));
    c.f[4] = ld32((c.r[29].w[0] + 360u));
    c.f[0] = ld32((c.r[29].w[0] + 328u));
    c.f[3] = ld32((c.r[29].w[0] + 356u));
    c.facc = fp::mul(c.f[1], c.f[4]);
    c.f[5] = fp::sub(c.facc, fp::mul(c.f[0], c.f[3]));
    c.f[2] = ld32((c.r[29].w[0] + 352u));
    c.f[11] = ld32((c.r[29].w[0] + 320u));
    c.facc = fp::mul(c.f[0], c.f[2]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[11], c.f[4]));
    c.facc = fp::mul(c.f[11], c.f[3]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[1], c.f[2]));
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.f[6] = fp::mul(c.f[24], c.f[4]);
    set32(c.r[18], c.r[18].w[0] + 12u);
    set32(c.r[21], c.r[21].w[0] + 4u);
    set32(c.r[22], c.r[22].w[0] + 4u);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.f[3] = ld32((c.r[19].w[0] + 4u));
    c.f[4] = ld32((c.r[19].w[0]));
    c.f[5] = fp::mul(c.f[24], c.f[5]);
    c.f[10] = fp::mul(c.f[24], c.f[2]);
    c.f[2] = ld32((c.r[19].w[0] + 8u));
    c.f[3] = fp::mul(c.f[26], c.f[3]);
    set32(c.r[19], c.r[19].w[0] + 28u);
    c.f[4] = fp::mul(c.f[26], c.f[4]);
    c.f[3] = fp::sub(c.f[21], c.f[3]);
    c.f[4] = fp::sub(c.f[22], c.f[4]);
    c.f[2] = fp::mul(c.f[26], c.f[2]);
    c.f[2] = fp::sub(c.f[20], c.f[2]);
    c.f[8] = fp::add(c.f[21], c.f[6]);
    c.f[3] = fp::sub(c.f[3], c.f[6]);
    c.f[7] = fp::add(c.f[22], c.f[5]);
    c.f[6] = 0u;
    c.f[4] = fp::sub(c.f[4], c.f[5]);
    c.facc = fp::add(c.f[6], c.f[7]);
    c.f[5] = fp::add(c.facc, fp::mul(c.f[24], c.f[11]));
    c.facc = fp::add(c.f[6], c.f[8]);
    c.f[9] = fp::add(c.f[20], c.f[10]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[24], c.f[1]));
    st32((c.r[16].w[0]), c.f[5]);
    c.facc = fp::add(c.f[6], c.f[9]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[24], c.f[0]));
    st32((c.r[16].w[0] + 4u), c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[5] = ld32((c.r[29].w[0] + 328u));
    c.facc = fp::add(c.f[6], c.f[9]);
    c.f[1] = ld32((c.r[29].w[0] + 324u));
    c.f[5] = fp::sub(c.facc, fp::mul(c.f[24], c.f[5]));
    c.facc = fp::add(c.f[6], c.f[8]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[24], c.f[1]));
    c.f[0] = ld32((c.r[29].w[0] + 320u));
    c.facc = fp::add(c.f[6], c.f[7]);
    c.f[2] = fp::sub(c.f[2], c.f[10]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[24], c.f[0]));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    st32((c.r[16].w[0] + 16u), c.f[1]);
    st32((c.r[16].w[0] + 20u), c.f[5]);
    st32((c.r[16].w[0] + 24u), c.f[4]);
    st32((c.r[16].w[0] + 28u), c.f[3]);
    st32((c.r[16].w[0] + 32u), c.f[2]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[2], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[2].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[2].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[2].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[2].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[2].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[2].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st32((c.r[2].w[0] + 44u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 12u), c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 48u));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 97;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { goto L_003EDAA8; } }
    set32(c.r[23], c.r[23].w[0] + 1u);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 2;
L_003EDA9C:
    c.r[2].d[0] = c.r[23].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.f[3] = ld32((c.r[19].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003ED7C4u | kUnwind; return; } goto L_003ED7C4; }
L_003EDAA8:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 52u));
    c.r[2].d[0] = c.r[2].d[0] | 37ull;
    st16((c.r[3].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDAE0u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EDAE0u) [[unlikely]] return; }
L_003EDAE0:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDAF8u); c.r[5].d[0] = ld16((c.r[20].w[0] + 12u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EDAF8u) [[unlikely]] return; }
L_003EDAF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_003EDB50:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 48u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDBA4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x003EDBA4u) [[unlikely]] return; }
L_003EDBA4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDBC0u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x003EDBC0u) [[unlikely]] return; }
L_003EDBC0:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[17].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDBD4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x003EDBD4u) [[unlikely]] return; }
L_003EDBD4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6544u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDBF0u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x003EDBF0u) [[unlikely]] return; }
L_003EDBF0:
    c.r[16].d[0] = ld16((c.r[19].w[0] + 48u));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDC0Cu); set32(c.r[4], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x003EDC0Cu) [[unlikely]] return; }
L_003EDC0C:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[21].d[0] = 0ull + 0ull;
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003EDCD4; } }
L_003EDC48:
    set32(c.r[20], c.r[14].w[0] + c.r[21].w[0]);
    set32(c.r[15], c.r[20].w[0] << 4);
    set32(c.r[14], c.r[20].w[0] << 1);
    set32(c.r[25], c.r[18].w[0] + c.r[15].w[0]);
    set32(c.r[24], c.r[22].w[0] + c.r[14].w[0]);
    c.f[0] = ld32((c.r[13].w[0] + 18144u));
    set32(c.r[15], c.r[20].w[0] + 1u);
    set32(c.r[14], c.r[20].w[0] + 2u);
    set32(c.r[21], c.r[21].w[0] + 1u);
    st32((c.r[25].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[12].w[0] + 18148u));
    st32((c.r[25].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 18152u));
    st32((c.r[25].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 18156u));
    st32((c.r[25].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 18144u));
    st32((c.r[25].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 18148u));
    st32((c.r[25].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 18152u));
    st32((c.r[25].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 18156u));
    st32((c.r[25].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 18144u));
    st32((c.r[25].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 18148u));
    st32((c.r[25].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 18152u));
    st32((c.r[25].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 18156u));
    st32((c.r[25].w[0] + 44u), c.f[0]);
    st16((c.r[24].w[0]), static_cast<std::uint16_t>(c.r[20].w[0]));
    st16((c.r[24].w[0] + 2u), static_cast<std::uint16_t>(c.r[15].w[0]));
    st16((c.r[24].w[0] + 4u), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.budget -= 35;
L_003EDCD4:
    c.r[14].d[0] = ld16((c.r[19].w[0] + 48u));
    c.r[14].d[0] = c.r[21].d[0] < c.r[14].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[14].d[0] != 0ull) { set32(c.r[14], c.r[21].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EDC48u | kUnwind; return; } goto L_003EDC48; }
    set32(c.r[4], 0u + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDCF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003EDCF0u) [[unlikely]] return; }
L_003EDCF0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[4], 0u + 256u);  goto L_003EDD38; }
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[5].d[0] = c.r[17].d[0] & 65535ull;
    st64((c.r[29].w[0] + 8u), c.r[22].d[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), 0ull);
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDD30u); st64((c.r[29].w[0] + 24u), 0ull);  if (depth < kMaxDepth) unit_0087(c, 457u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x003EDD30u) [[unlikely]] return; }
L_003EDD30:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 256u);
    c.budget -= 2;
L_003EDD38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDD40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003EDD40u) [[unlikely]] return; }
L_003EDD40:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 8u)));  goto L_003EDD60; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDD58u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 342u, depth + 1u); else { c.pc = 0x0031F1B0u; return; } if (c.pc != 0x003EDD58u) [[unlikely]] return; }
L_003EDD58:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 2;
L_003EDD60:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[17].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  goto L_003EDDCC; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[19].w[0] + 8u), c.r[17].w[0]);  goto L_003EDDA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDD78u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EDD78u) [[unlikely]] return; }
L_003EDD78:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDD88u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EDD88u) [[unlikely]] return; }
L_003EDD88:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EDDA4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDDA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EDDA4u) [[unlikely]] return; }
L_003EDDA4:
    st32((c.r[19].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 1;
L_003EDDA8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003EDDC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDDB8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EDDB8u) [[unlikely]] return; }
L_003EDDB8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDDC8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EDDC8u) [[unlikely]] return; }
L_003EDDC8:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_003EDDCC:
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDDE0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EDDE0u) [[unlikely]] return; }
L_003EDDE0:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDDF8u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EDDF8u) [[unlikely]] return; }
L_003EDDF8:
    set32(c.r[6], ld32((c.r[19].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[5].d[0] = c.r[2].d[0] | 4095ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], ld32((c.r[6].w[0] + 220u)));
    c.f[0] = ld32((c.r[28].w[0] - 32196u));
    c.r[7].d[0] = ld16((c.r[8].w[0] + 52u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    st16((c.r[8].w[0] + 52u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 31024u));
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 220u)));
    st32((c.r[4].w[0] + 16u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 31028u));
    st32((c.r[4].w[0] + 20u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 31032u));
    st32((c.r[4].w[0] + 24u), c.f[1]);
    st32((c.r[4].w[0] + 28u), c.f[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 27;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDE64u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EDE64u) [[unlikely]] return; }
L_003EDE64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003EDE90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDEACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003EDEACu) [[unlikely]] return; }
L_003EDEAC:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDEB8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003EDEB8u) [[unlikely]] return; }
L_003EDEB8:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], 0u + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDEC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003EDEC8u) [[unlikely]] return; }
L_003EDEC8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 16u)));  goto L_003EDEF4; }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 48u));
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDEECu); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 103u, depth + 1u); else { c.pc = 0x001F8DE0u; return; } if (c.pc != 0x003EDEECu) [[unlikely]] return; }
L_003EDEEC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 2;
L_003EDEF4:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 60u)));  goto L_003EDF60; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 16u), c.r[16].w[0]);  goto L_003EDF3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDF0Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EDF0Cu) [[unlikely]] return; }
L_003EDF0C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDF1Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EDF1Cu) [[unlikely]] return; }
L_003EDF1C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EDF38; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDF38u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EDF38u) [[unlikely]] return; }
L_003EDF38:
    st32((c.r[17].w[0] + 16u), c.r[16].w[0]);
    c.budget -= 1;
L_003EDF3C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003EDF5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDF4Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EDF4Cu) [[unlikely]] return; }
L_003EDF4C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDF5Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EDF5Cu) [[unlikely]] return; }
L_003EDF5C:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 1;
L_003EDF60:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDF74u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EDF74u) [[unlikely]] return; }
L_003EDF74:
    set32(c.r[4], 0u + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDF80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003EDF80u) [[unlikely]] return; }
L_003EDF80:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 20u)));  goto L_003EDF9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDF94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 72u, depth + 1u); else { c.pc = 0x00218DC0u; return; } if (c.pc != 0x003EDF94u) [[unlikely]] return; }
L_003EDF94:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 2;
L_003EDF9C:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_003EE008; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 20u), c.r[16].w[0]);  goto L_003EDFE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDFB4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EDFB4u) [[unlikely]] return; }
L_003EDFB4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDFC4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EDFC4u) [[unlikely]] return; }
L_003EDFC4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EDFE0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDFE0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EDFE0u) [[unlikely]] return; }
L_003EDFE0:
    st32((c.r[17].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 1;
L_003EDFE4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003EE004; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDFF4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EDFF4u) [[unlikely]] return; }
L_003EDFF4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE004u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EE004u) [[unlikely]] return; }
L_003EE004:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_003EE008:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE018u); set32(c.r[5], ld32((c.r[17].w[0] + 16u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EE018u) [[unlikely]] return; }
L_003EE018:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE030u); st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003EE030u) [[unlikely]] return; }
L_003EE030:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EE050:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 280u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_003EE060:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE084u); st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003EE084u) [[unlikely]] return; }
L_003EE084:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE094u); st32((c.r[29].w[0] + 148u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003EE094u) [[unlikely]] return; }
L_003EE094:
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[18], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 6;
    if (c.r[18].d[0] == c.r[19].d[0]) { set32(c.r[4], 0u + 256u);  goto L_003EE110; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 56u), c.r[19].w[0]);  goto L_003EE0EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE0BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EE0BCu) [[unlikely]] return; }
L_003EE0BC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE0CCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EE0CCu) [[unlikely]] return; }
L_003EE0CC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EE0E8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE0E8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EE0E8u) [[unlikely]] return; }
L_003EE0E8:
    st32((c.r[17].w[0] + 56u), c.r[19].w[0]);
    c.budget -= 1;
L_003EE0EC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003EE10C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE0FCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EE0FCu) [[unlikely]] return; }
L_003EE0FC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE10Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EE10Cu) [[unlikely]] return; }
L_003EE10C:
    set32(c.r[4], 0u + 256u);
    c.budget -= 1;
L_003EE110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE118u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003EE118u) [[unlikely]] return; }
L_003EE118:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 60u)));  goto L_003EE138; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE130u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x003EE130u) [[unlikely]] return; }
L_003EE130:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 2;
L_003EE138:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[19].d[0];  if (t) { goto L_003EE1A0; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 60u), c.r[19].w[0]);  goto L_003EE180; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE150u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EE150u) [[unlikely]] return; }
L_003EE150:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE160u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EE160u) [[unlikely]] return; }
L_003EE160:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EE17C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE17Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EE17Cu) [[unlikely]] return; }
L_003EE17C:
    st32((c.r[17].w[0] + 60u), c.r[19].w[0]);
    c.budget -= 1;
L_003EE180:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003EE1A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE190u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EE190u) [[unlikely]] return; }
L_003EE190:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE1A0u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EE1A0u) [[unlikely]] return; }
L_003EE1A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 7702u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003EE1BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_003EE1C4; } }
L_003EE1BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE1C4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003EE1C4u) [[unlikely]] return; }
L_003EE1C4:
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE1D4u); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_006F(c, 166u, depth + 1u); else { c.pc = 0x002BD6C0u; return; } if (c.pc != 0x003EE1D4u) [[unlikely]] return; }
L_003EE1D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 56u)));  goto L_003EE234; }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE200u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EE200u) [[unlikely]] return; }
L_003EE200:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE210u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EE210u) [[unlikely]] return; }
L_003EE210:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003EE230; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE230u); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003EE230u) [[unlikely]] return; }
L_003EE230:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_003EE234:
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE248u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EE248u) [[unlikely]] return; }
L_003EE248:
    set32(c.r[4], 0u + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE254u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003EE254u) [[unlikely]] return; }
L_003EE254:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 64u)));  goto L_003EE274; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE26Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x003EE26Cu) [[unlikely]] return; }
L_003EE26C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 2;
L_003EE274:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[19].d[0];  if (t) { goto L_003EE2DC; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 64u), c.r[19].w[0]);  goto L_003EE2BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE28Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EE28Cu) [[unlikely]] return; }
L_003EE28C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE29Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EE29Cu) [[unlikely]] return; }
L_003EE29C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EE2B8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE2B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EE2B8u) [[unlikely]] return; }
L_003EE2B8:
    st32((c.r[17].w[0] + 64u), c.r[19].w[0]);
    c.budget -= 1;
L_003EE2BC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003EE2DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE2CCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EE2CCu) [[unlikely]] return; }
L_003EE2CC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE2DCu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EE2DCu) [[unlikely]] return; }
L_003EE2DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 7677u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003EE2F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_003EE300; } }
L_003EE2F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE300u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003EE300u) [[unlikely]] return; }
L_003EE300:
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE310u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_006F(c, 166u, depth + 1u); else { c.pc = 0x002BD6C0u; return; } if (c.pc != 0x003EE310u) [[unlikely]] return; }
L_003EE310:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 64u)));  goto L_003EE370; }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE33Cu); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EE33Cu) [[unlikely]] return; }
L_003EE33C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE34Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EE34Cu) [[unlikely]] return; }
L_003EE34C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003EE36C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE36Cu); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003EE36Cu) [[unlikely]] return; }
L_003EE36C:
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 1;
L_003EE370:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE394u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EE394u) [[unlikely]] return; }
L_003EE394:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE3A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003EE3A0u) [[unlikely]] return; }
L_003EE3A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003EE3F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE3B0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x003EE3B0u) [[unlikely]] return; }
L_003EE3B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    set32(c.r[2], c.r[2].w[0] + 19632u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 49u);
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
L_003EE3F0:
    c.r[6].d[0] = ld16((c.r[18].w[0] + 28u));
    set32(c.r[3], 0u - 9u);
    set32(c.r[2], 0u - 49u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[18], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE424u); set32(c.r[4], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x003EE424u) [[unlikely]] return; }
L_003EE424:
    set32(c.r[4], c.r[18].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE430u); set32(c.r[5], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x003EE430u) [[unlikely]] return; }
L_003EE430:
    set32(c.r[4], c.r[29].w[0] + 164u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE43Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x003EE43Cu) [[unlikely]] return; }
L_003EE43C:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE448u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003EE448u) [[unlikely]] return; }
L_003EE448:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003EE4A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE458u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x003EE458u) [[unlikely]] return; }
L_003EE458:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 13520u);
    set32(c.r[3], c.r[3].w[0] + 19920u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 61u);
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
L_003EE4A0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    set32(c.r[2], 0u - 61u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[18], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE4DCu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x003EE4DCu) [[unlikely]] return; }
L_003EE4DC:
    set32(c.r[4], c.r[18].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE4E8u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x003EE4E8u) [[unlikely]] return; }
L_003EE4E8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE4F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x003EE4F4u) [[unlikely]] return; }
L_003EE4F4:
    set32(c.r[4], 0u + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE500u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003EE500u) [[unlikely]] return; }
L_003EE500:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003EE570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE510u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x003EE510u) [[unlikely]] return; }
L_003EE510:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE52Cu); st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE4B0u; return; } if (c.pc != 0x003EE52Cu) [[unlikely]] return; }
L_003EE52C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE538u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002F(c, 181u, depth + 1u); else { c.pc = 0x001BE480u; return; } if (c.pc != 0x003EE538u) [[unlikely]] return; }
L_003EE538:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE544u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BE450u; return; } if (c.pc != 0x003EE544u) [[unlikely]] return; }
L_003EE544:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE550u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 179u, depth + 1u); else { c.pc = 0x001BE420u; return; } if (c.pc != 0x003EE550u) [[unlikely]] return; }
L_003EE550:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE55Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 178u, depth + 1u); else { c.pc = 0x001BE400u; return; } if (c.pc != 0x003EE55Cu) [[unlikely]] return; }
L_003EE55C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE568u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 177u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x003EE568u) [[unlikely]] return; }
L_003EE568:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003EE570:
    c.r[6].d[0] = ld16((c.r[18].w[0] + 28u));
    set32(c.r[5], 0u - 31u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], 0u - 481u);
    set32(c.r[2], 0u - 7169u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[6].d[0] = c.r[6].d[0] | 12ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 224ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] & 65023ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[18], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE5DCu); set32(c.r[4], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x003EE5DCu) [[unlikely]] return; }
L_003EE5DC:
    set32(c.r[4], c.r[18].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE5E8u); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x003EE5E8u) [[unlikely]] return; }
L_003EE5E8:
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE5F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x003EE5F4u) [[unlikely]] return; }
L_003EE5F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE5FCu); set32(c.r[4], ld32((c.r[17].w[0] + 60u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x003EE5FCu) [[unlikely]] return; }
L_003EE5FC:
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 20u)));  goto L_003EE66C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_003EE648; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE618u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EE618u) [[unlikely]] return; }
L_003EE618:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE628u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EE628u) [[unlikely]] return; }
L_003EE628:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EE644; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE644u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EE644u) [[unlikely]] return; }
L_003EE644:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EE648:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 16u), 0u);  if (t) { goto L_003EE668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE658u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EE658u) [[unlikely]] return; }
L_003EE658:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE668u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EE668u) [[unlikely]] return; }
L_003EE668:
    set32(c.r[18], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_003EE66C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 44u)));  goto L_003EE6D8; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_003EE6B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE684u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EE684u) [[unlikely]] return; }
L_003EE684:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE694u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EE694u) [[unlikely]] return; }
L_003EE694:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EE6B0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE6B0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EE6B0u) [[unlikely]] return; }
L_003EE6B0:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EE6B4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 20u), 0u);  if (t) { goto L_003EE6D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE6C4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EE6C4u) [[unlikely]] return; }
L_003EE6C4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE6D4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EE6D4u) [[unlikely]] return; }
L_003EE6D4:
    set32(c.r[18], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003EE6D8:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], 0u + 400u);  goto L_003EE744; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_003EE720; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE6F0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EE6F0u) [[unlikely]] return; }
L_003EE6F0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE700u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EE700u) [[unlikely]] return; }
L_003EE700:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EE71C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE71Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EE71Cu) [[unlikely]] return; }
L_003EE71C:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EE720:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 44u), 0u);  if (t) { goto L_003EE740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE730u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EE730u) [[unlikely]] return; }
L_003EE730:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE740u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EE740u) [[unlikely]] return; }
L_003EE740:
    set32(c.r[2], 0u + 400u);
    c.budget -= 1;
L_003EE744:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[17].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[28].w[0] - 32620u));
    set32(c.r[2], 0u + 80u);
    st16((c.r[17].w[0] + 50u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 50u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE768u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003EE768u) [[unlikely]] return; }
L_003EE768:
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[17].w[0] + 50u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE780u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x003EE780u) [[unlikely]] return; }
L_003EE780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE788u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 151u, depth + 1u); else { c.pc = 0x003EDE90u; return; } if (c.pc != 0x003EE788u) [[unlikely]] return; }
L_003EE788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE790u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003EE790u) [[unlikely]] return; }
L_003EE790:
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE79Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003EE79Cu) [[unlikely]] return; }
L_003EE79C:
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[4], 0u + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE7ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003EE7ACu) [[unlikely]] return; }
L_003EE7AC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 44u)));  goto L_003EE814; }
    c.f[1] = ld32((c.r[28].w[0] - 32304u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[13] = 0u;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[28].w[0] - 31772u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0]), c.f[1]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.f[12] = ld32((c.r[28].w[0] - 31848u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    set32(c.r[5], c.r[5].w[0] - 7710u);
    set32(c.r[6], ld32((c.r[17].w[0] + 64u)));
    c.f[19] = ld32((c.r[28].w[0] - 31832u));
    set32(c.r[7], c.r[7].w[0] + 18144u);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[16] = c.f[13];
    c.f[17] = c.f[13];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE80Cu); c.f[18] = c.f[13];  if (depth < kMaxDepth) unit_0045(c, 300u, depth + 1u); else { c.pc = 0x00216FE0u; return; } if (c.pc != 0x003EE80Cu) [[unlikely]] return; }
L_003EE80C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 2;
L_003EE814:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[18].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  goto L_003EE880; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 44u), c.r[18].w[0]);  goto L_003EE85C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE82Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EE82Cu) [[unlikely]] return; }
L_003EE82C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE83Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EE83Cu) [[unlikely]] return; }
L_003EE83C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EE858; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE858u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EE858u) [[unlikely]] return; }
L_003EE858:
    st32((c.r[17].w[0] + 44u), c.r[18].w[0]);
    c.budget -= 1;
L_003EE85C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003EE87C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE86Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EE86Cu) [[unlikely]] return; }
L_003EE86C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE87Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EE87Cu) [[unlikely]] return; }
L_003EE87C:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_003EE880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE888u); set32(c.r[5], ld32((c.r[17].w[0] + 44u)));  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x003EE888u) [[unlikely]] return; }
L_003EE888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE890u); set32(c.r[4], ld32((c.r[29].w[0] + 136u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003EE890u) [[unlikely]] return; }
L_003EE890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE898u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003EE898u) [[unlikely]] return; }
L_003EE898:
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE8A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003EE8A4u) [[unlikely]] return; }
L_003EE8A4:
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[4], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE8B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003EE8B4u) [[unlikely]] return; }
L_003EE8B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  goto L_003EE8D8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 7760u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE8D4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 152u, depth + 1u); else { c.pc = 0x001F94E0u; return; } if (c.pc != 0x003EE8D4u) [[unlikely]] return; }
L_003EE8D4:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_003EE8D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE8E0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x003EE8E0u) [[unlikely]] return; }
L_003EE8E0:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE8ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003EE8ECu) [[unlikely]] return; }
L_003EE8EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  goto L_003EE908; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE904u); set32(c.r[5], c.r[5].w[0] - 7750u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214210u; return; } if (c.pc != 0x003EE904u) [[unlikely]] return; }
L_003EE904:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_003EE908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE910u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x003EE910u) [[unlikely]] return; }
L_003EE910:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE91Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003EE91Cu) [[unlikely]] return; }
L_003EE91C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  goto L_003EE93C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 7741u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE938u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_003F(c, 82u, depth + 1u); else { c.pc = 0x001FD180u; return; } if (c.pc != 0x003EE938u) [[unlikely]] return; }
L_003EE938:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_003EE93C:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE948u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x003EE948u) [[unlikely]] return; }
L_003EE948:
    set32(c.r[4], 0u + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE954u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003EE954u) [[unlikely]] return; }
L_003EE954:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  goto L_003EE980; }
    c.f[13] = ld32((c.r[28].w[0] - 32564u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 7728u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE97Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 177u, depth + 1u); else { c.pc = 0x00209CD0u; return; } if (c.pc != 0x003EE97Cu) [[unlikely]] return; }
L_003EE97C:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_003EE980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE988u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x003EE988u) [[unlikely]] return; }
L_003EE988:
    set32(c.r[4], 0u + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE994u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003EE994u) [[unlikely]] return; }
L_003EE994:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  goto L_003EEA00; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[2] = ld32((c.r[3].w[0] + 31056u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[4].w[0] + 31060u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[14] = ld32((c.r[28].w[0] - 32564u));
    set32(c.r[5], c.r[5].w[0] - 7718u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], c.r[29].w[0] + 112u);
    c.f[0] = ld32((c.r[3].w[0] + 31064u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[2] = c.f[2] ^ fp::kSign;
    c.r[8].d[0] = 0ull + 0ull;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 112u), c.f[2]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[13] = c.r[6].w[0];
    set32(c.r[6], ld32((c.r[17].w[0] + 60u)));
    c.f[12] = 0u;
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE9FCu); c.f[15] = c.f[14];  if (depth < kMaxDepth) unit_0042(c, 98u, depth + 1u); else { c.pc = 0x002092F0u; return; } if (c.pc != 0x003EE9FCu) [[unlikely]] return; }
L_003EE9FC:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_003EEA00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEA08u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x003EEA08u) [[unlikely]] return; }
L_003EEA08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEA10u); set32(c.r[4], ld32((c.r[29].w[0] + 128u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003EEA10u) [[unlikely]] return; }
L_003EEA10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEA18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 132u, depth + 1u); else { c.pc = 0x003EDB50u; return; } if (c.pc != 0x003EEA18u) [[unlikely]] return; }
L_003EEA18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEA20u); set32(c.r[4], ld32((c.r[29].w[0] + 144u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003EEA20u) [[unlikely]] return; }
L_003EEA20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003EEA40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003EED74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23104u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEA88u); set32(c.r[4], c.r[29].w[0] + 76u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EEA88u) [[unlikely]] return; }
L_003EEA88:
    set32(c.r[18], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  goto L_003EEACC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEA9Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EEA9Cu) [[unlikely]] return; }
L_003EEA9C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEAACu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EEAACu) [[unlikely]] return; }
L_003EEAAC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EEAC8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEAC8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EEAC8u) [[unlikely]] return; }
L_003EEAC8:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 1;
L_003EEACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEAD4u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003EEAD4u) [[unlikely]] return; }
L_003EEAD4:
    set32(c.r[2], c.r[17].w[0] + 68u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003EEB20; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 64u);  goto L_003EEB24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEAF4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EEAF4u) [[unlikely]] return; }
L_003EEAF4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEB04u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EEB04u) [[unlikely]] return; }
L_003EEB04:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EEB20; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEB20u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EEB20u) [[unlikely]] return; }
L_003EEB20:
    set32(c.r[2], c.r[17].w[0] + 64u);
    c.budget -= 1;
L_003EEB24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 60u);  goto L_003EEB70; }
    set32(c.r[18], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003EEB6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEB40u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EEB40u) [[unlikely]] return; }
L_003EEB40:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEB50u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EEB50u) [[unlikely]] return; }
L_003EEB50:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EEB6C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEB6Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EEB6Cu) [[unlikely]] return; }
L_003EEB6C:
    set32(c.r[2], c.r[17].w[0] + 60u);
    c.budget -= 1;
L_003EEB70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 56u);  goto L_003EEBBC; }
    set32(c.r[18], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003EEBB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEB8Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EEB8Cu) [[unlikely]] return; }
L_003EEB8C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEB9Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EEB9Cu) [[unlikely]] return; }
L_003EEB9C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EEBB8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEBB8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EEBB8u) [[unlikely]] return; }
L_003EEBB8:
    set32(c.r[2], c.r[17].w[0] + 56u);
    c.budget -= 1;
L_003EEBBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 44u);  goto L_003EEC08; }
    set32(c.r[18], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003EEC04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEBD8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EEBD8u) [[unlikely]] return; }
L_003EEBD8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEBE8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EEBE8u) [[unlikely]] return; }
L_003EEBE8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EEC04; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEC04u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EEC04u) [[unlikely]] return; }
L_003EEC04:
    set32(c.r[2], c.r[17].w[0] + 44u);
    c.budget -= 1;
L_003EEC08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 28u);  goto L_003EEC54; }
    set32(c.r[18], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003EEC50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEC24u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EEC24u) [[unlikely]] return; }
L_003EEC24:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEC34u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EEC34u) [[unlikely]] return; }
L_003EEC34:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EEC50; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEC50u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EEC50u) [[unlikely]] return; }
L_003EEC50:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 1;
L_003EEC54:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 20u);  goto L_003EEC68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEC64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003EEC64u) [[unlikely]] return; }
L_003EEC64:
    set32(c.r[2], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_003EEC68:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 16u);  goto L_003EECB4; }
    set32(c.r[18], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003EECB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEC84u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EEC84u) [[unlikely]] return; }
L_003EEC84:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEC94u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EEC94u) [[unlikely]] return; }
L_003EEC94:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EECB0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EECB0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EECB0u) [[unlikely]] return; }
L_003EECB0:
    set32(c.r[2], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_003EECB4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 8u);  goto L_003EED00; }
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003EECFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EECD0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EECD0u) [[unlikely]] return; }
L_003EECD0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EECE0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EECE0u) [[unlikely]] return; }
L_003EECE0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EECFC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EECFCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EECFCu) [[unlikely]] return; }
L_003EECFC:
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_003EED00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EED48; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003EED48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EED1Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EED1Cu) [[unlikely]] return; }
L_003EED1C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EED2Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EED2Cu) [[unlikely]] return; }
L_003EED2C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EED48; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EED48u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EED48u) [[unlikely]] return; }
L_003EED48:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003EED60; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22384u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_003EED60:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003EED78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EED74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003EED74u) [[unlikely]] return; }
L_003EED74:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003EED78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EED90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 22384u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23104u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 16;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_003EEDE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEDD8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EEDD8u) [[unlikely]] return; }
L_003EEDD8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEDE8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EEDE8u) [[unlikely]] return; }
L_003EEDE8:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 16u), 0u);  if (t) { goto L_003EEE0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEDFCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EEDFCu) [[unlikely]] return; }
L_003EEDFC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEE0Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EEE0Cu) [[unlikely]] return; }
L_003EEE0C:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 20u), 0u);  if (t) { goto L_003EEE30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEE20u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EEE20u) [[unlikely]] return; }
L_003EEE20:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEE30u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EEE30u) [[unlikely]] return; }
L_003EEE30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEE38u); set32(c.r[4], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003EEE38u) [[unlikely]] return; }
L_003EEE38:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 44u), 0u);  if (t) { goto L_003EEE5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEE4Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EEE4Cu) [[unlikely]] return; }
L_003EEE4C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEE5Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EEE5Cu) [[unlikely]] return; }
L_003EEE5C:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 56u), 0u);  if (t) { goto L_003EEE80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEE70u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EEE70u) [[unlikely]] return; }
L_003EEE70:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEE80u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EEE80u) [[unlikely]] return; }
L_003EEE80:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 60u), 0u);  if (t) { goto L_003EEEA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEE94u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EEE94u) [[unlikely]] return; }
L_003EEE94:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEEA4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EEEA4u) [[unlikely]] return; }
L_003EEEA4:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 64u), 0u);  if (t) { goto L_003EEEC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEEB8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EEEB8u) [[unlikely]] return; }
L_003EEEB8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEEC8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EEEC8u) [[unlikely]] return; }
L_003EEEC8:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 68u), 0u);  if (t) { goto L_003EEEEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEEDCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EEEDCu) [[unlikely]] return; }
L_003EEEDC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEEECu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EEEECu) [[unlikely]] return; }
L_003EEEEC:
    st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEF00u); st32((c.r[17].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_00BB(c, 172u, depth + 1u); else { c.pc = 0x003EE060u; return; } if (c.pc != 0x003EEF00u) [[unlikely]] return; }
L_003EEF00:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003EEF20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003EEF9C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_003EEF84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEF54u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EEF54u) [[unlikely]] return; }
L_003EEF54:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEF64u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EEF64u) [[unlikely]] return; }
L_003EEF64:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EEF80; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEF80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EEF80u) [[unlikely]] return; }
L_003EEF80:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_003EEF84:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003EEFA0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEF9Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x003EEF9Cu) [[unlikely]] return; }
L_003EEF9C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003EEFA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003EEFC0:
    set32(c.r[3], 0u - 9999u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 29052u));
    st32((c.r[4].w[0] + 60u), c.f[0]);
    st32((c.r[4].w[0] + 64u), c.f[12]);
    st32((c.r[4].w[0] + 68u), c.r[5].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 72u), 0u);  c.pc = t; return; }
L_003EEFF0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.f[20] = c.f[12];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003EF31C; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 108u), 0u);  if (t) { goto L_003EF04C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF03Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EF03Cu) [[unlikely]] return; }
L_003EF03C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF04Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EF04Cu) [[unlikely]] return; }
L_003EF04C:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = ld16((c.r[16].w[0] + 20u));  if (t) { goto L_003EF208; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[17], c.r[4].w[0] - 1u);  goto L_003EF148; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 72u)));  goto L_003EF078; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003EF20C; } }
L_003EF078:
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 72u)));  goto L_003EF134; }
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[18], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EF134; } }
L_003EF094:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[19], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 6;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  goto L_003EF110; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0])));  goto L_003EF0EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF0BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EF0BCu) [[unlikely]] return; }
L_003EF0BC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF0CCu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EF0CCu) [[unlikely]] return; }
L_003EF0CC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EF0E8; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF0E8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EF0E8u) [[unlikely]] return; }
L_003EF0E8:
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003EF0EC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 108u), c.r[17].w[0]);  if (t) { goto L_003EF10C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF0FCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EF0FCu) [[unlikely]] return; }
L_003EF0FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF10Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EF10Cu) [[unlikely]] return; }
L_003EF10C:
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_003EF110:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 46u));
    set32(c.r[6], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF128u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EF128u) [[unlikely]] return; }
L_003EF128:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_003EF2CC; } }
L_003EF134:
    c.r[2].d[0] = c.r[18].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF094u | kUnwind; return; } goto L_003EF094; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EF2D0; } }
L_003EF148:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_003EF158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EF168; } }
L_003EF158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF160u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003EF160u) [[unlikely]] return; }
L_003EF160:
    mmi::div(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 2;
L_003EF168:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[17], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 7;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  goto L_003EF1E8; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0])));  goto L_003EF1C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF194u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EF194u) [[unlikely]] return; }
L_003EF194:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF1A4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EF1A4u) [[unlikely]] return; }
L_003EF1A4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EF1C0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF1C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EF1C0u) [[unlikely]] return; }
L_003EF1C0:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003EF1C4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 108u), c.r[17].w[0]);  if (t) { goto L_003EF1E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF1D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EF1D4u) [[unlikely]] return; }
L_003EF1D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF1E4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EF1E4u) [[unlikely]] return; }
L_003EF1E4:
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_003EF1E8:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 46u));
    set32(c.r[6], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF200u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EF200u) [[unlikely]] return; }
L_003EF200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EF2CC; } }
L_003EF208:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EF20C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[16].w[0] + 20u));  if (t) { goto L_003EF2C0; } }
L_003EF214:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[18], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 6;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[3].d[0] = ld16((c.r[16].w[0] + 46u));  goto L_003EF290; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0])));  goto L_003EF26C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF23Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EF23Cu) [[unlikely]] return; }
L_003EF23C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF24Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EF24Cu) [[unlikely]] return; }
L_003EF24C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EF268; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF268u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EF268u) [[unlikely]] return; }
L_003EF268:
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003EF26C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 108u), c.r[17].w[0]);  if (t) { goto L_003EF28C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF27Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EF27Cu) [[unlikely]] return; }
L_003EF27C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF28Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EF28Cu) [[unlikely]] return; }
L_003EF28C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 46u));
    c.budget -= 1;
L_003EF290:
    set32(c.r[2], 0u + 10u);
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.f[12] = c.f[20];
    set32(c.r[6], ld32((c.r[16].w[0] + 48u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF2B8u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EF2B8u) [[unlikely]] return; }
L_003EF2B8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 20u));
    c.budget -= 2;
L_003EF2C0:
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF214u | kUnwind; return; } goto L_003EF214; }
L_003EF2CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003EF2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF2D8u);  if (depth < kMaxDepth) unit_00BB(c, 369u, depth + 1u); else { c.pc = 0x003EF420u; return; } if (c.pc != 0x003EF2D8u) [[unlikely]] return; }
L_003EF2D8:
    st32((c.r[16].w[0] + 56u), c.f[20]);
    set32(c.r[16], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_003EF320; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF2F0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EF2F0u) [[unlikely]] return; }
L_003EF2F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF300u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EF300u) [[unlikely]] return; }
L_003EF300:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EF31C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF31Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EF31Cu) [[unlikely]] return; }
L_003EF31C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003EF320:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003EF340:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003EF3BC; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_003EF3A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF374u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EF374u) [[unlikely]] return; }
L_003EF374:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF384u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EF384u) [[unlikely]] return; }
L_003EF384:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EF3A0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF3A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EF3A0u) [[unlikely]] return; }
L_003EF3A0:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_003EF3A4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003EF3C0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF3BCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x003EF3BCu) [[unlikely]] return; }
L_003EF3BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003EF3C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003EF3E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[1] = ld32((c.r[4].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003EF418; }
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EF414; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF414u);  if (depth < kMaxDepth) unit_00BB(c, 334u, depth + 1u); else { c.pc = 0x003EEFF0u; return; } if (c.pc != 0x003EF414u) [[unlikely]] return; }
L_003EF414:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003EF418:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EF420:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[17], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF45Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EF45Cu) [[unlikely]] return; }
L_003EF45C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003EF540; } }
L_003EF464:
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[4], c.r[16].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 12u));
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], c.r[19].w[0] + 1u);  goto L_003EF53C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF4A0u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003EF4A0u) [[unlikely]] return; }
L_003EF4A0:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF4CCu); c.f[20] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003EF4CCu) [[unlikely]] return; }
L_003EF4CC:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF4F8u); c.f[21] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003EF4F8u) [[unlikely]] return; }
L_003EF4F8:
    c.f[1] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[4].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[21]);
    st32((c.r[3].w[0] + 8u), c.f[20]);
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], c.r[19].w[0] + 1u);
    c.budget -= 17;
L_003EF53C:
    c.r[19].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_003EF540:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 48u));
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = c.r[19].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF464u | kUnwind; return; } goto L_003EF464; }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st16((c.r[18].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003EF590:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003EF6AC; } }
L_003EF5B0:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 76u), c.r[16].w[0]);  if (t) { goto L_003EF5DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF5CCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EF5CCu) [[unlikely]] return; }
L_003EF5CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF5DCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EF5DCu) [[unlikely]] return; }
L_003EF5DC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 72u), 0u);  if (t) { goto L_003EF604; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF5F0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EF5F0u) [[unlikely]] return; }
L_003EF5F0:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF604u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EF604u) [[unlikely]] return; }
L_003EF604:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.r[16].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;  if (t) { goto L_003EF654; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF620u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EF620u) [[unlikely]] return; }
L_003EF620:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF634u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EF634u) [[unlikely]] return; }
L_003EF634:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EF654; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF654u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EF654u) [[unlikely]] return; }
L_003EF654:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 76u)));  goto L_003EF66C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF668u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 388u, depth + 1u); else { c.pc = 0x003EF6E0u; return; } if (c.pc != 0x003EF668u) [[unlikely]] return; }
L_003EF668:
    set32(c.r[16], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 1;
L_003EF66C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_003EF6AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF67Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EF67Cu) [[unlikely]] return; }
L_003EF67C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF68Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EF68Cu) [[unlikely]] return; }
L_003EF68C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EF6A8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF6A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EF6A8u) [[unlikely]] return; }
L_003EF6A8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003EF6AC:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 20u));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF5B0u | kUnwind; return; } goto L_003EF5B0; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EF6E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[29].w[0] + 108u), c.r[18].w[0]);  if (t) { goto L_003EF730; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF720u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EF720u) [[unlikely]] return; }
L_003EF720:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF730u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EF730u) [[unlikely]] return; }
L_003EF730:
    set32(c.r[19], ld32((c.r[29].w[0] + 108u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF74Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EF74Cu) [[unlikely]] return; }
L_003EF74C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF758u); set32(c.r[4], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_00BC(c, 7u, depth + 1u); else { c.pc = 0x003F0080u; return; } if (c.pc != 0x003EF758u) [[unlikely]] return; }
L_003EF758:
    set32(c.r[5], c.r[18].w[0] + 260u);
    set32(c.r[4], c.r[29].w[0] + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF768u); set32(c.r[6], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_00BB(c, 442u, depth + 1u); else { c.pc = 0x003EFC20u; return; } if (c.pc != 0x003EF768u) [[unlikely]] return; }
L_003EF768:
    set32(c.r[4], c.r[29].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF774u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003E(c, 15u, depth + 1u); else { c.pc = 0x001F8170u; return; } if (c.pc != 0x003EF774u) [[unlikely]] return; }
L_003EF774:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF780u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003E(c, 15u, depth + 1u); else { c.pc = 0x001F8170u; return; } if (c.pc != 0x003EF780u) [[unlikely]] return; }
L_003EF780:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[29].w[0] + 104u), c.r[18].w[0]);  if (t) { goto L_003EF7A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF798u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EF798u) [[unlikely]] return; }
L_003EF798:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF7A8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EF7A8u) [[unlikely]] return; }
L_003EF7A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[29].w[0] + 100u), c.r[18].w[0]);  if (t) { goto L_003EF7D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF7C0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EF7C0u) [[unlikely]] return; }
L_003EF7C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF7D0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EF7D0u) [[unlikely]] return; }
L_003EF7D0:
    set32(c.r[5], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF7E8u); set32(c.r[4], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EF7E8u) [[unlikely]] return; }
L_003EF7E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[17].w[0] + 8u);  goto L_003EF834; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF7FCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EF7FCu) [[unlikely]] return; }
L_003EF7FC:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF810u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EF810u) [[unlikely]] return; }
L_003EF810:
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EF830; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF830u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EF830u) [[unlikely]] return; }
L_003EF830:
    set32(c.r[5], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_003EF834:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF840u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_00BB(c, 417u, depth + 1u); else { c.pc = 0x003EF970u; return; } if (c.pc != 0x003EF840u) [[unlikely]] return; }
L_003EF840:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 100u)));  goto L_003EF88C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF854u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EF854u) [[unlikely]] return; }
L_003EF854:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF868u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EF868u) [[unlikely]] return; }
L_003EF868:
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EF888; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF888u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EF888u) [[unlikely]] return; }
L_003EF888:
    set32(c.r[16], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 1;
L_003EF88C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 104u)));  goto L_003EF8CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF89Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EF89Cu) [[unlikely]] return; }
L_003EF89C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF8ACu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EF8ACu) [[unlikely]] return; }
L_003EF8AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EF8C8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF8C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EF8C8u) [[unlikely]] return; }
L_003EF8C8:
    set32(c.r[16], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_003EF8CC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 108u)));  goto L_003EF90C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF8DCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EF8DCu) [[unlikely]] return; }
L_003EF8DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF8ECu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EF8ECu) [[unlikely]] return; }
L_003EF8EC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EF908; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF908u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EF908u) [[unlikely]] return; }
L_003EF908:
    set32(c.r[16], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_003EF90C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003EF94C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF91Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EF91Cu) [[unlikely]] return; }
L_003EF91C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF92Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EF92Cu) [[unlikely]] return; }
L_003EF92C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EF948; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF948u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EF948u) [[unlikely]] return; }
L_003EF948:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003EF94C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003EF970:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 10u));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003EF9D0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { goto L_003EFBF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF9B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EF9B8u) [[unlikely]] return; }
L_003EF9B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF9C8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EF9C8u) [[unlikely]] return; }
L_003EF9C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003EFBF8; } }
L_003EF9D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[20], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 108u), c.r[19].w[0]);  if (t) { goto L_003EFA00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF9F0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EF9F0u) [[unlikely]] return; }
L_003EF9F0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFA00u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EFA00u) [[unlikely]] return; }
L_003EFA00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 104u), 0u);  if (t) { goto L_003EFA28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFA14u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EFA14u) [[unlikely]] return; }
L_003EFA14:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFA28u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EFA28u) [[unlikely]] return; }
L_003EFA28:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[20], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[19], ld32((c.r[20].w[0])));
    c.budget -= 6;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 104u)));  goto L_003EFAA4; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[29].w[0] + 104u)));  goto L_003EFA80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFA50u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EFA50u) [[unlikely]] return; }
L_003EFA50:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFA60u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EFA60u) [[unlikely]] return; }
L_003EFA60:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EFA7C; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFA7Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EFA7Cu) [[unlikely]] return; }
L_003EFA7C:
    set32(c.r[19], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_003EFA80:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[20].w[0]), c.r[19].w[0]);  if (t) { goto L_003EFAA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFA90u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EFA90u) [[unlikely]] return; }
L_003EFA90:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFAA0u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EFAA0u) [[unlikely]] return; }
L_003EFAA0:
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_003EFAA4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003EFAEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFAB4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EFAB4u) [[unlikely]] return; }
L_003EFAB4:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFAC8u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EFAC8u) [[unlikely]] return; }
L_003EFAC8:
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EFAE8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFAE8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EFAE8u) [[unlikely]] return; }
L_003EFAE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EFAEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 100u), 0u);  if (t) { goto L_003EFB10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFAFCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EFAFCu) [[unlikely]] return; }
L_003EFAFC:
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFB10u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EFB10u) [[unlikely]] return; }
L_003EFB10:
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.r[19].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  if (t) { goto L_003EFB60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFB2Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EFB2Cu) [[unlikely]] return; }
L_003EFB2C:
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFB40u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EFB40u) [[unlikely]] return; }
L_003EFB40:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EFB60; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFB60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EFB60u) [[unlikely]] return; }
L_003EFB60:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 10u));  goto L_003EFB78; }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 4;
L_003EFB78:
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[16], ld32((c.r[29].w[0] + 108u)));  goto L_003EFB90; }
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[16], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 2;
L_003EFB90:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0]), c.r[16].w[0]);  if (t) { goto L_003EFBB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFBA0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EFBA0u) [[unlikely]] return; }
L_003EFBA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFBB0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EFBB0u) [[unlikely]] return; }
L_003EFBB0:
    set32(c.r[16], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003EFBF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFBC4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EFBC4u) [[unlikely]] return; }
L_003EFBC4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFBD4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EFBD4u) [[unlikely]] return; }
L_003EFBD4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EFBF0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFBF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EFBF0u) [[unlikely]] return; }
L_003EFBF0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EFBF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003EFBF8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003EFC20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[5].w[0] + 4u)));  if (t) { goto L_003EFC58; } }
L_003EFC40:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[4].w[0])));  if (t) { goto L_003EFC58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 76u), c.r[7].w[0]);  if (t) { goto L_003EFC68; } }
L_003EFC58:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EFC40u | kUnwind; return; } goto L_003EFC40; }
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 76u), c.r[7].w[0]);
    c.budget -= 2;
L_003EFC68:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003EFC84; } }
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFC7Cu); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_00BB(c, 450u, depth + 1u); else { c.pc = 0x003EFD20u; return; } if (c.pc != 0x003EFC7Cu) [[unlikely]] return; }
L_003EFC7C:
    set32(c.r[18], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 72u);
    c.budget -= 2;
L_003EFC84:
    set32(c.r[17], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_003EFCA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFC98u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EFC98u) [[unlikely]] return; }
L_003EFC98:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFCA8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EFCA8u) [[unlikely]] return; }
L_003EFCA8:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003EFCFC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EFCF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFCC4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EFCC4u) [[unlikely]] return; }
L_003EFCC4:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFCD8u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EFCD8u) [[unlikely]] return; }
L_003EFCD8:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EFCF8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFCF8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EFCF8u) [[unlikely]] return; }
L_003EFCF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003EFCFC:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EFD20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003EFD60; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFD58u); st32((c.r[6].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 470u, depth + 1u); else { c.pc = 0x003EFF70u; return; } if (c.pc != 0x003EFD58u) [[unlikely]] return; }
L_003EFD58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003EFE48; } }
L_003EFD60:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_003EFD7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFD74u); st32((c.r[6].w[0]), 0u);  if (depth < kMaxDepth) unit_00BB(c, 461u, depth + 1u); else { c.pc = 0x003EFE60u; return; } if (c.pc != 0x003EFD74u) [[unlikely]] return; }
L_003EFD74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EFE44; } }
L_003EFD7C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_003EFD8C; } }
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003EFD8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 8u)));  goto L_003EFD9C; }
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 2;
L_003EFD9C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 92u), c.r[19].w[0]);  if (t) { goto L_003EFDBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFDACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EFDACu) [[unlikely]] return; }
L_003EFDAC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFDBCu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EFDBCu) [[unlikely]] return; }
L_003EFDBC:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFDD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EFDD0u) [[unlikely]] return; }
L_003EFDD0:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0]), c.r[16].w[0]);  if (t) { goto L_003EFE00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFDF0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EFDF0u) [[unlikely]] return; }
L_003EFDF0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFE00u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EFE00u) [[unlikely]] return; }
L_003EFE00:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003EFE44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFE14u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EFE14u) [[unlikely]] return; }
L_003EFE14:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFE24u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EFE24u) [[unlikely]] return; }
L_003EFE24:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EFE40; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFE40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EFE40u) [[unlikely]] return; }
L_003EFE40:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EFE44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003EFE48:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003EFE60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003EFE98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_003EFE9C; } }
L_003EFE98:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_003EFE9C:
    set32(c.r[19], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 92u), c.r[19].w[0]);  if (t) { goto L_003EFEC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFEB0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EFEB0u) [[unlikely]] return; }
L_003EFEB0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFEC0u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EFEC0u) [[unlikely]] return; }
L_003EFEC0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFED4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EFED4u) [[unlikely]] return; }
L_003EFED4:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0]), c.r[16].w[0]);  if (t) { goto L_003EFF04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFEF4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EFEF4u) [[unlikely]] return; }
L_003EFEF4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFF04u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EFF04u) [[unlikely]] return; }
L_003EFF04:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003EFF48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFF18u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EFF18u) [[unlikely]] return; }
L_003EFF18:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFF28u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EFF28u) [[unlikely]] return; }
L_003EFF28:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EFF44; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFF44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EFF44u) [[unlikely]] return; }
L_003EFF44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003EFF48:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003EFF70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[5].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003EFFA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), 0u);  if (t) { goto L_003EFFAC; } }
L_003EFFA8:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_003EFFAC:
    set32(c.r[19], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 92u), c.r[19].w[0]);  if (t) { goto L_003EFFD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFFC0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003EFFC0u) [[unlikely]] return; }
L_003EFFC0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFFD0u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003EFFD0u) [[unlikely]] return; }
L_003EFFD0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFFE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EFFE4u) [[unlikely]] return; }
L_003EFFE4:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0]), c.r[16].w[0]);  if (t) { [[clang::musttail]] return unit_00BC(c, 3u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0004u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F0004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00BC(c, 2u, depth);
}

}
