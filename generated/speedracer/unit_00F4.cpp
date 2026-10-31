#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00F4[4096] = {
    1, 2, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0,
    9, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0,
    0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 28,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0,
    36, 0, 0, 37, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0,
    0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0,
    0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 107, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 116,
    0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0,
    0, 0, 131, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0,
    0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0,
    0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0,
    0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 201,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 0, 220, 0, 0,
    0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0,
    0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0,
    0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0,
    0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 299, 0, 300, 0, 301, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0,
    305, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0,
    314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0,
    0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00F4(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004D0000;
    case 2u: goto L_004D0004;
    case 3u: goto L_004D0014;
    case 4u: goto L_004D0028;
    case 5u: goto L_004D0038;
    case 6u: goto L_004D004C;
    case 7u: goto L_004D005C;
    case 8u: goto L_004D0070;
    case 9u: goto L_004D0080;
    case 10u: goto L_004D0094;
    case 11u: goto L_004D00A4;
    case 12u: goto L_004D00B8;
    case 13u: goto L_004D00C8;
    case 14u: goto L_004D00DC;
    case 15u: goto L_004D00EC;
    case 16u: goto L_004D0100;
    case 17u: goto L_004D0114;
    case 18u: goto L_004D0128;
    case 19u: goto L_004D0138;
    case 20u: goto L_004D0154;
    case 21u: goto L_004D0164;
    case 22u: goto L_004D0174;
    case 23u: goto L_004D018C;
    case 24u: goto L_004D01AC;
    case 25u: goto L_004D01BC;
    case 26u: goto L_004D01D8;
    case 27u: goto L_004D01EC;
    case 28u: goto L_004D01FC;
    case 29u: goto L_004D0224;
    case 30u: goto L_004D0238;
    case 31u: goto L_004D0240;
    case 32u: goto L_004D0248;
    case 33u: goto L_004D0250;
    case 34u: goto L_004D0258;
    case 35u: goto L_004D026C;
    case 36u: goto L_004D0280;
    case 37u: goto L_004D028C;
    case 38u: goto L_004D0294;
    case 39u: goto L_004D02A0;
    case 40u: goto L_004D02B0;
    case 41u: goto L_004D02C4;
    case 42u: goto L_004D02E4;
    case 43u: goto L_004D02F4;
    case 44u: goto L_004D0310;
    case 45u: goto L_004D0324;
    case 46u: goto L_004D0334;
    case 47u: goto L_004D034C;
    case 48u: goto L_004D0354;
    case 49u: goto L_004D0374;
    case 50u: goto L_004D03A0;
    case 51u: goto L_004D03B0;
    case 52u: goto L_004D0400;
    case 53u: goto L_004D04E8;
    case 54u: goto L_004D0554;
    case 55u: goto L_004D0580;
    case 56u: goto L_004D05A0;
    case 57u: goto L_004D05EC;
    case 58u: goto L_004D0600;
    case 59u: goto L_004D0650;
    case 60u: goto L_004D0670;
    case 61u: goto L_004D068C;
    case 62u: goto L_004D06B0;
    case 63u: goto L_004D06C0;
    case 64u: goto L_004D06D0;
    case 65u: goto L_004D06E0;
    case 66u: goto L_004D0800;
    case 67u: goto L_004D0868;
    case 68u: goto L_004D0870;
    case 69u: goto L_004D08A0;
    case 70u: goto L_004D08CC;
    case 71u: goto L_004D08FC;
    case 72u: goto L_004D0938;
    case 73u: goto L_004D0944;
    case 74u: goto L_004D0970;
    case 75u: goto L_004D0990;
    case 76u: goto L_004D09B0;
    case 77u: goto L_004D09F0;
    case 78u: goto L_004D0A00;
    case 79u: goto L_004D0AD4;
    case 80u: goto L_004D0AE0;
    case 81u: goto L_004D0AEC;
    case 82u: goto L_004D0AF8;
    case 83u: goto L_004D0B08;
    case 84u: goto L_004D0C74;
    case 85u: goto L_004D0C84;
    case 86u: goto L_004D0CB0;
    case 87u: goto L_004D0CE4;
    case 88u: goto L_004D0CF4;
    case 89u: goto L_004D0D10;
    case 90u: goto L_004D0D2C;
    case 91u: goto L_004D0D50;
    case 92u: goto L_004D0D88;
    case 93u: goto L_004D0D98;
    case 94u: goto L_004D0DB4;
    case 95u: goto L_004D0DC8;
    case 96u: goto L_004D0DD8;
    case 97u: goto L_004D0E00;
    case 98u: goto L_004D0E28;
    case 99u: goto L_004D0E38;
    case 100u: goto L_004D0E50;
    case 101u: goto L_004D0E60;
    case 102u: goto L_004D0E94;
    case 103u: goto L_004D0EAC;
    case 104u: goto L_004D0ED0;
    case 105u: goto L_004D0F38;
    case 106u: goto L_004D0F40;
    case 107u: goto L_004D0F4C;
    case 108u: goto L_004D0F54;
    case 109u: goto L_004D0F64;
    case 110u: goto L_004D0F78;
    case 111u: goto L_004D0FA0;
    case 112u: goto L_004D0FB0;
    case 113u: goto L_004D0FCC;
    case 114u: goto L_004D0FE0;
    case 115u: goto L_004D0FF0;
    case 116u: goto L_004D0FFC;
    case 117u: goto L_004D1014;
    case 118u: goto L_004D1024;
    case 119u: goto L_004D1030;
    case 120u: goto L_004D1060;
    case 121u: goto L_004D1098;
    case 122u: goto L_004D10A8;
    case 123u: goto L_004D10C0;
    case 124u: goto L_004D1100;
    case 125u: goto L_004D1108;
    case 126u: goto L_004D1118;
    case 127u: goto L_004D1164;
    case 128u: goto L_004D1178;
    case 129u: goto L_004D11D0;
    case 130u: goto L_004D11E8;
    case 131u: goto L_004D1208;
    case 132u: goto L_004D1210;
    case 133u: goto L_004D1224;
    case 134u: goto L_004D1240;
    case 135u: goto L_004D1254;
    case 136u: goto L_004D1290;
    case 137u: goto L_004D12AC;
    case 138u: goto L_004D12B4;
    case 139u: goto L_004D12CC;
    case 140u: goto L_004D1300;
    case 141u: goto L_004D1324;
    case 142u: goto L_004D132C;
    case 143u: goto L_004D1370;
    case 144u: goto L_004D13AC;
    case 145u: goto L_004D13F0;
    case 146u: goto L_004D1400;
    case 147u: goto L_004D1438;
    case 148u: goto L_004D147C;
    case 149u: goto L_004D1490;
    case 150u: goto L_004D14CC;
    case 151u: goto L_004D154C;
    case 152u: goto L_004D15A0;
    case 153u: goto L_004D15F0;
    case 154u: goto L_004D15FC;
    case 155u: goto L_004D1678;
    case 156u: goto L_004D16AC;
    case 157u: goto L_004D16E4;
    case 158u: goto L_004D1710;
    case 159u: goto L_004D1740;
    case 160u: goto L_004D1778;
    case 161u: goto L_004D17D0;
    case 162u: goto L_004D17EC;
    case 163u: goto L_004D1840;
    case 164u: goto L_004D1864;
    case 165u: goto L_004D186C;
    case 166u: goto L_004D188C;
    case 167u: goto L_004D18B0;
    case 168u: goto L_004D18BC;
    case 169u: goto L_004D18C4;
    case 170u: goto L_004D18E8;
    case 171u: goto L_004D18F0;
    case 172u: goto L_004D18F8;
    case 173u: goto L_004D1900;
    case 174u: goto L_004D1930;
    case 175u: goto L_004D195C;
    case 176u: goto L_004D1980;
    case 177u: goto L_004D1990;
    case 178u: goto L_004D19D0;
    case 179u: goto L_004D19EC;
    case 180u: goto L_004D1A0C;
    case 181u: goto L_004D1A40;
    case 182u: goto L_004D1A60;
    case 183u: goto L_004D1A80;
    case 184u: goto L_004D1A88;
    case 185u: goto L_004D1AA4;
    case 186u: goto L_004D1AD0;
    case 187u: goto L_004D1AF4;
    case 188u: goto L_004D1B0C;
    case 189u: goto L_004D1B20;
    case 190u: goto L_004D1B30;
    case 191u: goto L_004D1B3C;
    case 192u: goto L_004D1B48;
    case 193u: goto L_004D1B80;
    case 194u: goto L_004D1BA0;
    case 195u: goto L_004D1BB0;
    case 196u: goto L_004D1BCC;
    case 197u: goto L_004D1C1C;
    case 198u: goto L_004D1C40;
    case 199u: goto L_004D1C60;
    case 200u: goto L_004D1C70;
    case 201u: goto L_004D1C7C;
    case 202u: goto L_004D1CE0;
    case 203u: goto L_004D1D0C;
    case 204u: goto L_004D1D14;
    case 205u: goto L_004D1D60;
    case 206u: goto L_004D1D8C;
    case 207u: goto L_004D1D94;
    case 208u: goto L_004D1DB8;
    case 209u: goto L_004D1DCC;
    case 210u: goto L_004D1E00;
    case 211u: goto L_004D1E20;
    case 212u: goto L_004D1E54;
    case 213u: goto L_004D1E70;
    case 214u: goto L_004D1E84;
    case 215u: goto L_004D1E98;
    case 216u: goto L_004D1EAC;
    case 217u: goto L_004D1ECC;
    case 218u: goto L_004D1ED8;
    case 219u: goto L_004D1EE4;
    case 220u: goto L_004D1EF4;
    case 221u: goto L_004D1F04;
    case 222u: goto L_004D1F18;
    case 223u: goto L_004D1F34;
    case 224u: goto L_004D1F40;
    case 225u: goto L_004D1F4C;
    case 226u: goto L_004D1F58;
    case 227u: goto L_004D1F64;
    case 228u: goto L_004D1F8C;
    case 229u: goto L_004D1FAC;
    case 230u: goto L_004D1FD0;
    case 231u: goto L_004D1FE0;
    case 232u: goto L_004D2004;
    case 233u: goto L_004D2024;
    case 234u: goto L_004D2044;
    case 235u: goto L_004D2080;
    case 236u: goto L_004D208C;
    case 237u: goto L_004D20A4;
    case 238u: goto L_004D20B4;
    case 239u: goto L_004D20E0;
    case 240u: goto L_004D210C;
    case 241u: goto L_004D2118;
    case 242u: goto L_004D2158;
    case 243u: goto L_004D2198;
    case 244u: goto L_004D21D8;
    case 245u: goto L_004D21F0;
    case 246u: goto L_004D2210;
    case 247u: goto L_004D2254;
    case 248u: goto L_004D2268;
    case 249u: goto L_004D227C;
    case 250u: goto L_004D22A4;
    case 251u: goto L_004D22B8;
    case 252u: goto L_004D22CC;
    case 253u: goto L_004D22F4;
    case 254u: goto L_004D2308;
    case 255u: goto L_004D231C;
    case 256u: goto L_004D2338;
    case 257u: goto L_004D2350;
    case 258u: goto L_004D235C;
    case 259u: goto L_004D2368;
    case 260u: goto L_004D23A0;
    case 261u: goto L_004D23C8;
    case 262u: goto L_004D2420;
    case 263u: goto L_004D24FC;
    case 264u: goto L_004D252C;
    case 265u: goto L_004D2634;
    case 266u: goto L_004D2784;
    case 267u: goto L_004D278C;
    case 268u: goto L_004D2880;
    case 269u: goto L_004D2ADC;
    case 270u: goto L_004D2C30;
    case 271u: goto L_004D2C38;
    case 272u: goto L_004D2D2C;
    case 273u: goto L_004D2EA8;
    case 274u: goto L_004D2ECC;
    case 275u: goto L_004D2F00;
    case 276u: goto L_004D2F28;
    case 277u: goto L_004D2F80;
    case 278u: goto L_004D305C;
    case 279u: goto L_004D3078;
    case 280u: goto L_004D30A4;
    case 281u: goto L_004D3120;
    case 282u: goto L_004D3128;
    case 283u: goto L_004D3150;
    case 284u: goto L_004D3204;
    case 285u: goto L_004D3284;
    case 286u: goto L_004D328C;
    case 287u: goto L_004D32C0;
    case 288u: goto L_004D336C;
    case 289u: goto L_004D3390;
    case 290u: goto L_004D33C0;
    case 291u: goto L_004D3720;
    case 292u: goto L_004D3820;
    case 293u: goto L_004D3858;
    case 294u: goto L_004D3878;
    case 295u: goto L_004D3930;
    case 296u: goto L_004D3974;
    case 297u: goto L_004D3998;
    case 298u: goto L_004D39A4;
    case 299u: goto L_004D39B4;
    case 300u: goto L_004D39BC;
    case 301u: goto L_004D39C4;
    case 302u: goto L_004D39D0;
    case 303u: goto L_004D39E0;
    case 304u: goto L_004D39F4;
    case 305u: goto L_004D3A00;
    case 306u: goto L_004D3A0C;
    case 307u: goto L_004D3A20;
    case 308u: goto L_004D3AA0;
    case 309u: goto L_004D3AB0;
    case 310u: goto L_004D3BA0;
    case 311u: goto L_004D3BB0;
    case 312u: goto L_004D3BD0;
    case 313u: goto L_004D3BF0;
    case 314u: goto L_004D3C00;
    case 315u: goto L_004D3C40;
    case 316u: goto L_004D3C6C;
    case 317u: goto L_004D3C78;
    case 318u: goto L_004D3C90;
    case 319u: goto L_004D3CA8;
    case 320u: goto L_004D3CC0;
    case 321u: goto L_004D3CD8;
    case 322u: goto L_004D3CF0;
    case 323u: goto L_004D3D50;
    case 324u: goto L_004D3D98;
    case 325u: goto L_004D3DCC;
    case 326u: goto L_004D3E24;
    case 327u: goto L_004D3E40;
    case 328u: goto L_004D3E60;
    case 329u: goto L_004D3E6C;
    case 330u: goto L_004D3F10;
    case 331u: goto L_004D3FA0;
    case 332u: goto L_004D3FC8;
    default: bad_entry(c, 0x004D0000u); return;
    }
L_004D0000:
    c.budget -= 1;
L_004D0004:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0014u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004D0014u) [[unlikely]] return; }
L_004D0014:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 100u), 0u);  if (t) { goto L_004D0038; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0028u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004D0028u) [[unlikely]] return; }
L_004D0028:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0038u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004D0038u) [[unlikely]] return; }
L_004D0038:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 104u), 0u);  if (t) { goto L_004D005C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D004Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004D004Cu) [[unlikely]] return; }
L_004D004C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D005Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004D005Cu) [[unlikely]] return; }
L_004D005C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 108u), 0u);  if (t) { goto L_004D0080; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0070u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004D0070u) [[unlikely]] return; }
L_004D0070:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0080u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004D0080u) [[unlikely]] return; }
L_004D0080:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 112u), 0u);  if (t) { goto L_004D00A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0094u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004D0094u) [[unlikely]] return; }
L_004D0094:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D00A4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004D00A4u) [[unlikely]] return; }
L_004D00A4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 116u), 0u);  if (t) { goto L_004D00C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D00B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004D00B8u) [[unlikely]] return; }
L_004D00B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D00C8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004D00C8u) [[unlikely]] return; }
L_004D00C8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 120u), 0u);  if (t) { goto L_004D00EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D00DCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004D00DCu) [[unlikely]] return; }
L_004D00DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D00ECu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004D00ECu) [[unlikely]] return; }
L_004D00EC:
    set32(c.r[16], c.r[19].w[0] + 132u);
    st32((c.r[19].w[0] + 124u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0100u); st32((c.r[19].w[0] + 128u), 0u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004D0100u) [[unlikely]] return; }
L_004D0100:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_004D0118; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0114u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004D0114u) [[unlikely]] return; }
L_004D0114:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_004D0118:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  goto L_004D012C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0128u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004D0128u) [[unlikely]] return; }
L_004D0128:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 1;
L_004D012C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0138u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0004(c, 39u, depth + 1u); else { c.pc = 0x001105D0u; return; } if (c.pc != 0x004D0138u) [[unlikely]] return; }
L_004D0138:
    st32((c.r[19].w[0] + 152u), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 156u), 0u);
    st32((c.r[19].w[0] + 160u), 0u);
    st32((c.r[19].w[0] + 164u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0154u); st8((c.r[19].w[0] + 168u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004D0154u) [[unlikely]] return; }
L_004D0154:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0164u); st32((c.r[29].w[0] + 100u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004D0164u) [[unlikely]] return; }
L_004D0164:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0174u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004D0174u) [[unlikely]] return; }
L_004D0174:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 16u)));  goto L_004D0194; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D018Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x004D018Cu) [[unlikely]] return; }
L_004D018C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 2;
L_004D0194:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[17].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 16u)));  goto L_004D0200; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[19].w[0] + 16u), c.r[17].w[0]);  goto L_004D01DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D01ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004D01ACu) [[unlikely]] return; }
L_004D01AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D01BCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004D01BCu) [[unlikely]] return; }
L_004D01BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D01D8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004D01D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004D01D8u) [[unlikely]] return; }
L_004D01D8:
    st32((c.r[19].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 1;
L_004D01DC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004D01FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D01ECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004D01ECu) [[unlikely]] return; }
L_004D01EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D01FCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004D01FCu) [[unlikely]] return; }
L_004D01FC:
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_004D0200:
    set32(c.r[4], 0u + 1600u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0224u); st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004D0224u) [[unlikely]] return; }
L_004D0224:
    st32((c.r[19].w[0] + 164u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0238u); set32(c.r[6], 0u + 1600u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x004D0238u) [[unlikely]] return; }
L_004D0238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0240u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F3(c, 267u, depth + 1u); else { c.pc = 0x004CDC40u; return; } if (c.pc != 0x004D0240u) [[unlikely]] return; }
L_004D0240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0248u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F3(c, 205u, depth + 1u); else { c.pc = 0x004CD540u; return; } if (c.pc != 0x004D0248u) [[unlikely]] return; }
L_004D0248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0250u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F3(c, 151u, depth + 1u); else { c.pc = 0x004CCF50u; return; } if (c.pc != 0x004D0250u) [[unlikely]] return; }
L_004D0250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0258u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F3(c, 66u, depth + 1u); else { c.pc = 0x004CC6C0u; return; } if (c.pc != 0x004D0258u) [[unlikely]] return; }
L_004D0258:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D0270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D026Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F2(c, 507u, depth + 1u); else { c.pc = 0x004CBCB0u; return; } if (c.pc != 0x004D026Cu) [[unlikely]] return; }
L_004D026C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_004D0270:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_004D0284; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0280u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F2(c, 467u, depth + 1u); else { c.pc = 0x004CB8A0u; return; } if (c.pc != 0x004D0280u) [[unlikely]] return; }
L_004D0280:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_004D0284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D028Cu);  if (depth < kMaxDepth) unit_00F2(c, 382u, depth + 1u); else { c.pc = 0x004CADE0u; return; } if (c.pc != 0x004D028Cu) [[unlikely]] return; }
L_004D028C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0294u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F3(c, 326u, depth + 1u); else { c.pc = 0x004CE7C0u; return; } if (c.pc != 0x004D0294u) [[unlikely]] return; }
L_004D0294:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D02A0u); st32((c.r[29].w[0] + 92u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004D02A0u) [[unlikely]] return; }
L_004D02A0:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], 0u + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D02B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004D02B0u) [[unlikely]] return; }
L_004D02B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], ld32((c.r[19].w[0] + 28u)));  goto L_004D02CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D02C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 11u, depth + 1u); else { c.pc = 0x004040C0u; return; } if (c.pc != 0x004D02C4u) [[unlikely]] return; }
L_004D02C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 2;
L_004D02CC:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 16u)));  goto L_004D0338; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[19].w[0] + 28u), c.r[16].w[0]);  goto L_004D0314; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D02E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004D02E4u) [[unlikely]] return; }
L_004D02E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D02F4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004D02F4u) [[unlikely]] return; }
L_004D02F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D0310; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0310u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004D0310u) [[unlikely]] return; }
L_004D0310:
    st32((c.r[19].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 1;
L_004D0314:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004D0334; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0324u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004D0324u) [[unlikely]] return; }
L_004D0324:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0334u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004D0334u) [[unlikely]] return; }
L_004D0334:
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_004D0338:
    set32(c.r[5], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004D034Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004D034Cu) [[unlikely]] return; }
L_004D034C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0354u); set32(c.r[4], ld32((c.r[29].w[0] + 88u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004D0354u) [[unlikely]] return; }
L_004D0354:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 96u)));  goto L_004D0368; }
    st32((c.r[19].w[0] + 20u), 0u);
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 2;
L_004D0368:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0374u); st8((c.r[19].w[0] + 168u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004D0374u) [[unlikely]] return; }
L_004D0374:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004D03A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 3312u);  c.pc = t; return; }
L_004D03B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 132u)));
    c.f[21] = ld32((c.r[5].w[0] + 1176u));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 184u)));
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], ld32((c.r[6].w[0] + 108u)));  if (t) { goto L_004D041C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0400u); c.f[20] = ld32((c.r[5].w[0] + 1172u));  if (depth < kMaxDepth) unit_00D8(c, 210u, depth + 1u); else { c.pc = 0x004623F0u; return; } if (c.pc != 0x004D0400u) [[unlikely]] return; }
L_004D0400:
    fpu_div(c, 2u, c.f[20], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D0420; } }
L_004D041C:
    c.f[2] = 0u;
    c.budget -= 1;
L_004D0420:
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[18].w[0] + 40u), c.f[2]);  goto L_004D0488; }
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[28].w[0] - 32180u));  goto L_004D045C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_004D0474; } }
L_004D045C:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[18].w[0] + 36u)));  goto L_004D0478; }
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 3;
L_004D0474:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_004D0478:
    c.r[4].d[0] = 0ull + 0ull;
    mmi::pmaxw(c.r[3], c.r[3], c.r[4]);
    st32((c.r[18].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 40u), c.f[2]);
    c.budget -= 4;
L_004D0488:
    c.budget -= 2;
    if (c.r[16].sd[0] <= 0) { st8((c.r[18].w[0] + 13u), static_cast<std::uint8_t>(0u));  goto L_004D04C4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41000000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004D04C0; } }
    st32((c.r[18].w[0] + 32u), c.r[4].w[0]);
    c.budget -= 1;
L_004D04C0:
    st8((c.r[18].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004D04C4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 184u)));
    c.r[3].d[0] = c.r[4].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));  goto L_004D04F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D04E8u);  if (depth < kMaxDepth) unit_00D8(c, 251u, depth + 1u); else { c.pc = 0x00462ED0u; return; } if (c.pc != 0x004D04E8u) [[unlikely]] return; }
L_004D04E8:
    c.r[3].d[0] = c.r[17].d[0] ^ c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004D04F4:
    st32((c.r[18].w[0] + 8u), c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 12u));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_004D055C; }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 13u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004D0558; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.f[1] = ld32((c.r[3].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004D0558; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 7u);
    st8((c.r[18].w[0] + 13u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  goto L_004D054C; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004D0558; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 1;
L_004D054C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0554u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00EE(c, 100u, depth + 1u); else { c.pc = 0x004B8DB0u; return; } if (c.pc != 0x004D0554u) [[unlikely]] return; }
L_004D0554:
    st32((c.r[18].w[0] + 32u), 0u);
    c.budget -= 1;
L_004D0558:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004D055C:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004D0580:
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 13u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), 0u);  c.pc = t; return; }
L_004D05A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004D05F0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 23840u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004D05D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004D05D4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004D05EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D05ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004D05ECu) [[unlikely]] return; }
L_004D05EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004D05F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004D0600:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31936u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 23840u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 13u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0] + 20u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), 0u);  c.pc = t; return; }
L_004D0650:
    set32(c.r[2], ld32((c.r[28].w[0] - 29456u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_004D065C; }
L_004D065C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004D0670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D068Cu); set32(c.r[4], c.r[4].w[0] + 3280u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004D068Cu) [[unlikely]] return; }
L_004D068C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_004D0694; }
L_004D0694:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004D06B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 31172u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004D06C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29456u)));
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004D06D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29456u)));  c.pc = t; return; }
L_004D06E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[4] = ld32((c.r[4].w[0]));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[2] = ld32((c.r[2].w[0] + 31044u));
    st32((c.r[29].w[0] + 112u), c.f[4]);
    c.f[5] = ld32((c.r[4].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[2].w[0] + 31048u));
    st32((c.r[29].w[0] + 116u), c.f[5]);
    c.f[6] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[29].w[0] + 120u), c.f[6]);
    c.facc = fp::mul(c.f[2], c.f[6]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[1], c.f[5]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 31040u));
    c.facc = fp::mul(c.f[1], c.f[4]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[0], c.f[6]));
    c.facc = fp::mul(c.f[0], c.f[5]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[4]));
    st32((c.r[29].w[0] + 96u), c.f[3]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[3] = ld32((c.r[28].w[0] - 32268u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 32;
    if (!(c.fcr31 & kFpuCondition)) { c.f[3] = ld32((c.r[29].w[0] + 96u));  goto L_004D07F4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[2] = ld32((c.r[3].w[0] + 31060u));
    c.f[1] = ld32((c.r[2].w[0] + 31064u));
    c.facc = fp::mul(c.f[2], c.f[6]);
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[1], c.f[5]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 31056u));
    c.facc = fp::mul(c.f[1], c.f[4]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[0], c.f[6]));
    c.facc = fp::mul(c.f[0], c.f[5]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[4]));
    st32((c.r[29].w[0] + 96u), c.f[7]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.facc = fp::mul(c.f[7], c.f[7]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004D07F0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[2] = ld32((c.r[3].w[0] + 31076u));
    c.f[1] = ld32((c.r[2].w[0] + 31080u));
    c.facc = fp::mul(c.f[2], c.f[6]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[1], c.f[5]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 31072u));
    c.facc = fp::mul(c.f[1], c.f[4]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[0], c.f[6]));
    c.facc = fp::mul(c.f[0], c.f[5]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[4]));
    st32((c.r[29].w[0] + 96u), c.f[3]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.budget -= 15;
L_004D07F0:
    c.f[3] = ld32((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_004D07F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[29].w[0] + 100u));
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.budget -= 3;
L_004D0800:
    c.f[0] = c.r[2].w[0];
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    fpu_rsqrt(c, 4u, c.f[0], c.f[4]);
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    st32((c.r[29].w[0] + 96u), c.f[3]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    c.facc = fp::mul(c.f[5], c.f[1]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[6], c.f[2]));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.facc = fp::mul(c.f[6], c.f[3]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[0], c.f[1]));
    c.facc = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[5], c.f[3]));
    set32(c.r[4], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 80u), c.f[4]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    set32(c.r[6], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0868u); set32(c.r[7], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_005F(c, 93u, depth + 1u); else { c.pc = 0x0027DBA0u; return; } if (c.pc != 0x004D0868u) [[unlikely]] return; }
L_004D0868:
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 2;
L_004D0870:
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[16].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D0870u | kUnwind; return; } goto L_004D0870; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004D08A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0] + 28u)));
    c.f[20] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D08CCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00CC(c, 353u, depth + 1u); else { c.pc = 0x004326F0u; return; } if (c.pc != 0x004D08CCu) [[unlikely]] return; }
L_004D08CC:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[16].w[0] + 340u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[16].w[0] + 344u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[16].w[0] + 348u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D08FCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00CC(c, 353u, depth + 1u); else { c.pc = 0x004326F0u; return; } if (c.pc != 0x004D08FCu) [[unlikely]] return; }
L_004D08FC:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[4], c.r[17].w[0] + 12u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[16].w[0] + 352u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    st32((c.r[16].w[0] + 356u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[16].w[0] + 360u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 220u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 108u), 0u);
    st32((c.r[29].w[0] + 124u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0938u); st32((c.r[29].w[0] + 140u), 0u);  if (depth < kMaxDepth) unit_00F4(c, 65u, depth + 1u); else { c.pc = 0x004D06E0u; return; } if (c.pc != 0x004D0938u) [[unlikely]] return; }
L_004D0938:
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
L_004D0944:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D0944u | kUnwind; return; } goto L_004D0944; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0970u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x004D0970u) [[unlikely]] return; }
L_004D0970:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004D0990:
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    c.f[2] = ld32((c.r[3].w[0] + 52u));
    c.f[1] = ld32((c.r[3].w[0] + 56u));
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[1]);  c.pc = t; return; }
L_004D09B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 12u));
    c.f[21] = c.f[13];
    c.f[20] = c.f[14];
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.f[22] = c.f[12];  if (t) { goto L_004D0A2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D09F0u); set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  if (depth < kMaxDepth) unit_00F4(c, 69u, depth + 1u); else { c.pc = 0x004D08A0u; return; } if (c.pc != 0x004D09F0u) [[unlikely]] return; }
L_004D09F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.f[12] = c.f[22];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0A00u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 69u, depth + 1u); else { c.pc = 0x004D08A0u; return; } if (c.pc != 0x004D0A00u) [[unlikely]] return; }
L_004D0A00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), 0u);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004D0C04; } }
L_004D0A2C:
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004D0A50; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D0A50:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 255ull;  goto L_004D0A88; }
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004D0A80; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D0A80:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 2;
L_004D0A88:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  goto L_004D0ABC; }
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004D0AB4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D0AB4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004D0ABC:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[3] = fp::mul(c.f[21], c.f[20]);  goto L_004D0BDC; }
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0AD4u); set32(c.r[5], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_00F4(c, 97u, depth + 1u); else { c.pc = 0x004D0E00u; return; } if (c.pc != 0x004D0AD4u) [[unlikely]] return; }
L_004D0AD4:
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0AE0u); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_00F4(c, 91u, depth + 1u); else { c.pc = 0x004D0D50u; return; } if (c.pc != 0x004D0AE0u) [[unlikely]] return; }
L_004D0AE0:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0AECu); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_00F4(c, 91u, depth + 1u); else { c.pc = 0x004D0D50u; return; } if (c.pc != 0x004D0AECu) [[unlikely]] return; }
L_004D0AEC:
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0AF8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00F4(c, 86u, depth + 1u); else { c.pc = 0x004D0CB0u; return; } if (c.pc != 0x004D0AF8u) [[unlikely]] return; }
L_004D0AF8:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.f[12] = c.f[22];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0B08u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 69u, depth + 1u); else { c.pc = 0x004D08A0u; return; } if (c.pc != 0x004D0B08u) [[unlikely]] return; }
L_004D0B08:
    st32((c.r[17].w[0] + 16u), 0u);
    c.f[4] = 0u;
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[3] = fp::sub(c.f[3], c.f[2]);
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    set32(c.r[2], 0u + 1u);
    c.f[2] = fp::sqrt(c.f[2]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[4]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004D0B60; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D0B60:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_004D0B74; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004D0B8C; } }
L_004D0B74:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_004D0B8C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004D0BBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.budget -= 7;
L_004D0BBC:
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[3] = fp::mul(c.f[21], c.f[20]);
    c.budget -= 8;
L_004D0BDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[17].w[0] + 16u));
    c.f[1] = 0u;
    c.f[4] = ld32((c.r[17].w[0] + 20u));
    c.facc = fp::add(c.f[1], c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    st32((c.r[17].w[0] + 16u), c.f[1]);
    c.f[0] = fp::min(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.budget -= 10;
L_004D0C04:
    c.f[5] = ld32((c.r[17].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[5], 0u + 1u);
    c.f[4] = fp::mul(c.f[5], c.f[5]);
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.facc = fp::add(c.f[1], c.f[2]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[3], c.f[5]));
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 336u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 220u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    st32((c.r[3].w[0] + 336u), c.f[1]);
    set32(c.r[2], ld32((c.r[3].w[0] + 220u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0C74u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x004D0C74u) [[unlikely]] return; }
L_004D0C74:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.f[12] = c.f[22];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0C84u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x004D0C84u) [[unlikely]] return; }
L_004D0C84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004D0CB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004D0D2C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_004D0D14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0CE4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004D0CE4u) [[unlikely]] return; }
L_004D0CE4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0CF4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004D0CF4u) [[unlikely]] return; }
L_004D0CF4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D0D10; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0D10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004D0D10u) [[unlikely]] return; }
L_004D0D10:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_004D0D14:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004D0D30; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0D2Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x004D0D2Cu) [[unlikely]] return; }
L_004D0D2C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004D0D30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004D0D50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004D0DD8; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0])));  goto L_004D0DB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0D88u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004D0D88u) [[unlikely]] return; }
L_004D0D88:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0D98u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004D0D98u) [[unlikely]] return; }
L_004D0D98:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D0DB4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0DB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004D0DB4u) [[unlikely]] return; }
L_004D0DB4:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_004D0DB8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_004D0DD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0DC8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004D0DC8u) [[unlikely]] return; }
L_004D0DC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0DD8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004D0DD8u) [[unlikely]] return; }
L_004D0DD8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004D0E00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[16].w[0]);  if (t) { goto L_004D0E38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0E28u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004D0E28u) [[unlikely]] return; }
L_004D0E28:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0E38u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004D0E38u) [[unlikely]] return; }
L_004D0E38:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004D0E50:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_004D0E60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004D0EAC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[17].w[0] + 24u);
    set32(c.r[5], c.r[5].w[0] + 3248u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0E94u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x004D0E94u) [[unlikely]] return; }
L_004D0E94:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004D0EB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0EACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004D0EACu) [[unlikely]] return; }
L_004D0EAC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004D0EB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004D0ED0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[7], 0u + 4u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[8], 0u + 2u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[5].w[0] + 4192u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], c.r[6].w[0] + 3248u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0F38u); set32(c.r[4], c.r[21].w[0] + 24u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x004D0F38u) [[unlikely]] return; }
L_004D0F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0F40u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004D0F40u) [[unlikely]] return; }
L_004D0F40:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
L_004D0F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0F54u); st32((c.r[29].w[0] + 156u), c.r[22].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004D0F54u) [[unlikely]] return; }
L_004D0F54:
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[4], 0u + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0F64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004D0F64u) [[unlikely]] return; }
L_004D0F64:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[16], c.r[19].w[0] << 2);  goto L_004D0F80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0F78u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 131u, depth + 1u); else { c.pc = 0x0029A0D0u; return; } if (c.pc != 0x004D0F78u) [[unlikely]] return; }
L_004D0F78:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[19].w[0] << 2);
    c.budget -= 2;
L_004D0F80:
    set32(c.r[2], c.r[21].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[18].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 152u)));  goto L_004D0FF4; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], c.r[21].w[0] + c.r[16].w[0]);  goto L_004D0FD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0FA0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004D0FA0u) [[unlikely]] return; }
L_004D0FA0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0FB0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004D0FB0u) [[unlikely]] return; }
L_004D0FB0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D0FCC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0FCCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004D0FCCu) [[unlikely]] return; }
L_004D0FCC:
    set32(c.r[2], c.r[21].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_004D0FD0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[2].w[0] + 24u), c.r[18].w[0]);  if (t) { goto L_004D0FF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0FE0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004D0FE0u) [[unlikely]] return; }
L_004D0FE0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0FF0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004D0FF0u) [[unlikely]] return; }
L_004D0FF0:
    set32(c.r[4], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_004D0FF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0FFCu);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004D0FFCu) [[unlikely]] return; }
L_004D0FFC:
    set32(c.r[2], c.r[21].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_004D1018; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1014u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 62u, depth + 1u); else { c.pc = 0x002B8980u; return; } if (c.pc != 0x004D1014u) [[unlikely]] return; }
L_004D1014:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_004D1018:
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D0F4Cu | kUnwind; return; } goto L_004D0F4C; }
L_004D1024:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1030u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 22u, depth + 1u); else { c.pc = 0x004243A0u; return; } if (c.pc != 0x004D1030u) [[unlikely]] return; }
L_004D1030:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004D1060:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  goto L_004D1070; }
L_004D1070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_004D10A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1098u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004D1098u) [[unlikely]] return; }
L_004D1098:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D10A8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004D10A8u) [[unlikely]] return; }
L_004D10A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004D10C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1100u); mmi::pminw(c.r[17], c.r[3], c.r[2]);  if (depth < kMaxDepth) unit_00B3(c, 282u, depth + 1u); else { c.pc = 0x003CE3F0u; return; } if (c.pc != 0x004D1100u) [[unlikely]] return; }
L_004D1100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004D1150; } }
L_004D1108:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1118u); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_002F(c, 118u, depth + 1u); else { c.pc = 0x001BDBC0u; return; } if (c.pc != 0x004D1118u) [[unlikely]] return; }
L_004D1118:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_004D11B4; }
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 164u));
    set32(c.r[3], c.r[3].w[0] + 64u);
    c.f[1] = ld32((c.r[2].w[0] + 168u));
    c.f[0] = ld32((c.r[2].w[0] + 160u));
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    c.budget -= 12;
L_004D1150:
    c.r[3].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1108u | kUnwind; return; } goto L_004D1108; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 48u)));  if (t) { goto L_004D1184; } }
L_004D1164:
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1178u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 85u, depth + 1u); else { c.pc = 0x004B8AD0u; return; } if (c.pc != 0x004D1178u) [[unlikely]] return; }
L_004D1178:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], c.r[3].w[0] + 4u);
    c.budget -= 3;
L_004D1184:
    set32(c.r[5], ld32((c.r[18].w[0] + 44u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1164u | kUnwind; return; } goto L_004D1164; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004D11B4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004D11D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D11E8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00F4(c, 123u, depth + 1u); else { c.pc = 0x004D10C0u; return; } if (c.pc != 0x004D11E8u) [[unlikely]] return; }
L_004D11E8:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.r[6].d[0] = c.r[2].d[0] << 56;
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1208u); set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00F4(c, 275u, depth + 1u); else { c.pc = 0x004D2F00u; return; } if (c.pc != 0x004D1208u) [[unlikely]] return; }
L_004D1208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 5u);  if (t) { goto L_004D1228; } }
L_004D1210:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1224u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 67u, depth + 1u); else { c.pc = 0x004B8820u; return; } if (c.pc != 0x004D1224u) [[unlikely]] return; }
L_004D1224:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004D1228:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 48u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1210u | kUnwind; return; } goto L_004D1210; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004D1258; } }
L_004D1240:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1254u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00EE(c, 67u, depth + 1u); else { c.pc = 0x004B8820u; return; } if (c.pc != 0x004D1254u) [[unlikely]] return; }
L_004D1254:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004D1258:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004D1278; }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 48u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1240u | kUnwind; return; } goto L_004D1240; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004D1278:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004D1290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D12ACu); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_00D0(c, 508u, depth + 1u); else { c.pc = 0x00443AD0u; return; } if (c.pc != 0x004D12ACu) [[unlikely]] return; }
L_004D12AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004D12D0; } }
L_004D12B4:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D12CCu); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_00D0(c, 504u, depth + 1u); else { c.pc = 0x00443990u; return; } if (c.pc != 0x004D12CCu) [[unlikely]] return; }
L_004D12CC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004D12D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D12B4u | kUnwind; return; } goto L_004D12B4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004D1300:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004D1344; } }
L_004D1324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D132Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x004D132Cu) [[unlikely]] return; }
L_004D132C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 424u)));
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_004D1344; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004D1358; } }
L_004D1344:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1324u | kUnwind; return; } goto L_004D1324; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D1358:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004D1370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    st32((c.r[29].w[0] + 44u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_004D13B4; } }
L_004D13AC:
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 2;
L_004D13B4:
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[6].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 36u)));  goto L_004D13D4; }
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D13ACu | kUnwind; return; } goto L_004D13AC; }
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 1;
L_004D13D4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[7].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004D13F4; }
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 20u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D13F0u); set32(c.r[7], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x004D13F0u) [[unlikely]] return; }
L_004D13F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004D13F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004D1400:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    st32((c.r[29].w[0] + 40u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[29].w[0] + 28u), c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 28u)));  if (t) { goto L_004D1440; } }
L_004D1438:
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 2;
L_004D1440:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[6].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 32u)));  goto L_004D1460; }
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1438u | kUnwind; return; } goto L_004D1438; }
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 1;
L_004D1460:
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_004D147C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D147Cu); set32(c.r[4], c.r[4].w[0] + 20u);  if (depth < kMaxDepth) unit_0009(c, 310u, depth + 1u); else { c.pc = 0x00127460u; return; } if (c.pc != 0x004D147Cu) [[unlikely]] return; }
L_004D147C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004D1490:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004D14C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[28].w[0] - 32272u));  if (t) { goto L_004D14C4; } }
L_004D14C0:
    c.f[20] = ld32((c.r[28].w[0] - 31936u));
    c.budget -= 1;
L_004D14C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 16u)));  if (t) { goto L_004D1558; } }
L_004D14CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[5], ld32((c.r[4].w[0])));  if (t) { goto L_004D154C; } }
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[20], c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 1160u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].d[0] = c.r[18].d[0] << 32;  goto L_004D1550; }
    set32(c.r[3], ld32((c.r[5].w[0] + 416u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004D154C; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004D154C; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1200u));
    set32(c.r[2], 0u - 17u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 1200u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D154Cu); set32(c.r[4], ld32((c.r[2].w[0] + 12u)));  if (depth < kMaxDepth) unit_00FD(c, 564u, depth + 1u); else { c.pc = 0x004F79C0u; return; } if (c.pc != 0x004D154Cu) [[unlikely]] return; }
L_004D154C:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_004D1550:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[18], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_004D1558:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[18].d[0] << 32;
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D14CCu | kUnwind; return; } goto L_004D14CC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004D15A0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[2].d[0] << 56;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D15F0u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00F4(c, 260u, depth + 1u); else { c.pc = 0x004D23A0u; return; } if (c.pc != 0x004D15F0u) [[unlikely]] return; }
L_004D15F0:
    set32(c.r[23], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004D178C; } }
L_004D15FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[5], c.r[17].w[0] << 2);
    set32(c.r[19], c.r[17].w[0] + 1u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[20], ld32((c.r[3].w[0] + 52u)));
    st32((c.r[3].w[0] + 52u), c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.f[1] = ld32((c.r[3].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_004D178C; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D1788; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 424u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004D1788; } }
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_004D1788; } }
    c.r[1].d[0] = c.r[20].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;  goto L_004D16FC; }
    set32(c.r[22], c.r[19].w[0] - c.r[20].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004D16E8; } }
L_004D1678:
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[5], c.r[3].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[18], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[18].w[0] + 424u)));
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_004D16E8; }
    set32(c.r[5], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D16ACu); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 85u, depth + 1u); else { c.pc = 0x003CCC70u; return; } if (c.pc != 0x004D16ACu) [[unlikely]] return; }
L_004D16AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D16E4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] + 48u);  if (t) { goto L_004D16CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_004D16D0; } }
L_004D16CC:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_004D16D0:
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] + 4552u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D16E4u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00CA(c, 253u, depth + 1u); else { c.pc = 0x00429960u; return; } if (c.pc != 0x004D16E4u) [[unlikely]] return; }
L_004D16E4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_004D16E8:
    c.r[3].d[0] = c.r[19].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[20].w[0] + c.r[19].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1678u | kUnwind; return; } goto L_004D1678; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D1788; } }
L_004D16FC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004D1788; } }
    set32(c.r[22], c.r[20].w[0] - c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_004D177C; } }
L_004D1710:
    set32(c.r[3], c.r[19].w[0] + c.r[20].w[0]);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[18], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[18].w[0] + 424u)));
    c.budget -= 8;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_004D177C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1740u); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 85u, depth + 1u); else { c.pc = 0x003CCC70u; return; } if (c.pc != 0x004D1740u) [[unlikely]] return; }
L_004D1740:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D1778; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] + 48u);  if (t) { goto L_004D1760; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_004D1764; } }
L_004D1760:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_004D1764:
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] + 4560u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1778u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00CA(c, 253u, depth + 1u); else { c.pc = 0x00429960u; return; } if (c.pc != 0x004D1778u) [[unlikely]] return; }
L_004D1778:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_004D177C:
    c.r[3].d[0] = c.r[20].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1710u | kUnwind; return; } goto L_004D1710; }
L_004D1788:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004D178C:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D15FCu | kUnwind; return; } goto L_004D15FC; }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004D17D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 104u)));
    c.f[2] = c.r[2].w[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.f[0] = 0u;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004D182C; } }
L_004D17EC:
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004D1814; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_004D182C; }
L_004D1814:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004D1828; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.f[2] = c.f[1];
    c.budget -= 2;
L_004D1828:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_004D182C:
    c.r[3].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 108u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D17ECu | kUnwind; return; } goto L_004D17EC; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004D1840:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1864u); set32(c.r[4], c.r[4].w[0] + 4569u);  if (depth < kMaxDepth) unit_000B(c, 413u, depth + 1u); else { c.pc = 0x0012FF20u; return; } if (c.pc != 0x004D1864u) [[unlikely]] return; }
L_004D1864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004D1904; } }
L_004D186C:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_004D1904; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D188Cu); set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F5(c, 544u, depth + 1u); else { c.pc = 0x004D73B0u; return; } if (c.pc != 0x004D188Cu) [[unlikely]] return; }
L_004D188C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (t) { goto L_004D18A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[2].w[0] + 96u));  if (t) { goto L_004D18A8; } }
L_004D18A4:
    c.f[12] = ld32((c.r[28].w[0] - 29052u));
    c.budget -= 1;
L_004D18A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D18B0u);  if (depth < kMaxDepth) unit_00AF(c, 471u, depth + 1u); else { c.pc = 0x003BFC50u; return; } if (c.pc != 0x004D18B0u) [[unlikely]] return; }
L_004D18B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D18BCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00EE(c, 276u, depth + 1u); else { c.pc = 0x004BA5B0u; return; } if (c.pc != 0x004D18BCu) [[unlikely]] return; }
L_004D18BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D18C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x004D18C4u) [[unlikely]] return; }
L_004D18C4:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 412u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D18E8u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00BB(c, 47u, depth + 1u); else { c.pc = 0x003EC8C0u; return; } if (c.pc != 0x004D18E8u) [[unlikely]] return; }
L_004D18E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D18F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 365u, depth + 1u); else { c.pc = 0x004BB850u; return; } if (c.pc != 0x004D18F0u) [[unlikely]] return; }
L_004D18F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D18F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EF(c, 160u, depth + 1u); else { c.pc = 0x004BDC40u; return; } if (c.pc != 0x004D18F8u) [[unlikely]] return; }
L_004D18F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1900u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 356u, depth + 1u); else { c.pc = 0x004BB6A0u; return; } if (c.pc != 0x004D1900u) [[unlikely]] return; }
L_004D1900:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004D1904:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D186Cu | kUnwind; return; } goto L_004D186C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004D1930:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[12];  if (t) { goto L_004D1994; } }
L_004D195C:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[18], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 6;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_004D1988; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1980u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0018(c, 300u, depth + 1u); else { c.pc = 0x001627A0u; return; } if (c.pc != 0x004D1980u) [[unlikely]] return; }
L_004D1980:
    st32((c.r[18].w[0] + 132u), c.f[20]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_004D1988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1990u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_00EE(c, 171u, depth + 1u); else { c.pc = 0x004B9630u; return; } if (c.pc != 0x004D1990u) [[unlikely]] return; }
L_004D1990:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004D1994:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D195Cu | kUnwind; return; } goto L_004D195C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004D19D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004D1A10; } }
L_004D19EC:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_004D1A10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1A0Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 300u, depth + 1u); else { c.pc = 0x001627A0u; return; } if (c.pc != 0x004D1A0Cu) [[unlikely]] return; }
L_004D1A0C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004D1A10:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D19ECu | kUnwind; return; } goto L_004D19EC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004D1A40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004D1AA8; } }
L_004D1A60:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[18], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 6;
    if (c.r[18].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_004D1AA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1A80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 301u, depth + 1u); else { c.pc = 0x004BA930u; return; } if (c.pc != 0x004D1A80u) [[unlikely]] return; }
L_004D1A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1A88u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 139u, depth + 1u); else { c.pc = 0x003C0EE0u; return; } if (c.pc != 0x004D1A88u) [[unlikely]] return; }
L_004D1A88:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004D1AA4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1AA4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004D1AA4u) [[unlikely]] return; }
L_004D1AA4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004D1AA8:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1A60u | kUnwind; return; } goto L_004D1A60; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004D1AD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004D1B4C; } }
L_004D1AF4:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[4], 0u + 200u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1B0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004D1B0Cu) [[unlikely]] return; }
L_004D1B0C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_004D1B28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1B20u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 152u, depth + 1u); else { c.pc = 0x003C1000u; return; } if (c.pc != 0x004D1B20u) [[unlikely]] return; }
L_004D1B20:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_004D1B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1B30u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 140u, depth + 1u); else { c.pc = 0x003C0EF0u; return; } if (c.pc != 0x004D1B30u) [[unlikely]] return; }
L_004D1B30:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1B3Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 300u, depth + 1u); else { c.pc = 0x001627A0u; return; } if (c.pc != 0x004D1B3Cu) [[unlikely]] return; }
L_004D1B3C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1B48u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 301u, depth + 1u); else { c.pc = 0x004BA930u; return; } if (c.pc != 0x004D1B48u) [[unlikely]] return; }
L_004D1B48:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004D1B4C:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1AF4u | kUnwind; return; } goto L_004D1AF4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004D1B80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004D1BD8; } }
L_004D1BA0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1BB0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EF(c, 89u, depth + 1u); else { c.pc = 0x004BD1F0u; return; } if (c.pc != 0x004D1BB0u) [[unlikely]] return; }
L_004D1BB0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  goto L_004D1BD0; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1BCCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004D1BCCu) [[unlikely]] return; }
L_004D1BCC:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.budget -= 1;
L_004D1BD0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_004D1BD8:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[17].d[0] << 32;
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1BA0u | kUnwind; return; } goto L_004D1BA0; }
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[4], c.r[16].w[0] + 64u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1C1Cu); st32((c.r[16].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_00D0(c, 508u, depth + 1u); else { c.pc = 0x00443AD0u; return; } if (c.pc != 0x004D1C1Cu) [[unlikely]] return; }
L_004D1C1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004D1C40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004D1C88; } }
L_004D1C60:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1C70u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EF(c, 218u, depth + 1u); else { c.pc = 0x004BE770u; return; } if (c.pc != 0x004D1C70u) [[unlikely]] return; }
L_004D1C70:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1C7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 143u, depth + 1u); else { c.pc = 0x004D1370u; return; } if (c.pc != 0x004D1C7Cu) [[unlikely]] return; }
L_004D1C7C:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[17], c.r[3].w[0] + 4u);
    c.budget -= 3;
L_004D1C88:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[17].d[0] << 32;
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1C60u | kUnwind; return; } goto L_004D1C60; }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004D1CE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004D1D28; } }
L_004D1D0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1D14u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x004D1D14u) [[unlikely]] return; }
L_004D1D14:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_004D1D28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004D1D38; } }
L_004D1D28:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1D0Cu | kUnwind; return; } goto L_004D1D0C; }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004D1D38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004D1D60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004D1DD4; } }
L_004D1D8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1D94u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x004D1D94u) [[unlikely]] return; }
L_004D1D94:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[3].w[0] + 1u);  goto L_004D1DB0; }
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_004D1DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1DB8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 141u, depth + 1u); else { c.pc = 0x003B9868u; return; } if (c.pc != 0x004D1DB8u) [[unlikely]] return; }
L_004D1DB8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_004D1DD4; }
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1DCCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x004D1DCCu) [[unlikely]] return; }
L_004D1DCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_004D1DE4; } }
L_004D1DD4:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1D8Cu | kUnwind; return; } goto L_004D1D8C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D1DE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004D1E00:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  goto L_004D1E14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004D1E18; } }
L_004D1E14:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_004D1E18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004D1E20:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 112u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1E54u); set32(c.r[4], 0u + 1216u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004D1E54u) [[unlikely]] return; }
L_004D1E54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D1E70; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 112u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1E70u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F0(c, 62u, depth + 1u); else { c.pc = 0x004C0780u; return; } if (c.pc != 0x004D1E70u) [[unlikely]] return; }
L_004D1E70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1E84u); set32(c.r[5], c.r[5].w[0] + 4620u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004D1E84u) [[unlikely]] return; }
L_004D1E84:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  goto L_004D1EFC; }
    set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1E98u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x004D1E98u) [[unlikely]] return; }
L_004D1E98:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] + 100u);  goto L_004D1EB0; }
    set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1EACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 221u, depth + 1u); else { c.pc = 0x004E5FA0u; return; } if (c.pc != 0x004D1EACu) [[unlikely]] return; }
L_004D1EAC:
    set32(c.r[3], c.r[2].w[0] + 100u);
    c.budget -= 1;
L_004D1EB0:
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_004D1EC4; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_004D1EC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1ECCu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004D1ECCu) [[unlikely]] return; }
L_004D1ECC:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1ED8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 89u, depth + 1u); else { c.pc = 0x004B8C60u; return; } if (c.pc != 0x004D1ED8u) [[unlikely]] return; }
L_004D1ED8:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1EE4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00EE(c, 98u, depth + 1u); else { c.pc = 0x004B8D70u; return; } if (c.pc != 0x004D1EE4u) [[unlikely]] return; }
L_004D1EE4:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1EF4u); set32(c.r[4], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004D1EF4u) [[unlikely]] return; }
L_004D1EF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 96u)));  if (t) { goto L_004D1F90; } }
L_004D1EFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1F04u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x004D1F04u) [[unlikely]] return; }
L_004D1F04:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[2].w[0] + 100u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1F18u); set32(c.r[6], c.r[6].w[0] + 4628u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x004D1F18u) [[unlikely]] return; }
L_004D1F18:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_004D1F2C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_004D1F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1F34u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004D1F34u) [[unlikely]] return; }
L_004D1F34:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1F40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004D1F40u) [[unlikely]] return; }
L_004D1F40:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1F4Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 89u, depth + 1u); else { c.pc = 0x004B8C60u; return; } if (c.pc != 0x004D1F4Cu) [[unlikely]] return; }
L_004D1F4C:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1F58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 98u, depth + 1u); else { c.pc = 0x004B8D70u; return; } if (c.pc != 0x004D1F58u) [[unlikely]] return; }
L_004D1F58:
    set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1F64u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x004D1F64u) [[unlikely]] return; }
L_004D1F64:
    set32(c.r[4], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 124u)));  if (t) { goto L_004D1F80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_004D1F84; } }
L_004D1F80:
    set32(c.r[5], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_004D1F84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1F8Cu); set32(c.r[4], c.r[3].w[0] + 48u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004D1F8Cu) [[unlikely]] return; }
L_004D1F8C:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 1;
L_004D1F90:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 97u);  goto L_004D1FA0; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_004D1FA0:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1FACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00EF(c, 263u, depth + 1u); else { c.pc = 0x004BED10u; return; } if (c.pc != 0x004D1FACu) [[unlikely]] return; }
L_004D1FAC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 12u)));  goto L_004D1FE8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_004D1FD4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1FD0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004D1FD0u) [[unlikely]] return; }
L_004D1FD0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_004D1FD4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1FE0u); st32((c.r[29].w[0] + 124u), 0u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004D1FE0u) [[unlikely]] return; }
L_004D1FE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004D20B8; } }
L_004D1FE8:
    set32(c.r[4], c.r[18].w[0] + 4u);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 124u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2004u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x004D2004u) [[unlikely]] return; }
L_004D2004:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], c.r[18].w[0] + 20u);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 124u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2024u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x004D2024u) [[unlikely]] return; }
L_004D2024:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[4], c.r[18].w[0] + 36u);
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 124u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2044u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x004D2044u) [[unlikely]] return; }
L_004D2044:
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_004D209C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] + 4632u);
    set32(c.r[6], c.r[6].w[0] + 4646u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2080u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 81u, depth + 1u); else { c.pc = 0x003F91B0u; return; } if (c.pc != 0x004D2080u) [[unlikely]] return; }
L_004D2080:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D208Cu); set32(c.r[4], ld32((c.r[2].w[0] + 68u)));  if (depth < kMaxDepth) unit_00BE(c, 226u, depth + 1u); else { c.pc = 0x003FA630u; return; } if (c.pc != 0x004D208Cu) [[unlikely]] return; }
L_004D208C:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 92u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_004D20A4; } }
L_004D209C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D20A4u);  if (depth < kMaxDepth) unit_00BE(c, 80u, depth + 1u); else { c.pc = 0x003F9190u; return; } if (c.pc != 0x004D20A4u) [[unlikely]] return; }
L_004D20A4:
    set32(c.r[16], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D20B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004D20B4u) [[unlikely]] return; }
L_004D20B4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004D20B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004D20E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004D21F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 23800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D210Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00F4(c, 193u, depth + 1u); else { c.pc = 0x004D1B80u; return; } if (c.pc != 0x004D210Cu) [[unlikely]] return; }
L_004D210C:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2118u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00D0(c, 513u, depth + 1u); else { c.pc = 0x00443BA0u; return; } if (c.pc != 0x004D2118u) [[unlikely]] return; }
L_004D2118:
    set32(c.r[2], c.r[16].w[0] + 36u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 20u);  goto L_004D215C; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D2158; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D2158; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D2158; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D2158; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D2158; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2158u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004D2158u) [[unlikely]] return; }
L_004D2158:
    set32(c.r[2], c.r[16].w[0] + 20u);
    c.budget -= 1;
L_004D215C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004D219C; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D2198; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D2198; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D2198; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D2198; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D2198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2198u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004D2198u) [[unlikely]] return; }
L_004D2198:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004D219C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_004D21DC; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D21D8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D21D8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D21D8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D21D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D21D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D21D8u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004D21D8u) [[unlikely]] return; }
L_004D21D8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_004D21DC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004D21F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D21F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004D21F0u) [[unlikely]] return; }
L_004D21F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004D21F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004D2210:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 23800u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[19].w[0] + 4u);
    c.budget -= 15;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004D227C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2254u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004D2254u) [[unlikely]] return; }
L_004D2254:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_004D226C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2268u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004D2268u) [[unlikely]] return; }
L_004D2268:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_004D226C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_004D2280; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D227Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004D227Cu) [[unlikely]] return; }
L_004D227C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_004D2280:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[17], c.r[19].w[0] + 20u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_004D22CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D22A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004D22A4u) [[unlikely]] return; }
L_004D22A4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_004D22BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D22B8u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004D22B8u) [[unlikely]] return; }
L_004D22B8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_004D22BC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[17].w[0]), c.r[2].w[0]);  goto L_004D22D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D22CCu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004D22CCu) [[unlikely]] return; }
L_004D22CC:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_004D22D0:
    set32(c.r[3], 0u - 1u);
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[16], c.r[19].w[0] + 36u);
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_004D231C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D22F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004D22F4u) [[unlikely]] return; }
L_004D22F4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_004D230C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2308u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004D2308u) [[unlikely]] return; }
L_004D2308:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_004D230C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_004D2320; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D231Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004D231Cu) [[unlikely]] return; }
L_004D231C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_004D2320:
    set32(c.r[4], c.r[19].w[0] + 64u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2338u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00D0(c, 519u, depth + 1u); else { c.pc = 0x00443CA0u; return; } if (c.pc != 0x004D2338u) [[unlikely]] return; }
L_004D2338:
    st32((c.r[19].w[0] + 112u), c.r[18].w[0]);
    set32(c.r[4], c.r[19].w[0] + 4u);
    st32((c.r[19].w[0] + 52u), 0u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2350u); st32((c.r[19].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x004D2350u) [[unlikely]] return; }
L_004D2350:
    set32(c.r[4], c.r[19].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D235Cu); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x004D235Cu) [[unlikely]] return; }
L_004D235C:
    set32(c.r[4], c.r[19].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2368u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x004D2368u) [[unlikely]] return; }
L_004D2368:
    set32(c.r[3], ld32((c.r[28].w[0] - 26060u)));
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 100u)));
    st32((c.r[19].w[0] + 60u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004D23A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
L_004D23C8:
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_004D23EC; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_004D23EC:
    c.r[1].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_004D2EDC; }
    c.r[1].d[0] = c.r[8].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  goto L_004D2428; }
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.r[6].d[0] = c.r[19].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2420u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_00F4(c, 295u, depth + 1u); else { c.pc = 0x004D3930u; return; } if (c.pc != 0x004D2420u) [[unlikely]] return; }
L_004D2420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D2ED8; } }
L_004D2428:
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));
    c.budget -= 3;
    { const bool t = c.r[8].sd[0] >= 0; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  if (t) { goto L_004D243C; } }
    set32(c.r[3], c.r[8].w[0] + 3u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_004D243C:
    set32(c.r[4], ld32((c.r[28].w[0] - 29448u)));
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], 0u + 5u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_004D2470; } }
    set32(c.r[4], 0u - 4u);
    c.budget -= 1;
L_004D2470:
    set32(c.r[3], c.r[8].w[0] << 1);
    c.r[2].d[0] = c.r[17].d[0] << 32;
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_004D2490; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_004D2490:
    c.r[5].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[4], 0u + 5u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[28].w[0] - 29448u), c.r[2].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_004D24D0; } }
    set32(c.r[4], 0u - 4u);
    st32((c.r[28].w[0] - 29448u), c.r[4].w[0]);
    c.budget -= 2;
L_004D24D0:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = c.r[7].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[7].d[0] = c.r[19].d[0] << 56;
    set32(c.r[16], c.r[2].w[0] - 4u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D24FCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 290u, depth + 1u); else { c.pc = 0x004D33C0u; return; } if (c.pc != 0x004D24FCu) [[unlikely]] return; }
L_004D24FC:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[20].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[12], 0u + 1u);
    set32(c.r[10], 0u + 12u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = ld32((c.r[5].w[0] + 1160u));
    set32(c.r[8], ld32((c.r[5].w[0] + 424u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 7u);  if (t) { goto L_004D2534; } }
L_004D252C:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[20], c.r[4].w[0] + 4u);
    c.budget -= 2;
L_004D2534:
    c.r[4].d[0] = c.r[20].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[9], ld32((c.r[4].w[0] + 424u)));
    c.budget -= 6;
    { const bool t = c.r[9].d[0] != c.r[7].d[0]; c.f[0] = ld32((c.r[4].w[0] + 1160u));  if (t) { goto L_004D2554; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_004D2610; } }
L_004D2554:
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[7].d[0]) { c.r[11].d[0] = ld8((c.r[4].w[0] + 1200u));  goto L_004D2564; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_004D2610; } }
L_004D2564:
    c.r[11].d[0] = c.r[11].d[0] << 62;
    c.r[11].d[0] = c.r[11].d[0] >> 63;
    c.r[13].d[0] = c.r[11].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[13].d[0] == 0ull;  if (t) { goto L_004D25B4; } }
    c.r[11].d[0] = ld8((c.r[5].w[0] + 1200u));
    c.r[11].d[0] = c.r[11].d[0] << 62;
    c.r[11].d[0] = c.r[11].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_004D25B4; } }
    set32(c.r[11], ld32((c.r[4].w[0] + 132u)));
    set32(c.r[9], ld32((c.r[5].w[0] + 132u)));
    c.f[1] = ld32((c.r[11].w[0] + 28u));
    c.f[0] = ld32((c.r[9].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[13].d[0] = c.r[12].d[0] + 0ull;  if (t) { goto L_004D25AC; } }
    c.r[13].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D25AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[13].d[0] & 255ull;  if (t) { goto L_004D2610; } }
L_004D25B4:
    c.budget -= 2;
    if (c.r[13].d[0] == 0ull) { c.r[11].d[0] = ld8((c.r[5].w[0] + 1200u));  goto L_004D25C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_004D2610; } }
L_004D25C4:
    c.r[11].d[0] = c.r[11].d[0] << 62;
    c.r[11].d[0] = c.r[11].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_004D25DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_004D2610; } }
L_004D25DC:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[10].d[0];  if (t) { goto L_004D25EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_004D2610; } }
L_004D25EC:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[10].d[0];  if (t) { goto L_004D25FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_004D2610; } }
L_004D25FC:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[9].d[0] = c.r[12].d[0] + 0ull;  if (t) { goto L_004D260C; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D260C:
    c.r[9].d[0] = c.r[9].d[0] & 255ull;
    c.budget -= 1;
L_004D2610:
    c.budget -= 2;
    if (c.r[9].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D252Cu | kUnwind; return; } goto L_004D252C; }
    c.r[12].d[0] = c.r[20].d[0] << 32;
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 7u);
    set32(c.r[13], 0u + 12u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 7;
L_004D2634:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.r[9].d[0] = c.r[12].d[0] ^ c.r[3].d[0];
    c.r[9].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[9].d[0] = c.r[9].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[9].d[0] == 0ull) { c.r[7].d[0] = c.r[20].d[0] << 32;  goto L_004D2740; }
    set32(c.r[11], ld32((c.r[3].w[0])));
    set32(c.r[9], ld32((c.r[5].w[0] + 424u)));
    set32(c.r[10], ld32((c.r[11].w[0] + 424u)));
    c.f[1] = ld32((c.r[11].w[0] + 1160u));
    c.budget -= 6;
    { const bool t = c.r[10].d[0] != c.r[8].d[0]; c.f[0] = ld32((c.r[5].w[0] + 1160u));  if (t) { goto L_004D2670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_004D272C; } }
L_004D2670:
    c.budget -= 2;
    if (c.r[9].d[0] != c.r[8].d[0]) { c.r[14].d[0] = ld8((c.r[11].w[0] + 1200u));  goto L_004D2680; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004D272C; } }
L_004D2680:
    c.r[14].d[0] = c.r[14].d[0] << 62;
    c.r[14].d[0] = c.r[14].d[0] >> 63;
    c.r[15].d[0] = c.r[14].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_004D26D0; } }
    c.r[14].d[0] = ld8((c.r[5].w[0] + 1200u));
    c.r[14].d[0] = c.r[14].d[0] << 62;
    c.r[14].d[0] = c.r[14].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[14].d[0] == 0ull;  if (t) { goto L_004D26D0; } }
    set32(c.r[10], ld32((c.r[11].w[0] + 132u)));
    set32(c.r[9], ld32((c.r[5].w[0] + 132u)));
    c.f[1] = ld32((c.r[10].w[0] + 28u));
    c.f[0] = ld32((c.r[9].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[11].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_004D26C8; } }
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D26C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[11].d[0] & 255ull;  if (t) { goto L_004D272C; } }
L_004D26D0:
    c.budget -= 2;
    if (c.r[15].d[0] == 0ull) { c.r[11].d[0] = ld8((c.r[5].w[0] + 1200u));  goto L_004D26E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004D272C; } }
L_004D26E0:
    c.r[11].d[0] = c.r[11].d[0] << 62;
    c.r[11].d[0] = c.r[11].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_004D26F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_004D272C; } }
L_004D26F8:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[13].d[0];  if (t) { goto L_004D2708; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_004D272C; } }
L_004D2708:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[13].d[0];  if (t) { goto L_004D2718; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004D272C; } }
L_004D2718:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[9].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_004D2728; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D2728:
    c.r[9].d[0] = c.r[9].d[0] & 255ull;
    c.budget -= 1;
L_004D272C:
    c.r[9].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;
    c.r[9].d[0] = c.r[9].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[9].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2634u | kUnwind; return; } goto L_004D2634; }
    c.r[7].d[0] = c.r[20].d[0] << 32;
    c.budget -= 1;
L_004D2740:
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[1].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[7].d[0] = c.r[20].d[0] << 32;  goto L_004D29A0; }
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.r[12].d[0] = c.r[16].d[0] << 32;
    set32(c.r[20], c.r[7].w[0] + 4u);
    set32(c.r[9], 0u + 1u);
    set32(c.r[8], 0u + 12u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[7].w[0]), c.r[5].w[0]);
    set32(c.r[11], 0u + 7u);
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[4].w[0]);  if (t) { goto L_004D278C; } }
L_004D2784:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[20], c.r[4].w[0] + 4u);
    c.budget -= 2;
L_004D278C:
    c.r[4].d[0] = c.r[20].d[0] << 32;
    set32(c.r[5], ld32((c.r[12].w[0])));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[13], ld32((c.r[5].w[0] + 424u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 424u)));
    c.f[0] = ld32((c.r[4].w[0] + 1160u));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != c.r[11].d[0]; c.f[2] = ld32((c.r[5].w[0] + 1160u));  if (t) { goto L_004D27B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004D2874; } }
L_004D27B8:
    c.budget -= 2;
    if (c.r[13].d[0] != c.r[11].d[0]) { c.r[7].d[0] = ld8((c.r[4].w[0] + 1200u));  goto L_004D27C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_004D2874; } }
L_004D27C8:
    c.r[7].d[0] = c.r[7].d[0] << 62;
    c.r[7].d[0] = c.r[7].d[0] >> 63;
    c.r[14].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[14].d[0] == 0ull;  if (t) { goto L_004D2818; } }
    c.r[7].d[0] = ld8((c.r[5].w[0] + 1200u));
    c.r[7].d[0] = c.r[7].d[0] << 62;
    c.r[7].d[0] = c.r[7].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_004D2818; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 132u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 132u)));
    c.f[1] = ld32((c.r[7].w[0] + 28u));
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[14].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_004D2810; } }
    c.r[14].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D2810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[14].d[0] & 255ull;  if (t) { goto L_004D2874; } }
L_004D2818:
    c.budget -= 2;
    if (c.r[14].d[0] == 0ull) { c.r[7].d[0] = ld8((c.r[5].w[0] + 1200u));  goto L_004D2828; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_004D2874; } }
L_004D2828:
    c.r[7].d[0] = c.r[7].d[0] << 62;
    c.r[7].d[0] = c.r[7].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_004D2840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004D2874; } }
L_004D2840:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[8].d[0];  if (t) { goto L_004D2850; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004D2874; } }
L_004D2850:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != c.r[8].d[0];  if (t) { goto L_004D2860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_004D2874; } }
L_004D2860:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[6].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_004D2870; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D2870:
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 1;
L_004D2874:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2784u | kUnwind; return; } goto L_004D2784; }
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.budget -= 1;
L_004D2880:
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[7], ld32((c.r[6].w[0] - 4u)));
    set32(c.r[3], c.r[6].w[0] - 4u);
    set32(c.r[6], ld32((c.r[7].w[0] + 424u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != c.r[11].d[0]; c.f[0] = ld32((c.r[7].w[0] + 1160u));  if (t) { goto L_004D28A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004D295C; } }
L_004D28A0:
    c.budget -= 2;
    if (c.r[13].d[0] != c.r[11].d[0]) { c.r[14].d[0] = ld8((c.r[7].w[0] + 1200u));  goto L_004D28B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_004D295C; } }
L_004D28B0:
    c.r[14].d[0] = c.r[14].d[0] << 62;
    c.r[14].d[0] = c.r[14].d[0] >> 63;
    c.r[15].d[0] = c.r[14].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_004D2900; } }
    c.r[14].d[0] = ld8((c.r[5].w[0] + 1200u));
    c.r[14].d[0] = c.r[14].d[0] << 62;
    c.r[14].d[0] = c.r[14].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[14].d[0] == 0ull;  if (t) { goto L_004D2900; } }
    set32(c.r[14], ld32((c.r[7].w[0] + 132u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 132u)));
    c.f[1] = ld32((c.r[14].w[0] + 28u));
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[15].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_004D28F8; } }
    c.r[15].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D28F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[15].d[0] & 255ull;  if (t) { goto L_004D295C; } }
L_004D2900:
    c.budget -= 2;
    if (c.r[15].d[0] == 0ull) { c.r[14].d[0] = ld8((c.r[5].w[0] + 1200u));  goto L_004D2910; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_004D295C; } }
L_004D2910:
    c.r[14].d[0] = c.r[14].d[0] << 62;
    c.r[14].d[0] = c.r[14].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[14].d[0] == 0ull;  if (t) { goto L_004D2928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004D295C; } }
L_004D2928:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[8].d[0];  if (t) { goto L_004D2938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004D295C; } }
L_004D2938:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != c.r[8].d[0];  if (t) { goto L_004D2948; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_004D295C; } }
L_004D2948:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[6].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_004D2958; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D2958:
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 1;
L_004D295C:
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[6].d[0] != 0ull) { c.r[6].d[0] = c.r[3].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2880u | kUnwind; return; } goto L_004D2880; }
    c.r[14].d[0] = c.r[20].d[0] << 32;
    c.r[13].d[0] = c.r[3].d[0] << 32;
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 32);
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 32);
    c.r[6].d[0] = c.r[14].d[0] < c.r[13].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_004D299C; } }
    st32((c.r[14].w[0]), c.r[7].w[0]);
    set32(c.r[20], c.r[14].w[0] + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[13].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D278Cu | kUnwind; return; } goto L_004D278C; } }
L_004D299C:
    c.r[7].d[0] = c.r[20].d[0] << 32;
    c.budget -= 1;
L_004D29A0:
    c.r[6].d[0] = c.r[17].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[7].d[0] != c.r[6].d[0]) { set32(c.r[2], c.r[7].w[0] - c.r[6].w[0]);  goto L_004D2E4C; }
    c.r[3].d[0] = c.r[16].d[0] << 32;
    st32((c.r[7].w[0]), c.r[5].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = c.r[18].d[0] << 32;
    set32(c.r[10], ld32((c.r[6].w[0])));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[11], ld32((c.r[4].w[0] - 4u)));
    set32(c.r[3], c.r[4].w[0] - 4u);
    set32(c.r[9], ld32((c.r[10].w[0] + 424u)));
    c.f[2] = ld32((c.r[10].w[0] + 1160u));
    c.f[0] = ld32((c.r[11].w[0] + 1160u));
    set32(c.r[6], ld32((c.r[11].w[0] + 424u)));
    set32(c.r[4], 0u + 7u);
    c.budget -= 16;
    { const bool t = c.r[9].d[0] != c.r[4].d[0]; set32(c.r[20], c.r[7].w[0] + 4u);  if (t) { goto L_004D29FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004D2AB8; } }
L_004D29FC:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[4].d[0]) { c.r[4].d[0] = ld8((c.r[10].w[0] + 1200u));  goto L_004D2A0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004D2AB8; } }
L_004D2A0C:
    c.r[4].d[0] = c.r[4].d[0] << 62;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004D2A5C; } }
    c.r[4].d[0] = ld8((c.r[11].w[0] + 1200u));
    c.r[4].d[0] = c.r[4].d[0] << 62;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D2A5C; } }
    set32(c.r[5], ld32((c.r[10].w[0] + 132u)));
    set32(c.r[4], ld32((c.r[11].w[0] + 132u)));
    c.f[1] = ld32((c.r[5].w[0] + 28u));
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[6], 0u + 1u);  if (t) { goto L_004D2A54; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D2A54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_004D2AB8; } }
L_004D2A5C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = ld8((c.r[11].w[0] + 1200u));  goto L_004D2A6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004D2AB8; } }
L_004D2A6C:
    c.r[4].d[0] = c.r[4].d[0] << 62;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 12u);  goto L_004D2A84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004D2AB8; } }
L_004D2A84:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[4].d[0];  if (t) { goto L_004D2A94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004D2AB8; } }
L_004D2A94:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_004D2AA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004D2AB8; } }
L_004D2AA4:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u + 1u);  if (t) { goto L_004D2AB4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D2AB4:
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_004D2AB8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.r[5].d[0] = c.r[20].d[0] << 32;  goto L_004D2BFC; }
    c.r[8].d[0] = c.r[18].d[0] << 32;
    set32(c.r[13], 0u + 1u);
    set32(c.r[5], 0u + 7u);
    set32(c.r[12], 0u + 12u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);  if (t) { goto L_004D2AE4; } }
L_004D2ADC:
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[20], c.r[6].w[0] + 4u);
    c.budget -= 2;
L_004D2AE4:
    c.r[6].d[0] = c.r[20].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[6].d[0] == c.r[8].d[0]) { c.r[6].d[0] = c.r[20].d[0] << 32;  goto L_004D2BD4; }
    set32(c.r[7], ld32((c.r[6].w[0])));
    set32(c.r[6], ld32((c.r[7].w[0] + 424u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != c.r[5].d[0]; c.f[0] = ld32((c.r[7].w[0] + 1160u));  if (t) { goto L_004D2B0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004D2BC8; } }
L_004D2B0C:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[5].d[0]) { c.r[14].d[0] = ld8((c.r[10].w[0] + 1200u));  goto L_004D2B1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004D2BC8; } }
L_004D2B1C:
    c.r[14].d[0] = c.r[14].d[0] << 62;
    c.r[14].d[0] = c.r[14].d[0] >> 63;
    c.r[15].d[0] = c.r[14].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_004D2B6C; } }
    c.r[14].d[0] = ld8((c.r[7].w[0] + 1200u));
    c.r[14].d[0] = c.r[14].d[0] << 62;
    c.r[14].d[0] = c.r[14].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[14].d[0] == 0ull;  if (t) { goto L_004D2B6C; } }
    set32(c.r[6], ld32((c.r[7].w[0] + 132u)));
    set32(c.r[7], ld32((c.r[10].w[0] + 132u)));
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    c.f[1] = ld32((c.r[7].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[14].d[0] = c.r[13].d[0] + 0ull;  if (t) { goto L_004D2B64; } }
    c.r[14].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D2B64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[14].d[0] & 255ull;  if (t) { goto L_004D2BC8; } }
L_004D2B6C:
    c.budget -= 2;
    if (c.r[15].d[0] == 0ull) { c.r[7].d[0] = ld8((c.r[7].w[0] + 1200u));  goto L_004D2B7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004D2BC8; } }
L_004D2B7C:
    c.r[7].d[0] = c.r[7].d[0] << 62;
    c.r[7].d[0] = c.r[7].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_004D2B94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004D2BC8; } }
L_004D2B94:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[12].d[0];  if (t) { goto L_004D2BA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004D2BC8; } }
L_004D2BA4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[12].d[0];  if (t) { goto L_004D2BB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004D2BC8; } }
L_004D2BB4:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[6].d[0] = c.r[13].d[0] + 0ull;  if (t) { goto L_004D2BC4; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D2BC4:
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 1;
L_004D2BC8:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[6].d[0] = c.r[20].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2ADCu | kUnwind; return; } goto L_004D2ADC; }
    c.r[6].d[0] = c.r[20].d[0] << 32;
    c.budget -= 1;
L_004D2BD4:
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[1].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004D2BF8; } }
    set32(c.r[4], ld32((c.r[6].w[0])));
    st32((c.r[6].w[0]), c.r[11].w[0]);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.budget -= 3;
L_004D2BF8:
    c.r[5].d[0] = c.r[20].d[0] << 32;
    c.budget -= 1;
L_004D2BFC:
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[1].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[17].d[0] = c.r[20].d[0] << 32;  goto L_004D2E44; }
    c.r[11].d[0] = c.r[17].d[0] << 32;
    set32(c.r[7], 0u + 1u);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    set32(c.r[6], 0u + 12u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 7u);  if (t) { goto L_004D2C38; } }
L_004D2C30:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[20], c.r[4].w[0] + 4u);
    c.budget -= 2;
L_004D2C38:
    c.r[4].d[0] = c.r[20].d[0] << 32;
    set32(c.r[10], ld32((c.r[11].w[0])));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[12], ld32((c.r[4].w[0])));
    set32(c.r[13], ld32((c.r[10].w[0] + 424u)));
    c.f[0] = ld32((c.r[12].w[0] + 1160u));
    set32(c.r[4], ld32((c.r[12].w[0] + 424u)));
    c.budget -= 9;
    { const bool t = c.r[13].d[0] != c.r[9].d[0]; c.f[2] = ld32((c.r[10].w[0] + 1160u));  if (t) { goto L_004D2C64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004D2D20; } }
L_004D2C64:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[9].d[0]) { c.r[5].d[0] = ld8((c.r[10].w[0] + 1200u));  goto L_004D2C74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_004D2D20; } }
L_004D2C74:
    c.r[5].d[0] = c.r[5].d[0] << 62;
    c.r[5].d[0] = c.r[5].d[0] >> 63;
    c.r[14].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[14].d[0] == 0ull;  if (t) { goto L_004D2CC4; } }
    c.r[5].d[0] = ld8((c.r[12].w[0] + 1200u));
    c.r[5].d[0] = c.r[5].d[0] << 62;
    c.r[5].d[0] = c.r[5].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004D2CC4; } }
    set32(c.r[5], ld32((c.r[10].w[0] + 132u)));
    set32(c.r[4], ld32((c.r[12].w[0] + 132u)));
    c.f[1] = ld32((c.r[5].w[0] + 28u));
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[14].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004D2CBC; } }
    c.r[14].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D2CBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[14].d[0] & 255ull;  if (t) { goto L_004D2D20; } }
L_004D2CC4:
    c.budget -= 2;
    if (c.r[14].d[0] == 0ull) { c.r[5].d[0] = ld8((c.r[12].w[0] + 1200u));  goto L_004D2CD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_004D2D20; } }
L_004D2CD4:
    c.r[5].d[0] = c.r[5].d[0] << 62;
    c.r[5].d[0] = c.r[5].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004D2CEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004D2D20; } }
L_004D2CEC:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != c.r[6].d[0];  if (t) { goto L_004D2CFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004D2D20; } }
L_004D2CFC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { goto L_004D2D0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_004D2D20; } }
L_004D2D0C:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004D2D1C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D2D1C:
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_004D2D20:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2C30u | kUnwind; return; } goto L_004D2C30; }
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.budget -= 1;
L_004D2D2C:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[4].w[0] - 4u)));
    set32(c.r[3], c.r[4].w[0] - 4u);
    set32(c.r[4], ld32((c.r[5].w[0] + 424u)));
    c.budget -= 6;
    { const bool t = c.r[13].d[0] != c.r[9].d[0]; c.f[0] = ld32((c.r[5].w[0] + 1160u));  if (t) { goto L_004D2D4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004D2E08; } }
L_004D2D4C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[9].d[0]) { c.r[14].d[0] = ld8((c.r[10].w[0] + 1200u));  goto L_004D2D5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_004D2E08; } }
L_004D2D5C:
    c.r[14].d[0] = c.r[14].d[0] << 62;
    c.r[14].d[0] = c.r[14].d[0] >> 63;
    c.r[15].d[0] = c.r[14].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_004D2DAC; } }
    c.r[14].d[0] = ld8((c.r[5].w[0] + 1200u));
    c.r[14].d[0] = c.r[14].d[0] << 62;
    c.r[14].d[0] = c.r[14].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[14].d[0] == 0ull;  if (t) { goto L_004D2DAC; } }
    set32(c.r[14], ld32((c.r[10].w[0] + 132u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 132u)));
    c.f[1] = ld32((c.r[14].w[0] + 28u));
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[15].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004D2DA4; } }
    c.r[15].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D2DA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[15].d[0] & 255ull;  if (t) { goto L_004D2E08; } }
L_004D2DAC:
    c.budget -= 2;
    if (c.r[15].d[0] == 0ull) { c.r[14].d[0] = ld8((c.r[5].w[0] + 1200u));  goto L_004D2DBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_004D2E08; } }
L_004D2DBC:
    c.r[14].d[0] = c.r[14].d[0] << 62;
    c.r[14].d[0] = c.r[14].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[14].d[0] == 0ull;  if (t) { goto L_004D2DD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004D2E08; } }
L_004D2DD4:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != c.r[6].d[0];  if (t) { goto L_004D2DE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004D2E08; } }
L_004D2DE4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { goto L_004D2DF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_004D2E08; } }
L_004D2DF4:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004D2E04; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D2E04:
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_004D2E08:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.r[4].d[0] = c.r[3].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2D2Cu | kUnwind; return; } goto L_004D2D2C; }
    c.r[13].d[0] = c.r[20].d[0] << 32;
    c.r[10].d[0] = c.r[3].d[0] << 32;
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 32);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    c.r[4].d[0] = c.r[13].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004D2E40; } }
    st32((c.r[13].w[0]), c.r[5].w[0]);
    set32(c.r[20], c.r[13].w[0] + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[10].w[0]), c.r[12].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2C38u | kUnwind; return; } goto L_004D2C38; } }
L_004D2E40:
    c.r[17].d[0] = c.r[20].d[0] << 32;
    c.budget -= 1;
L_004D2E44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D23C8u | kUnwind; return; } goto L_004D23C8; } }
L_004D2E4C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_004D2E5C; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004D2E5C:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_004D2E80; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004D2E80:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] << 32;  goto L_004D2EB4; }
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[5].d[0] = c.r[20].d[0] << 32;
    c.r[6].d[0] = c.r[19].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2EA8u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_00F4(c, 260u, depth + 1u); else { c.pc = 0x004D23A0u; return; } if (c.pc != 0x004D2EA8u) [[unlikely]] return; }
L_004D2EA8:
    c.r[17].d[0] = c.r[20].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D23C8u | kUnwind; return; } goto L_004D23C8; } }
L_004D2EB4:
    c.r[4].d[0] = c.r[20].d[0] << 32;
    c.r[6].d[0] = c.r[19].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2ECCu); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_00F4(c, 260u, depth + 1u); else { c.pc = 0x004D23A0u; return; } if (c.pc != 0x004D2ECCu) [[unlikely]] return; }
L_004D2ECC:
    c.r[18].d[0] = c.r[20].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D23C8u | kUnwind; return; } goto L_004D23C8; } }
L_004D2ED8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_004D2EDC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004D2F00:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
L_004D2F28:
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_004D2F4C; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_004D2F4C:
    c.r[1].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_004D33A0; }
    c.r[1].d[0] = c.r[8].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  goto L_004D2F88; }
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.r[6].d[0] = c.r[19].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2F80u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_00F4(c, 292u, depth + 1u); else { c.pc = 0x004D3820u; return; } if (c.pc != 0x004D2F80u) [[unlikely]] return; }
L_004D2F80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D339C; } }
L_004D2F88:
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));
    c.budget -= 3;
    { const bool t = c.r[8].sd[0] >= 0; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  if (t) { goto L_004D2F9C; } }
    set32(c.r[3], c.r[8].w[0] + 3u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_004D2F9C:
    set32(c.r[4], ld32((c.r[28].w[0] - 29452u)));
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], 0u + 5u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_004D2FD0; } }
    set32(c.r[4], 0u - 4u);
    c.budget -= 1;
L_004D2FD0:
    set32(c.r[3], c.r[8].w[0] << 1);
    c.r[2].d[0] = c.r[17].d[0] << 32;
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_004D2FF0; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_004D2FF0:
    c.r[5].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[4], 0u + 5u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[28].w[0] - 29452u), c.r[2].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_004D3030; } }
    set32(c.r[4], 0u - 4u);
    st32((c.r[28].w[0] - 29452u), c.r[4].w[0]);
    c.budget -= 2;
L_004D3030:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = c.r[7].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[7].d[0] = c.r[19].d[0] << 56;
    set32(c.r[16], c.r[2].w[0] - 4u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D305Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 291u, depth + 1u); else { c.pc = 0x004D3720u; return; } if (c.pc != 0x004D305Cu) [[unlikely]] return; }
L_004D305C:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[20].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.f[1] = ld32((c.r[5].w[0] + 1156u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 32);  if (t) { goto L_004D3080; } }
L_004D3078:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[20], c.r[4].w[0] + 4u);
    c.budget -= 2;
L_004D3080:
    c.r[9].d[0] = c.r[20].d[0] << 32;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[9].w[0])));
    c.f[0] = ld32((c.r[4].w[0] + 1156u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[20].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3078u | kUnwind; return; } goto L_004D3078; }
    set32(c.r[7], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 2;
L_004D30A4:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.r[6].d[0] = c.r[9].d[0] ^ c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[6].d[0] == 0ull) { c.r[7].d[0] = c.r[20].d[0] << 32;  goto L_004D30E8; }
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.f[0] = ld32((c.r[6].w[0] + 1156u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004D30D8; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D30D8:
    c.r[6].d[0] = c.r[8].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D30A4u | kUnwind; return; } goto L_004D30A4; }
    c.r[7].d[0] = c.r[20].d[0] << 32;
    c.budget -= 1;
L_004D30E8:
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[1].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[7].d[0] = c.r[20].d[0] << 32;  goto L_004D31B0; }
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.r[11].d[0] = c.r[16].d[0] << 32;
    set32(c.r[20], c.r[7].w[0] + 4u);
    set32(c.r[9], 0u + 1u);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    st32((c.r[7].w[0]), c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[4].w[0]);  if (t) { goto L_004D3128; } }
L_004D3120:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[20], c.r[4].w[0] + 4u);
    c.budget -= 2;
L_004D3128:
    c.r[4].d[0] = c.r[20].d[0] << 32;
    set32(c.r[5], ld32((c.r[11].w[0])));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.f[1] = ld32((c.r[5].w[0] + 1156u));
    c.f[0] = ld32((c.r[4].w[0] + 1156u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[20].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3120u | kUnwind; return; } goto L_004D3120; }
    c.r[7].d[0] = c.r[3].d[0] << 32;
    c.budget -= 1;
L_004D3150:
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    set32(c.r[10], ld32((c.r[7].w[0] - 4u)));
    c.f[0] = ld32((c.r[10].w[0] + 1156u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[7].w[0] - 4u);  if (t) { goto L_004D3170; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D3170:
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { c.r[7].d[0] = c.r[3].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3150u | kUnwind; return; } goto L_004D3150; }
    c.r[8].d[0] = c.r[20].d[0] << 32;
    c.r[7].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[6].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_004D31AC; } }
    st32((c.r[8].w[0]), c.r[10].w[0]);
    set32(c.r[20], c.r[8].w[0] + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3128u | kUnwind; return; } goto L_004D3128; } }
L_004D31AC:
    c.r[7].d[0] = c.r[20].d[0] << 32;
    c.budget -= 1;
L_004D31B0:
    c.r[6].d[0] = c.r[17].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[7].d[0] != c.r[6].d[0]) { set32(c.r[2], c.r[7].w[0] - c.r[6].w[0]);  goto L_004D3310; }
    c.r[3].d[0] = c.r[16].d[0] << 32;
    st32((c.r[7].w[0]), c.r[5].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[20], c.r[7].w[0] + 4u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[7], ld32((c.r[4].w[0] - 4u)));
    c.f[1] = ld32((c.r[3].w[0] + 1156u));
    c.f[0] = ld32((c.r[7].w[0] + 1156u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[6], c.r[4].w[0] - 4u);  if (t) { goto L_004D3258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[20].d[0] << 32;  if (t) { goto L_004D3210; } }
L_004D3204:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[20], c.r[3].w[0] + 4u);
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.budget -= 3;
L_004D3210:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[5].d[0] = c.r[20].d[0] << 32;  goto L_004D3234; }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.f[0] = ld32((c.r[3].w[0] + 1156u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = c.r[20].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3204u | kUnwind; return; } goto L_004D3204; }
    c.r[5].d[0] = c.r[20].d[0] << 32;
    c.budget -= 1;
L_004D3234:
    c.r[4].d[0] = c.r[6].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[1].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] << 32;  goto L_004D325C; }
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[5].w[0]), c.r[7].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_004D3258:
    c.r[4].d[0] = c.r[20].d[0] << 32;
    c.budget -= 1;
L_004D325C:
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[17].d[0] = c.r[20].d[0] << 32;  goto L_004D3308; }
    c.r[8].d[0] = c.r[17].d[0] << 32;
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);  if (t) { goto L_004D328C; } }
L_004D3284:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[20], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_004D328C:
    c.r[3].d[0] = c.r[20].d[0] << 32;
    set32(c.r[4], ld32((c.r[8].w[0])));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[9], ld32((c.r[3].w[0])));
    c.f[1] = ld32((c.r[4].w[0] + 1156u));
    c.f[0] = ld32((c.r[9].w[0] + 1156u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004D32B4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D32B4:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[20].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3284u | kUnwind; return; } goto L_004D3284; }
L_004D32C0:
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[3].w[0] - 4u)));
    c.f[0] = ld32((c.r[5].w[0] + 1156u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[6], c.r[3].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D32C0u | kUnwind; return; } goto L_004D32C0; } }
    c.r[4].d[0] = c.r[20].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004D3304; } }
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[20], c.r[4].w[0] + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[9].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D328Cu | kUnwind; return; } goto L_004D328C; } }
L_004D3304:
    c.r[17].d[0] = c.r[20].d[0] << 32;
    c.budget -= 1;
L_004D3308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2F28u | kUnwind; return; } goto L_004D2F28; } }
L_004D3310:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_004D3320; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004D3320:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_004D3344; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004D3344:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] << 32;  goto L_004D3378; }
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[5].d[0] = c.r[20].d[0] << 32;
    c.r[6].d[0] = c.r[19].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D336Cu); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_00F4(c, 275u, depth + 1u); else { c.pc = 0x004D2F00u; return; } if (c.pc != 0x004D336Cu) [[unlikely]] return; }
L_004D336C:
    c.r[17].d[0] = c.r[20].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2F28u | kUnwind; return; } goto L_004D2F28; } }
L_004D3378:
    c.r[4].d[0] = c.r[20].d[0] << 32;
    c.r[6].d[0] = c.r[19].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3390u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_00F4(c, 275u, depth + 1u); else { c.pc = 0x004D2F00u; return; } if (c.pc != 0x004D3390u) [[unlikely]] return; }
L_004D3390:
    c.r[18].d[0] = c.r[20].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2F28u | kUnwind; return; } goto L_004D2F28; } }
L_004D339C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_004D33A0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004D33C0:
    set32(c.r[11], ld32((c.r[6].w[0])));
    set32(c.r[3], 0u + 7u);
    set32(c.r[12], ld32((c.r[4].w[0])));
    set32(c.r[10], ld32((c.r[11].w[0] + 424u)));
    c.f[3] = ld32((c.r[12].w[0] + 1160u));
    set32(c.r[9], ld32((c.r[12].w[0] + 424u)));
    c.budget -= 8;
    { const bool t = c.r[10].d[0] != c.r[3].d[0]; c.f[4] = ld32((c.r[11].w[0] + 1160u));  if (t) { goto L_004D33E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004D34A4; } }
L_004D33E8:
    c.budget -= 2;
    if (c.r[9].d[0] != c.r[3].d[0]) { c.r[3].d[0] = ld8((c.r[11].w[0] + 1200u));  goto L_004D33F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004D34A4; } }
L_004D33F8:
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[7].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_004D3448; } }
    c.r[3].d[0] = ld8((c.r[12].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D3448; } }
    set32(c.r[7], ld32((c.r[11].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[12].w[0] + 132u)));
    c.f[1] = ld32((c.r[7].w[0] + 28u));
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[8], 0u + 1u);  if (t) { goto L_004D3440; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D3440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[8].d[0] & 255ull;  if (t) { goto L_004D34A4; } }
L_004D3448:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[12].w[0] + 1200u));  goto L_004D3458; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004D34A4; } }
L_004D3458:
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 12u);  goto L_004D3470; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004D34A4; } }
L_004D3470:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[3].d[0];  if (t) { goto L_004D3480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004D34A4; } }
L_004D3480:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[3].d[0];  if (t) { goto L_004D3490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004D34A4; } }
L_004D3490:
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_004D34A0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D34A0:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_004D34A4:
    c.r[7].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[13], 0u + 7u);
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[8].d[0] = c.r[7].d[0] ^ 1ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0] + 424u)));
    c.f[2] = ld32((c.r[7].w[0] + 1160u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[13].d[0]; c.r[8].d[0] = c.r[8].d[0] & 255ull;  if (t) { goto L_004D34D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_004D3590; } }
L_004D34D4:
    c.budget -= 2;
    if (c.r[10].d[0] != c.r[13].d[0]) { c.r[13].d[0] = ld8((c.r[7].w[0] + 1200u));  goto L_004D34E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004D3590; } }
L_004D34E4:
    c.r[13].d[0] = c.r[13].d[0] << 62;
    c.r[13].d[0] = c.r[13].d[0] >> 63;
    c.r[14].d[0] = c.r[13].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[14].d[0] == 0ull;  if (t) { goto L_004D3534; } }
    c.r[13].d[0] = ld8((c.r[11].w[0] + 1200u));
    c.r[13].d[0] = c.r[13].d[0] << 62;
    c.r[13].d[0] = c.r[13].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[13].d[0] == 0ull;  if (t) { goto L_004D3534; } }
    set32(c.r[10], ld32((c.r[11].w[0] + 132u)));
    set32(c.r[11], ld32((c.r[7].w[0] + 132u)));
    c.f[0] = ld32((c.r[10].w[0] + 28u));
    c.f[1] = ld32((c.r[11].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[13], 0u + 1u);  if (t) { goto L_004D352C; } }
    c.r[13].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D352C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[13].d[0] & 255ull;  if (t) { goto L_004D3590; } }
L_004D3534:
    c.budget -= 2;
    if (c.r[14].d[0] == 0ull) { c.r[11].d[0] = ld8((c.r[11].w[0] + 1200u));  goto L_004D3544; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004D3590; } }
L_004D3544:
    c.r[11].d[0] = c.r[11].d[0] << 62;
    c.r[11].d[0] = c.r[11].d[0] >> 63;
    c.budget -= 4;
    if (c.r[11].d[0] == 0ull) { set32(c.r[11], 0u + 12u);  goto L_004D355C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_004D3590; } }
L_004D355C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[11].d[0];  if (t) { goto L_004D356C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_004D3590; } }
L_004D356C:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[11].d[0];  if (t) { goto L_004D357C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004D3590; } }
L_004D357C:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[10], 0u + 1u);  if (t) { goto L_004D358C; } }
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D358C:
    c.r[10].d[0] = c.r[10].d[0] & 255ull;
    c.budget -= 1;
L_004D3590:
    c.r[10].d[0] = 0ull < c.r[10].d[0] ? 1ull : 0ull;
    c.r[10].d[0] = c.r[10].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull; c.r[10].d[0] = c.r[10].d[0] & 255ull;  if (t) { goto L_004D35A8; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_004D370C; } }
L_004D35A8:
    c.budget -= 2;
    if (c.r[8].d[0] != 0ull) { set32(c.r[10], 0u + 7u);  goto L_004D35D8; }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_004D35D4; } }
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[4].w[0]), c.r[7].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[12].w[0]);  if (t) { goto L_004D370C; } }
L_004D35D4:
    set32(c.r[10], 0u + 7u);
    c.budget -= 1;
L_004D35D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[10].d[0];  if (t) { goto L_004D35E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004D36A4; } }
L_004D35E8:
    c.budget -= 2;
    if (c.r[9].d[0] != c.r[10].d[0]) { c.r[10].d[0] = ld8((c.r[7].w[0] + 1200u));  goto L_004D35F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004D36A4; } }
L_004D35F8:
    c.r[10].d[0] = c.r[10].d[0] << 62;
    c.r[10].d[0] = c.r[10].d[0] >> 63;
    c.r[11].d[0] = c.r[10].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_004D3648; } }
    c.r[10].d[0] = ld8((c.r[12].w[0] + 1200u));
    c.r[10].d[0] = c.r[10].d[0] << 62;
    c.r[10].d[0] = c.r[10].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_004D3648; } }
    set32(c.r[9], ld32((c.r[7].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[12].w[0] + 132u)));
    c.f[1] = ld32((c.r[9].w[0] + 28u));
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[10], 0u + 1u);  if (t) { goto L_004D3640; } }
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D3640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[10].d[0] & 255ull;  if (t) { goto L_004D36A4; } }
L_004D3648:
    c.budget -= 2;
    if (c.r[11].d[0] == 0ull) { c.r[10].d[0] = ld8((c.r[12].w[0] + 1200u));  goto L_004D3658; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004D36A4; } }
L_004D3658:
    c.r[10].d[0] = c.r[10].d[0] << 62;
    c.r[10].d[0] = c.r[10].d[0] >> 63;
    c.budget -= 4;
    if (c.r[10].d[0] == 0ull) { set32(c.r[10], 0u + 12u);  goto L_004D3670; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004D36A4; } }
L_004D3670:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[10].d[0];  if (t) { goto L_004D3680; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004D36A4; } }
L_004D3680:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[10].d[0];  if (t) { goto L_004D3690; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004D36A4; } }
L_004D3690:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_004D36A0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D36A0:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_004D36A4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D36C4; } }
    c.r[9].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[9].w[0]), c.r[7].w[0]);
    st32((c.r[3].w[0]), c.r[12].w[0]);
    c.budget -= 6;
L_004D36C4:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { c.r[7].d[0] = c.r[4].d[0] << 32;  goto L_004D36F0; }
    c.r[7].d[0] = c.r[5].d[0] << 32;
    c.r[4].d[0] = c.r[6].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_004D370C; } }
L_004D36F0:
    c.r[4].d[0] = c.r[6].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 7;
L_004D370C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004D3720:
    set32(c.r[10], ld32((c.r[4].w[0])));
    set32(c.r[7], ld32((c.r[6].w[0])));
    c.f[1] = ld32((c.r[10].w[0] + 1156u));
    c.f[2] = ld32((c.r[7].w[0] + 1156u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_004D3740; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D3740:
    c.r[7].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[9].d[0] = c.r[7].d[0] & 255ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[8], ld32((c.r[3].w[0])));
    c.f[0] = ld32((c.r[8].w[0] + 1156u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_004D3768; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D3768:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_004D377C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004D3814; } }
L_004D377C:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_004D37A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004D37A8; } }
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[4].w[0]), c.r[8].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[10].w[0]);  if (t) { goto L_004D3814; } }
L_004D37A8:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004D37CC; } }
    c.r[7].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[7].w[0]), c.r[8].w[0]);
    st32((c.r[3].w[0]), c.r[10].w[0]);
    c.budget -= 6;
L_004D37CC:
    c.budget -= 2;
    if (c.r[9].d[0] == 0ull) { c.r[7].d[0] = c.r[4].d[0] << 32;  goto L_004D37F8; }
    c.r[7].d[0] = c.r[5].d[0] << 32;
    c.r[4].d[0] = c.r[6].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_004D3814; } }
L_004D37F8:
    c.r[4].d[0] = c.r[6].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 7;
L_004D3814:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004D3820:
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D3920; } }
    set32(c.r[3], c.r[5].w[0] - 4u);
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004D3920; } }
    c.r[9].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (t) { goto L_004D390C; } }
L_004D3858:
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    c.r[3].d[0] = c.r[10].d[0] ^ c.r[9].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[8].d[0] = c.r[10].d[0] << 32;  goto L_004D38D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[10].w[0] + 4u);  if (t) { goto L_004D38B0; } }
L_004D3878:
    c.r[6].d[0] = c.r[10].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[7], ld32((c.r[8].w[0])));
    c.f[0] = ld32((c.r[6].w[0] + 1156u));
    c.f[1] = ld32((c.r[7].w[0] + 1156u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = c.r[3].d[0] << 32;  goto L_004D38A8; }
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 2;
L_004D38A8:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_004D38B0:
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] ^ c.r[9].d[0];
    c.r[6].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[6].d[0] != 0ull) { c.r[8].d[0] = c.r[3].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3878u | kUnwind; return; } goto L_004D3878; }
    c.r[8].d[0] = c.r[10].d[0] << 32;
    c.budget -= 1;
L_004D38D0:
    c.r[7].d[0] = c.r[4].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[3].d[0] = c.r[8].d[0] ^ c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] << 32;  goto L_004D3904; }
    set32(c.r[6], ld32((c.r[8].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0])));
    st32((c.r[8].w[0]), c.r[3].w[0]);
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.budget -= 5;
L_004D3904:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[4], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_004D390C:
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[10].d[0] = c.r[4].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3858u | kUnwind; return; } goto L_004D3858; }
L_004D3920:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004D3930:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[5].d[0];
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 104u), c.r[4].w[0]);  if (t) { goto L_004D3A80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[5].w[0] - 4u);  if (t) { goto L_004D3A64; } }
L_004D3974:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], c.r[29].w[0] + 120u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3998u); st32((c.r[29].w[0] + 128u), c.f[0]);  if (depth < kMaxDepth) unit_00F4(c, 313u, depth + 1u); else { c.pc = 0x004D3BF0u; return; } if (c.pc != 0x004D3998u) [[unlikely]] return; }
L_004D3998:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D39A4u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_00F4(c, 312u, depth + 1u); else { c.pc = 0x004D3BD0u; return; } if (c.pc != 0x004D39A4u) [[unlikely]] return; }
L_004D39A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 136u);  goto L_004D3A18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D39B4u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_00F4(c, 311u, depth + 1u); else { c.pc = 0x004D3BB0u; return; } if (c.pc != 0x004D39B4u) [[unlikely]] return; }
L_004D39B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_004D3A04; } }
L_004D39BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D39C4u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_00F4(c, 310u, depth + 1u); else { c.pc = 0x004D3BA0u; return; } if (c.pc != 0x004D39C4u) [[unlikely]] return; }
L_004D39C4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D39D0u); set32(c.r[4], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_00F4(c, 310u, depth + 1u); else { c.pc = 0x004D3BA0u; return; } if (c.pc != 0x004D39D0u) [[unlikely]] return; }
L_004D39D0:
    set32(c.r[5], ld32((c.r[20].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D39E0u); set32(c.r[4], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_00F4(c, 309u, depth + 1u); else { c.pc = 0x004D3AB0u; return; } if (c.pc != 0x004D39E0u) [[unlikely]] return; }
L_004D39E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_004D39F8; }
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D39F4u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_00F4(c, 308u, depth + 1u); else { c.pc = 0x004D3AA0u; return; } if (c.pc != 0x004D39F4u) [[unlikely]] return; }
L_004D39F4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_004D39F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3A00u);  if (depth < kMaxDepth) unit_00F4(c, 311u, depth + 1u); else { c.pc = 0x004D3BB0u; return; } if (c.pc != 0x004D3A00u) [[unlikely]] return; }
L_004D3A00:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_004D3A04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3A0Cu); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_00F4(c, 312u, depth + 1u); else { c.pc = 0x004D3BD0u; return; } if (c.pc != 0x004D3A0Cu) [[unlikely]] return; }
L_004D3A0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D39BCu | kUnwind; return; } goto L_004D39BC; } }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 1;
L_004D3A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3A20u); set32(c.r[5], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_00F4(c, 313u, depth + 1u); else { c.pc = 0x004D3BF0u; return; } if (c.pc != 0x004D3A20u) [[unlikely]] return; }
L_004D3A20:
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    c.r[6].d[0] = c.r[17].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[17].d[0] << 32;  goto L_004D3A58; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.budget -= 6;
L_004D3A58:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[17], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 104u), c.r[17].w[0]);
    c.budget -= 3;
L_004D3A64:
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[29].w[0] + 104u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3974u | kUnwind; return; } goto L_004D3974; }
L_004D3A80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004D3AA0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_004D3AB0:
    set32(c.r[7], ld32((c.r[5].w[0] + 424u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 424u)));
    c.f[0] = ld32((c.r[6].w[0] + 1160u));
    set32(c.r[2], 0u + 7u);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; c.f[1] = ld32((c.r[5].w[0] + 1160u));  if (t) { goto L_004D3AD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004D3B94; } }
L_004D3AD0:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[2].d[0] = ld8((c.r[5].w[0] + 1200u));  goto L_004D3AE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004D3B94; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1200u));
    c.budget -= 1;
L_004D3AE4:
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D3B34; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D3B34; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 132u)));
    c.f[1] = ld32((c.r[4].w[0] + 28u));
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004D3B94; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D3B94; } }
L_004D3B34:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[6].w[0] + 1200u));  goto L_004D3B48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004D3B94; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 1200u));
    c.budget -= 1;
L_004D3B48:
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 12u);  goto L_004D3B64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004D3B94; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 1;
L_004D3B64:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_004D3B74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004D3B94; } }
L_004D3B74:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_004D3B84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004D3B94; } }
L_004D3B84:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_004D3B94; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D3B94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004D3BA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_004D3BB0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_004D3BD0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_004D3BF0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_004D3C00:
    c.f[1] = ld32((c.r[4].w[0] + 1228u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004D3C34; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 1872u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 424u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004D3C34; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004D3C34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004D3C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1876u)));
    c.f[12] = ld32((c.r[5].w[0]));
    c.f[13] = ld32((c.r[5].w[0] + 4u));
    c.f[14] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3C6Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 211u, depth + 1u); else { c.pc = 0x0033B1F0u; return; } if (c.pc != 0x004D3C6Cu) [[unlikely]] return; }
L_004D3C6C:
    set32(c.r[4], ld32((c.r[17].w[0] + 1876u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3C78u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 198u, depth + 1u); else { c.pc = 0x0033B0F0u; return; } if (c.pc != 0x004D3C78u) [[unlikely]] return; }
L_004D3C78:
    set32(c.r[4], ld32((c.r[17].w[0] + 1876u)));
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3C90u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 197u, depth + 1u); else { c.pc = 0x0033B0E0u; return; } if (c.pc != 0x004D3C90u) [[unlikely]] return; }
L_004D3C90:
    set32(c.r[4], ld32((c.r[17].w[0] + 1876u)));
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3CA8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 196u, depth + 1u); else { c.pc = 0x0033B0D0u; return; } if (c.pc != 0x004D3CA8u) [[unlikely]] return; }
L_004D3CA8:
    set32(c.r[4], ld32((c.r[17].w[0] + 1876u)));
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3CC0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 179u, depth + 1u); else { c.pc = 0x0033AD90u; return; } if (c.pc != 0x004D3CC0u) [[unlikely]] return; }
L_004D3CC0:
    set32(c.r[4], ld32((c.r[17].w[0] + 1876u)));
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3CD8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 178u, depth + 1u); else { c.pc = 0x0033AD80u; return; } if (c.pc != 0x004D3CD8u) [[unlikely]] return; }
L_004D3CD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004D3CF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 2308u)));
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_004D3E28; }
    c.f[1] = ld32((c.r[18].w[0] + 1228u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004D3E24; } }
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 1872u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_004D3E24; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3D50u); set32(c.r[6], ld32((c.r[3].w[0] + 92u)));  if (depth < kMaxDepth) unit_00B3(c, 85u, depth + 1u); else { c.pc = 0x003CCC70u; return; } if (c.pc != 0x004D3D50u) [[unlikely]] return; }
L_004D3D50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));  goto L_004D3DB8; }
    set32(c.r[2], ld32((c.r[18].w[0] + 1872u)));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[3].w[0] + 1u);  goto L_004D3D74; }
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_004D3D74:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 48u);  if (t) { goto L_004D3D8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_004D3D90; } }
L_004D3D8C:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_004D3D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3D98u); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 122u, depth + 1u); else { c.pc = 0x003CD0C0u; return; } if (c.pc != 0x004D3D98u) [[unlikely]] return; }
L_004D3D98:
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(500ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - 500u);  goto L_004D3DB0; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D3DB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_004D3E24; } }
L_004D3DB8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3DCCu); set32(c.r[17], 0u + 500u);  if (depth < kMaxDepth) unit_00B3(c, 75u, depth + 1u); else { c.pc = 0x003CCAE0u; return; } if (c.pc != 0x004D3DCCu) [[unlikely]] return; }
L_004D3DCC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 132u)));  goto L_004D3DDC; }
    set32(c.r[17], c.r[17].w[0] << 1);
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 2;
L_004D3DDC:
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D3E24; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D3E24; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 92u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3E24u); set32(c.r[7], c.r[18].w[0] + 356u);  if (depth < kMaxDepth) unit_00D3(c, 6u, depth + 1u); else { c.pc = 0x0044C080u; return; } if (c.pc != 0x004D3E24u) [[unlikely]] return; }
L_004D3E24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004D3E28:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004D3E40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 1876u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3E60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x004D3E60u) [[unlikely]] return; }
L_004D3E60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3E6Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 194u, depth + 1u); else { c.pc = 0x0033B0B0u; return; } if (c.pc != 0x004D3E6Cu) [[unlikely]] return; }
L_004D3E6C:
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    st32((c.r[17].w[0] + 12u), 0u);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    st32((c.r[17].w[0] + 28u), 0u);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[17].w[0] + 40u), c.f[0]);
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 56u), 0u);
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[17].w[0] + 56u), c.f[0]);
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 38;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004D3F10:
    set32(c.r[7], ld32((c.r[4].w[0] + 344u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_004D3F90; } }
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 120u), c.f[12]);
    set32(c.r[7], ld32((c.r[4].w[0] + 344u)));
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[3].w[0] + 156u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[3].w[0] + 160u), c.f[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 344u)));
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[3].w[0] + 252u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[3].w[0] + 256u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 344u), c.r[3].w[0]);
    c.budget -= 28;
L_004D3F90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004D3FA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[12] = ld32((c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 1876u)));
    c.f[13] = ld32((c.r[5].w[0] + 4u));
    c.f[14] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3FC8u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_008E(c, 175u, depth + 1u); else { c.pc = 0x0033ABE0u; return; } if (c.pc != 0x004D3FC8u) [[unlikely]] return; }
L_004D3FC8:
    c.f[4] = ld32((c.r[16].w[0] + 1440u));
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    c.f[2] = ld32((c.r[16].w[0] + 1456u));
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[3] = fp::mul(c.f[0], c.f[4]);
    c.f[0] = fp::add(c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[2], c.f[3]);  goto L_004D3FF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { [[clang::musttail]] return unit_00F5(c, 3u, depth); } }
L_004D3FF4:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = ld32((c.r[16].w[0] + 1448u));  [[clang::musttail]] return unit_00F5(c, 2u, depth); }
    [[clang::musttail]] return unit_00F5(c, 1u, depth);
}

}
